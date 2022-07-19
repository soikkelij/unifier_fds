/* File    :  sfun_output_to_console.c
 *
 *      Purpose is to output simulation time to the console for an indicator
 *      when running a model at a command-line using RTW.
 *
 *	This version (v2) prepends a string to the numeric data.
 *	Intended for use with sfun_check_for_nan_inf.c as a unique
 *	identifier within a Simulink model of where Inf's or Nan's show up.
 *
 *      To build:
 *        mex sfun_output_to_console.c
 *
 * Marc Compere
 * CompereM@saic.com
 * created : 28 March 2005
 * modified: 01 January 2006
 *
 * Copyright 2005-2018 Marc Compere
 * Copyright 1990-2002 The MathWorks, Inc.
 * $Revision: 1.27 $
 */


/*
 * You must specify the S_FUNCTION_NAME as the name of your S-function
 * (i.e. replace sfuntmpl_basic with the name of your S-function).
 */

#define S_FUNCTION_NAME  sfun_output_to_console
#define S_FUNCTION_LEVEL 2

#define U0(element) (*uPtrs0[element])  /* Pointer to Input Port0 */
#define U1(element) (*uPtrs1[element])  /* Pointer to Input Port1 */

/*
 * Need to include simstruc.h for the definition of the SimStruct and
 * its associated macro definitions.
 */
#include "simstruc.h"

#define STR1_PID     0
#define STR1(S)      ssGetSFcnParam(S,STR1_PID) /* returns pointer to mxArray */
#define STRBUFLEN    1024


/* Error handling
 * --------------
 *
 * You should use the following technique to report errors encountered within
 * an S-function:
 *
 *       ssSetErrorStatus(S,"Error encountered due to ...");
 *       return;
 *
 * Note that the 2nd argument to ssSetErrorStatus must be persistent memory.
 * It cannot be a local variable. For example the following will cause
 * unpredictable errors:
 *
 *      mdlOutputs()
 *      {
 *         char msg[256];         {ILLEGAL: to fix use "static char msg[256];"}
 *         sprintf(msg,"Error due to %s", string);
 *         ssSetErrorStatus(S,msg);
 *         return;
 *      }
 *
 * See matlabroot/simulink/src/sfuntmpl_doc.c for more details.
 */

/*====================*
 * S-function methods *
 *====================*/

/* Function: mdlInitializeSizes ===============================================
 * Abstract:
 *    The sizes information is used by Simulink to determine the S-function
 *    block's characteristics (number of inputs, outputs, states, etc.).
 */
static void mdlInitializeSizes(SimStruct *S)
{
    /* See sfuntmpl_doc.c for more details on the macros below */

    ssSetNumSFcnParams(S, 1);  /* Number of expected parameters */
    if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {
        /* Return if number of expected != number of actual parameters */
        return;
    }

    ssSetNumContStates(S, 0);
    ssSetNumDiscStates(S, 1); // one state for counter to send console output every N'th majortimestep

    if (!ssSetNumInputPorts(S, 2)) return;
    ssSetInputPortWidth(S, 0, 1); /* first input port must be single timestep counter interval */
    ssSetInputPortWidth(S, 1, DYNAMICALLY_SIZED); /* second input contains N numbers for display in the console */

    ssSetInputPortRequiredContiguous(S, 0, true); /*direct input signal access*/
    ssSetInputPortRequiredContiguous(S, 1, true); /*direct input signal access*/
    /*
     * Set direct feedthrough flag (1=yes, 0=no).
     * A port has direct feedthrough if the input is used in either
     * the mdlOutputs or mdlGetTimeOfNextVarHit functions.
     * See matlabroot/simulink/src/sfuntmpl_directfeed.txt.
     */
    ssSetInputPortDirectFeedThrough(S, 0, 1); /* information from both input ports     */
    ssSetInputPortDirectFeedThrough(S, 1, 1); /* will be used in the mdlOutputs() fcn  */

    if (!ssSetNumOutputPorts(S, 0)) return; /* zero output ports */
    //ssSetOutputPortWidth(S, 0, 1);

    ssSetNumSampleTimes(S, 1);

    /* Take care when specifying exception free code - see sfuntmpl_doc.c */
    ssSetOptions(S,
                 SS_OPTION_WORKS_WITH_CODE_REUSE |
                 SS_OPTION_EXCEPTION_FREE_CODE); //|
                 //SS_OPTION_USE_TLC_WITH_ACCELERATOR);

    ssSetNumRWork(S, 0);
    ssSetNumIWork(S, 0);
    ssSetNumPWork(S, 0);
    ssSetNumModes(S, 0);
    ssSetNumNonsampledZCs(S, 0);

    ssSetOptions(S, 0);

}



/* Function: mdlInitializeSampleTimes =========================================
 * Abstract:
 *    This function is used to specify the sample time(s) for your
 *    S-function. You must register the same number of sample times as
 *    specified in ssSetNumSampleTimes.
 */
static void mdlInitializeSampleTimes(SimStruct *S)
{
    //ssSetSampleTime(S, 0, CONTINUOUS_SAMPLE_TIME);
    ssSetSampleTime(S, 0, INHERITED_SAMPLE_TIME);
    ssSetOffsetTime(S, 0, 0.0);

}



#define MDL_INITIALIZE_CONDITIONS   /* Change to #undef to remove function */
#if defined(MDL_INITIALIZE_CONDITIONS)
  /* Function: mdlInitializeConditions ========================================
   * Abstract:
   *    In this function, you should initialize the continuous and discrete
   *    states for your S-function block.  The initial states are placed
   *    in the state vector, ssGetContStates(S) or ssGetRealDiscStates(S).
   *    You can also perform any other initialization activities that your
   *    S-function may require. Note, this routine will be called at the
   *    start of simulation and if it is present in an enabled subsystem
   *    configured to reset states, it will be call when the enabled subsystem
   *    restarts execution to reset the states.
   */
  static void mdlInitializeConditions(SimStruct *S)
  {
    real_T       *x = ssGetDiscStates(S);
    x[0]=0.0;
  }
#endif /* MDL_INITIALIZE_CONDITIONS */



#define MDL_START  /* Change to #undef to remove function */
#if defined(MDL_START) 
  /* Function: mdlStart =======================================================
   * Abstract:
   *    This function is called once at start of model execution. If you
   *    have states that should be initialized once, this is the place
   *    to do it.
   */
  static void mdlStart(SimStruct *S)
  {
    //printf("\n");
    //printf("sim time t=%15.8f\n",ssGetT(S));
  }
#endif /*  MDL_START */



/* Function: mdlOutputs =======================================================
 * Abstract:
 *    In this function, you compute the outputs of your S-function
 *    block. Generally outputs are placed in the output vector, ssGetY(S).
 */
static void mdlOutputs(SimStruct *S, int_T tid)
{
    const real_T *u0 = (const real_T*) ssGetInputPortSignal(S,0); /* this input port call requires ssSetInputPortRequiredContiguous(S, i, true) (for all appropriate i) in mdlInitializeSizes() */
    const real_T *u1 = (const real_T*) ssGetInputPortSignal(S,1);
    int_T        nu1 = ssGetInputPortWidth(S,1); /* width of DYNAMICALLY_SIZED second input port */
    real_T        *x = ssGetDiscStates(S);
    char               buf[STRBUFLEN];
    int i;
    
    /* Copy the string data from string_array_ptr and place it into buf. */ 
    mxGetString(STR1(S), &buf[0], STRBUFLEN);


    if (ssIsMajorTimeStep(S) && (x[0]>=u0[0]))
    {
      printf("\n%s[",buf);

      for (i=0; i<nu1; i++)
         printf(" %-10.2f",u1[i]);

      printf(" ]");
    }
}


#define MDL_UPDATE  /* Change to #undef to remove function */
#if defined(MDL_UPDATE)
  /* Function: mdlUpdate ======================================================
   * Abstract:
   *    This function is called once for every major integration time step.
   *    Discrete states are typically updated here, but this function is useful
   *    for performing any tasks that should only take place once per
   *    integration step.
   */
  static void mdlUpdate(SimStruct *S, int_T tid)
  {
    const real_T *u0 = (const real_T*) ssGetInputPortSignal(S,0);
    real_T                 *x = ssGetDiscStates(S);

    if (x[0] >= u0[0] )
      x[0]=0.0;

    //ssPrintf("u[0]=%f",u0[0]);

    if ssIsMajorTimeStep(S)
      x[0]=x[0]+1.0;

  }
#endif /* MDL_UPDATE */



#define MDL_DERIVATIVES  /* Change to #undef to remove function */
#if defined(MDL_DERIVATIVES)
  /* Function: mdlDerivatives =================================================
   * Abstract:
   *    In this function, you compute the S-function block's derivatives.
   *    The derivatives are placed in the derivative vector, ssGetdX(S).
   */
  static void mdlDerivatives(SimStruct *S)
  {
  }
#endif /* MDL_DERIVATIVES */



/* Function: mdlTerminate =====================================================
 * Abstract:
 *    In this function, you should perform any actions that are necessary
 *    at the termination of a simulation.  For example, if memory was
 *    allocated in mdlStart, this is the place to free it.
 */
static void mdlTerminate(SimStruct *S)
{
      //printf("\n");
}


/*======================================================*
 * See sfuntmpl_doc.c for the optional S-function methods *
 *======================================================*/

/*=============================*
 * Required S-function trailer *
 *=============================*/

#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif
