/* File:        sfun_joyinfoex.c
 * Description: sfun_joyinfoex.c is a S-function which reads joystick values using the 
 *              JOYINFOEX windows function part of the WinMM library.
 *
 * Output:      1. Current X-coordinate.
 *              2. Current Y-coordinate.
 *              3. Current Z-coordinate.
 *              4. Current R-coordiante. (twist) 
 *              5. First joystick button is pressed.
 *              6. Second joystick button is pressed.
 *              ...
 *              16. Twelth joystick button is pressed
 *
 * Input:       DeviceID. Typically 0 or 1.
 *
 * Usage: 
 *               1. You need to have WinMM.lib (need for building) in the same 
 *                  folder (or you can of course include the path into the build command).
 *               
 *                  The WinMM.lib file is part of the Windows SDK (You can just navigate to the 
 *                  generated Windows Kit folder and search for it and make sure to pick the correct
 *                  file according to your CPU architecture).
 *
 *               2. Run following command on MATLAB terminal:
 *                  mex sfun_joyinfoex.c -lwinmm
 *
 * Author:      Johannes Soikkeli, johannes.soikkeli@gmail.com
 * Version:     1.0 06.05.2022 (Matlab R2021b)
 * Credits: 	Original version by Per Hillerborg (2022). sfun_joystick.zip (https://www.mathworks.com/matlabcentral/fileexchange/47141-sfun_joystick-zip), MATLAB Central File Exchange. Retrieved May 6, 2022.  
 *      
 */

#define S_FUNCTION_NAME  sfun_joyinfoex
#define S_FUNCTION_LEVEL 2

/*
 * Need to include simstruc.h for the definition of the SimStruct and
 * its associated macro definitions.
 */
#include "simstruc.h"
#include <stdio.h>
#include <Windows.h>

JOYINFOEX joy;	// Struct into which joystick state is returned.
MMRESULT rc;	// Return code of function.


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
    ssSetNumSFcnParams(S, 0);  /* Number of expected parameters */
    if (ssGetNumSFcnParams(S) != ssGetSFcnParamsCount(S)) {
        /* Return if number of expected != number of actual parameters */
        return;
    }

    ssSetNumContStates(S, 0);
    ssSetNumDiscStates(S, 0);

    if (!ssSetNumInputPorts(S, 1)) return;
    ssSetInputPortWidth(S, 0, 1);
    ssSetInputPortRequiredContiguous(S, 0, true); /*direct input signal access*/
    /*
     * Set direct feedthrough flag (1=yes, 0=no).
     * A port has direct feedthrough if the input is used in either
     * the mdlOutputs or mdlGetTimeOfNextVarHit functions.
     */
    ssSetInputPortDirectFeedThrough(S, 0, 1);

    if (!ssSetNumOutputPorts(S, 1)) return;
    ssSetOutputPortWidth(S, 0, 16);

    ssSetNumSampleTimes(S, 1);
    ssSetNumRWork(S, 0);
    ssSetNumIWork(S, 0);
    ssSetNumPWork(S, 0);
    ssSetNumModes(S, 0);
    ssSetNumNonsampledZCs(S, 0);

    /* Specify the operating point save/restore compliance to be same as a 
     * built-in block */
    ssSetOperatingPointCompliance(S, USE_DEFAULT_OPERATING_POINT);

    ssSetRuntimeThreadSafetyCompliance(S, RUNTIME_THREAD_SAFETY_COMPLIANCE_TRUE);
    ssSetOptions(S, SS_OPTION_EXCEPTION_FREE_CODE);
}



/* Function: mdlInitializeSampleTimes =========================================
 * Abstract:
 *    This function is used to specify the sample time(s) for your
 *    S-function. You must register the same number of sample times as
 *    specified in ssSetNumSampleTimes.
 */
static void mdlInitializeSampleTimes(SimStruct *S)
{
    ssSetSampleTime(S, 0, INHERITED_SAMPLE_TIME);
    ssSetOffsetTime(S, 0, FIXED_IN_MINOR_STEP_OFFSET);
    ssSetModelReferenceSampleTimeDefaultInheritance(S);      
}

#undef MDL_INITIALIZE_CONDITIONS   /* Change to #undef to remove function */
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
    joy.dwSize = sizeof(joy);
    joy.dwFlags = JOY_RETURNALL;
  }
#endif /*  MDL_START */



/* Function: mdlOutputs =======================================================
 * Abstract:
 *    In this function, you compute the outputs of your S-function
 *    block.
 */
static void mdlOutputs(SimStruct *S, int_T tid)
{
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
    const real_T *u = ssGetInputPortRealSignal(S,0);
    real_T       *y = ssGetOutputPortSignal(S,0);

    unsigned int cmd = (unsigned int)*u;

    UNUSED_ARG(tid); /* not used in single tasking mode */
    
    if ((rc = joyGetPosEx((UINT) cmd, &joy)) != JOYERR_NOERROR) {
		ssWarning(S,"Joystick failed:");
		switch((int) rc) {
			case MMSYSERR_NODRIVER:
                ssWarning(S,"The joystick driver is not present or active on this system! [MMSYSERR_NODRIVER]\n");
			break;
			
			case JOYERR_NOCANDO:
                ssWarning(S,"Some system service for joystick support is not present or active on this system! [JOYERR_NOCANDO]\n");
			break;
			
			case MMSYSERR_INVALPARAM:
			case JOYERR_PARMS:
                ssWarning(S,"Invalid 'joystickId' passed! [MMSYSERR_INVALPARAM or JOYERR_PARMS]\n");
			break;

			case JOYERR_UNPLUGGED:
                ssWarning(S,"The specified joystick is not connected to the system! [JOYERR_UNPLUGGED]\n");
			break;

			default:
				ssWarning(S,"Unknown failure. \n");
		}
    }
    /* Assign output*/
    y[0] = (real_T) joy.dwXpos;
    y[1] = (real_T) joy.dwYpos;
    y[2] = (real_T) joy.dwZpos;
    y[3] = (real_T) joy.dwRpos;
    y[4] = (real_T)(joy.dwButtons & JOY_BUTTON1) ? 1 : 0;
	y[5] = (real_T)(joy.dwButtons & JOY_BUTTON2) ? 1 : 0;
	y[6] = (real_T)(joy.dwButtons & JOY_BUTTON3) ? 1 : 0;
	y[7] = (real_T)(joy.dwButtons & JOY_BUTTON4) ? 1 : 0;
    y[8] = (real_T)(joy.dwButtons & JOY_BUTTON5) ? 1 : 0;
	y[9] = (real_T)(joy.dwButtons & JOY_BUTTON6) ? 1 : 0;
	y[10] = (real_T)(joy.dwButtons & JOY_BUTTON7) ? 1 : 0;
	y[11] = (real_T)(joy.dwButtons & JOY_BUTTON8) ? 1 : 0;
    y[12] = (real_T)(joy.dwButtons & JOY_BUTTON9) ? 1 : 0;
	y[13] = (real_T)(joy.dwButtons & JOY_BUTTON10) ? 1 : 0;
	y[14] = (real_T)(joy.dwButtons & JOY_BUTTON11) ? 1 : 0;
	y[15] = (real_T)(joy.dwButtons & JOY_BUTTON12) ? 1 : 0;
  }
#endif /* MDL_UPDATE */



#undef MDL_DERIVATIVES  /* Change to #undef to remove function */
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
}


/*=============================*
 * Required S-function trailer *
 *=============================*/

#ifdef  MATLAB_MEX_FILE    /* Is this file being compiled as a MEX-file? */
#include "simulink.c"      /* MEX-file interface mechanism */
#else
#include "cg_sfun.h"       /* Code generation registration function */
#endif
