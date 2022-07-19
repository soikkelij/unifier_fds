#include "rt_logging_mmi.h"
#include "UNIFIER_capi.h"
#include <math.h>
#include "UNIFIER.h"
#include "UNIFIER_private.h"
#include "UNIFIER_dt.h"
#include "sfcn_loader_c_api.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , & stopRequested ) ; }
rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 1 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "10.4 (R2021b) 14-May-2021" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 } ; const char * raccelLoadInputsAndAperiodicHitTimes (
SimStruct * S , const char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
#define k3oqqzw2a3 (0.01)
B rtB ; X rtX ; DW rtDW ; PrevZCX rtPrevZCX ; PeriodicIndX rtPeriodicIndX ;
PeriodicRngX rtPeriodicRngX ; static SimStruct model_S ; SimStruct * const
rtS = & model_S ; static real_T ha42vhtlkm ( int32_T n , const real_T x_data
[ ] , int32_T ix0 ) ; static void oqj35cmpwq ( int32_T m , int32_T n ,
int32_T iv0 , real_T tau , real_T C_data [ ] , int32_T ic0 , real_T work_data
[ ] ) ; static void gwwd1o13ju ( real_T A_data [ ] , const int32_T A_size [ 2
] , real_T tau_data [ ] , int32_T * tau_size , int32_T jpvt_data [ ] ,
int32_T jpvt_size [ 2 ] ) ; static void gmaok0xwak ( const real_T A_data [ ]
, const int32_T A_size [ 2 ] , const real_T B_p [ 8 ] , real_T Y_data [ ] ,
int32_T * Y_size ) ; static boolean_T d10bfzk1x4 ( const boolean_T x_data [ ]
, const int32_T * x_size ) ; static void lca5lqssir ( const real_T x [ 5 ] ,
real_T * ex , int32_T * idx ) ; static void bu1ixebwun ( const real_T A_data
[ ] , const int32_T A_size [ 2 ] , const real_T B_data [ ] , real_T C [ 8 ] )
; static real_T agebjvrlnx ( int32_T n , const real_T x_data [ ] , int32_T
ix0 ) ; static void b2ocpympvz ( int32_T m , int32_T n , int32_T iv0 , real_T
tau , real_T C_data [ ] , int32_T ic0 , real_T work_data [ ] ) ; static void
ob4zbf2wmb ( real_T A_data [ ] , const int32_T A_size [ 2 ] , real_T tau_data
[ ] , int32_T * tau_size , int32_T jpvt_data [ ] , int32_T jpvt_size [ 2 ] )
; static void fyjldj202i ( const real_T A_data [ ] , const int32_T A_size [ 2
] , const real_T B_e [ 7 ] , real_T Y_data [ ] , int32_T * Y_size ) ; static
boolean_T ldlcqmqfqw ( const boolean_T x_data [ ] , const int32_T * x_size )
; static void aova43bznr ( const real_T x [ 4 ] , real_T * ex , int32_T * idx
) ; static void o4qizio5qf ( const real_T A_data [ ] , const int32_T A_size [
2 ] , const real_T B_data [ ] , real_T C [ 7 ] ) ;
#ifndef __RTW_UTFREE__  
extern void * utMalloc ( size_t ) ;
#endif
void * rt_TDelayCreateBuf ( int_T numBuffer , int_T bufSz , int_T elemSz ) {
return ( ( void * ) utMalloc ( numBuffer * bufSz * elemSz ) ) ; }
#ifndef __RTW_UTFREE__  
extern void * utMalloc ( size_t ) ; extern void utFree ( void * ) ;
#endif
boolean_T rt_TDelayUpdateTailOrGrowBuf ( int_T * bufSzPtr , int_T * tailPtr ,
int_T * headPtr , int_T * lastPtr , real_T tMinusDelay , real_T * * uBufPtr ,
boolean_T isfixedbuf , boolean_T istransportdelay , int_T * maxNewBufSzPtr )
{ int_T testIdx ; int_T tail = * tailPtr ; int_T bufSz = * bufSzPtr ; real_T
* tBuf = * uBufPtr + bufSz ; real_T * xBuf = ( NULL ) ; int_T numBuffer = 2 ;
if ( istransportdelay ) { numBuffer = 3 ; xBuf = * uBufPtr + 2 * bufSz ; }
testIdx = ( tail < ( bufSz - 1 ) ) ? ( tail + 1 ) : 0 ; if ( ( tMinusDelay <=
tBuf [ testIdx ] ) && ! isfixedbuf ) { int_T j ; real_T * tempT ; real_T *
tempU ; real_T * tempX = ( NULL ) ; real_T * uBuf = * uBufPtr ; int_T
newBufSz = bufSz + 1024 ; if ( newBufSz > * maxNewBufSzPtr ) { *
maxNewBufSzPtr = newBufSz ; } tempU = ( real_T * ) utMalloc ( numBuffer *
newBufSz * sizeof ( real_T ) ) ; if ( tempU == ( NULL ) ) { return ( false )
; } tempT = tempU + newBufSz ; if ( istransportdelay ) tempX = tempT +
newBufSz ; for ( j = tail ; j < bufSz ; j ++ ) { tempT [ j - tail ] = tBuf [
j ] ; tempU [ j - tail ] = uBuf [ j ] ; if ( istransportdelay ) tempX [ j -
tail ] = xBuf [ j ] ; } for ( j = 0 ; j < tail ; j ++ ) { tempT [ j + bufSz -
tail ] = tBuf [ j ] ; tempU [ j + bufSz - tail ] = uBuf [ j ] ; if (
istransportdelay ) tempX [ j + bufSz - tail ] = xBuf [ j ] ; } if ( * lastPtr
> tail ) { * lastPtr -= tail ; } else { * lastPtr += ( bufSz - tail ) ; } *
tailPtr = 0 ; * headPtr = bufSz ; utFree ( uBuf ) ; * bufSzPtr = newBufSz ; *
uBufPtr = tempU ; } else { * tailPtr = testIdx ; } return ( true ) ; } real_T
rt_TDelayInterpolate ( real_T tMinusDelay , real_T tStart , real_T * uBuf ,
int_T bufSz , int_T * lastIdx , int_T oldestIdx , int_T newIdx , real_T
initOutput , boolean_T discrete , boolean_T minorStepAndTAtLastMajorOutput )
{ int_T i ; real_T yout , t1 , t2 , u1 , u2 ; real_T * tBuf = uBuf + bufSz ;
if ( ( newIdx == 0 ) && ( oldestIdx == 0 ) && ( tMinusDelay > tStart ) )
return initOutput ; if ( tMinusDelay <= tStart ) return initOutput ; if ( (
tMinusDelay <= tBuf [ oldestIdx ] ) ) { if ( discrete ) { return ( uBuf [
oldestIdx ] ) ; } else { int_T tempIdx = oldestIdx + 1 ; if ( oldestIdx ==
bufSz - 1 ) tempIdx = 0 ; t1 = tBuf [ oldestIdx ] ; t2 = tBuf [ tempIdx ] ;
u1 = uBuf [ oldestIdx ] ; u2 = uBuf [ tempIdx ] ; if ( t2 == t1 ) { if (
tMinusDelay >= t2 ) { yout = u2 ; } else { yout = u1 ; } } else { real_T f1 =
( t2 - tMinusDelay ) / ( t2 - t1 ) ; real_T f2 = 1.0 - f1 ; yout = f1 * u1 +
f2 * u2 ; } return yout ; } } if ( minorStepAndTAtLastMajorOutput ) { if (
newIdx != 0 ) { if ( * lastIdx == newIdx ) { ( * lastIdx ) -- ; } newIdx -- ;
} else { if ( * lastIdx == newIdx ) { * lastIdx = bufSz - 1 ; } newIdx =
bufSz - 1 ; } } i = * lastIdx ; if ( tBuf [ i ] < tMinusDelay ) { while (
tBuf [ i ] < tMinusDelay ) { if ( i == newIdx ) break ; i = ( i < ( bufSz - 1
) ) ? ( i + 1 ) : 0 ; } } else { while ( tBuf [ i ] >= tMinusDelay ) { i = (
i > 0 ) ? i - 1 : ( bufSz - 1 ) ; } i = ( i < ( bufSz - 1 ) ) ? ( i + 1 ) : 0
; } * lastIdx = i ; if ( discrete ) { double tempEps = ( DBL_EPSILON ) *
128.0 ; double localEps = tempEps * muDoubleScalarAbs ( tBuf [ i ] ) ; if (
tempEps > localEps ) { localEps = tempEps ; } localEps = localEps / 2.0 ; if
( tMinusDelay >= ( tBuf [ i ] - localEps ) ) { yout = uBuf [ i ] ; } else {
if ( i == 0 ) { yout = uBuf [ bufSz - 1 ] ; } else { yout = uBuf [ i - 1 ] ;
} } } else { if ( i == 0 ) { t1 = tBuf [ bufSz - 1 ] ; u1 = uBuf [ bufSz - 1
] ; } else { t1 = tBuf [ i - 1 ] ; u1 = uBuf [ i - 1 ] ; } t2 = tBuf [ i ] ;
u2 = uBuf [ i ] ; if ( t2 == t1 ) { if ( tMinusDelay >= t2 ) { yout = u2 ; }
else { yout = u1 ; } } else { real_T f1 = ( t2 - tMinusDelay ) / ( t2 - t1 )
; real_T f2 = 1.0 - f1 ; yout = f1 * u1 + f2 * u2 ; } } return ( yout ) ; }
real_T look1_plinlcapw ( real_T u0 , const real_T bp0 [ ] , const real_T
table [ ] , uint32_T prevIndex [ ] , uint32_T maxIndex ) { real_T frac ;
real_T y ; real_T yL_0d0 ; uint32_T bpIdx ; if ( u0 <= bp0 [ 0U ] ) { bpIdx =
0U ; frac = 0.0 ; } else if ( u0 < bp0 [ maxIndex ] ) { for ( bpIdx =
prevIndex [ 0U ] ; u0 < bp0 [ bpIdx ] ; bpIdx -- ) { } while ( u0 >= bp0 [
bpIdx + 1U ] ) { bpIdx ++ ; } frac = ( u0 - bp0 [ bpIdx ] ) / ( bp0 [ bpIdx +
1U ] - bp0 [ bpIdx ] ) ; } else { bpIdx = maxIndex ; frac = 0.0 ; } prevIndex
[ 0U ] = bpIdx ; if ( bpIdx == maxIndex ) { y = table [ bpIdx ] ; } else {
yL_0d0 = table [ bpIdx ] ; y = ( table [ bpIdx + 1U ] - yL_0d0 ) * frac +
yL_0d0 ; } return y ; } real_T look2_plinlcpw ( real_T u0 , real_T u1 , const
real_T bp0 [ ] , const real_T bp1 [ ] , const real_T table [ ] , uint32_T
prevIndex [ ] , const uint32_T maxIndex [ ] , uint32_T stride ) { real_T
fractions [ 2 ] ; real_T frac ; real_T yL_0d0 ; real_T yL_0d1 ; uint32_T
bpIndices [ 2 ] ; uint32_T bpIdx ; if ( u0 <= bp0 [ 0U ] ) { bpIdx = 0U ;
frac = 0.0 ; } else if ( u0 < bp0 [ maxIndex [ 0U ] ] ) { for ( bpIdx =
prevIndex [ 0U ] ; u0 < bp0 [ bpIdx ] ; bpIdx -- ) { } while ( u0 >= bp0 [
bpIdx + 1U ] ) { bpIdx ++ ; } frac = ( u0 - bp0 [ bpIdx ] ) / ( bp0 [ bpIdx +
1U ] - bp0 [ bpIdx ] ) ; } else { bpIdx = maxIndex [ 0U ] - 1U ; frac = 1.0 ;
} prevIndex [ 0U ] = bpIdx ; fractions [ 0U ] = frac ; bpIndices [ 0U ] =
bpIdx ; if ( u1 <= bp1 [ 0U ] ) { bpIdx = 0U ; frac = 0.0 ; } else if ( u1 <
bp1 [ maxIndex [ 1U ] ] ) { for ( bpIdx = prevIndex [ 1U ] ; u1 < bp1 [ bpIdx
] ; bpIdx -- ) { } while ( u1 >= bp1 [ bpIdx + 1U ] ) { bpIdx ++ ; } frac = (
u1 - bp1 [ bpIdx ] ) / ( bp1 [ bpIdx + 1U ] - bp1 [ bpIdx ] ) ; } else {
bpIdx = maxIndex [ 1U ] - 1U ; frac = 1.0 ; } prevIndex [ 1U ] = bpIdx ;
bpIdx = bpIdx * stride + bpIndices [ 0U ] ; yL_0d0 = table [ bpIdx ] ; yL_0d0
+= ( table [ bpIdx + 1U ] - yL_0d0 ) * fractions [ 0U ] ; bpIdx += stride ;
yL_0d1 = table [ bpIdx ] ; return ( ( ( table [ bpIdx + 1U ] - yL_0d1 ) *
fractions [ 0U ] + yL_0d1 ) - yL_0d0 ) * frac + yL_0d0 ; } uint32_T
linsearch_u32d ( real_T u , const real_T bp [ ] , uint32_T startIndex ) {
uint32_T bpIndex ; for ( bpIndex = startIndex ; u < bp [ bpIndex ] ; bpIndex
-- ) { } while ( u >= bp [ bpIndex + 1U ] ) { bpIndex ++ ; } return bpIndex ;
} uint32_T plook_u32ff_lincpa ( real32_T u , const real32_T bp [ ] , uint32_T
maxIndex , real32_T * fraction , uint32_T * prevIndex ) { uint32_T bpIndex ;
if ( u <= bp [ 0U ] ) { bpIndex = 0U ; * fraction = 0.0F ; } else if ( u < bp
[ maxIndex ] ) { bpIndex = linsearch_u32f ( u , bp , * prevIndex ) ; *
fraction = ( u - bp [ bpIndex ] ) / ( bp [ bpIndex + 1U ] - bp [ bpIndex ] )
; } else { bpIndex = maxIndex ; * fraction = 0.0F ; } * prevIndex = bpIndex ;
return bpIndex ; } uint32_T plook_u32ff_linxp ( real32_T u , const real32_T
bp [ ] , uint32_T maxIndex , real32_T * fraction , uint32_T * prevIndex ) {
uint32_T bpIndex ; if ( u <= bp [ 0U ] ) { bpIndex = 0U ; * fraction = ( u -
bp [ 0U ] ) / ( bp [ 1U ] - bp [ 0U ] ) ; } else if ( u < bp [ maxIndex ] ) {
bpIndex = linsearch_u32f ( u , bp , * prevIndex ) ; * fraction = ( u - bp [
bpIndex ] ) / ( bp [ bpIndex + 1U ] - bp [ bpIndex ] ) ; } else { bpIndex =
maxIndex - 1U ; * fraction = ( u - bp [ maxIndex - 1U ] ) / ( bp [ maxIndex ]
- bp [ maxIndex - 1U ] ) ; } * prevIndex = bpIndex ; return bpIndex ; }
real32_T intrp2d_fu32fl_pw ( const uint32_T bpIndex [ ] , const real32_T frac
[ ] , const real32_T table [ ] , const uint32_T stride ) { real32_T yL_0d0 ;
real32_T yL_0d1 ; uint32_T offset_1d ; offset_1d = bpIndex [ 1U ] * stride +
bpIndex [ 0U ] ; yL_0d0 = table [ offset_1d ] ; yL_0d0 += ( table [ offset_1d
+ 1U ] - yL_0d0 ) * frac [ 0U ] ; offset_1d += stride ; yL_0d1 = table [
offset_1d ] ; return ( ( ( table [ offset_1d + 1U ] - yL_0d1 ) * frac [ 0U ]
+ yL_0d1 ) - yL_0d0 ) * frac [ 1U ] + yL_0d0 ; } real_T look2_plinlxpw (
real_T u0 , real_T u1 , const real_T bp0 [ ] , const real_T bp1 [ ] , const
real_T table [ ] , uint32_T prevIndex [ ] , const uint32_T maxIndex [ ] ,
uint32_T stride ) { real_T fractions [ 2 ] ; real_T frac ; real_T yL_0d0 ;
real_T yL_0d1 ; uint32_T bpIndices [ 2 ] ; uint32_T bpIdx ; if ( u0 <= bp0 [
0U ] ) { bpIdx = 0U ; frac = ( u0 - bp0 [ 0U ] ) / ( bp0 [ 1U ] - bp0 [ 0U ]
) ; } else if ( u0 < bp0 [ maxIndex [ 0U ] ] ) { for ( bpIdx = prevIndex [ 0U
] ; u0 < bp0 [ bpIdx ] ; bpIdx -- ) { } while ( u0 >= bp0 [ bpIdx + 1U ] ) {
bpIdx ++ ; } frac = ( u0 - bp0 [ bpIdx ] ) / ( bp0 [ bpIdx + 1U ] - bp0 [
bpIdx ] ) ; } else { bpIdx = maxIndex [ 0U ] - 1U ; frac = ( u0 - bp0 [
maxIndex [ 0U ] - 1U ] ) / ( bp0 [ maxIndex [ 0U ] ] - bp0 [ maxIndex [ 0U ]
- 1U ] ) ; } prevIndex [ 0U ] = bpIdx ; fractions [ 0U ] = frac ; bpIndices [
0U ] = bpIdx ; if ( u1 <= bp1 [ 0U ] ) { bpIdx = 0U ; frac = ( u1 - bp1 [ 0U
] ) / ( bp1 [ 1U ] - bp1 [ 0U ] ) ; } else if ( u1 < bp1 [ maxIndex [ 1U ] ]
) { for ( bpIdx = prevIndex [ 1U ] ; u1 < bp1 [ bpIdx ] ; bpIdx -- ) { }
while ( u1 >= bp1 [ bpIdx + 1U ] ) { bpIdx ++ ; } frac = ( u1 - bp1 [ bpIdx ]
) / ( bp1 [ bpIdx + 1U ] - bp1 [ bpIdx ] ) ; } else { bpIdx = maxIndex [ 1U ]
- 1U ; frac = ( u1 - bp1 [ maxIndex [ 1U ] - 1U ] ) / ( bp1 [ maxIndex [ 1U ]
] - bp1 [ maxIndex [ 1U ] - 1U ] ) ; } prevIndex [ 1U ] = bpIdx ; bpIdx =
bpIdx * stride + bpIndices [ 0U ] ; yL_0d0 = table [ bpIdx ] ; yL_0d0 += (
table [ bpIdx + 1U ] - yL_0d0 ) * fractions [ 0U ] ; bpIdx += stride ; yL_0d1
= table [ bpIdx ] ; return ( ( ( table [ bpIdx + 1U ] - yL_0d1 ) * fractions
[ 0U ] + yL_0d1 ) - yL_0d0 ) * frac + yL_0d0 ; } real_T look1_plinlcpw (
real_T u0 , const real_T bp0 [ ] , const real_T table [ ] , uint32_T
prevIndex [ ] , uint32_T maxIndex ) { real_T frac ; real_T yL_0d0 ; uint32_T
bpIdx ; if ( u0 <= bp0 [ 0U ] ) { bpIdx = 0U ; frac = 0.0 ; } else if ( u0 <
bp0 [ maxIndex ] ) { for ( bpIdx = prevIndex [ 0U ] ; u0 < bp0 [ bpIdx ] ;
bpIdx -- ) { } while ( u0 >= bp0 [ bpIdx + 1U ] ) { bpIdx ++ ; } frac = ( u0
- bp0 [ bpIdx ] ) / ( bp0 [ bpIdx + 1U ] - bp0 [ bpIdx ] ) ; } else { bpIdx =
maxIndex - 1U ; frac = 1.0 ; } prevIndex [ 0U ] = bpIdx ; yL_0d0 = table [
bpIdx ] ; return ( table [ bpIdx + 1U ] - yL_0d0 ) * frac + yL_0d0 ; } real_T
look1_plinlxpw ( real_T u0 , const real_T bp0 [ ] , const real_T table [ ] ,
uint32_T prevIndex [ ] , uint32_T maxIndex ) { real_T frac ; real_T yL_0d0 ;
uint32_T bpIdx ; if ( u0 <= bp0 [ 0U ] ) { bpIdx = 0U ; frac = ( u0 - bp0 [
0U ] ) / ( bp0 [ 1U ] - bp0 [ 0U ] ) ; } else if ( u0 < bp0 [ maxIndex ] ) {
for ( bpIdx = prevIndex [ 0U ] ; u0 < bp0 [ bpIdx ] ; bpIdx -- ) { } while (
u0 >= bp0 [ bpIdx + 1U ] ) { bpIdx ++ ; } frac = ( u0 - bp0 [ bpIdx ] ) / (
bp0 [ bpIdx + 1U ] - bp0 [ bpIdx ] ) ; } else { bpIdx = maxIndex - 1U ; frac
= ( u0 - bp0 [ maxIndex - 1U ] ) / ( bp0 [ maxIndex ] - bp0 [ maxIndex - 1U ]
) ; } prevIndex [ 0U ] = bpIdx ; yL_0d0 = table [ bpIdx ] ; return ( table [
bpIdx + 1U ] - yL_0d0 ) * frac + yL_0d0 ; } real32_T intrp4d_fu32fla_pw (
const uint32_T bpIndex [ ] , const real32_T frac [ ] , const real32_T table [
] , const uint32_T stride [ ] , const uint32_T maxIndex [ ] ) { real32_T y ;
real32_T yL_0d0 ; real32_T yL_1d ; real32_T yL_1d_p ; uint32_T offset_0d ;
uint32_T offset_1d ; uint32_T offset_3d ; offset_3d = ( ( bpIndex [ 3U ] *
stride [ 3U ] + bpIndex [ 2U ] * stride [ 2U ] ) + bpIndex [ 1U ] * stride [
1U ] ) + bpIndex [ 0U ] ; if ( bpIndex [ 0U ] == maxIndex [ 0U ] ) { y =
table [ offset_3d ] ; } else { yL_0d0 = table [ offset_3d ] ; y = ( table [
offset_3d + 1U ] - yL_0d0 ) * frac [ 0U ] + yL_0d0 ; } if ( bpIndex [ 1U ] ==
maxIndex [ 1U ] ) { } else { offset_0d = offset_3d + stride [ 1U ] ; if (
bpIndex [ 0U ] == maxIndex [ 0U ] ) { yL_0d0 = table [ offset_0d ] ; } else {
yL_0d0 = table [ offset_0d ] ; yL_0d0 += ( table [ offset_0d + 1U ] - yL_0d0
) * frac [ 0U ] ; } y += ( yL_0d0 - y ) * frac [ 1U ] ; } if ( bpIndex [ 2U ]
== maxIndex [ 2U ] ) { } else { offset_1d = offset_3d + stride [ 2U ] ; if (
bpIndex [ 0U ] == maxIndex [ 0U ] ) { yL_1d = table [ offset_1d ] ; } else {
yL_0d0 = table [ offset_1d ] ; yL_1d = ( table [ offset_1d + 1U ] - yL_0d0 )
* frac [ 0U ] + yL_0d0 ; } if ( bpIndex [ 1U ] == maxIndex [ 1U ] ) { } else
{ offset_0d = offset_1d + stride [ 1U ] ; if ( bpIndex [ 0U ] == maxIndex [
0U ] ) { yL_0d0 = table [ offset_0d ] ; } else { yL_0d0 = table [ offset_0d ]
; yL_0d0 += ( table [ offset_0d + 1U ] - yL_0d0 ) * frac [ 0U ] ; } yL_1d +=
( yL_0d0 - yL_1d ) * frac [ 1U ] ; } y += ( yL_1d - y ) * frac [ 2U ] ; } if
( bpIndex [ 3U ] == maxIndex [ 3U ] ) { } else { offset_1d = offset_3d +
stride [ 3U ] ; if ( bpIndex [ 0U ] == maxIndex [ 0U ] ) { yL_1d = table [
offset_1d ] ; } else { yL_0d0 = table [ offset_1d ] ; yL_1d = ( table [
offset_1d + 1U ] - yL_0d0 ) * frac [ 0U ] + yL_0d0 ; } if ( bpIndex [ 1U ] ==
maxIndex [ 1U ] ) { } else { offset_0d = offset_1d + stride [ 1U ] ; if (
bpIndex [ 0U ] == maxIndex [ 0U ] ) { yL_0d0 = table [ offset_0d ] ; } else {
yL_0d0 = table [ offset_0d ] ; yL_0d0 += ( table [ offset_0d + 1U ] - yL_0d0
) * frac [ 0U ] ; } yL_1d += ( yL_0d0 - yL_1d ) * frac [ 1U ] ; } if (
bpIndex [ 2U ] == maxIndex [ 2U ] ) { } else { offset_1d += stride [ 2U ] ;
if ( bpIndex [ 0U ] == maxIndex [ 0U ] ) { yL_1d_p = table [ offset_1d ] ; }
else { yL_0d0 = table [ offset_1d ] ; yL_1d_p = ( table [ offset_1d + 1U ] -
yL_0d0 ) * frac [ 0U ] + yL_0d0 ; } if ( bpIndex [ 1U ] == maxIndex [ 1U ] )
{ } else { offset_0d = offset_1d + stride [ 1U ] ; if ( bpIndex [ 0U ] ==
maxIndex [ 0U ] ) { yL_0d0 = table [ offset_0d ] ; } else { yL_0d0 = table [
offset_0d ] ; yL_0d0 += ( table [ offset_0d + 1U ] - yL_0d0 ) * frac [ 0U ] ;
} yL_1d_p += ( yL_0d0 - yL_1d_p ) * frac [ 1U ] ; } yL_1d += ( yL_1d_p -
yL_1d ) * frac [ 2U ] ; } y += ( yL_1d - y ) * frac [ 3U ] ; } return y ; }
uint32_T plook_linxp ( real_T u , const real_T bp [ ] , uint32_T maxIndex ,
real_T * fraction , uint32_T * prevIndex ) { uint32_T bpIndex ; if ( u <= bp
[ 0U ] ) { bpIndex = 0U ; * fraction = ( u - bp [ 0U ] ) / ( bp [ 1U ] - bp [
0U ] ) ; } else if ( u < bp [ maxIndex ] ) { bpIndex = linsearch_u32d ( u ,
bp , * prevIndex ) ; * fraction = ( u - bp [ bpIndex ] ) / ( bp [ bpIndex +
1U ] - bp [ bpIndex ] ) ; } else { bpIndex = maxIndex - 1U ; * fraction = ( u
- bp [ maxIndex - 1U ] ) / ( bp [ maxIndex ] - bp [ maxIndex - 1U ] ) ; } *
prevIndex = bpIndex ; return bpIndex ; } real32_T look1_iflf_pbinlcpw (
real32_T u0 , const real32_T bp0 [ ] , const real32_T table [ ] , uint32_T
prevIndex [ ] , uint32_T maxIndex ) { real32_T frac ; real32_T yL_0d0 ;
uint32_T bpIdx ; uint32_T found ; uint32_T iLeft ; uint32_T iRght ; if ( u0
<= bp0 [ 0U ] ) { bpIdx = 0U ; frac = 0.0F ; } else if ( u0 < bp0 [ maxIndex
] ) { bpIdx = prevIndex [ 0U ] ; iLeft = 0U ; iRght = maxIndex ; found = 0U ;
while ( found == 0U ) { if ( u0 < bp0 [ bpIdx ] ) { iRght = bpIdx - 1U ;
bpIdx = ( ( bpIdx + iLeft ) - 1U ) >> 1U ; } else if ( u0 < bp0 [ bpIdx + 1U
] ) { found = 1U ; } else { iLeft = bpIdx + 1U ; bpIdx = ( ( bpIdx + iRght )
+ 1U ) >> 1U ; } } frac = ( u0 - bp0 [ bpIdx ] ) / ( bp0 [ bpIdx + 1U ] - bp0
[ bpIdx ] ) ; } else { bpIdx = maxIndex - 1U ; frac = 1.0F ; } prevIndex [ 0U
] = bpIdx ; yL_0d0 = table [ bpIdx ] ; return ( table [ bpIdx + 1U ] - yL_0d0
) * frac + yL_0d0 ; } uint32_T plook_u32ff_lincp ( real32_T u , const
real32_T bp [ ] , uint32_T maxIndex , real32_T * fraction , uint32_T *
prevIndex ) { uint32_T bpIndex ; if ( u <= bp [ 0U ] ) { bpIndex = 0U ; *
fraction = 0.0F ; } else if ( u < bp [ maxIndex ] ) { bpIndex =
linsearch_u32f ( u , bp , * prevIndex ) ; * fraction = ( u - bp [ bpIndex ] )
/ ( bp [ bpIndex + 1U ] - bp [ bpIndex ] ) ; } else { bpIndex = maxIndex - 1U
; * fraction = 1.0F ; } * prevIndex = bpIndex ; return bpIndex ; } real32_T
intrp4d_fl_pw ( const uint32_T bpIndex [ ] , const real_T frac [ ] , const
real32_T table [ ] , const uint32_T stride [ ] ) { real32_T yL_0d0 ; real32_T
yL_1d ; real32_T yL_2d ; real32_T yL_3d ; uint32_T offset_0d ; uint32_T
offset_1d ; uint32_T offset_3d ; offset_3d = ( ( bpIndex [ 3U ] * stride [ 3U
] + bpIndex [ 2U ] * stride [ 2U ] ) + bpIndex [ 1U ] * stride [ 1U ] ) +
bpIndex [ 0U ] ; yL_0d0 = table [ offset_3d ] ; yL_1d = ( real32_T ) ( (
table [ offset_3d + 1U ] - yL_0d0 ) * frac [ 0U ] ) + yL_0d0 ; offset_0d =
offset_3d + stride [ 1U ] ; yL_0d0 = table [ offset_0d ] ; yL_2d = ( real32_T
) ( ( ( ( real32_T ) ( ( table [ offset_0d + 1U ] - yL_0d0 ) * frac [ 0U ] )
+ yL_0d0 ) - yL_1d ) * frac [ 1U ] ) + yL_1d ; offset_1d = offset_3d + stride
[ 2U ] ; yL_0d0 = table [ offset_1d ] ; yL_1d = ( real32_T ) ( ( table [
offset_1d + 1U ] - yL_0d0 ) * frac [ 0U ] ) + yL_0d0 ; offset_0d = offset_1d
+ stride [ 1U ] ; yL_0d0 = table [ offset_0d ] ; yL_3d = ( real32_T ) ( ( ( (
real32_T ) ( ( ( ( real32_T ) ( ( table [ offset_0d + 1U ] - yL_0d0 ) * frac
[ 0U ] ) + yL_0d0 ) - yL_1d ) * frac [ 1U ] ) + yL_1d ) - yL_2d ) * frac [ 2U
] ) + yL_2d ; offset_1d = offset_3d + stride [ 3U ] ; yL_0d0 = table [
offset_1d ] ; yL_1d = ( real32_T ) ( ( table [ offset_1d + 1U ] - yL_0d0 ) *
frac [ 0U ] ) + yL_0d0 ; offset_0d = offset_1d + stride [ 1U ] ; yL_0d0 =
table [ offset_0d ] ; yL_2d = ( real32_T ) ( ( ( ( real32_T ) ( ( table [
offset_0d + 1U ] - yL_0d0 ) * frac [ 0U ] ) + yL_0d0 ) - yL_1d ) * frac [ 1U
] ) + yL_1d ; offset_1d += stride [ 2U ] ; yL_0d0 = table [ offset_1d ] ;
yL_1d = ( real32_T ) ( ( table [ offset_1d + 1U ] - yL_0d0 ) * frac [ 0U ] )
+ yL_0d0 ; offset_0d = offset_1d + stride [ 1U ] ; yL_0d0 = table [ offset_0d
] ; return ( real32_T ) ( ( ( ( real32_T ) ( ( ( ( real32_T ) ( ( ( (
real32_T ) ( ( table [ offset_0d + 1U ] - yL_0d0 ) * frac [ 0U ] ) + yL_0d0 )
- yL_1d ) * frac [ 1U ] ) + yL_1d ) - yL_2d ) * frac [ 2U ] ) + yL_2d ) -
yL_3d ) * frac [ 3U ] ) + yL_3d ; } real32_T intrp3d_fl_pw ( const uint32_T
bpIndex [ ] , const real_T frac [ ] , const real32_T table [ ] , const
uint32_T stride [ ] ) { real32_T yL_0d0 ; real32_T yL_1d ; real32_T yL_2d ;
uint32_T offset_0d ; uint32_T offset_2d ; offset_2d = ( bpIndex [ 2U ] *
stride [ 2U ] + bpIndex [ 1U ] * stride [ 1U ] ) + bpIndex [ 0U ] ; yL_0d0 =
table [ offset_2d ] ; yL_1d = ( real32_T ) ( ( table [ offset_2d + 1U ] -
yL_0d0 ) * frac [ 0U ] ) + yL_0d0 ; offset_0d = offset_2d + stride [ 1U ] ;
yL_0d0 = table [ offset_0d ] ; yL_2d = ( real32_T ) ( ( ( ( real32_T ) ( (
table [ offset_0d + 1U ] - yL_0d0 ) * frac [ 0U ] ) + yL_0d0 ) - yL_1d ) *
frac [ 1U ] ) + yL_1d ; offset_2d += stride [ 2U ] ; yL_0d0 = table [
offset_2d ] ; yL_1d = ( real32_T ) ( ( table [ offset_2d + 1U ] - yL_0d0 ) *
frac [ 0U ] ) + yL_0d0 ; offset_0d = offset_2d + stride [ 1U ] ; yL_0d0 =
table [ offset_0d ] ; return ( real32_T ) ( ( ( ( real32_T ) ( ( ( ( real32_T
) ( ( table [ offset_0d + 1U ] - yL_0d0 ) * frac [ 0U ] ) + yL_0d0 ) - yL_1d
) * frac [ 1U ] ) + yL_1d ) - yL_2d ) * frac [ 2U ] ) + yL_2d ; } uint32_T
linsearch_u32f ( real32_T u , const real32_T bp [ ] , uint32_T startIndex ) {
uint32_T bpIndex ; for ( bpIndex = startIndex ; u < bp [ bpIndex ] ; bpIndex
-- ) { } while ( u >= bp [ bpIndex + 1U ] ) { bpIndex ++ ; } return bpIndex ;
}
#ifndef __RTW_UTFREE__  
extern void utFree ( void * ) ;
#endif
void rt_TDelayFreeBuf ( void * buf ) { utFree ( buf ) ; } void pv5uhtasoj (
void ) { int32_T g3vkebdqap ; for ( g3vkebdqap = 0 ; g3vkebdqap < 16 ;
g3vkebdqap ++ ) { rtB . nyqetrz43u [ g3vkebdqap ] . kl452g3br4 [ 0 ] = 0.0F ;
rtB . nyqetrz43u [ g3vkebdqap ] . ico5bo4shp [ 0 ] = 0.0F ; rtB . nyqetrz43u
[ g3vkebdqap ] . kl452g3br4 [ 1 ] = 0.0F ; rtB . nyqetrz43u [ g3vkebdqap ] .
ico5bo4shp [ 1 ] = 0.0F ; rtB . nyqetrz43u [ g3vkebdqap ] . kl452g3br4 [ 2 ]
= 0.0F ; rtB . nyqetrz43u [ g3vkebdqap ] . ico5bo4shp [ 2 ] = 0.0F ; } } void
ggl0rm1hau ( int32_T g3vkebdqap ) { real32_T dv3vcft3j5 [ 3 ] ; real32_T
a31o02awz5 ; real32_T lodn0twybn ; real32_T pxiddofnts ; dv3vcft3j5 [ 0 ] =
rtP . vtail_nodes [ 3 * g3vkebdqap ] ; dv3vcft3j5 [ 1 ] = rtP . vtail_nodes [
3 * g3vkebdqap + 1 ] ; dv3vcft3j5 [ 2 ] = rtP . vtail_nodes [ 3 * g3vkebdqap
+ 2 ] ; { real32_T f5q4yqlcqc_idx_0 ; real32_T f5q4yqlcqc_idx_1 ; real32_T
f5q4yqlcqc_idx_2 ; real32_T tmp ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB
. nyqetrz43u [ g3vkebdqap ] . kl452g3br4 [ 0 ] = rtB . nyqetrz43u [
g3vkebdqap ] . ico5bo4shp [ 0 ] - dv3vcft3j5 [ 0 ] ; rtB . nyqetrz43u [
g3vkebdqap ] . kl452g3br4 [ 1 ] = rtB . nyqetrz43u [ g3vkebdqap ] .
ico5bo4shp [ 1 ] - dv3vcft3j5 [ 1 ] ; rtB . nyqetrz43u [ g3vkebdqap ] .
kl452g3br4 [ 2 ] = rtB . nyqetrz43u [ g3vkebdqap ] . ico5bo4shp [ 2 ] -
dv3vcft3j5 [ 2 ] ; } f5q4yqlcqc_idx_0 = ( rtB . nyqetrz43u [ g3vkebdqap ] .
kl452g3br4 [ 1 ] * rtB . kp4feo544t [ 2 ] - rtB . kp4feo544t [ 1 ] * rtB .
nyqetrz43u [ g3vkebdqap ] . kl452g3br4 [ 2 ] ) + rtB . jrm5mulpgo [ 0 ] ;
f5q4yqlcqc_idx_1 = ( rtB . kp4feo544t [ 0 ] * rtB . nyqetrz43u [ g3vkebdqap ]
. kl452g3br4 [ 2 ] - rtB . nyqetrz43u [ g3vkebdqap ] . kl452g3br4 [ 0 ] * rtB
. kp4feo544t [ 2 ] ) + rtB . jrm5mulpgo [ 1 ] ; f5q4yqlcqc_idx_2 = ( rtB .
nyqetrz43u [ g3vkebdqap ] . kl452g3br4 [ 0 ] * rtB . kp4feo544t [ 1 ] - rtB .
kp4feo544t [ 0 ] * rtB . nyqetrz43u [ g3vkebdqap ] . kl452g3br4 [ 1 ] ) + rtB
. jrm5mulpgo [ 2 ] ; tmp = ( muSingleScalarPower ( f5q4yqlcqc_idx_0 , 2.0F )
+ muSingleScalarPower ( f5q4yqlcqc_idx_1 , 2.0F ) ) + muSingleScalarPower (
f5q4yqlcqc_idx_2 , 2.0F ) ; if ( tmp < 0.0F ) { tmp = - muSingleScalarSqrt (
- tmp ) ; } else { tmp = muSingleScalarSqrt ( tmp ) ; } pxiddofnts = tmp +
rtP . nyqetrz43u . Constant1_Value ; f5q4yqlcqc_idx_1 /= pxiddofnts ; if (
f5q4yqlcqc_idx_1 > 1.0F ) { f5q4yqlcqc_idx_1 = 1.0F ; } else if (
f5q4yqlcqc_idx_1 < - 1.0F ) { f5q4yqlcqc_idx_1 = - 1.0F ; } a31o02awz5 =
muSingleScalarAsin ( f5q4yqlcqc_idx_1 ) ; lodn0twybn = muSingleScalarAtan (
f5q4yqlcqc_idx_2 / ( f5q4yqlcqc_idx_0 + rtP . nyqetrz43u . Constant1_Value )
) ; } rtB . atgyr3lfo3 [ g3vkebdqap ] = a31o02awz5 ; rtB . cfz24gonbxg [
g3vkebdqap ] = lodn0twybn ; rtB . nmxk2xrfk3z [ g3vkebdqap ] = pxiddofnts ; }
void ggl0rm1hauTID3 ( int32_T g3vkebdqap ) { real32_T dv3vcft3j5 [ 3 ] ; rtB
. nyqetrz43u [ g3vkebdqap ] . ico5bo4shp [ 0 ] = ( real32_T ) rtP . xyz_cg [
0 ] ; rtB . nyqetrz43u [ g3vkebdqap ] . ico5bo4shp [ 1 ] = ( real32_T ) rtP .
xyz_cg [ 1 ] ; rtB . nyqetrz43u [ g3vkebdqap ] . ico5bo4shp [ 2 ] = (
real32_T ) rtP . xyz_cg [ 2 ] ; dv3vcft3j5 [ 0 ] = rtP . vtail_nodes [ 3 *
g3vkebdqap ] ; dv3vcft3j5 [ 1 ] = rtP . vtail_nodes [ 3 * g3vkebdqap + 1 ] ;
dv3vcft3j5 [ 2 ] = rtP . vtail_nodes [ 3 * g3vkebdqap + 2 ] ; } void
f5orepjga5 ( void ) { int32_T jbk4x2dzbh ; for ( jbk4x2dzbh = 0 ; jbk4x2dzbh
< 14 ; jbk4x2dzbh ++ ) { rtB . nyqetrz43uq [ jbk4x2dzbh ] . g2bz2muoaw [ 0 ]
= 0.0F ; rtB . nyqetrz43uq [ jbk4x2dzbh ] . lkowsjx5yc [ 0 ] = 0.0F ; rtB .
nyqetrz43uq [ jbk4x2dzbh ] . g2bz2muoaw [ 1 ] = 0.0F ; rtB . nyqetrz43uq [
jbk4x2dzbh ] . lkowsjx5yc [ 1 ] = 0.0F ; rtB . nyqetrz43uq [ jbk4x2dzbh ] .
g2bz2muoaw [ 2 ] = 0.0F ; rtB . nyqetrz43uq [ jbk4x2dzbh ] . lkowsjx5yc [ 2 ]
= 0.0F ; } } void ppqwruko3j ( int32_T jbk4x2dzbh ) { real32_T dv3vcft3j53 [
3 ] ; real32_T lodn0twybnh ; real32_T ogh5qnuedf ; dv3vcft3j53 [ 0 ] = rtP .
wing_nodes [ 3 * jbk4x2dzbh ] ; dv3vcft3j53 [ 1 ] = rtP . wing_nodes [ 3 *
jbk4x2dzbh + 1 ] ; dv3vcft3j53 [ 2 ] = rtP . wing_nodes [ 3 * jbk4x2dzbh + 2
] ; { real32_T dzzuk3g5um ; real32_T lpwc5s211m_idx_0 ; real32_T lpwc5s211m_p
; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . nyqetrz43uq [ jbk4x2dzbh ] .
g2bz2muoaw [ 0 ] = rtB . nyqetrz43uq [ jbk4x2dzbh ] . lkowsjx5yc [ 0 ] -
dv3vcft3j53 [ 0 ] ; rtB . nyqetrz43uq [ jbk4x2dzbh ] . g2bz2muoaw [ 1 ] = rtB
. nyqetrz43uq [ jbk4x2dzbh ] . lkowsjx5yc [ 1 ] - dv3vcft3j53 [ 1 ] ; rtB .
nyqetrz43uq [ jbk4x2dzbh ] . g2bz2muoaw [ 2 ] = rtB . nyqetrz43uq [
jbk4x2dzbh ] . lkowsjx5yc [ 2 ] - dv3vcft3j53 [ 2 ] ; } dzzuk3g5um = ( rtB .
nyqetrz43uq [ jbk4x2dzbh ] . g2bz2muoaw [ 1 ] * rtB . kp4feo544t [ 2 ] - rtB
. kp4feo544t [ 1 ] * rtB . nyqetrz43uq [ jbk4x2dzbh ] . g2bz2muoaw [ 2 ] ) +
rtB . jrm5mulpgo [ 0 ] ; lpwc5s211m_p = dzzuk3g5um * dzzuk3g5um ;
lpwc5s211m_idx_0 = dzzuk3g5um ; dzzuk3g5um = ( rtB . kp4feo544t [ 0 ] * rtB .
nyqetrz43uq [ jbk4x2dzbh ] . g2bz2muoaw [ 2 ] - rtB . nyqetrz43uq [
jbk4x2dzbh ] . g2bz2muoaw [ 0 ] * rtB . kp4feo544t [ 2 ] ) + rtB . jrm5mulpgo
[ 1 ] ; lpwc5s211m_p += dzzuk3g5um * dzzuk3g5um ; dzzuk3g5um = ( rtB .
nyqetrz43uq [ jbk4x2dzbh ] . g2bz2muoaw [ 0 ] * rtB . kp4feo544t [ 1 ] - rtB
. kp4feo544t [ 0 ] * rtB . nyqetrz43uq [ jbk4x2dzbh ] . g2bz2muoaw [ 1 ] ) +
rtB . jrm5mulpgo [ 2 ] ; lpwc5s211m_p += dzzuk3g5um * dzzuk3g5um ;
lodn0twybnh = muSingleScalarAtan ( dzzuk3g5um / ( lpwc5s211m_idx_0 + rtP .
nyqetrz43uq . Constant1_Value ) ) ; ogh5qnuedf = muSingleScalarSqrt (
lpwc5s211m_p ) ; } rtB . cfz24gonbx [ jbk4x2dzbh ] = lodn0twybnh ; rtB .
nmxk2xrfk3 [ jbk4x2dzbh ] = ogh5qnuedf ; } void ppqwruko3jTID3 ( int32_T
jbk4x2dzbh ) { real32_T dv3vcft3j53 [ 3 ] ; rtB . nyqetrz43uq [ jbk4x2dzbh ]
. lkowsjx5yc [ 0 ] = ( real32_T ) rtP . xyz_cg [ 0 ] ; rtB . nyqetrz43uq [
jbk4x2dzbh ] . lkowsjx5yc [ 1 ] = ( real32_T ) rtP . xyz_cg [ 1 ] ; rtB .
nyqetrz43uq [ jbk4x2dzbh ] . lkowsjx5yc [ 2 ] = ( real32_T ) rtP . xyz_cg [ 2
] ; dv3vcft3j53 [ 0 ] = rtP . wing_nodes [ 3 * jbk4x2dzbh ] ; dv3vcft3j53 [ 1
] = rtP . wing_nodes [ 3 * jbk4x2dzbh + 1 ] ; dv3vcft3j53 [ 2 ] = rtP .
wing_nodes [ 3 * jbk4x2dzbh + 2 ] ; } void fhcttf5uve ( void ) { int32_T
bu4vq0ye4b ; for ( bu4vq0ye4b = 0 ; bu4vq0ye4b < 16 ; bu4vq0ye4b ++ ) { rtB .
nyqetrz43uqk [ bu4vq0ye4b ] . f5l1thfo3b [ 0 ] = 0.0F ; rtB . nyqetrz43uqk [
bu4vq0ye4b ] . a0tbi33tik [ 0 ] = 0.0F ; rtB . nyqetrz43uqk [ bu4vq0ye4b ] .
f5l1thfo3b [ 1 ] = 0.0F ; rtB . nyqetrz43uqk [ bu4vq0ye4b ] . a0tbi33tik [ 1
] = 0.0F ; rtB . nyqetrz43uqk [ bu4vq0ye4b ] . f5l1thfo3b [ 2 ] = 0.0F ; rtB
. nyqetrz43uqk [ bu4vq0ye4b ] . a0tbi33tik [ 2 ] = 0.0F ; } } void femu5gktcp
( int32_T bu4vq0ye4b ) { real32_T bzv0spra3z [ 3 ] ; real32_T lwj5ue2hgk [ 3
] ; real32_T jnkxh0rf3g [ 3 ] ; bzv0spra3z [ 0 ] = rtP . vtail_nodes [ 3 *
bu4vq0ye4b ] ; lwj5ue2hgk [ 0 ] = rtB . o0icr3ysdn [ 3 * bu4vq0ye4b ] ;
bzv0spra3z [ 1 ] = rtP . vtail_nodes [ 3 * bu4vq0ye4b + 1 ] ; lwj5ue2hgk [ 1
] = rtB . o0icr3ysdn [ 3 * bu4vq0ye4b + 1 ] ; bzv0spra3z [ 2 ] = rtP .
vtail_nodes [ 3 * bu4vq0ye4b + 2 ] ; lwj5ue2hgk [ 2 ] = rtB . o0icr3ysdn [ 3
* bu4vq0ye4b + 2 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB .
nyqetrz43uqk [ bu4vq0ye4b ] . f5l1thfo3b [ 0 ] = bzv0spra3z [ 0 ] - rtB .
nyqetrz43uqk [ bu4vq0ye4b ] . a0tbi33tik [ 0 ] ; rtB . nyqetrz43uqk [
bu4vq0ye4b ] . f5l1thfo3b [ 1 ] = bzv0spra3z [ 1 ] - rtB . nyqetrz43uqk [
bu4vq0ye4b ] . a0tbi33tik [ 1 ] ; rtB . nyqetrz43uqk [ bu4vq0ye4b ] .
f5l1thfo3b [ 2 ] = bzv0spra3z [ 2 ] - rtB . nyqetrz43uqk [ bu4vq0ye4b ] .
a0tbi33tik [ 2 ] ; } jnkxh0rf3g [ 0 ] = rtB . nyqetrz43uqk [ bu4vq0ye4b ] .
f5l1thfo3b [ 1 ] * lwj5ue2hgk [ 2 ] - lwj5ue2hgk [ 1 ] * rtB . nyqetrz43uqk [
bu4vq0ye4b ] . f5l1thfo3b [ 2 ] ; jnkxh0rf3g [ 1 ] = lwj5ue2hgk [ 0 ] * rtB .
nyqetrz43uqk [ bu4vq0ye4b ] . f5l1thfo3b [ 2 ] - rtB . nyqetrz43uqk [
bu4vq0ye4b ] . f5l1thfo3b [ 0 ] * lwj5ue2hgk [ 2 ] ; jnkxh0rf3g [ 2 ] = rtB .
nyqetrz43uqk [ bu4vq0ye4b ] . f5l1thfo3b [ 0 ] * lwj5ue2hgk [ 1 ] -
lwj5ue2hgk [ 0 ] * rtB . nyqetrz43uqk [ bu4vq0ye4b ] . f5l1thfo3b [ 1 ] ; rtB
. byhpdluumbuo [ 3 * bu4vq0ye4b ] = jnkxh0rf3g [ 0 ] ; rtB . byhpdluumbuo [ 3
* bu4vq0ye4b + 1 ] = jnkxh0rf3g [ 1 ] ; rtB . byhpdluumbuo [ 3 * bu4vq0ye4b +
2 ] = jnkxh0rf3g [ 2 ] ; } void femu5gktcpTID3 ( int32_T bu4vq0ye4b ) {
real32_T bzv0spra3z [ 3 ] ; real32_T lwj5ue2hgk [ 3 ] ; rtB . nyqetrz43uqk [
bu4vq0ye4b ] . a0tbi33tik [ 0 ] = ( real32_T ) rtP . xyz_cg [ 0 ] ; rtB .
nyqetrz43uqk [ bu4vq0ye4b ] . a0tbi33tik [ 1 ] = ( real32_T ) rtP . xyz_cg [
1 ] ; rtB . nyqetrz43uqk [ bu4vq0ye4b ] . a0tbi33tik [ 2 ] = ( real32_T ) rtP
. xyz_cg [ 2 ] ; bzv0spra3z [ 0 ] = rtP . vtail_nodes [ 3 * bu4vq0ye4b ] ;
lwj5ue2hgk [ 0 ] = rtB . o0icr3ysdn [ 3 * bu4vq0ye4b ] ; bzv0spra3z [ 1 ] =
rtP . vtail_nodes [ 3 * bu4vq0ye4b + 1 ] ; lwj5ue2hgk [ 1 ] = rtB .
o0icr3ysdn [ 3 * bu4vq0ye4b + 1 ] ; bzv0spra3z [ 2 ] = rtP . vtail_nodes [ 3
* bu4vq0ye4b + 2 ] ; lwj5ue2hgk [ 2 ] = rtB . o0icr3ysdn [ 3 * bu4vq0ye4b + 2
] ; } void kyeab3bcz3 ( void ) { int32_T peigugf4ug ; for ( peigugf4ug = 0 ;
peigugf4ug < 7 ; peigugf4ug ++ ) { rtB . nyqetrz43uqkk [ peigugf4ug ] .
d2kygac014 [ 0 ] = 0.0F ; rtB . nyqetrz43uqkk [ peigugf4ug ] . dbot5mi30f [ 0
] = 0.0F ; rtB . nyqetrz43uqkk [ peigugf4ug ] . d2kygac014 [ 1 ] = 0.0F ; rtB
. nyqetrz43uqkk [ peigugf4ug ] . dbot5mi30f [ 1 ] = 0.0F ; rtB .
nyqetrz43uqkk [ peigugf4ug ] . d2kygac014 [ 2 ] = 0.0F ; rtB . nyqetrz43uqkk
[ peigugf4ug ] . dbot5mi30f [ 2 ] = 0.0F ; } } void ozenep403f ( int32_T
peigugf4ug ) { real32_T bzv0spra3zj [ 3 ] ; real32_T lwj5ue2hgkd [ 3 ] ;
real32_T jnkxh0rf3gh [ 3 ] ; bzv0spra3zj [ 0 ] = rtP .
NodePoints_Value_d4fj4hrpe3 [ 3 * peigugf4ug ] ; lwj5ue2hgkd [ 0 ] = rtB .
ayq52soaqwz [ 3 * peigugf4ug ] ; bzv0spra3zj [ 1 ] = rtP .
NodePoints_Value_d4fj4hrpe3 [ 3 * peigugf4ug + 1 ] ; lwj5ue2hgkd [ 1 ] = rtB
. ayq52soaqwz [ 3 * peigugf4ug + 1 ] ; bzv0spra3zj [ 2 ] = rtP .
NodePoints_Value_d4fj4hrpe3 [ 3 * peigugf4ug + 2 ] ; lwj5ue2hgkd [ 2 ] = rtB
. ayq52soaqwz [ 3 * peigugf4ug + 2 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
rtB . nyqetrz43uqkk [ peigugf4ug ] . d2kygac014 [ 0 ] = bzv0spra3zj [ 0 ] -
rtB . nyqetrz43uqkk [ peigugf4ug ] . dbot5mi30f [ 0 ] ; rtB . nyqetrz43uqkk [
peigugf4ug ] . d2kygac014 [ 1 ] = bzv0spra3zj [ 1 ] - rtB . nyqetrz43uqkk [
peigugf4ug ] . dbot5mi30f [ 1 ] ; rtB . nyqetrz43uqkk [ peigugf4ug ] .
d2kygac014 [ 2 ] = bzv0spra3zj [ 2 ] - rtB . nyqetrz43uqkk [ peigugf4ug ] .
dbot5mi30f [ 2 ] ; } jnkxh0rf3gh [ 0 ] = rtB . nyqetrz43uqkk [ peigugf4ug ] .
d2kygac014 [ 1 ] * lwj5ue2hgkd [ 2 ] - lwj5ue2hgkd [ 1 ] * rtB .
nyqetrz43uqkk [ peigugf4ug ] . d2kygac014 [ 2 ] ; jnkxh0rf3gh [ 1 ] =
lwj5ue2hgkd [ 0 ] * rtB . nyqetrz43uqkk [ peigugf4ug ] . d2kygac014 [ 2 ] -
rtB . nyqetrz43uqkk [ peigugf4ug ] . d2kygac014 [ 0 ] * lwj5ue2hgkd [ 2 ] ;
jnkxh0rf3gh [ 2 ] = rtB . nyqetrz43uqkk [ peigugf4ug ] . d2kygac014 [ 0 ] *
lwj5ue2hgkd [ 1 ] - lwj5ue2hgkd [ 0 ] * rtB . nyqetrz43uqkk [ peigugf4ug ] .
d2kygac014 [ 1 ] ; rtB . byhpdluumbu [ 3 * peigugf4ug ] = jnkxh0rf3gh [ 0 ] ;
rtB . byhpdluumbu [ 3 * peigugf4ug + 1 ] = jnkxh0rf3gh [ 1 ] ; rtB .
byhpdluumbu [ 3 * peigugf4ug + 2 ] = jnkxh0rf3gh [ 2 ] ; } void
ozenep403fTID3 ( int32_T peigugf4ug ) { real32_T bzv0spra3zj [ 3 ] ; real32_T
lwj5ue2hgkd [ 3 ] ; rtB . nyqetrz43uqkk [ peigugf4ug ] . dbot5mi30f [ 0 ] = (
real32_T ) rtP . xyz_cg [ 0 ] ; rtB . nyqetrz43uqkk [ peigugf4ug ] .
dbot5mi30f [ 1 ] = ( real32_T ) rtP . xyz_cg [ 1 ] ; rtB . nyqetrz43uqkk [
peigugf4ug ] . dbot5mi30f [ 2 ] = ( real32_T ) rtP . xyz_cg [ 2 ] ;
bzv0spra3zj [ 0 ] = rtP . NodePoints_Value_d4fj4hrpe3 [ 3 * peigugf4ug ] ;
lwj5ue2hgkd [ 0 ] = rtB . ayq52soaqwz [ 3 * peigugf4ug ] ; bzv0spra3zj [ 1 ]
= rtP . NodePoints_Value_d4fj4hrpe3 [ 3 * peigugf4ug + 1 ] ; lwj5ue2hgkd [ 1
] = rtB . ayq52soaqwz [ 3 * peigugf4ug + 1 ] ; bzv0spra3zj [ 2 ] = rtP .
NodePoints_Value_d4fj4hrpe3 [ 3 * peigugf4ug + 2 ] ; lwj5ue2hgkd [ 2 ] = rtB
. ayq52soaqwz [ 3 * peigugf4ug + 2 ] ; } void nonjggp2zg ( int32_T jagyoxt1fz
) { real32_T jbwi0xitxv ; real32_T c1lu2bs0gg [ 3 ] ; real32_T kjzcbd5o3r [ 3
] ; jbwi0xitxv = rtB . korrwukkg3 [ jagyoxt1fz ] ; c1lu2bs0gg [ 0 ] = rtB .
bflkh3tw3c [ 3 * jagyoxt1fz ] ; c1lu2bs0gg [ 1 ] = rtB . bflkh3tw3c [ 3 *
jagyoxt1fz + 1 ] ; c1lu2bs0gg [ 2 ] = rtB . bflkh3tw3c [ 3 * jagyoxt1fz + 2 ]
; { real_T fpimk5asyt [ 9 ] ; real_T k1hih2hasy_idx_0 ; real_T
k1hih2hasy_idx_1 ; real_T onujjcrdl4_idx_0 ; real_T onujjcrdl4_idx_1 ;
int32_T i ; real32_T tmp ; real32_T tmp_e ; real32_T tmp_p ;
muDoubleScalarSinCos ( jbwi0xitxv , & k1hih2hasy_idx_0 , & onujjcrdl4_idx_0 )
; muDoubleScalarSinCos ( rtP . nyqetrz43uqkkp . Constant_Value_dl1cryfboe , &
k1hih2hasy_idx_1 , & onujjcrdl4_idx_1 ) ; fpimk5asyt [ 0 ] = onujjcrdl4_idx_0
* onujjcrdl4_idx_1 ; fpimk5asyt [ 1 ] = - ( onujjcrdl4_idx_0 *
k1hih2hasy_idx_1 ) ; fpimk5asyt [ 2 ] = - k1hih2hasy_idx_0 ; fpimk5asyt [ 3 ]
= k1hih2hasy_idx_1 ; fpimk5asyt [ 4 ] = onujjcrdl4_idx_1 ; fpimk5asyt [ 5 ] =
rtP . nyqetrz43uqkkp . Constant_Value ; fpimk5asyt [ 6 ] = k1hih2hasy_idx_0 *
onujjcrdl4_idx_1 ; fpimk5asyt [ 7 ] = - ( k1hih2hasy_idx_0 * k1hih2hasy_idx_1
) ; fpimk5asyt [ 8 ] = onujjcrdl4_idx_0 ; tmp = - c1lu2bs0gg [ 0 ] ; tmp_p =
c1lu2bs0gg [ 1 ] ; tmp_e = - c1lu2bs0gg [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ )
{ kjzcbd5o3r [ i ] = 0.0F ; kjzcbd5o3r [ i ] += ( real32_T ) fpimk5asyt [ 3 *
i ] * tmp ; kjzcbd5o3r [ i ] += ( real32_T ) fpimk5asyt [ 3 * i + 1 ] * tmp_p
; kjzcbd5o3r [ i ] += ( real32_T ) fpimk5asyt [ 3 * i + 2 ] * tmp_e ; } } rtB
. ayq52soaqwz [ 3 * jagyoxt1fz ] = kjzcbd5o3r [ 0 ] ; rtB . ayq52soaqwz [ 3 *
jagyoxt1fz + 1 ] = kjzcbd5o3r [ 1 ] ; rtB . ayq52soaqwz [ 3 * jagyoxt1fz + 2
] = kjzcbd5o3r [ 2 ] ; } void nonjggp2zgTID3 ( int32_T jagyoxt1fz ) {
real32_T jbwi0xitxv ; real32_T c1lu2bs0gg [ 3 ] ; jbwi0xitxv = rtB .
korrwukkg3 [ jagyoxt1fz ] ; c1lu2bs0gg [ 0 ] = rtB . bflkh3tw3c [ 3 *
jagyoxt1fz ] ; c1lu2bs0gg [ 1 ] = rtB . bflkh3tw3c [ 3 * jagyoxt1fz + 1 ] ;
c1lu2bs0gg [ 2 ] = rtB . bflkh3tw3c [ 3 * jagyoxt1fz + 2 ] ; } void
gpbjdtigub ( void ) { int32_T nbulfcirnz ; for ( nbulfcirnz = 0 ; nbulfcirnz
< 7 ; nbulfcirnz ++ ) { rtB . nyqetrz43uqkkpi [ nbulfcirnz ] . jqzydkhuci [ 0
] = 0.0F ; rtB . nyqetrz43uqkkpi [ nbulfcirnz ] . gg011l2nji [ 0 ] = 0.0F ;
rtB . nyqetrz43uqkkpi [ nbulfcirnz ] . jqzydkhuci [ 1 ] = 0.0F ; rtB .
nyqetrz43uqkkpi [ nbulfcirnz ] . gg011l2nji [ 1 ] = 0.0F ; rtB .
nyqetrz43uqkkpi [ nbulfcirnz ] . jqzydkhuci [ 2 ] = 0.0F ; rtB .
nyqetrz43uqkkpi [ nbulfcirnz ] . gg011l2nji [ 2 ] = 0.0F ; } } void
jiwpvcutff ( int32_T nbulfcirnz ) { real32_T bzv0spra3zj4 [ 3 ] ; real32_T
lwj5ue2hgkdi [ 3 ] ; real32_T jnkxh0rf3ghc [ 3 ] ; bzv0spra3zj4 [ 0 ] = rtP .
NodePoints_Value_d4b2lmxebb [ 3 * nbulfcirnz ] ; lwj5ue2hgkdi [ 0 ] = rtB .
ayq52soaqw [ 3 * nbulfcirnz ] ; bzv0spra3zj4 [ 1 ] = rtP .
NodePoints_Value_d4b2lmxebb [ 3 * nbulfcirnz + 1 ] ; lwj5ue2hgkdi [ 1 ] = rtB
. ayq52soaqw [ 3 * nbulfcirnz + 1 ] ; bzv0spra3zj4 [ 2 ] = rtP .
NodePoints_Value_d4b2lmxebb [ 3 * nbulfcirnz + 2 ] ; lwj5ue2hgkdi [ 2 ] = rtB
. ayq52soaqw [ 3 * nbulfcirnz + 2 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
rtB . nyqetrz43uqkkpi [ nbulfcirnz ] . jqzydkhuci [ 0 ] = bzv0spra3zj4 [ 0 ]
- rtB . nyqetrz43uqkkpi [ nbulfcirnz ] . gg011l2nji [ 0 ] ; rtB .
nyqetrz43uqkkpi [ nbulfcirnz ] . jqzydkhuci [ 1 ] = bzv0spra3zj4 [ 1 ] - rtB
. nyqetrz43uqkkpi [ nbulfcirnz ] . gg011l2nji [ 1 ] ; rtB . nyqetrz43uqkkpi [
nbulfcirnz ] . jqzydkhuci [ 2 ] = bzv0spra3zj4 [ 2 ] - rtB . nyqetrz43uqkkpi
[ nbulfcirnz ] . gg011l2nji [ 2 ] ; } jnkxh0rf3ghc [ 0 ] = rtB .
nyqetrz43uqkkpi [ nbulfcirnz ] . jqzydkhuci [ 1 ] * lwj5ue2hgkdi [ 2 ] -
lwj5ue2hgkdi [ 1 ] * rtB . nyqetrz43uqkkpi [ nbulfcirnz ] . jqzydkhuci [ 2 ]
; jnkxh0rf3ghc [ 1 ] = lwj5ue2hgkdi [ 0 ] * rtB . nyqetrz43uqkkpi [
nbulfcirnz ] . jqzydkhuci [ 2 ] - rtB . nyqetrz43uqkkpi [ nbulfcirnz ] .
jqzydkhuci [ 0 ] * lwj5ue2hgkdi [ 2 ] ; jnkxh0rf3ghc [ 2 ] = rtB .
nyqetrz43uqkkpi [ nbulfcirnz ] . jqzydkhuci [ 0 ] * lwj5ue2hgkdi [ 1 ] -
lwj5ue2hgkdi [ 0 ] * rtB . nyqetrz43uqkkpi [ nbulfcirnz ] . jqzydkhuci [ 1 ]
; rtB . byhpdluumb [ 3 * nbulfcirnz ] = jnkxh0rf3ghc [ 0 ] ; rtB . byhpdluumb
[ 3 * nbulfcirnz + 1 ] = jnkxh0rf3ghc [ 1 ] ; rtB . byhpdluumb [ 3 *
nbulfcirnz + 2 ] = jnkxh0rf3ghc [ 2 ] ; } void jiwpvcutffTID3 ( int32_T
nbulfcirnz ) { real32_T bzv0spra3zj4 [ 3 ] ; real32_T lwj5ue2hgkdi [ 3 ] ;
rtB . nyqetrz43uqkkpi [ nbulfcirnz ] . gg011l2nji [ 0 ] = ( real32_T ) rtP .
xyz_cg [ 0 ] ; rtB . nyqetrz43uqkkpi [ nbulfcirnz ] . gg011l2nji [ 1 ] = (
real32_T ) rtP . xyz_cg [ 1 ] ; rtB . nyqetrz43uqkkpi [ nbulfcirnz ] .
gg011l2nji [ 2 ] = ( real32_T ) rtP . xyz_cg [ 2 ] ; bzv0spra3zj4 [ 0 ] = rtP
. NodePoints_Value_d4b2lmxebb [ 3 * nbulfcirnz ] ; lwj5ue2hgkdi [ 0 ] = rtB .
ayq52soaqw [ 3 * nbulfcirnz ] ; bzv0spra3zj4 [ 1 ] = rtP .
NodePoints_Value_d4b2lmxebb [ 3 * nbulfcirnz + 1 ] ; lwj5ue2hgkdi [ 1 ] = rtB
. ayq52soaqw [ 3 * nbulfcirnz + 1 ] ; bzv0spra3zj4 [ 2 ] = rtP .
NodePoints_Value_d4b2lmxebb [ 3 * nbulfcirnz + 2 ] ; lwj5ue2hgkdi [ 2 ] = rtB
. ayq52soaqw [ 3 * nbulfcirnz + 2 ] ; } void jpp5owoa3n ( int32_T agcfuo5anh
) { real32_T jbwi0xitxvj ; real32_T c1lu2bs0ggd [ 3 ] ; real32_T kjzcbd5o3rz
[ 3 ] ; jbwi0xitxvj = rtB . cfz24gonbx [ agcfuo5anh + 7 ] ; c1lu2bs0ggd [ 0 ]
= rtB . lif0jqyjen [ 3 * agcfuo5anh ] ; c1lu2bs0ggd [ 1 ] = rtB . lif0jqyjen
[ 3 * agcfuo5anh + 1 ] ; c1lu2bs0ggd [ 2 ] = rtB . lif0jqyjen [ 3 *
agcfuo5anh + 2 ] ; { real_T pgunyuqaz3 [ 9 ] ; real_T dmp5won5gc_idx_0 ;
real_T dmp5won5gc_idx_1 ; real_T mccgl4diem_idx_0 ; real_T mccgl4diem_idx_1 ;
int32_T i ; real32_T tmp ; real32_T tmp_e ; real32_T tmp_p ;
muDoubleScalarSinCos ( jbwi0xitxvj , & mccgl4diem_idx_0 , & dmp5won5gc_idx_0
) ; muDoubleScalarSinCos ( rtP . fchchnbmez . Constant_Value_nflcmvsqzo , &
mccgl4diem_idx_1 , & dmp5won5gc_idx_1 ) ; pgunyuqaz3 [ 0 ] = dmp5won5gc_idx_0
* dmp5won5gc_idx_1 ; pgunyuqaz3 [ 1 ] = - ( dmp5won5gc_idx_0 *
mccgl4diem_idx_1 ) ; pgunyuqaz3 [ 2 ] = - mccgl4diem_idx_0 ; pgunyuqaz3 [ 3 ]
= mccgl4diem_idx_1 ; pgunyuqaz3 [ 4 ] = dmp5won5gc_idx_1 ; pgunyuqaz3 [ 5 ] =
rtP . fchchnbmez . Constant_Value ; pgunyuqaz3 [ 6 ] = mccgl4diem_idx_0 *
dmp5won5gc_idx_1 ; pgunyuqaz3 [ 7 ] = - ( mccgl4diem_idx_0 * mccgl4diem_idx_1
) ; pgunyuqaz3 [ 8 ] = dmp5won5gc_idx_0 ; tmp = - c1lu2bs0ggd [ 0 ] ; tmp_p =
c1lu2bs0ggd [ 1 ] ; tmp_e = - c1lu2bs0ggd [ 2 ] ; for ( i = 0 ; i < 3 ; i ++
) { kjzcbd5o3rz [ i ] = 0.0F ; kjzcbd5o3rz [ i ] += ( real32_T ) pgunyuqaz3 [
3 * i ] * tmp ; kjzcbd5o3rz [ i ] += ( real32_T ) pgunyuqaz3 [ 3 * i + 1 ] *
tmp_p ; kjzcbd5o3rz [ i ] += ( real32_T ) pgunyuqaz3 [ 3 * i + 2 ] * tmp_e ;
} } rtB . ayq52soaqw [ 3 * agcfuo5anh ] = kjzcbd5o3rz [ 0 ] ; rtB .
ayq52soaqw [ 3 * agcfuo5anh + 1 ] = kjzcbd5o3rz [ 1 ] ; rtB . ayq52soaqw [ 3
* agcfuo5anh + 2 ] = kjzcbd5o3rz [ 2 ] ; } void jpp5owoa3nTID3 ( int32_T
agcfuo5anh ) { real32_T jbwi0xitxvj ; real32_T c1lu2bs0ggd [ 3 ] ;
jbwi0xitxvj = rtB . cfz24gonbx [ agcfuo5anh + 7 ] ; c1lu2bs0ggd [ 0 ] = rtB .
lif0jqyjen [ 3 * agcfuo5anh ] ; c1lu2bs0ggd [ 1 ] = rtB . lif0jqyjen [ 3 *
agcfuo5anh + 1 ] ; c1lu2bs0ggd [ 2 ] = rtB . lif0jqyjen [ 3 * agcfuo5anh + 2
] ; } void ox2le0kgnd ( jipjhipnyt * localB , jyuzl13vhf * localP ,
bqurd3rojz * localX ) { localX -> f33fpdq10k = localP ->
DistanceintoGustxLimitedtogustlengthd_IC ; localB -> p1ejoedsxt = localP ->
x_Y0 ; } void hq4sl52upq ( jyuzl13vhf * localP , bqurd3rojz * localX ) {
localX -> f33fpdq10k = localP -> DistanceintoGustxLimitedtogustlengthd_IC ; }
void htjfqgjeis ( gnqopqlfcy * localDW ) { localDW -> pswhghvaxh = false ; }
void lw2f0ybkpo ( SimStruct * rtS_p , gnqopqlfcy * localDW ) { localDW ->
pswhghvaxh = false ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS_p ) ; }
void cz2051lnsz ( SimStruct * rtS_i , boolean_T lcpumqlhld , real_T rtp_d_m ,
jipjhipnyt * localB , gnqopqlfcy * localDW , jyuzl13vhf * localP , bqurd3rojz
* localX ) { if ( ssIsSampleHit ( rtS_i , 1 , 0 ) && ssIsMajorTimeStep (
rtS_i ) ) { if ( lcpumqlhld ) { if ( ! localDW -> pswhghvaxh ) { if (
ssGetTaskTime ( rtS_i , 1 ) != ssGetTStart ( rtS_i ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; } hq4sl52upq ( localP
, localX ) ; localDW -> pswhghvaxh = true ; } } else if ( localDW ->
pswhghvaxh ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ;
htjfqgjeis ( localDW ) ; } } if ( localDW -> pswhghvaxh ) { if (
ssIsMajorTimeStep ( rtS_i ) ) { if ( localX -> f33fpdq10k >= rtp_d_m ) { if (
localX -> f33fpdq10k != rtp_d_m ) { localX -> f33fpdq10k = rtp_d_m ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; } } else if ( ( localX
-> f33fpdq10k <= localP -> DistanceintoGustxLimitedtogustlengthd_LowerSat )
&& ( localX -> f33fpdq10k != localP ->
DistanceintoGustxLimitedtogustlengthd_LowerSat ) ) { localX -> f33fpdq10k =
localP -> DistanceintoGustxLimitedtogustlengthd_LowerSat ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; } localB -> p1ejoedsxt
= localX -> f33fpdq10k ; srUpdateBC ( localDW -> mn1t1xifkc ) ; } else if (
localX -> f33fpdq10k >= rtp_d_m ) { localB -> p1ejoedsxt = rtp_d_m ; } else
if ( localX -> f33fpdq10k <= localP ->
DistanceintoGustxLimitedtogustlengthd_LowerSat ) { localB -> p1ejoedsxt =
localP -> DistanceintoGustxLimitedtogustlengthd_LowerSat ; } else { localB ->
p1ejoedsxt = localX -> f33fpdq10k ; } } } void nuri42chkg ( real_T ku14hiphkz
, real_T rtp_d_m , gnqopqlfcy * localDW , jyuzl13vhf * localP , bqurd3rojz *
localX , mhtibmack1 * localXdot ) { if ( localDW -> pswhghvaxh ) { if ( ( (
localX -> f33fpdq10k > localP ->
DistanceintoGustxLimitedtogustlengthd_LowerSat ) && ( localX -> f33fpdq10k <
rtp_d_m ) ) || ( ( localX -> f33fpdq10k <= localP ->
DistanceintoGustxLimitedtogustlengthd_LowerSat ) && ( ku14hiphkz > 0.0 ) ) ||
( ( localX -> f33fpdq10k >= rtp_d_m ) && ( ku14hiphkz < 0.0 ) ) ) { localXdot
-> f33fpdq10k = ku14hiphkz ; } else { localXdot -> f33fpdq10k = 0.0 ; } }
else { localXdot -> f33fpdq10k = 0.0 ; } } void pm13c03kzl ( const real_T
oj5oksea0w [ 3 ] , boolean_T nvpbnzaf1k , np24g4gdau * localB ) { localB ->
mydm0s4bv0 [ 0 ] = oj5oksea0w [ 0 ] ; localB -> mydm0s4bv0 [ 1 ] = oj5oksea0w
[ 1 ] ; localB -> mydm0s4bv0 [ 2 ] = oj5oksea0w [ 2 ] ; if ( nvpbnzaf1k ) {
localB -> mydm0s4bv0 [ 0 ] = localB -> fxgxda1orz [ 0 ] ; localB ->
mydm0s4bv0 [ 1 ] = localB -> fxgxda1orz [ 1 ] ; localB -> mydm0s4bv0 [ 2 ] =
localB -> fxgxda1orz [ 2 ] ; } else { localB -> fxgxda1orz [ 0 ] = localB ->
mydm0s4bv0 [ 0 ] ; localB -> fxgxda1orz [ 1 ] = localB -> mydm0s4bv0 [ 1 ] ;
localB -> fxgxda1orz [ 2 ] = localB -> mydm0s4bv0 [ 2 ] ; } } void i5nfd4afyg
( real_T hxpylb4lh0 , real_T oonhadulgs , real_T a3fpxv10so , real_T
nmdy3bug12 , real_T jbzlh1jroc , real_T ozerumep55 , real_T j5otdaiiix ,
real_T dh5l25vrf3 , pinnhnaiew * localB ) { real_T b [ 9 ] ; real_T b_p [ 9 ]
; real_T ca_p [ 9 ] ; real_T hxpylb4lh0_p [ 3 ] ; real_T x1_dot [ 3 ] ;
real_T ca ; real_T cb ; real_T cm ; real_T sa ; real_T sb ; real_T sm ;
int32_T i ; int32_T i_p ; ca = muDoubleScalarCos ( nmdy3bug12 ) ; cb =
muDoubleScalarCos ( jbzlh1jroc ) ; cm = muDoubleScalarCos ( ozerumep55 ) ; sa
= muDoubleScalarSin ( nmdy3bug12 ) ; sb = muDoubleScalarSin ( jbzlh1jroc ) ;
sm = muDoubleScalarSin ( ozerumep55 ) ; b [ 0 ] = 1.0 ; b [ 3 ] = 0.0 ; b [ 6
] = 0.0 ; b [ 1 ] = 0.0 ; b [ 4 ] = 1.0 / ( dh5l25vrf3 * muDoubleScalarCos (
j5otdaiiix ) ) ; b [ 7 ] = 0.0 ; b [ 2 ] = 0.0 ; b [ 5 ] = 0.0 ; b [ 8 ] = -
1.0 / dh5l25vrf3 ; ca_p [ 0 ] = ca * cb ; ca_p [ 3 ] = sb ; ca_p [ 6 ] = sa *
cb ; ca_p [ 1 ] = - ca * sb * cm + sa * sm ; ca_p [ 4 ] = cb * cm ; ca_p [ 7
] = - sa * sb * cm - ca * sm ; ca_p [ 2 ] = - ca * sb * sm - sa * cm ; ca_p [
5 ] = cb * sm ; ca_p [ 8 ] = - sa * sb * sm + ca * cm ; hxpylb4lh0_p [ 0 ] =
hxpylb4lh0 ; hxpylb4lh0_p [ 1 ] = oonhadulgs ; hxpylb4lh0_p [ 2 ] =
a3fpxv10so ; for ( i = 0 ; i < 3 ; i ++ ) { ca = 0.0 ; for ( i_p = 0 ; i_p <
3 ; i_p ++ ) { b_p [ i + 3 * i_p ] = 0.0 ; b_p [ i + 3 * i_p ] += ca_p [ 3 *
i_p ] * b [ i ] ; b_p [ i + 3 * i_p ] += ca_p [ 3 * i_p + 1 ] * b [ i + 3 ] ;
b_p [ i + 3 * i_p ] += ca_p [ 3 * i_p + 2 ] * b [ i + 6 ] ; ca += b_p [ 3 *
i_p + i ] * hxpylb4lh0_p [ i_p ] ; } x1_dot [ i ] = ca / rtP . m ; } localB
-> irdqb2psgr = x1_dot [ 0 ] ; localB -> hrb5rmirrg = x1_dot [ 2 ] ; localB
-> dpynkxuvej = x1_dot [ 1 ] ; } void fzffryaiii ( void ) { int32_T
mnasfprcad ; for ( mnasfprcad = 0 ; mnasfprcad < 16 ; mnasfprcad ++ ) { rtB .
gtyk4yjlsc [ mnasfprcad ] . pqsxg0gsoe [ 0 ] = 0.0F ; rtB . gtyk4yjlsc [
mnasfprcad ] . pqsxg0gsoe [ 1 ] = 0.0F ; rtB . gtyk4yjlsc [ mnasfprcad ] .
pqsxg0gsoe [ 2 ] = 0.0F ; } } void pi0mmsuhtl ( int32_T mnasfprcad ) {
real32_T lowkmtr2jb [ 3 ] ; real32_T k012hyros3 ; real32_T asa2ci3mjl ;
real32_T ahydzprbuu ; lowkmtr2jb [ 0 ] = rtP . vtail_nodes [ 3 * mnasfprcad ]
; lowkmtr2jb [ 1 ] = rtP . vtail_nodes [ 3 * mnasfprcad + 1 ] ; lowkmtr2jb [
2 ] = rtP . vtail_nodes [ 3 * mnasfprcad + 2 ] ; { real32_T bscv5w50ts_idx_0
; real32_T pcbw14ho0o_idx_0 ; real32_T pcbw14ho0o_idx_1 ; real32_T
pcbw14ho0o_idx_2 ; pcbw14ho0o_idx_0 = rtB . gtyk4yjlsc [ mnasfprcad ] .
pqsxg0gsoe [ 0 ] - lowkmtr2jb [ 0 ] ; pcbw14ho0o_idx_1 = rtB . gtyk4yjlsc [
mnasfprcad ] . pqsxg0gsoe [ 1 ] - lowkmtr2jb [ 1 ] ; pcbw14ho0o_idx_2 = rtB .
gtyk4yjlsc [ mnasfprcad ] . pqsxg0gsoe [ 2 ] - lowkmtr2jb [ 2 ] ;
bscv5w50ts_idx_0 = ( pcbw14ho0o_idx_1 * rtB . oa43rzem0x [ 2 ] - rtB .
oa43rzem0x [ 1 ] * pcbw14ho0o_idx_2 ) + rtB . idwc4iy42u [ 0 ] ;
pcbw14ho0o_idx_2 = ( rtB . oa43rzem0x [ 0 ] * pcbw14ho0o_idx_2 -
pcbw14ho0o_idx_0 * rtB . oa43rzem0x [ 2 ] ) + rtB . idwc4iy42u [ 1 ] ;
pcbw14ho0o_idx_0 = ( pcbw14ho0o_idx_0 * rtB . oa43rzem0x [ 1 ] - rtB .
oa43rzem0x [ 0 ] * pcbw14ho0o_idx_1 ) + rtB . idwc4iy42u [ 2 ] ;
pcbw14ho0o_idx_1 = ( muSingleScalarPower ( bscv5w50ts_idx_0 , 2.0F ) +
muSingleScalarPower ( pcbw14ho0o_idx_2 , 2.0F ) ) + muSingleScalarPower (
pcbw14ho0o_idx_0 , 2.0F ) ; if ( pcbw14ho0o_idx_1 < 0.0F ) { pcbw14ho0o_idx_1
= - muSingleScalarSqrt ( - pcbw14ho0o_idx_1 ) ; } else { pcbw14ho0o_idx_1 =
muSingleScalarSqrt ( pcbw14ho0o_idx_1 ) ; } ahydzprbuu = pcbw14ho0o_idx_1 +
rtP . gtyk4yjlsc . Constant1_Value ; pcbw14ho0o_idx_2 /= ahydzprbuu ; if (
pcbw14ho0o_idx_2 > 1.0F ) { pcbw14ho0o_idx_2 = 1.0F ; } else if (
pcbw14ho0o_idx_2 < - 1.0F ) { pcbw14ho0o_idx_2 = - 1.0F ; } k012hyros3 =
muSingleScalarAsin ( pcbw14ho0o_idx_2 ) ; asa2ci3mjl = muSingleScalarAtan (
pcbw14ho0o_idx_0 / ( bscv5w50ts_idx_0 + rtP . gtyk4yjlsc . Constant1_Value )
) ; } rtB . kdt3aavh12 [ mnasfprcad ] = k012hyros3 ; rtB . bmj5mlcorvp [
mnasfprcad ] = asa2ci3mjl ; rtB . l0ol1nsxx1o [ mnasfprcad ] = ahydzprbuu ; }
void pi0mmsuhtlTID3 ( int32_T mnasfprcad ) { real32_T lowkmtr2jb [ 3 ] ; rtB
. gtyk4yjlsc [ mnasfprcad ] . pqsxg0gsoe [ 0 ] = ( real32_T ) rtP . xyz_cg [
0 ] ; rtB . gtyk4yjlsc [ mnasfprcad ] . pqsxg0gsoe [ 1 ] = ( real32_T ) rtP .
xyz_cg [ 1 ] ; rtB . gtyk4yjlsc [ mnasfprcad ] . pqsxg0gsoe [ 2 ] = (
real32_T ) rtP . xyz_cg [ 2 ] ; lowkmtr2jb [ 0 ] = rtP . vtail_nodes [ 3 *
mnasfprcad ] ; lowkmtr2jb [ 1 ] = rtP . vtail_nodes [ 3 * mnasfprcad + 1 ] ;
lowkmtr2jb [ 2 ] = rtP . vtail_nodes [ 3 * mnasfprcad + 2 ] ; } void
hs25t3rzkd ( void ) { int32_T pn21hsf1nt ; for ( pn21hsf1nt = 0 ; pn21hsf1nt
< 14 ; pn21hsf1nt ++ ) { rtB . gtyk4yjlscw [ pn21hsf1nt ] . c051fzqj5s [ 0 ]
= 0.0F ; rtB . gtyk4yjlscw [ pn21hsf1nt ] . c051fzqj5s [ 1 ] = 0.0F ; rtB .
gtyk4yjlscw [ pn21hsf1nt ] . c051fzqj5s [ 2 ] = 0.0F ; } } void i0h2b0hhep (
int32_T pn21hsf1nt ) { real32_T lowkmtr2jbg [ 3 ] ; real32_T asa2ci3mjlq ;
real32_T cx1uyjfqkl ; lowkmtr2jbg [ 0 ] = rtP . wing_nodes [ 3 * pn21hsf1nt ]
; lowkmtr2jbg [ 1 ] = rtP . wing_nodes [ 3 * pn21hsf1nt + 1 ] ; lowkmtr2jbg [
2 ] = rtP . wing_nodes [ 3 * pn21hsf1nt + 2 ] ; { real32_T auwqwwvyts ;
real32_T jtqx4bnxdl_idx_0 ; real32_T jtqx4bnxdl_idx_1 ; real32_T
jtqx4bnxdl_idx_2 ; real32_T jtqx4bnxdl_p ; real32_T odssprfdli_idx_2 ;
real32_T odssprfdli_idx_4 ; jtqx4bnxdl_idx_0 = rtB . gtyk4yjlscw [ pn21hsf1nt
] . c051fzqj5s [ 0 ] - lowkmtr2jbg [ 0 ] ; jtqx4bnxdl_idx_1 = rtB .
gtyk4yjlscw [ pn21hsf1nt ] . c051fzqj5s [ 1 ] - lowkmtr2jbg [ 1 ] ;
jtqx4bnxdl_idx_2 = rtB . gtyk4yjlscw [ pn21hsf1nt ] . c051fzqj5s [ 2 ] -
lowkmtr2jbg [ 2 ] ; odssprfdli_idx_2 = jtqx4bnxdl_idx_0 * rtB . oa43rzem0x [
1 ] ; odssprfdli_idx_4 = jtqx4bnxdl_idx_0 * rtB . oa43rzem0x [ 2 ] ;
auwqwwvyts = ( jtqx4bnxdl_idx_1 * rtB . oa43rzem0x [ 2 ] - rtB . oa43rzem0x [
1 ] * jtqx4bnxdl_idx_2 ) + rtB . idwc4iy42u [ 0 ] ; jtqx4bnxdl_p = auwqwwvyts
* auwqwwvyts ; jtqx4bnxdl_idx_0 = auwqwwvyts ; auwqwwvyts = ( rtB .
oa43rzem0x [ 0 ] * jtqx4bnxdl_idx_2 - odssprfdli_idx_4 ) + rtB . idwc4iy42u [
1 ] ; jtqx4bnxdl_p += auwqwwvyts * auwqwwvyts ; auwqwwvyts = (
odssprfdli_idx_2 - rtB . oa43rzem0x [ 0 ] * jtqx4bnxdl_idx_1 ) + rtB .
idwc4iy42u [ 2 ] ; jtqx4bnxdl_p += auwqwwvyts * auwqwwvyts ; asa2ci3mjlq =
muSingleScalarAtan ( auwqwwvyts / ( jtqx4bnxdl_idx_0 + rtP . gtyk4yjlscw .
Constant1_Value ) ) ; cx1uyjfqkl = muSingleScalarSqrt ( jtqx4bnxdl_p ) ; }
rtB . bmj5mlcorv [ pn21hsf1nt ] = asa2ci3mjlq ; rtB . l0ol1nsxx1 [ pn21hsf1nt
] = cx1uyjfqkl ; } void i0h2b0hhepTID3 ( int32_T pn21hsf1nt ) { real32_T
lowkmtr2jbg [ 3 ] ; rtB . gtyk4yjlscw [ pn21hsf1nt ] . c051fzqj5s [ 0 ] = (
real32_T ) rtP . xyz_cg [ 0 ] ; rtB . gtyk4yjlscw [ pn21hsf1nt ] . c051fzqj5s
[ 1 ] = ( real32_T ) rtP . xyz_cg [ 1 ] ; rtB . gtyk4yjlscw [ pn21hsf1nt ] .
c051fzqj5s [ 2 ] = ( real32_T ) rtP . xyz_cg [ 2 ] ; lowkmtr2jbg [ 0 ] = rtP
. wing_nodes [ 3 * pn21hsf1nt ] ; lowkmtr2jbg [ 1 ] = rtP . wing_nodes [ 3 *
pn21hsf1nt + 1 ] ; lowkmtr2jbg [ 2 ] = rtP . wing_nodes [ 3 * pn21hsf1nt + 2
] ; } void mi1xg034nq ( void ) { int32_T ozemgz40q5 ; for ( ozemgz40q5 = 0 ;
ozemgz40q5 < 16 ; ozemgz40q5 ++ ) { rtB . gtyk4yjlscwh [ ozemgz40q5 ] .
fng31hisqq [ 0 ] = 0.0F ; rtB . gtyk4yjlscwh [ ozemgz40q5 ] . fng31hisqq [ 1
] = 0.0F ; rtB . gtyk4yjlscwh [ ozemgz40q5 ] . fng31hisqq [ 2 ] = 0.0F ; } }
void pd4mrqlmyf ( int32_T ozemgz40q5 ) { real32_T ciayv1edzc [ 3 ] ; real32_T
hgirikpkxe [ 3 ] ; real32_T ogwyuornpw [ 3 ] ; ciayv1edzc [ 0 ] = rtP .
vtail_nodes [ 3 * ozemgz40q5 ] ; hgirikpkxe [ 0 ] = rtB . fjboexgbwl [ 3 *
ozemgz40q5 ] ; ciayv1edzc [ 1 ] = rtP . vtail_nodes [ 3 * ozemgz40q5 + 1 ] ;
hgirikpkxe [ 1 ] = rtB . fjboexgbwl [ 3 * ozemgz40q5 + 1 ] ; ciayv1edzc [ 2 ]
= rtP . vtail_nodes [ 3 * ozemgz40q5 + 2 ] ; hgirikpkxe [ 2 ] = rtB .
fjboexgbwl [ 3 * ozemgz40q5 + 2 ] ; { real32_T ng4vn4f30p_idx_0 ; real32_T
ng4vn4f30p_idx_1 ; real32_T ng4vn4f30p_idx_2 ; ng4vn4f30p_idx_0 = ciayv1edzc
[ 0 ] - rtB . gtyk4yjlscwh [ ozemgz40q5 ] . fng31hisqq [ 0 ] ;
ng4vn4f30p_idx_1 = ciayv1edzc [ 1 ] - rtB . gtyk4yjlscwh [ ozemgz40q5 ] .
fng31hisqq [ 1 ] ; ng4vn4f30p_idx_2 = ciayv1edzc [ 2 ] - rtB . gtyk4yjlscwh [
ozemgz40q5 ] . fng31hisqq [ 2 ] ; ogwyuornpw [ 0 ] = ng4vn4f30p_idx_1 *
hgirikpkxe [ 2 ] - hgirikpkxe [ 1 ] * ng4vn4f30p_idx_2 ; ogwyuornpw [ 1 ] =
hgirikpkxe [ 0 ] * ng4vn4f30p_idx_2 - ng4vn4f30p_idx_0 * hgirikpkxe [ 2 ] ;
ogwyuornpw [ 2 ] = ng4vn4f30p_idx_0 * hgirikpkxe [ 1 ] - hgirikpkxe [ 0 ] *
ng4vn4f30p_idx_1 ; } rtB . jqwdkrkcdnzd [ 3 * ozemgz40q5 ] = ogwyuornpw [ 0 ]
; rtB . jqwdkrkcdnzd [ 3 * ozemgz40q5 + 1 ] = ogwyuornpw [ 1 ] ; rtB .
jqwdkrkcdnzd [ 3 * ozemgz40q5 + 2 ] = ogwyuornpw [ 2 ] ; } void
pd4mrqlmyfTID3 ( int32_T ozemgz40q5 ) { real32_T ciayv1edzc [ 3 ] ; real32_T
hgirikpkxe [ 3 ] ; rtB . gtyk4yjlscwh [ ozemgz40q5 ] . fng31hisqq [ 0 ] = (
real32_T ) rtP . xyz_cg [ 0 ] ; rtB . gtyk4yjlscwh [ ozemgz40q5 ] .
fng31hisqq [ 1 ] = ( real32_T ) rtP . xyz_cg [ 1 ] ; rtB . gtyk4yjlscwh [
ozemgz40q5 ] . fng31hisqq [ 2 ] = ( real32_T ) rtP . xyz_cg [ 2 ] ;
ciayv1edzc [ 0 ] = rtP . vtail_nodes [ 3 * ozemgz40q5 ] ; hgirikpkxe [ 0 ] =
rtB . fjboexgbwl [ 3 * ozemgz40q5 ] ; ciayv1edzc [ 1 ] = rtP . vtail_nodes [
3 * ozemgz40q5 + 1 ] ; hgirikpkxe [ 1 ] = rtB . fjboexgbwl [ 3 * ozemgz40q5 +
1 ] ; ciayv1edzc [ 2 ] = rtP . vtail_nodes [ 3 * ozemgz40q5 + 2 ] ;
hgirikpkxe [ 2 ] = rtB . fjboexgbwl [ 3 * ozemgz40q5 + 2 ] ; } void
dlenkfj0qn ( void ) { int32_T hkyz3tdamy ; for ( hkyz3tdamy = 0 ; hkyz3tdamy
< 7 ; hkyz3tdamy ++ ) { rtB . gtyk4yjlscwhm [ hkyz3tdamy ] . fqucfn4ckm [ 0 ]
= 0.0F ; rtB . gtyk4yjlscwhm [ hkyz3tdamy ] . fqucfn4ckm [ 1 ] = 0.0F ; rtB .
gtyk4yjlscwhm [ hkyz3tdamy ] . fqucfn4ckm [ 2 ] = 0.0F ; } } void dufjikm3ah
( int32_T hkyz3tdamy ) { real32_T ciayv1edzcx [ 3 ] ; real32_T hgirikpkxe2 [
3 ] ; real32_T ogwyuornpwv [ 3 ] ; ciayv1edzcx [ 0 ] = rtP . NodePoints_Value
[ 3 * hkyz3tdamy ] ; hgirikpkxe2 [ 0 ] = rtB . azuslmfajsh [ 3 * hkyz3tdamy ]
; ciayv1edzcx [ 1 ] = rtP . NodePoints_Value [ 3 * hkyz3tdamy + 1 ] ;
hgirikpkxe2 [ 1 ] = rtB . azuslmfajsh [ 3 * hkyz3tdamy + 1 ] ; ciayv1edzcx [
2 ] = rtP . NodePoints_Value [ 3 * hkyz3tdamy + 2 ] ; hgirikpkxe2 [ 2 ] = rtB
. azuslmfajsh [ 3 * hkyz3tdamy + 2 ] ; { real32_T bvelrjzoqi_idx_0 ; real32_T
bvelrjzoqi_idx_1 ; real32_T bvelrjzoqi_idx_2 ; bvelrjzoqi_idx_0 = ciayv1edzcx
[ 0 ] - rtB . gtyk4yjlscwhm [ hkyz3tdamy ] . fqucfn4ckm [ 0 ] ;
bvelrjzoqi_idx_1 = ciayv1edzcx [ 1 ] - rtB . gtyk4yjlscwhm [ hkyz3tdamy ] .
fqucfn4ckm [ 1 ] ; bvelrjzoqi_idx_2 = ciayv1edzcx [ 2 ] - rtB . gtyk4yjlscwhm
[ hkyz3tdamy ] . fqucfn4ckm [ 2 ] ; ogwyuornpwv [ 0 ] = bvelrjzoqi_idx_1 *
hgirikpkxe2 [ 2 ] - hgirikpkxe2 [ 1 ] * bvelrjzoqi_idx_2 ; ogwyuornpwv [ 1 ]
= hgirikpkxe2 [ 0 ] * bvelrjzoqi_idx_2 - bvelrjzoqi_idx_0 * hgirikpkxe2 [ 2 ]
; ogwyuornpwv [ 2 ] = bvelrjzoqi_idx_0 * hgirikpkxe2 [ 1 ] - hgirikpkxe2 [ 0
] * bvelrjzoqi_idx_1 ; } rtB . jqwdkrkcdnz [ 3 * hkyz3tdamy ] = ogwyuornpwv [
0 ] ; rtB . jqwdkrkcdnz [ 3 * hkyz3tdamy + 1 ] = ogwyuornpwv [ 1 ] ; rtB .
jqwdkrkcdnz [ 3 * hkyz3tdamy + 2 ] = ogwyuornpwv [ 2 ] ; } void
dufjikm3ahTID3 ( int32_T hkyz3tdamy ) { real32_T ciayv1edzcx [ 3 ] ; real32_T
hgirikpkxe2 [ 3 ] ; rtB . gtyk4yjlscwhm [ hkyz3tdamy ] . fqucfn4ckm [ 0 ] = (
real32_T ) rtP . xyz_cg [ 0 ] ; rtB . gtyk4yjlscwhm [ hkyz3tdamy ] .
fqucfn4ckm [ 1 ] = ( real32_T ) rtP . xyz_cg [ 1 ] ; rtB . gtyk4yjlscwhm [
hkyz3tdamy ] . fqucfn4ckm [ 2 ] = ( real32_T ) rtP . xyz_cg [ 2 ] ;
ciayv1edzcx [ 0 ] = rtP . NodePoints_Value [ 3 * hkyz3tdamy ] ; hgirikpkxe2 [
0 ] = rtB . azuslmfajsh [ 3 * hkyz3tdamy ] ; ciayv1edzcx [ 1 ] = rtP .
NodePoints_Value [ 3 * hkyz3tdamy + 1 ] ; hgirikpkxe2 [ 1 ] = rtB .
azuslmfajsh [ 3 * hkyz3tdamy + 1 ] ; ciayv1edzcx [ 2 ] = rtP .
NodePoints_Value [ 3 * hkyz3tdamy + 2 ] ; hgirikpkxe2 [ 2 ] = rtB .
azuslmfajsh [ 3 * hkyz3tdamy + 2 ] ; } void j53etjiqle ( int32_T npneggn0zt )
{ real32_T nh42vuucm1 ; real32_T ilcsomgywe [ 3 ] ; real32_T ma1wpk5zje [ 3 ]
; nh42vuucm1 = rtB . hh1kkx1lhe [ npneggn0zt ] ; ilcsomgywe [ 0 ] = rtB .
cp2nddenxm [ 3 * npneggn0zt ] ; ilcsomgywe [ 1 ] = rtB . cp2nddenxm [ 3 *
npneggn0zt + 1 ] ; ilcsomgywe [ 2 ] = rtB . cp2nddenxm [ 3 * npneggn0zt + 2 ]
; { real_T e30kfw3uro [ 9 ] ; real_T fe0rbdggql_idx_0 ; real_T
fe0rbdggql_idx_1 ; real_T i3fnmixxdw_idx_0 ; real_T i3fnmixxdw_idx_1 ;
int32_T i ; real32_T tmp ; real32_T tmp_e ; real32_T tmp_p ;
muDoubleScalarSinCos ( nh42vuucm1 , & fe0rbdggql_idx_0 , & i3fnmixxdw_idx_0 )
; muDoubleScalarSinCos ( rtP . gtyk4yjlscwhmj . Constant_Value_pww4042kpl , &
fe0rbdggql_idx_1 , & i3fnmixxdw_idx_1 ) ; e30kfw3uro [ 0 ] = i3fnmixxdw_idx_0
* i3fnmixxdw_idx_1 ; e30kfw3uro [ 1 ] = - ( i3fnmixxdw_idx_0 *
fe0rbdggql_idx_1 ) ; e30kfw3uro [ 2 ] = - fe0rbdggql_idx_0 ; e30kfw3uro [ 3 ]
= fe0rbdggql_idx_1 ; e30kfw3uro [ 4 ] = i3fnmixxdw_idx_1 ; e30kfw3uro [ 5 ] =
rtP . gtyk4yjlscwhmj . Constant_Value ; e30kfw3uro [ 6 ] = fe0rbdggql_idx_0 *
i3fnmixxdw_idx_1 ; e30kfw3uro [ 7 ] = - ( fe0rbdggql_idx_0 * fe0rbdggql_idx_1
) ; e30kfw3uro [ 8 ] = i3fnmixxdw_idx_0 ; tmp = - ilcsomgywe [ 0 ] ; tmp_p =
ilcsomgywe [ 1 ] ; tmp_e = - ilcsomgywe [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ )
{ ma1wpk5zje [ i ] = 0.0F ; ma1wpk5zje [ i ] += ( real32_T ) e30kfw3uro [ 3 *
i ] * tmp ; ma1wpk5zje [ i ] += ( real32_T ) e30kfw3uro [ 3 * i + 1 ] * tmp_p
; ma1wpk5zje [ i ] += ( real32_T ) e30kfw3uro [ 3 * i + 2 ] * tmp_e ; } } rtB
. azuslmfajsh [ 3 * npneggn0zt ] = ma1wpk5zje [ 0 ] ; rtB . azuslmfajsh [ 3 *
npneggn0zt + 1 ] = ma1wpk5zje [ 1 ] ; rtB . azuslmfajsh [ 3 * npneggn0zt + 2
] = ma1wpk5zje [ 2 ] ; } void j53etjiqleTID3 ( int32_T npneggn0zt ) {
real32_T nh42vuucm1 ; real32_T ilcsomgywe [ 3 ] ; nh42vuucm1 = rtB .
hh1kkx1lhe [ npneggn0zt ] ; ilcsomgywe [ 0 ] = rtB . cp2nddenxm [ 3 *
npneggn0zt ] ; ilcsomgywe [ 1 ] = rtB . cp2nddenxm [ 3 * npneggn0zt + 1 ] ;
ilcsomgywe [ 2 ] = rtB . cp2nddenxm [ 3 * npneggn0zt + 2 ] ; } void
l4blg1j0ys ( void ) { int32_T gs5dmybnc3 ; for ( gs5dmybnc3 = 0 ; gs5dmybnc3
< 7 ; gs5dmybnc3 ++ ) { rtB . gtyk4yjlscwhmj4 [ gs5dmybnc3 ] . bvclst2czt [ 0
] = 0.0F ; rtB . gtyk4yjlscwhmj4 [ gs5dmybnc3 ] . bvclst2czt [ 1 ] = 0.0F ;
rtB . gtyk4yjlscwhmj4 [ gs5dmybnc3 ] . bvclst2czt [ 2 ] = 0.0F ; } } void
hxpjklhlk1 ( int32_T gs5dmybnc3 ) { real32_T ciayv1edzcxx [ 3 ] ; real32_T
hgirikpkxe2n [ 3 ] ; real32_T ogwyuornpwv3 [ 3 ] ; ciayv1edzcxx [ 0 ] = rtP .
NodePoints_Value_kyr5ge2o4p [ 3 * gs5dmybnc3 ] ; hgirikpkxe2n [ 0 ] = rtB .
azuslmfajs [ 3 * gs5dmybnc3 ] ; ciayv1edzcxx [ 1 ] = rtP .
NodePoints_Value_kyr5ge2o4p [ 3 * gs5dmybnc3 + 1 ] ; hgirikpkxe2n [ 1 ] = rtB
. azuslmfajs [ 3 * gs5dmybnc3 + 1 ] ; ciayv1edzcxx [ 2 ] = rtP .
NodePoints_Value_kyr5ge2o4p [ 3 * gs5dmybnc3 + 2 ] ; hgirikpkxe2n [ 2 ] = rtB
. azuslmfajs [ 3 * gs5dmybnc3 + 2 ] ; { real32_T a1tqdi5bbe_idx_0 ; real32_T
a1tqdi5bbe_idx_1 ; real32_T a1tqdi5bbe_idx_2 ; a1tqdi5bbe_idx_0 =
ciayv1edzcxx [ 0 ] - rtB . gtyk4yjlscwhmj4 [ gs5dmybnc3 ] . bvclst2czt [ 0 ]
; a1tqdi5bbe_idx_1 = ciayv1edzcxx [ 1 ] - rtB . gtyk4yjlscwhmj4 [ gs5dmybnc3
] . bvclst2czt [ 1 ] ; a1tqdi5bbe_idx_2 = ciayv1edzcxx [ 2 ] - rtB .
gtyk4yjlscwhmj4 [ gs5dmybnc3 ] . bvclst2czt [ 2 ] ; ogwyuornpwv3 [ 0 ] =
a1tqdi5bbe_idx_1 * hgirikpkxe2n [ 2 ] - hgirikpkxe2n [ 1 ] * a1tqdi5bbe_idx_2
; ogwyuornpwv3 [ 1 ] = hgirikpkxe2n [ 0 ] * a1tqdi5bbe_idx_2 -
a1tqdi5bbe_idx_0 * hgirikpkxe2n [ 2 ] ; ogwyuornpwv3 [ 2 ] = a1tqdi5bbe_idx_0
* hgirikpkxe2n [ 1 ] - hgirikpkxe2n [ 0 ] * a1tqdi5bbe_idx_1 ; } rtB .
jqwdkrkcdn [ 3 * gs5dmybnc3 ] = ogwyuornpwv3 [ 0 ] ; rtB . jqwdkrkcdn [ 3 *
gs5dmybnc3 + 1 ] = ogwyuornpwv3 [ 1 ] ; rtB . jqwdkrkcdn [ 3 * gs5dmybnc3 + 2
] = ogwyuornpwv3 [ 2 ] ; } void hxpjklhlk1TID3 ( int32_T gs5dmybnc3 ) {
real32_T ciayv1edzcxx [ 3 ] ; real32_T hgirikpkxe2n [ 3 ] ; rtB .
gtyk4yjlscwhmj4 [ gs5dmybnc3 ] . bvclst2czt [ 0 ] = ( real32_T ) rtP . xyz_cg
[ 0 ] ; rtB . gtyk4yjlscwhmj4 [ gs5dmybnc3 ] . bvclst2czt [ 1 ] = ( real32_T
) rtP . xyz_cg [ 1 ] ; rtB . gtyk4yjlscwhmj4 [ gs5dmybnc3 ] . bvclst2czt [ 2
] = ( real32_T ) rtP . xyz_cg [ 2 ] ; ciayv1edzcxx [ 0 ] = rtP .
NodePoints_Value_kyr5ge2o4p [ 3 * gs5dmybnc3 ] ; hgirikpkxe2n [ 0 ] = rtB .
azuslmfajs [ 3 * gs5dmybnc3 ] ; ciayv1edzcxx [ 1 ] = rtP .
NodePoints_Value_kyr5ge2o4p [ 3 * gs5dmybnc3 + 1 ] ; hgirikpkxe2n [ 1 ] = rtB
. azuslmfajs [ 3 * gs5dmybnc3 + 1 ] ; ciayv1edzcxx [ 2 ] = rtP .
NodePoints_Value_kyr5ge2o4p [ 3 * gs5dmybnc3 + 2 ] ; hgirikpkxe2n [ 2 ] = rtB
. azuslmfajs [ 3 * gs5dmybnc3 + 2 ] ; } void l13lfpb0of ( int32_T ks0xzpbkcs
) { real32_T nh42vuucm12 ; real32_T ilcsomgywej [ 3 ] ; real32_T ma1wpk5zje5
[ 3 ] ; nh42vuucm12 = rtB . bmj5mlcorv [ ks0xzpbkcs + 7 ] ; ilcsomgywej [ 0 ]
= rtB . psgma1k1le [ 3 * ks0xzpbkcs ] ; ilcsomgywej [ 1 ] = rtB . psgma1k1le
[ 3 * ks0xzpbkcs + 1 ] ; ilcsomgywej [ 2 ] = rtB . psgma1k1le [ 3 *
ks0xzpbkcs + 2 ] ; { real_T pisp12asz0 [ 9 ] ; real_T a2crer324r_idx_0 ;
real_T a2crer324r_idx_1 ; real_T cmusf0bjw4_idx_0 ; real_T cmusf0bjw4_idx_1 ;
int32_T i ; real32_T tmp ; real32_T tmp_e ; real32_T tmp_p ;
muDoubleScalarSinCos ( nh42vuucm12 , & cmusf0bjw4_idx_0 , & a2crer324r_idx_0
) ; muDoubleScalarSinCos ( rtP . gz3uih4qsj . Constant_Value_cfiqsl0uw4 , &
cmusf0bjw4_idx_1 , & a2crer324r_idx_1 ) ; pisp12asz0 [ 0 ] = a2crer324r_idx_0
* a2crer324r_idx_1 ; pisp12asz0 [ 1 ] = - ( a2crer324r_idx_0 *
cmusf0bjw4_idx_1 ) ; pisp12asz0 [ 2 ] = - cmusf0bjw4_idx_0 ; pisp12asz0 [ 3 ]
= cmusf0bjw4_idx_1 ; pisp12asz0 [ 4 ] = a2crer324r_idx_1 ; pisp12asz0 [ 5 ] =
rtP . gz3uih4qsj . Constant_Value ; pisp12asz0 [ 6 ] = cmusf0bjw4_idx_0 *
a2crer324r_idx_1 ; pisp12asz0 [ 7 ] = - ( cmusf0bjw4_idx_0 * cmusf0bjw4_idx_1
) ; pisp12asz0 [ 8 ] = a2crer324r_idx_0 ; tmp = - ilcsomgywej [ 0 ] ; tmp_p =
ilcsomgywej [ 1 ] ; tmp_e = - ilcsomgywej [ 2 ] ; for ( i = 0 ; i < 3 ; i ++
) { ma1wpk5zje5 [ i ] = 0.0F ; ma1wpk5zje5 [ i ] += ( real32_T ) pisp12asz0 [
3 * i ] * tmp ; ma1wpk5zje5 [ i ] += ( real32_T ) pisp12asz0 [ 3 * i + 1 ] *
tmp_p ; ma1wpk5zje5 [ i ] += ( real32_T ) pisp12asz0 [ 3 * i + 2 ] * tmp_e ;
} } rtB . azuslmfajs [ 3 * ks0xzpbkcs ] = ma1wpk5zje5 [ 0 ] ; rtB .
azuslmfajs [ 3 * ks0xzpbkcs + 1 ] = ma1wpk5zje5 [ 1 ] ; rtB . azuslmfajs [ 3
* ks0xzpbkcs + 2 ] = ma1wpk5zje5 [ 2 ] ; } void l13lfpb0ofTID3 ( int32_T
ks0xzpbkcs ) { real32_T nh42vuucm12 ; real32_T ilcsomgywej [ 3 ] ;
nh42vuucm12 = rtB . bmj5mlcorv [ ks0xzpbkcs + 7 ] ; ilcsomgywej [ 0 ] = rtB .
psgma1k1le [ 3 * ks0xzpbkcs ] ; ilcsomgywej [ 1 ] = rtB . psgma1k1le [ 3 *
ks0xzpbkcs + 1 ] ; ilcsomgywej [ 2 ] = rtB . psgma1k1le [ 3 * ks0xzpbkcs + 2
] ; } void dmjspgs0na ( void ) { int32_T dolvnvicly ; for ( dolvnvicly = 0 ;
dolvnvicly < 12 ; dolvnvicly ++ ) { rtB . hfrmr3oqrf [ dolvnvicly ] .
n0a2pawvav [ 0 ] = 0.0F ; rtB . hfrmr3oqrf [ dolvnvicly ] . n0a2pawvav [ 1 ]
= 0.0F ; rtB . hfrmr3oqrf [ dolvnvicly ] . n0a2pawvav [ 2 ] = 0.0F ; memset (
& rtB . hfrmr3oqrf [ dolvnvicly ] . escyram4xi [ 0 ] , 0 , 9U * sizeof (
real_T ) ) ; } } void o2j1dr3sk2 ( int32_T dolvnvicly ) { real_T lxja5pknwh ;
real_T agzqzwfk0f ; real_T ilnpu2irn3 [ 3 ] ; real_T hsvymp3bm3 ; real_T
evpuktluok ; real_T mcd3budars [ 3 ] ; lxja5pknwh = rtB . iql12jsbjh [
dolvnvicly ] ; agzqzwfk0f = rtB . izvthfvymi [ dolvnvicly + 6 ] ; ilnpu2irn3
[ 0 ] = rtP . xyz_DEP [ 3 * dolvnvicly ] ; ilnpu2irn3 [ 1 ] = rtP . xyz_DEP [
3 * dolvnvicly + 1 ] ; ilnpu2irn3 [ 2 ] = rtP . xyz_DEP [ 3 * dolvnvicly + 2
] ; hsvymp3bm3 = rtP . Constant2_Value_bfhijzkfha [ dolvnvicly ] ; { real_T
ejvdm3dmoi ; real_T h1dyuak0gl ; real_T kb2ygr01ep ; int32_T i ; if (
agzqzwfk0f > rtP . hfrmr3oqrf . Saturation2_UpperSat ) { ejvdm3dmoi = rtP .
hfrmr3oqrf . Saturation2_UpperSat ; } else if ( agzqzwfk0f < rtP . hfrmr3oqrf
. Saturation2_LowerSat ) { ejvdm3dmoi = rtP . hfrmr3oqrf .
Saturation2_LowerSat ; } else { ejvdm3dmoi = agzqzwfk0f ; } if ( ejvdm3dmoi >
rtP . hfrmr3oqrf . Switch1_Threshold ) { ejvdm3dmoi = look2_plinlcpw (
lxja5pknwh , rtP . hfrmr3oqrf . actf2T_Gain * ejvdm3dmoi , rtP . dp_DEP .
rpm_lookup . V_vec , rtP . dp_DEP . rpm_lookup . T_vec , rtP . dp_DEP .
rpm_lookup . rpm_gird , rtDW . hfrmr3oqrf [ dolvnvicly ] . oeej20g4lc , rtP .
hfrmr3oqrf . T2rpm_maxIndex , 43U ) ; } else { ejvdm3dmoi = rtP . hfrmr3oqrf
. Constant3_Value ; } ejvdm3dmoi *= rtP . hfrmr3oqrf . Gain1_Gain ; if (
ejvdm3dmoi > rtP . hfrmr3oqrf . Saturation_UpperSat ) { ejvdm3dmoi = rtP .
hfrmr3oqrf . Saturation_UpperSat ; } else if ( ejvdm3dmoi < rtP . hfrmr3oqrf
. Saturation_LowerSat ) { ejvdm3dmoi = rtP . hfrmr3oqrf . Saturation_LowerSat
; } kb2ygr01ep = lxja5pknwh / ( rtP . hfrmr3oqrf . Gain2_Gain * ejvdm3dmoi +
rtP . hfrmr3oqrf . Constant_Value_ezwlu54dhc ) ; if ( kb2ygr01ep > rtP .
hfrmr3oqrf . Saturation1_UpperSat ) { kb2ygr01ep = rtP . hfrmr3oqrf .
Saturation1_UpperSat ; } else if ( kb2ygr01ep < rtP . hfrmr3oqrf .
Saturation1_LowerSat ) { kb2ygr01ep = rtP . hfrmr3oqrf . Saturation1_LowerSat
; } h1dyuak0gl = look1_plinlcapw ( kb2ygr01ep , rtP . dp_DEP . J , rtP .
dp_DEP . C_T , & rtDW . hfrmr3oqrf [ dolvnvicly ] . mi4ckqsald , 45U ) ;
ejvdm3dmoi = rtB . lhopa3gq4f * h1dyuak0gl * ( ejvdm3dmoi * ejvdm3dmoi ) *
rtP . hfrmr3oqrf . Gain3_Gain ; if ( ejvdm3dmoi > rtP . hfrmr3oqrf .
Saturation_UpperSat_jufdboaki3 ) { ejvdm3dmoi = rtP . hfrmr3oqrf .
Saturation_UpperSat_jufdboaki3 ; } else if ( ejvdm3dmoi < rtP . hfrmr3oqrf .
Saturation_LowerSat_ik4bm1tipy ) { ejvdm3dmoi = rtP . hfrmr3oqrf .
Saturation_LowerSat_ik4bm1tipy ; } for ( i = 0 ; i < 3 ; i ++ ) { mcd3budars
[ i ] = 0.0 ; mcd3budars [ i ] += rtB . hfrmr3oqrf [ dolvnvicly ] .
escyram4xi [ i ] * ejvdm3dmoi ; mcd3budars [ i ] += rtB . hfrmr3oqrf [
dolvnvicly ] . escyram4xi [ i + 3 ] * rtP . hfrmr3oqrf . Constant_Value ;
mcd3budars [ i ] += rtB . hfrmr3oqrf [ dolvnvicly ] . escyram4xi [ i + 6 ] *
rtP . hfrmr3oqrf . Constant_Value ; } look1_plinlcapw ( kb2ygr01ep , rtP .
dp_DEP . J , rtP . dp_DEP . C_Q , & rtDW . hfrmr3oqrf [ dolvnvicly ] .
n40fumdhgw , 45U ) ; if ( kb2ygr01ep > rtP . hfrmr3oqrf .
Saturation3_UpperSat ) { evpuktluok = rtP . hfrmr3oqrf . Saturation3_UpperSat
; } else if ( kb2ygr01ep < rtP . hfrmr3oqrf . Saturation3_LowerSat ) {
evpuktluok = rtP . hfrmr3oqrf . Saturation3_LowerSat ; } else { evpuktluok =
kb2ygr01ep ; } } rtB . g4bvcp1bon [ dolvnvicly ] = evpuktluok ; rtB .
hgoikru4cx [ 3 * dolvnvicly ] = mcd3budars [ 0 ] ; rtB . hgoikru4cx [ 3 *
dolvnvicly + 1 ] = mcd3budars [ 1 ] ; rtB . hgoikru4cx [ 3 * dolvnvicly + 2 ]
= mcd3budars [ 2 ] ; } void o2j1dr3sk2TID3 ( int32_T dolvnvicly ) { real_T
lxja5pknwh ; real_T agzqzwfk0f ; real_T ilnpu2irn3 [ 3 ] ; real_T hsvymp3bm3
; { real_T gvno011y3i [ 9 ] ; real_T ccigxa1a4z_idx_0 ; real_T
ccigxa1a4z_idx_1 ; real_T ccigxa1a4z_idx_2 ; real_T onmecdgxqj_idx_0 ; real_T
onmecdgxqj_idx_1 ; real_T onmecdgxqj_idx_2 ; int32_T i ; rtB . hfrmr3oqrf [
dolvnvicly ] . n0a2pawvav [ 0 ] = ( real32_T ) rtP . xyz_cg [ 0 ] ; rtB .
hfrmr3oqrf [ dolvnvicly ] . n0a2pawvav [ 1 ] = ( real32_T ) rtP . xyz_cg [ 1
] ; rtB . hfrmr3oqrf [ dolvnvicly ] . n0a2pawvav [ 2 ] = ( real32_T ) rtP .
xyz_cg [ 2 ] ; muDoubleScalarSinCos ( rtP . hfrmr3oqrf . Constant1_Value , &
onmecdgxqj_idx_0 , & ccigxa1a4z_idx_0 ) ; muDoubleScalarSinCos ( rtP .
hfrmr3oqrf . DEP_incidence_Value , & onmecdgxqj_idx_1 , & ccigxa1a4z_idx_1 )
; muDoubleScalarSinCos ( rtP . hfrmr3oqrf . Constant1_Value , &
onmecdgxqj_idx_2 , & ccigxa1a4z_idx_2 ) ; gvno011y3i [ 0 ] = ccigxa1a4z_idx_0
* ccigxa1a4z_idx_1 ; gvno011y3i [ 1 ] = onmecdgxqj_idx_1 * onmecdgxqj_idx_2 *
ccigxa1a4z_idx_0 - onmecdgxqj_idx_0 * ccigxa1a4z_idx_2 ; gvno011y3i [ 2 ] =
onmecdgxqj_idx_1 * ccigxa1a4z_idx_2 * ccigxa1a4z_idx_0 + onmecdgxqj_idx_0 *
onmecdgxqj_idx_2 ; gvno011y3i [ 3 ] = onmecdgxqj_idx_0 * ccigxa1a4z_idx_1 ;
gvno011y3i [ 4 ] = onmecdgxqj_idx_1 * onmecdgxqj_idx_2 * onmecdgxqj_idx_0 +
ccigxa1a4z_idx_0 * ccigxa1a4z_idx_2 ; gvno011y3i [ 5 ] = onmecdgxqj_idx_1 *
ccigxa1a4z_idx_2 * onmecdgxqj_idx_0 - ccigxa1a4z_idx_0 * onmecdgxqj_idx_2 ;
gvno011y3i [ 6 ] = - onmecdgxqj_idx_1 ; gvno011y3i [ 7 ] = ccigxa1a4z_idx_1 *
onmecdgxqj_idx_2 ; gvno011y3i [ 8 ] = ccigxa1a4z_idx_1 * ccigxa1a4z_idx_2 ;
for ( i = 0 ; i < 3 ; i ++ ) { rtB . hfrmr3oqrf [ dolvnvicly ] . escyram4xi [
3 * i ] = gvno011y3i [ i ] ; rtB . hfrmr3oqrf [ dolvnvicly ] . escyram4xi [ 3
* i + 1 ] = gvno011y3i [ i + 3 ] ; rtB . hfrmr3oqrf [ dolvnvicly ] .
escyram4xi [ 3 * i + 2 ] = gvno011y3i [ i + 6 ] ; } } lxja5pknwh = rtB .
iql12jsbjh [ dolvnvicly ] ; agzqzwfk0f = rtB . izvthfvymi [ dolvnvicly + 6 ]
; ilnpu2irn3 [ 0 ] = rtP . xyz_DEP [ 3 * dolvnvicly ] ; ilnpu2irn3 [ 1 ] =
rtP . xyz_DEP [ 3 * dolvnvicly + 1 ] ; ilnpu2irn3 [ 2 ] = rtP . xyz_DEP [ 3 *
dolvnvicly + 2 ] ; hsvymp3bm3 = rtP . Constant2_Value_bfhijzkfha [ dolvnvicly
] ; } void fn2ws0qfrh ( real_T m0safyvoxv , real_T * gdwoerwoep ) { *
gdwoerwoep = m0safyvoxv ; } void cm0yj40hhf ( const real_T h4emru2t0x [ 7 ] ,
real_T aghwm2hpkg [ 3 ] , pnudx1mtob * localDW , fdcovmotmw * localP ) {
real_T ka1ybj10rv ; real_T tmp ; aghwm2hpkg [ 0 ] = muDoubleScalarAtan2 (
h4emru2t0x [ 5 ] , h4emru2t0x [ 6 ] ) ; if ( h4emru2t0x [ 2 ] > 1.0 ) {
ka1ybj10rv = localP -> Constant_Value ; localDW -> ik1h4vnwti = 4 ; } else if
( h4emru2t0x [ 2 ] < - 1.0 ) { ka1ybj10rv = localP ->
Constant_Value_jymkzns1qw ; localDW -> gkzhayocy3 = 4 ; } else { fn2ws0qfrh (
h4emru2t0x [ 2 ] , & ka1ybj10rv ) ; } if ( ka1ybj10rv > 1.0 ) { tmp = 1.0 ; }
else if ( ka1ybj10rv < - 1.0 ) { tmp = - 1.0 ; } else { tmp = ka1ybj10rv ; }
aghwm2hpkg [ 1 ] = muDoubleScalarAsin ( tmp ) ; aghwm2hpkg [ 2 ] = 0.0 ; }
void biiojft2vb ( const real_T fu43kwbssd [ 7 ] , real_T lenyod4yd0 [ 3 ] ,
mdby2hi4om * localDW , l3yzcch5v1 * localP ) { real_T jdcvabm51n ; real_T tmp
; lenyod4yd0 [ 0 ] = muDoubleScalarAtan2 ( fu43kwbssd [ 0 ] , fu43kwbssd [ 1
] ) ; if ( fu43kwbssd [ 2 ] > 1.0 ) { jdcvabm51n = localP -> Constant_Value ;
localDW -> o33bpxl4on = 4 ; } else if ( fu43kwbssd [ 2 ] < - 1.0 ) {
jdcvabm51n = localP -> Constant_Value_pra1yucxnp ; localDW -> kh3r3fv0yw = 4
; } else { fn2ws0qfrh ( fu43kwbssd [ 2 ] , & jdcvabm51n ) ; } if ( jdcvabm51n
> 1.0 ) { tmp = 1.0 ; } else if ( jdcvabm51n < - 1.0 ) { tmp = - 1.0 ; } else
{ tmp = jdcvabm51n ; } lenyod4yd0 [ 1 ] = muDoubleScalarAsin ( tmp ) ;
lenyod4yd0 [ 2 ] = muDoubleScalarAtan2 ( fu43kwbssd [ 3 ] , fu43kwbssd [ 4 ]
) ; } void d0idgyu5pk ( ciyews10cv * localDW ) { localDW -> n5askzs1gj = 73 ;
rtDW . f1rxuufunp . dzsm3cj0kly . n5askzs1gj = 106 ; rtDW . pw2pn5yxj3 .
dzsm3cj0kly . n5askzs1gj = 121 ; rtDW . kq23drdvrd . n5askzs1gj = 184 ; }
void dzsm3cj0kl ( SimStruct * rtS_p , real_T ay5g1lwkfe , ciyews10cv *
localDW ) { char_T * lpath ; void * diag ; if ( ! ( ay5g1lwkfe != 0.0 ) ) {
rt_ssGetBlockPath ( rtS_p , localDW -> n5askzs1gj , 0 , & lpath ) ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 , lpath
, 2 , ssGetT ( rtS_p ) ) ; rt_ssReportDiagnosticAsWarning ( rtS_p , diag ) ;
} } void j0kpvzuldr ( albhcg1zih * localDW ) { localDW -> nzkcuadowp = 74 ;
rtDW . f1rxuufunp . iyuu340oslz . nzkcuadowp = 107 ; rtDW . pw2pn5yxj3 .
iyuu340oslz . nzkcuadowp = 122 ; rtDW . c3nx5ahmxh . nzkcuadowp = 185 ; }
void iyuu340osl ( SimStruct * rtS_f , real_T nhudoztxmk , albhcg1zih *
localDW ) { char_T * lpath ; void * diag ; if ( ! ( nhudoztxmk != 0.0 ) ) {
rt_ssGetBlockPath ( rtS_f , localDW -> nzkcuadowp , 0 , & lpath ) ; diag =
CreateDiagnosticAsVoidPtr ( "Simulink:blocks:AssertionAssert" , 2 , 5 , lpath
, 2 , ssGetT ( rtS_f ) ) ; rt_ssSet_slErrMsg ( rtS_f , diag ) ;
ssSetStopRequested ( rtS_f , ( int ) ssGetT ( rtS_f ) ) ; } } void dxykukmlj3
( b0evmqbjvs * localDW ) { localDW -> p2xendpa3t = 76 ; rtDW . f1rxuufunp .
dhyklihgewe . p2xendpa3t = 109 ; rtDW . pw2pn5yxj3 . dhyklihgewe . p2xendpa3t
= 124 ; rtDW . f2z2t5yyw1 . p2xendpa3t = 187 ; } void dhyklihgew ( SimStruct
* rtS_g , real_T fxkk0va3bb , b0evmqbjvs * localDW ) { char_T * lpath ; void
* diag ; if ( ! ( fxkk0va3bb != 0.0 ) ) { rt_ssGetBlockPath ( rtS_g , localDW
-> p2xendpa3t , 0 , & lpath ) ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:AssertionAssert" , 2 , 5 , lpath , 2 , ssGetT ( rtS_g ) ) ;
rt_ssReportDiagnosticAsWarning ( rtS_g , diag ) ; } } void fed3ofjdbn (
ggcfv2g5xi * localDW ) { localDW -> epzfbulv32 = 77 ; rtDW . f1rxuufunp .
avztlaubnav . epzfbulv32 = 110 ; rtDW . pw2pn5yxj3 . avztlaubnav . epzfbulv32
= 125 ; rtDW . onvtpfrqwn . epzfbulv32 = 188 ; } void avztlaubna ( SimStruct
* rtS_n , real_T meeqhyp4gt , ggcfv2g5xi * localDW ) { char_T * lpath ; void
* diag ; if ( ! ( meeqhyp4gt != 0.0 ) ) { rt_ssGetBlockPath ( rtS_n , localDW
-> epzfbulv32 , 0 , & lpath ) ; diag = CreateDiagnosticAsVoidPtr (
"Simulink:blocks:AssertionAssert" , 2 , 5 , lpath , 2 , ssGetT ( rtS_n ) ) ;
rt_ssSet_slErrMsg ( rtS_n , diag ) ; ssSetStopRequested ( rtS_n , ( int )
ssGetT ( rtS_n ) ) ; } } void akjxpklgdz ( kklqz5j5hc * localDW ) {
fed3ofjdbn ( & localDW -> avztlaubnav ) ; dxykukmlj3 ( & localDW ->
dhyklihgewe ) ; j0kpvzuldr ( & localDW -> iyuu340oslz ) ; d0idgyu5pk ( &
localDW -> dzsm3cj0kly ) ; } void ctbmhlk4sc ( SimStruct * rtS_l , const
real_T gy4fhi10cj [ 9 ] , real_T rtp_action , real_T rtp_tolerance ,
kklqz5j5hc * localDW , ilxhyihvcy * localP ) { real_T cj0af3wmly [ 9 ] ;
real_T ndoex0mq5s [ 9 ] ; real_T tmp [ 9 ] ; real_T bbhzbnwgbi ; real_T
d1jicghxfg ; real_T hih5ozuyck ; real_T ndvuac452e ; real_T nfb5esni10 ;
real_T uTmp_idx_0 ; real_T uTmp_idx_1 ; real_T uTmp_idx_2 ; int32_T i ;
int32_T i_p ; boolean_T o52tvdccor [ 9 ] ; boolean_T tmp_p ; uTmp_idx_0 =
gy4fhi10cj [ 0 ] ; uTmp_idx_1 = gy4fhi10cj [ 4 ] ; uTmp_idx_2 = gy4fhi10cj [
8 ] ; d1jicghxfg = uTmp_idx_0 * uTmp_idx_1 * uTmp_idx_2 ; uTmp_idx_0 =
gy4fhi10cj [ 0 ] ; uTmp_idx_1 = gy4fhi10cj [ 5 ] ; uTmp_idx_2 = gy4fhi10cj [
7 ] ; bbhzbnwgbi = uTmp_idx_0 * uTmp_idx_1 * uTmp_idx_2 ; uTmp_idx_0 =
gy4fhi10cj [ 1 ] ; uTmp_idx_1 = gy4fhi10cj [ 3 ] ; uTmp_idx_2 = gy4fhi10cj [
8 ] ; hih5ozuyck = uTmp_idx_0 * uTmp_idx_1 * uTmp_idx_2 ; uTmp_idx_0 =
gy4fhi10cj [ 2 ] ; uTmp_idx_1 = gy4fhi10cj [ 3 ] ; uTmp_idx_2 = gy4fhi10cj [
7 ] ; ndvuac452e = uTmp_idx_0 * uTmp_idx_1 * uTmp_idx_2 ; uTmp_idx_0 =
gy4fhi10cj [ 1 ] ; uTmp_idx_1 = gy4fhi10cj [ 5 ] ; uTmp_idx_2 = gy4fhi10cj [
6 ] ; nfb5esni10 = uTmp_idx_0 * uTmp_idx_1 * uTmp_idx_2 ; uTmp_idx_0 =
gy4fhi10cj [ 2 ] ; uTmp_idx_1 = gy4fhi10cj [ 4 ] ; uTmp_idx_2 = gy4fhi10cj [
6 ] ; for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { cj0af3wmly [ 3 * i_p ] =
gy4fhi10cj [ i_p ] ; cj0af3wmly [ 3 * i_p + 1 ] = gy4fhi10cj [ i_p + 3 ] ;
cj0af3wmly [ 3 * i_p + 2 ] = gy4fhi10cj [ i_p + 6 ] ; } for ( i_p = 0 ; i_p <
9 ; i_p ++ ) { tmp [ i_p ] = gy4fhi10cj [ i_p ] ; } for ( i_p = 0 ; i_p < 3 ;
i_p ++ ) { for ( i = 0 ; i < 3 ; i ++ ) { ndoex0mq5s [ i_p + 3 * i ] = ( (
tmp [ 3 * i + 1 ] * cj0af3wmly [ i_p + 3 ] + tmp [ 3 * i ] * cj0af3wmly [ i_p
] ) + tmp [ 3 * i + 2 ] * cj0af3wmly [ i_p + 6 ] ) + localP -> Bias1_Bias [ 3
* i + i_p ] ; } } for ( i_p = 0 ; i_p < 9 ; i_p ++ ) { o52tvdccor [ i_p ] = (
muDoubleScalarAbs ( ndoex0mq5s [ i_p ] ) > rtp_tolerance ) ; } tmp_p =
o52tvdccor [ 0 ] ; for ( i_p = 0 ; i_p < 8 ; i_p ++ ) { tmp_p = ( tmp_p ||
o52tvdccor [ i_p + 1 ] ) ; } if ( muDoubleScalarAbs ( ( ( ( ( ( d1jicghxfg -
bbhzbnwgbi ) - hih5ozuyck ) + ndvuac452e ) + nfb5esni10 ) - uTmp_idx_0 *
uTmp_idx_1 * uTmp_idx_2 ) + localP -> Bias_Bias ) > rtp_tolerance ) { if (
rtp_action == 2.0 ) { dzsm3cj0kl ( rtS_l , localP -> Constant1_Value , &
localDW -> dzsm3cj0kly ) ; } else if ( rtp_action == 3.0 ) { iyuu340osl (
rtS_l , localP -> Constant1_Value , & localDW -> iyuu340oslz ) ; } localDW ->
gpjpxfvvnp = 4 ; } else if ( tmp_p ) { if ( rtp_action == 2.0 ) { dhyklihgew
( rtS_l , localP -> Constant1_Value_ada1zwk4nh , & localDW -> dhyklihgewe ) ;
} else if ( rtp_action == 3.0 ) { avztlaubna ( rtS_l , localP ->
Constant1_Value_ada1zwk4nh , & localDW -> avztlaubnav ) ; } localDW ->
bb4awxjtrl = 4 ; } } void detis300xd ( void ) { int32_T obd2pbammo ; for (
obd2pbammo = 0 ; obd2pbammo < 16 ; obd2pbammo ++ ) { rtB . jqcuts4d2x [
obd2pbammo ] . ndw5fpgtzy [ 0 ] = 0.0F ; rtB . jqcuts4d2x [ obd2pbammo ] .
ndw5fpgtzy [ 1 ] = 0.0F ; rtB . jqcuts4d2x [ obd2pbammo ] . ndw5fpgtzy [ 2 ]
= 0.0F ; } } void mtrxzbtg4o ( int32_T obd2pbammo ) { real32_T jqeqwpkbfq [ 3
] ; real32_T atrzsrd5rj ; real32_T ht0bysawqa ; real32_T ik44mgxxck ;
jqeqwpkbfq [ 0 ] = rtP . vtail_nodes [ 3 * obd2pbammo ] ; jqeqwpkbfq [ 1 ] =
rtP . vtail_nodes [ 3 * obd2pbammo + 1 ] ; jqeqwpkbfq [ 2 ] = rtP .
vtail_nodes [ 3 * obd2pbammo + 2 ] ; { real32_T lw2fmeb53e_idx_0 ; real32_T
lw2fmeb53e_idx_1 ; real32_T lw2fmeb53e_idx_2 ; real32_T oshr2jvae0_idx_0 ;
lw2fmeb53e_idx_0 = rtB . jqcuts4d2x [ obd2pbammo ] . ndw5fpgtzy [ 0 ] -
jqeqwpkbfq [ 0 ] ; lw2fmeb53e_idx_1 = rtB . jqcuts4d2x [ obd2pbammo ] .
ndw5fpgtzy [ 1 ] - jqeqwpkbfq [ 1 ] ; lw2fmeb53e_idx_2 = rtB . jqcuts4d2x [
obd2pbammo ] . ndw5fpgtzy [ 2 ] - jqeqwpkbfq [ 2 ] ; oshr2jvae0_idx_0 = (
lw2fmeb53e_idx_1 * rtB . nnfetlp35t [ 2 ] - rtB . nnfetlp35t [ 1 ] *
lw2fmeb53e_idx_2 ) + rtB . ktfkjimbx1 [ 0 ] ; lw2fmeb53e_idx_2 = ( rtB .
nnfetlp35t [ 0 ] * lw2fmeb53e_idx_2 - lw2fmeb53e_idx_0 * rtB . nnfetlp35t [ 2
] ) + rtB . ktfkjimbx1 [ 1 ] ; lw2fmeb53e_idx_0 = ( lw2fmeb53e_idx_0 * rtB .
nnfetlp35t [ 1 ] - rtB . nnfetlp35t [ 0 ] * lw2fmeb53e_idx_1 ) + rtB .
ktfkjimbx1 [ 2 ] ; lw2fmeb53e_idx_1 = ( muSingleScalarPower (
oshr2jvae0_idx_0 , 2.0F ) + muSingleScalarPower ( lw2fmeb53e_idx_2 , 2.0F ) )
+ muSingleScalarPower ( lw2fmeb53e_idx_0 , 2.0F ) ; if ( lw2fmeb53e_idx_1 <
0.0F ) { lw2fmeb53e_idx_1 = - muSingleScalarSqrt ( - lw2fmeb53e_idx_1 ) ; }
else { lw2fmeb53e_idx_1 = muSingleScalarSqrt ( lw2fmeb53e_idx_1 ) ; }
ik44mgxxck = lw2fmeb53e_idx_1 + rtP . jqcuts4d2x . Constant1_Value ;
lw2fmeb53e_idx_2 /= ik44mgxxck ; if ( lw2fmeb53e_idx_2 > 1.0F ) {
lw2fmeb53e_idx_2 = 1.0F ; } else if ( lw2fmeb53e_idx_2 < - 1.0F ) {
lw2fmeb53e_idx_2 = - 1.0F ; } atrzsrd5rj = muSingleScalarAsin (
lw2fmeb53e_idx_2 ) ; ht0bysawqa = muSingleScalarAtan ( lw2fmeb53e_idx_0 / (
oshr2jvae0_idx_0 + rtP . jqcuts4d2x . Constant1_Value ) ) ; } rtB .
imvdti53mt [ obd2pbammo ] = atrzsrd5rj ; rtB . nt1ep5s5gk4 [ obd2pbammo ] =
ht0bysawqa ; rtB . a3xfql2xu1x [ obd2pbammo ] = ik44mgxxck ; } void
mtrxzbtg4oTID3 ( int32_T obd2pbammo ) { real32_T jqeqwpkbfq [ 3 ] ; rtB .
jqcuts4d2x [ obd2pbammo ] . ndw5fpgtzy [ 0 ] = ( real32_T ) rtP . xyz_cg [ 0
] ; rtB . jqcuts4d2x [ obd2pbammo ] . ndw5fpgtzy [ 1 ] = ( real32_T ) rtP .
xyz_cg [ 1 ] ; rtB . jqcuts4d2x [ obd2pbammo ] . ndw5fpgtzy [ 2 ] = (
real32_T ) rtP . xyz_cg [ 2 ] ; jqeqwpkbfq [ 0 ] = rtP . vtail_nodes [ 3 *
obd2pbammo ] ; jqeqwpkbfq [ 1 ] = rtP . vtail_nodes [ 3 * obd2pbammo + 1 ] ;
jqeqwpkbfq [ 2 ] = rtP . vtail_nodes [ 3 * obd2pbammo + 2 ] ; } void
oza4gbpsob ( void ) { int32_T hpkwusiilh ; for ( hpkwusiilh = 0 ; hpkwusiilh
< 14 ; hpkwusiilh ++ ) { rtB . jqcuts4d2xy [ hpkwusiilh ] . cx2jbj4gyj [ 0 ]
= 0.0F ; rtB . jqcuts4d2xy [ hpkwusiilh ] . cx2jbj4gyj [ 1 ] = 0.0F ; rtB .
jqcuts4d2xy [ hpkwusiilh ] . cx2jbj4gyj [ 2 ] = 0.0F ; } } void e3uu0qv2yt (
int32_T hpkwusiilh ) { real32_T jqeqwpkbfq2 [ 3 ] ; real32_T ht0bysawqah ;
real32_T ly5hlwe34x ; jqeqwpkbfq2 [ 0 ] = rtP . wing_nodes [ 3 * hpkwusiilh ]
; jqeqwpkbfq2 [ 1 ] = rtP . wing_nodes [ 3 * hpkwusiilh + 1 ] ; jqeqwpkbfq2 [
2 ] = rtP . wing_nodes [ 3 * hpkwusiilh + 2 ] ; { real32_T axzw4y2cmq_idx_0 ;
real32_T axzw4y2cmq_idx_1 ; real32_T axzw4y2cmq_idx_2 ; real32_T axzw4y2cmq_p
; real32_T d5zqci2jzt_idx_2 ; real32_T d5zqci2jzt_idx_4 ; real32_T ejnczpbb3m
; axzw4y2cmq_idx_0 = rtB . jqcuts4d2xy [ hpkwusiilh ] . cx2jbj4gyj [ 0 ] -
jqeqwpkbfq2 [ 0 ] ; axzw4y2cmq_idx_1 = rtB . jqcuts4d2xy [ hpkwusiilh ] .
cx2jbj4gyj [ 1 ] - jqeqwpkbfq2 [ 1 ] ; axzw4y2cmq_idx_2 = rtB . jqcuts4d2xy [
hpkwusiilh ] . cx2jbj4gyj [ 2 ] - jqeqwpkbfq2 [ 2 ] ; d5zqci2jzt_idx_2 =
axzw4y2cmq_idx_0 * rtB . nnfetlp35t [ 1 ] ; d5zqci2jzt_idx_4 =
axzw4y2cmq_idx_0 * rtB . nnfetlp35t [ 2 ] ; ejnczpbb3m = ( axzw4y2cmq_idx_1 *
rtB . nnfetlp35t [ 2 ] - rtB . nnfetlp35t [ 1 ] * axzw4y2cmq_idx_2 ) + rtB .
ktfkjimbx1 [ 0 ] ; axzw4y2cmq_p = ejnczpbb3m * ejnczpbb3m ; axzw4y2cmq_idx_0
= ejnczpbb3m ; ejnczpbb3m = ( rtB . nnfetlp35t [ 0 ] * axzw4y2cmq_idx_2 -
d5zqci2jzt_idx_4 ) + rtB . ktfkjimbx1 [ 1 ] ; axzw4y2cmq_p += ejnczpbb3m *
ejnczpbb3m ; ejnczpbb3m = ( d5zqci2jzt_idx_2 - rtB . nnfetlp35t [ 0 ] *
axzw4y2cmq_idx_1 ) + rtB . ktfkjimbx1 [ 2 ] ; axzw4y2cmq_p += ejnczpbb3m *
ejnczpbb3m ; ht0bysawqah = muSingleScalarAtan ( ejnczpbb3m / (
axzw4y2cmq_idx_0 + rtP . jqcuts4d2xy . Constant1_Value ) ) ; ly5hlwe34x =
muSingleScalarSqrt ( axzw4y2cmq_p ) ; } rtB . nt1ep5s5gk [ hpkwusiilh ] =
ht0bysawqah ; rtB . a3xfql2xu1 [ hpkwusiilh ] = ly5hlwe34x ; } void
e3uu0qv2ytTID3 ( int32_T hpkwusiilh ) { real32_T jqeqwpkbfq2 [ 3 ] ; rtB .
jqcuts4d2xy [ hpkwusiilh ] . cx2jbj4gyj [ 0 ] = ( real32_T ) rtP . xyz_cg [ 0
] ; rtB . jqcuts4d2xy [ hpkwusiilh ] . cx2jbj4gyj [ 1 ] = ( real32_T ) rtP .
xyz_cg [ 1 ] ; rtB . jqcuts4d2xy [ hpkwusiilh ] . cx2jbj4gyj [ 2 ] = (
real32_T ) rtP . xyz_cg [ 2 ] ; jqeqwpkbfq2 [ 0 ] = rtP . wing_nodes [ 3 *
hpkwusiilh ] ; jqeqwpkbfq2 [ 1 ] = rtP . wing_nodes [ 3 * hpkwusiilh + 1 ] ;
jqeqwpkbfq2 [ 2 ] = rtP . wing_nodes [ 3 * hpkwusiilh + 2 ] ; } void
iepuwumnrn ( void ) { int32_T gk52j5ybqz ; for ( gk52j5ybqz = 0 ; gk52j5ybqz
< 16 ; gk52j5ybqz ++ ) { rtB . jqcuts4d2xyl [ gk52j5ybqz ] . itqwefcr4f [ 0 ]
= 0.0F ; rtB . jqcuts4d2xyl [ gk52j5ybqz ] . itqwefcr4f [ 1 ] = 0.0F ; rtB .
jqcuts4d2xyl [ gk52j5ybqz ] . itqwefcr4f [ 2 ] = 0.0F ; } } void hircojder3 (
int32_T gk52j5ybqz ) { real32_T i0ujszvuit [ 3 ] ; real32_T fcpvq0ldqg [ 3 ]
; real32_T oawq1ch32t [ 3 ] ; i0ujszvuit [ 0 ] = rtP . vtail_nodes [ 3 *
gk52j5ybqz ] ; fcpvq0ldqg [ 0 ] = rtB . mfew4idj1w [ 3 * gk52j5ybqz ] ;
i0ujszvuit [ 1 ] = rtP . vtail_nodes [ 3 * gk52j5ybqz + 1 ] ; fcpvq0ldqg [ 1
] = rtB . mfew4idj1w [ 3 * gk52j5ybqz + 1 ] ; i0ujszvuit [ 2 ] = rtP .
vtail_nodes [ 3 * gk52j5ybqz + 2 ] ; fcpvq0ldqg [ 2 ] = rtB . mfew4idj1w [ 3
* gk52j5ybqz + 2 ] ; { real32_T k43b4hof5w_idx_0 ; real32_T k43b4hof5w_idx_1
; real32_T k43b4hof5w_idx_2 ; k43b4hof5w_idx_0 = i0ujszvuit [ 0 ] - rtB .
jqcuts4d2xyl [ gk52j5ybqz ] . itqwefcr4f [ 0 ] ; k43b4hof5w_idx_1 =
i0ujszvuit [ 1 ] - rtB . jqcuts4d2xyl [ gk52j5ybqz ] . itqwefcr4f [ 1 ] ;
k43b4hof5w_idx_2 = i0ujszvuit [ 2 ] - rtB . jqcuts4d2xyl [ gk52j5ybqz ] .
itqwefcr4f [ 2 ] ; oawq1ch32t [ 0 ] = k43b4hof5w_idx_1 * fcpvq0ldqg [ 2 ] -
fcpvq0ldqg [ 1 ] * k43b4hof5w_idx_2 ; oawq1ch32t [ 1 ] = fcpvq0ldqg [ 0 ] *
k43b4hof5w_idx_2 - k43b4hof5w_idx_0 * fcpvq0ldqg [ 2 ] ; oawq1ch32t [ 2 ] =
k43b4hof5w_idx_0 * fcpvq0ldqg [ 1 ] - fcpvq0ldqg [ 0 ] * k43b4hof5w_idx_1 ; }
rtB . dakrs4do3bni [ 3 * gk52j5ybqz ] = oawq1ch32t [ 0 ] ; rtB . dakrs4do3bni
[ 3 * gk52j5ybqz + 1 ] = oawq1ch32t [ 1 ] ; rtB . dakrs4do3bni [ 3 *
gk52j5ybqz + 2 ] = oawq1ch32t [ 2 ] ; } void hircojder3TID3 ( int32_T
gk52j5ybqz ) { real32_T i0ujszvuit [ 3 ] ; real32_T fcpvq0ldqg [ 3 ] ; rtB .
jqcuts4d2xyl [ gk52j5ybqz ] . itqwefcr4f [ 0 ] = ( real32_T ) rtP . xyz_cg [
0 ] ; rtB . jqcuts4d2xyl [ gk52j5ybqz ] . itqwefcr4f [ 1 ] = ( real32_T ) rtP
. xyz_cg [ 1 ] ; rtB . jqcuts4d2xyl [ gk52j5ybqz ] . itqwefcr4f [ 2 ] = (
real32_T ) rtP . xyz_cg [ 2 ] ; i0ujszvuit [ 0 ] = rtP . vtail_nodes [ 3 *
gk52j5ybqz ] ; fcpvq0ldqg [ 0 ] = rtB . mfew4idj1w [ 3 * gk52j5ybqz ] ;
i0ujszvuit [ 1 ] = rtP . vtail_nodes [ 3 * gk52j5ybqz + 1 ] ; fcpvq0ldqg [ 1
] = rtB . mfew4idj1w [ 3 * gk52j5ybqz + 1 ] ; i0ujszvuit [ 2 ] = rtP .
vtail_nodes [ 3 * gk52j5ybqz + 2 ] ; fcpvq0ldqg [ 2 ] = rtB . mfew4idj1w [ 3
* gk52j5ybqz + 2 ] ; } void oje4kmdodo ( void ) { int32_T hd0skx540u ; for (
hd0skx540u = 0 ; hd0skx540u < 7 ; hd0skx540u ++ ) { rtB . jqcuts4d2xylj [
hd0skx540u ] . as01vfxfsq [ 0 ] = 0.0F ; rtB . jqcuts4d2xylj [ hd0skx540u ] .
as01vfxfsq [ 1 ] = 0.0F ; rtB . jqcuts4d2xylj [ hd0skx540u ] . as01vfxfsq [ 2
] = 0.0F ; } } void fxo32xx45w ( int32_T hd0skx540u ) { real32_T i0ujszvuitc
[ 3 ] ; real32_T fcpvq0ldqgf [ 3 ] ; real32_T oawq1ch32ta [ 3 ] ; i0ujszvuitc
[ 0 ] = rtP . NodePoints_Value_hzbfy0ctco [ 3 * hd0skx540u ] ; fcpvq0ldqgf [
0 ] = rtB . db2vpmywoos [ 3 * hd0skx540u ] ; i0ujszvuitc [ 1 ] = rtP .
NodePoints_Value_hzbfy0ctco [ 3 * hd0skx540u + 1 ] ; fcpvq0ldqgf [ 1 ] = rtB
. db2vpmywoos [ 3 * hd0skx540u + 1 ] ; i0ujszvuitc [ 2 ] = rtP .
NodePoints_Value_hzbfy0ctco [ 3 * hd0skx540u + 2 ] ; fcpvq0ldqgf [ 2 ] = rtB
. db2vpmywoos [ 3 * hd0skx540u + 2 ] ; { real32_T hmktc1zshu_idx_0 ; real32_T
hmktc1zshu_idx_1 ; real32_T hmktc1zshu_idx_2 ; hmktc1zshu_idx_0 = i0ujszvuitc
[ 0 ] - rtB . jqcuts4d2xylj [ hd0skx540u ] . as01vfxfsq [ 0 ] ;
hmktc1zshu_idx_1 = i0ujszvuitc [ 1 ] - rtB . jqcuts4d2xylj [ hd0skx540u ] .
as01vfxfsq [ 1 ] ; hmktc1zshu_idx_2 = i0ujszvuitc [ 2 ] - rtB . jqcuts4d2xylj
[ hd0skx540u ] . as01vfxfsq [ 2 ] ; oawq1ch32ta [ 0 ] = hmktc1zshu_idx_1 *
fcpvq0ldqgf [ 2 ] - fcpvq0ldqgf [ 1 ] * hmktc1zshu_idx_2 ; oawq1ch32ta [ 1 ]
= fcpvq0ldqgf [ 0 ] * hmktc1zshu_idx_2 - hmktc1zshu_idx_0 * fcpvq0ldqgf [ 2 ]
; oawq1ch32ta [ 2 ] = hmktc1zshu_idx_0 * fcpvq0ldqgf [ 1 ] - fcpvq0ldqgf [ 0
] * hmktc1zshu_idx_1 ; } rtB . dakrs4do3bn [ 3 * hd0skx540u ] = oawq1ch32ta [
0 ] ; rtB . dakrs4do3bn [ 3 * hd0skx540u + 1 ] = oawq1ch32ta [ 1 ] ; rtB .
dakrs4do3bn [ 3 * hd0skx540u + 2 ] = oawq1ch32ta [ 2 ] ; } void
fxo32xx45wTID3 ( int32_T hd0skx540u ) { real32_T i0ujszvuitc [ 3 ] ; real32_T
fcpvq0ldqgf [ 3 ] ; rtB . jqcuts4d2xylj [ hd0skx540u ] . as01vfxfsq [ 0 ] = (
real32_T ) rtP . xyz_cg [ 0 ] ; rtB . jqcuts4d2xylj [ hd0skx540u ] .
as01vfxfsq [ 1 ] = ( real32_T ) rtP . xyz_cg [ 1 ] ; rtB . jqcuts4d2xylj [
hd0skx540u ] . as01vfxfsq [ 2 ] = ( real32_T ) rtP . xyz_cg [ 2 ] ;
i0ujszvuitc [ 0 ] = rtP . NodePoints_Value_hzbfy0ctco [ 3 * hd0skx540u ] ;
fcpvq0ldqgf [ 0 ] = rtB . db2vpmywoos [ 3 * hd0skx540u ] ; i0ujszvuitc [ 1 ]
= rtP . NodePoints_Value_hzbfy0ctco [ 3 * hd0skx540u + 1 ] ; fcpvq0ldqgf [ 1
] = rtB . db2vpmywoos [ 3 * hd0skx540u + 1 ] ; i0ujszvuitc [ 2 ] = rtP .
NodePoints_Value_hzbfy0ctco [ 3 * hd0skx540u + 2 ] ; fcpvq0ldqgf [ 2 ] = rtB
. db2vpmywoos [ 3 * hd0skx540u + 2 ] ; } void lkoepecx5g ( int32_T kge5bjv5mb
) { real32_T g1rj5d0val ; real32_T hkj10upsjq [ 3 ] ; real32_T k0fsassjb2 [ 3
] ; g1rj5d0val = rtB . h43romyxqz [ kge5bjv5mb ] ; hkj10upsjq [ 0 ] = rtB .
jsvvojf0gq [ 3 * kge5bjv5mb ] ; hkj10upsjq [ 1 ] = rtB . jsvvojf0gq [ 3 *
kge5bjv5mb + 1 ] ; hkj10upsjq [ 2 ] = rtB . jsvvojf0gq [ 3 * kge5bjv5mb + 2 ]
; { real_T owvdgl2vim [ 9 ] ; real_T csm03u2vgs_idx_0 ; real_T
csm03u2vgs_idx_1 ; real_T ofihclptpt_idx_0 ; real_T ofihclptpt_idx_1 ;
int32_T i ; real32_T tmp ; real32_T tmp_e ; real32_T tmp_p ;
muDoubleScalarSinCos ( g1rj5d0val , & csm03u2vgs_idx_0 , & ofihclptpt_idx_0 )
; muDoubleScalarSinCos ( rtP . jqcuts4d2xyljz . Constant_Value_oise4xk0eu , &
csm03u2vgs_idx_1 , & ofihclptpt_idx_1 ) ; owvdgl2vim [ 0 ] = ofihclptpt_idx_0
* ofihclptpt_idx_1 ; owvdgl2vim [ 1 ] = - ( ofihclptpt_idx_0 *
csm03u2vgs_idx_1 ) ; owvdgl2vim [ 2 ] = - csm03u2vgs_idx_0 ; owvdgl2vim [ 3 ]
= csm03u2vgs_idx_1 ; owvdgl2vim [ 4 ] = ofihclptpt_idx_1 ; owvdgl2vim [ 5 ] =
rtP . jqcuts4d2xyljz . Constant_Value ; owvdgl2vim [ 6 ] = csm03u2vgs_idx_0 *
ofihclptpt_idx_1 ; owvdgl2vim [ 7 ] = - ( csm03u2vgs_idx_0 * csm03u2vgs_idx_1
) ; owvdgl2vim [ 8 ] = ofihclptpt_idx_0 ; tmp = - hkj10upsjq [ 0 ] ; tmp_p =
hkj10upsjq [ 1 ] ; tmp_e = - hkj10upsjq [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ )
{ k0fsassjb2 [ i ] = 0.0F ; k0fsassjb2 [ i ] += ( real32_T ) owvdgl2vim [ 3 *
i ] * tmp ; k0fsassjb2 [ i ] += ( real32_T ) owvdgl2vim [ 3 * i + 1 ] * tmp_p
; k0fsassjb2 [ i ] += ( real32_T ) owvdgl2vim [ 3 * i + 2 ] * tmp_e ; } } rtB
. db2vpmywoos [ 3 * kge5bjv5mb ] = k0fsassjb2 [ 0 ] ; rtB . db2vpmywoos [ 3 *
kge5bjv5mb + 1 ] = k0fsassjb2 [ 1 ] ; rtB . db2vpmywoos [ 3 * kge5bjv5mb + 2
] = k0fsassjb2 [ 2 ] ; } void lkoepecx5gTID3 ( int32_T kge5bjv5mb ) {
real32_T g1rj5d0val ; real32_T hkj10upsjq [ 3 ] ; g1rj5d0val = rtB .
h43romyxqz [ kge5bjv5mb ] ; hkj10upsjq [ 0 ] = rtB . jsvvojf0gq [ 3 *
kge5bjv5mb ] ; hkj10upsjq [ 1 ] = rtB . jsvvojf0gq [ 3 * kge5bjv5mb + 1 ] ;
hkj10upsjq [ 2 ] = rtB . jsvvojf0gq [ 3 * kge5bjv5mb + 2 ] ; } void
d3x2zb3bdo ( void ) { int32_T etxrqgcgbg ; for ( etxrqgcgbg = 0 ; etxrqgcgbg
< 7 ; etxrqgcgbg ++ ) { rtB . jqcuts4d2xyljzh [ etxrqgcgbg ] . antpsulesa [ 0
] = 0.0F ; rtB . jqcuts4d2xyljzh [ etxrqgcgbg ] . antpsulesa [ 1 ] = 0.0F ;
rtB . jqcuts4d2xyljzh [ etxrqgcgbg ] . antpsulesa [ 2 ] = 0.0F ; } } void
fpg3s0wb2o ( int32_T etxrqgcgbg ) { real32_T i0ujszvuitcx [ 3 ] ; real32_T
fcpvq0ldqgfv [ 3 ] ; real32_T oawq1ch32taj [ 3 ] ; i0ujszvuitcx [ 0 ] = rtP .
NodePoints_Value_bns0woinqy [ 3 * etxrqgcgbg ] ; fcpvq0ldqgfv [ 0 ] = rtB .
db2vpmywoo [ 3 * etxrqgcgbg ] ; i0ujszvuitcx [ 1 ] = rtP .
NodePoints_Value_bns0woinqy [ 3 * etxrqgcgbg + 1 ] ; fcpvq0ldqgfv [ 1 ] = rtB
. db2vpmywoo [ 3 * etxrqgcgbg + 1 ] ; i0ujszvuitcx [ 2 ] = rtP .
NodePoints_Value_bns0woinqy [ 3 * etxrqgcgbg + 2 ] ; fcpvq0ldqgfv [ 2 ] = rtB
. db2vpmywoo [ 3 * etxrqgcgbg + 2 ] ; { real32_T bmbijlfzxq_idx_0 ; real32_T
bmbijlfzxq_idx_1 ; real32_T bmbijlfzxq_idx_2 ; bmbijlfzxq_idx_0 =
i0ujszvuitcx [ 0 ] - rtB . jqcuts4d2xyljzh [ etxrqgcgbg ] . antpsulesa [ 0 ]
; bmbijlfzxq_idx_1 = i0ujszvuitcx [ 1 ] - rtB . jqcuts4d2xyljzh [ etxrqgcgbg
] . antpsulesa [ 1 ] ; bmbijlfzxq_idx_2 = i0ujszvuitcx [ 2 ] - rtB .
jqcuts4d2xyljzh [ etxrqgcgbg ] . antpsulesa [ 2 ] ; oawq1ch32taj [ 0 ] =
bmbijlfzxq_idx_1 * fcpvq0ldqgfv [ 2 ] - fcpvq0ldqgfv [ 1 ] * bmbijlfzxq_idx_2
; oawq1ch32taj [ 1 ] = fcpvq0ldqgfv [ 0 ] * bmbijlfzxq_idx_2 -
bmbijlfzxq_idx_0 * fcpvq0ldqgfv [ 2 ] ; oawq1ch32taj [ 2 ] = bmbijlfzxq_idx_0
* fcpvq0ldqgfv [ 1 ] - fcpvq0ldqgfv [ 0 ] * bmbijlfzxq_idx_1 ; } rtB .
dakrs4do3b [ 3 * etxrqgcgbg ] = oawq1ch32taj [ 0 ] ; rtB . dakrs4do3b [ 3 *
etxrqgcgbg + 1 ] = oawq1ch32taj [ 1 ] ; rtB . dakrs4do3b [ 3 * etxrqgcgbg + 2
] = oawq1ch32taj [ 2 ] ; } void fpg3s0wb2oTID3 ( int32_T etxrqgcgbg ) {
real32_T i0ujszvuitcx [ 3 ] ; real32_T fcpvq0ldqgfv [ 3 ] ; rtB .
jqcuts4d2xyljzh [ etxrqgcgbg ] . antpsulesa [ 0 ] = ( real32_T ) rtP . xyz_cg
[ 0 ] ; rtB . jqcuts4d2xyljzh [ etxrqgcgbg ] . antpsulesa [ 1 ] = ( real32_T
) rtP . xyz_cg [ 1 ] ; rtB . jqcuts4d2xyljzh [ etxrqgcgbg ] . antpsulesa [ 2
] = ( real32_T ) rtP . xyz_cg [ 2 ] ; i0ujszvuitcx [ 0 ] = rtP .
NodePoints_Value_bns0woinqy [ 3 * etxrqgcgbg ] ; fcpvq0ldqgfv [ 0 ] = rtB .
db2vpmywoo [ 3 * etxrqgcgbg ] ; i0ujszvuitcx [ 1 ] = rtP .
NodePoints_Value_bns0woinqy [ 3 * etxrqgcgbg + 1 ] ; fcpvq0ldqgfv [ 1 ] = rtB
. db2vpmywoo [ 3 * etxrqgcgbg + 1 ] ; i0ujszvuitcx [ 2 ] = rtP .
NodePoints_Value_bns0woinqy [ 3 * etxrqgcgbg + 2 ] ; fcpvq0ldqgfv [ 2 ] = rtB
. db2vpmywoo [ 3 * etxrqgcgbg + 2 ] ; } void gur2dlo22c ( int32_T nltn40tmoq
) { real32_T g1rj5d0valr ; real32_T hkj10upsjqi [ 3 ] ; real32_T k0fsassjb2a
[ 3 ] ; g1rj5d0valr = rtB . nt1ep5s5gk [ nltn40tmoq + 7 ] ; hkj10upsjqi [ 0 ]
= rtB . chio10ryue [ 3 * nltn40tmoq ] ; hkj10upsjqi [ 1 ] = rtB . chio10ryue
[ 3 * nltn40tmoq + 1 ] ; hkj10upsjqi [ 2 ] = rtB . chio10ryue [ 3 *
nltn40tmoq + 2 ] ; { real_T mw0545cmkp [ 9 ] ; real_T iou12vbj3w_idx_0 ;
real_T iou12vbj3w_idx_1 ; real_T lkscctmlxf_idx_0 ; real_T lkscctmlxf_idx_1 ;
int32_T i ; real32_T tmp ; real32_T tmp_e ; real32_T tmp_p ;
muDoubleScalarSinCos ( g1rj5d0valr , & lkscctmlxf_idx_0 , & iou12vbj3w_idx_0
) ; muDoubleScalarSinCos ( rtP . ibfd55b20f . Constant_Value_kcc3xurybq , &
lkscctmlxf_idx_1 , & iou12vbj3w_idx_1 ) ; mw0545cmkp [ 0 ] = iou12vbj3w_idx_0
* iou12vbj3w_idx_1 ; mw0545cmkp [ 1 ] = - ( iou12vbj3w_idx_0 *
lkscctmlxf_idx_1 ) ; mw0545cmkp [ 2 ] = - lkscctmlxf_idx_0 ; mw0545cmkp [ 3 ]
= lkscctmlxf_idx_1 ; mw0545cmkp [ 4 ] = iou12vbj3w_idx_1 ; mw0545cmkp [ 5 ] =
rtP . ibfd55b20f . Constant_Value ; mw0545cmkp [ 6 ] = lkscctmlxf_idx_0 *
iou12vbj3w_idx_1 ; mw0545cmkp [ 7 ] = - ( lkscctmlxf_idx_0 * lkscctmlxf_idx_1
) ; mw0545cmkp [ 8 ] = iou12vbj3w_idx_0 ; tmp = - hkj10upsjqi [ 0 ] ; tmp_p =
hkj10upsjqi [ 1 ] ; tmp_e = - hkj10upsjqi [ 2 ] ; for ( i = 0 ; i < 3 ; i ++
) { k0fsassjb2a [ i ] = 0.0F ; k0fsassjb2a [ i ] += ( real32_T ) mw0545cmkp [
3 * i ] * tmp ; k0fsassjb2a [ i ] += ( real32_T ) mw0545cmkp [ 3 * i + 1 ] *
tmp_p ; k0fsassjb2a [ i ] += ( real32_T ) mw0545cmkp [ 3 * i + 2 ] * tmp_e ;
} } rtB . db2vpmywoo [ 3 * nltn40tmoq ] = k0fsassjb2a [ 0 ] ; rtB .
db2vpmywoo [ 3 * nltn40tmoq + 1 ] = k0fsassjb2a [ 1 ] ; rtB . db2vpmywoo [ 3
* nltn40tmoq + 2 ] = k0fsassjb2a [ 2 ] ; } void gur2dlo22cTID3 ( int32_T
nltn40tmoq ) { real32_T g1rj5d0valr ; real32_T hkj10upsjqi [ 3 ] ;
g1rj5d0valr = rtB . nt1ep5s5gk [ nltn40tmoq + 7 ] ; hkj10upsjqi [ 0 ] = rtB .
chio10ryue [ 3 * nltn40tmoq ] ; hkj10upsjqi [ 1 ] = rtB . chio10ryue [ 3 *
nltn40tmoq + 1 ] ; hkj10upsjqi [ 2 ] = rtB . chio10ryue [ 3 * nltn40tmoq + 2
] ; } void f3fjaipn5f ( void ) { int32_T kazjt0ajc5 ; for ( kazjt0ajc5 = 0 ;
kazjt0ajc5 < 12 ; kazjt0ajc5 ++ ) { rtB . lokicy2luy [ kazjt0ajc5 ] .
id154pizyj [ 0 ] = 0.0F ; rtB . lokicy2luy [ kazjt0ajc5 ] . id154pizyj [ 1 ]
= 0.0F ; rtB . lokicy2luy [ kazjt0ajc5 ] . id154pizyj [ 2 ] = 0.0F ; memset (
& rtB . lokicy2luy [ kazjt0ajc5 ] . bvp5jvbdpx [ 0 ] , 0 , 9U * sizeof (
real_T ) ) ; } } void otzd1cms4c ( int32_T kazjt0ajc5 ) { real_T ahe41ga4xc ;
real_T kn3zuq5wwt ; real_T bpyzfv2efl [ 3 ] ; real_T ft2sur3kjj ; real_T
jcim3sslp1 ; real_T ffy5uq1ux5 [ 3 ] ; ahe41ga4xc = rtB . duodwdurl2 [
kazjt0ajc5 ] ; kn3zuq5wwt = rtB . omswnn4raq [ kazjt0ajc5 + 6 ] ; bpyzfv2efl
[ 0 ] = rtP . xyz_DEP [ 3 * kazjt0ajc5 ] ; bpyzfv2efl [ 1 ] = rtP . xyz_DEP [
3 * kazjt0ajc5 + 1 ] ; bpyzfv2efl [ 2 ] = rtP . xyz_DEP [ 3 * kazjt0ajc5 + 2
] ; ft2sur3kjj = rtP . Constant2_Value_pxvdgdeasf [ kazjt0ajc5 ] ; { real_T
bgqvo0t51i ; real_T gmpbet1hrh ; real_T ouzs0ateod ; int32_T i ; if (
kn3zuq5wwt > rtP . lokicy2luy . Saturation2_UpperSat ) { bgqvo0t51i = rtP .
lokicy2luy . Saturation2_UpperSat ; } else if ( kn3zuq5wwt < rtP . lokicy2luy
. Saturation2_LowerSat ) { bgqvo0t51i = rtP . lokicy2luy .
Saturation2_LowerSat ; } else { bgqvo0t51i = kn3zuq5wwt ; } if ( bgqvo0t51i >
rtP . lokicy2luy . Switch1_Threshold ) { bgqvo0t51i = look2_plinlcpw (
ahe41ga4xc , rtP . lokicy2luy . actf2T_Gain * bgqvo0t51i , rtP . dp_DEP .
rpm_lookup . V_vec , rtP . dp_DEP . rpm_lookup . T_vec , rtP . dp_DEP .
rpm_lookup . rpm_gird , rtDW . lokicy2luy [ kazjt0ajc5 ] . pn1zggpnnk , rtP .
lokicy2luy . T2rpm_maxIndex , 43U ) ; } else { bgqvo0t51i = rtP . lokicy2luy
. Constant3_Value ; } bgqvo0t51i *= rtP . lokicy2luy . Gain1_Gain ; if (
bgqvo0t51i > rtP . lokicy2luy . Saturation_UpperSat ) { bgqvo0t51i = rtP .
lokicy2luy . Saturation_UpperSat ; } else if ( bgqvo0t51i < rtP . lokicy2luy
. Saturation_LowerSat ) { bgqvo0t51i = rtP . lokicy2luy . Saturation_LowerSat
; } ouzs0ateod = ahe41ga4xc / ( rtP . lokicy2luy . Gain2_Gain * bgqvo0t51i +
rtP . lokicy2luy . Constant_Value_j2cbypeucs ) ; if ( ouzs0ateod > rtP .
lokicy2luy . Saturation1_UpperSat ) { ouzs0ateod = rtP . lokicy2luy .
Saturation1_UpperSat ; } else if ( ouzs0ateod < rtP . lokicy2luy .
Saturation1_LowerSat ) { ouzs0ateod = rtP . lokicy2luy . Saturation1_LowerSat
; } gmpbet1hrh = look1_plinlcapw ( ouzs0ateod , rtP . dp_DEP . J , rtP .
dp_DEP . C_T , & rtDW . lokicy2luy [ kazjt0ajc5 ] . e4gu33l0io , 45U ) ;
bgqvo0t51i = rtB . lhopa3gq4f * gmpbet1hrh * ( bgqvo0t51i * bgqvo0t51i ) *
rtP . lokicy2luy . Gain3_Gain ; if ( bgqvo0t51i > rtP . lokicy2luy .
Saturation_UpperSat_dxdpfm51ks ) { bgqvo0t51i = rtP . lokicy2luy .
Saturation_UpperSat_dxdpfm51ks ; } else if ( bgqvo0t51i < rtP . lokicy2luy .
Saturation_LowerSat_fototx1cre ) { bgqvo0t51i = rtP . lokicy2luy .
Saturation_LowerSat_fototx1cre ; } for ( i = 0 ; i < 3 ; i ++ ) { ffy5uq1ux5
[ i ] = 0.0 ; ffy5uq1ux5 [ i ] += rtB . lokicy2luy [ kazjt0ajc5 ] .
bvp5jvbdpx [ i ] * bgqvo0t51i ; ffy5uq1ux5 [ i ] += rtB . lokicy2luy [
kazjt0ajc5 ] . bvp5jvbdpx [ i + 3 ] * rtP . lokicy2luy . Constant_Value ;
ffy5uq1ux5 [ i ] += rtB . lokicy2luy [ kazjt0ajc5 ] . bvp5jvbdpx [ i + 6 ] *
rtP . lokicy2luy . Constant_Value ; } look1_plinlcapw ( ouzs0ateod , rtP .
dp_DEP . J , rtP . dp_DEP . C_Q , & rtDW . lokicy2luy [ kazjt0ajc5 ] .
caw3xhb43b , 45U ) ; if ( ouzs0ateod > rtP . lokicy2luy .
Saturation3_UpperSat ) { jcim3sslp1 = rtP . lokicy2luy . Saturation3_UpperSat
; } else if ( ouzs0ateod < rtP . lokicy2luy . Saturation3_LowerSat ) {
jcim3sslp1 = rtP . lokicy2luy . Saturation3_LowerSat ; } else { jcim3sslp1 =
ouzs0ateod ; } } rtB . bxtb3gohdc [ kazjt0ajc5 ] = jcim3sslp1 ; rtB .
nmsebbpti5 [ 3 * kazjt0ajc5 ] = ffy5uq1ux5 [ 0 ] ; rtB . nmsebbpti5 [ 3 *
kazjt0ajc5 + 1 ] = ffy5uq1ux5 [ 1 ] ; rtB . nmsebbpti5 [ 3 * kazjt0ajc5 + 2 ]
= ffy5uq1ux5 [ 2 ] ; } void otzd1cms4cTID3 ( int32_T kazjt0ajc5 ) { real_T
ahe41ga4xc ; real_T kn3zuq5wwt ; real_T bpyzfv2efl [ 3 ] ; real_T ft2sur3kjj
; { real_T pu4rivxzuv [ 9 ] ; real_T e5h5qm4vwy_idx_0 ; real_T
e5h5qm4vwy_idx_1 ; real_T e5h5qm4vwy_idx_2 ; real_T jmtemtnev5_idx_0 ; real_T
jmtemtnev5_idx_1 ; real_T jmtemtnev5_idx_2 ; int32_T i ; rtB . lokicy2luy [
kazjt0ajc5 ] . id154pizyj [ 0 ] = ( real32_T ) rtP . xyz_cg [ 0 ] ; rtB .
lokicy2luy [ kazjt0ajc5 ] . id154pizyj [ 1 ] = ( real32_T ) rtP . xyz_cg [ 1
] ; rtB . lokicy2luy [ kazjt0ajc5 ] . id154pizyj [ 2 ] = ( real32_T ) rtP .
xyz_cg [ 2 ] ; muDoubleScalarSinCos ( rtP . lokicy2luy . Constant1_Value , &
e5h5qm4vwy_idx_0 , & jmtemtnev5_idx_0 ) ; muDoubleScalarSinCos ( rtP .
lokicy2luy . DEP_incidence_Value , & e5h5qm4vwy_idx_1 , & jmtemtnev5_idx_1 )
; muDoubleScalarSinCos ( rtP . lokicy2luy . Constant1_Value , &
e5h5qm4vwy_idx_2 , & jmtemtnev5_idx_2 ) ; pu4rivxzuv [ 0 ] = jmtemtnev5_idx_0
* jmtemtnev5_idx_1 ; pu4rivxzuv [ 1 ] = e5h5qm4vwy_idx_1 * e5h5qm4vwy_idx_2 *
jmtemtnev5_idx_0 - e5h5qm4vwy_idx_0 * jmtemtnev5_idx_2 ; pu4rivxzuv [ 2 ] =
e5h5qm4vwy_idx_1 * jmtemtnev5_idx_2 * jmtemtnev5_idx_0 + e5h5qm4vwy_idx_0 *
e5h5qm4vwy_idx_2 ; pu4rivxzuv [ 3 ] = e5h5qm4vwy_idx_0 * jmtemtnev5_idx_1 ;
pu4rivxzuv [ 4 ] = e5h5qm4vwy_idx_1 * e5h5qm4vwy_idx_2 * e5h5qm4vwy_idx_0 +
jmtemtnev5_idx_0 * jmtemtnev5_idx_2 ; pu4rivxzuv [ 5 ] = e5h5qm4vwy_idx_1 *
jmtemtnev5_idx_2 * e5h5qm4vwy_idx_0 - jmtemtnev5_idx_0 * e5h5qm4vwy_idx_2 ;
pu4rivxzuv [ 6 ] = - e5h5qm4vwy_idx_1 ; pu4rivxzuv [ 7 ] = jmtemtnev5_idx_1 *
e5h5qm4vwy_idx_2 ; pu4rivxzuv [ 8 ] = jmtemtnev5_idx_1 * jmtemtnev5_idx_2 ;
for ( i = 0 ; i < 3 ; i ++ ) { rtB . lokicy2luy [ kazjt0ajc5 ] . bvp5jvbdpx [
3 * i ] = pu4rivxzuv [ i ] ; rtB . lokicy2luy [ kazjt0ajc5 ] . bvp5jvbdpx [ 3
* i + 1 ] = pu4rivxzuv [ i + 3 ] ; rtB . lokicy2luy [ kazjt0ajc5 ] .
bvp5jvbdpx [ 3 * i + 2 ] = pu4rivxzuv [ i + 6 ] ; } } ahe41ga4xc = rtB .
duodwdurl2 [ kazjt0ajc5 ] ; kn3zuq5wwt = rtB . omswnn4raq [ kazjt0ajc5 + 6 ]
; bpyzfv2efl [ 0 ] = rtP . xyz_DEP [ 3 * kazjt0ajc5 ] ; bpyzfv2efl [ 1 ] =
rtP . xyz_DEP [ 3 * kazjt0ajc5 + 1 ] ; bpyzfv2efl [ 2 ] = rtP . xyz_DEP [ 3 *
kazjt0ajc5 + 2 ] ; ft2sur3kjj = rtP . Constant2_Value_pxvdgdeasf [ kazjt0ajc5
] ; } void pxudjjmfpa ( real_T d2n5udblwn , real_T omoqupcoad , pszllhqplt *
localB ) { real_T m ; static const real_T b [ 12 ] = { - 1.0 , - 0.8 , - 0.4
, - 0.2 , - 0.1 , 0.0 , 0.0 , 0.1 , 0.2 , 0.4 , 0.8 , 1.0 } ; int32_T i ; m =
muDoubleScalarTan ( omoqupcoad ) ; for ( i = 0 ; i <= 10 ; i += 2 ) {
_mm_storeu_pd ( & localB -> lxe0n2dnxv [ i ] , _mm_add_pd ( _mm_mul_pd (
_mm_set1_pd ( m ) , _mm_loadu_pd ( & b [ i ] ) ) , _mm_set1_pd ( d2n5udblwn )
) ) ; } } void cysit5kmlr ( void ) { int32_T dhbnwu32ri ; for ( dhbnwu32ri =
0 ; dhbnwu32ri < 16 ; dhbnwu32ri ++ ) { rtB . d3madptqec [ dhbnwu32ri ] .
l3babjdbh1 [ 0 ] = 0.0F ; rtB . d3madptqec [ dhbnwu32ri ] . l3babjdbh1 [ 1 ]
= 0.0F ; rtB . d3madptqec [ dhbnwu32ri ] . l3babjdbh1 [ 2 ] = 0.0F ; } } void
fpyiqjkxe4 ( int32_T dhbnwu32ri ) { real32_T gwdqtuhpqh [ 3 ] ; real32_T
ievfvruc00 ; real32_T mi2qi0cz5u ; real32_T gr3g22l5rn ; gwdqtuhpqh [ 0 ] =
rtP . vtail_nodes [ 3 * dhbnwu32ri ] ; gwdqtuhpqh [ 1 ] = rtP . vtail_nodes [
3 * dhbnwu32ri + 1 ] ; gwdqtuhpqh [ 2 ] = rtP . vtail_nodes [ 3 * dhbnwu32ri
+ 2 ] ; { real32_T fhdif2hzws_idx_0 ; real32_T fhdif2hzws_idx_1 ; real32_T
fhdif2hzws_idx_2 ; real32_T oh4icc00si_idx_0 ; fhdif2hzws_idx_0 = rtB .
d3madptqec [ dhbnwu32ri ] . l3babjdbh1 [ 0 ] - gwdqtuhpqh [ 0 ] ;
fhdif2hzws_idx_1 = rtB . d3madptqec [ dhbnwu32ri ] . l3babjdbh1 [ 1 ] -
gwdqtuhpqh [ 1 ] ; fhdif2hzws_idx_2 = rtB . d3madptqec [ dhbnwu32ri ] .
l3babjdbh1 [ 2 ] - gwdqtuhpqh [ 2 ] ; oh4icc00si_idx_0 = ( fhdif2hzws_idx_1 *
rtB . pg0q1ivdwm [ 2 ] - rtB . pg0q1ivdwm [ 1 ] * fhdif2hzws_idx_2 ) + rtB .
fnfm0xobo0 [ 0 ] ; fhdif2hzws_idx_2 = ( rtB . pg0q1ivdwm [ 0 ] *
fhdif2hzws_idx_2 - fhdif2hzws_idx_0 * rtB . pg0q1ivdwm [ 2 ] ) + rtB .
fnfm0xobo0 [ 1 ] ; fhdif2hzws_idx_0 = ( fhdif2hzws_idx_0 * rtB . pg0q1ivdwm [
1 ] - rtB . pg0q1ivdwm [ 0 ] * fhdif2hzws_idx_1 ) + rtB . fnfm0xobo0 [ 2 ] ;
fhdif2hzws_idx_1 = ( muSingleScalarPower ( oh4icc00si_idx_0 , 2.0F ) +
muSingleScalarPower ( fhdif2hzws_idx_2 , 2.0F ) ) + muSingleScalarPower (
fhdif2hzws_idx_0 , 2.0F ) ; if ( fhdif2hzws_idx_1 < 0.0F ) { fhdif2hzws_idx_1
= - muSingleScalarSqrt ( - fhdif2hzws_idx_1 ) ; } else { fhdif2hzws_idx_1 =
muSingleScalarSqrt ( fhdif2hzws_idx_1 ) ; } gr3g22l5rn = fhdif2hzws_idx_1 +
rtP . d3madptqec . Constant1_Value ; fhdif2hzws_idx_2 /= gr3g22l5rn ; if (
fhdif2hzws_idx_2 > 1.0F ) { fhdif2hzws_idx_2 = 1.0F ; } else if (
fhdif2hzws_idx_2 < - 1.0F ) { fhdif2hzws_idx_2 = - 1.0F ; } ievfvruc00 =
muSingleScalarAsin ( fhdif2hzws_idx_2 ) ; mi2qi0cz5u = muSingleScalarAtan (
fhdif2hzws_idx_0 / ( oh4icc00si_idx_0 + rtP . d3madptqec . Constant1_Value )
) ; } rtB . aqvld2rfg4 [ dhbnwu32ri ] = ievfvruc00 ; rtB . kbchqf1nmcj [
dhbnwu32ri ] = mi2qi0cz5u ; rtB . due3kthwym3 [ dhbnwu32ri ] = gr3g22l5rn ; }
void fpyiqjkxe4TID3 ( int32_T dhbnwu32ri ) { real32_T gwdqtuhpqh [ 3 ] ; rtB
. d3madptqec [ dhbnwu32ri ] . l3babjdbh1 [ 0 ] = ( real32_T ) rtP . xyz_cg [
0 ] ; rtB . d3madptqec [ dhbnwu32ri ] . l3babjdbh1 [ 1 ] = ( real32_T ) rtP .
xyz_cg [ 1 ] ; rtB . d3madptqec [ dhbnwu32ri ] . l3babjdbh1 [ 2 ] = (
real32_T ) rtP . xyz_cg [ 2 ] ; gwdqtuhpqh [ 0 ] = rtP . vtail_nodes [ 3 *
dhbnwu32ri ] ; gwdqtuhpqh [ 1 ] = rtP . vtail_nodes [ 3 * dhbnwu32ri + 1 ] ;
gwdqtuhpqh [ 2 ] = rtP . vtail_nodes [ 3 * dhbnwu32ri + 2 ] ; } void
n5333o35g0 ( void ) { int32_T f5u0dk5jdf ; for ( f5u0dk5jdf = 0 ; f5u0dk5jdf
< 14 ; f5u0dk5jdf ++ ) { rtB . d3madptqecy [ f5u0dk5jdf ] . jixypnlmxe [ 0 ]
= 0.0F ; rtB . d3madptqecy [ f5u0dk5jdf ] . jixypnlmxe [ 1 ] = 0.0F ; rtB .
d3madptqecy [ f5u0dk5jdf ] . jixypnlmxe [ 2 ] = 0.0F ; } } void gq0vzmvbii (
int32_T f5u0dk5jdf ) { real32_T gwdqtuhpqhi [ 3 ] ; real32_T mi2qi0cz5ub ;
real32_T cmwds0sglp ; gwdqtuhpqhi [ 0 ] = rtP . wing_nodes [ 3 * f5u0dk5jdf ]
; gwdqtuhpqhi [ 1 ] = rtP . wing_nodes [ 3 * f5u0dk5jdf + 1 ] ; gwdqtuhpqhi [
2 ] = rtP . wing_nodes [ 3 * f5u0dk5jdf + 2 ] ; { real32_T koxkrwjmww ;
real32_T mdpcqnggub_idx_0 ; real32_T mdpcqnggub_idx_1 ; real32_T
mdpcqnggub_idx_2 ; real32_T mdpcqnggub_p ; real32_T n3bedbcbwf_idx_2 ;
real32_T n3bedbcbwf_idx_4 ; mdpcqnggub_idx_0 = rtB . d3madptqecy [ f5u0dk5jdf
] . jixypnlmxe [ 0 ] - gwdqtuhpqhi [ 0 ] ; mdpcqnggub_idx_1 = rtB .
d3madptqecy [ f5u0dk5jdf ] . jixypnlmxe [ 1 ] - gwdqtuhpqhi [ 1 ] ;
mdpcqnggub_idx_2 = rtB . d3madptqecy [ f5u0dk5jdf ] . jixypnlmxe [ 2 ] -
gwdqtuhpqhi [ 2 ] ; n3bedbcbwf_idx_2 = mdpcqnggub_idx_0 * rtB . pg0q1ivdwm [
1 ] ; n3bedbcbwf_idx_4 = mdpcqnggub_idx_0 * rtB . pg0q1ivdwm [ 2 ] ;
koxkrwjmww = ( mdpcqnggub_idx_1 * rtB . pg0q1ivdwm [ 2 ] - rtB . pg0q1ivdwm [
1 ] * mdpcqnggub_idx_2 ) + rtB . fnfm0xobo0 [ 0 ] ; mdpcqnggub_p = koxkrwjmww
* koxkrwjmww ; mdpcqnggub_idx_0 = koxkrwjmww ; koxkrwjmww = ( rtB .
pg0q1ivdwm [ 0 ] * mdpcqnggub_idx_2 - n3bedbcbwf_idx_4 ) + rtB . fnfm0xobo0 [
1 ] ; mdpcqnggub_p += koxkrwjmww * koxkrwjmww ; koxkrwjmww = (
n3bedbcbwf_idx_2 - rtB . pg0q1ivdwm [ 0 ] * mdpcqnggub_idx_1 ) + rtB .
fnfm0xobo0 [ 2 ] ; mdpcqnggub_p += koxkrwjmww * koxkrwjmww ; mi2qi0cz5ub =
muSingleScalarAtan ( koxkrwjmww / ( mdpcqnggub_idx_0 + rtP . d3madptqecy .
Constant1_Value ) ) ; cmwds0sglp = muSingleScalarSqrt ( mdpcqnggub_p ) ; }
rtB . kbchqf1nmc [ f5u0dk5jdf ] = mi2qi0cz5ub ; rtB . due3kthwym [ f5u0dk5jdf
] = cmwds0sglp ; } void gq0vzmvbiiTID3 ( int32_T f5u0dk5jdf ) { real32_T
gwdqtuhpqhi [ 3 ] ; rtB . d3madptqecy [ f5u0dk5jdf ] . jixypnlmxe [ 0 ] = (
real32_T ) rtP . xyz_cg [ 0 ] ; rtB . d3madptqecy [ f5u0dk5jdf ] . jixypnlmxe
[ 1 ] = ( real32_T ) rtP . xyz_cg [ 1 ] ; rtB . d3madptqecy [ f5u0dk5jdf ] .
jixypnlmxe [ 2 ] = ( real32_T ) rtP . xyz_cg [ 2 ] ; gwdqtuhpqhi [ 0 ] = rtP
. wing_nodes [ 3 * f5u0dk5jdf ] ; gwdqtuhpqhi [ 1 ] = rtP . wing_nodes [ 3 *
f5u0dk5jdf + 1 ] ; gwdqtuhpqhi [ 2 ] = rtP . wing_nodes [ 3 * f5u0dk5jdf + 2
] ; } void mbx5mzfv5k ( void ) { int32_T bgaamib02m ; for ( bgaamib02m = 0 ;
bgaamib02m < 16 ; bgaamib02m ++ ) { rtB . d3madptqecyu [ bgaamib02m ] .
d1jfmv2yxc [ 0 ] = 0.0F ; rtB . d3madptqecyu [ bgaamib02m ] . d1jfmv2yxc [ 1
] = 0.0F ; rtB . d3madptqecyu [ bgaamib02m ] . d1jfmv2yxc [ 2 ] = 0.0F ; } }
void lrwp4abblu ( int32_T bgaamib02m ) { real32_T c2ponr5p5s [ 3 ] ; real32_T
nsqef1g55j [ 3 ] ; real32_T oda5umfmkp [ 3 ] ; c2ponr5p5s [ 0 ] = rtP .
vtail_nodes [ 3 * bgaamib02m ] ; nsqef1g55j [ 0 ] = rtB . h12sa05pgw [ 3 *
bgaamib02m ] ; c2ponr5p5s [ 1 ] = rtP . vtail_nodes [ 3 * bgaamib02m + 1 ] ;
nsqef1g55j [ 1 ] = rtB . h12sa05pgw [ 3 * bgaamib02m + 1 ] ; c2ponr5p5s [ 2 ]
= rtP . vtail_nodes [ 3 * bgaamib02m + 2 ] ; nsqef1g55j [ 2 ] = rtB .
h12sa05pgw [ 3 * bgaamib02m + 2 ] ; { real32_T aqbtikyhdt_idx_0 ; real32_T
aqbtikyhdt_idx_1 ; real32_T aqbtikyhdt_idx_2 ; aqbtikyhdt_idx_0 = c2ponr5p5s
[ 0 ] - rtB . d3madptqecyu [ bgaamib02m ] . d1jfmv2yxc [ 0 ] ;
aqbtikyhdt_idx_1 = c2ponr5p5s [ 1 ] - rtB . d3madptqecyu [ bgaamib02m ] .
d1jfmv2yxc [ 1 ] ; aqbtikyhdt_idx_2 = c2ponr5p5s [ 2 ] - rtB . d3madptqecyu [
bgaamib02m ] . d1jfmv2yxc [ 2 ] ; oda5umfmkp [ 0 ] = aqbtikyhdt_idx_1 *
nsqef1g55j [ 2 ] - nsqef1g55j [ 1 ] * aqbtikyhdt_idx_2 ; oda5umfmkp [ 1 ] =
nsqef1g55j [ 0 ] * aqbtikyhdt_idx_2 - aqbtikyhdt_idx_0 * nsqef1g55j [ 2 ] ;
oda5umfmkp [ 2 ] = aqbtikyhdt_idx_0 * nsqef1g55j [ 1 ] - nsqef1g55j [ 0 ] *
aqbtikyhdt_idx_1 ; } rtB . dfrnathep2iw [ 3 * bgaamib02m ] = oda5umfmkp [ 0 ]
; rtB . dfrnathep2iw [ 3 * bgaamib02m + 1 ] = oda5umfmkp [ 1 ] ; rtB .
dfrnathep2iw [ 3 * bgaamib02m + 2 ] = oda5umfmkp [ 2 ] ; } void
lrwp4abbluTID3 ( int32_T bgaamib02m ) { real32_T c2ponr5p5s [ 3 ] ; real32_T
nsqef1g55j [ 3 ] ; rtB . d3madptqecyu [ bgaamib02m ] . d1jfmv2yxc [ 0 ] = (
real32_T ) rtP . xyz_cg [ 0 ] ; rtB . d3madptqecyu [ bgaamib02m ] .
d1jfmv2yxc [ 1 ] = ( real32_T ) rtP . xyz_cg [ 1 ] ; rtB . d3madptqecyu [
bgaamib02m ] . d1jfmv2yxc [ 2 ] = ( real32_T ) rtP . xyz_cg [ 2 ] ;
c2ponr5p5s [ 0 ] = rtP . vtail_nodes [ 3 * bgaamib02m ] ; nsqef1g55j [ 0 ] =
rtB . h12sa05pgw [ 3 * bgaamib02m ] ; c2ponr5p5s [ 1 ] = rtP . vtail_nodes [
3 * bgaamib02m + 1 ] ; nsqef1g55j [ 1 ] = rtB . h12sa05pgw [ 3 * bgaamib02m +
1 ] ; c2ponr5p5s [ 2 ] = rtP . vtail_nodes [ 3 * bgaamib02m + 2 ] ;
nsqef1g55j [ 2 ] = rtB . h12sa05pgw [ 3 * bgaamib02m + 2 ] ; } void
at3ek3k55r ( void ) { int32_T cut0v5g3yi ; for ( cut0v5g3yi = 0 ; cut0v5g3yi
< 7 ; cut0v5g3yi ++ ) { rtB . d3madptqecyud [ cut0v5g3yi ] . c1vqtg0iad [ 0 ]
= 0.0F ; rtB . d3madptqecyud [ cut0v5g3yi ] . c1vqtg0iad [ 1 ] = 0.0F ; rtB .
d3madptqecyud [ cut0v5g3yi ] . c1vqtg0iad [ 2 ] = 0.0F ; } } void edz33uvfnq
( int32_T cut0v5g3yi ) { real32_T c2ponr5p5sh [ 3 ] ; real32_T nsqef1g55jc [
3 ] ; real32_T oda5umfmkpa [ 3 ] ; c2ponr5p5sh [ 0 ] = rtP .
NodePoints_Value_p5v5fioltl [ 3 * cut0v5g3yi ] ; nsqef1g55jc [ 0 ] = rtB .
pupjln41gmw [ 3 * cut0v5g3yi ] ; c2ponr5p5sh [ 1 ] = rtP .
NodePoints_Value_p5v5fioltl [ 3 * cut0v5g3yi + 1 ] ; nsqef1g55jc [ 1 ] = rtB
. pupjln41gmw [ 3 * cut0v5g3yi + 1 ] ; c2ponr5p5sh [ 2 ] = rtP .
NodePoints_Value_p5v5fioltl [ 3 * cut0v5g3yi + 2 ] ; nsqef1g55jc [ 2 ] = rtB
. pupjln41gmw [ 3 * cut0v5g3yi + 2 ] ; { real32_T a5bqbiweik_idx_0 ; real32_T
a5bqbiweik_idx_1 ; real32_T a5bqbiweik_idx_2 ; a5bqbiweik_idx_0 = c2ponr5p5sh
[ 0 ] - rtB . d3madptqecyud [ cut0v5g3yi ] . c1vqtg0iad [ 0 ] ;
a5bqbiweik_idx_1 = c2ponr5p5sh [ 1 ] - rtB . d3madptqecyud [ cut0v5g3yi ] .
c1vqtg0iad [ 1 ] ; a5bqbiweik_idx_2 = c2ponr5p5sh [ 2 ] - rtB . d3madptqecyud
[ cut0v5g3yi ] . c1vqtg0iad [ 2 ] ; oda5umfmkpa [ 0 ] = a5bqbiweik_idx_1 *
nsqef1g55jc [ 2 ] - nsqef1g55jc [ 1 ] * a5bqbiweik_idx_2 ; oda5umfmkpa [ 1 ]
= nsqef1g55jc [ 0 ] * a5bqbiweik_idx_2 - a5bqbiweik_idx_0 * nsqef1g55jc [ 2 ]
; oda5umfmkpa [ 2 ] = a5bqbiweik_idx_0 * nsqef1g55jc [ 1 ] - nsqef1g55jc [ 0
] * a5bqbiweik_idx_1 ; } rtB . dfrnathep2i [ 3 * cut0v5g3yi ] = oda5umfmkpa [
0 ] ; rtB . dfrnathep2i [ 3 * cut0v5g3yi + 1 ] = oda5umfmkpa [ 1 ] ; rtB .
dfrnathep2i [ 3 * cut0v5g3yi + 2 ] = oda5umfmkpa [ 2 ] ; } void
edz33uvfnqTID3 ( int32_T cut0v5g3yi ) { real32_T c2ponr5p5sh [ 3 ] ; real32_T
nsqef1g55jc [ 3 ] ; rtB . d3madptqecyud [ cut0v5g3yi ] . c1vqtg0iad [ 0 ] = (
real32_T ) rtP . xyz_cg [ 0 ] ; rtB . d3madptqecyud [ cut0v5g3yi ] .
c1vqtg0iad [ 1 ] = ( real32_T ) rtP . xyz_cg [ 1 ] ; rtB . d3madptqecyud [
cut0v5g3yi ] . c1vqtg0iad [ 2 ] = ( real32_T ) rtP . xyz_cg [ 2 ] ;
c2ponr5p5sh [ 0 ] = rtP . NodePoints_Value_p5v5fioltl [ 3 * cut0v5g3yi ] ;
nsqef1g55jc [ 0 ] = rtB . pupjln41gmw [ 3 * cut0v5g3yi ] ; c2ponr5p5sh [ 1 ]
= rtP . NodePoints_Value_p5v5fioltl [ 3 * cut0v5g3yi + 1 ] ; nsqef1g55jc [ 1
] = rtB . pupjln41gmw [ 3 * cut0v5g3yi + 1 ] ; c2ponr5p5sh [ 2 ] = rtP .
NodePoints_Value_p5v5fioltl [ 3 * cut0v5g3yi + 2 ] ; nsqef1g55jc [ 2 ] = rtB
. pupjln41gmw [ 3 * cut0v5g3yi + 2 ] ; } void o1qccxjyb0 ( int32_T d3uoiznip0
) { real32_T bz0lndf4rj ; real32_T bljfrrvz5q [ 3 ] ; real32_T jnxmaafnht [ 3
] ; bz0lndf4rj = rtB . jn3504llb5 [ d3uoiznip0 ] ; bljfrrvz5q [ 0 ] = rtB .
lsleed4oje [ 3 * d3uoiznip0 ] ; bljfrrvz5q [ 1 ] = rtB . lsleed4oje [ 3 *
d3uoiznip0 + 1 ] ; bljfrrvz5q [ 2 ] = rtB . lsleed4oje [ 3 * d3uoiznip0 + 2 ]
; { real_T jg4bdhonc2 [ 9 ] ; real_T l1qoeyczai_idx_0 ; real_T
l1qoeyczai_idx_1 ; real_T ly2jivkk1l_idx_0 ; real_T ly2jivkk1l_idx_1 ;
int32_T i ; real32_T tmp ; real32_T tmp_e ; real32_T tmp_p ;
muDoubleScalarSinCos ( bz0lndf4rj , & l1qoeyczai_idx_0 , & ly2jivkk1l_idx_0 )
; muDoubleScalarSinCos ( rtP . d3madptqecyuds . Constant_Value_flaudnvzdb , &
l1qoeyczai_idx_1 , & ly2jivkk1l_idx_1 ) ; jg4bdhonc2 [ 0 ] = ly2jivkk1l_idx_0
* ly2jivkk1l_idx_1 ; jg4bdhonc2 [ 1 ] = - ( ly2jivkk1l_idx_0 *
l1qoeyczai_idx_1 ) ; jg4bdhonc2 [ 2 ] = - l1qoeyczai_idx_0 ; jg4bdhonc2 [ 3 ]
= l1qoeyczai_idx_1 ; jg4bdhonc2 [ 4 ] = ly2jivkk1l_idx_1 ; jg4bdhonc2 [ 5 ] =
rtP . d3madptqecyuds . Constant_Value ; jg4bdhonc2 [ 6 ] = l1qoeyczai_idx_0 *
ly2jivkk1l_idx_1 ; jg4bdhonc2 [ 7 ] = - ( l1qoeyczai_idx_0 * l1qoeyczai_idx_1
) ; jg4bdhonc2 [ 8 ] = ly2jivkk1l_idx_0 ; tmp = - bljfrrvz5q [ 0 ] ; tmp_p =
bljfrrvz5q [ 1 ] ; tmp_e = - bljfrrvz5q [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ )
{ jnxmaafnht [ i ] = 0.0F ; jnxmaafnht [ i ] += ( real32_T ) jg4bdhonc2 [ 3 *
i ] * tmp ; jnxmaafnht [ i ] += ( real32_T ) jg4bdhonc2 [ 3 * i + 1 ] * tmp_p
; jnxmaafnht [ i ] += ( real32_T ) jg4bdhonc2 [ 3 * i + 2 ] * tmp_e ; } } rtB
. pupjln41gmw [ 3 * d3uoiznip0 ] = jnxmaafnht [ 0 ] ; rtB . pupjln41gmw [ 3 *
d3uoiznip0 + 1 ] = jnxmaafnht [ 1 ] ; rtB . pupjln41gmw [ 3 * d3uoiznip0 + 2
] = jnxmaafnht [ 2 ] ; } void o1qccxjyb0TID3 ( int32_T d3uoiznip0 ) {
real32_T bz0lndf4rj ; real32_T bljfrrvz5q [ 3 ] ; bz0lndf4rj = rtB .
jn3504llb5 [ d3uoiznip0 ] ; bljfrrvz5q [ 0 ] = rtB . lsleed4oje [ 3 *
d3uoiznip0 ] ; bljfrrvz5q [ 1 ] = rtB . lsleed4oje [ 3 * d3uoiznip0 + 1 ] ;
bljfrrvz5q [ 2 ] = rtB . lsleed4oje [ 3 * d3uoiznip0 + 2 ] ; } void
iy3uud2hdf ( void ) { int32_T dvs4im5o1g ; for ( dvs4im5o1g = 0 ; dvs4im5o1g
< 7 ; dvs4im5o1g ++ ) { rtB . d3madptqecyudsg [ dvs4im5o1g ] . mwgj2hwbdl [ 0
] = 0.0F ; rtB . d3madptqecyudsg [ dvs4im5o1g ] . mwgj2hwbdl [ 1 ] = 0.0F ;
rtB . d3madptqecyudsg [ dvs4im5o1g ] . mwgj2hwbdl [ 2 ] = 0.0F ; } } void
c1bqh5nyuc ( int32_T dvs4im5o1g ) { real32_T c2ponr5p5shg [ 3 ] ; real32_T
nsqef1g55jcu [ 3 ] ; real32_T oda5umfmkpao [ 3 ] ; c2ponr5p5shg [ 0 ] = rtP .
NodePoints_Value_h4kecv0adx [ 3 * dvs4im5o1g ] ; nsqef1g55jcu [ 0 ] = rtB .
pupjln41gm [ 3 * dvs4im5o1g ] ; c2ponr5p5shg [ 1 ] = rtP .
NodePoints_Value_h4kecv0adx [ 3 * dvs4im5o1g + 1 ] ; nsqef1g55jcu [ 1 ] = rtB
. pupjln41gm [ 3 * dvs4im5o1g + 1 ] ; c2ponr5p5shg [ 2 ] = rtP .
NodePoints_Value_h4kecv0adx [ 3 * dvs4im5o1g + 2 ] ; nsqef1g55jcu [ 2 ] = rtB
. pupjln41gm [ 3 * dvs4im5o1g + 2 ] ; { real32_T ls41124pkg_idx_0 ; real32_T
ls41124pkg_idx_1 ; real32_T ls41124pkg_idx_2 ; ls41124pkg_idx_0 =
c2ponr5p5shg [ 0 ] - rtB . d3madptqecyudsg [ dvs4im5o1g ] . mwgj2hwbdl [ 0 ]
; ls41124pkg_idx_1 = c2ponr5p5shg [ 1 ] - rtB . d3madptqecyudsg [ dvs4im5o1g
] . mwgj2hwbdl [ 1 ] ; ls41124pkg_idx_2 = c2ponr5p5shg [ 2 ] - rtB .
d3madptqecyudsg [ dvs4im5o1g ] . mwgj2hwbdl [ 2 ] ; oda5umfmkpao [ 0 ] =
ls41124pkg_idx_1 * nsqef1g55jcu [ 2 ] - nsqef1g55jcu [ 1 ] * ls41124pkg_idx_2
; oda5umfmkpao [ 1 ] = nsqef1g55jcu [ 0 ] * ls41124pkg_idx_2 -
ls41124pkg_idx_0 * nsqef1g55jcu [ 2 ] ; oda5umfmkpao [ 2 ] = ls41124pkg_idx_0
* nsqef1g55jcu [ 1 ] - nsqef1g55jcu [ 0 ] * ls41124pkg_idx_1 ; } rtB .
dfrnathep2 [ 3 * dvs4im5o1g ] = oda5umfmkpao [ 0 ] ; rtB . dfrnathep2 [ 3 *
dvs4im5o1g + 1 ] = oda5umfmkpao [ 1 ] ; rtB . dfrnathep2 [ 3 * dvs4im5o1g + 2
] = oda5umfmkpao [ 2 ] ; } void c1bqh5nyucTID3 ( int32_T dvs4im5o1g ) {
real32_T c2ponr5p5shg [ 3 ] ; real32_T nsqef1g55jcu [ 3 ] ; rtB .
d3madptqecyudsg [ dvs4im5o1g ] . mwgj2hwbdl [ 0 ] = ( real32_T ) rtP . xyz_cg
[ 0 ] ; rtB . d3madptqecyudsg [ dvs4im5o1g ] . mwgj2hwbdl [ 1 ] = ( real32_T
) rtP . xyz_cg [ 1 ] ; rtB . d3madptqecyudsg [ dvs4im5o1g ] . mwgj2hwbdl [ 2
] = ( real32_T ) rtP . xyz_cg [ 2 ] ; c2ponr5p5shg [ 0 ] = rtP .
NodePoints_Value_h4kecv0adx [ 3 * dvs4im5o1g ] ; nsqef1g55jcu [ 0 ] = rtB .
pupjln41gm [ 3 * dvs4im5o1g ] ; c2ponr5p5shg [ 1 ] = rtP .
NodePoints_Value_h4kecv0adx [ 3 * dvs4im5o1g + 1 ] ; nsqef1g55jcu [ 1 ] = rtB
. pupjln41gm [ 3 * dvs4im5o1g + 1 ] ; c2ponr5p5shg [ 2 ] = rtP .
NodePoints_Value_h4kecv0adx [ 3 * dvs4im5o1g + 2 ] ; nsqef1g55jcu [ 2 ] = rtB
. pupjln41gm [ 3 * dvs4im5o1g + 2 ] ; } void nthclqxgfx ( int32_T hknizctevp
) { real32_T bz0lndf4rjk ; real32_T bljfrrvz5qe [ 3 ] ; real32_T jnxmaafnhtl
[ 3 ] ; bz0lndf4rjk = rtB . kbchqf1nmc [ hknizctevp + 7 ] ; bljfrrvz5qe [ 0 ]
= rtB . mm1arq2jyz [ 3 * hknizctevp ] ; bljfrrvz5qe [ 1 ] = rtB . mm1arq2jyz
[ 3 * hknizctevp + 1 ] ; bljfrrvz5qe [ 2 ] = rtB . mm1arq2jyz [ 3 *
hknizctevp + 2 ] ; { real_T gn4eyj3y2e [ 9 ] ; real_T eey3jhuh3h_idx_0 ;
real_T eey3jhuh3h_idx_1 ; real_T m255wzysel_idx_0 ; real_T m255wzysel_idx_1 ;
int32_T i ; real32_T tmp ; real32_T tmp_e ; real32_T tmp_p ;
muDoubleScalarSinCos ( bz0lndf4rjk , & eey3jhuh3h_idx_0 , & m255wzysel_idx_0
) ; muDoubleScalarSinCos ( rtP . fd2m0yuoxm . Constant_Value_loajhuaqbn , &
eey3jhuh3h_idx_1 , & m255wzysel_idx_1 ) ; gn4eyj3y2e [ 0 ] = m255wzysel_idx_0
* m255wzysel_idx_1 ; gn4eyj3y2e [ 1 ] = - ( m255wzysel_idx_0 *
eey3jhuh3h_idx_1 ) ; gn4eyj3y2e [ 2 ] = - eey3jhuh3h_idx_0 ; gn4eyj3y2e [ 3 ]
= eey3jhuh3h_idx_1 ; gn4eyj3y2e [ 4 ] = m255wzysel_idx_1 ; gn4eyj3y2e [ 5 ] =
rtP . fd2m0yuoxm . Constant_Value ; gn4eyj3y2e [ 6 ] = eey3jhuh3h_idx_0 *
m255wzysel_idx_1 ; gn4eyj3y2e [ 7 ] = - ( eey3jhuh3h_idx_0 * eey3jhuh3h_idx_1
) ; gn4eyj3y2e [ 8 ] = m255wzysel_idx_0 ; tmp = - bljfrrvz5qe [ 0 ] ; tmp_p =
bljfrrvz5qe [ 1 ] ; tmp_e = - bljfrrvz5qe [ 2 ] ; for ( i = 0 ; i < 3 ; i ++
) { jnxmaafnhtl [ i ] = 0.0F ; jnxmaafnhtl [ i ] += ( real32_T ) gn4eyj3y2e [
3 * i ] * tmp ; jnxmaafnhtl [ i ] += ( real32_T ) gn4eyj3y2e [ 3 * i + 1 ] *
tmp_p ; jnxmaafnhtl [ i ] += ( real32_T ) gn4eyj3y2e [ 3 * i + 2 ] * tmp_e ;
} } rtB . pupjln41gm [ 3 * hknizctevp ] = jnxmaafnhtl [ 0 ] ; rtB .
pupjln41gm [ 3 * hknizctevp + 1 ] = jnxmaafnhtl [ 1 ] ; rtB . pupjln41gm [ 3
* hknizctevp + 2 ] = jnxmaafnhtl [ 2 ] ; } void nthclqxgfxTID3 ( int32_T
hknizctevp ) { real32_T bz0lndf4rjk ; real32_T bljfrrvz5qe [ 3 ] ;
bz0lndf4rjk = rtB . kbchqf1nmc [ hknizctevp + 7 ] ; bljfrrvz5qe [ 0 ] = rtB .
mm1arq2jyz [ 3 * hknizctevp ] ; bljfrrvz5qe [ 1 ] = rtB . mm1arq2jyz [ 3 *
hknizctevp + 1 ] ; bljfrrvz5qe [ 2 ] = rtB . mm1arq2jyz [ 3 * hknizctevp + 2
] ; } void lkfq4h3l25 ( void ) { int32_T cuoujoaix3 ; for ( cuoujoaix3 = 0 ;
cuoujoaix3 < 12 ; cuoujoaix3 ++ ) { rtB . l20xgpl0hh [ cuoujoaix3 ] .
pkurrodiqe [ 0 ] = 0.0F ; rtB . l20xgpl0hh [ cuoujoaix3 ] . pkurrodiqe [ 1 ]
= 0.0F ; rtB . l20xgpl0hh [ cuoujoaix3 ] . pkurrodiqe [ 2 ] = 0.0F ; memset (
& rtB . l20xgpl0hh [ cuoujoaix3 ] . g1fza1o1yy [ 0 ] , 0 , 9U * sizeof (
real_T ) ) ; } } void fs2jlt5vxt ( int32_T cuoujoaix3 ) { real_T apes1irif5 ;
real_T gzmdimpiir ; real_T liowb1goij [ 3 ] ; real_T jnmdmyij5f ; real_T
i4s535qioq [ 3 ] ; real_T li2q1wmxnw ; apes1irif5 = rtB . h2sn1vo2jc [
cuoujoaix3 ] ; gzmdimpiir = rtB . p3gbp1cov5 [ cuoujoaix3 + 6 ] ; liowb1goij
[ 0 ] = rtP . xyz_DEP [ 3 * cuoujoaix3 ] ; liowb1goij [ 1 ] = rtP . xyz_DEP [
3 * cuoujoaix3 + 1 ] ; liowb1goij [ 2 ] = rtP . xyz_DEP [ 3 * cuoujoaix3 + 2
] ; jnmdmyij5f = rtP . Constant2_Value_g1e52uiwml [ cuoujoaix3 ] ; { real_T
gyghudmgum [ 3 ] ; real_T ijew0oycqy [ 3 ] ; real_T kcclldlzqd_p [ 3 ] ;
real_T dbhh4lveam ; real_T gcld5ylwsi ; real_T kcclldlzqd_idx_0 ; real_T
kcclldlzqd_idx_1 ; real_T kcclldlzqd_idx_2 ; real_T mqpyd5pr53 ; int32_T i ;
if ( gzmdimpiir > rtP . l20xgpl0hh . Saturation2_UpperSat ) { dbhh4lveam =
rtP . l20xgpl0hh . Saturation2_UpperSat ; } else if ( gzmdimpiir < rtP .
l20xgpl0hh . Saturation2_LowerSat ) { dbhh4lveam = rtP . l20xgpl0hh .
Saturation2_LowerSat ; } else { dbhh4lveam = gzmdimpiir ; } if ( dbhh4lveam >
rtP . l20xgpl0hh . Switch1_Threshold ) { dbhh4lveam = look2_plinlcpw (
apes1irif5 , rtP . l20xgpl0hh . actf2T_Gain * dbhh4lveam , rtP . dp_DEP .
rpm_lookup . V_vec , rtP . dp_DEP . rpm_lookup . T_vec , rtP . dp_DEP .
rpm_lookup . rpm_gird , rtDW . l20xgpl0hh [ cuoujoaix3 ] . nlhryvabyo , rtP .
l20xgpl0hh . T2rpm_maxIndex , 43U ) ; } else { dbhh4lveam = rtP . l20xgpl0hh
. Constant3_Value ; } kcclldlzqd_idx_0 = liowb1goij [ 0 ] - rtB . l20xgpl0hh
[ cuoujoaix3 ] . pkurrodiqe [ 0 ] ; kcclldlzqd_idx_1 = liowb1goij [ 1 ] - rtB
. l20xgpl0hh [ cuoujoaix3 ] . pkurrodiqe [ 1 ] ; kcclldlzqd_idx_2 =
liowb1goij [ 2 ] - rtB . l20xgpl0hh [ cuoujoaix3 ] . pkurrodiqe [ 2 ] ;
gcld5ylwsi = rtP . l20xgpl0hh . Gain1_Gain * dbhh4lveam ; if ( gcld5ylwsi >
rtP . l20xgpl0hh . Saturation_UpperSat ) { gcld5ylwsi = rtP . l20xgpl0hh .
Saturation_UpperSat ; } else if ( gcld5ylwsi < rtP . l20xgpl0hh .
Saturation_LowerSat ) { gcld5ylwsi = rtP . l20xgpl0hh . Saturation_LowerSat ;
} dbhh4lveam = apes1irif5 / ( rtP . l20xgpl0hh . Gain2_Gain * gcld5ylwsi +
rtP . l20xgpl0hh . Constant_Value_oxc5utgxw1 ) ; if ( dbhh4lveam > rtP .
l20xgpl0hh . Saturation1_UpperSat ) { dbhh4lveam = rtP . l20xgpl0hh .
Saturation1_UpperSat ; } else if ( dbhh4lveam < rtP . l20xgpl0hh .
Saturation1_LowerSat ) { dbhh4lveam = rtP . l20xgpl0hh . Saturation1_LowerSat
; } mqpyd5pr53 = look1_plinlcapw ( dbhh4lveam , rtP . dp_DEP . J , rtP .
dp_DEP . C_T , & rtDW . l20xgpl0hh [ cuoujoaix3 ] . mk5iyqhcsl , 45U ) ;
gcld5ylwsi *= gcld5ylwsi ; mqpyd5pr53 = rtB . lhopa3gq4f * mqpyd5pr53 *
gcld5ylwsi * rtP . l20xgpl0hh . Gain3_Gain ; if ( mqpyd5pr53 > rtP .
l20xgpl0hh . Saturation_UpperSat_jq0x0qurh0 ) { mqpyd5pr53 = rtP . l20xgpl0hh
. Saturation_UpperSat_jq0x0qurh0 ; } else if ( mqpyd5pr53 < rtP . l20xgpl0hh
. Saturation_LowerSat_jbsmtux4zo ) { mqpyd5pr53 = rtP . l20xgpl0hh .
Saturation_LowerSat_jbsmtux4zo ; } for ( i = 0 ; i < 3 ; i ++ ) { gyghudmgum
[ i ] = ( rtB . l20xgpl0hh [ cuoujoaix3 ] . g1fza1o1yy [ i + 3 ] * rtP .
l20xgpl0hh . Constant_Value + rtB . l20xgpl0hh [ cuoujoaix3 ] . g1fza1o1yy [
i ] * mqpyd5pr53 ) + rtB . l20xgpl0hh [ cuoujoaix3 ] . g1fza1o1yy [ i + 6 ] *
rtP . l20xgpl0hh . Constant_Value ; } mqpyd5pr53 = look1_plinlcapw (
dbhh4lveam , rtP . dp_DEP . J , rtP . dp_DEP . C_Q , & rtDW . l20xgpl0hh [
cuoujoaix3 ] . f2w5jzpw5v , 45U ) ; mqpyd5pr53 = rtB . lhopa3gq4f *
mqpyd5pr53 * gcld5ylwsi * rtP . l20xgpl0hh . Gain_Gain ; if ( mqpyd5pr53 >
rtP . l20xgpl0hh . Saturation1_UpperSat_ajd4wcytz4 ) { mqpyd5pr53 = rtP .
l20xgpl0hh . Saturation1_UpperSat_ajd4wcytz4 ; } else if ( mqpyd5pr53 < rtP .
l20xgpl0hh . Saturation1_LowerSat_alaxduizh4 ) { mqpyd5pr53 = rtP .
l20xgpl0hh . Saturation1_LowerSat_alaxduizh4 ; } kcclldlzqd_p [ 0 ] =
kcclldlzqd_idx_1 * gyghudmgum [ 2 ] ; kcclldlzqd_p [ 1 ] = gyghudmgum [ 0 ] *
kcclldlzqd_idx_2 ; kcclldlzqd_p [ 2 ] = kcclldlzqd_idx_0 * gyghudmgum [ 1 ] ;
ijew0oycqy [ 0 ] = gyghudmgum [ 1 ] * kcclldlzqd_idx_2 ; ijew0oycqy [ 1 ] =
kcclldlzqd_idx_0 * gyghudmgum [ 2 ] ; ijew0oycqy [ 2 ] = gyghudmgum [ 0 ] *
kcclldlzqd_idx_1 ; for ( i = 0 ; i < 3 ; i ++ ) { i4s535qioq [ i ] = ( ( rtB
. l20xgpl0hh [ cuoujoaix3 ] . g1fza1o1yy [ i + 3 ] * rtP . l20xgpl0hh .
Constant_Value + rtB . l20xgpl0hh [ cuoujoaix3 ] . g1fza1o1yy [ i ] *
mqpyd5pr53 ) + rtB . l20xgpl0hh [ cuoujoaix3 ] . g1fza1o1yy [ i + 6 ] * rtP .
l20xgpl0hh . Constant_Value ) * jnmdmyij5f + ( kcclldlzqd_p [ i ] -
ijew0oycqy [ i ] ) ; } if ( dbhh4lveam > rtP . l20xgpl0hh .
Saturation3_UpperSat ) { li2q1wmxnw = rtP . l20xgpl0hh . Saturation3_UpperSat
; } else if ( dbhh4lveam < rtP . l20xgpl0hh . Saturation3_LowerSat ) {
li2q1wmxnw = rtP . l20xgpl0hh . Saturation3_LowerSat ; } else { li2q1wmxnw =
dbhh4lveam ; } } rtB . gspzpbwxqr [ 3 * cuoujoaix3 ] = i4s535qioq [ 0 ] ; rtB
. gspzpbwxqr [ 3 * cuoujoaix3 + 1 ] = i4s535qioq [ 1 ] ; rtB . gspzpbwxqr [ 3
* cuoujoaix3 + 2 ] = i4s535qioq [ 2 ] ; rtB . g1gwgtjexn [ cuoujoaix3 ] =
li2q1wmxnw ; } void fs2jlt5vxtTID3 ( int32_T cuoujoaix3 ) { real_T apes1irif5
; real_T gzmdimpiir ; real_T liowb1goij [ 3 ] ; real_T jnmdmyij5f ; { real_T
avuippypft [ 9 ] ; real_T aecjz4frbq_idx_0 ; real_T aecjz4frbq_idx_1 ; real_T
aecjz4frbq_idx_2 ; real_T fktfh0avq4_idx_0 ; real_T fktfh0avq4_idx_1 ; real_T
fktfh0avq4_idx_2 ; int32_T i ; rtB . l20xgpl0hh [ cuoujoaix3 ] . pkurrodiqe [
0 ] = ( real32_T ) rtP . xyz_cg [ 0 ] ; rtB . l20xgpl0hh [ cuoujoaix3 ] .
pkurrodiqe [ 1 ] = ( real32_T ) rtP . xyz_cg [ 1 ] ; rtB . l20xgpl0hh [
cuoujoaix3 ] . pkurrodiqe [ 2 ] = ( real32_T ) rtP . xyz_cg [ 2 ] ;
muDoubleScalarSinCos ( rtP . l20xgpl0hh . Constant1_Value , &
aecjz4frbq_idx_0 , & fktfh0avq4_idx_0 ) ; muDoubleScalarSinCos ( rtP .
l20xgpl0hh . DEP_incidence_Value , & aecjz4frbq_idx_1 , & fktfh0avq4_idx_1 )
; muDoubleScalarSinCos ( rtP . l20xgpl0hh . Constant1_Value , &
aecjz4frbq_idx_2 , & fktfh0avq4_idx_2 ) ; avuippypft [ 0 ] = fktfh0avq4_idx_0
* fktfh0avq4_idx_1 ; avuippypft [ 1 ] = aecjz4frbq_idx_1 * aecjz4frbq_idx_2 *
fktfh0avq4_idx_0 - aecjz4frbq_idx_0 * fktfh0avq4_idx_2 ; avuippypft [ 2 ] =
aecjz4frbq_idx_1 * fktfh0avq4_idx_2 * fktfh0avq4_idx_0 + aecjz4frbq_idx_0 *
aecjz4frbq_idx_2 ; avuippypft [ 3 ] = aecjz4frbq_idx_0 * fktfh0avq4_idx_1 ;
avuippypft [ 4 ] = aecjz4frbq_idx_1 * aecjz4frbq_idx_2 * aecjz4frbq_idx_0 +
fktfh0avq4_idx_0 * fktfh0avq4_idx_2 ; avuippypft [ 5 ] = aecjz4frbq_idx_1 *
fktfh0avq4_idx_2 * aecjz4frbq_idx_0 - fktfh0avq4_idx_0 * aecjz4frbq_idx_2 ;
avuippypft [ 6 ] = - aecjz4frbq_idx_1 ; avuippypft [ 7 ] = fktfh0avq4_idx_1 *
aecjz4frbq_idx_2 ; avuippypft [ 8 ] = fktfh0avq4_idx_1 * fktfh0avq4_idx_2 ;
for ( i = 0 ; i < 3 ; i ++ ) { rtB . l20xgpl0hh [ cuoujoaix3 ] . g1fza1o1yy [
3 * i ] = avuippypft [ i ] ; rtB . l20xgpl0hh [ cuoujoaix3 ] . g1fza1o1yy [ 3
* i + 1 ] = avuippypft [ i + 3 ] ; rtB . l20xgpl0hh [ cuoujoaix3 ] .
g1fza1o1yy [ 3 * i + 2 ] = avuippypft [ i + 6 ] ; } } apes1irif5 = rtB .
h2sn1vo2jc [ cuoujoaix3 ] ; gzmdimpiir = rtB . p3gbp1cov5 [ cuoujoaix3 + 6 ]
; liowb1goij [ 0 ] = rtP . xyz_DEP [ 3 * cuoujoaix3 ] ; liowb1goij [ 1 ] =
rtP . xyz_DEP [ 3 * cuoujoaix3 + 1 ] ; liowb1goij [ 2 ] = rtP . xyz_DEP [ 3 *
cuoujoaix3 + 2 ] ; jnmdmyij5f = rtP . Constant2_Value_g1e52uiwml [ cuoujoaix3
] ; } void pyrdagnyo4 ( void ) { int32_T cz32khoqjf ; for ( cz32khoqjf = 0 ;
cz32khoqjf < 16 ; cz32khoqjf ++ ) { rtB . b3o13eajmv [ cz32khoqjf ] .
blncbuv1mz [ 0 ] = 0.0F ; rtB . b3o13eajmv [ cz32khoqjf ] . blncbuv1mz [ 1 ]
= 0.0F ; rtB . b3o13eajmv [ cz32khoqjf ] . blncbuv1mz [ 2 ] = 0.0F ; } } void
bvcrkjfwjy ( int32_T cz32khoqjf ) { real32_T lbicg5nulh [ 3 ] ; real32_T
l1joxfmybe ; real32_T kntbtuxfvz ; real32_T itvxjx3bgm ; lbicg5nulh [ 0 ] =
rtP . vtail_nodes [ 3 * cz32khoqjf ] ; lbicg5nulh [ 1 ] = rtP . vtail_nodes [
3 * cz32khoqjf + 1 ] ; lbicg5nulh [ 2 ] = rtP . vtail_nodes [ 3 * cz32khoqjf
+ 2 ] ; { real32_T mlwjharrpn_idx_0 ; real32_T mlwjharrpn_idx_1 ; real32_T
mlwjharrpn_idx_2 ; real32_T n1ziqxj2ot_idx_0 ; mlwjharrpn_idx_0 = rtB .
b3o13eajmv [ cz32khoqjf ] . blncbuv1mz [ 0 ] - lbicg5nulh [ 0 ] ;
mlwjharrpn_idx_1 = rtB . b3o13eajmv [ cz32khoqjf ] . blncbuv1mz [ 1 ] -
lbicg5nulh [ 1 ] ; mlwjharrpn_idx_2 = rtB . b3o13eajmv [ cz32khoqjf ] .
blncbuv1mz [ 2 ] - lbicg5nulh [ 2 ] ; n1ziqxj2ot_idx_0 = ( mlwjharrpn_idx_1 *
rtB . cdaqgvy4ew [ 2 ] - rtB . cdaqgvy4ew [ 1 ] * mlwjharrpn_idx_2 ) + rtB .
petq0ddot1 [ 0 ] ; mlwjharrpn_idx_2 = ( rtB . cdaqgvy4ew [ 0 ] *
mlwjharrpn_idx_2 - mlwjharrpn_idx_0 * rtB . cdaqgvy4ew [ 2 ] ) + rtB .
petq0ddot1 [ 1 ] ; mlwjharrpn_idx_0 = ( mlwjharrpn_idx_0 * rtB . cdaqgvy4ew [
1 ] - rtB . cdaqgvy4ew [ 0 ] * mlwjharrpn_idx_1 ) + rtB . petq0ddot1 [ 2 ] ;
mlwjharrpn_idx_1 = ( muSingleScalarPower ( n1ziqxj2ot_idx_0 , 2.0F ) +
muSingleScalarPower ( mlwjharrpn_idx_2 , 2.0F ) ) + muSingleScalarPower (
mlwjharrpn_idx_0 , 2.0F ) ; if ( mlwjharrpn_idx_1 < 0.0F ) { mlwjharrpn_idx_1
= - muSingleScalarSqrt ( - mlwjharrpn_idx_1 ) ; } else { mlwjharrpn_idx_1 =
muSingleScalarSqrt ( mlwjharrpn_idx_1 ) ; } itvxjx3bgm = mlwjharrpn_idx_1 +
rtP . b3o13eajmv . Constant1_Value ; mlwjharrpn_idx_2 /= itvxjx3bgm ; if (
mlwjharrpn_idx_2 > 1.0F ) { mlwjharrpn_idx_2 = 1.0F ; } else if (
mlwjharrpn_idx_2 < - 1.0F ) { mlwjharrpn_idx_2 = - 1.0F ; } l1joxfmybe =
muSingleScalarAsin ( mlwjharrpn_idx_2 ) ; kntbtuxfvz = muSingleScalarAtan (
mlwjharrpn_idx_0 / ( n1ziqxj2ot_idx_0 + rtP . b3o13eajmv . Constant1_Value )
) ; } rtB . kmrinhn2my [ cz32khoqjf ] = l1joxfmybe ; rtB . pcrwxsaluni [
cz32khoqjf ] = kntbtuxfvz ; rtB . evhqkw31g3q [ cz32khoqjf ] = itvxjx3bgm ; }
void bvcrkjfwjyTID3 ( int32_T cz32khoqjf ) { real32_T lbicg5nulh [ 3 ] ; rtB
. b3o13eajmv [ cz32khoqjf ] . blncbuv1mz [ 0 ] = ( real32_T ) rtP . xyz_cg [
0 ] ; rtB . b3o13eajmv [ cz32khoqjf ] . blncbuv1mz [ 1 ] = ( real32_T ) rtP .
xyz_cg [ 1 ] ; rtB . b3o13eajmv [ cz32khoqjf ] . blncbuv1mz [ 2 ] = (
real32_T ) rtP . xyz_cg [ 2 ] ; lbicg5nulh [ 0 ] = rtP . vtail_nodes [ 3 *
cz32khoqjf ] ; lbicg5nulh [ 1 ] = rtP . vtail_nodes [ 3 * cz32khoqjf + 1 ] ;
lbicg5nulh [ 2 ] = rtP . vtail_nodes [ 3 * cz32khoqjf + 2 ] ; } void
fzq5puknp1 ( void ) { int32_T ocipuayho4 ; for ( ocipuayho4 = 0 ; ocipuayho4
< 14 ; ocipuayho4 ++ ) { rtB . b3o13eajmv2 [ ocipuayho4 ] . mobubeje4r [ 0 ]
= 0.0F ; rtB . b3o13eajmv2 [ ocipuayho4 ] . mobubeje4r [ 1 ] = 0.0F ; rtB .
b3o13eajmv2 [ ocipuayho4 ] . mobubeje4r [ 2 ] = 0.0F ; } } void bo1p4zvpzl (
int32_T ocipuayho4 ) { real32_T lbicg5nulhy [ 3 ] ; real32_T kntbtuxfvzn ;
real32_T hzg00urlkk ; lbicg5nulhy [ 0 ] = rtP . wing_nodes [ 3 * ocipuayho4 ]
; lbicg5nulhy [ 1 ] = rtP . wing_nodes [ 3 * ocipuayho4 + 1 ] ; lbicg5nulhy [
2 ] = rtP . wing_nodes [ 3 * ocipuayho4 + 2 ] ; { real32_T abtakivpjl_idx_2 ;
real32_T abtakivpjl_idx_4 ; real32_T ku2wk1syj1_idx_0 ; real32_T
ku2wk1syj1_idx_1 ; real32_T ku2wk1syj1_idx_2 ; real32_T ku2wk1syj1_p ;
real32_T mkd1jnrfmp ; ku2wk1syj1_idx_0 = rtB . b3o13eajmv2 [ ocipuayho4 ] .
mobubeje4r [ 0 ] - lbicg5nulhy [ 0 ] ; ku2wk1syj1_idx_1 = rtB . b3o13eajmv2 [
ocipuayho4 ] . mobubeje4r [ 1 ] - lbicg5nulhy [ 1 ] ; ku2wk1syj1_idx_2 = rtB
. b3o13eajmv2 [ ocipuayho4 ] . mobubeje4r [ 2 ] - lbicg5nulhy [ 2 ] ;
abtakivpjl_idx_2 = ku2wk1syj1_idx_0 * rtB . cdaqgvy4ew [ 1 ] ;
abtakivpjl_idx_4 = ku2wk1syj1_idx_0 * rtB . cdaqgvy4ew [ 2 ] ; mkd1jnrfmp = (
ku2wk1syj1_idx_1 * rtB . cdaqgvy4ew [ 2 ] - rtB . cdaqgvy4ew [ 1 ] *
ku2wk1syj1_idx_2 ) + rtB . petq0ddot1 [ 0 ] ; ku2wk1syj1_p = mkd1jnrfmp *
mkd1jnrfmp ; ku2wk1syj1_idx_0 = mkd1jnrfmp ; mkd1jnrfmp = ( rtB . cdaqgvy4ew
[ 0 ] * ku2wk1syj1_idx_2 - abtakivpjl_idx_4 ) + rtB . petq0ddot1 [ 1 ] ;
ku2wk1syj1_p += mkd1jnrfmp * mkd1jnrfmp ; mkd1jnrfmp = ( abtakivpjl_idx_2 -
rtB . cdaqgvy4ew [ 0 ] * ku2wk1syj1_idx_1 ) + rtB . petq0ddot1 [ 2 ] ;
ku2wk1syj1_p += mkd1jnrfmp * mkd1jnrfmp ; kntbtuxfvzn = muSingleScalarAtan (
mkd1jnrfmp / ( ku2wk1syj1_idx_0 + rtP . b3o13eajmv2 . Constant1_Value ) ) ;
hzg00urlkk = muSingleScalarSqrt ( ku2wk1syj1_p ) ; } rtB . pcrwxsalun [
ocipuayho4 ] = kntbtuxfvzn ; rtB . evhqkw31g3 [ ocipuayho4 ] = hzg00urlkk ; }
void bo1p4zvpzlTID3 ( int32_T ocipuayho4 ) { real32_T lbicg5nulhy [ 3 ] ; rtB
. b3o13eajmv2 [ ocipuayho4 ] . mobubeje4r [ 0 ] = ( real32_T ) rtP . xyz_cg [
0 ] ; rtB . b3o13eajmv2 [ ocipuayho4 ] . mobubeje4r [ 1 ] = ( real32_T ) rtP
. xyz_cg [ 1 ] ; rtB . b3o13eajmv2 [ ocipuayho4 ] . mobubeje4r [ 2 ] = (
real32_T ) rtP . xyz_cg [ 2 ] ; lbicg5nulhy [ 0 ] = rtP . wing_nodes [ 3 *
ocipuayho4 ] ; lbicg5nulhy [ 1 ] = rtP . wing_nodes [ 3 * ocipuayho4 + 1 ] ;
lbicg5nulhy [ 2 ] = rtP . wing_nodes [ 3 * ocipuayho4 + 2 ] ; } void
m2y4xzql5g ( void ) { int32_T jswqvylipj ; for ( jswqvylipj = 0 ; jswqvylipj
< 16 ; jswqvylipj ++ ) { rtB . b3o13eajmv2j [ jswqvylipj ] . eubb12v5l3 [ 0 ]
= 0.0F ; rtB . b3o13eajmv2j [ jswqvylipj ] . eubb12v5l3 [ 1 ] = 0.0F ; rtB .
b3o13eajmv2j [ jswqvylipj ] . eubb12v5l3 [ 2 ] = 0.0F ; } } void npienbht1r (
int32_T jswqvylipj ) { real32_T czehhl2vef [ 3 ] ; real32_T amw23beavx [ 3 ]
; real32_T p3b4bxvdvl [ 3 ] ; czehhl2vef [ 0 ] = rtP . vtail_nodes [ 3 *
jswqvylipj ] ; amw23beavx [ 0 ] = rtB . enr40llpyf [ 3 * jswqvylipj ] ;
czehhl2vef [ 1 ] = rtP . vtail_nodes [ 3 * jswqvylipj + 1 ] ; amw23beavx [ 1
] = rtB . enr40llpyf [ 3 * jswqvylipj + 1 ] ; czehhl2vef [ 2 ] = rtP .
vtail_nodes [ 3 * jswqvylipj + 2 ] ; amw23beavx [ 2 ] = rtB . enr40llpyf [ 3
* jswqvylipj + 2 ] ; { real32_T cofw1kqg0c_idx_0 ; real32_T cofw1kqg0c_idx_1
; real32_T cofw1kqg0c_idx_2 ; cofw1kqg0c_idx_0 = czehhl2vef [ 0 ] - rtB .
b3o13eajmv2j [ jswqvylipj ] . eubb12v5l3 [ 0 ] ; cofw1kqg0c_idx_1 =
czehhl2vef [ 1 ] - rtB . b3o13eajmv2j [ jswqvylipj ] . eubb12v5l3 [ 1 ] ;
cofw1kqg0c_idx_2 = czehhl2vef [ 2 ] - rtB . b3o13eajmv2j [ jswqvylipj ] .
eubb12v5l3 [ 2 ] ; p3b4bxvdvl [ 0 ] = cofw1kqg0c_idx_1 * amw23beavx [ 2 ] -
amw23beavx [ 1 ] * cofw1kqg0c_idx_2 ; p3b4bxvdvl [ 1 ] = amw23beavx [ 0 ] *
cofw1kqg0c_idx_2 - cofw1kqg0c_idx_0 * amw23beavx [ 2 ] ; p3b4bxvdvl [ 2 ] =
cofw1kqg0c_idx_0 * amw23beavx [ 1 ] - amw23beavx [ 0 ] * cofw1kqg0c_idx_1 ; }
rtB . gniuf51ho0uq [ 3 * jswqvylipj ] = p3b4bxvdvl [ 0 ] ; rtB . gniuf51ho0uq
[ 3 * jswqvylipj + 1 ] = p3b4bxvdvl [ 1 ] ; rtB . gniuf51ho0uq [ 3 *
jswqvylipj + 2 ] = p3b4bxvdvl [ 2 ] ; } void npienbht1rTID3 ( int32_T
jswqvylipj ) { real32_T czehhl2vef [ 3 ] ; real32_T amw23beavx [ 3 ] ; rtB .
b3o13eajmv2j [ jswqvylipj ] . eubb12v5l3 [ 0 ] = ( real32_T ) rtP . xyz_cg [
0 ] ; rtB . b3o13eajmv2j [ jswqvylipj ] . eubb12v5l3 [ 1 ] = ( real32_T ) rtP
. xyz_cg [ 1 ] ; rtB . b3o13eajmv2j [ jswqvylipj ] . eubb12v5l3 [ 2 ] = (
real32_T ) rtP . xyz_cg [ 2 ] ; czehhl2vef [ 0 ] = rtP . vtail_nodes [ 3 *
jswqvylipj ] ; amw23beavx [ 0 ] = rtB . enr40llpyf [ 3 * jswqvylipj ] ;
czehhl2vef [ 1 ] = rtP . vtail_nodes [ 3 * jswqvylipj + 1 ] ; amw23beavx [ 1
] = rtB . enr40llpyf [ 3 * jswqvylipj + 1 ] ; czehhl2vef [ 2 ] = rtP .
vtail_nodes [ 3 * jswqvylipj + 2 ] ; amw23beavx [ 2 ] = rtB . enr40llpyf [ 3
* jswqvylipj + 2 ] ; } void ca44jyxscj ( void ) { int32_T ei4vnnuv1y ; for (
ei4vnnuv1y = 0 ; ei4vnnuv1y < 7 ; ei4vnnuv1y ++ ) { rtB . b3o13eajmv2jk [
ei4vnnuv1y ] . oytk0qojnl [ 0 ] = 0.0F ; rtB . b3o13eajmv2jk [ ei4vnnuv1y ] .
oytk0qojnl [ 1 ] = 0.0F ; rtB . b3o13eajmv2jk [ ei4vnnuv1y ] . oytk0qojnl [ 2
] = 0.0F ; } } void avd00xkr3e ( int32_T ei4vnnuv1y ) { real32_T czehhl2vefc
[ 3 ] ; real32_T amw23beavxp [ 3 ] ; real32_T p3b4bxvdvln [ 3 ] ; czehhl2vefc
[ 0 ] = rtP . NodePoints_Value_ed1kekrrs2 [ 3 * ei4vnnuv1y ] ; amw23beavxp [
0 ] = rtB . oiodmcndy4v [ 3 * ei4vnnuv1y ] ; czehhl2vefc [ 1 ] = rtP .
NodePoints_Value_ed1kekrrs2 [ 3 * ei4vnnuv1y + 1 ] ; amw23beavxp [ 1 ] = rtB
. oiodmcndy4v [ 3 * ei4vnnuv1y + 1 ] ; czehhl2vefc [ 2 ] = rtP .
NodePoints_Value_ed1kekrrs2 [ 3 * ei4vnnuv1y + 2 ] ; amw23beavxp [ 2 ] = rtB
. oiodmcndy4v [ 3 * ei4vnnuv1y + 2 ] ; { real32_T l142qu0idm_idx_0 ; real32_T
l142qu0idm_idx_1 ; real32_T l142qu0idm_idx_2 ; l142qu0idm_idx_0 = czehhl2vefc
[ 0 ] - rtB . b3o13eajmv2jk [ ei4vnnuv1y ] . oytk0qojnl [ 0 ] ;
l142qu0idm_idx_1 = czehhl2vefc [ 1 ] - rtB . b3o13eajmv2jk [ ei4vnnuv1y ] .
oytk0qojnl [ 1 ] ; l142qu0idm_idx_2 = czehhl2vefc [ 2 ] - rtB . b3o13eajmv2jk
[ ei4vnnuv1y ] . oytk0qojnl [ 2 ] ; p3b4bxvdvln [ 0 ] = l142qu0idm_idx_1 *
amw23beavxp [ 2 ] - amw23beavxp [ 1 ] * l142qu0idm_idx_2 ; p3b4bxvdvln [ 1 ]
= amw23beavxp [ 0 ] * l142qu0idm_idx_2 - l142qu0idm_idx_0 * amw23beavxp [ 2 ]
; p3b4bxvdvln [ 2 ] = l142qu0idm_idx_0 * amw23beavxp [ 1 ] - amw23beavxp [ 0
] * l142qu0idm_idx_1 ; } rtB . gniuf51ho0u [ 3 * ei4vnnuv1y ] = p3b4bxvdvln [
0 ] ; rtB . gniuf51ho0u [ 3 * ei4vnnuv1y + 1 ] = p3b4bxvdvln [ 1 ] ; rtB .
gniuf51ho0u [ 3 * ei4vnnuv1y + 2 ] = p3b4bxvdvln [ 2 ] ; } void
avd00xkr3eTID3 ( int32_T ei4vnnuv1y ) { real32_T czehhl2vefc [ 3 ] ; real32_T
amw23beavxp [ 3 ] ; rtB . b3o13eajmv2jk [ ei4vnnuv1y ] . oytk0qojnl [ 0 ] = (
real32_T ) rtP . xyz_cg [ 0 ] ; rtB . b3o13eajmv2jk [ ei4vnnuv1y ] .
oytk0qojnl [ 1 ] = ( real32_T ) rtP . xyz_cg [ 1 ] ; rtB . b3o13eajmv2jk [
ei4vnnuv1y ] . oytk0qojnl [ 2 ] = ( real32_T ) rtP . xyz_cg [ 2 ] ;
czehhl2vefc [ 0 ] = rtP . NodePoints_Value_ed1kekrrs2 [ 3 * ei4vnnuv1y ] ;
amw23beavxp [ 0 ] = rtB . oiodmcndy4v [ 3 * ei4vnnuv1y ] ; czehhl2vefc [ 1 ]
= rtP . NodePoints_Value_ed1kekrrs2 [ 3 * ei4vnnuv1y + 1 ] ; amw23beavxp [ 1
] = rtB . oiodmcndy4v [ 3 * ei4vnnuv1y + 1 ] ; czehhl2vefc [ 2 ] = rtP .
NodePoints_Value_ed1kekrrs2 [ 3 * ei4vnnuv1y + 2 ] ; amw23beavxp [ 2 ] = rtB
. oiodmcndy4v [ 3 * ei4vnnuv1y + 2 ] ; } void fmrsksrnzz ( int32_T irgnejkoh4
) { real32_T cwc5d2cvzc ; real32_T dnhcczkpvc [ 3 ] ; real32_T iaro2t235r [ 3
] ; cwc5d2cvzc = rtB . gad0n3uwlc [ irgnejkoh4 ] ; dnhcczkpvc [ 0 ] = rtB .
dnlwiccdyx [ 3 * irgnejkoh4 ] ; dnhcczkpvc [ 1 ] = rtB . dnlwiccdyx [ 3 *
irgnejkoh4 + 1 ] ; dnhcczkpvc [ 2 ] = rtB . dnlwiccdyx [ 3 * irgnejkoh4 + 2 ]
; { real_T piu1yeiagw [ 9 ] ; real_T aj3iiwszj5_idx_0 ; real_T
aj3iiwszj5_idx_1 ; real_T n2bpkqev0e_idx_0 ; real_T n2bpkqev0e_idx_1 ;
int32_T i ; real32_T tmp ; real32_T tmp_e ; real32_T tmp_p ;
muDoubleScalarSinCos ( cwc5d2cvzc , & aj3iiwszj5_idx_0 , & n2bpkqev0e_idx_0 )
; muDoubleScalarSinCos ( rtP . b3o13eajmv2jkw . Constant_Value_p3qxudol4i , &
aj3iiwszj5_idx_1 , & n2bpkqev0e_idx_1 ) ; piu1yeiagw [ 0 ] = n2bpkqev0e_idx_0
* n2bpkqev0e_idx_1 ; piu1yeiagw [ 1 ] = - ( n2bpkqev0e_idx_0 *
aj3iiwszj5_idx_1 ) ; piu1yeiagw [ 2 ] = - aj3iiwszj5_idx_0 ; piu1yeiagw [ 3 ]
= aj3iiwszj5_idx_1 ; piu1yeiagw [ 4 ] = n2bpkqev0e_idx_1 ; piu1yeiagw [ 5 ] =
rtP . b3o13eajmv2jkw . Constant_Value ; piu1yeiagw [ 6 ] = aj3iiwszj5_idx_0 *
n2bpkqev0e_idx_1 ; piu1yeiagw [ 7 ] = - ( aj3iiwszj5_idx_0 * aj3iiwszj5_idx_1
) ; piu1yeiagw [ 8 ] = n2bpkqev0e_idx_0 ; tmp = - dnhcczkpvc [ 0 ] ; tmp_p =
dnhcczkpvc [ 1 ] ; tmp_e = - dnhcczkpvc [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ )
{ iaro2t235r [ i ] = 0.0F ; iaro2t235r [ i ] += ( real32_T ) piu1yeiagw [ 3 *
i ] * tmp ; iaro2t235r [ i ] += ( real32_T ) piu1yeiagw [ 3 * i + 1 ] * tmp_p
; iaro2t235r [ i ] += ( real32_T ) piu1yeiagw [ 3 * i + 2 ] * tmp_e ; } } rtB
. oiodmcndy4v [ 3 * irgnejkoh4 ] = iaro2t235r [ 0 ] ; rtB . oiodmcndy4v [ 3 *
irgnejkoh4 + 1 ] = iaro2t235r [ 1 ] ; rtB . oiodmcndy4v [ 3 * irgnejkoh4 + 2
] = iaro2t235r [ 2 ] ; } void fmrsksrnzzTID3 ( int32_T irgnejkoh4 ) {
real32_T cwc5d2cvzc ; real32_T dnhcczkpvc [ 3 ] ; cwc5d2cvzc = rtB .
gad0n3uwlc [ irgnejkoh4 ] ; dnhcczkpvc [ 0 ] = rtB . dnlwiccdyx [ 3 *
irgnejkoh4 ] ; dnhcczkpvc [ 1 ] = rtB . dnlwiccdyx [ 3 * irgnejkoh4 + 1 ] ;
dnhcczkpvc [ 2 ] = rtB . dnlwiccdyx [ 3 * irgnejkoh4 + 2 ] ; } void
fjn4uebnlm ( void ) { int32_T iw4jh3lfnt ; for ( iw4jh3lfnt = 0 ; iw4jh3lfnt
< 7 ; iw4jh3lfnt ++ ) { rtB . b3o13eajmv2jkwp [ iw4jh3lfnt ] . gypygly00a [ 0
] = 0.0F ; rtB . b3o13eajmv2jkwp [ iw4jh3lfnt ] . gypygly00a [ 1 ] = 0.0F ;
rtB . b3o13eajmv2jkwp [ iw4jh3lfnt ] . gypygly00a [ 2 ] = 0.0F ; } } void
eezkdrz3yw ( int32_T iw4jh3lfnt ) { real32_T czehhl2vefcn [ 3 ] ; real32_T
amw23beavxpv [ 3 ] ; real32_T p3b4bxvdvln2 [ 3 ] ; czehhl2vefcn [ 0 ] = rtP .
NodePoints_Value_hreligo5c2 [ 3 * iw4jh3lfnt ] ; amw23beavxpv [ 0 ] = rtB .
oiodmcndy4 [ 3 * iw4jh3lfnt ] ; czehhl2vefcn [ 1 ] = rtP .
NodePoints_Value_hreligo5c2 [ 3 * iw4jh3lfnt + 1 ] ; amw23beavxpv [ 1 ] = rtB
. oiodmcndy4 [ 3 * iw4jh3lfnt + 1 ] ; czehhl2vefcn [ 2 ] = rtP .
NodePoints_Value_hreligo5c2 [ 3 * iw4jh3lfnt + 2 ] ; amw23beavxpv [ 2 ] = rtB
. oiodmcndy4 [ 3 * iw4jh3lfnt + 2 ] ; { real32_T mbfki4ywu1_idx_0 ; real32_T
mbfki4ywu1_idx_1 ; real32_T mbfki4ywu1_idx_2 ; mbfki4ywu1_idx_0 =
czehhl2vefcn [ 0 ] - rtB . b3o13eajmv2jkwp [ iw4jh3lfnt ] . gypygly00a [ 0 ]
; mbfki4ywu1_idx_1 = czehhl2vefcn [ 1 ] - rtB . b3o13eajmv2jkwp [ iw4jh3lfnt
] . gypygly00a [ 1 ] ; mbfki4ywu1_idx_2 = czehhl2vefcn [ 2 ] - rtB .
b3o13eajmv2jkwp [ iw4jh3lfnt ] . gypygly00a [ 2 ] ; p3b4bxvdvln2 [ 0 ] =
mbfki4ywu1_idx_1 * amw23beavxpv [ 2 ] - amw23beavxpv [ 1 ] * mbfki4ywu1_idx_2
; p3b4bxvdvln2 [ 1 ] = amw23beavxpv [ 0 ] * mbfki4ywu1_idx_2 -
mbfki4ywu1_idx_0 * amw23beavxpv [ 2 ] ; p3b4bxvdvln2 [ 2 ] = mbfki4ywu1_idx_0
* amw23beavxpv [ 1 ] - amw23beavxpv [ 0 ] * mbfki4ywu1_idx_1 ; } rtB .
gniuf51ho0 [ 3 * iw4jh3lfnt ] = p3b4bxvdvln2 [ 0 ] ; rtB . gniuf51ho0 [ 3 *
iw4jh3lfnt + 1 ] = p3b4bxvdvln2 [ 1 ] ; rtB . gniuf51ho0 [ 3 * iw4jh3lfnt + 2
] = p3b4bxvdvln2 [ 2 ] ; } void eezkdrz3ywTID3 ( int32_T iw4jh3lfnt ) {
real32_T czehhl2vefcn [ 3 ] ; real32_T amw23beavxpv [ 3 ] ; rtB .
b3o13eajmv2jkwp [ iw4jh3lfnt ] . gypygly00a [ 0 ] = ( real32_T ) rtP . xyz_cg
[ 0 ] ; rtB . b3o13eajmv2jkwp [ iw4jh3lfnt ] . gypygly00a [ 1 ] = ( real32_T
) rtP . xyz_cg [ 1 ] ; rtB . b3o13eajmv2jkwp [ iw4jh3lfnt ] . gypygly00a [ 2
] = ( real32_T ) rtP . xyz_cg [ 2 ] ; czehhl2vefcn [ 0 ] = rtP .
NodePoints_Value_hreligo5c2 [ 3 * iw4jh3lfnt ] ; amw23beavxpv [ 0 ] = rtB .
oiodmcndy4 [ 3 * iw4jh3lfnt ] ; czehhl2vefcn [ 1 ] = rtP .
NodePoints_Value_hreligo5c2 [ 3 * iw4jh3lfnt + 1 ] ; amw23beavxpv [ 1 ] = rtB
. oiodmcndy4 [ 3 * iw4jh3lfnt + 1 ] ; czehhl2vefcn [ 2 ] = rtP .
NodePoints_Value_hreligo5c2 [ 3 * iw4jh3lfnt + 2 ] ; amw23beavxpv [ 2 ] = rtB
. oiodmcndy4 [ 3 * iw4jh3lfnt + 2 ] ; } void hkavxjjm4m ( int32_T gyebqgbftr
) { real32_T cwc5d2cvzcv ; real32_T dnhcczkpvcm [ 3 ] ; real32_T iaro2t235rc
[ 3 ] ; cwc5d2cvzcv = rtB . pcrwxsalun [ gyebqgbftr + 7 ] ; dnhcczkpvcm [ 0 ]
= rtB . havkhumthp [ 3 * gyebqgbftr ] ; dnhcczkpvcm [ 1 ] = rtB . havkhumthp
[ 3 * gyebqgbftr + 1 ] ; dnhcczkpvcm [ 2 ] = rtB . havkhumthp [ 3 *
gyebqgbftr + 2 ] ; { real_T buznwmpsu2 [ 9 ] ; real_T ay0najj4kw_idx_0 ;
real_T ay0najj4kw_idx_1 ; real_T cdwz1j2f3c_idx_0 ; real_T cdwz1j2f3c_idx_1 ;
int32_T i ; real32_T tmp ; real32_T tmp_e ; real32_T tmp_p ;
muDoubleScalarSinCos ( cwc5d2cvzcv , & cdwz1j2f3c_idx_0 , & ay0najj4kw_idx_0
) ; muDoubleScalarSinCos ( rtP . eo5c0y54mx . Constant_Value_a2ee3cola1 , &
cdwz1j2f3c_idx_1 , & ay0najj4kw_idx_1 ) ; buznwmpsu2 [ 0 ] = ay0najj4kw_idx_0
* ay0najj4kw_idx_1 ; buznwmpsu2 [ 1 ] = - ( ay0najj4kw_idx_0 *
cdwz1j2f3c_idx_1 ) ; buznwmpsu2 [ 2 ] = - cdwz1j2f3c_idx_0 ; buznwmpsu2 [ 3 ]
= cdwz1j2f3c_idx_1 ; buznwmpsu2 [ 4 ] = ay0najj4kw_idx_1 ; buznwmpsu2 [ 5 ] =
rtP . eo5c0y54mx . Constant_Value ; buznwmpsu2 [ 6 ] = cdwz1j2f3c_idx_0 *
ay0najj4kw_idx_1 ; buznwmpsu2 [ 7 ] = - ( cdwz1j2f3c_idx_0 * cdwz1j2f3c_idx_1
) ; buznwmpsu2 [ 8 ] = ay0najj4kw_idx_0 ; tmp = - dnhcczkpvcm [ 0 ] ; tmp_p =
dnhcczkpvcm [ 1 ] ; tmp_e = - dnhcczkpvcm [ 2 ] ; for ( i = 0 ; i < 3 ; i ++
) { iaro2t235rc [ i ] = 0.0F ; iaro2t235rc [ i ] += ( real32_T ) buznwmpsu2 [
3 * i ] * tmp ; iaro2t235rc [ i ] += ( real32_T ) buznwmpsu2 [ 3 * i + 1 ] *
tmp_p ; iaro2t235rc [ i ] += ( real32_T ) buznwmpsu2 [ 3 * i + 2 ] * tmp_e ;
} } rtB . oiodmcndy4 [ 3 * gyebqgbftr ] = iaro2t235rc [ 0 ] ; rtB .
oiodmcndy4 [ 3 * gyebqgbftr + 1 ] = iaro2t235rc [ 1 ] ; rtB . oiodmcndy4 [ 3
* gyebqgbftr + 2 ] = iaro2t235rc [ 2 ] ; } void hkavxjjm4mTID3 ( int32_T
gyebqgbftr ) { real32_T cwc5d2cvzcv ; real32_T dnhcczkpvcm [ 3 ] ;
cwc5d2cvzcv = rtB . pcrwxsalun [ gyebqgbftr + 7 ] ; dnhcczkpvcm [ 0 ] = rtB .
havkhumthp [ 3 * gyebqgbftr ] ; dnhcczkpvcm [ 1 ] = rtB . havkhumthp [ 3 *
gyebqgbftr + 1 ] ; dnhcczkpvcm [ 2 ] = rtB . havkhumthp [ 3 * gyebqgbftr + 2
] ; } void mlcjwu0myw ( void ) { int32_T ancmdcdnjw ; for ( ancmdcdnjw = 0 ;
ancmdcdnjw < 12 ; ancmdcdnjw ++ ) { rtB . icuuav0qej [ ancmdcdnjw ] .
hkt3c3tre5 [ 0 ] = 0.0F ; rtB . icuuav0qej [ ancmdcdnjw ] . hkt3c3tre5 [ 1 ]
= 0.0F ; rtB . icuuav0qej [ ancmdcdnjw ] . hkt3c3tre5 [ 2 ] = 0.0F ; memset (
& rtB . icuuav0qej [ ancmdcdnjw ] . al1dnkku34 [ 0 ] , 0 , 9U * sizeof (
real_T ) ) ; } } void j4wzsijapu ( int32_T ancmdcdnjw ) { real_T hgepq5sb0n ;
real_T ncry1w41lh ; real_T ntjgvph2xp [ 3 ] ; real_T hi1lsj4enl ; real_T
dhfomh30dh [ 3 ] ; real_T oafndqgrht ; hgepq5sb0n = rtB . iwkjq2gkyu [
ancmdcdnjw ] ; ncry1w41lh = rtB . le5ehxvxar [ ancmdcdnjw + 6 ] ; ntjgvph2xp
[ 0 ] = rtP . xyz_DEP [ 3 * ancmdcdnjw ] ; ntjgvph2xp [ 1 ] = rtP . xyz_DEP [
3 * ancmdcdnjw + 1 ] ; ntjgvph2xp [ 2 ] = rtP . xyz_DEP [ 3 * ancmdcdnjw + 2
] ; hi1lsj4enl = rtP . Constant2_Value_fjhgdn5qms [ ancmdcdnjw ] ; { real_T
ae3e31qmc1 [ 3 ] ; real_T nujeymdrtx [ 3 ] ; real_T oe11ko1ubx_p [ 3 ] ;
real_T ciwpla5k0e ; real_T eo2csz4mcg ; real_T h0xd3tu0em ; real_T
oe11ko1ubx_idx_0 ; real_T oe11ko1ubx_idx_1 ; real_T oe11ko1ubx_idx_2 ;
int32_T i ; if ( ncry1w41lh > rtP . icuuav0qej . Saturation2_UpperSat ) {
h0xd3tu0em = rtP . icuuav0qej . Saturation2_UpperSat ; } else if ( ncry1w41lh
< rtP . icuuav0qej . Saturation2_LowerSat ) { h0xd3tu0em = rtP . icuuav0qej .
Saturation2_LowerSat ; } else { h0xd3tu0em = ncry1w41lh ; } if ( h0xd3tu0em >
rtP . icuuav0qej . Switch1_Threshold ) { h0xd3tu0em = look2_plinlcpw (
hgepq5sb0n , rtP . icuuav0qej . actf2T_Gain * h0xd3tu0em , rtP . dp_DEP .
rpm_lookup . V_vec , rtP . dp_DEP . rpm_lookup . T_vec , rtP . dp_DEP .
rpm_lookup . rpm_gird , rtDW . icuuav0qej [ ancmdcdnjw ] . acsdmeuss0 , rtP .
icuuav0qej . T2rpm_maxIndex , 43U ) ; } else { h0xd3tu0em = rtP . icuuav0qej
. Constant3_Value ; } oe11ko1ubx_idx_0 = ntjgvph2xp [ 0 ] - rtB . icuuav0qej
[ ancmdcdnjw ] . hkt3c3tre5 [ 0 ] ; oe11ko1ubx_idx_1 = ntjgvph2xp [ 1 ] - rtB
. icuuav0qej [ ancmdcdnjw ] . hkt3c3tre5 [ 1 ] ; oe11ko1ubx_idx_2 =
ntjgvph2xp [ 2 ] - rtB . icuuav0qej [ ancmdcdnjw ] . hkt3c3tre5 [ 2 ] ;
ciwpla5k0e = rtP . icuuav0qej . Gain1_Gain * h0xd3tu0em ; if ( ciwpla5k0e >
rtP . icuuav0qej . Saturation_UpperSat ) { ciwpla5k0e = rtP . icuuav0qej .
Saturation_UpperSat ; } else if ( ciwpla5k0e < rtP . icuuav0qej .
Saturation_LowerSat ) { ciwpla5k0e = rtP . icuuav0qej . Saturation_LowerSat ;
} h0xd3tu0em = hgepq5sb0n / ( rtP . icuuav0qej . Gain2_Gain * ciwpla5k0e +
rtP . icuuav0qej . Constant_Value_he23bmiipf ) ; if ( h0xd3tu0em > rtP .
icuuav0qej . Saturation1_UpperSat ) { h0xd3tu0em = rtP . icuuav0qej .
Saturation1_UpperSat ; } else if ( h0xd3tu0em < rtP . icuuav0qej .
Saturation1_LowerSat ) { h0xd3tu0em = rtP . icuuav0qej . Saturation1_LowerSat
; } eo2csz4mcg = look1_plinlcapw ( h0xd3tu0em , rtP . dp_DEP . J , rtP .
dp_DEP . C_T , & rtDW . icuuav0qej [ ancmdcdnjw ] . i3lxxvdwzm , 45U ) ;
ciwpla5k0e *= ciwpla5k0e ; eo2csz4mcg = rtB . lhopa3gq4f * eo2csz4mcg *
ciwpla5k0e * rtP . icuuav0qej . Gain3_Gain ; if ( eo2csz4mcg > rtP .
icuuav0qej . Saturation_UpperSat_pioa3d5seg ) { eo2csz4mcg = rtP . icuuav0qej
. Saturation_UpperSat_pioa3d5seg ; } else if ( eo2csz4mcg < rtP . icuuav0qej
. Saturation_LowerSat_ntvwfoe11p ) { eo2csz4mcg = rtP . icuuav0qej .
Saturation_LowerSat_ntvwfoe11p ; } for ( i = 0 ; i < 3 ; i ++ ) { nujeymdrtx
[ i ] = ( rtB . icuuav0qej [ ancmdcdnjw ] . al1dnkku34 [ i + 3 ] * rtP .
icuuav0qej . Constant_Value + rtB . icuuav0qej [ ancmdcdnjw ] . al1dnkku34 [
i ] * eo2csz4mcg ) + rtB . icuuav0qej [ ancmdcdnjw ] . al1dnkku34 [ i + 6 ] *
rtP . icuuav0qej . Constant_Value ; } eo2csz4mcg = look1_plinlcapw (
h0xd3tu0em , rtP . dp_DEP . J , rtP . dp_DEP . C_Q , & rtDW . icuuav0qej [
ancmdcdnjw ] . mv3vvw3b42 , 45U ) ; eo2csz4mcg = rtB . lhopa3gq4f *
eo2csz4mcg * ciwpla5k0e * rtP . icuuav0qej . Gain_Gain ; if ( eo2csz4mcg >
rtP . icuuav0qej . Saturation1_UpperSat_aot1dalvsr ) { eo2csz4mcg = rtP .
icuuav0qej . Saturation1_UpperSat_aot1dalvsr ; } else if ( eo2csz4mcg < rtP .
icuuav0qej . Saturation1_LowerSat_jkuaq5fc2p ) { eo2csz4mcg = rtP .
icuuav0qej . Saturation1_LowerSat_jkuaq5fc2p ; } oe11ko1ubx_p [ 0 ] =
oe11ko1ubx_idx_1 * nujeymdrtx [ 2 ] ; oe11ko1ubx_p [ 1 ] = nujeymdrtx [ 0 ] *
oe11ko1ubx_idx_2 ; oe11ko1ubx_p [ 2 ] = oe11ko1ubx_idx_0 * nujeymdrtx [ 1 ] ;
ae3e31qmc1 [ 0 ] = nujeymdrtx [ 1 ] * oe11ko1ubx_idx_2 ; ae3e31qmc1 [ 1 ] =
oe11ko1ubx_idx_0 * nujeymdrtx [ 2 ] ; ae3e31qmc1 [ 2 ] = nujeymdrtx [ 0 ] *
oe11ko1ubx_idx_1 ; for ( i = 0 ; i < 3 ; i ++ ) { dhfomh30dh [ i ] = ( ( rtB
. icuuav0qej [ ancmdcdnjw ] . al1dnkku34 [ i + 3 ] * rtP . icuuav0qej .
Constant_Value + rtB . icuuav0qej [ ancmdcdnjw ] . al1dnkku34 [ i ] *
eo2csz4mcg ) + rtB . icuuav0qej [ ancmdcdnjw ] . al1dnkku34 [ i + 6 ] * rtP .
icuuav0qej . Constant_Value ) * hi1lsj4enl + ( oe11ko1ubx_p [ i ] -
ae3e31qmc1 [ i ] ) ; } if ( h0xd3tu0em > rtP . icuuav0qej .
Saturation3_UpperSat ) { oafndqgrht = rtP . icuuav0qej . Saturation3_UpperSat
; } else if ( h0xd3tu0em < rtP . icuuav0qej . Saturation3_LowerSat ) {
oafndqgrht = rtP . icuuav0qej . Saturation3_LowerSat ; } else { oafndqgrht =
h0xd3tu0em ; } } rtB . heluxjysvd [ 3 * ancmdcdnjw ] = dhfomh30dh [ 0 ] ; rtB
. heluxjysvd [ 3 * ancmdcdnjw + 1 ] = dhfomh30dh [ 1 ] ; rtB . heluxjysvd [ 3
* ancmdcdnjw + 2 ] = dhfomh30dh [ 2 ] ; rtB . hlbelf1gro [ ancmdcdnjw ] =
oafndqgrht ; } void j4wzsijapuTID3 ( int32_T ancmdcdnjw ) { real_T hgepq5sb0n
; real_T ncry1w41lh ; real_T ntjgvph2xp [ 3 ] ; real_T hi1lsj4enl ; { real_T
hkjcgghvsb [ 9 ] ; real_T g1v5rdw5es_idx_0 ; real_T g1v5rdw5es_idx_1 ; real_T
g1v5rdw5es_idx_2 ; real_T ky0yrn3bnq_idx_0 ; real_T ky0yrn3bnq_idx_1 ; real_T
ky0yrn3bnq_idx_2 ; int32_T i ; rtB . icuuav0qej [ ancmdcdnjw ] . hkt3c3tre5 [
0 ] = ( real32_T ) rtP . xyz_cg [ 0 ] ; rtB . icuuav0qej [ ancmdcdnjw ] .
hkt3c3tre5 [ 1 ] = ( real32_T ) rtP . xyz_cg [ 1 ] ; rtB . icuuav0qej [
ancmdcdnjw ] . hkt3c3tre5 [ 2 ] = ( real32_T ) rtP . xyz_cg [ 2 ] ;
muDoubleScalarSinCos ( rtP . icuuav0qej . Constant1_Value , &
g1v5rdw5es_idx_0 , & ky0yrn3bnq_idx_0 ) ; muDoubleScalarSinCos ( rtP .
icuuav0qej . DEP_incidence_Value , & g1v5rdw5es_idx_1 , & ky0yrn3bnq_idx_1 )
; muDoubleScalarSinCos ( rtP . icuuav0qej . Constant1_Value , &
g1v5rdw5es_idx_2 , & ky0yrn3bnq_idx_2 ) ; hkjcgghvsb [ 0 ] = ky0yrn3bnq_idx_0
* ky0yrn3bnq_idx_1 ; hkjcgghvsb [ 1 ] = g1v5rdw5es_idx_1 * g1v5rdw5es_idx_2 *
ky0yrn3bnq_idx_0 - g1v5rdw5es_idx_0 * ky0yrn3bnq_idx_2 ; hkjcgghvsb [ 2 ] =
g1v5rdw5es_idx_1 * ky0yrn3bnq_idx_2 * ky0yrn3bnq_idx_0 + g1v5rdw5es_idx_0 *
g1v5rdw5es_idx_2 ; hkjcgghvsb [ 3 ] = g1v5rdw5es_idx_0 * ky0yrn3bnq_idx_1 ;
hkjcgghvsb [ 4 ] = g1v5rdw5es_idx_1 * g1v5rdw5es_idx_2 * g1v5rdw5es_idx_0 +
ky0yrn3bnq_idx_0 * ky0yrn3bnq_idx_2 ; hkjcgghvsb [ 5 ] = g1v5rdw5es_idx_1 *
ky0yrn3bnq_idx_2 * g1v5rdw5es_idx_0 - ky0yrn3bnq_idx_0 * g1v5rdw5es_idx_2 ;
hkjcgghvsb [ 6 ] = - g1v5rdw5es_idx_1 ; hkjcgghvsb [ 7 ] = ky0yrn3bnq_idx_1 *
g1v5rdw5es_idx_2 ; hkjcgghvsb [ 8 ] = ky0yrn3bnq_idx_1 * ky0yrn3bnq_idx_2 ;
for ( i = 0 ; i < 3 ; i ++ ) { rtB . icuuav0qej [ ancmdcdnjw ] . al1dnkku34 [
3 * i ] = hkjcgghvsb [ i ] ; rtB . icuuav0qej [ ancmdcdnjw ] . al1dnkku34 [ 3
* i + 1 ] = hkjcgghvsb [ i + 3 ] ; rtB . icuuav0qej [ ancmdcdnjw ] .
al1dnkku34 [ 3 * i + 2 ] = hkjcgghvsb [ i + 6 ] ; } } hgepq5sb0n = rtB .
iwkjq2gkyu [ ancmdcdnjw ] ; ncry1w41lh = rtB . le5ehxvxar [ ancmdcdnjw + 6 ]
; ntjgvph2xp [ 0 ] = rtP . xyz_DEP [ 3 * ancmdcdnjw ] ; ntjgvph2xp [ 1 ] =
rtP . xyz_DEP [ 3 * ancmdcdnjw + 1 ] ; ntjgvph2xp [ 2 ] = rtP . xyz_DEP [ 3 *
ancmdcdnjw + 2 ] ; hi1lsj4enl = rtP . Constant2_Value_fjhgdn5qms [ ancmdcdnjw
] ; } void bezhj2arkr ( const uint8_T lgciwm45fa [ 39 ] , real32_T pggtavs035
, fskif30kch * localB ) { int32_T i ; uint8_T y [ 4 ] ; static const uint8_T
b [ 5 ] = { 68U , 82U , 69U , 70U , 48U } ; memset ( & localB -> fx012r44nt [
0 ] , 32 , 509U * sizeof ( uint8_T ) ) ; for ( i = 0 ; i < 5 ; i ++ ) {
localB -> fx012r44nt [ i ] = b [ i ] ; } memcpy ( ( void * ) & y [ 0 ] , (
void * ) & pggtavs035 , ( uint32_T ) ( ( size_t ) 4 * sizeof ( uint8_T ) ) )
; localB -> fx012r44nt [ 5 ] = y [ 0 ] ; localB -> fx012r44nt [ 6 ] = y [ 1 ]
; localB -> fx012r44nt [ 7 ] = y [ 2 ] ; localB -> fx012r44nt [ 8 ] = y [ 3 ]
; for ( i = 0 ; i < 39 ; i ++ ) { localB -> fx012r44nt [ i + 9 ] = lgciwm45fa
[ i ] ; } localB -> fx012r44nt [ 48 ] = 0U ; } void bhtkyxb11t ( const
uint8_T ellmm2bjow [ 40 ] , real32_T kxhf0arinc , p3ecnoeui5 * localB ) {
int32_T i ; uint8_T y [ 4 ] ; static const uint8_T b [ 5 ] = { 68U , 82U ,
69U , 70U , 48U } ; memset ( & localB -> n1ioem5ozp [ 0 ] , 32 , 509U *
sizeof ( uint8_T ) ) ; for ( i = 0 ; i < 5 ; i ++ ) { localB -> n1ioem5ozp [
i ] = b [ i ] ; } memcpy ( ( void * ) & y [ 0 ] , ( void * ) & kxhf0arinc , (
uint32_T ) ( ( size_t ) 4 * sizeof ( uint8_T ) ) ) ; localB -> n1ioem5ozp [ 5
] = y [ 0 ] ; localB -> n1ioem5ozp [ 6 ] = y [ 1 ] ; localB -> n1ioem5ozp [ 7
] = y [ 2 ] ; localB -> n1ioem5ozp [ 8 ] = y [ 3 ] ; for ( i = 0 ; i < 40 ; i
++ ) { localB -> n1ioem5ozp [ i + 9 ] = ellmm2bjow [ i ] ; } localB ->
n1ioem5ozp [ 49 ] = 0U ; } void f3054a4w15 ( const uint8_T na5etytz23 [ 37 ]
, real32_T emewi5swva , dt1fegwimr * localB ) { int32_T i ; uint8_T y [ 4 ] ;
static const uint8_T b [ 5 ] = { 68U , 82U , 69U , 70U , 48U } ; memset ( &
localB -> iopntl53ab [ 0 ] , 32 , 509U * sizeof ( uint8_T ) ) ; for ( i = 0 ;
i < 5 ; i ++ ) { localB -> iopntl53ab [ i ] = b [ i ] ; } memcpy ( ( void * )
& y [ 0 ] , ( void * ) & emewi5swva , ( uint32_T ) ( ( size_t ) 4 * sizeof (
uint8_T ) ) ) ; localB -> iopntl53ab [ 5 ] = y [ 0 ] ; localB -> iopntl53ab [
6 ] = y [ 1 ] ; localB -> iopntl53ab [ 7 ] = y [ 2 ] ; localB -> iopntl53ab [
8 ] = y [ 3 ] ; for ( i = 0 ; i < 37 ; i ++ ) { localB -> iopntl53ab [ i + 9
] = na5etytz23 [ i ] ; } localB -> iopntl53ab [ 46 ] = 0U ; } void kgud4px1j0
( const uint8_T nhadz0vqhl [ 51 ] , real32_T eifjvvxpgu , lkm4qo0z2m * localB
) { int32_T i ; uint8_T y [ 4 ] ; static const uint8_T b [ 5 ] = { 68U , 82U
, 69U , 70U , 48U } ; memset ( & localB -> dw4z4lzsfl [ 0 ] , 32 , 509U *
sizeof ( uint8_T ) ) ; for ( i = 0 ; i < 5 ; i ++ ) { localB -> dw4z4lzsfl [
i ] = b [ i ] ; } memcpy ( ( void * ) & y [ 0 ] , ( void * ) & eifjvvxpgu , (
uint32_T ) ( ( size_t ) 4 * sizeof ( uint8_T ) ) ) ; localB -> dw4z4lzsfl [ 5
] = y [ 0 ] ; localB -> dw4z4lzsfl [ 6 ] = y [ 1 ] ; localB -> dw4z4lzsfl [ 7
] = y [ 2 ] ; localB -> dw4z4lzsfl [ 8 ] = y [ 3 ] ; for ( i = 0 ; i < 51 ; i
++ ) { localB -> dw4z4lzsfl [ i + 9 ] = nhadz0vqhl [ i ] ; } localB ->
dw4z4lzsfl [ 60 ] = 0U ; } static real_T ha42vhtlkm ( int32_T n , const
real_T x_data [ ] , int32_T ix0 ) { real_T absxk ; real_T scale ; real_T t ;
real_T y ; int32_T k ; int32_T kend ; y = 0.0 ; scale =
3.3121686421112381E-170 ; kend = ix0 + n ; for ( k = ix0 ; k < kend ; k ++ )
{ absxk = muDoubleScalarAbs ( x_data [ k - 1 ] ) ; if ( absxk > scale ) { t =
scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; } else { t = absxk /
scale ; y += t * t ; } } return scale * muDoubleScalarSqrt ( y ) ; } static
void oqj35cmpwq ( int32_T m , int32_T n , int32_T iv0 , real_T tau , real_T
C_data [ ] , int32_T ic0 , real_T work_data [ ] ) { real_T c ; int32_T b_b ;
int32_T coltop ; int32_T exitg1 ; int32_T ia ; int32_T iac ; int32_T ix ;
int32_T jy ; int32_T lastc ; int32_T lastv ; boolean_T exitg2 ; if ( tau !=
0.0 ) { lastv = m - 1 ; lastc = iv0 + m ; while ( ( lastv + 1 > 0 ) && (
C_data [ lastc - 2 ] == 0.0 ) ) { lastv -- ; lastc -- ; } lastc = n - 1 ;
exitg2 = false ; while ( ( ! exitg2 ) && ( lastc + 1 > 0 ) ) { coltop = (
lastc << 3 ) + ic0 ; jy = coltop ; do { exitg1 = 0 ; if ( jy <= coltop +
lastv ) { if ( C_data [ jy - 1 ] != 0.0 ) { exitg1 = 1 ; } else { jy ++ ; } }
else { lastc -- ; exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 )
{ exitg2 = true ; } } } else { lastv = - 1 ; lastc = - 1 ; } if ( lastv + 1 >
0 ) { if ( lastc + 1 != 0 ) { for ( coltop = 0 ; coltop <= lastc ; coltop ++
) { work_data [ coltop ] = 0.0 ; } coltop = 0 ; jy = ( lastc << 3 ) + ic0 ;
for ( iac = ic0 ; iac <= jy ; iac += 8 ) { ix = iv0 ; c = 0.0 ; b_b = iac +
lastv ; for ( ia = iac ; ia <= b_b ; ia ++ ) { c += C_data [ ia - 1 ] *
C_data [ ix - 1 ] ; ix ++ ; } work_data [ coltop ] += c ; coltop ++ ; } } if
( ! ( - tau == 0.0 ) ) { coltop = ic0 ; jy = 0 ; for ( iac = 0 ; iac <= lastc
; iac ++ ) { if ( work_data [ jy ] != 0.0 ) { c = work_data [ jy ] * - tau ;
ix = iv0 ; b_b = lastv + coltop ; for ( ia = coltop ; ia <= b_b ; ia ++ ) {
C_data [ ia - 1 ] += C_data [ ix - 1 ] * c ; ix ++ ; } } jy ++ ; coltop += 8
; } } } } static void gwwd1o13ju ( real_T A_data [ ] , const int32_T A_size [
2 ] , real_T tau_data [ ] , int32_T * tau_size , int32_T jpvt_data [ ] ,
int32_T jpvt_size [ 2 ] ) { real_T vn1_data [ 5 ] ; real_T vn2_data [ 5 ] ;
real_T work_data [ 5 ] ; real_T absxk ; real_T s ; real_T smax ; real_T t ;
int32_T b_ix ; int32_T ii ; int32_T itemp ; int32_T ix ; int32_T iy ; int32_T
loop_ub ; int32_T n ; int32_T nmi ; n = A_size [ 1 ] - 1 ; * tau_size =
A_size [ 1 ] ; loop_ub = A_size [ 1 ] ; if ( 0 <= loop_ub - 1 ) { memset ( &
tau_data [ 0 ] , 0 , loop_ub * sizeof ( real_T ) ) ; } if ( ( A_size [ 1 ] ==
0 ) || ( A_size [ 1 ] < 1 ) ) { jpvt_size [ 0 ] = 1 ; jpvt_size [ 1 ] =
A_size [ 1 ] ; loop_ub = A_size [ 1 ] - 1 ; if ( 0 <= loop_ub ) { memset ( &
jpvt_data [ 0 ] , 0 , ( loop_ub + 1 ) * sizeof ( int32_T ) ) ; } for (
loop_ub = 0 ; loop_ub <= n ; loop_ub ++ ) { jpvt_data [ loop_ub ] = loop_ub +
1 ; } } else { jpvt_size [ 0 ] = 1 ; jpvt_size [ 1 ] = A_size [ 1 ] ; loop_ub
= A_size [ 1 ] - 1 ; if ( 0 <= loop_ub ) { memset ( & jpvt_data [ 0 ] , 0 , (
loop_ub + 1 ) * sizeof ( int32_T ) ) ; } for ( loop_ub = 0 ; loop_ub <= n ;
loop_ub ++ ) { jpvt_data [ loop_ub ] = loop_ub + 1 ; } * tau_size = A_size [
1 ] ; loop_ub = A_size [ 1 ] ; if ( 0 <= loop_ub - 1 ) { memset ( & tau_data
[ 0 ] , 0 , loop_ub * sizeof ( real_T ) ) ; } loop_ub = A_size [ 1 ] ; if ( 0
<= loop_ub - 1 ) { memset ( & work_data [ 0 ] , 0 , loop_ub * sizeof ( real_T
) ) ; } loop_ub = A_size [ 1 ] ; if ( 0 <= loop_ub - 1 ) { memset ( &
vn1_data [ 0 ] , 0 , loop_ub * sizeof ( real_T ) ) ; } loop_ub = A_size [ 1 ]
; if ( 0 <= loop_ub - 1 ) { memset ( & vn2_data [ 0 ] , 0 , loop_ub * sizeof
( real_T ) ) ; } for ( loop_ub = 0 ; loop_ub <= n ; loop_ub ++ ) { ii = (
loop_ub << 3 ) + 1 ; smax = 0.0 ; s = 3.3121686421112381E-170 ; for ( nmi =
ii ; nmi <= ii + 7 ; nmi ++ ) { absxk = muDoubleScalarAbs ( A_data [ nmi - 1
] ) ; if ( absxk > s ) { t = s / absxk ; smax = smax * t * t + 1.0 ; s =
absxk ; } else { t = absxk / s ; smax += t * t ; } } vn1_data [ loop_ub ] = s
* muDoubleScalarSqrt ( smax ) ; vn2_data [ loop_ub ] = vn1_data [ loop_ub ] ;
} for ( loop_ub = 0 ; loop_ub <= n ; loop_ub ++ ) { ii = ( loop_ub << 3 ) +
loop_ub ; nmi = ( n - loop_ub ) + 1 ; if ( nmi < 1 ) { b_ix = - 1 ; } else {
b_ix = 0 ; if ( nmi > 1 ) { ix = loop_ub ; smax = muDoubleScalarAbs (
vn1_data [ loop_ub ] ) ; for ( itemp = 2 ; itemp <= nmi ; itemp ++ ) { ix ++
; s = muDoubleScalarAbs ( vn1_data [ ix ] ) ; if ( s > smax ) { b_ix = itemp
- 1 ; smax = s ; } } } } ix = loop_ub + b_ix ; if ( ix != loop_ub ) { b_ix =
ix << 3 ; iy = loop_ub << 3 ; for ( itemp = 0 ; itemp < 8 ; itemp ++ ) { smax
= A_data [ b_ix + itemp ] ; A_data [ b_ix + itemp ] = A_data [ iy + itemp ] ;
A_data [ iy + itemp ] = smax ; } itemp = jpvt_data [ ix ] ; jpvt_data [ ix ]
= jpvt_data [ loop_ub ] ; jpvt_data [ loop_ub ] = itemp ; vn1_data [ ix ] =
vn1_data [ loop_ub ] ; vn2_data [ ix ] = vn2_data [ loop_ub ] ; } s = A_data
[ ii ] ; tau_data [ loop_ub ] = 0.0 ; smax = ha42vhtlkm ( 7 - loop_ub ,
A_data , ii + 2 ) ; if ( smax != 0.0 ) { smax = muDoubleScalarHypot ( A_data
[ ii ] , smax ) ; if ( A_data [ ii ] >= 0.0 ) { smax = - smax ; } if (
muDoubleScalarAbs ( smax ) < 1.0020841800044864E-292 ) { ix = - 1 ; itemp = (
ii - loop_ub ) + 8 ; do { ix ++ ; for ( b_ix = ii + 1 ; b_ix < itemp ; b_ix
++ ) { A_data [ b_ix ] *= 9.9792015476736E+291 ; } smax *=
9.9792015476736E+291 ; s *= 9.9792015476736E+291 ; } while ( ! (
muDoubleScalarAbs ( smax ) >= 1.0020841800044864E-292 ) ) ; smax =
muDoubleScalarHypot ( s , ha42vhtlkm ( 7 - loop_ub , A_data , ii + 2 ) ) ; if
( s >= 0.0 ) { smax = - smax ; } tau_data [ loop_ub ] = ( smax - s ) / smax ;
s = 1.0 / ( s - smax ) ; itemp = ( ii - loop_ub ) + 8 ; for ( b_ix = ii + 1 ;
b_ix < itemp ; b_ix ++ ) { A_data [ b_ix ] *= s ; } for ( b_ix = 0 ; b_ix <=
ix ; b_ix ++ ) { smax *= 1.0020841800044864E-292 ; } s = smax ; } else {
tau_data [ loop_ub ] = ( smax - A_data [ ii ] ) / smax ; s = 1.0 / ( A_data [
ii ] - smax ) ; ix = ( ii - loop_ub ) + 8 ; for ( itemp = ii + 1 ; itemp < ix
; itemp ++ ) { A_data [ itemp ] *= s ; } s = smax ; } } A_data [ ii ] = s ;
if ( loop_ub < n ) { smax = A_data [ ii ] ; A_data [ ii ] = 1.0 ; oqj35cmpwq
( 8 - loop_ub , nmi - 1 , ii + 1 , tau_data [ loop_ub ] , A_data , ii + 9 ,
work_data ) ; A_data [ ii ] = smax ; } for ( ii = loop_ub + 1 ; ii < n + 1 ;
ii ++ ) { nmi = ( ii << 3 ) + loop_ub ; if ( vn1_data [ ii ] != 0.0 ) { smax
= muDoubleScalarAbs ( A_data [ nmi ] ) / vn1_data [ ii ] ; smax = 1.0 - smax
* smax ; if ( smax < 0.0 ) { smax = 0.0 ; } s = vn1_data [ ii ] / vn2_data [
ii ] ; s = s * s * smax ; if ( s <= 1.4901161193847656E-8 ) { vn1_data [ ii ]
= ha42vhtlkm ( 7 - loop_ub , A_data , nmi + 2 ) ; vn2_data [ ii ] = vn1_data
[ ii ] ; } else { vn1_data [ ii ] *= muDoubleScalarSqrt ( smax ) ; } } } } }
} static void gmaok0xwak ( const real_T A_data [ ] , const int32_T A_size [ 2
] , const real_T B_p [ 8 ] , real_T Y_data [ ] , int32_T * Y_size ) { real_T
b_A_data [ 40 ] ; real_T b_B [ 8 ] ; real_T tau_data [ 5 ] ; real_T wj ;
int32_T jpvt_data [ 5 ] ; int32_T b_A_size [ 2 ] ; int32_T jpvt_size [ 2 ] ;
int32_T b_j ; int32_T i ; int32_T rankA ; int32_T tau_size ; if ( A_size [ 1
] == 0 ) { * Y_size = 0 ; } else { memcpy ( & b_B [ 0 ] , & B_p [ 0 ] ,
sizeof ( real_T ) << 3U ) ; b_A_size [ 0 ] = 8 ; b_A_size [ 1 ] = A_size [ 1
] ; i = A_size [ 1 ] << 3 ; if ( 0 <= i - 1 ) { memcpy ( & b_A_data [ 0 ] , &
A_data [ 0 ] , i * sizeof ( real_T ) ) ; } gwwd1o13ju ( b_A_data , b_A_size ,
tau_data , & tau_size , jpvt_data , jpvt_size ) ; rankA = 0 ; if ( b_A_size [
1 ] > 0 ) { while ( ( rankA < b_A_size [ 1 ] ) && ( ! ( muDoubleScalarAbs (
b_A_data [ ( rankA << 3 ) + rankA ] ) <= 1.7763568394002505E-14 *
muDoubleScalarAbs ( b_A_data [ 0 ] ) ) ) ) { rankA ++ ; } } * Y_size = (
int8_T ) b_A_size [ 1 ] ; i = ( int8_T ) b_A_size [ 1 ] ; if ( 0 <= i - 1 ) {
memset ( & Y_data [ 0 ] , 0 , i * sizeof ( real_T ) ) ; } for ( b_j = 0 ; b_j
< b_A_size [ 1 ] ; b_j ++ ) { if ( tau_data [ b_j ] != 0.0 ) { wj = b_B [ b_j
] ; for ( i = b_j + 1 ; i + 1 < 9 ; i ++ ) { wj += b_A_data [ ( b_j << 3 ) +
i ] * b_B [ i ] ; } wj *= tau_data [ b_j ] ; if ( wj != 0.0 ) { b_B [ b_j ]
-= wj ; for ( i = b_j + 1 ; i + 1 < 9 ; i ++ ) { b_B [ i ] -= b_A_data [ (
b_j << 3 ) + i ] * wj ; } } } } for ( i = 0 ; i < rankA ; i ++ ) { Y_data [
jpvt_data [ i ] - 1 ] = b_B [ i ] ; } for ( rankA -- ; rankA + 1 > 0 ; rankA
-- ) { Y_data [ jpvt_data [ rankA ] - 1 ] /= b_A_data [ ( rankA << 3 ) +
rankA ] ; for ( i = 0 ; i < rankA ; i ++ ) { Y_data [ jpvt_data [ i ] - 1 ]
-= b_A_data [ ( rankA << 3 ) + i ] * Y_data [ jpvt_data [ rankA ] - 1 ] ; } }
} } static boolean_T d10bfzk1x4 ( const boolean_T x_data [ ] , const int32_T
* x_size ) { int32_T ix ; boolean_T exitg1 ; boolean_T y ; y = false ; ix = 1
; exitg1 = false ; while ( ( ! exitg1 ) && ( ix <= * x_size ) ) { if ( x_data
[ ix - 1 ] ) { y = true ; exitg1 = true ; } else { ix ++ ; } } return y ; }
static void lca5lqssir ( const real_T x [ 5 ] , real_T * ex , int32_T * idx )
{ int32_T k ; boolean_T exitg1 ; if ( ! muDoubleScalarIsNaN ( x [ 0 ] ) ) { *
idx = 1 ; } else { * idx = 0 ; k = 2 ; exitg1 = false ; while ( ( ! exitg1 )
&& ( k < 6 ) ) { if ( ! muDoubleScalarIsNaN ( x [ k - 1 ] ) ) { * idx = k ;
exitg1 = true ; } else { k ++ ; } } } if ( * idx == 0 ) { * ex = x [ 0 ] ; *
idx = 1 ; } else { * ex = x [ * idx - 1 ] ; for ( k = * idx ; k + 1 < 6 ; k
++ ) { if ( * ex > x [ k ] ) { * ex = x [ k ] ; * idx = k + 1 ; } } } }
static void bu1ixebwun ( const real_T A_data [ ] , const int32_T A_size [ 2 ]
, const real_T B_data [ ] , real_T C [ 8 ] ) { __m128d tmp ; int32_T aoffset
; int32_T b_i ; int32_T i ; memset ( & C [ 0 ] , 0 , sizeof ( real_T ) << 3U
) ; for ( i = 0 ; i < A_size [ 1 ] ; i ++ ) { aoffset = i << 3 ; for ( b_i =
0 ; b_i <= 6 ; b_i += 2 ) { tmp = _mm_loadu_pd ( & C [ b_i ] ) ;
_mm_storeu_pd ( & C [ b_i ] , _mm_add_pd ( _mm_mul_pd ( _mm_loadu_pd ( &
A_data [ aoffset + b_i ] ) , _mm_set1_pd ( B_data [ i ] ) ) , tmp ) ) ; } } }
void rt_mrdivide_U1d1x3_U2d3x3_Yd1x3_snf ( const real_T u0 [ 3 ] , const
real_T u1 [ 9 ] , real_T y [ 3 ] ) { real_T A [ 9 ] ; real_T a21 ; real_T
maxval ; int32_T r1 ; int32_T r2 ; int32_T r3 ; int32_T rtemp ; memcpy ( & A
[ 0 ] , & u1 [ 0 ] , 9U * sizeof ( real_T ) ) ; r1 = 0 ; r2 = 1 ; r3 = 2 ;
maxval = muDoubleScalarAbs ( u1 [ 0 ] ) ; a21 = muDoubleScalarAbs ( u1 [ 1 ]
) ; if ( a21 > maxval ) { maxval = a21 ; r1 = 1 ; r2 = 0 ; } if (
muDoubleScalarAbs ( u1 [ 2 ] ) > maxval ) { r1 = 2 ; r2 = 1 ; r3 = 0 ; } A [
r2 ] = u1 [ r2 ] / u1 [ r1 ] ; A [ r3 ] /= A [ r1 ] ; A [ r2 + 3 ] -= A [ r1
+ 3 ] * A [ r2 ] ; A [ r3 + 3 ] -= A [ r1 + 3 ] * A [ r3 ] ; A [ r2 + 6 ] -=
A [ r1 + 6 ] * A [ r2 ] ; A [ r3 + 6 ] -= A [ r1 + 6 ] * A [ r3 ] ; if (
muDoubleScalarAbs ( A [ r3 + 3 ] ) > muDoubleScalarAbs ( A [ r2 + 3 ] ) ) {
rtemp = r2 + 1 ; r2 = r3 ; r3 = rtemp - 1 ; } A [ r3 + 3 ] /= A [ r2 + 3 ] ;
A [ r3 + 6 ] -= A [ r3 + 3 ] * A [ r2 + 6 ] ; y [ r1 ] = u0 [ 0 ] / A [ r1 ]
; y [ r2 ] = u0 [ 1 ] - A [ r1 + 3 ] * y [ r1 ] ; y [ r3 ] = u0 [ 2 ] - A [
r1 + 6 ] * y [ r1 ] ; y [ r2 ] /= A [ r2 + 3 ] ; y [ r3 ] -= A [ r2 + 6 ] * y
[ r2 ] ; y [ r3 ] /= A [ r3 + 6 ] ; y [ r2 ] -= A [ r3 + 3 ] * y [ r3 ] ; y [
r1 ] -= y [ r3 ] * A [ r3 ] ; y [ r1 ] -= y [ r2 ] * A [ r2 ] ; } static
real_T agebjvrlnx ( int32_T n , const real_T x_data [ ] , int32_T ix0 ) {
real_T absxk ; real_T scale ; real_T t ; real_T y ; int32_T k ; int32_T kend
; y = 0.0 ; scale = 3.3121686421112381E-170 ; kend = ix0 + n ; for ( k = ix0
; k < kend ; k ++ ) { absxk = muDoubleScalarAbs ( x_data [ k - 1 ] ) ; if (
absxk > scale ) { t = scale / absxk ; y = y * t * t + 1.0 ; scale = absxk ; }
else { t = absxk / scale ; y += t * t ; } } return scale * muDoubleScalarSqrt
( y ) ; } static void b2ocpympvz ( int32_T m , int32_T n , int32_T iv0 ,
real_T tau , real_T C_data [ ] , int32_T ic0 , real_T work_data [ ] ) {
real_T c ; int32_T b_b ; int32_T coltop ; int32_T exitg1 ; int32_T ia ;
int32_T iac ; int32_T ix ; int32_T jy ; int32_T lastc ; int32_T lastv ;
boolean_T exitg2 ; if ( tau != 0.0 ) { lastv = m - 1 ; lastc = iv0 + m ;
while ( ( lastv + 1 > 0 ) && ( C_data [ lastc - 2 ] == 0.0 ) ) { lastv -- ;
lastc -- ; } lastc = n - 1 ; exitg2 = false ; while ( ( ! exitg2 ) && ( lastc
+ 1 > 0 ) ) { coltop = lastc * 7 + ic0 ; jy = coltop ; do { exitg1 = 0 ; if (
jy <= coltop + lastv ) { if ( C_data [ jy - 1 ] != 0.0 ) { exitg1 = 1 ; }
else { jy ++ ; } } else { lastc -- ; exitg1 = 2 ; } } while ( exitg1 == 0 ) ;
if ( exitg1 == 1 ) { exitg2 = true ; } } } else { lastv = - 1 ; lastc = - 1 ;
} if ( lastv + 1 > 0 ) { if ( lastc + 1 != 0 ) { for ( coltop = 0 ; coltop <=
lastc ; coltop ++ ) { work_data [ coltop ] = 0.0 ; } coltop = 0 ; jy = 7 *
lastc + ic0 ; for ( iac = ic0 ; iac <= jy ; iac += 7 ) { ix = iv0 ; c = 0.0 ;
b_b = iac + lastv ; for ( ia = iac ; ia <= b_b ; ia ++ ) { c += C_data [ ia -
1 ] * C_data [ ix - 1 ] ; ix ++ ; } work_data [ coltop ] += c ; coltop ++ ; }
} if ( ! ( - tau == 0.0 ) ) { coltop = ic0 ; jy = 0 ; for ( iac = 0 ; iac <=
lastc ; iac ++ ) { if ( work_data [ jy ] != 0.0 ) { c = work_data [ jy ] * -
tau ; ix = iv0 ; b_b = lastv + coltop ; for ( ia = coltop ; ia <= b_b ; ia ++
) { C_data [ ia - 1 ] += C_data [ ix - 1 ] * c ; ix ++ ; } } jy ++ ; coltop
+= 7 ; } } } } static void ob4zbf2wmb ( real_T A_data [ ] , const int32_T
A_size [ 2 ] , real_T tau_data [ ] , int32_T * tau_size , int32_T jpvt_data [
] , int32_T jpvt_size [ 2 ] ) { real_T vn1_data [ 4 ] ; real_T vn2_data [ 4 ]
; real_T work_data [ 4 ] ; real_T absxk ; real_T s ; real_T smax ; real_T t ;
int32_T b_ix ; int32_T ii ; int32_T itemp ; int32_T ix ; int32_T iy ; int32_T
loop_ub ; int32_T n ; int32_T nmi ; n = A_size [ 1 ] - 1 ; * tau_size =
A_size [ 1 ] ; loop_ub = A_size [ 1 ] ; if ( 0 <= loop_ub - 1 ) { memset ( &
tau_data [ 0 ] , 0 , loop_ub * sizeof ( real_T ) ) ; } if ( ( A_size [ 1 ] ==
0 ) || ( A_size [ 1 ] < 1 ) ) { jpvt_size [ 0 ] = 1 ; jpvt_size [ 1 ] =
A_size [ 1 ] ; loop_ub = A_size [ 1 ] - 1 ; if ( 0 <= loop_ub ) { memset ( &
jpvt_data [ 0 ] , 0 , ( loop_ub + 1 ) * sizeof ( int32_T ) ) ; } for (
loop_ub = 0 ; loop_ub <= n ; loop_ub ++ ) { jpvt_data [ loop_ub ] = loop_ub +
1 ; } } else { jpvt_size [ 0 ] = 1 ; jpvt_size [ 1 ] = A_size [ 1 ] ; loop_ub
= A_size [ 1 ] - 1 ; if ( 0 <= loop_ub ) { memset ( & jpvt_data [ 0 ] , 0 , (
loop_ub + 1 ) * sizeof ( int32_T ) ) ; } for ( loop_ub = 0 ; loop_ub <= n ;
loop_ub ++ ) { jpvt_data [ loop_ub ] = loop_ub + 1 ; } * tau_size = A_size [
1 ] ; loop_ub = A_size [ 1 ] ; if ( 0 <= loop_ub - 1 ) { memset ( & tau_data
[ 0 ] , 0 , loop_ub * sizeof ( real_T ) ) ; } loop_ub = A_size [ 1 ] ; if ( 0
<= loop_ub - 1 ) { memset ( & work_data [ 0 ] , 0 , loop_ub * sizeof ( real_T
) ) ; } loop_ub = A_size [ 1 ] ; if ( 0 <= loop_ub - 1 ) { memset ( &
vn1_data [ 0 ] , 0 , loop_ub * sizeof ( real_T ) ) ; } loop_ub = A_size [ 1 ]
; if ( 0 <= loop_ub - 1 ) { memset ( & vn2_data [ 0 ] , 0 , loop_ub * sizeof
( real_T ) ) ; } for ( loop_ub = 0 ; loop_ub <= n ; loop_ub ++ ) { ii =
loop_ub * 7 + 1 ; smax = 0.0 ; s = 3.3121686421112381E-170 ; for ( nmi = ii ;
nmi <= ii + 6 ; nmi ++ ) { absxk = muDoubleScalarAbs ( A_data [ nmi - 1 ] ) ;
if ( absxk > s ) { t = s / absxk ; smax = smax * t * t + 1.0 ; s = absxk ; }
else { t = absxk / s ; smax += t * t ; } } vn1_data [ loop_ub ] = s *
muDoubleScalarSqrt ( smax ) ; vn2_data [ loop_ub ] = vn1_data [ loop_ub ] ; }
for ( loop_ub = 0 ; loop_ub <= n ; loop_ub ++ ) { ii = loop_ub * 7 + loop_ub
; nmi = ( n - loop_ub ) + 1 ; if ( nmi < 1 ) { b_ix = - 1 ; } else { b_ix = 0
; if ( nmi > 1 ) { ix = loop_ub ; smax = muDoubleScalarAbs ( vn1_data [
loop_ub ] ) ; for ( itemp = 2 ; itemp <= nmi ; itemp ++ ) { ix ++ ; s =
muDoubleScalarAbs ( vn1_data [ ix ] ) ; if ( s > smax ) { b_ix = itemp - 1 ;
smax = s ; } } } } ix = loop_ub + b_ix ; if ( ix != loop_ub ) { b_ix = ix * 7
; iy = loop_ub * 7 ; for ( itemp = 0 ; itemp < 7 ; itemp ++ ) { smax = A_data
[ b_ix + itemp ] ; A_data [ b_ix + itemp ] = A_data [ iy + itemp ] ; A_data [
iy + itemp ] = smax ; } itemp = jpvt_data [ ix ] ; jpvt_data [ ix ] =
jpvt_data [ loop_ub ] ; jpvt_data [ loop_ub ] = itemp ; vn1_data [ ix ] =
vn1_data [ loop_ub ] ; vn2_data [ ix ] = vn2_data [ loop_ub ] ; } s = A_data
[ ii ] ; tau_data [ loop_ub ] = 0.0 ; smax = agebjvrlnx ( 6 - loop_ub ,
A_data , ii + 2 ) ; if ( smax != 0.0 ) { smax = muDoubleScalarHypot ( A_data
[ ii ] , smax ) ; if ( A_data [ ii ] >= 0.0 ) { smax = - smax ; } if (
muDoubleScalarAbs ( smax ) < 1.0020841800044864E-292 ) { ix = - 1 ; itemp = (
ii - loop_ub ) + 7 ; do { ix ++ ; for ( b_ix = ii + 1 ; b_ix < itemp ; b_ix
++ ) { A_data [ b_ix ] *= 9.9792015476736E+291 ; } smax *=
9.9792015476736E+291 ; s *= 9.9792015476736E+291 ; } while ( ! (
muDoubleScalarAbs ( smax ) >= 1.0020841800044864E-292 ) ) ; smax =
muDoubleScalarHypot ( s , agebjvrlnx ( 6 - loop_ub , A_data , ii + 2 ) ) ; if
( s >= 0.0 ) { smax = - smax ; } tau_data [ loop_ub ] = ( smax - s ) / smax ;
s = 1.0 / ( s - smax ) ; itemp = ( ii - loop_ub ) + 7 ; for ( b_ix = ii + 1 ;
b_ix < itemp ; b_ix ++ ) { A_data [ b_ix ] *= s ; } for ( b_ix = 0 ; b_ix <=
ix ; b_ix ++ ) { smax *= 1.0020841800044864E-292 ; } s = smax ; } else {
tau_data [ loop_ub ] = ( smax - A_data [ ii ] ) / smax ; s = 1.0 / ( A_data [
ii ] - smax ) ; ix = ( ii - loop_ub ) + 7 ; for ( itemp = ii + 1 ; itemp < ix
; itemp ++ ) { A_data [ itemp ] *= s ; } s = smax ; } } A_data [ ii ] = s ;
if ( loop_ub < n ) { smax = A_data [ ii ] ; A_data [ ii ] = 1.0 ; b2ocpympvz
( 7 - loop_ub , nmi - 1 , ii + 1 , tau_data [ loop_ub ] , A_data , ii + 8 ,
work_data ) ; A_data [ ii ] = smax ; } for ( ii = loop_ub + 1 ; ii < n + 1 ;
ii ++ ) { nmi = ii * 7 + loop_ub ; if ( vn1_data [ ii ] != 0.0 ) { smax =
muDoubleScalarAbs ( A_data [ nmi ] ) / vn1_data [ ii ] ; smax = 1.0 - smax *
smax ; if ( smax < 0.0 ) { smax = 0.0 ; } s = vn1_data [ ii ] / vn2_data [ ii
] ; s = s * s * smax ; if ( s <= 1.4901161193847656E-8 ) { vn1_data [ ii ] =
agebjvrlnx ( 6 - loop_ub , A_data , nmi + 2 ) ; vn2_data [ ii ] = vn1_data [
ii ] ; } else { vn1_data [ ii ] *= muDoubleScalarSqrt ( smax ) ; } } } } } }
static void fyjldj202i ( const real_T A_data [ ] , const int32_T A_size [ 2 ]
, const real_T B_e [ 7 ] , real_T Y_data [ ] , int32_T * Y_size ) { real_T
b_A_data [ 28 ] ; real_T b_B [ 7 ] ; real_T tau_data [ 4 ] ; real_T wj ;
int32_T jpvt_data [ 4 ] ; int32_T b_A_size [ 2 ] ; int32_T jpvt_size [ 2 ] ;
int32_T b_j ; int32_T i ; int32_T rankA ; int32_T tau_size ; if ( A_size [ 1
] == 0 ) { * Y_size = 0 ; } else { for ( i = 0 ; i < 7 ; i ++ ) { b_B [ i ] =
B_e [ i ] ; } b_A_size [ 0 ] = 7 ; b_A_size [ 1 ] = A_size [ 1 ] ; i = 7 *
A_size [ 1 ] ; if ( 0 <= i - 1 ) { memcpy ( & b_A_data [ 0 ] , & A_data [ 0 ]
, i * sizeof ( real_T ) ) ; } ob4zbf2wmb ( b_A_data , b_A_size , tau_data , &
tau_size , jpvt_data , jpvt_size ) ; rankA = 0 ; if ( b_A_size [ 1 ] > 0 ) {
while ( ( rankA < b_A_size [ 1 ] ) && ( ! ( muDoubleScalarAbs ( b_A_data [ 7
* rankA + rankA ] ) <= 1.5543122344752192E-14 * muDoubleScalarAbs ( b_A_data
[ 0 ] ) ) ) ) { rankA ++ ; } } * Y_size = ( int8_T ) b_A_size [ 1 ] ; i = (
int8_T ) b_A_size [ 1 ] ; if ( 0 <= i - 1 ) { memset ( & Y_data [ 0 ] , 0 , i
* sizeof ( real_T ) ) ; } for ( b_j = 0 ; b_j < b_A_size [ 1 ] ; b_j ++ ) {
if ( tau_data [ b_j ] != 0.0 ) { wj = b_B [ b_j ] ; for ( i = b_j + 1 ; i + 1
< 8 ; i ++ ) { wj += b_A_data [ 7 * b_j + i ] * b_B [ i ] ; } wj *= tau_data
[ b_j ] ; if ( wj != 0.0 ) { b_B [ b_j ] -= wj ; for ( i = b_j + 1 ; i + 1 <
8 ; i ++ ) { b_B [ i ] -= b_A_data [ 7 * b_j + i ] * wj ; } } } } for ( i = 0
; i < rankA ; i ++ ) { Y_data [ jpvt_data [ i ] - 1 ] = b_B [ i ] ; } for (
rankA -- ; rankA + 1 > 0 ; rankA -- ) { Y_data [ jpvt_data [ rankA ] - 1 ] /=
b_A_data [ 7 * rankA + rankA ] ; for ( i = 0 ; i < rankA ; i ++ ) { Y_data [
jpvt_data [ i ] - 1 ] -= b_A_data [ 7 * rankA + i ] * Y_data [ jpvt_data [
rankA ] - 1 ] ; } } } } static boolean_T ldlcqmqfqw ( const boolean_T x_data
[ ] , const int32_T * x_size ) { int32_T ix ; boolean_T exitg1 ; boolean_T y
; y = false ; ix = 1 ; exitg1 = false ; while ( ( ! exitg1 ) && ( ix <= *
x_size ) ) { if ( x_data [ ix - 1 ] ) { y = true ; exitg1 = true ; } else {
ix ++ ; } } return y ; } static void aova43bznr ( const real_T x [ 4 ] ,
real_T * ex , int32_T * idx ) { int32_T k ; boolean_T exitg1 ; if ( !
muDoubleScalarIsNaN ( x [ 0 ] ) ) { * idx = 1 ; } else { * idx = 0 ; k = 2 ;
exitg1 = false ; while ( ( ! exitg1 ) && ( k < 5 ) ) { if ( !
muDoubleScalarIsNaN ( x [ k - 1 ] ) ) { * idx = k ; exitg1 = true ; } else {
k ++ ; } } } if ( * idx == 0 ) { * ex = x [ 0 ] ; * idx = 1 ; } else { * ex =
x [ * idx - 1 ] ; for ( k = * idx ; k + 1 < 5 ; k ++ ) { if ( * ex > x [ k ]
) { * ex = x [ k ] ; * idx = k + 1 ; } } } } static void o4qizio5qf ( const
real_T A_data [ ] , const int32_T A_size [ 2 ] , const real_T B_data [ ] ,
real_T C [ 7 ] ) { int32_T aoffset ; int32_T b_i ; int32_T i ; for ( i = 0 ;
i < 7 ; i ++ ) { C [ i ] = 0.0 ; } for ( i = 0 ; i < A_size [ 1 ] ; i ++ ) {
aoffset = i * 7 ; for ( b_i = 0 ; b_i < 7 ; b_i ++ ) { C [ b_i ] += A_data [
aoffset + b_i ] * B_data [ i ] ; } } } void MdlInitialize ( void ) { int32_T
aldazsptev ; int32_T i ; boolean_T tmp ; rtX . cqs5hdvfch [ 0 ] = rtP . Xe0 [
0 ] ; rtX . cqtafeeuey [ 0 ] = rtP . Euler0 [ 0 ] ; rtX . lowr4jkjer [ 0 ] =
rtP . Vb0 [ 0 ] ; rtX . jwtmx1crsn [ 0 ] = rtP . omegab0 [ 0 ] ; rtX .
cqs5hdvfch [ 1 ] = rtP . Xe0 [ 1 ] ; rtX . cqtafeeuey [ 1 ] = rtP . Euler0 [
1 ] ; rtX . lowr4jkjer [ 1 ] = rtP . Vb0 [ 1 ] ; rtX . jwtmx1crsn [ 1 ] = rtP
. omegab0 [ 1 ] ; rtX . cqs5hdvfch [ 2 ] = rtP . Xe0 [ 2 ] ; rtX . cqtafeeuey
[ 2 ] = rtP . Euler0 [ 2 ] ; rtX . lowr4jkjer [ 2 ] = rtP . Vb0 [ 2 ] ; rtX .
jwtmx1crsn [ 2 ] = rtP . omegab0 [ 2 ] ; rtDW . kedw3dybgq = rtP .
Memory1_InitialCondition_bryjbbeh1n ; rtDW . ktsj2nkchd = rtP .
Memory1_InitialCondition_pjfkz2iyv3 ; rtDW . oy300njhw2 [ 0 ] = rtP .
Memory_InitialCondition_nkqjrc5mj1 [ 0 ] ; rtDW . ie2l444zba [ 0 ] = rtP .
Memory_InitialCondition_hnyjdse4h4 [ 0 ] ; rtDW . fr2fpc1qxz [ 0 ] = rtP .
Memory_InitialCondition_iqeioiam5g [ 0 ] ; rtDW . oy300njhw2 [ 1 ] = rtP .
Memory_InitialCondition_nkqjrc5mj1 [ 1 ] ; rtDW . ie2l444zba [ 1 ] = rtP .
Memory_InitialCondition_hnyjdse4h4 [ 1 ] ; rtDW . fr2fpc1qxz [ 1 ] = rtP .
Memory_InitialCondition_iqeioiam5g [ 1 ] ; rtDW . oy300njhw2 [ 2 ] = rtP .
Memory_InitialCondition_nkqjrc5mj1 [ 2 ] ; rtDW . ie2l444zba [ 2 ] = rtP .
Memory_InitialCondition_hnyjdse4h4 [ 2 ] ; rtDW . fr2fpc1qxz [ 2 ] = rtP .
Memory_InitialCondition_iqeioiam5g [ 2 ] ; rtX . oqemwaxlko [ 0 ] = rtP .
LinearSecondOrderActuator_fin_act_0 ; rtX . oqemwaxlko [ 1 ] = rtP .
LinearSecondOrderActuator_fin_act_vel ; rtDW . nt5ueu32fc = 0 ; { SimStruct *
rts = ssGetSFunction ( rtS , 2 ) ; { static const char *
blockSIDForSFcnLoader = "UNIFIER:8429" ; sfcnLoader_setCurrentSFcnBlockSID (
blockSIDForSFcnLoader ) ; void ( * sfcnMethodPtr ) ( SimStruct * ) = rts ->
modelMethods . sFcn . mdlInitializeConditions . level2 ;
sfcnLoader_separateComplexHandler ( rts , sfcnMethodPtr ) ; } if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } rtDW . nwwie5t5of = rtP .
_InitialCondition ; { SimStruct * rts = ssGetSFunction ( rtS , 3 ) ; { static
const char * blockSIDForSFcnLoader = "UNIFIER:8424" ;
sfcnLoader_setCurrentSFcnBlockSID ( blockSIDForSFcnLoader ) ; void ( *
sfcnMethodPtr ) ( SimStruct * ) = rts -> modelMethods . sFcn .
mdlInitializeConditions . level2 ; sfcnLoader_separateComplexHandler ( rts ,
sfcnMethodPtr ) ; } if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; }
rtX . a5x0ow51a0 = rtP . DistanceintoGustxLimitedtogustlengthd_IC ; rtB .
k0hmnb300u = rtP . x_Y0 ; ox2le0kgnd ( & rtB . cz2051lnszn , & rtP .
cz2051lnszn , & rtX . cz2051lnszn ) ; ox2le0kgnd ( & rtB . lld2mvqphv , & rtP
. lld2mvqphv , & rtX . lld2mvqphv ) ; rtDW . dlxximuhuf = rtP . Vb0 [ 0 ] ;
rtDW . khpyhk0eyn = rtP . DiscreteTimeIntegrator_IC ; rtDW . jbwstjuywp = rtP
. Euler0 [ 2 ] ; rtDW . pqowklbvyf = rtP . RateLimiter_IC ; rtDW . j2jiqbkm41
= rtP . Memory_InitialCondition_oqwivvostp ; rtDW . kz1ulbsboy = rtP .
RateLimiter2_IC ; rtDW . onfzjh24jl = rtP . RateLimiter1_IC ; rtDW .
oiqpesodi3 = rtP . DiscreteTransferFcn_InitialStates ; rtDW . fd5b54bou3 =
rtP . DiscreteTransferFcn_InitialStates_ia3bsxexzp ; rtDW . fshwisxlge = 1U ;
if ( ssIsFirstInitCond ( rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ;
if ( tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW .
fshwisxlge = ( uint8_T ) ! tmp ; } else { rtDW . fshwisxlge = 1U ; } } rtDW .
h2raxdlt4g = true ; rtDW . gefwlenpf3 = rtP . u4_0 ; rtDW . dwirzopvhn = rtP
. Memory1_InitialCondition ; for ( i = 0 ; i < 5 ; i ++ ) { rtDW . fzijynxjqu
[ i ] = rtP . Delay_InitialCondition ; } rtDW . etatrxd5ju [ 0 ] = rtP .
Delay_InitialCondition_ibobgmodfw [ 0 ] ; rtDW . etatrxd5ju [ 1 ] = rtP .
Delay_InitialCondition_ibobgmodfw [ 1 ] ; rtDW . etatrxd5ju [ 2 ] = rtP .
Delay_InitialCondition_ibobgmodfw [ 2 ] ; rtDW . etatrxd5ju [ 3 ] = rtP .
Delay_InitialCondition_ibobgmodfw [ 3 ] ; rtDW . agukinkt3v = rtP .
DiscreteTransferFcn1_InitialStates ; rtDW . mnnmbnljys = 1U ; if (
ssIsFirstInitCond ( rtS ) ) { tmp = slIsRapidAcceleratorSimulating ( ) ; if (
tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW . mnnmbnljys =
( uint8_T ) ! tmp ; } else { rtDW . mnnmbnljys = 1U ; } } rtDW . kielu0c1kf =
1U ; if ( ssIsFirstInitCond ( rtS ) ) { tmp = slIsRapidAcceleratorSimulating
( ) ; if ( tmp ) { tmp = ssGetGlobalInitialStatesAvailable ( rtS ) ; rtDW .
kielu0c1kf = ( uint8_T ) ! tmp ; } else { rtDW . kielu0c1kf = 1U ; } } for (
i = 0 ; i < 3000 ; i ++ ) { rtDW . h0chx3glnf [ i ] = rtP .
DelayOneStep_InitialCondition ; } rtDW . hvrukley13 = true ; rtDW .
ewnwvk30kq = rtP . Memory_InitialCondition ; rtB . hcyzeqbkyr . irdqb2psgr =
rtP . y_dot_path_nom_Y0 ; rtB . hcyzeqbkyr . hrb5rmirrg = rtP .
y_dot_path_nom_Y0 ; rtB . hcyzeqbkyr . dpynkxuvej = rtP . y_dot_path_nom_Y0 ;
for ( i = 0 ; i < 15 ; i ++ ) { rtB . cy3oarwspn [ i ] = rtP . B_path_Y0 ; }
rtDW . dkewog43cc = true ; rtDW . h21bdoedky = rtP .
Memory_InitialCondition_mj0aqcfqn5 ; for ( i = 0 ; i < 12 ; i ++ ) { rtB .
jmtm5fxob3 [ i ] = rtP . B_rate_Y0 ; } rtPrevZCX . poxwpyd5xz = ZERO_ZCSIG ;
rtPrevZCX . asefyvndgw = ZERO_ZCSIG ; for ( aldazsptev = 0 ; aldazsptev < 12
; aldazsptev ++ ) { rtX . adqmzv0sx0 [ aldazsptev ] . jtqvm3jkcz = rtP .
DEP_INTEG_IC ; rtX . adqmzv0sx0 [ aldazsptev ] . dkxi20ccfc = rtP .
DEP_PID_IC ; rtDW . adqmzv0sx0 [ aldazsptev ] . kd3fwxo3ke = rtP . adqmzv0sx0
. Memory_InitialCondition ; } { SimStruct * rts = ssGetSFunction ( rtS , 0 )
; { static const char * blockSIDForSFcnLoader = "UNIFIER:8414" ;
sfcnLoader_setCurrentSFcnBlockSID ( blockSIDForSFcnLoader ) ; void ( *
sfcnMethodPtr ) ( SimStruct * ) = rts -> modelMethods . sFcn .
mdlInitializeConditions . level2 ; sfcnLoader_separateComplexHandler ( rts ,
sfcnMethodPtr ) ; } if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } {
int_T rootPeriodicContStateIndices [ 3 ] = { 3 , 4 , 5 } ; real_T
rootPeriodicContStateRanges [ 6 ] = { - 3.1415926535897931 ,
3.1415926535897931 , - 3.1415926535897931 , 3.1415926535897931 , -
3.1415926535897931 , 3.1415926535897931 } ; ( void ) memcpy ( ( void * )
rtPeriodicIndX , rootPeriodicContStateIndices , 3 * sizeof ( int_T ) ) ; (
void ) memcpy ( ( void * ) rtPeriodicRngX , rootPeriodicContStateRanges , 6 *
sizeof ( real_T ) ) ; } } void MdlStart ( void ) { int32_T aldazsptev ;
char_T * sErr ; { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} akjxpklgdz ( & rtDW . ctbmhlk4scc ) ; akjxpklgdz ( & rtDW . f1rxuufunp ) ;
akjxpklgdz ( & rtDW . pw2pn5yxj3 ) ; fed3ofjdbn ( & rtDW . onvtpfrqwn ) ;
dxykukmlj3 ( & rtDW . f2z2t5yyw1 ) ; j0kpvzuldr ( & rtDW . c3nx5ahmxh ) ;
d0idgyu5pk ( & rtDW . kq23drdvrd ) ; { static int_T rt_ToWksWidths [ ] = { 6
} ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ; static int_T
rt_ToWksDimensions [ ] = { 6 } ; static boolean_T rt_ToWksIsVarDims [ ] = { 0
} ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) } ; static int_T
rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_SINGLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
"UNIFIER/C7A_HARW/Aero/To Workspace" ; rtDW . ibef3azav3 . LoggedData =
rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) ,
ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "u1" , 1 , 0 , 1
, 0.01 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . ibef3azav3
. LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = {
16 } ; static int_T rt_ToWksNumDimensions [ ] = { 2 } ; static int_T
rt_ToWksDimensions [ ] = { 1 , 16 } ; static boolean_T rt_ToWksIsVarDims [ ]
= { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) , ( NULL ) } ;
static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 , 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_SINGLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
"UNIFIER/C7A_HARW/Aero/To Workspace1" ; rtDW . he3hcf0uqs . LoggedData =
rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) ,
ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "vtail_alpha" ,
1 , 0 , 1 , 0.01 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW .
he3hcf0uqs . LoggedData == ( NULL ) ) return ; } { static int_T
rt_ToWksWidths [ ] = { 16 } ; static int_T rt_ToWksNumDimensions [ ] = { 1 }
; static int_T rt_ToWksDimensions [ ] = { 16 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static
BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_SINGLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = {
( NULL ) } ; static const char_T * rt_ToWksLabels [ ] = { "" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] = "UNIFIER/C7A_HARW/Aero/To Workspace2" ;
rtDW . mdcxryc1df . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "vtail_V_induced" , 1 , 0 , 1 , 0.01 , &
rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . mdcxryc1df .
LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = { 16
} ; static int_T rt_ToWksNumDimensions [ ] = { 2 } ; static int_T
rt_ToWksDimensions [ ] = { 1 , 16 } ; static boolean_T rt_ToWksIsVarDims [ ]
= { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) , ( NULL ) } ;
static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 , 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_SINGLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
"UNIFIER/C7A_HARW/Aero/To Workspace3" ; rtDW . ikwzxh2byr . LoggedData =
rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart ( rtS ) ,
ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "vtail_beta" , 1
, 0 , 1 , 0.01 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW .
ikwzxh2byr . LoggedData == ( NULL ) ) return ; } { static int_T
rt_ToWksWidths [ ] = { 14 } ; static int_T rt_ToWksNumDimensions [ ] = { 2 }
; static int_T rt_ToWksDimensions [ ] = { 1 , 14 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) , ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 , 4 } ;
static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_SINGLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = {
( NULL ) } ; static const char_T * rt_ToWksLabels [ ] = { "" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] = "UNIFIER/C7A_HARW/Aero/To Workspace4" ;
rtDW . ilwsntin02 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo (
rtS ) , ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( &
ssGetErrorStatus ( rtS ) ) , "wing_alpha" , 1 , 0 , 1 , 0.01 , &
rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW . ilwsntin02 .
LoggedData == ( NULL ) ) return ; } { static int_T rt_ToWksWidths [ ] = { 48
} ; static int_T rt_ToWksNumDimensions [ ] = { 2 } ; static int_T
rt_ToWksDimensions [ ] = { 3 , 16 } ; static boolean_T rt_ToWksIsVarDims [ ]
= { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { ( NULL ) , ( NULL ) } ;
static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 , 4 } ; static BuiltInDTypeId
rt_ToWksDataTypeIds [ ] = { SS_SINGLE } ; static int_T rt_ToWksComplexSignals
[ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0 } ; static
RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = { ( NULL ) }
; static const char_T * rt_ToWksLabels [ ] = { "" } ; static RTWLogSignalInfo
rt_ToWksSignalInfo = { 1 , rt_ToWksWidths , rt_ToWksNumDimensions ,
rt_ToWksDimensions , rt_ToWksIsVarDims , rt_ToWksCurrSigDims ,
rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds , rt_ToWksComplexSignals ,
rt_ToWksFrameData , rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels }
, ( NULL ) , ( NULL ) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , (
NULL ) } ; static const char_T rt_ToWksBlockName [ ] =
"UNIFIER/C7A_HARW/Aero/VtailForces/Subsystem/To Workspace" ; rtDW .
ko3ssler2n . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "vtail_F" , 1 , 0 , 1 , 0.01 , & rt_ToWksSignalInfo , rt_ToWksBlockName
) ; if ( rtDW . ko3ssler2n . LoggedData == ( NULL ) ) return ; } { static
int_T rt_ToWksWidths [ ] = { 21 } ; static int_T rt_ToWksNumDimensions [ ] =
{ 2 } ; static int_T rt_ToWksDimensions [ ] = { 3 , 7 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) , ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 , 4 } ;
static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_SINGLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = {
( NULL ) } ; static const char_T * rt_ToWksLabels [ ] = { "" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
"UNIFIER/C7A_HARW/Aero/WingForces/Left/Subsystem/To Workspace" ; rtDW .
g1oneuq4p3 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "wingL_F" , 1 , 0 , 1 , 0.01 , & rt_ToWksSignalInfo , rt_ToWksBlockName
) ; if ( rtDW . g1oneuq4p3 . LoggedData == ( NULL ) ) return ; } { static
int_T rt_ToWksWidths [ ] = { 21 } ; static int_T rt_ToWksNumDimensions [ ] =
{ 2 } ; static int_T rt_ToWksDimensions [ ] = { 3 , 7 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) , ( NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 , 4 } ;
static BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_SINGLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = {
( NULL ) } ; static const char_T * rt_ToWksLabels [ ] = { "" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
"UNIFIER/C7A_HARW/Aero/WingForces/Right/Subsystem/To Workspace" ; rtDW .
ge550outi3 . LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) ,
ssGetTStart ( rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS
) ) , "wingR_F" , 1 , 0 , 1 , 0.01 , & rt_ToWksSignalInfo , rt_ToWksBlockName
) ; if ( rtDW . ge550outi3 . LoggedData == ( NULL ) ) return ; } { static
int_T rt_ToWksWidths [ ] = { 1 } ; static int_T rt_ToWksNumDimensions [ ] = {
1 } ; static int_T rt_ToWksDimensions [ ] = { 1 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static
BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = {
( NULL ) } ; static const char_T * rt_ToWksLabels [ ] = { "alpha" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
"UNIFIER/C7A_HARW/EOMandEnviroment/To Workspace" ; rtDW . c0bpnojsnz .
LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart (
rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "alpha"
, 1 , 0 , 1 , 0.01 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW .
c0bpnojsnz . LoggedData == ( NULL ) ) return ; } { static int_T
rt_ToWksWidths [ ] = { 6 } ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ;
static int_T rt_ToWksDimensions [ ] = { 6 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static
BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = {
( NULL ) } ; static const char_T * rt_ToWksLabels [ ] = { "" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
"UNIFIER/C7A_HARW/EOMandEnviroment/To Workspace1" ; rtDW . fmk0yrcja4 .
LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart (
rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "X3" , 1
, 0 , 1 , 0.01 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW .
fmk0yrcja4 . LoggedData == ( NULL ) ) return ; } { static int_T
rt_ToWksWidths [ ] = { 6 } ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ;
static int_T rt_ToWksDimensions [ ] = { 6 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static
BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = {
( NULL ) } ; static const char_T * rt_ToWksLabels [ ] = { "" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
"UNIFIER/C7A_HARW/EOMandEnviroment/To Workspace2" ; rtDW . ecypzsdvgt .
LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart (
rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "X2" , 1
, 0 , 1 , 0.01 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW .
ecypzsdvgt . LoggedData == ( NULL ) ) return ; } { static int_T
rt_ToWksWidths [ ] = { 6 } ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ;
static int_T rt_ToWksDimensions [ ] = { 6 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static
BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = {
( NULL ) } ; static const char_T * rt_ToWksLabels [ ] = { "" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
"UNIFIER/C7A_HARW/EOMandEnviroment/To Workspace3" ; rtDW . o5jdfgib3n .
LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart (
rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "X1" , 1
, 0 , 1 , 0.01 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW .
o5jdfgib3n . LoggedData == ( NULL ) ) return ; } { static int_T
rt_ToWksWidths [ ] = { 1 } ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ;
static int_T rt_ToWksDimensions [ ] = { 1 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static
BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = {
( NULL ) } ; static const char_T * rt_ToWksLabels [ ] = { "beta" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
"UNIFIER/C7A_HARW/EOMandEnviroment/To Workspace4" ; rtDW . dj4xuczyvy .
LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart (
rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "beta" ,
1 , 0 , 1 , 0.01 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW .
dj4xuczyvy . LoggedData == ( NULL ) ) return ; } { static int_T
rt_ToWksWidths [ ] = { 1 } ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ;
static int_T rt_ToWksDimensions [ ] = { 1 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static
BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = {
( NULL ) } ; static const char_T * rt_ToWksLabels [ ] = { "Vrw_mag" } ;
static RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
"UNIFIER/C7A_HARW/EOMandEnviroment/To Workspace5" ; rtDW . jtsuzzwuf3 .
LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart (
rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) ,
"Vrw_mag" , 1 , 0 , 1 , 0.01 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ;
if ( rtDW . jtsuzzwuf3 . LoggedData == ( NULL ) ) return ; } { static int_T
rt_ToWksWidths [ ] = { 12 } ; static int_T rt_ToWksNumDimensions [ ] = { 1 }
; static int_T rt_ToWksDimensions [ ] = { 12 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static
BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = {
( NULL ) } ; static const char_T * rt_ToWksLabels [ ] = { "" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
"UNIFIER/C7A_HARW/Subsystems/DEP/To Workspace" ; rtDW . bzybebrenk .
LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart (
rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "rpm" ,
1 , 0 , 1 , 0.01 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW .
bzybebrenk . LoggedData == ( NULL ) ) return ; } { static int_T
rt_ToWksWidths [ ] = { 1 } ; static int_T rt_ToWksNumDimensions [ ] = { 1 } ;
static int_T rt_ToWksDimensions [ ] = { 1 } ; static boolean_T
rt_ToWksIsVarDims [ ] = { 0 } ; static void * rt_ToWksCurrSigDims [ ] = { (
NULL ) } ; static int_T rt_ToWksCurrSigDimsSize [ ] = { 4 } ; static
BuiltInDTypeId rt_ToWksDataTypeIds [ ] = { SS_DOUBLE } ; static int_T
rt_ToWksComplexSignals [ ] = { 0 } ; static int_T rt_ToWksFrameData [ ] = { 0
} ; static RTWPreprocessingFcnPtr rt_ToWksLoggingPreprocessingFcnPtrs [ ] = {
( NULL ) } ; static const char_T * rt_ToWksLabels [ ] = { "" } ; static
RTWLogSignalInfo rt_ToWksSignalInfo = { 1 , rt_ToWksWidths ,
rt_ToWksNumDimensions , rt_ToWksDimensions , rt_ToWksIsVarDims ,
rt_ToWksCurrSigDims , rt_ToWksCurrSigDimsSize , rt_ToWksDataTypeIds ,
rt_ToWksComplexSignals , rt_ToWksFrameData ,
rt_ToWksLoggingPreprocessingFcnPtrs , { rt_ToWksLabels } , ( NULL ) , ( NULL
) , ( NULL ) , { ( NULL ) } , { ( NULL ) } , ( NULL ) , ( NULL ) } ; static
const char_T rt_ToWksBlockName [ ] =
"UNIFIER/C7A_HARW/Subsystems/HTU/To Workspace" ; rtDW . kp42abeqk1 .
LoggedData = rt_CreateStructLogVar ( ssGetRTWLogInfo ( rtS ) , ssGetTStart (
rtS ) , ssGetTFinal ( rtS ) , 0.0 , ( & ssGetErrorStatus ( rtS ) ) , "HTU" ,
1 , 0 , 1 , 0.01 , & rt_ToWksSignalInfo , rt_ToWksBlockName ) ; if ( rtDW .
kp42abeqk1 . LoggedData == ( NULL ) ) return ; } sErr = GetErrorBuffer ( &
rtDW . o4nasosvnh [ 0U ] ) ; CreateUDPInterface ( & rtDW . o4nasosvnh [ 0U ]
) ; if ( * sErr == 0 ) { LibCreate_Network ( & rtDW . o4nasosvnh [ 0U ] , 1 ,
"0.0.0.0" , - 1 , "127.0.0.1" , rtP . UDPSend1_remotePort , 8192 , 1 , 0 ) ;
} if ( * sErr == 0 ) { LibStart ( & rtDW . o4nasosvnh [ 0U ] ) ; } if ( *
sErr != 0 ) { DestroyUDPInterface ( & rtDW . o4nasosvnh [ 0U ] ) ; if ( *
sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1
) ; } } sErr = GetErrorBuffer ( & rtDW . lwsgjestu3 [ 0U ] ) ;
CreateUDPInterface ( & rtDW . lwsgjestu3 [ 0U ] ) ; if ( * sErr == 0 ) {
LibCreate_Network ( & rtDW . lwsgjestu3 [ 0U ] , 1 , "0.0.0.0" , - 1 ,
"127.0.0.1" , rtP . UDPSend1_remotePort_ardthcndv5 , 8192 , 1 , 0 ) ; } if (
* sErr == 0 ) { LibStart ( & rtDW . lwsgjestu3 [ 0U ] ) ; } if ( * sErr != 0
) { DestroyUDPInterface ( & rtDW . lwsgjestu3 [ 0U ] ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } }
pv5uhtasoj ( ) ; f5orepjga5 ( ) ; fhcttf5uve ( ) ; kyeab3bcz3 ( ) ;
gpbjdtigub ( ) ; for ( aldazsptev = 0 ; aldazsptev < 12 ; aldazsptev ++ ) {
rtB . adqmzv0sx0 [ aldazsptev ] . ibnqksi5kc = 0.0 ; rtB . adqmzv0sx0 [
aldazsptev ] . jagzqtugld = 0.0 ; rtB . adqmzv0sx0 [ aldazsptev ] .
cgxtlo5ezj = false ; rtB . adqmzv0sx0 [ aldazsptev ] . hqlowwzkov = false ;
rtB . adqmzv0sx0 [ aldazsptev ] . ex2xojeend = 0.0 ; rtB . adqmzv0sx0 [
aldazsptev ] . n52zpi4j4s = 0.0 ; rtB . adqmzv0sx0 [ aldazsptev ] .
dfpeduhr4c [ 0 ] = 0.0 ; rtB . adqmzv0sx0 [ aldazsptev ] . aox0khugvh [ 0 ] =
0.0F ; rtB . adqmzv0sx0 [ aldazsptev ] . dfpeduhr4c [ 1 ] = 0.0 ; rtB .
adqmzv0sx0 [ aldazsptev ] . aox0khugvh [ 1 ] = 0.0F ; rtB . adqmzv0sx0 [
aldazsptev ] . dfpeduhr4c [ 2 ] = 0.0 ; rtB . adqmzv0sx0 [ aldazsptev ] .
aox0khugvh [ 2 ] = 0.0F ; memset ( & rtB . adqmzv0sx0 [ aldazsptev ] .
dbnx540oz1 [ 0 ] , 0 , 9U * sizeof ( real_T ) ) ; } fzffryaiii ( ) ;
hs25t3rzkd ( ) ; mi1xg034nq ( ) ; dlenkfj0qn ( ) ; l4blg1j0ys ( ) ;
dmjspgs0na ( ) ; detis300xd ( ) ; oza4gbpsob ( ) ; iepuwumnrn ( ) ;
oje4kmdodo ( ) ; d3x2zb3bdo ( ) ; f3fjaipn5f ( ) ; cysit5kmlr ( ) ;
n5333o35g0 ( ) ; mbx5mzfv5k ( ) ; at3ek3k55r ( ) ; iy3uud2hdf ( ) ;
lkfq4h3l25 ( ) ; pyrdagnyo4 ( ) ; fzq5puknp1 ( ) ; m2y4xzql5g ( ) ;
ca44jyxscj ( ) ; fjn4uebnlm ( ) ; mlcjwu0myw ( ) ; rtDW . g5vbnuh5ul = 0 ;
rtDW . bgxy0tbgby = 0 ; rtB . pr1zzcknox = rtP . deviceID_Value ; rtDW .
bwa1fip2ky = false ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtB
. lbzmmcd5bg = rtP . Numberofsimstepstoskip_Value ; { SimStruct * rts =
ssGetSFunction ( rtS , 0 ) ; { static const char * blockSIDForSFcnLoader =
"UNIFIER:8414" ; sfcnLoader_setCurrentSFcnBlockSID ( blockSIDForSFcnLoader )
; void ( * sfcnMethodPtr ) ( SimStruct * ) = ssGetmdlStart ( rts ) ;
sfcnLoader_separateComplexHandler ( rts , sfcnMethodPtr ) ; } if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } sErr = GetErrorBuffer ( &
rtDW . faxkrudp40 [ 0U ] ) ; CreateUDPInterface ( & rtDW . faxkrudp40 [ 0U ]
) ; if ( * sErr == 0 ) { LibCreate_Network ( & rtDW . faxkrudp40 [ 0U ] , 1 ,
"0.0.0.0" , - 1 , "127.0.0.1" , rtP . UDPSend_remotePort , 8192 , 1 , 0 ) ; }
if ( * sErr == 0 ) { LibStart ( & rtDW . faxkrudp40 [ 0U ] ) ; } if ( * sErr
!= 0 ) { DestroyUDPInterface ( & rtDW . faxkrudp40 [ 0U ] ) ; if ( * sErr !=
0 ) { ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } }
{ SimStruct * rts = ssGetSFunction ( rtS , 1 ) ; { static const char *
blockSIDForSFcnLoader = "UNIFIER:31022" ; sfcnLoader_setCurrentSFcnBlockSID (
blockSIDForSFcnLoader ) ; void ( * sfcnMethodPtr ) ( SimStruct * ) =
ssGetmdlStart ( rts ) ; sfcnLoader_separateComplexHandler ( rts ,
sfcnMethodPtr ) ; } if ( ssGetErrorStatus ( rts ) != ( NULL ) ) return ; }
rtDW . j1mia3rzbj = false ; ssSetBlockStateForSolverChangedAtMajorStep ( rtS
) ; lw2f0ybkpo ( rtS , & rtDW . cz2051lnszn ) ; lw2f0ybkpo ( rtS , & rtDW .
lld2mvqphv ) ; sErr = GetErrorBuffer ( & rtDW . m4a0ukvmhq [ 0U ] ) ;
CreateUDPInterface ( & rtDW . m4a0ukvmhq [ 0U ] ) ; if ( * sErr == 0 ) {
LibCreate_Network ( & rtDW . m4a0ukvmhq [ 0U ] , 1 , "0.0.0.0" , - 1 ,
"127.0.0.1" , rtP . UDPSend1_remotePort_fttrxcefev , 8192 , 1 , 0 ) ; } if (
* sErr == 0 ) { LibStart ( & rtDW . m4a0ukvmhq [ 0U ] ) ; } if ( * sErr != 0
) { DestroyUDPInterface ( & rtDW . m4a0ukvmhq [ 0U ] ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } } sErr =
GetErrorBuffer ( & rtDW . mbrgrjucym [ 0U ] ) ; CreateUDPInterface ( & rtDW .
mbrgrjucym [ 0U ] ) ; if ( * sErr == 0 ) { LibCreate_Network ( & rtDW .
mbrgrjucym [ 0U ] , 1 , "0.0.0.0" , - 1 , "127.0.0.1" , rtP .
UDPSend1_remotePort_eq52r0avzy , 8192 , 1 , 0 ) ; } if ( * sErr == 0 ) {
LibStart ( & rtDW . mbrgrjucym [ 0U ] ) ; } if ( * sErr != 0 ) {
DestroyUDPInterface ( & rtDW . mbrgrjucym [ 0U ] ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } } sErr =
GetErrorBuffer ( & rtDW . abjojyrz15 [ 0U ] ) ; CreateUDPInterface ( & rtDW .
abjojyrz15 [ 0U ] ) ; if ( * sErr == 0 ) { LibCreate_Network ( & rtDW .
abjojyrz15 [ 0U ] , 1 , "0.0.0.0" , - 1 , "127.0.0.1" , rtP .
UDPSend1_remotePort_jffxhvsqzl , 8192 , 1 , 0 ) ; } if ( * sErr == 0 ) {
LibStart ( & rtDW . abjojyrz15 [ 0U ] ) ; } if ( * sErr != 0 ) {
DestroyUDPInterface ( & rtDW . abjojyrz15 [ 0U ] ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } } sErr =
GetErrorBuffer ( & rtDW . ft5azbdazn [ 0U ] ) ; CreateUDPInterface ( & rtDW .
ft5azbdazn [ 0U ] ) ; if ( * sErr == 0 ) { LibCreate_Network ( & rtDW .
ft5azbdazn [ 0U ] , 1 , "0.0.0.0" , - 1 , "127.0.0.1" , rtP .
UDPSend1_remotePort_ijqt2smdg0 , 8192 , 1 , 0 ) ; } if ( * sErr == 0 ) {
LibStart ( & rtDW . ft5azbdazn [ 0U ] ) ; } if ( * sErr != 0 ) {
DestroyUDPInterface ( & rtDW . ft5azbdazn [ 0U ] ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } } sErr =
GetErrorBuffer ( & rtDW . m05hfkvpqz [ 0U ] ) ; CreateUDPInterface ( & rtDW .
m05hfkvpqz [ 0U ] ) ; if ( * sErr == 0 ) { LibCreate_Network ( & rtDW .
m05hfkvpqz [ 0U ] , 1 , "0.0.0.0" , - 1 , "127.0.0.1" , rtP .
UDPSend1_remotePort_ocmwsta0fc , 8192 , 1 , 0 ) ; } if ( * sErr == 0 ) {
LibStart ( & rtDW . m05hfkvpqz [ 0U ] ) ; } if ( * sErr != 0 ) {
DestroyUDPInterface ( & rtDW . m05hfkvpqz [ 0U ] ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } } sErr =
GetErrorBuffer ( & rtDW . ksy2wwjv20 [ 0U ] ) ; CreateUDPInterface ( & rtDW .
ksy2wwjv20 [ 0U ] ) ; if ( * sErr == 0 ) { LibCreate_Network ( & rtDW .
ksy2wwjv20 [ 0U ] , 1 , "0.0.0.0" , - 1 , "127.0.0.1" , rtP .
UDPSend1_remotePort_lq3erkca52 , 8192 , 1 , 0 ) ; } if ( * sErr == 0 ) {
LibStart ( & rtDW . ksy2wwjv20 [ 0U ] ) ; } if ( * sErr != 0 ) {
DestroyUDPInterface ( & rtDW . ksy2wwjv20 [ 0U ] ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } } sErr =
GetErrorBuffer ( & rtDW . axqu4ckdky [ 0U ] ) ; CreateUDPInterface ( & rtDW .
axqu4ckdky [ 0U ] ) ; if ( * sErr == 0 ) { LibCreate_Network ( & rtDW .
axqu4ckdky [ 0U ] , 1 , "0.0.0.0" , - 1 , "127.0.0.1" , rtP .
UDPSend1_remotePort_eimzoxna1i , 8192 , 1 , 0 ) ; } if ( * sErr == 0 ) {
LibStart ( & rtDW . axqu4ckdky [ 0U ] ) ; } if ( * sErr != 0 ) {
DestroyUDPInterface ( & rtDW . axqu4ckdky [ 0U ] ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } } sErr =
GetErrorBuffer ( & rtDW . f00y3b0qin [ 0U ] ) ; CreateUDPInterface ( & rtDW .
f00y3b0qin [ 0U ] ) ; if ( * sErr == 0 ) { LibCreate_Network ( & rtDW .
f00y3b0qin [ 0U ] , 1 , "0.0.0.0" , - 1 , "127.0.0.1" , rtP .
UDPSend1_remotePort_ni5g4d2iss , 8192 , 1 , 0 ) ; } if ( * sErr == 0 ) {
LibStart ( & rtDW . f00y3b0qin [ 0U ] ) ; } if ( * sErr != 0 ) {
DestroyUDPInterface ( & rtDW . f00y3b0qin [ 0U ] ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } } sErr =
GetErrorBuffer ( & rtDW . ehnerh2sch [ 0U ] ) ; CreateUDPInterface ( & rtDW .
ehnerh2sch [ 0U ] ) ; if ( * sErr == 0 ) { LibCreate_Network ( & rtDW .
ehnerh2sch [ 0U ] , 1 , "0.0.0.0" , - 1 , "127.0.0.1" , rtP .
UDPSend1_remotePort_azm1mqpelq , 8192 , 1 , 0 ) ; } if ( * sErr == 0 ) {
LibStart ( & rtDW . ehnerh2sch [ 0U ] ) ; } if ( * sErr != 0 ) {
DestroyUDPInterface ( & rtDW . ehnerh2sch [ 0U ] ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } } sErr =
GetErrorBuffer ( & rtDW . h52cjzwtlm [ 0U ] ) ; CreateUDPInterface ( & rtDW .
h52cjzwtlm [ 0U ] ) ; if ( * sErr == 0 ) { LibCreate_Network ( & rtDW .
h52cjzwtlm [ 0U ] , 1 , "0.0.0.0" , - 1 , "127.0.0.1" , rtP .
UDPSend1_remotePort_dt0jkdmcmg , 8192 , 1 , 0 ) ; } if ( * sErr == 0 ) {
LibStart ( & rtDW . h52cjzwtlm [ 0U ] ) ; } if ( * sErr != 0 ) {
DestroyUDPInterface ( & rtDW . h52cjzwtlm [ 0U ] ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } } sErr =
GetErrorBuffer ( & rtDW . hshhxf1iwg [ 0U ] ) ; CreateUDPInterface ( & rtDW .
hshhxf1iwg [ 0U ] ) ; if ( * sErr == 0 ) { LibCreate_Network ( & rtDW .
hshhxf1iwg [ 0U ] , 1 , "0.0.0.0" , - 1 , "127.0.0.1" , rtP .
UDPSend1_remotePort_bao1nst35q , 8192 , 1 , 0 ) ; } if ( * sErr == 0 ) {
LibStart ( & rtDW . hshhxf1iwg [ 0U ] ) ; } if ( * sErr != 0 ) {
DestroyUDPInterface ( & rtDW . hshhxf1iwg [ 0U ] ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } } sErr =
GetErrorBuffer ( & rtDW . fsed3lqtd2 [ 0U ] ) ; CreateUDPInterface ( & rtDW .
fsed3lqtd2 [ 0U ] ) ; if ( * sErr == 0 ) { LibCreate_Network ( & rtDW .
fsed3lqtd2 [ 0U ] , 1 , "0.0.0.0" , - 1 , "127.0.0.1" , rtP .
UDPSend1_remotePort_edlmksw0fl , 8192 , 1 , 0 ) ; } if ( * sErr == 0 ) {
LibStart ( & rtDW . fsed3lqtd2 [ 0U ] ) ; } if ( * sErr != 0 ) {
DestroyUDPInterface ( & rtDW . fsed3lqtd2 [ 0U ] ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } } {
int_T j ; char ptrKey [ 1024 ] ; { int_T i1 ; int_T * iw_Tail = & rtDW .
l1l2gip32s . Tail [ 0 ] ; int_T * iw_Head = & rtDW . l1l2gip32s . Head [ 0 ]
; int_T * iw_Last = & rtDW . l1l2gip32s . Last [ 0 ] ; int_T *
iw_CircularBufSize = & rtDW . l1l2gip32s . CircularBufSize [ 0 ] ; void * *
pw_TUbufferPtrs = & rtDW . a1p5mmdhor . TUbufferPtrs [ 0 ] ; for ( i1 = 0 ;
i1 < 16 ; i1 ++ ) { real_T * pBuffer = ( real_T * ) rt_TDelayCreateBuf ( 2 ,
5072 , sizeof ( real_T ) ) ; if ( pBuffer == ( NULL ) ) { ssSetErrorStatus (
rtS , "vtdelay memory allocation error" ) ; return ; } iw_Tail [ i1 ] = 0 ;
iw_Head [ i1 ] = 0 ; iw_Last [ i1 ] = 0 ; iw_CircularBufSize [ i1 ] = 5072 ;
for ( j = 0 ; j < 5072 ; j ++ ) { pBuffer [ j ] = rtP .
VariableTransportDelay1_InitOutput ; pBuffer [ 5072 + j ] = ssGetT ( rtS ) ;
} pw_TUbufferPtrs [ i1 ] = ( void * ) & pBuffer [ 0 ] ; sprintf ( ptrKey ,
 "UNIFIER/C7A_HARW/Aero/InducedAngleOfAttack/addDelay/Variable\nTransport Delay1_TUbuffer%d"
, i1 ) ; slsaSaveRawMemoryForSimTargetOP ( rtS , ptrKey , ( void * * ) ( &
pw_TUbufferPtrs [ i1 ] ) , 2 * 5072 * sizeof ( real_T ) , ( NULL ) , ( NULL )
) ; } } } { int_T j ; char ptrKey [ 1024 ] ; { int_T i1 ; int_T * iw_Tail = &
rtDW . lynamxwk0r . Tail [ 0 ] ; int_T * iw_Head = & rtDW . lynamxwk0r . Head
[ 0 ] ; int_T * iw_Last = & rtDW . lynamxwk0r . Last [ 0 ] ; int_T *
iw_CircularBufSize = & rtDW . lynamxwk0r . CircularBufSize [ 0 ] ; void * *
pw_TUbufferPtrs = & rtDW . d5j1ciynjn . TUbufferPtrs [ 0 ] ; for ( i1 = 0 ;
i1 < 16 ; i1 ++ ) { real_T * pBuffer = ( real_T * ) rt_TDelayCreateBuf ( 2 ,
5072 , sizeof ( real_T ) ) ; if ( pBuffer == ( NULL ) ) { ssSetErrorStatus (
rtS , "vtdelay memory allocation error" ) ; return ; } iw_Tail [ i1 ] = 0 ;
iw_Head [ i1 ] = 0 ; iw_Last [ i1 ] = 0 ; iw_CircularBufSize [ i1 ] = 5072 ;
for ( j = 0 ; j < 5072 ; j ++ ) { pBuffer [ j ] = rtP .
VariableTransportDelay_InitOutput ; pBuffer [ 5072 + j ] = ssGetT ( rtS ) ; }
pw_TUbufferPtrs [ i1 ] = ( void * ) & pBuffer [ 0 ] ; sprintf ( ptrKey ,
 "UNIFIER/C7A_HARW/Aero/InducedAngleOfAttack/addDelay/Variable\nTransport Delay_TUbuffer%d"
, i1 ) ; slsaSaveRawMemoryForSimTargetOP ( rtS , ptrKey , ( void * * ) ( &
pw_TUbufferPtrs [ i1 ] ) , 2 * 5072 * sizeof ( real_T ) , ( NULL ) , ( NULL )
) ; } } } { SimStruct * rts = ssGetSFunction ( rtS , 2 ) ; { static const
char * blockSIDForSFcnLoader = "UNIFIER:8429" ;
sfcnLoader_setCurrentSFcnBlockSID ( blockSIDForSFcnLoader ) ; void ( *
sfcnMethodPtr ) ( SimStruct * ) = ssGetmdlStart ( rts ) ;
sfcnLoader_separateComplexHandler ( rts , sfcnMethodPtr ) ; } if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } { SimStruct * rts =
ssGetSFunction ( rtS , 3 ) ; { static const char * blockSIDForSFcnLoader =
"UNIFIER:8424" ; sfcnLoader_setCurrentSFcnBlockSID ( blockSIDForSFcnLoader )
; void ( * sfcnMethodPtr ) ( SimStruct * ) = ssGetmdlStart ( rts ) ;
sfcnLoader_separateComplexHandler ( rts , sfcnMethodPtr ) ; } if (
ssGetErrorStatus ( rts ) != ( NULL ) ) return ; } MdlInitialize ( ) ; } void
MdlOutputs ( int_T tid ) { real_T frhju144cl [ 3 ] ; real_T j4ckedbbex [ 3 ]
; real_T egh4jyhxcm [ 3 ] ; real_T hfwwqokbwo ; real_T oxomw1ffaj ; real_T
bdftk3iflv [ 7 ] ; real_T fqencds54o ; real_T denlcl541x ; real_T jdf3sumceh
; real_T l2oqv3g1zy [ 3 ] ; real_T a1ibcjxfxt [ 9 ] ; real_T ohkhd0oxm4 [ 7 ]
; real_T hqsannv2yt [ 3 ] ; real_T f3an1bor3z [ 5 ] ; real_T lbb4akipfk [ 9 ]
; real_T jaejdr5121 [ 7 ] ; real_T ghhzyt0vqy ; real_T louycaqmjf [ 3 ] ;
real_T dnttemuy2m [ 9 ] ; real_T g5udvnfnq3 [ 7 ] ; real_T ievbduqdsw [ 3 ] ;
real_T pb5onpph4x [ 16 ] ; real_T j1ncyjcm0a [ 16 ] ; real_T awuilyxvbq [ 3 ]
; real_T nl202crtfv [ 3 ] ; real_T p4xbdqn5oc [ 3 ] ; real32_T jiw1iujqjc ;
real32_T ojlhabvsec ; real32_T nfkmzcdnvu ; real32_T ddrshnc1rz ; real32_T
oympz1skih ; real32_T oqpjcq5edz ; real32_T iwbdjbsqge ; real32_T fqtwihsnmo
; real32_T arynktfrap ; int32_T aldazsptev ; __m128 tmp_f ; __m128d tmp_c ;
__m128d tmp_g ; __m128d tmp_j ; real_T mfkqvhwnqs [ 48 ] ; real_T A [ 40 ] ;
real_T A_free_data [ 40 ] ; real_T A_free_data_e [ 40 ] ; real_T dsccgxajgj [
36 ] ; real_T gsnhdicnm0 [ 36 ] ; real_T A_free_data_i [ 28 ] ; real_T
A_free_data_p [ 28 ] ; real_T A_p [ 28 ] ; real_T dq25kgk52k [ 21 ] ; real_T
f40yzytdn0 [ 20 ] ; real_T mstjku3ag5 [ 20 ] ; real_T irfwaeofjb [ 16 ] ;
real_T lqbwr5bl13 [ 16 ] ; real_T mcfbmp4hwj [ 16 ] ; real_T nvl2rva03y [ 16
] ; real_T tmp_p [ 15 ] ; real_T c3klqxe1kc [ 12 ] ; real_T gmj3cy4km1 [ 12 ]
; real_T tmp [ 10 ] ; real_T tmp_i [ 10 ] ; real_T bfqymjqlpw [ 9 ] ; real_T
ckkjeon1gu [ 9 ] ; real_T d0th5waoye [ 9 ] ; real_T goislsqndx [ 9 ] ; real_T
hhjx0kn5md [ 9 ] ; real_T iksijyt0t5 [ 9 ] ; real_T k3uq5srdl2 [ 9 ] ; real_T
laapbpohx0 [ 9 ] ; real_T mvrmkcanel [ 9 ] ; real_T mwudvr0dno [ 9 ] ; real_T
oqjjyzlelr [ 9 ] ; real_T ositd3czvc [ 9 ] ; real_T pcdy0tdgbf [ 9 ] ; real_T
pciztti2mf [ 9 ] ; real_T pgeu4112gv [ 9 ] ; real_T A_e [ 8 ] ; real_T d [ 8
] ; real_T tmp_e [ 8 ] ; real_T d_p [ 7 ] ; real_T tmp_m [ 7 ] ; real_T a__1
[ 5 ] ; real_T hz1wdoosnd [ 5 ] ; real_T lyv0niej1z [ 5 ] ; real_T nyvvsyjlz2
[ 5 ] ; real_T p [ 5 ] ; real_T p_free_data [ 5 ] ; real_T sol_pref [ 5 ] ;
real_T umax [ 5 ] ; real_T x_data [ 5 ] ; real_T acafcyi14i [ 4 ] ; real_T
frac_am [ 4 ] ; real_T frac_av [ 4 ] ; real_T frac_cv [ 4 ] ; real_T frac_d1
[ 4 ] ; real_T frac_du [ 4 ] ; real_T frac_fv [ 4 ] ; real_T frac_g5 [ 4 ] ;
real_T frac_ir [ 4 ] ; real_T frac_mu [ 4 ] ; real_T frac_pk [ 4 ] ; real_T
a5zxkwaluu [ 3 ] ; real_T agmxf0bpkk [ 3 ] ; real_T aikhueixpf [ 3 ] ; real_T
as2exlo2n4 [ 3 ] ; real_T cm [ 3 ] ; real_T cuwl4zp4yw [ 3 ] ; real_T
ebzekdphab [ 3 ] ; real_T frac_ah [ 3 ] ; real_T frac_as [ 3 ] ; real_T
frac_b0 [ 3 ] ; real_T frac_bc [ 3 ] ; real_T frac_bf [ 3 ] ; real_T frac_bp
[ 3 ] ; real_T frac_ca [ 3 ] ; real_T frac_cc [ 3 ] ; real_T frac_ct [ 3 ] ;
real_T frac_dg [ 3 ] ; real_T frac_dl [ 3 ] ; real_T frac_dt [ 3 ] ; real_T
frac_e5 [ 3 ] ; real_T frac_fx [ 3 ] ; real_T frac_g3 [ 3 ] ; real_T frac_gw
[ 3 ] ; real_T frac_gx [ 3 ] ; real_T frac_hj [ 3 ] ; real_T frac_iy [ 3 ] ;
real_T frac_iz [ 3 ] ; real_T frac_jd [ 3 ] ; real_T frac_jv [ 3 ] ; real_T
frac_kr [ 3 ] ; real_T frac_kv [ 3 ] ; real_T frac_lr [ 3 ] ; real_T frac_mi
[ 3 ] ; real_T frac_mz [ 3 ] ; real_T frac_ni [ 3 ] ; real_T frac_no [ 3 ] ;
real_T frac_oc [ 3 ] ; real_T fsgbuyd2yn [ 3 ] ; real_T ga0emsz5x4 [ 3 ] ;
real_T gkshvepttp [ 3 ] ; real_T inoflfxzl4 [ 3 ] ; real_T jgywcuuufn [ 3 ] ;
real_T ncgfuwjrdt [ 3 ] ; real_T p1t5syw2cc [ 3 ] ; real_T bcwof20ssn ;
real_T cb ; real_T cwdb3qacqr ; real_T da3saky4rw ; real_T dh3zefosvy ;
real_T dmol4f0gb0_idx_0 ; real_T dmol4f0gb0_idx_1 ; real_T dmol4f0gb0_idx_2 ;
real_T do2fmqm0jw_idx_1 ; real_T e04f1erd1u ; real_T e32kai3hdx ; real_T
g52k1xdouv_idx_0 ; real_T g52k1xdouv_idx_1 ; real_T gdvtsdc4i4_idx_1 ; real_T
hjpu2sw0us_idx_1 ; real_T hndnwewn14_idx_0 ; real_T hndnwewn14_idx_1 ; real_T
hp3vnvb34m_idx_1 ; real_T hp3vnvb34m_idx_2 ; real_T hy1xz2ukcn ; real_T
i5y02tnznl_idx_0 ; real_T j0r0arniji ; real_T j2olvplitn_idx_0 ; real_T
jbp40v4j45 ; real_T jgzcqdfrmy_idx_0 ; real_T jgzcqdfrmy_idx_1 ; real_T
jgzcqdfrmy_idx_2 ; real_T kld3j4mgfs_idx_0 ; real_T kld3j4mgfs_idx_1 ; real_T
kurpvwnuj4_idx_1 ; real_T l4omwvocst_idx_1 ; real_T lclwc4tmbx ; real_T
lir1dfa45c ; real_T lsurenbes1 ; real_T m00opiy3yc_idx_0 ; real_T
m00opiy3yc_idx_1 ; real_T m00opiy3yc_idx_2 ; real_T mfkf5g0cet_idx_1 ; real_T
mfkf5g0cet_idx_2 ; real_T n1fwtevrzf_idx_0 ; real_T n1fwtevrzf_idx_1 ; real_T
pbzebb1cbu_idx_0 ; real_T pbzebb1cbu_idx_1 ; real_T pbzebb1cbu_idx_2 ; real_T
sb ; real_T y_e ; real_T y_i ; real_T y_p ; int32_T i ; int32_T iU ; int32_T
i_e ; int32_T i_p ; int32_T s315_iter ; int32_T vectorUB ; real32_T
k1zpj42h11 [ 48 ] ; real32_T mybyivl1uq [ 48 ] ; real32_T pf3wpndfmw [ 48 ] ;
real32_T ai3hxrjap5 [ 21 ] ; real32_T aohvunheuk [ 21 ] ; real32_T cczoirn2ah
[ 21 ] ; real32_T cdiu1fbbqm [ 21 ] ; real32_T ce14rneku4 [ 21 ] ; real32_T
du3g43l3nf [ 21 ] ; real32_T dunv5mncfe [ 21 ] ; real32_T e2bqxknvrt [ 21 ] ;
real32_T emjtkpfqsk [ 21 ] ; real32_T far5jcykzg [ 21 ] ; real32_T fg1vqqswik
[ 21 ] ; real32_T fjztecg33x [ 21 ] ; real32_T ge04r1sxrb [ 21 ] ; real32_T
irujaevkeq [ 21 ] ; real32_T k35pxeh0mi [ 21 ] ; real32_T kgia3ln2qj [ 21 ] ;
real32_T kta5xsgp3m [ 21 ] ; real32_T l12nhlzkel [ 21 ] ; real32_T l1aqdduiuf
[ 21 ] ; real32_T ld2pkixaze [ 21 ] ; real32_T lfthidi5c0 [ 21 ] ; real32_T
liydxvyvbx [ 21 ] ; real32_T na5l3vydql [ 21 ] ; real32_T nfgppod2lf [ 21 ] ;
real32_T oqeykbiv2k [ 21 ] ; real32_T p4roalmgbr [ 21 ] ; real32_T piziyg51sq
[ 21 ] ; real32_T pncrddvvzg [ 21 ] ; real32_T acmnvm3xsn [ 16 ] ; real32_T
biece21jwb [ 16 ] ; real32_T bqkagafcws [ 16 ] ; real32_T dkboypdf3m [ 16 ] ;
real32_T fgtgm00bdu [ 16 ] ; real32_T fqmpp1ruun [ 16 ] ; real32_T h5rdtgmjbr
[ 16 ] ; real32_T hmfdyqp1cp [ 16 ] ; real32_T l0zhodiblx [ 16 ] ; real32_T
lzm2khqk43 [ 16 ] ; real32_T prizw2ngzn [ 12 ] ; real32_T bdbtstt51i [ 5 ] ;
real32_T d2guuznk3s [ 5 ] ; real32_T dq5140y2bs [ 5 ] ; real32_T epaolvt0vm [
5 ] ; real32_T fgrhjqvnic [ 5 ] ; real32_T g5intoqa2s [ 5 ] ; real32_T
gsmuzimw5z [ 5 ] ; real32_T hlj0oel2qy [ 5 ] ; real32_T k4aa1o2bhw [ 5 ] ;
real32_T kko0lbsvwo [ 5 ] ; real32_T kybpw4f1la [ 5 ] ; real32_T l2m0tr3gxj [
5 ] ; real32_T ndmwly2tkn [ 5 ] ; real32_T nirteiccr5 [ 5 ] ; real32_T
pdb2lmu2m2 [ 5 ] ; real32_T frac [ 4 ] ; real32_T frac_ad [ 4 ] ; real32_T
frac_ap [ 4 ] ; real32_T frac_aq [ 4 ] ; real32_T frac_au [ 4 ] ; real32_T
frac_b [ 4 ] ; real32_T frac_ba [ 4 ] ; real32_T frac_bb [ 4 ] ; real32_T
frac_bi [ 4 ] ; real32_T frac_bk [ 4 ] ; real32_T frac_bo [ 4 ] ; real32_T
frac_bq [ 4 ] ; real32_T frac_bu [ 4 ] ; real32_T frac_c [ 4 ] ; real32_T
frac_ce [ 4 ] ; real32_T frac_ch [ 4 ] ; real32_T frac_ck [ 4 ] ; real32_T
frac_cu [ 4 ] ; real32_T frac_d [ 4 ] ; real32_T frac_d0 [ 4 ] ; real32_T
frac_d4 [ 4 ] ; real32_T frac_dd [ 4 ] ; real32_T frac_de [ 4 ] ; real32_T
frac_dh [ 4 ] ; real32_T frac_dj [ 4 ] ; real32_T frac_dk [ 4 ] ; real32_T
frac_dp [ 4 ] ; real32_T frac_dz [ 4 ] ; real32_T frac_e [ 4 ] ; real32_T
frac_e2 [ 4 ] ; real32_T frac_eg [ 4 ] ; real32_T frac_eh [ 4 ] ; real32_T
frac_ej [ 4 ] ; real32_T frac_en [ 4 ] ; real32_T frac_eo [ 4 ] ; real32_T
frac_ep [ 4 ] ; real32_T frac_eu [ 4 ] ; real32_T frac_ew [ 4 ] ; real32_T
frac_ex [ 4 ] ; real32_T frac_f [ 4 ] ; real32_T frac_f2 [ 4 ] ; real32_T
frac_f3 [ 4 ] ; real32_T frac_f4 [ 4 ] ; real32_T frac_f5 [ 4 ] ; real32_T
frac_fd [ 4 ] ; real32_T frac_fg [ 4 ] ; real32_T frac_fs [ 4 ] ; real32_T
frac_g [ 4 ] ; real32_T frac_gf [ 4 ] ; real32_T frac_go [ 4 ] ; real32_T
frac_gy [ 4 ] ; real32_T frac_gz [ 4 ] ; real32_T frac_h2 [ 4 ] ; real32_T
frac_ha [ 4 ] ; real32_T frac_hc [ 4 ] ; real32_T frac_hg [ 4 ] ; real32_T
frac_hk [ 4 ] ; real32_T frac_hl [ 4 ] ; real32_T frac_hn [ 4 ] ; real32_T
frac_hr [ 4 ] ; real32_T frac_hx [ 4 ] ; real32_T frac_i [ 4 ] ; real32_T
frac_i1 [ 4 ] ; real32_T frac_i2 [ 4 ] ; real32_T frac_i5 [ 4 ] ; real32_T
frac_id [ 4 ] ; real32_T frac_ih [ 4 ] ; real32_T frac_il [ 4 ] ; real32_T
frac_j [ 4 ] ; real32_T frac_j0 [ 4 ] ; real32_T frac_j5 [ 4 ] ; real32_T
frac_jk [ 4 ] ; real32_T frac_jo [ 4 ] ; real32_T frac_ju [ 4 ] ; real32_T
frac_jw [ 4 ] ; real32_T frac_k [ 4 ] ; real32_T frac_k0 [ 4 ] ; real32_T
frac_k2 [ 4 ] ; real32_T frac_k3 [ 4 ] ; real32_T frac_k4 [ 4 ] ; real32_T
frac_kg [ 4 ] ; real32_T frac_kh [ 4 ] ; real32_T frac_ko [ 4 ] ; real32_T
frac_kq [ 4 ] ; real32_T frac_kt [ 4 ] ; real32_T frac_kw [ 4 ] ; real32_T
frac_l [ 4 ] ; real32_T frac_l3 [ 4 ] ; real32_T frac_lc [ 4 ] ; real32_T
frac_ld [ 4 ] ; real32_T frac_lo [ 4 ] ; real32_T frac_lt [ 4 ] ; real32_T
frac_ly [ 4 ] ; real32_T frac_m [ 4 ] ; real32_T frac_m0 [ 4 ] ; real32_T
frac_m2 [ 4 ] ; real32_T frac_m4 [ 4 ] ; real32_T frac_mc [ 4 ] ; real32_T
frac_md [ 4 ] ; real32_T frac_mg [ 4 ] ; real32_T frac_mj [ 4 ] ; real32_T
frac_ml [ 4 ] ; real32_T frac_mo [ 4 ] ; real32_T frac_ms [ 4 ] ; real32_T
frac_mw [ 4 ] ; real32_T frac_my [ 4 ] ; real32_T frac_n [ 4 ] ; real32_T
frac_na [ 4 ] ; real32_T frac_nf [ 4 ] ; real32_T frac_ns [ 4 ] ; real32_T
frac_o [ 4 ] ; real32_T frac_oa [ 4 ] ; real32_T frac_ob [ 4 ] ; real32_T
frac_ol [ 4 ] ; real32_T frac_ot [ 4 ] ; real32_T frac_p [ 4 ] ; real32_T
frac_pd [ 4 ] ; real32_T frac_pj [ 4 ] ; real32_T frac_po [ 4 ] ; real32_T
frac_pz [ 4 ] ; real32_T bdvkktmal5_p [ 3 ] ; real32_T di1tsh2hwg [ 3 ] ;
real32_T g0uuf55mpg [ 3 ] ; real32_T ivnfroue5d [ 3 ] ; real32_T a3usql3psn [
2 ] ; real32_T bglwh2qkc0 [ 2 ] ; real32_T bunb5souut [ 2 ] ; real32_T
ccgkoxgkvr [ 2 ] ; real32_T ceos33awbx [ 2 ] ; real32_T cttxxy2eqo [ 2 ] ;
real32_T d3scbkbwlb [ 2 ] ; real32_T elutacwd5z [ 2 ] ; real32_T emuqsm3je3 [
2 ] ; real32_T frac_bv [ 2 ] ; real32_T frac_cy [ 2 ] ; real32_T frac_f0 [ 2
] ; real32_T frac_f1 [ 2 ] ; real32_T frac_ge [ 2 ] ; real32_T frac_gn [ 2 ]
; real32_T frac_gq [ 2 ] ; real32_T frac_gv [ 2 ] ; real32_T frac_hv [ 2 ] ;
real32_T frac_hy [ 2 ] ; real32_T frac_ie [ 2 ] ; real32_T frac_ii [ 2 ] ;
real32_T frac_im [ 2 ] ; real32_T frac_it [ 2 ] ; real32_T frac_j4 [ 2 ] ;
real32_T frac_l1 [ 2 ] ; real32_T frac_lb [ 2 ] ; real32_T frac_m5 [ 2 ] ;
real32_T frac_mq [ 2 ] ; real32_T frac_nz [ 2 ] ; real32_T frac_oj [ 2 ] ;
real32_T frac_ok [ 2 ] ; real32_T frac_pb [ 2 ] ; real32_T frac_pp [ 2 ] ;
real32_T frac_pr [ 2 ] ; real32_T furcgytxjj [ 2 ] ; real32_T gsguxbdffk [ 2
] ; real32_T i2s0r3le3k [ 2 ] ; real32_T i5htqtys5b [ 2 ] ; real32_T
ijn42ncetb [ 2 ] ; real32_T kxk0mmptat [ 2 ] ; real32_T lah51nh4mc [ 2 ] ;
real32_T m1ahso5u4m [ 2 ] ; real32_T mr0w2gp23k [ 2 ] ; real32_T myhzkqobqq [
2 ] ; real32_T mzlgmqychg [ 2 ] ; real32_T nbctofij0w [ 2 ] ; real32_T
njurhkovsz [ 2 ] ; real32_T nwsd1dfjvy [ 2 ] ; real32_T o4gvcq0m0s [ 2 ] ;
real32_T ohuehvepr1 [ 2 ] ; real32_T oixlaxkj0z [ 2 ] ; real32_T ovjd1la42y [
2 ] ; real32_T ozvztj532a [ 2 ] ; real32_T pqybaqddwg [ 2 ] ; real32_T
pyfokpvamr [ 2 ] ; real32_T adrjjwpu5v ; real32_T afif0ynjey ; real32_T
bdvkktmal5_idx_0 ; real32_T bdvkktmal5_idx_1 ; real32_T bdvkktmal5_idx_2 ;
real32_T cq2trmp0xn_idx_0 ; real32_T cq2trmp0xn_idx_1 ; real32_T
cq2trmp0xn_idx_2 ; real32_T csenboislk ; real32_T dbff0mb3bq ; real32_T
dh4cgxbhqr ; real32_T do51zgnib3 ; real32_T f5qwewprly ; real32_T fathofdwn4
; real32_T gg4lrsx5if ; real32_T i2pbocf1g0_idx_1 ; real32_T i2pbocf1g0_idx_2
; real32_T ipej1ctcz4 ; real32_T jtoldnh5tw ; real32_T lrpn1bvaje ; real32_T
nsmwxx5bxv ; real32_T nz0cjy5leu ; real32_T nzrycehjx4 ; real32_T o0o3ab3dt4
; real32_T p5e3xkr1y0 ; uint32_T asvvjqwjnk [ 16 ] ; uint32_T ayy24n2qrl [ 16
] ; uint32_T c3swjrmvem [ 16 ] ; uint32_T d4lboqrosv [ 16 ] ; uint32_T
f2e5fcgb3v [ 16 ] ; uint32_T fehxxn152z [ 16 ] ; uint32_T gm4p0rdh2f [ 16 ] ;
uint32_T mvstg4yzt0 [ 16 ] ; uint32_T bpIndex [ 5 ] ; uint32_T bpIndex_ad [ 5
] ; uint32_T bpIndex_am [ 5 ] ; uint32_T bpIndex_ap [ 5 ] ; uint32_T
bpIndex_aq [ 5 ] ; uint32_T bpIndex_au [ 5 ] ; uint32_T bpIndex_av [ 5 ] ;
uint32_T bpIndex_b [ 5 ] ; uint32_T bpIndex_ba [ 5 ] ; uint32_T bpIndex_bb [
5 ] ; uint32_T bpIndex_bi [ 5 ] ; uint32_T bpIndex_bk [ 5 ] ; uint32_T
bpIndex_bo [ 5 ] ; uint32_T bpIndex_bq [ 5 ] ; uint32_T bpIndex_bu [ 5 ] ;
uint32_T bpIndex_c [ 5 ] ; uint32_T bpIndex_ce [ 5 ] ; uint32_T bpIndex_ch [
5 ] ; uint32_T bpIndex_ck [ 5 ] ; uint32_T bpIndex_cu [ 5 ] ; uint32_T
bpIndex_cv [ 5 ] ; uint32_T bpIndex_d [ 5 ] ; uint32_T bpIndex_d0 [ 5 ] ;
uint32_T bpIndex_d1 [ 5 ] ; uint32_T bpIndex_d4 [ 5 ] ; uint32_T bpIndex_dd [
5 ] ; uint32_T bpIndex_de [ 5 ] ; uint32_T bpIndex_dh [ 5 ] ; uint32_T
bpIndex_dj [ 5 ] ; uint32_T bpIndex_dk [ 5 ] ; uint32_T bpIndex_dp [ 5 ] ;
uint32_T bpIndex_du [ 5 ] ; uint32_T bpIndex_dz [ 5 ] ; uint32_T bpIndex_e [
5 ] ; uint32_T bpIndex_e2 [ 5 ] ; uint32_T bpIndex_eg [ 5 ] ; uint32_T
bpIndex_eh [ 5 ] ; uint32_T bpIndex_ej [ 5 ] ; uint32_T bpIndex_en [ 5 ] ;
uint32_T bpIndex_eo [ 5 ] ; uint32_T bpIndex_ep [ 5 ] ; uint32_T bpIndex_eu [
5 ] ; uint32_T bpIndex_ew [ 5 ] ; uint32_T bpIndex_ex [ 5 ] ; uint32_T
bpIndex_f [ 5 ] ; uint32_T bpIndex_f2 [ 5 ] ; uint32_T bpIndex_f3 [ 5 ] ;
uint32_T bpIndex_f4 [ 5 ] ; uint32_T bpIndex_f5 [ 5 ] ; uint32_T bpIndex_fd [
5 ] ; uint32_T bpIndex_fg [ 5 ] ; uint32_T bpIndex_fs [ 5 ] ; uint32_T
bpIndex_fv [ 5 ] ; uint32_T bpIndex_g [ 5 ] ; uint32_T bpIndex_g5 [ 5 ] ;
uint32_T bpIndex_gf [ 5 ] ; uint32_T bpIndex_go [ 5 ] ; uint32_T bpIndex_gy [
5 ] ; uint32_T bpIndex_gz [ 5 ] ; uint32_T bpIndex_h2 [ 5 ] ; uint32_T
bpIndex_ha [ 5 ] ; uint32_T bpIndex_hc [ 5 ] ; uint32_T bpIndex_hg [ 5 ] ;
uint32_T bpIndex_hk [ 5 ] ; uint32_T bpIndex_hl [ 5 ] ; uint32_T bpIndex_hn [
5 ] ; uint32_T bpIndex_hr [ 5 ] ; uint32_T bpIndex_hx [ 5 ] ; uint32_T
bpIndex_i [ 5 ] ; uint32_T bpIndex_i1 [ 5 ] ; uint32_T bpIndex_i2 [ 5 ] ;
uint32_T bpIndex_i5 [ 5 ] ; uint32_T bpIndex_id [ 5 ] ; uint32_T bpIndex_ih [
5 ] ; uint32_T bpIndex_il [ 5 ] ; uint32_T bpIndex_ir [ 5 ] ; uint32_T
bpIndex_j [ 5 ] ; uint32_T bpIndex_j0 [ 5 ] ; uint32_T bpIndex_j5 [ 5 ] ;
uint32_T bpIndex_jk [ 5 ] ; uint32_T bpIndex_jo [ 5 ] ; uint32_T bpIndex_ju [
5 ] ; uint32_T bpIndex_jw [ 5 ] ; uint32_T bpIndex_k [ 5 ] ; uint32_T
bpIndex_k0 [ 5 ] ; uint32_T bpIndex_k2 [ 5 ] ; uint32_T bpIndex_k3 [ 5 ] ;
uint32_T bpIndex_k4 [ 5 ] ; uint32_T bpIndex_kg [ 5 ] ; uint32_T bpIndex_kh [
5 ] ; uint32_T bpIndex_ko [ 5 ] ; uint32_T bpIndex_kq [ 5 ] ; uint32_T
bpIndex_kt [ 5 ] ; uint32_T bpIndex_kw [ 5 ] ; uint32_T bpIndex_l [ 5 ] ;
uint32_T bpIndex_l3 [ 5 ] ; uint32_T bpIndex_lc [ 5 ] ; uint32_T bpIndex_ld [
5 ] ; uint32_T bpIndex_lo [ 5 ] ; uint32_T bpIndex_lt [ 5 ] ; uint32_T
bpIndex_ly [ 5 ] ; uint32_T bpIndex_m [ 5 ] ; uint32_T bpIndex_m0 [ 5 ] ;
uint32_T bpIndex_m2 [ 5 ] ; uint32_T bpIndex_m4 [ 5 ] ; uint32_T bpIndex_mc [
5 ] ; uint32_T bpIndex_md [ 5 ] ; uint32_T bpIndex_mg [ 5 ] ; uint32_T
bpIndex_mj [ 5 ] ; uint32_T bpIndex_ml [ 5 ] ; uint32_T bpIndex_mo [ 5 ] ;
uint32_T bpIndex_ms [ 5 ] ; uint32_T bpIndex_mu [ 5 ] ; uint32_T bpIndex_mw [
5 ] ; uint32_T bpIndex_my [ 5 ] ; uint32_T bpIndex_n [ 5 ] ; uint32_T
bpIndex_na [ 5 ] ; uint32_T bpIndex_nf [ 5 ] ; uint32_T bpIndex_ns [ 5 ] ;
uint32_T bpIndex_o [ 5 ] ; uint32_T bpIndex_oa [ 5 ] ; uint32_T bpIndex_ob [
5 ] ; uint32_T bpIndex_ol [ 5 ] ; uint32_T bpIndex_ot [ 5 ] ; uint32_T
bpIndex_p [ 5 ] ; uint32_T bpIndex_pd [ 5 ] ; uint32_T bpIndex_pj [ 5 ] ;
uint32_T bpIndex_pk [ 5 ] ; uint32_T bpIndex_po [ 5 ] ; uint32_T bpIndex_pz [
5 ] ; uint32_T dqy5hcjfdc [ 5 ] ; uint32_T eqjb1ghghq [ 5 ] ; uint32_T
h0u2qqbsra [ 5 ] ; uint32_T k1zguhxahv [ 5 ] ; uint32_T ku12scvirb [ 5 ] ;
uint32_T kugs2ta1qq [ 5 ] ; uint32_T kxwiwb3dqe [ 5 ] ; uint32_T m155nrsjmd [
5 ] ; uint32_T mqutrzwpbz [ 5 ] ; uint32_T noamhvni52 [ 5 ] ; uint32_T
o1tzdshqbe [ 5 ] ; uint32_T okphy1ntzm [ 5 ] ; uint32_T bpIndex_ah [ 4 ] ;
uint32_T bpIndex_as [ 4 ] ; uint32_T bpIndex_b0 [ 4 ] ; uint32_T bpIndex_bc [
4 ] ; uint32_T bpIndex_bf [ 4 ] ; uint32_T bpIndex_bp [ 4 ] ; uint32_T
bpIndex_ca [ 4 ] ; uint32_T bpIndex_cc [ 4 ] ; uint32_T bpIndex_ct [ 4 ] ;
uint32_T bpIndex_dg [ 4 ] ; uint32_T bpIndex_dl [ 4 ] ; uint32_T bpIndex_dt [
4 ] ; uint32_T bpIndex_e5 [ 4 ] ; uint32_T bpIndex_fx [ 4 ] ; uint32_T
bpIndex_g3 [ 4 ] ; uint32_T bpIndex_gw [ 4 ] ; uint32_T bpIndex_gx [ 4 ] ;
uint32_T bpIndex_hj [ 4 ] ; uint32_T bpIndex_iy [ 4 ] ; uint32_T bpIndex_iz [
4 ] ; uint32_T bpIndex_jd [ 4 ] ; uint32_T bpIndex_jv [ 4 ] ; uint32_T
bpIndex_kr [ 4 ] ; uint32_T bpIndex_kv [ 4 ] ; uint32_T bpIndex_lr [ 4 ] ;
uint32_T bpIndex_mi [ 4 ] ; uint32_T bpIndex_mz [ 4 ] ; uint32_T bpIndex_ni [
4 ] ; uint32_T bpIndex_no [ 4 ] ; uint32_T bpIndex_oc [ 4 ] ; uint32_T
bpIndex_bv [ 2 ] ; uint32_T bpIndex_cy [ 2 ] ; uint32_T bpIndex_f0 [ 2 ] ;
uint32_T bpIndex_f1 [ 2 ] ; uint32_T bpIndex_ge [ 2 ] ; uint32_T bpIndex_gn [
2 ] ; uint32_T bpIndex_gq [ 2 ] ; uint32_T bpIndex_gv [ 2 ] ; uint32_T
bpIndex_hv [ 2 ] ; uint32_T bpIndex_hy [ 2 ] ; uint32_T bpIndex_ie [ 2 ] ;
uint32_T bpIndex_ii [ 2 ] ; uint32_T bpIndex_im [ 2 ] ; uint32_T bpIndex_it [
2 ] ; uint32_T bpIndex_j4 [ 2 ] ; uint32_T bpIndex_l1 [ 2 ] ; uint32_T
bpIndex_lb [ 2 ] ; uint32_T bpIndex_m5 [ 2 ] ; uint32_T bpIndex_mq [ 2 ] ;
uint32_T bpIndex_nz [ 2 ] ; uint32_T bpIndex_oj [ 2 ] ; uint32_T bpIndex_ok [
2 ] ; uint32_T bpIndex_pb [ 2 ] ; uint32_T bpIndex_pp [ 2 ] ; uint32_T
bpIndex_pr [ 2 ] ; uint32_T aoonk22yz4 ; uint32_T bcylnfhnxj_idx_0 ; uint32_T
bcylnfhnxj_idx_1 ; uint32_T bfvckiyvxm ; uint32_T bgilaurrar ; uint32_T
e0icl3aktx ; uint32_T exyi3olyp3 ; uint32_T fql1hnjds1_idx_0 ; uint32_T
fql1hnjds1_idx_1 ; uint32_T g2xbodp0xg ; uint32_T g3ud4i51ui_idx_0 ; uint32_T
g3ud4i51ui_idx_1 ; uint32_T gkal1jh445_idx_0 ; uint32_T gkal1jh445_idx_1 ;
uint32_T gloodttbiv_idx_0 ; uint32_T gloodttbiv_idx_1 ; uint32_T gpjb51jpeb ;
uint32_T gtuyvnkhut ; uint32_T hcbpipseis_idx_0 ; uint32_T hcbpipseis_idx_1 ;
uint32_T hwi3v4bm1e ; uint32_T ievp443ply_idx_0 ; uint32_T ievp443ply_idx_1 ;
uint32_T kfmilwvdgo_idx_0 ; uint32_T kfmilwvdgo_idx_1 ; uint32_T
khukbzvgdj_idx_0 ; uint32_T khukbzvgdj_idx_1 ; uint32_T kiombdthr4 ; uint32_T
lco5i2tcb1 ; uint32_T m04ebe1zz2 ; uint32_T mpp40chq4u ; uint32_T
mzftiie1yg_idx_0 ; uint32_T mzftiie1yg_idx_1 ; uint32_T n00enf32nh ; uint32_T
n5yhkyeg5n_idx_0 ; uint32_T n5yhkyeg5n_idx_1 ; uint32_T ogpett5jn1 ; uint32_T
pkmvhntapc_idx_0 ; uint32_T pkmvhntapc_idx_1 ; char_T * sErr ; int8_T e_data
[ 5 ] ; int8_T f_data [ 5 ] ; int8_T g_data [ 5 ] ; int8_T h_data [ 5 ] ;
int8_T e_data_p [ 4 ] ; int8_T f_data_p [ 4 ] ; int8_T g_data_p [ 4 ] ;
int8_T h_data_p [ 4 ] ; int8_T f ; uint8_T y [ 8 ] ; uint8_T b_y [ 4 ] ;
boolean_T kprswhjtou [ 9 ] ; boolean_T c [ 5 ] ; boolean_T i_free [ 5 ] ;
boolean_T sol_pref_data [ 5 ] ; boolean_T frac_data [ 4 ] ; boolean_T
i_free_p [ 4 ] ; boolean_T b_idx_0 ; boolean_T b_idx_1 ; boolean_T b_idx_2 ;
boolean_T b_idx_3 ; boolean_T buu2icvrlx ; boolean_T c_idx_0 ; boolean_T
c_idx_1 ; boolean_T c_idx_2 ; ZCEventType zcEvent ; static const uint8_T b [
5 ] = { 86U , 69U , 72U , 88U , 48U } ; static const uint8_T b_p [ 5 ] = {
68U , 82U , 69U , 70U , 48U } ; int32_T A_free_size [ 2 ] ; int32_T
A_free_size_e [ 2 ] ; int32_T A_free_size_i [ 2 ] ; int32_T A_free_size_p [ 2
] ; int32_T e_size_idx_0 ; int32_T exitg1 ; int32_T frac_size ; int32_T
p_free_size ; int32_T sol_pref_size ; boolean_T exitg2 ; srClearBC ( rtDW .
ail2sagdmg ) ; srClearBC ( rtDW . cz2051lnszn . mn1t1xifkc ) ; srClearBC (
rtDW . cm0yj40hhfp . ik1h4vnwti ) ; srClearBC ( rtDW . cm0yj40hhfp .
gkzhayocy3 ) ; srClearBC ( rtDW . cm0yj40hhfp . fn2ws0qfrh0 . cfq0b3accy ) ;
srClearBC ( rtDW . cm0yj40hhfp . g1l24xvjvk ) ; srClearBC ( rtDW .
biiojft2vbl . o33bpxl4on ) ; srClearBC ( rtDW . biiojft2vbl . kh3r3fv0yw ) ;
srClearBC ( rtDW . biiojft2vbl . oppfisosoh ) ; srClearBC ( rtDW .
ctbmhlk4scc . dzsm3cj0kly . eihhgub2fg ) ; srClearBC ( rtDW . ctbmhlk4scc .
iyuu340oslz . ncgtkhktc1 ) ; srClearBC ( rtDW . ctbmhlk4scc . gpjpxfvvnp ) ;
srClearBC ( rtDW . ctbmhlk4scc . dhyklihgewe . jjqjeeukne ) ; srClearBC (
rtDW . ctbmhlk4scc . avztlaubnav . ikkalmwo4a ) ; srClearBC ( rtDW .
ctbmhlk4scc . bb4awxjtrl ) ; srClearBC ( rtDW . ctbmhlk4scc . e1ojz4whx1 ) ;
srClearBC ( rtDW . ae5y3r3gcn ) ; srClearBC ( rtDW . ixmz3u3uqw ) ; srClearBC
( rtDW . l4pkohbzxl ) ; srClearBC ( rtDW . iw455stvt1 ) ; srClearBC ( rtDW .
anhm4dpp2l ) ; srClearBC ( rtDW . cfvgbkovvu ) ; rtB . evtlmv3rtj [ 0 ] = rtX
. cqs5hdvfch [ 0 ] ; rtB . evtlmv3rtj [ 1 ] = rtX . cqs5hdvfch [ 1 ] ; rtB .
evtlmv3rtj [ 2 ] = rtX . cqs5hdvfch [ 2 ] ; j2olvplitn_idx_0 = ( rtB .
evtlmv3rtj [ 0 ] * rtB . jurla4fp4a - rtB . evtlmv3rtj [ 1 ] * rtB .
djshdafk4a ) * rtB . hc3pucpzoc * 57.295779513082323 + rtB . l1dfj2jhio ; if
( muDoubleScalarAbs ( j2olvplitn_idx_0 ) > rtP .
CompareToConstant_const_i014zkpdcc ) { j2olvplitn_idx_0 = muDoubleScalarMod (
j2olvplitn_idx_0 + rtP . Bias_Bias_jjp2hxzsy1 , rtP .
Constant2_Value_dnaxpvvz45 ) + rtP . Bias1_Bias_jgjixhvhbb ; } lir1dfa45c =
muDoubleScalarAbs ( j2olvplitn_idx_0 ) ; if ( lir1dfa45c > rtP .
CompareToConstant_const ) { j2olvplitn_idx_0 = ( ( lir1dfa45c + rtP .
Bias_Bias_ofm1vviw0q ) * rtP . Gain_Gain_pu50nbciii + rtP .
Bias1_Bias_g5kvvjzbv3 ) * muDoubleScalarSign ( j2olvplitn_idx_0 ) ;
m00opiy3yc_idx_0 = rtP . Constant_Value_grffgcb3uj ; } else {
m00opiy3yc_idx_0 = rtP . Constant1_Value_ep5qwhnxw4 ; } lir1dfa45c = ( ( rtB
. evtlmv3rtj [ 0 ] * rtB . djshdafk4a + rtB . evtlmv3rtj [ 1 ] * rtB .
jurla4fp4a ) * rtB . h1pryicb3f * 57.295779513082323 + rtB . l0khcdm5vj ) +
m00opiy3yc_idx_0 ; if ( muDoubleScalarAbs ( lir1dfa45c ) > rtP .
CompareToConstant_const_jqmuxowg3j ) { lir1dfa45c = muDoubleScalarMod (
lir1dfa45c + rtP . Bias_Bias_gvhsf5vuyl , rtP . Constant2_Value_euehonucuw )
+ rtP . Bias1_Bias_gvvhyuyzsh ; } ga0emsz5x4 [ 0 ] = j2olvplitn_idx_0 ;
ga0emsz5x4 [ 1 ] = lir1dfa45c ; ga0emsz5x4 [ 2 ] = - rtB . evtlmv3rtj [ 2 ] -
rtB . evtlmv3rtj [ 2 ] ; rtB . gkiqijsiwi [ 0 ] = rtX . cqtafeeuey [ 0 ] ;
rtB . gkiqijsiwi [ 1 ] = rtX . cqtafeeuey [ 1 ] ; rtB . gkiqijsiwi [ 2 ] =
rtX . cqtafeeuey [ 2 ] ; m00opiy3yc_idx_0 = rtB . gkiqijsiwi [ 2 ] ;
m00opiy3yc_idx_1 = rtB . gkiqijsiwi [ 1 ] ; m00opiy3yc_idx_2 = rtB .
gkiqijsiwi [ 0 ] ; g0uuf55mpg [ 0 ] = ( real32_T ) ( rtP .
Gain_Gain_mszzowmsuk * rtB . gkiqijsiwi [ 2 ] ) ; g0uuf55mpg [ 1 ] = (
real32_T ) ( rtP . Gain_Gain_mszzowmsuk * rtB . gkiqijsiwi [ 1 ] ) ;
g0uuf55mpg [ 2 ] = ( real32_T ) ( rtP . Gain_Gain_mszzowmsuk * rtB .
gkiqijsiwi [ 0 ] ) ; for ( i = 0 ; i < 45 ; i ++ ) { rtB . clwiqfxuxg [ i ] =
0U ; } for ( i_p = 0 ; i_p < 5 ; i_p ++ ) { rtB . clwiqfxuxg [ i_p ] = b [
i_p ] ; } memcpy ( ( void * ) & y [ 0 ] , ( void * ) & ga0emsz5x4 [ 0 ] , (
uint32_T ) ( ( size_t ) 8 * sizeof ( uint8_T ) ) ) ; for ( i_p = 0 ; i_p < 8
; i_p ++ ) { rtB . clwiqfxuxg [ i_p + 9 ] = y [ i_p ] ; } memcpy ( ( void * )
& y [ 0 ] , ( void * ) & ga0emsz5x4 [ 1 ] , ( uint32_T ) ( ( size_t ) 8 *
sizeof ( uint8_T ) ) ) ; for ( i_p = 0 ; i_p < 8 ; i_p ++ ) { rtB .
clwiqfxuxg [ i_p + 17 ] = y [ i_p ] ; } memcpy ( ( void * ) & y [ 0 ] , (
void * ) & ga0emsz5x4 [ 2 ] , ( uint32_T ) ( ( size_t ) 8 * sizeof ( uint8_T
) ) ) ; for ( i_p = 0 ; i_p < 8 ; i_p ++ ) { rtB . clwiqfxuxg [ i_p + 25 ] =
y [ i_p ] ; } memcpy ( ( void * ) & b_y [ 0 ] , ( void * ) & g0uuf55mpg [ 0 ]
, ( uint32_T ) ( ( size_t ) 4 * sizeof ( uint8_T ) ) ) ; rtB . clwiqfxuxg [
33 ] = b_y [ 0 ] ; rtB . clwiqfxuxg [ 34 ] = b_y [ 1 ] ; rtB . clwiqfxuxg [
35 ] = b_y [ 2 ] ; rtB . clwiqfxuxg [ 36 ] = b_y [ 3 ] ; memcpy ( ( void * )
& b_y [ 0 ] , ( void * ) & g0uuf55mpg [ 1 ] , ( uint32_T ) ( ( size_t ) 4 *
sizeof ( uint8_T ) ) ) ; rtB . clwiqfxuxg [ 37 ] = b_y [ 0 ] ; rtB .
clwiqfxuxg [ 38 ] = b_y [ 1 ] ; rtB . clwiqfxuxg [ 39 ] = b_y [ 2 ] ; rtB .
clwiqfxuxg [ 40 ] = b_y [ 3 ] ; memcpy ( ( void * ) & b_y [ 0 ] , ( void * )
& g0uuf55mpg [ 2 ] , ( uint32_T ) ( ( size_t ) 4 * sizeof ( uint8_T ) ) ) ;
rtB . clwiqfxuxg [ 41 ] = b_y [ 0 ] ; rtB . clwiqfxuxg [ 42 ] = b_y [ 1 ] ;
rtB . clwiqfxuxg [ 43 ] = b_y [ 2 ] ; rtB . clwiqfxuxg [ 44 ] = b_y [ 3 ] ;
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { SimStruct * rts = ssGetSFunction (
rtS , 1 ) ; { static const char * blockSIDForSFcnLoader = "UNIFIER:31022" ;
sfcnLoader_setCurrentSFcnBlockSID ( blockSIDForSFcnLoader ) ; void ( *
sfcnMethodPtr ) ( SimStruct * , int ) = rts -> modelMethods . sFcn .
mdlOutputs . level2 ; sfcnLoader_separateComplexHandler_withTID ( rts ,
sfcnMethodPtr , ( 0 <= 1 ) && gbl_raccel_tid01eq ? 0 : 0 ) ; } } rtB .
ekmklzxfox [ 0 ] = look1_plinlcapw ( rtB . j3t4wyjy41 [ 0 ] , rtP .
uDLookupTable_bp01Data_d0gp2j3v2v , rtP . uDLookupTable_tableData_f3xaozgr2b
, & rtDW . iinforci3b [ 0 ] , 2U ) ; rtB . ekmklzxfox [ 1 ] = look1_plinlcapw
( rtB . j3t4wyjy41 [ 1 ] , rtP . uDLookupTable_bp01Data_d0gp2j3v2v , rtP .
uDLookupTable_tableData_f3xaozgr2b , & rtDW . iinforci3b [ 1 ] , 2U ) ; rtB .
ekmklzxfox [ 2 ] = look1_plinlcapw ( rtB . j3t4wyjy41 [ 2 ] , rtP .
uDLookupTable_bp01Data_d0gp2j3v2v , rtP . uDLookupTable_tableData_f3xaozgr2b
, & rtDW . iinforci3b [ 2 ] , 2U ) ; rtB . ekmklzxfox [ 3 ] = look1_plinlcapw
( rtB . j3t4wyjy41 [ 3 ] , rtP . uDLookupTable_bp01Data_d0gp2j3v2v , rtP .
uDLookupTable_tableData_f3xaozgr2b , & rtDW . iinforci3b [ 3 ] , 2U ) ; rtB .
kz552dd3t1 = rtP . Gain_Gain_laazcdnihk * - rtB . ekmklzxfox [ 2 ] + rtP .
Constant_Value_nxyjglhqnl ; } ga0emsz5x4 [ 0 ] = rtX . lowr4jkjer [ 0 ] ; rtB
. cig1ezu0up [ 0 ] = rtX . lowr4jkjer [ 0 ] ; rtB . mkyju0odm1 [ 0 ] = rtX .
jwtmx1crsn [ 0 ] ; ga0emsz5x4 [ 1 ] = rtX . lowr4jkjer [ 1 ] ; rtB .
cig1ezu0up [ 1 ] = rtX . lowr4jkjer [ 1 ] ; rtB . mkyju0odm1 [ 1 ] = rtX .
jwtmx1crsn [ 1 ] ; ga0emsz5x4 [ 2 ] = rtX . lowr4jkjer [ 2 ] ; rtB .
cig1ezu0up [ 2 ] = rtX . lowr4jkjer [ 2 ] ; rtB . mkyju0odm1 [ 2 ] = rtX .
jwtmx1crsn [ 2 ] ; j2olvplitn_idx_0 = ( ssGetT ( rtS ) >= rtP .
DiscreteWindGustModel1_t_0 ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) &&
ssIsMajorTimeStep ( rtS ) ) { if ( ( j2olvplitn_idx_0 != 0.0 ) && ( rtP .
DiscreteWindGustModel1_Gx != 0.0 ) ) { if ( ! rtDW . j1mia3rzbj ) { if (
ssGetTaskTime ( rtS , 1 ) != ssGetTStart ( rtS ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtX . a5x0ow51a0 = rtP
. DistanceintoGustxLimitedtogustlengthd_IC ; rtDW . j1mia3rzbj = true ; } }
else if ( rtDW . j1mia3rzbj ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; rtDW . j1mia3rzbj = false ; } } if ( rtDW . j1mia3rzbj ) { if (
ssIsMajorTimeStep ( rtS ) ) { if ( rtX . a5x0ow51a0 >= rtP .
Distanceintogustx_d_m ) { if ( rtX . a5x0ow51a0 != rtP .
Distanceintogustx_d_m ) { rtX . a5x0ow51a0 = rtP . Distanceintogustx_d_m ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } } else if ( ( rtX .
a5x0ow51a0 <= rtP . DistanceintoGustxLimitedtogustlengthd_LowerSat ) && ( rtX
. a5x0ow51a0 != rtP . DistanceintoGustxLimitedtogustlengthd_LowerSat ) ) {
rtX . a5x0ow51a0 = rtP . DistanceintoGustxLimitedtogustlengthd_LowerSat ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } rtB . k0hmnb300u = rtX
. a5x0ow51a0 ; srUpdateBC ( rtDW . ail2sagdmg ) ; } else if ( rtX .
a5x0ow51a0 >= rtP . Distanceintogustx_d_m ) { rtB . k0hmnb300u = rtP .
Distanceintogustx_d_m ; } else if ( rtX . a5x0ow51a0 <= rtP .
DistanceintoGustxLimitedtogustlengthd_LowerSat ) { rtB . k0hmnb300u = rtP .
DistanceintoGustxLimitedtogustlengthd_LowerSat ; } else { rtB . k0hmnb300u =
rtX . a5x0ow51a0 ; } } rtB . pqpmugtclc = ( ( j2olvplitn_idx_0 != 0.0 ) && (
rtP . DiscreteWindGustModel1_Gy != 0.0 ) ) ; cz2051lnsz ( rtS , rtB .
pqpmugtclc , rtP . Distanceintogusty_d_m , & rtB . cz2051lnszn , & rtDW .
cz2051lnszn , & rtP . cz2051lnszn , & rtX . cz2051lnszn ) ; rtB . cykmvychnx
= ( ( j2olvplitn_idx_0 != 0.0 ) && ( rtP . DiscreteWindGustModel1_Gz != 0.0 )
) ; cz2051lnsz ( rtS , rtB . cykmvychnx , rtP . Distanceintogustz_d_m , & rtB
. lld2mvqphv , & rtDW . lld2mvqphv , & rtP . lld2mvqphv , & rtX . lld2mvqphv
) ; rtB . mmm5gfrw0p [ 0 ] = ( rtP . u_Value - muDoubleScalarCos (
3.1415926535897931 / rtP . DiscreteWindGustModel1_d_m [ 0 ] * rtB .
k0hmnb300u ) ) * ( rtP . DiscreteWindGustModel1_v_m [ 0 ] / 2.0 ) + rtB .
cig1ezu0up [ 0 ] ; rtB . mmm5gfrw0p [ 1 ] = ( rtP . u_Value -
muDoubleScalarCos ( 3.1415926535897931 / rtP . DiscreteWindGustModel1_d_m [ 1
] * rtB . cz2051lnszn . p1ejoedsxt ) ) * ( rtP . DiscreteWindGustModel1_v_m [
1 ] / 2.0 ) + rtB . cig1ezu0up [ 1 ] ; rtB . mmm5gfrw0p [ 2 ] = ( rtP .
u_Value - muDoubleScalarCos ( 3.1415926535897931 / rtP .
DiscreteWindGustModel1_d_m [ 2 ] * rtB . lld2mvqphv . p1ejoedsxt ) ) * ( rtP
. DiscreteWindGustModel1_v_m [ 2 ] / 2.0 ) + rtB . cig1ezu0up [ 2 ] ; if (
rtP . ManualSwitch_CurrentSetting == 1 ) { lclwc4tmbx = rtB . cig1ezu0up [ 0
] ; } else { lclwc4tmbx = rtB . mmm5gfrw0p [ 0 ] ; } j2olvplitn_idx_0 =
lclwc4tmbx * lclwc4tmbx ; cuwl4zp4yw [ 0 ] = lclwc4tmbx ; if ( rtP .
ManualSwitch_CurrentSetting == 1 ) { lclwc4tmbx = rtB . cig1ezu0up [ 1 ] ; }
else { lclwc4tmbx = rtB . mmm5gfrw0p [ 1 ] ; } j2olvplitn_idx_0 += lclwc4tmbx
* lclwc4tmbx ; cuwl4zp4yw [ 1 ] = lclwc4tmbx ; if ( rtP .
ManualSwitch_CurrentSetting == 1 ) { lclwc4tmbx = rtB . cig1ezu0up [ 2 ] ; }
else { lclwc4tmbx = rtB . mmm5gfrw0p [ 2 ] ; } j2olvplitn_idx_0 += lclwc4tmbx
* lclwc4tmbx ; rtB . beu34wglui = muDoubleScalarSqrt ( j2olvplitn_idx_0 ) +
rtP . Constant1_Value_cc4dtblpvh ; rtB . cuqqqrtko4 = muDoubleScalarAtan2 (
lclwc4tmbx , cuwl4zp4yw [ 0 ] ) ; sb = cuwl4zp4yw [ 1 ] / rtB . beu34wglui ;
if ( sb > 1.0 ) { sb = 1.0 ; } else if ( sb < - 1.0 ) { sb = - 1.0 ; } rtB .
mxf3xuhmmg = muDoubleScalarAsin ( sb ) ; if ( ( real32_T ) - rtB . evtlmv3rtj
[ 2 ] > rtP . Limitaltitudetotroposhere_UpperSat ) { jtoldnh5tw = rtP .
Limitaltitudetotroposhere_UpperSat ; } else if ( ( real32_T ) - rtB .
evtlmv3rtj [ 2 ] < rtP . Limitaltitudetotroposhere_LowerSat ) { jtoldnh5tw =
rtP . Limitaltitudetotroposhere_LowerSat ; } else { jtoldnh5tw = ( real32_T )
- rtB . evtlmv3rtj [ 2 ] ; } f5qwewprly = rtP . SeaLevelTemperature_Value -
rtP . LapseRate_Gain * jtoldnh5tw ; p5e3xkr1y0 = rtP . uT0_Gain * f5qwewprly
; lrpn1bvaje = rtP . AltitudeofTroposphere_Value - ( real32_T ) - rtB .
evtlmv3rtj [ 2 ] ; if ( ( p5e3xkr1y0 < 0.0F ) && ( rtP .
Constant_Value_hsnr00vu2d > muSingleScalarFloor ( rtP .
Constant_Value_hsnr00vu2d ) ) ) { bdvkktmal5_idx_0 = - muSingleScalarPower (
- p5e3xkr1y0 , rtP . Constant_Value_hsnr00vu2d ) ; } else { bdvkktmal5_idx_0
= muSingleScalarPower ( p5e3xkr1y0 , rtP . Constant_Value_hsnr00vu2d ) ; } if
( lrpn1bvaje > rtP . LimitaltitudetoStratosphere_UpperSat ) { lrpn1bvaje =
rtP . LimitaltitudetoStratosphere_UpperSat ; } else if ( lrpn1bvaje < rtP .
LimitaltitudetoStratosphere_LowerSat ) { lrpn1bvaje = rtP .
LimitaltitudetoStratosphere_LowerSat ; } rtB . lhopa3gq4f = bdvkktmal5_idx_0
/ p5e3xkr1y0 * rtP . rho0_Gain * muSingleScalarExp ( 1.0F / f5qwewprly * (
rtP . gR_Gain * lrpn1bvaje ) ) ; rtB . m1kth42sm5 = muSingleScalarSqrt ( rtP
. Gain_Gain_ca4phiubtq * rtB . lhopa3gq4f ) * rtB . beu34wglui ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { lsurenbes1 = rtDW . dlxximuhuf ; jbp40v4j45
= rtDW . khpyhk0eyn ; bcwof20ssn = look1_plinlxpw ( rtB . m1kth42sm5 , rtP .
dp_LIMITS . gamma . V , rtP . dp_LIMITS . gamma . gamma_min , & rtDW .
d2orna0nbx , 220U ) ; e04f1erd1u = rtDW . jbwstjuywp ; } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { rtB . mntz4fuuof = ( rtDW . g5vbnuh5ul < rtP .
PulseGenerator_Duty ) && ( rtDW . g5vbnuh5ul >= 0 ) ? rtP .
PulseGenerator_Amp : 0.0 ; if ( rtDW . g5vbnuh5ul >= rtP .
PulseGenerator_Period - 1.0 ) { rtDW . g5vbnuh5ul = 0 ; } else { rtDW .
g5vbnuh5ul ++ ; } rtB . bg2owaubzr = ( rtDW . bgxy0tbgby < rtP .
PulseGenerator1_Duty ) && ( rtDW . bgxy0tbgby >= 0 ) ? rtP .
PulseGenerator1_Amp : 0.0 ; if ( rtDW . bgxy0tbgby >= rtP .
PulseGenerator1_Period - 1.0 ) { rtDW . bgxy0tbgby = 0 ; } else { rtDW .
bgxy0tbgby ++ ; } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { dh3zefosvy = rtB .
bg2owaubzr - rtDW . pqowklbvyf ; if ( dh3zefosvy > rtP .
RateLimiter_RisingLim * k3oqqzw2a3 ) { j0r0arniji = rtP .
RateLimiter_RisingLim * k3oqqzw2a3 + rtDW . pqowklbvyf ; } else if (
dh3zefosvy < rtP . RateLimiter_FallingLim * k3oqqzw2a3 ) { j0r0arniji = rtP .
RateLimiter_FallingLim * k3oqqzw2a3 + rtDW . pqowklbvyf ; } else { j0r0arniji
= rtB . bg2owaubzr ; } rtDW . pqowklbvyf = j0r0arniji ; j2olvplitn_idx_0 =
rtDW . j2jiqbkm41 ; if ( ssGetTaskTime ( rtS , 2 ) < rtP . Step2_Time ) {
lir1dfa45c = rtP . Step2_Y0 ; } else { lir1dfa45c = rtP . Step2_YFinal ; }
dh3zefosvy = lir1dfa45c - rtDW . kz1ulbsboy ; if ( dh3zefosvy > rtP .
RateLimiter2_RisingLim * k3oqqzw2a3 ) { lir1dfa45c = rtP .
RateLimiter2_RisingLim * k3oqqzw2a3 + rtDW . kz1ulbsboy ; } else if (
dh3zefosvy < rtP . RateLimiter2_FallingLim * k3oqqzw2a3 ) { lir1dfa45c = rtP
. RateLimiter2_FallingLim * k3oqqzw2a3 + rtDW . kz1ulbsboy ; } rtDW .
kz1ulbsboy = lir1dfa45c ; if ( ssGetTaskTime ( rtS , 2 ) < rtP . Step1_Time )
{ cwdb3qacqr = rtP . Step1_Y0 ; } else { cwdb3qacqr = rtP . Step1_YFinal ; }
dh3zefosvy = cwdb3qacqr - rtDW . onfzjh24jl ; if ( dh3zefosvy > rtP .
RateLimiter1_RisingLim * k3oqqzw2a3 ) { dh3zefosvy = rtP .
RateLimiter1_RisingLim * k3oqqzw2a3 + rtDW . onfzjh24jl ; } else if (
dh3zefosvy < rtP . RateLimiter1_FallingLim * k3oqqzw2a3 ) { dh3zefosvy = rtP
. RateLimiter1_FallingLim * k3oqqzw2a3 + rtDW . onfzjh24jl ; } else {
dh3zefosvy = cwdb3qacqr ; } rtDW . onfzjh24jl = dh3zefosvy ; if ( rtP . fcc .
use_joystick > rtP . Switch_Threshold_lf3w3pll1s ) { inoflfxzl4 [ 0 ] =
lsurenbes1 ; if ( jbp40v4j45 > rtP . Constant_Value_kvszop02ca ) { inoflfxzl4
[ 1 ] = rtP . Constant_Value_kvszop02ca ; } else if ( jbp40v4j45 < bcwof20ssn
) { inoflfxzl4 [ 1 ] = bcwof20ssn ; } else { inoflfxzl4 [ 1 ] = jbp40v4j45 ;
} inoflfxzl4 [ 2 ] = e04f1erd1u ; } else { switch ( ( int32_T ) rtP .
Constant3_Value ) { case 1 : e04f1erd1u = j0r0arniji * j0r0arniji *
j0r0arniji ; lir1dfa45c = j0r0arniji * e04f1erd1u ; inoflfxzl4 [ 0 ] = rtP .
Constant4_Value ; inoflfxzl4 [ 1 ] = rtB . mntz4fuuof ; sb = ( j0r0arniji *
lir1dfa45c * rtP . Gain_Gain + - ( rtP . Gain1_Gain * lir1dfa45c ) ) + rtP .
Gain2_Gain * e04f1erd1u ; if ( sb > rtP . Saturation_UpperSat ) { sb = rtP .
Saturation_UpperSat ; } else if ( sb < rtP . Saturation_LowerSat ) { sb = rtP
. Saturation_LowerSat ; } inoflfxzl4 [ 2 ] = rtP . Gain_Gain_f32v5leltt * sb
; break ; case 2 : inoflfxzl4 [ 0 ] = rtP . Constant_Value + rtDW .
j2jiqbkm41 ; inoflfxzl4 [ 1 ] = rtP . Constant2_Value ; inoflfxzl4 [ 2 ] =
rtP . Constant6_Value ; break ; case 3 : e04f1erd1u = lir1dfa45c * lir1dfa45c
* lir1dfa45c ; j0r0arniji = lir1dfa45c * e04f1erd1u ; cwdb3qacqr = dh3zefosvy
* dh3zefosvy * dh3zefosvy ; hy1xz2ukcn = dh3zefosvy * cwdb3qacqr ; sb = (
lir1dfa45c * j0r0arniji * rtP . Gain_Gain_o3tk35ygzf + - ( rtP .
Gain1_Gain_hxrfjvgcmd * j0r0arniji ) ) + rtP . Gain2_Gain_dv1pkpkvrg *
e04f1erd1u ; e04f1erd1u = ( dh3zefosvy * hy1xz2ukcn * rtP .
Gain_Gain_crbtxkgddp + - ( rtP . Gain1_Gain_oje0qlrqnp * hy1xz2ukcn ) ) + rtP
. Gain2_Gain_b5b1o1w5nk * cwdb3qacqr ; if ( ssGetTaskTime ( rtS , 2 ) < rtP .
Step3_Time ) { inoflfxzl4 [ 0 ] = rtP . Step3_Y0 ; } else { inoflfxzl4 [ 0 ]
= rtP . Step3_YFinal ; } if ( sb > rtP . Saturation_UpperSat_djck4p2mlg ) {
sb = rtP . Saturation_UpperSat_djck4p2mlg ; } else if ( sb < rtP .
Saturation_LowerSat_bnfa2lwlci ) { sb = rtP . Saturation_LowerSat_bnfa2lwlci
; } inoflfxzl4 [ 1 ] = rtP . Gain2_Gain_ntolkeaagi * sb ; if ( e04f1erd1u >
rtP . Saturation_UpperSat_iwe2jzkhl2 ) { e04f1erd1u = rtP .
Saturation_UpperSat_iwe2jzkhl2 ; } else if ( e04f1erd1u < rtP .
Saturation_LowerSat_ndiu3fdaia ) { e04f1erd1u = rtP .
Saturation_LowerSat_ndiu3fdaia ; } inoflfxzl4 [ 2 ] = rtP .
Gain1_Gain_m44icxwd1t * e04f1erd1u ; break ; case 4 : if ( ssGetTaskTime (
rtS , 2 ) < rtP . Step4_Time ) { inoflfxzl4 [ 0 ] = rtP . Step4_Y0 ; } else {
inoflfxzl4 [ 0 ] = rtP . Step4_YFinal ; } inoflfxzl4 [ 1 ] = rtP .
Constant1_Value ; inoflfxzl4 [ 2 ] = rtP . Euler0 [ 2 ] ; break ; case 5 : if
( ssGetTaskTime ( rtS , 2 ) < rtP . Step_Time ) { inoflfxzl4 [ 0 ] = rtP .
Step_Y0 ; } else { inoflfxzl4 [ 0 ] = rtP . Step_YFinal ; } inoflfxzl4 [ 1 ]
= rtP . Constant9_Value ; inoflfxzl4 [ 2 ] = rtP . Constant9_Value ; break ;
default : inoflfxzl4 [ 0 ] = 0.0 ; inoflfxzl4 [ 1 ] = 0.0 ; inoflfxzl4 [ 2 ]
= 0.0 ; break ; } } rtB . oufaf5ray3 [ 0 ] = rtP . Gain_Gain_ovuwo4ghe3 *
inoflfxzl4 [ 0 ] ; rtB . oufaf5ray3 [ 1 ] = rtP . Gain_Gain_ovuwo4ghe3 *
inoflfxzl4 [ 1 ] ; rtB . oufaf5ray3 [ 2 ] = rtP . Gain_Gain_ovuwo4ghe3 *
inoflfxzl4 [ 2 ] ; rtB . pjuvuqmzot = rtP . Gain1_Gain_ewek2k23wn * rtB .
oufaf5ray3 [ 0 ] ; muDoubleScalarSinCos ( rtB . gkiqijsiwi [ 2 ] , &
ebzekdphab [ 0 ] , & as2exlo2n4 [ 0 ] ) ; muDoubleScalarSinCos ( rtB .
gkiqijsiwi [ 1 ] , & ebzekdphab [ 1 ] , & as2exlo2n4 [ 1 ] ) ;
muDoubleScalarSinCos ( rtB . gkiqijsiwi [ 0 ] , & ebzekdphab [ 2 ] , &
as2exlo2n4 [ 2 ] ) ; pciztti2mf [ 0 ] = as2exlo2n4 [ 0 ] * as2exlo2n4 [ 1 ] ;
pciztti2mf [ 1 ] = ebzekdphab [ 1 ] * ebzekdphab [ 2 ] * as2exlo2n4 [ 0 ] -
ebzekdphab [ 0 ] * as2exlo2n4 [ 2 ] ; pciztti2mf [ 2 ] = ebzekdphab [ 1 ] *
as2exlo2n4 [ 2 ] * as2exlo2n4 [ 0 ] + ebzekdphab [ 0 ] * ebzekdphab [ 2 ] ;
pciztti2mf [ 3 ] = ebzekdphab [ 0 ] * as2exlo2n4 [ 1 ] ; pciztti2mf [ 4 ] =
ebzekdphab [ 1 ] * ebzekdphab [ 2 ] * ebzekdphab [ 0 ] + as2exlo2n4 [ 0 ] *
as2exlo2n4 [ 2 ] ; pciztti2mf [ 5 ] = ebzekdphab [ 1 ] * as2exlo2n4 [ 2 ] *
ebzekdphab [ 0 ] - as2exlo2n4 [ 0 ] * ebzekdphab [ 2 ] ; pciztti2mf [ 6 ] = -
ebzekdphab [ 1 ] ; pciztti2mf [ 7 ] = as2exlo2n4 [ 1 ] * ebzekdphab [ 2 ] ;
pciztti2mf [ 8 ] = as2exlo2n4 [ 1 ] * as2exlo2n4 [ 2 ] ; for ( i_p = 0 ; i_p
< 3 ; i_p ++ ) { p1t5syw2cc [ i_p ] = ( pciztti2mf [ 3 * i_p + 1 ] * rtB .
cig1ezu0up [ 1 ] + pciztti2mf [ 3 * i_p ] * rtB . cig1ezu0up [ 0 ] ) +
pciztti2mf [ 3 * i_p + 2 ] * rtB . cig1ezu0up [ 2 ] ; } hfwwqokbwo =
muDoubleScalarAtan2 ( rtP . Gain1_Gain_p3ucwpvbez * p1t5syw2cc [ 2 ] ,
muDoubleScalarHypot ( p1t5syw2cc [ 1 ] , p1t5syw2cc [ 0 ] ) ) ; lir1dfa45c =
muDoubleScalarAtan2 ( p1t5syw2cc [ 1 ] , p1t5syw2cc [ 0 ] ) ; rtB .
hzmnbktuyg [ 0 ] = rtP . Gain_Gain_eer1z3pifp * rtB . m1kth42sm5 ; rtB .
hzmnbktuyg [ 1 ] = rtP . Gain_Gain_eer1z3pifp * hfwwqokbwo ; rtB . hzmnbktuyg
[ 2 ] = rtP . Gain_Gain_eer1z3pifp * lir1dfa45c ; rtB . gope1mhpvr = rtP .
Gain1_Gain_jzr4r2cnao * rtB . hzmnbktuyg [ 0 ] ; rtB . ftef13qeww =
look1_plinlxpw ( rtB . kz552dd3t1 , rtP . uDLookupTable_bp01Data , rtP .
uDLookupTable_tableData , & rtDW . ltawfyrv1z , 1U ) ; rtB . mwjui1jwdj =
look1_plinlxpw ( hfwwqokbwo , rtP . dp_LIMITS . VREF . gamma , rtP .
dp_LIMITS . VREF . V , & rtDW . k3eoy0kyly , 18U ) ; da3saky4rw = rtP .
DiscreteTransferFcn_NumCoef * rtDW . oiqpesodi3 ; rtB . plcqk00upv = rtP .
DiscreteTransferFcn_NumCoef_iem3nbx3ml * rtDW . fd5b54bou3 ; as2exlo2n4 [ 0 ]
= rtP . fcc . path_kc * inoflfxzl4 [ 0 ] ; as2exlo2n4 [ 1 ] = rtP . fcc .
path_kc * inoflfxzl4 [ 1 ] ; as2exlo2n4 [ 2 ] = rtP . fcc . path_kc *
inoflfxzl4 [ 2 ] ; if ( rtDW . fshwisxlge != 0 ) { if ( rtP . fcc .
path_int0_from_command [ 0 ] > rtP . Switch_Threshold_iy2jgixny3 ) { rtDW .
bwoaafu1ol [ 0 ] = as2exlo2n4 [ 0 ] ; } else { rtDW . bwoaafu1ol [ 0 ] = rtP
. fcc . path_int0 [ 0 ] ; } if ( rtP . fcc . path_int0_from_command [ 1 ] >
rtP . Switch_Threshold_iy2jgixny3 ) { rtDW . bwoaafu1ol [ 1 ] = as2exlo2n4 [
1 ] ; } else { rtDW . bwoaafu1ol [ 1 ] = rtP . fcc . path_int0 [ 1 ] ; } if (
rtP . fcc . path_int0_from_command [ 2 ] > rtP . Switch_Threshold_iy2jgixny3
) { rtDW . bwoaafu1ol [ 2 ] = as2exlo2n4 [ 2 ] ; } else { rtDW . bwoaafu1ol [
2 ] = rtP . fcc . path_int0 [ 2 ] ; } } buu2icvrlx = ( rtP . fcc .
use_joystick > rtP . Switch1_Threshold ) ; kld3j4mgfs_idx_0 = ( ( as2exlo2n4
[ 0 ] + rtDW . bwoaafu1ol [ 0 ] ) - rtB . m1kth42sm5 ) * rtP . fcc . path_kb
[ 0 ] + rtP . fcc . path_kf * rtP . Constant_Value_gd1chxljgp ; if (
kld3j4mgfs_idx_0 > rtP . fcc . path_y_ref_dot_ulim [ 0 ] ) { ebzekdphab [ 0 ]
= rtP . fcc . path_y_ref_dot_ulim [ 0 ] ; } else if ( kld3j4mgfs_idx_0 < rtP
. fcc . path_y_ref_dot_llim [ 0 ] ) { ebzekdphab [ 0 ] = rtP . fcc .
path_y_ref_dot_llim [ 0 ] ; } else { ebzekdphab [ 0 ] = kld3j4mgfs_idx_0 ; }
as2exlo2n4 [ 0 ] = kld3j4mgfs_idx_0 ; if ( buu2icvrlx ) { g52k1xdouv_idx_1 =
da3saky4rw ; } else { g52k1xdouv_idx_1 = rtP . Constant_Value_gd1chxljgp ; }
kld3j4mgfs_idx_0 = ( ( as2exlo2n4 [ 1 ] + rtDW . bwoaafu1ol [ 1 ] ) -
hfwwqokbwo ) * rtP . fcc . path_kb [ 1 ] + rtP . fcc . path_kf *
g52k1xdouv_idx_1 ; if ( kld3j4mgfs_idx_0 > rtP . fcc . path_y_ref_dot_ulim [
1 ] ) { ebzekdphab [ 1 ] = rtP . fcc . path_y_ref_dot_ulim [ 1 ] ; } else if
( kld3j4mgfs_idx_0 < rtP . fcc . path_y_ref_dot_llim [ 1 ] ) { ebzekdphab [ 1
] = rtP . fcc . path_y_ref_dot_llim [ 1 ] ; } else { ebzekdphab [ 1 ] =
kld3j4mgfs_idx_0 ; } as2exlo2n4 [ 1 ] = kld3j4mgfs_idx_0 ; if ( buu2icvrlx )
{ g52k1xdouv_idx_1 = rtB . plcqk00upv ; } else { g52k1xdouv_idx_1 = rtP .
Constant_Value_gd1chxljgp ; } kld3j4mgfs_idx_0 = ( ( as2exlo2n4 [ 2 ] + rtDW
. bwoaafu1ol [ 2 ] ) - lir1dfa45c ) * rtP . fcc . path_kb [ 2 ] + rtP . fcc .
path_kf * g52k1xdouv_idx_1 ; if ( kld3j4mgfs_idx_0 > rtP . fcc .
path_y_ref_dot_ulim [ 2 ] ) { ebzekdphab [ 2 ] = rtP . fcc .
path_y_ref_dot_ulim [ 2 ] ; } else if ( kld3j4mgfs_idx_0 < rtP . fcc .
path_y_ref_dot_llim [ 2 ] ) { ebzekdphab [ 2 ] = rtP . fcc .
path_y_ref_dot_llim [ 2 ] ; } else { ebzekdphab [ 2 ] = kld3j4mgfs_idx_0 ; }
muDoubleScalarSinCos ( rtB . cuqqqrtko4 , & e04f1erd1u , & j0r0arniji ) ;
muDoubleScalarSinCos ( rtB . mxf3xuhmmg , & dh3zefosvy , & cwdb3qacqr ) ;
mvrmkcanel [ 0 ] = j0r0arniji * cwdb3qacqr ; mvrmkcanel [ 1 ] = - (
j0r0arniji * dh3zefosvy ) ; mvrmkcanel [ 2 ] = - e04f1erd1u ; mvrmkcanel [ 3
] = dh3zefosvy ; mvrmkcanel [ 4 ] = cwdb3qacqr ; mvrmkcanel [ 5 ] = rtP .
Constant_Value_fo4mw4n31s ; mvrmkcanel [ 6 ] = e04f1erd1u * cwdb3qacqr ;
mvrmkcanel [ 7 ] = - ( e04f1erd1u * dh3zefosvy ) ; mvrmkcanel [ 8 ] =
j0r0arniji ; for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { gkshvepttp [ i_p ] = (
mvrmkcanel [ 3 * i_p + 1 ] * rtP . Constant_Value_dfyr2jwplz + mvrmkcanel [ 3
* i_p ] * rtB . beu34wglui ) + mvrmkcanel [ 3 * i_p + 2 ] * rtP .
Constant_Value_dfyr2jwplz ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { fsgbuyd2yn
[ i_p ] = ( pciztti2mf [ 3 * i_p + 1 ] * gkshvepttp [ 1 ] + pciztti2mf [ 3 *
i_p ] * gkshvepttp [ 0 ] ) + pciztti2mf [ 3 * i_p + 2 ] * gkshvepttp [ 2 ] ;
} muDoubleScalarSinCos ( rtP . Constant10_Value , & agmxf0bpkk [ 0 ] , &
p4xbdqn5oc [ 0 ] ) ; muDoubleScalarSinCos ( muDoubleScalarAtan2 ( rtP .
Gain1_Gain_jj3c3q1r4f * fsgbuyd2yn [ 2 ] , muDoubleScalarHypot ( fsgbuyd2yn [
1 ] , fsgbuyd2yn [ 0 ] ) ) , & agmxf0bpkk [ 1 ] , & p4xbdqn5oc [ 1 ] ) ;
muDoubleScalarSinCos ( muDoubleScalarAtan2 ( fsgbuyd2yn [ 1 ] , fsgbuyd2yn [
0 ] ) , & agmxf0bpkk [ 2 ] , & p4xbdqn5oc [ 2 ] ) ; mvrmkcanel [ 0 ] =
p4xbdqn5oc [ 1 ] * p4xbdqn5oc [ 2 ] ; mvrmkcanel [ 1 ] = agmxf0bpkk [ 0 ] *
p4xbdqn5oc [ 2 ] * agmxf0bpkk [ 1 ] - p4xbdqn5oc [ 0 ] * agmxf0bpkk [ 2 ] ;
mvrmkcanel [ 2 ] = p4xbdqn5oc [ 0 ] * agmxf0bpkk [ 1 ] * p4xbdqn5oc [ 2 ] +
agmxf0bpkk [ 0 ] * agmxf0bpkk [ 2 ] ; mvrmkcanel [ 3 ] = p4xbdqn5oc [ 1 ] *
agmxf0bpkk [ 2 ] ; mvrmkcanel [ 4 ] = agmxf0bpkk [ 0 ] * agmxf0bpkk [ 1 ] *
agmxf0bpkk [ 2 ] + p4xbdqn5oc [ 0 ] * p4xbdqn5oc [ 2 ] ; mvrmkcanel [ 5 ] =
agmxf0bpkk [ 1 ] * agmxf0bpkk [ 2 ] * p4xbdqn5oc [ 0 ] - agmxf0bpkk [ 0 ] *
p4xbdqn5oc [ 2 ] ; mvrmkcanel [ 6 ] = - agmxf0bpkk [ 1 ] ; mvrmkcanel [ 7 ] =
agmxf0bpkk [ 0 ] * p4xbdqn5oc [ 1 ] ; mvrmkcanel [ 8 ] = p4xbdqn5oc [ 0 ] *
p4xbdqn5oc [ 1 ] ; oxomw1ffaj = muDoubleScalarSqrt ( ( rtB . cig1ezu0up [ 0 ]
* rtB . cig1ezu0up [ 0 ] + rtB . cig1ezu0up [ 1 ] * rtB . cig1ezu0up [ 1 ] )
+ rtB . cig1ezu0up [ 2 ] * rtB . cig1ezu0up [ 2 ] ) ; for ( i_p = 0 ; i_p < 3
; i_p ++ ) { for ( i_e = 0 ; i_e < 3 ; i_e ++ ) { mwudvr0dno [ i_p + 3 * i_e
] = 0.0 ; mwudvr0dno [ i_p + 3 * i_e ] += mvrmkcanel [ i_e ] * pciztti2mf [
i_p ] ; mwudvr0dno [ i_p + 3 * i_e ] += mvrmkcanel [ i_e + 3 ] * pciztti2mf [
i_p + 3 ] ; mwudvr0dno [ i_p + 3 * i_e ] += mvrmkcanel [ i_e + 6 ] *
pciztti2mf [ i_p + 6 ] ; } } bdftk3iflv [ 0 ] = rtP . Gain1_Gain_awlrqovurs [
0 ] * mwudvr0dno [ 7 ] ; bdftk3iflv [ 1 ] = rtP . Gain1_Gain_awlrqovurs [ 1 ]
* mwudvr0dno [ 4 ] ; bdftk3iflv [ 2 ] = mwudvr0dno [ 1 ] * rtP .
Gain1_Gain_awlrqovurs [ 2 ] ; bdftk3iflv [ 3 ] = rtP . Gain2_Gain_i0andvnqiz
[ 0 ] * mwudvr0dno [ 2 ] ; bdftk3iflv [ 5 ] = rtP . Gain3_Gain_hzaui4ha2l [ 0
] * mwudvr0dno [ 5 ] ; bdftk3iflv [ 4 ] = mwudvr0dno [ 0 ] * rtP .
Gain2_Gain_i0andvnqiz [ 1 ] ; bdftk3iflv [ 6 ] = rtP . Gain3_Gain_hzaui4ha2l
[ 1 ] * mwudvr0dno [ 8 ] ; if ( ( bdftk3iflv [ 2 ] >= 1.0 ) || ( bdftk3iflv [
2 ] <= - 1.0 ) ) { cm0yj40hhf ( bdftk3iflv , p4xbdqn5oc , & rtDW . i02x2fl5fr
, & rtP . i02x2fl5fr ) ; } else { biiojft2vb ( bdftk3iflv , p4xbdqn5oc , &
rtDW . nbnysw2wtu , & rtP . nbnysw2wtu ) ; } i5y02tnznl_idx_0 = rtP .
Gain_Gain_gwfuji0h5m [ 0 ] * p4xbdqn5oc [ 0 ] ; if ( rtDW . h2raxdlt4g ) {
memcpy ( & rtDW . elfrsuzvuo [ 0 ] , & rtP . Constant_Value_embijewti4 [ 0 ]
, 20U * sizeof ( real_T ) ) ; } rtB . omevzybjen = rtDW . dwirzopvhn ; rtB .
lzsyefxdnk = rtDW . gefwlenpf3 ; j0r0arniji = rtB . lzsyefxdnk ; if ( ( rtB .
lzsyefxdnk == 1.0 ) && ( rtB . j3t4wyjy41 [ 5 ] == 1.0 ) && ( rtB .
omevzybjen > 100.0 ) ) { j0r0arniji = 0.0 ; e04f1erd1u = 1.0 ; } else if ( (
rtB . lzsyefxdnk == 0.0 ) && ( rtB . j3t4wyjy41 [ 5 ] == 1.0 ) && ( rtB .
omevzybjen > 100.0 ) ) { j0r0arniji = 1.0 ; e04f1erd1u = 1.0 ; } else {
e04f1erd1u = 0.0 ; } rtB . lzsyefxdnk = j0r0arniji ; memcpy ( & rtB .
izvthfvymi [ 0 ] , & rtDW . elfrsuzvuo [ 0 ] , 20U * sizeof ( real_T ) ) ;
rtB . izvthfvymi [ 19 ] = rtB . lzsyefxdnk ; j0r0arniji = look1_plinlcpw (
rtB . m1kth42sm5 , rtP . dp_DEP . limits . V , rtP . dp_DEP . limits . actf ,
& rtDW . fwx2o3iy55 , 18U ) ; memcpy ( & f40yzytdn0 [ 0 ] , & rtB .
mijjbavmhd [ 0 ] , 20U * sizeof ( real_T ) ) ; f40yzytdn0 [ 6 ] = rtP .
Constant_Value_gzlsyazbk1 * j0r0arniji ; f40yzytdn0 [ 7 ] = rtP .
Constant_Value_gzlsyazbk1 * j0r0arniji ; f40yzytdn0 [ 8 ] = rtP .
Constant_Value_gzlsyazbk1 * j0r0arniji ; f40yzytdn0 [ 9 ] = rtP .
Constant_Value_gzlsyazbk1 * j0r0arniji ; f40yzytdn0 [ 10 ] = rtP .
Constant_Value_gzlsyazbk1 * j0r0arniji ; f40yzytdn0 [ 11 ] = rtP .
Constant_Value_gzlsyazbk1 * j0r0arniji ; f40yzytdn0 [ 12 ] = rtP .
Constant_Value_gzlsyazbk1 * j0r0arniji ; f40yzytdn0 [ 13 ] = rtP .
Constant_Value_gzlsyazbk1 * j0r0arniji ; f40yzytdn0 [ 14 ] = rtP .
Constant_Value_gzlsyazbk1 * j0r0arniji ; f40yzytdn0 [ 15 ] = rtP .
Constant_Value_gzlsyazbk1 * j0r0arniji ; f40yzytdn0 [ 16 ] = rtP .
Constant_Value_gzlsyazbk1 * j0r0arniji ; f40yzytdn0 [ 17 ] = rtP .
Constant_Value_gzlsyazbk1 * j0r0arniji ; j0r0arniji = look1_plinlcpw ( rtB .
m1kth42sm5 , rtP . dp_HTU . limits . V_up_lim , rtP . dp_HTU . limits .
T_up_lim , & rtDW . payo3ow3lc , 4U ) ; f40yzytdn0 [ 18 ] = rtP .
Gain2_Gain_jjaljxjtac * j0r0arniji * rtP . Constant_Value_ig1dmrx52o ;
dh3zefosvy = look1_plinlcpw ( rtB . m1kth42sm5 , rtP . dp_HTU . limits .
V_low_lim , rtP . dp_HTU . limits . T_low_lim , & rtDW . dtoycisapu , 5U ) ;
memcpy ( & mstjku3ag5 [ 0 ] , & rtB . pzbmgre0pt [ 0 ] , 20U * sizeof (
real_T ) ) ; lyv0niej1z [ 0 ] = rtDW . fzijynxjqu [ 0 ] ; lyv0niej1z [ 1 ] =
rtDW . fzijynxjqu [ 1 ] ; lyv0niej1z [ 2 ] = rtDW . fzijynxjqu [ 2 ] ;
lyv0niej1z [ 3 ] = rtB . cuqqqrtko4 ; lyv0niej1z [ 4 ] = i5y02tnznl_idx_0 ;
for ( i = 0 ; i < 5 ; i ++ ) { hz1wdoosnd [ i ] = rtDW . fzijynxjqu [ i ] ;
rtB . e5lut2zpnm [ i ] = rtP . fcc . path_u_llim [ i ] ; } rtB . e5lut2zpnm [
0 ] = rtP . Gain5_Gain * dh3zefosvy * rtP . Constant_Value_ig1dmrx52o ; rtB .
e5lut2zpnm [ 2 ] = muDoubleScalarMin ( rtB . pzbmgre0pt [ 4 ] , mstjku3ag5 [
5 ] ) ; dh3zefosvy = f40yzytdn0 [ 11 ] ; for ( s315_iter = 0 ; s315_iter < 6
; s315_iter ++ ) { dh3zefosvy = muDoubleScalarMax ( dh3zefosvy , f40yzytdn0 [
s315_iter + 12 ] ) ; } p4xbdqn5oc [ 0 ] = rtP . Gain2_Gain_jjaljxjtac *
j0r0arniji * rtP . Constant_Value_ig1dmrx52o ; p4xbdqn5oc [ 1 ] = dh3zefosvy
; p4xbdqn5oc [ 2 ] = muDoubleScalarMax ( f40yzytdn0 [ 4 ] , f40yzytdn0 [ 5 ]
) ; for ( i = 0 ; i < 5 ; i ++ ) { rtB . oksmwianox [ i ] = rtP . fcc .
path_u_ulim [ i ] ; } rtB . oksmwianox [ 0 ] = p4xbdqn5oc [ 0 ] ; rtB .
oksmwianox [ 1 ] = p4xbdqn5oc [ 1 ] ; rtB . oksmwianox [ 2 ] = p4xbdqn5oc [ 2
] ; acafcyi14i [ 0 ] = rtDW . etatrxd5ju [ 0 ] ; acafcyi14i [ 1 ] = rtDW .
etatrxd5ju [ 1 ] ; acafcyi14i [ 2 ] = rtDW . etatrxd5ju [ 2 ] ; acafcyi14i [
3 ] = rtDW . etatrxd5ju [ 3 ] ; s315_iter = 1 ; do { if ( rtDW . hvrukley13 )
{ memcpy ( & rtDW . hrv12n540b [ 0 ] , & rtP . fcc . path_Bmat_IC [ 0 ] , 15U
* sizeof ( real_T ) ) ; } rtB . idwc4iy42u [ 0 ] = ( real32_T ) gkshvepttp [
0 ] ; rtB . oa43rzem0x [ 0 ] = ( real32_T ) rtB . mkyju0odm1 [ 0 ] ; rtB .
idwc4iy42u [ 1 ] = ( real32_T ) gkshvepttp [ 1 ] ; rtB . oa43rzem0x [ 1 ] = (
real32_T ) rtB . mkyju0odm1 [ 1 ] ; rtB . idwc4iy42u [ 2 ] = ( real32_T )
gkshvepttp [ 2 ] ; rtB . oa43rzem0x [ 2 ] = ( real32_T ) rtB . mkyju0odm1 [ 2
] ; parallel_for ( 14 , i0h2b0hhep , 1 , "i0h2b0hhep" ) ; rtB . hh1kkx1lhe [
0 ] = rtB . bmj5mlcorv [ 6 ] ; rtB . hh1kkx1lhe [ 1 ] = rtB . bmj5mlcorv [ 5
] ; rtB . hh1kkx1lhe [ 2 ] = rtB . bmj5mlcorv [ 4 ] ; rtB . hh1kkx1lhe [ 3 ]
= rtB . bmj5mlcorv [ 3 ] ; rtB . hh1kkx1lhe [ 4 ] = rtB . bmj5mlcorv [ 2 ] ;
rtB . hh1kkx1lhe [ 5 ] = rtB . bmj5mlcorv [ 1 ] ; rtB . hh1kkx1lhe [ 6 ] =
rtB . bmj5mlcorv [ 0 ] ; ge04r1sxrb [ 0 ] = rtB . l0ol1nsxx1 [ 6 ] ;
ge04r1sxrb [ 1 ] = rtB . l0ol1nsxx1 [ 5 ] ; ge04r1sxrb [ 2 ] = rtB .
l0ol1nsxx1 [ 4 ] ; ge04r1sxrb [ 3 ] = rtB . l0ol1nsxx1 [ 3 ] ; ge04r1sxrb [ 4
] = rtB . l0ol1nsxx1 [ 2 ] ; ge04r1sxrb [ 5 ] = rtB . l0ol1nsxx1 [ 1 ] ;
ge04r1sxrb [ 6 ] = rtB . l0ol1nsxx1 [ 0 ] ; ge04r1sxrb [ 7 ] = rtB .
l0ol1nsxx1 [ 6 ] ; ge04r1sxrb [ 8 ] = rtB . l0ol1nsxx1 [ 5 ] ; ge04r1sxrb [ 9
] = rtB . l0ol1nsxx1 [ 4 ] ; ge04r1sxrb [ 10 ] = rtB . l0ol1nsxx1 [ 3 ] ;
ge04r1sxrb [ 11 ] = rtB . l0ol1nsxx1 [ 2 ] ; ge04r1sxrb [ 12 ] = rtB .
l0ol1nsxx1 [ 1 ] ; ge04r1sxrb [ 13 ] = rtB . l0ol1nsxx1 [ 0 ] ; ge04r1sxrb [
14 ] = rtB . l0ol1nsxx1 [ 6 ] ; ge04r1sxrb [ 15 ] = rtB . l0ol1nsxx1 [ 5 ] ;
ge04r1sxrb [ 16 ] = rtB . l0ol1nsxx1 [ 4 ] ; ge04r1sxrb [ 17 ] = rtB .
l0ol1nsxx1 [ 3 ] ; ge04r1sxrb [ 18 ] = rtB . l0ol1nsxx1 [ 2 ] ; ge04r1sxrb [
19 ] = rtB . l0ol1nsxx1 [ 1 ] ; ge04r1sxrb [ 20 ] = rtB . l0ol1nsxx1 [ 0 ] ;
for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { liydxvyvbx [ 3 * i_p ] = ge04r1sxrb [
i_p ] ; liydxvyvbx [ 3 * i_p + 1 ] = ge04r1sxrb [ i_p + 7 ] ; liydxvyvbx [ 3
* i_p + 2 ] = ge04r1sxrb [ i_p + 14 ] ; } for ( i = 0 ; i < 21 ; i ++ ) {
cq2trmp0xn_idx_0 = liydxvyvbx [ i ] ; kta5xsgp3m [ i ] = cq2trmp0xn_idx_0 *
cq2trmp0xn_idx_0 ; } if ( rtB . izvthfvymi [ 2 ] > rtP . Saturation2_UpperSat
) { hjpu2sw0us_idx_1 = rtP . Saturation2_UpperSat ; } else if ( rtB .
izvthfvymi [ 2 ] < rtP . Saturation2_LowerSat ) { hjpu2sw0us_idx_1 = rtP .
Saturation2_LowerSat ; } else { hjpu2sw0us_idx_1 = rtB . izvthfvymi [ 2 ] ; }
if ( rtB . izvthfvymi [ 3 ] > rtP . Saturation3_UpperSat ) { y_p = rtP .
Saturation3_UpperSat ; } else if ( rtB . izvthfvymi [ 3 ] < rtP .
Saturation3_LowerSat ) { y_p = rtP . Saturation3_LowerSat ; } else { y_p =
rtB . izvthfvymi [ 3 ] ; } if ( rtB . izvthfvymi [ 4 ] > rtP .
Saturation6_UpperSat ) { y_e = rtP . Saturation6_UpperSat ; } else if ( rtB .
izvthfvymi [ 4 ] < rtP . Saturation6_LowerSat ) { y_e = rtP .
Saturation6_LowerSat ; } else { y_e = rtB . izvthfvymi [ 4 ] ; } if ( rtB .
izvthfvymi [ 5 ] > rtP . Saturation4_UpperSat ) { y_i = rtP .
Saturation4_UpperSat ; } else if ( rtB . izvthfvymi [ 5 ] < rtP .
Saturation4_LowerSat ) { y_i = rtP . Saturation4_LowerSat ; } else { y_i =
rtB . izvthfvymi [ 5 ] ; } m04ebe1zz2 = plook_u32ff_lincpa ( ( real32_T ) y_e
, rtP . dp_WING_root . flap_defl , 4U , & f5qwewprly , & rtDW . ksgrrkn4aj )
; d2guuznk3s [ 0 ] = rtB . bmj5mlcorv [ 6 ] ; d2guuznk3s [ 1 ] = rtB .
bmj5mlcorv [ 5 ] ; d2guuznk3s [ 2 ] = rtB . bmj5mlcorv [ 4 ] ; d2guuznk3s [ 3
] = rtB . bmj5mlcorv [ 3 ] ; d2guuznk3s [ 4 ] = rtB . bmj5mlcorv [ 2 ] ; for
( iU = 0 ; iU < 5 ; iU ++ ) { h0u2qqbsra [ iU ] = plook_u32ff_lincpa (
d2guuznk3s [ iU ] , rtP . dp_WING_root . alphas , 24U , & kko0lbsvwo [ iU ] ,
& rtDW . pbrsinov1u [ iU ] ) ; } d2guuznk3s [ 0 ] = rtB . l0ol1nsxx1 [ 6 ] ;
d2guuznk3s [ 1 ] = rtB . l0ol1nsxx1 [ 5 ] ; d2guuznk3s [ 2 ] = rtB .
l0ol1nsxx1 [ 4 ] ; d2guuznk3s [ 3 ] = rtB . l0ol1nsxx1 [ 3 ] ; d2guuznk3s [ 4
] = rtB . l0ol1nsxx1 [ 2 ] ; for ( iU = 0 ; iU < 5 ; iU ++ ) { kugs2ta1qq [
iU ] = plook_u32ff_lincpa ( d2guuznk3s [ iU ] , rtP . dp_WING_root . V , 1U ,
& epaolvt0vm [ iU ] , & rtDW . ptwmh3h1zm [ iU ] ) ; } for ( i = 0 ; i <= 10
; i += 2 ) { tmp_c = _mm_loadu_pd ( & rtB . puaaevgvgw [ i ] ) ;
_mm_storeu_pd ( & rtB . iql12jsbjh [ i ] , _mm_mul_pd ( _mm_add_pd (
_mm_mul_pd ( _mm_set1_pd ( rtB . mkyju0odm1 [ 2 ] ) , tmp_c ) , _mm_set1_pd (
gkshvepttp [ 0 ] ) ) , _mm_set1_pd ( rtB . hfnrcon5sq ) ) ) ; } parallel_for
( 12 , o2j1dr3sk2 , 1 , "o2j1dr3sk2" ) ; for ( i = 0 ; i < 12 ; i ++ ) {
prizw2ngzn [ i ] = ( real32_T ) rtB . g4bvcp1bon [ i ] ; } d2guuznk3s [ 0 ] =
prizw2ngzn [ 5 ] ; d2guuznk3s [ 1 ] = prizw2ngzn [ 4 ] ; d2guuznk3s [ 2 ] =
prizw2ngzn [ 3 ] ; d2guuznk3s [ 3 ] = prizw2ngzn [ 2 ] ; d2guuznk3s [ 4 ] =
prizw2ngzn [ 1 ] ; for ( iU = 0 ; iU < 5 ; iU ++ ) { okphy1ntzm [ iU ] =
plook_u32ff_lincpa ( d2guuznk3s [ iU ] , rtP . dp_WING_root . DEP_J , 6U , &
pdb2lmu2m2 [ iU ] , & rtDW . jezsbtdj5i [ iU ] ) ; } frac_po [ 0 ] =
f5qwewprly ; bpIndex_po [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_po [ 1 ] = kko0lbsvwo [ iU ] ; frac_po [ 2 ] = epaolvt0vm [ iU ] ;
frac_po [ 3 ] = pdb2lmu2m2 [ iU ] ; bpIndex_po [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_po [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_po [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_mgxme44jz3 [ iU ] > 4.0 ) { bpIndex_po [ 4 ] = 4U
; } else { bpIndex_po [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_mgxme44jz3 [ iU ] , 0.0 ) ; } ce14rneku4 [ iU ] =
intrp4d_fu32fla_pw ( bpIndex_po , frac_po , & rtP . dp_WING_root . CD [ 1750U
* bpIndex_po [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize , rtP .
InterpolationUsingPrelookup1_maxIndex ) ; } if ( rtB . izvthfvymi [ 0 ] > rtP
. Saturation_UpperSat_psz3uqepm1 ) { g52k1xdouv_idx_1 = rtP .
Saturation_UpperSat_psz3uqepm1 ; } else if ( rtB . izvthfvymi [ 0 ] < rtP .
Saturation_LowerSat_gkhwrofbvi ) { g52k1xdouv_idx_1 = rtP .
Saturation_LowerSat_gkhwrofbvi ; } else { g52k1xdouv_idx_1 = rtB . izvthfvymi
[ 0 ] ; } kiombdthr4 = plook_u32ff_lincpa ( ( real32_T ) g52k1xdouv_idx_1 ,
rtP . dp_WING_tip . ail_defl , 6U , & p5e3xkr1y0 , & rtDW . kovsesfevn ) ;
n5yhkyeg5n_idx_0 = plook_u32ff_lincpa ( rtB . bmj5mlcorv [ 1 ] , rtP .
dp_WING_tip . alphas , 24U , & ijn42ncetb [ 0 ] , & rtDW . jqygi5hjmr [ 0 ] )
; n5yhkyeg5n_idx_1 = plook_u32ff_lincpa ( rtB . bmj5mlcorv [ 0 ] , rtP .
dp_WING_tip . alphas , 24U , & ijn42ncetb [ 1 ] , & rtDW . jqygi5hjmr [ 1 ] )
; khukbzvgdj_idx_0 = plook_u32ff_lincpa ( rtB . l0ol1nsxx1 [ 1 ] , rtP .
dp_WING_tip . V , 1U , & nwsd1dfjvy [ 0 ] , & rtDW . fka3wa5y1h [ 0 ] ) ;
khukbzvgdj_idx_1 = plook_u32ff_lincpa ( rtB . l0ol1nsxx1 [ 0 ] , rtP .
dp_WING_tip . V , 1U , & nwsd1dfjvy [ 1 ] , & rtDW . fka3wa5y1h [ 1 ] ) ;
hcbpipseis_idx_0 = plook_u32ff_lincpa ( prizw2ngzn [ 1 ] , rtP . dp_WING_tip
. DEP_J , 6U , & ohuehvepr1 [ 0 ] , & rtDW . bo1nef12b5 [ 0 ] ) ;
hcbpipseis_idx_1 = plook_u32ff_lincpa ( prizw2ngzn [ 0 ] , rtP . dp_WING_tip
. DEP_J , 6U , & ohuehvepr1 [ 1 ] , & rtDW . bo1nef12b5 [ 1 ] ) ; frac_d0 [ 0
] = p5e3xkr1y0 ; bpIndex_d0 [ 0 ] = kiombdthr4 ; frac_d0 [ 1 ] = ijn42ncetb [
0 ] ; frac_d0 [ 2 ] = nwsd1dfjvy [ 0 ] ; frac_d0 [ 3 ] = ohuehvepr1 [ 0 ] ;
bpIndex_d0 [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_d0 [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_d0 [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_miw3wecx3m [
0 ] > 1.0 ) { bpIndex_d0 [ 4 ] = 1U ; } else { bpIndex_d0 [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_miw3wecx3m [ 0 ] , 0.0 ) ; }
ce14rneku4 [ 5 ] = intrp4d_fu32fla_pw ( bpIndex_d0 , frac_d0 , & rtP .
dp_WING_tip . CD [ 2450U * bpIndex_d0 [ 4 ] ] , rtP .
InterpolationUsingPrelookup1_dimSize_aonuqjhzsc , rtP .
InterpolationUsingPrelookup1_maxIndex_h5zf0f1cm1 ) ; frac_d0 [ 1 ] =
ijn42ncetb [ 1 ] ; frac_d0 [ 2 ] = nwsd1dfjvy [ 1 ] ; frac_d0 [ 3 ] =
ohuehvepr1 [ 1 ] ; bpIndex_d0 [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_d0 [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_d0 [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_miw3wecx3m [ 1 ] > 1.0 ) { bpIndex_d0 [ 4 ] = 1U ; } else {
bpIndex_d0 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_miw3wecx3m [ 1 ] , 0.0 ) ; } ce14rneku4 [ 6 ] =
intrp4d_fu32fla_pw ( bpIndex_d0 , frac_d0 , & rtP . dp_WING_tip . CD [ 2450U
* bpIndex_d0 [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_aonuqjhzsc
, rtP . InterpolationUsingPrelookup1_maxIndex_h5zf0f1cm1 ) ; frac_kh [ 0 ] =
f5qwewprly ; bpIndex_kh [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_kh [ 1 ] = kko0lbsvwo [ iU ] ; frac_kh [ 2 ] = epaolvt0vm [ iU ] ;
frac_kh [ 3 ] = pdb2lmu2m2 [ iU ] ; bpIndex_kh [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_kh [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_kh [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_mgxme44jz3 [ iU ] > 4.0 ) { bpIndex_kh [ 4 ] = 4U
; } else { bpIndex_kh [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_mgxme44jz3 [ iU ] , 0.0 ) ; } ce14rneku4 [ iU + 7 ] =
intrp4d_fu32fla_pw ( bpIndex_kh , frac_kh , & rtP . dp_WING_root . CS [ 1750U
* bpIndex_kh [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize , rtP .
InterpolationUsingPrelookup2_maxIndex ) ; } frac_m0 [ 0 ] = p5e3xkr1y0 ;
bpIndex_m0 [ 0 ] = kiombdthr4 ; frac_m0 [ 1 ] = ijn42ncetb [ 0 ] ; frac_m0 [
2 ] = nwsd1dfjvy [ 0 ] ; frac_m0 [ 3 ] = ohuehvepr1 [ 0 ] ; bpIndex_m0 [ 1 ]
= n5yhkyeg5n_idx_0 ; bpIndex_m0 [ 2 ] = khukbzvgdj_idx_0 ; bpIndex_m0 [ 3 ] =
hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_miw3wecx3m [ 0 ] > 1.0 ) {
bpIndex_m0 [ 4 ] = 1U ; } else { bpIndex_m0 [ 4 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_miw3wecx3m [ 0 ] , 0.0 ) ; }
ce14rneku4 [ 12 ] = intrp4d_fu32fla_pw ( bpIndex_m0 , frac_m0 , & rtP .
dp_WING_tip . CS [ 2450U * bpIndex_m0 [ 4 ] ] , rtP .
InterpolationUsingPrelookup2_dimSize_jhc1kduigw , rtP .
InterpolationUsingPrelookup2_maxIndex_ec3lcidxvb ) ; frac_m0 [ 1 ] =
ijn42ncetb [ 1 ] ; frac_m0 [ 2 ] = nwsd1dfjvy [ 1 ] ; frac_m0 [ 3 ] =
ohuehvepr1 [ 1 ] ; bpIndex_m0 [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_m0 [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_m0 [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_miw3wecx3m [ 1 ] > 1.0 ) { bpIndex_m0 [ 4 ] = 1U ; } else {
bpIndex_m0 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_miw3wecx3m [ 1 ] , 0.0 ) ; } ce14rneku4 [ 13 ] =
intrp4d_fu32fla_pw ( bpIndex_m0 , frac_m0 , & rtP . dp_WING_tip . CS [ 2450U
* bpIndex_m0 [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_jhc1kduigw
, rtP . InterpolationUsingPrelookup2_maxIndex_ec3lcidxvb ) ; frac_m4 [ 0 ] =
f5qwewprly ; bpIndex_m4 [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_m4 [ 1 ] = kko0lbsvwo [ iU ] ; frac_m4 [ 2 ] = epaolvt0vm [ iU ] ;
frac_m4 [ 3 ] = pdb2lmu2m2 [ iU ] ; bpIndex_m4 [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_m4 [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_m4 [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_mgxme44jz3 [ iU ] > 4.0 ) { bpIndex_m4 [ 4 ] = 4U
; } else { bpIndex_m4 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_mgxme44jz3 [ iU ] , 0.0 ) ; } ce14rneku4 [ iU + 14 ] =
intrp4d_fu32fla_pw ( bpIndex_m4 , frac_m4 , & rtP . dp_WING_root . CL [ 1750U
* bpIndex_m4 [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize , rtP .
InterpolationUsingPrelookup3_maxIndex ) ; } frac_nf [ 0 ] = p5e3xkr1y0 ;
bpIndex_nf [ 0 ] = kiombdthr4 ; frac_nf [ 1 ] = ijn42ncetb [ 0 ] ; frac_nf [
2 ] = nwsd1dfjvy [ 0 ] ; frac_nf [ 3 ] = ohuehvepr1 [ 0 ] ; bpIndex_nf [ 1 ]
= n5yhkyeg5n_idx_0 ; bpIndex_nf [ 2 ] = khukbzvgdj_idx_0 ; bpIndex_nf [ 3 ] =
hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_miw3wecx3m [ 0 ] > 1.0 ) {
bpIndex_nf [ 4 ] = 1U ; } else { bpIndex_nf [ 4 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_miw3wecx3m [ 0 ] , 0.0 ) ; }
ce14rneku4 [ 19 ] = intrp4d_fu32fla_pw ( bpIndex_nf , frac_nf , & rtP .
dp_WING_tip . CL [ 2450U * bpIndex_nf [ 4 ] ] , rtP .
InterpolationUsingPrelookup3_dimSize_crfbcsb4g3 , rtP .
InterpolationUsingPrelookup3_maxIndex_b0qfsvphlu ) ; frac_nf [ 1 ] =
ijn42ncetb [ 1 ] ; frac_nf [ 2 ] = nwsd1dfjvy [ 1 ] ; frac_nf [ 3 ] =
ohuehvepr1 [ 1 ] ; bpIndex_nf [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_nf [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_nf [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_miw3wecx3m [ 1 ] > 1.0 ) { bpIndex_nf [ 4 ] = 1U ; } else {
bpIndex_nf [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_miw3wecx3m [ 1 ] , 0.0 ) ; } ce14rneku4 [ 20 ] =
intrp4d_fu32fla_pw ( bpIndex_nf , frac_nf , & rtP . dp_WING_tip . CL [ 2450U
* bpIndex_nf [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_crfbcsb4g3
, rtP . InterpolationUsingPrelookup3_maxIndex_b0qfsvphlu ) ; for ( i_p = 0 ;
i_p < 7 ; i_p ++ ) { rtB . cp2nddenxm [ 3 * i_p ] = kta5xsgp3m [ 3 * i_p ] *
ce14rneku4 [ i_p ] * rtB . lhopa3gq4f * rtP . Gain_Gain_nohmayotbr ; rtB .
cp2nddenxm [ 3 * i_p + 1 ] = kta5xsgp3m [ 3 * i_p + 1 ] * ce14rneku4 [ i_p +
7 ] * rtB . lhopa3gq4f * rtP . Gain_Gain_nohmayotbr ; rtB . cp2nddenxm [ 3 *
i_p + 2 ] = kta5xsgp3m [ 3 * i_p + 2 ] * ce14rneku4 [ i_p + 14 ] * rtB .
lhopa3gq4f * rtP . Gain_Gain_nohmayotbr ; } parallel_for ( 7 , j53etjiqle , 1
, "j53etjiqle" ) ; for ( i = 0 ; i < 21 ; i ++ ) { dq25kgk52k [ i ] = rtB .
azuslmfajsh [ i ] ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { cwdb3qacqr = - 0.0
; for ( i_e = 0 ; i_e < 7 ; i_e ++ ) { cwdb3qacqr += dq25kgk52k [ i_e * 3 +
i_p ] ; } p4xbdqn5oc [ i_p ] = cwdb3qacqr ; } g0uuf55mpg [ 0 ] = ( real32_T )
p4xbdqn5oc [ 0 ] ; g0uuf55mpg [ 1 ] = ( real32_T ) p4xbdqn5oc [ 1 ] ;
g0uuf55mpg [ 2 ] = ( real32_T ) p4xbdqn5oc [ 2 ] ; for ( i = 0 ; i < 7 ; i ++
) { cdiu1fbbqm [ i ] = rtB . l0ol1nsxx1 [ i + 7 ] ; cdiu1fbbqm [ i + 7 ] =
rtB . l0ol1nsxx1 [ i + 7 ] ; cdiu1fbbqm [ i + 14 ] = rtB . l0ol1nsxx1 [ i + 7
] ; liydxvyvbx [ 3 * i ] = cdiu1fbbqm [ i ] ; liydxvyvbx [ 3 * i + 1 ] =
cdiu1fbbqm [ i + 7 ] ; liydxvyvbx [ 3 * i + 2 ] = cdiu1fbbqm [ i + 14 ] ; }
for ( i = 0 ; i < 21 ; i ++ ) { cq2trmp0xn_idx_0 = liydxvyvbx [ i ] ;
aohvunheuk [ i ] = cq2trmp0xn_idx_0 * cq2trmp0xn_idx_0 ; } aoonk22yz4 =
plook_u32ff_lincpa ( ( real32_T ) y_i , rtP . dp_WING_root . flap_defl , 4U ,
& lrpn1bvaje , & rtDW . efbu502mmx ) ; for ( iU = 0 ; iU < 5 ; iU ++ ) {
k1zguhxahv [ iU ] = plook_u32ff_lincpa ( rtB . bmj5mlcorv [ iU + 7 ] , rtP .
dp_WING_root . alphas , 24U , & d2guuznk3s [ iU ] , & rtDW . d32hdtpoan [ iU
] ) ; } for ( iU = 0 ; iU < 5 ; iU ++ ) { eqjb1ghghq [ iU ] =
plook_u32ff_lincpa ( rtB . l0ol1nsxx1 [ iU + 7 ] , rtP . dp_WING_root . V ,
1U , & fgrhjqvnic [ iU ] , & rtDW . bzfig0ujyt [ iU ] ) ; } for ( iU = 0 ; iU
< 5 ; iU ++ ) { kxwiwb3dqe [ iU ] = plook_u32ff_lincpa ( prizw2ngzn [ iU + 6
] , rtP . dp_WING_root . DEP_J , 6U , & g5intoqa2s [ iU ] , & rtDW .
pl4kkbhqoo [ iU ] ) ; } frac_go [ 0 ] = lrpn1bvaje ; bpIndex_go [ 0 ] =
aoonk22yz4 ; for ( iU = 0 ; iU < 5 ; iU ++ ) { frac_go [ 1 ] = d2guuznk3s [
iU ] ; frac_go [ 2 ] = fgrhjqvnic [ iU ] ; frac_go [ 3 ] = g5intoqa2s [ iU ]
; bpIndex_go [ 1 ] = k1zguhxahv [ iU ] ; bpIndex_go [ 2 ] = eqjb1ghghq [ iU ]
; bpIndex_go [ 3 ] = kxwiwb3dqe [ iU ] ; if ( rtP .
Constant8_Value_guqmjpzam2 [ iU ] > 4.0 ) { bpIndex_go [ 4 ] = 4U ; } else {
bpIndex_go [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_guqmjpzam2 [ iU ] , 0.0 ) ; } l12nhlzkel [ iU ] =
intrp4d_fu32fla_pw ( bpIndex_go , frac_go , & rtP . dp_WING_root . CD [ 1750U
* bpIndex_go [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_ej2a03vo3g
, rtP . InterpolationUsingPrelookup1_maxIndex_onzruxcbml ) ; } if ( rtB .
izvthfvymi [ 1 ] > rtP . Saturation1_UpperSat ) { g52k1xdouv_idx_1 = rtP .
Saturation1_UpperSat ; } else if ( rtB . izvthfvymi [ 1 ] < rtP .
Saturation1_LowerSat ) { g52k1xdouv_idx_1 = rtP . Saturation1_LowerSat ; }
else { g52k1xdouv_idx_1 = rtB . izvthfvymi [ 1 ] ; } gpjb51jpeb =
plook_u32ff_lincpa ( ( real32_T ) g52k1xdouv_idx_1 , rtP . dp_WING_tip .
ail_defl , 6U , & dh4cgxbhqr , & rtDW . pzrjkskwao ) ; kfmilwvdgo_idx_0 =
plook_u32ff_lincpa ( rtB . bmj5mlcorv [ 12 ] , rtP . dp_WING_tip . alphas ,
24U , & emuqsm3je3 [ 0 ] , & rtDW . gdy3zxhcjf [ 0 ] ) ; kfmilwvdgo_idx_1 =
plook_u32ff_lincpa ( rtB . bmj5mlcorv [ 13 ] , rtP . dp_WING_tip . alphas ,
24U , & emuqsm3je3 [ 1 ] , & rtDW . gdy3zxhcjf [ 1 ] ) ; pkmvhntapc_idx_0 =
plook_u32ff_lincpa ( rtB . l0ol1nsxx1 [ 12 ] , rtP . dp_WING_tip . V , 1U , &
i5htqtys5b [ 0 ] , & rtDW . npr5ivvwap [ 0 ] ) ; pkmvhntapc_idx_1 =
plook_u32ff_lincpa ( rtB . l0ol1nsxx1 [ 13 ] , rtP . dp_WING_tip . V , 1U , &
i5htqtys5b [ 1 ] , & rtDW . npr5ivvwap [ 1 ] ) ; fql1hnjds1_idx_0 =
plook_u32ff_lincpa ( prizw2ngzn [ 10 ] , rtP . dp_WING_tip . DEP_J , 6U , &
kxk0mmptat [ 0 ] , & rtDW . no5lpmbbav [ 0 ] ) ; fql1hnjds1_idx_1 =
plook_u32ff_lincpa ( prizw2ngzn [ 11 ] , rtP . dp_WING_tip . DEP_J , 6U , &
kxk0mmptat [ 1 ] , & rtDW . no5lpmbbav [ 1 ] ) ; frac_pd [ 0 ] = dh4cgxbhqr ;
bpIndex_pd [ 0 ] = gpjb51jpeb ; frac_pd [ 1 ] = emuqsm3je3 [ 0 ] ; frac_pd [
2 ] = i5htqtys5b [ 0 ] ; frac_pd [ 3 ] = kxk0mmptat [ 0 ] ; bpIndex_pd [ 1 ]
= kfmilwvdgo_idx_0 ; bpIndex_pd [ 2 ] = pkmvhntapc_idx_0 ; bpIndex_pd [ 3 ] =
fql1hnjds1_idx_0 ; if ( rtP . Constant8_Value_ik45uzosiz [ 0 ] > 1.0 ) {
bpIndex_pd [ 4 ] = 1U ; } else { bpIndex_pd [ 4 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_ik45uzosiz [ 0 ] , 0.0 ) ; }
l12nhlzkel [ 5 ] = intrp4d_fu32fla_pw ( bpIndex_pd , frac_pd , & rtP .
dp_WING_tip . CD [ 2450U * bpIndex_pd [ 4 ] ] , rtP .
InterpolationUsingPrelookup1_dimSize_de2hm4jrgr , rtP .
InterpolationUsingPrelookup1_maxIndex_mplilhkgmb ) ; frac_pd [ 1 ] =
emuqsm3je3 [ 1 ] ; frac_pd [ 2 ] = i5htqtys5b [ 1 ] ; frac_pd [ 3 ] =
kxk0mmptat [ 1 ] ; bpIndex_pd [ 1 ] = kfmilwvdgo_idx_1 ; bpIndex_pd [ 2 ] =
pkmvhntapc_idx_1 ; bpIndex_pd [ 3 ] = fql1hnjds1_idx_1 ; if ( rtP .
Constant8_Value_ik45uzosiz [ 1 ] > 1.0 ) { bpIndex_pd [ 4 ] = 1U ; } else {
bpIndex_pd [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ik45uzosiz [ 1 ] , 0.0 ) ; } l12nhlzkel [ 6 ] =
intrp4d_fu32fla_pw ( bpIndex_pd , frac_pd , & rtP . dp_WING_tip . CD [ 2450U
* bpIndex_pd [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_de2hm4jrgr
, rtP . InterpolationUsingPrelookup1_maxIndex_mplilhkgmb ) ; frac_fd [ 0 ] =
lrpn1bvaje ; bpIndex_fd [ 0 ] = aoonk22yz4 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_fd [ 1 ] = d2guuznk3s [ iU ] ; frac_fd [ 2 ] = fgrhjqvnic [ iU ] ;
frac_fd [ 3 ] = g5intoqa2s [ iU ] ; bpIndex_fd [ 1 ] = k1zguhxahv [ iU ] ;
bpIndex_fd [ 2 ] = eqjb1ghghq [ iU ] ; bpIndex_fd [ 3 ] = kxwiwb3dqe [ iU ] ;
if ( rtP . Constant8_Value_guqmjpzam2 [ iU ] > 4.0 ) { bpIndex_fd [ 4 ] = 4U
; } else { bpIndex_fd [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_guqmjpzam2 [ iU ] , 0.0 ) ; } l12nhlzkel [ iU + 7 ] =
intrp4d_fu32fla_pw ( bpIndex_fd , frac_fd , & rtP . dp_WING_root . CS [ 1750U
* bpIndex_fd [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_dl4eaahg1p
, rtP . InterpolationUsingPrelookup2_maxIndex_n5t33ntcie ) ; } frac_mo [ 0 ]
= dh4cgxbhqr ; bpIndex_mo [ 0 ] = gpjb51jpeb ; frac_mo [ 1 ] = emuqsm3je3 [ 0
] ; frac_mo [ 2 ] = i5htqtys5b [ 0 ] ; frac_mo [ 3 ] = kxk0mmptat [ 0 ] ;
bpIndex_mo [ 1 ] = kfmilwvdgo_idx_0 ; bpIndex_mo [ 2 ] = pkmvhntapc_idx_0 ;
bpIndex_mo [ 3 ] = fql1hnjds1_idx_0 ; if ( rtP . Constant8_Value_ik45uzosiz [
0 ] > 1.0 ) { bpIndex_mo [ 4 ] = 1U ; } else { bpIndex_mo [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_ik45uzosiz [ 0 ] , 0.0 ) ; }
l12nhlzkel [ 12 ] = intrp4d_fu32fla_pw ( bpIndex_mo , frac_mo , & rtP .
dp_WING_tip . CS [ 2450U * bpIndex_mo [ 4 ] ] , rtP .
InterpolationUsingPrelookup2_dimSize_mzzkutglgx , rtP .
InterpolationUsingPrelookup2_maxIndex_laqo2xnfax ) ; frac_mo [ 1 ] =
emuqsm3je3 [ 1 ] ; frac_mo [ 2 ] = i5htqtys5b [ 1 ] ; frac_mo [ 3 ] =
kxk0mmptat [ 1 ] ; bpIndex_mo [ 1 ] = kfmilwvdgo_idx_1 ; bpIndex_mo [ 2 ] =
pkmvhntapc_idx_1 ; bpIndex_mo [ 3 ] = fql1hnjds1_idx_1 ; if ( rtP .
Constant8_Value_ik45uzosiz [ 1 ] > 1.0 ) { bpIndex_mo [ 4 ] = 1U ; } else {
bpIndex_mo [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ik45uzosiz [ 1 ] , 0.0 ) ; } l12nhlzkel [ 13 ] =
intrp4d_fu32fla_pw ( bpIndex_mo , frac_mo , & rtP . dp_WING_tip . CS [ 2450U
* bpIndex_mo [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_mzzkutglgx
, rtP . InterpolationUsingPrelookup2_maxIndex_laqo2xnfax ) ; frac_my [ 0 ] =
lrpn1bvaje ; bpIndex_my [ 0 ] = aoonk22yz4 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_my [ 1 ] = d2guuznk3s [ iU ] ; frac_my [ 2 ] = fgrhjqvnic [ iU ] ;
frac_my [ 3 ] = g5intoqa2s [ iU ] ; bpIndex_my [ 1 ] = k1zguhxahv [ iU ] ;
bpIndex_my [ 2 ] = eqjb1ghghq [ iU ] ; bpIndex_my [ 3 ] = kxwiwb3dqe [ iU ] ;
if ( rtP . Constant8_Value_guqmjpzam2 [ iU ] > 4.0 ) { bpIndex_my [ 4 ] = 4U
; } else { bpIndex_my [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_guqmjpzam2 [ iU ] , 0.0 ) ; } l12nhlzkel [ iU + 14 ] =
intrp4d_fu32fla_pw ( bpIndex_my , frac_my , & rtP . dp_WING_root . CL [ 1750U
* bpIndex_my [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_aniypzgtnw
, rtP . InterpolationUsingPrelookup3_maxIndex_au1xa1bjq2 ) ; } frac_jo [ 0 ]
= dh4cgxbhqr ; bpIndex_jo [ 0 ] = gpjb51jpeb ; frac_jo [ 1 ] = emuqsm3je3 [ 0
] ; frac_jo [ 2 ] = i5htqtys5b [ 0 ] ; frac_jo [ 3 ] = kxk0mmptat [ 0 ] ;
bpIndex_jo [ 1 ] = kfmilwvdgo_idx_0 ; bpIndex_jo [ 2 ] = pkmvhntapc_idx_0 ;
bpIndex_jo [ 3 ] = fql1hnjds1_idx_0 ; if ( rtP . Constant8_Value_ik45uzosiz [
0 ] > 1.0 ) { bpIndex_jo [ 4 ] = 1U ; } else { bpIndex_jo [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_ik45uzosiz [ 0 ] , 0.0 ) ; }
l12nhlzkel [ 19 ] = intrp4d_fu32fla_pw ( bpIndex_jo , frac_jo , & rtP .
dp_WING_tip . CL [ 2450U * bpIndex_jo [ 4 ] ] , rtP .
InterpolationUsingPrelookup3_dimSize_ahqkphegoc , rtP .
InterpolationUsingPrelookup3_maxIndex_m5ypi4oee2 ) ; frac_jo [ 1 ] =
emuqsm3je3 [ 1 ] ; frac_jo [ 2 ] = i5htqtys5b [ 1 ] ; frac_jo [ 3 ] =
kxk0mmptat [ 1 ] ; bpIndex_jo [ 1 ] = kfmilwvdgo_idx_1 ; bpIndex_jo [ 2 ] =
pkmvhntapc_idx_1 ; bpIndex_jo [ 3 ] = fql1hnjds1_idx_1 ; if ( rtP .
Constant8_Value_ik45uzosiz [ 1 ] > 1.0 ) { bpIndex_jo [ 4 ] = 1U ; } else {
bpIndex_jo [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ik45uzosiz [ 1 ] , 0.0 ) ; } l12nhlzkel [ 20 ] =
intrp4d_fu32fla_pw ( bpIndex_jo , frac_jo , & rtP . dp_WING_tip . CL [ 2450U
* bpIndex_jo [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_ahqkphegoc
, rtP . InterpolationUsingPrelookup3_maxIndex_m5ypi4oee2 ) ; for ( i_p = 0 ;
i_p < 7 ; i_p ++ ) { rtB . psgma1k1le [ 3 * i_p ] = aohvunheuk [ 3 * i_p ] *
l12nhlzkel [ i_p ] * rtB . lhopa3gq4f * rtP . Gain_Gain_jm3bscsduk ; rtB .
psgma1k1le [ 3 * i_p + 1 ] = aohvunheuk [ 3 * i_p + 1 ] * l12nhlzkel [ i_p +
7 ] * rtB . lhopa3gq4f * rtP . Gain_Gain_jm3bscsduk ; rtB . psgma1k1le [ 3 *
i_p + 2 ] = aohvunheuk [ 3 * i_p + 2 ] * l12nhlzkel [ i_p + 14 ] * rtB .
lhopa3gq4f * rtP . Gain_Gain_jm3bscsduk ; } parallel_for ( 7 , l13lfpb0of , 1
, "l13lfpb0of" ) ; for ( i = 0 ; i < 21 ; i ++ ) { dq25kgk52k [ i ] = rtB .
azuslmfajs [ i ] ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { cwdb3qacqr = - 0.0
; for ( i_e = 0 ; i_e < 7 ; i_e ++ ) { cwdb3qacqr += dq25kgk52k [ i_e * 3 +
i_p ] ; } p4xbdqn5oc [ i_p ] = cwdb3qacqr ; } bdvkktmal5_idx_0 = ( real32_T )
p4xbdqn5oc [ 0 ] ; bdvkktmal5_idx_1 = ( real32_T ) p4xbdqn5oc [ 1 ] ;
bdvkktmal5_idx_2 = ( real32_T ) p4xbdqn5oc [ 2 ] ; for ( i = 0 ; i <= 6 ; i
+= 2 ) { _mm_storeu_pd ( & lqbwr5bl13 [ i ] , _mm_mul_pd ( _mm_loadu_pd ( &
rtP . Constant_Value_p0nl4eulqp [ i ] ) , _mm_set1_pd ( ( real32_T ) y_e ) )
) ; _mm_storeu_pd ( & lqbwr5bl13 [ i + 8 ] , _mm_mul_pd ( _mm_loadu_pd ( &
rtP . Constant1_Value_d0afwkm2i5 [ i ] ) , _mm_set1_pd ( ( real32_T ) y_i ) )
) ; } for ( i_p = 0 ; i_p < 5 ; i_p ++ ) { p [ i_p ] = rtP . dp_VTAIL_INDUCED
. flap_defl [ i_p ] ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { f2e5fcgb3v [ iU ]
= plook_linxp ( lqbwr5bl13 [ iU ] , p , 4U , & irfwaeofjb [ iU ] , & rtDW .
fjvix5f1rz [ iU ] ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { h5rdtgmjbr [ iU ]
= look1_iflf_pbinlcpw ( rtP . Constant7_Value [ iU ] , rtP .
uDLookupTable_bp01Data_gdxfx4c5j3 , & rtB . bmj5mlcorv [ 4 ] , & rtDW .
ajomfxtqpu [ iU ] , 5U ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { asvvjqwjnk [
iU ] = plook_u32ff_linxp ( h5rdtgmjbr [ iU ] , rtP . dp_VTAIL_INDUCED .
alphas , 24U , & bqkagafcws [ iU ] , & rtDW . ebgkmc055j [ iU ] ) ; } for (
iU = 0 ; iU < 16 ; iU ++ ) { h5rdtgmjbr [ iU ] = look1_iflf_pbinlcpw ( rtP .
Constant7_Value [ iU ] , rtP . uDLookupTable1_bp01Data_l0rn0vu22n , & rtB .
l0ol1nsxx1 [ 4 ] , & rtDW . jt5c1vowbk [ iU ] , 5U ) ; } for ( iU = 0 ; iU <
16 ; iU ++ ) { ayy24n2qrl [ iU ] = plook_u32ff_linxp ( h5rdtgmjbr [ iU ] ,
rtP . dp_VTAIL_INDUCED . V_infs , 1U , & biece21jwb [ iU ] , & rtDW .
etlbk5pudp [ iU ] ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { h5rdtgmjbr [ iU ]
= look1_iflf_pbinlcpw ( rtP . Constant7_Value [ iU ] , rtP .
uDLookupTable2_bp01Data , & prizw2ngzn [ 3 ] , & rtDW . lwhsegjgjj [ iU ] ,
5U ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { gm4p0rdh2f [ iU ] =
plook_u32ff_lincp ( h5rdtgmjbr [ iU ] , rtP . dp_VTAIL_INDUCED . DEP_J , 6U ,
& l0zhodiblx [ iU ] , & rtDW . jdaeny0wrl [ iU ] ) ; } for ( iU = 0 ; iU < 16
; iU ++ ) { frac_am [ 0 ] = irfwaeofjb [ iU ] ; frac_am [ 1 ] = bqkagafcws [
iU ] ; frac_am [ 2 ] = biece21jwb [ iU ] ; frac_am [ 3 ] = l0zhodiblx [ iU ]
; bpIndex_am [ 0 ] = f2e5fcgb3v [ iU ] ; bpIndex_am [ 1 ] = asvvjqwjnk [ iU ]
; bpIndex_am [ 2 ] = ayy24n2qrl [ iU ] ; bpIndex_am [ 3 ] = gm4p0rdh2f [ iU ]
; if ( rtP . Constant8_Value [ iU ] > 15.0 ) { bpIndex_am [ 4 ] = 15U ; }
else { bpIndex_am [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value [ iU ] , 0.0 ) ; } h5rdtgmjbr [ iU ] = intrp4d_fl_pw (
bpIndex_am , frac_am , & rtP . dp_VTAIL_INDUCED . V_induced [ 1750U *
bpIndex_am [ 4 ] ] , rtP . V_induced_dimSize ) ; } parallel_for ( 16 ,
pi0mmsuhtl , 1 , "pi0mmsuhtl" ) ; for ( i = 0 ; i < 16 ; i ++ ) { nzrycehjx4
= h5rdtgmjbr [ i ] + rtB . l0ol1nsxx1o [ i ] ; k1zpj42h11 [ i ] = nzrycehjx4
; k1zpj42h11 [ i + 16 ] = nzrycehjx4 ; k1zpj42h11 [ i + 32 ] = nzrycehjx4 ;
acmnvm3xsn [ i ] = nzrycehjx4 ; mybyivl1uq [ 3 * i ] = k1zpj42h11 [ i ] ;
mybyivl1uq [ 3 * i + 1 ] = k1zpj42h11 [ i + 16 ] ; mybyivl1uq [ 3 * i + 2 ] =
k1zpj42h11 [ i + 32 ] ; } for ( i = 0 ; i <= 44 ; i += 4 ) { tmp_f =
_mm_loadu_ps ( & mybyivl1uq [ i ] ) ; _mm_storeu_ps ( & pf3wpndfmw [ i ] ,
_mm_mul_ps ( tmp_f , tmp_f ) ) ; } for ( i = 0 ; i <= 6 ; i += 2 ) {
_mm_storeu_pd ( & lqbwr5bl13 [ i ] , _mm_mul_pd ( _mm_loadu_pd ( & rtP .
Constant_Value_e5wlvhhdos [ i ] ) , _mm_set1_pd ( ( real32_T )
hjpu2sw0us_idx_1 ) ) ) ; _mm_storeu_pd ( & lqbwr5bl13 [ i + 8 ] , _mm_mul_pd
( _mm_loadu_pd ( & rtP . Constant1_Value_ky1as5j1od [ i ] ) , _mm_set1_pd ( (
real32_T ) y_p ) ) ) ; } for ( i_p = 0 ; i_p < 10 ; i_p ++ ) { tmp [ i_p ] =
rtP . dp_VTAIL . rude_defl [ i_p ] ; } for ( iU = 0 ; iU < 16 ; iU ++ ) {
c3swjrmvem [ iU ] = plook_linxp ( lqbwr5bl13 [ iU ] , tmp , 9U , & nvl2rva03y
[ iU ] , & rtDW . hcj4r1mhfj [ iU ] ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) {
frac_ir [ 0 ] = irfwaeofjb [ iU ] ; frac_ir [ 1 ] = bqkagafcws [ iU ] ;
frac_ir [ 2 ] = biece21jwb [ iU ] ; frac_ir [ 3 ] = l0zhodiblx [ iU ] ;
bpIndex_ir [ 0 ] = f2e5fcgb3v [ iU ] ; bpIndex_ir [ 1 ] = asvvjqwjnk [ iU ] ;
bpIndex_ir [ 2 ] = ayy24n2qrl [ iU ] ; bpIndex_ir [ 3 ] = gm4p0rdh2f [ iU ] ;
if ( rtP . Constant8_Value [ iU ] > 15.0 ) { bpIndex_ir [ 4 ] = 15U ; } else
{ bpIndex_ir [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP . Constant8_Value [
iU ] , 0.0 ) ; } jtoldnh5tw = intrp4d_fl_pw ( bpIndex_ir , frac_ir , & rtP .
dp_VTAIL_INDUCED . alpha_induced [ 1750U * bpIndex_ir [ 4 ] ] , rtP .
alpha_induced_dimSize ) ; h5rdtgmjbr [ iU ] = jtoldnh5tw ; bqkagafcws [ iU ]
= jtoldnh5tw + rtB . bmj5mlcorvp [ iU ] ; } for ( iU = 0 ; iU < 16 ; iU ++ )
{ f2e5fcgb3v [ iU ] = plook_u32ff_linxp ( bqkagafcws [ iU ] , rtP . dp_VTAIL
. alphas , 12U , & h5rdtgmjbr [ iU ] , & rtDW . jixe3naiuk [ iU ] ) ; } for (
iU = 0 ; iU < 16 ; iU ++ ) { asvvjqwjnk [ iU ] = plook_u32ff_linxp ( rtB .
kdt3aavh12 [ iU ] , rtP . dp_VTAIL . betas , 8U , & bqkagafcws [ iU ] , &
rtDW . i5csyk2orb [ iU ] ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { lco5i2tcb1
= asvvjqwjnk [ iU ] ; n00enf32nh = f2e5fcgb3v [ iU ] ; mpp40chq4u =
c3swjrmvem [ iU ] ; nsmwxx5bxv = bqkagafcws [ iU ] ; jtoldnh5tw = h5rdtgmjbr
[ iU ] ; cwdb3qacqr = nvl2rva03y [ iU ] ; frac_mz [ 0 ] = cwdb3qacqr ;
frac_mz [ 1 ] = jtoldnh5tw ; frac_mz [ 2 ] = nsmwxx5bxv ; bpIndex_mz [ 0 ] =
mpp40chq4u ; bpIndex_mz [ 1 ] = n00enf32nh ; bpIndex_mz [ 2 ] = lco5i2tcb1 ;
if ( rtP . Constant8_Value_dv2bw3t1fx [ iU ] > 15.0 ) { bpIndex_mz [ 3 ] =
15U ; } else { bpIndex_mz [ 3 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_dv2bw3t1fx [ iU ] , 0.0 ) ; } k1zpj42h11 [ iU ] =
intrp3d_fl_pw ( bpIndex_mz , frac_mz , & rtP . dp_VTAIL . CFx [ 1170U *
bpIndex_mz [ 3 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_bjfyhrqui2 )
; frac_gx [ 0 ] = cwdb3qacqr ; frac_gx [ 1 ] = jtoldnh5tw ; frac_gx [ 2 ] =
nsmwxx5bxv ; bpIndex_gx [ 0 ] = mpp40chq4u ; bpIndex_gx [ 1 ] = n00enf32nh ;
bpIndex_gx [ 2 ] = lco5i2tcb1 ; if ( rtP . Constant8_Value_dv2bw3t1fx [ iU ]
> 15.0 ) { bpIndex_gx [ 3 ] = 15U ; } else { bpIndex_gx [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_dv2bw3t1fx [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU + 16 ] = intrp3d_fl_pw ( bpIndex_gx , frac_gx , & rtP .
dp_VTAIL . CFy [ 1170U * bpIndex_gx [ 3 ] ] , rtP .
InterpolationUsingPrelookup2_dimSize_kuoki441ue ) ; frac_hj [ 0 ] =
cwdb3qacqr ; frac_hj [ 1 ] = jtoldnh5tw ; frac_hj [ 2 ] = nsmwxx5bxv ;
bpIndex_hj [ 0 ] = mpp40chq4u ; bpIndex_hj [ 1 ] = n00enf32nh ; bpIndex_hj [
2 ] = lco5i2tcb1 ; if ( rtP . Constant8_Value_dv2bw3t1fx [ iU ] > 15.0 ) {
bpIndex_hj [ 3 ] = 15U ; } else { bpIndex_hj [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_dv2bw3t1fx [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU + 32 ] = intrp3d_fl_pw ( bpIndex_hj , frac_hj , & rtP .
dp_VTAIL . CFz [ 1170U * bpIndex_hj [ 3 ] ] , rtP .
InterpolationUsingPrelookup3_dimSize_l4hjayicil ) ; rtB . fjboexgbwl [ 3 * iU
] = pf3wpndfmw [ 3 * iU ] * k1zpj42h11 [ iU ] * rtB . lhopa3gq4f * rtP .
Gain2_Gain_l4kpd1aoo3 ; rtB . fjboexgbwl [ 3 * iU + 1 ] = pf3wpndfmw [ 3 * iU
+ 1 ] * k1zpj42h11 [ iU + 16 ] * rtB . lhopa3gq4f * rtP .
Gain2_Gain_l4kpd1aoo3 ; rtB . fjboexgbwl [ 3 * iU + 2 ] = pf3wpndfmw [ 3 * iU
+ 2 ] * k1zpj42h11 [ iU + 32 ] * rtB . lhopa3gq4f * rtP .
Gain2_Gain_l4kpd1aoo3 ; } for ( i = 0 ; i < 48 ; i ++ ) { mfkqvhwnqs [ i ] =
rtB . fjboexgbwl [ i ] ; } dh3zefosvy = muDoubleScalarAtan2 ( gkshvepttp [ 2
] , gkshvepttp [ 0 ] ) ; j0r0arniji = 0.0 ; for ( i_p = 0 ; i_p < 3 ; i_p ++
) { hy1xz2ukcn = gkshvepttp [ i_p ] ; cwdb3qacqr = - 0.0 ; for ( i_e = 0 ;
i_e < 16 ; i_e ++ ) { cwdb3qacqr += mfkqvhwnqs [ i_e * 3 + i_p ] ; }
p4xbdqn5oc [ i_p ] = cwdb3qacqr ; j0r0arniji += hy1xz2ukcn * hy1xz2ukcn ; }
j0r0arniji = muDoubleScalarSqrt ( j0r0arniji ) + rtP .
Constant1_Value_l0vzw51jub ; sb = gkshvepttp [ 1 ] / j0r0arniji ; if ( sb >
1.0 ) { sb = 1.0 ; } else if ( sb < - 1.0 ) { sb = - 1.0 ; } cwdb3qacqr =
muDoubleScalarAsin ( sb ) ; muDoubleScalarSinCos ( ( real32_T ) dh3zefosvy ,
& hy1xz2ukcn , & g52k1xdouv_idx_0 ) ; muDoubleScalarSinCos ( ( real32_T )
cwdb3qacqr , & gdvtsdc4i4_idx_1 , & g52k1xdouv_idx_1 ) ; k3uq5srdl2 [ 0 ] =
g52k1xdouv_idx_0 * g52k1xdouv_idx_1 ; k3uq5srdl2 [ 1 ] = - ( g52k1xdouv_idx_0
* gdvtsdc4i4_idx_1 ) ; k3uq5srdl2 [ 2 ] = - hy1xz2ukcn ; k3uq5srdl2 [ 3 ] =
gdvtsdc4i4_idx_1 ; k3uq5srdl2 [ 4 ] = g52k1xdouv_idx_1 ; k3uq5srdl2 [ 5 ] =
rtP . Constant_Value_jmvq0slwrb ; k3uq5srdl2 [ 6 ] = hy1xz2ukcn *
g52k1xdouv_idx_1 ; k3uq5srdl2 [ 7 ] = - ( hy1xz2ukcn * gdvtsdc4i4_idx_1 ) ;
k3uq5srdl2 [ 8 ] = g52k1xdouv_idx_0 ; bgilaurrar = plook_u32ff_linxp ( (
real32_T ) cwdb3qacqr , rtP . Prelookup_BreakpointsData , 12U , & nzrycehjx4
, & rtDW . g4ci4vpjq5 ) ; e0icl3aktx = plook_u32ff_linxp ( ( real32_T )
dh3zefosvy , rtP . Prelookup1_BreakpointsData , 14U , & csenboislk , & rtDW .
ilvem33lp3 ) ; frac_pr [ 0 ] = nzrycehjx4 ; frac_pr [ 1 ] = csenboislk ;
bpIndex_pr [ 0 ] = bgilaurrar ; bpIndex_pr [ 1 ] = e0icl3aktx ; frac_oj [ 0 ]
= nzrycehjx4 ; frac_oj [ 1 ] = csenboislk ; bpIndex_oj [ 0 ] = bgilaurrar ;
bpIndex_oj [ 1 ] = e0icl3aktx ; ipej1ctcz4 = ( real32_T ) j0r0arniji * (
real32_T ) j0r0arniji ; jtoldnh5tw = intrp2d_fu32fl_pw ( bpIndex_pr , frac_pr
, rtP . dp_FUSE_FIN . CD , 13U ) ; nsmwxx5bxv = intrp2d_fu32fl_pw (
bpIndex_oj , frac_oj , rtP . dp_FUSE_FIN . CS , 13U ) ; for ( i_p = 0 ; i_p <
3 ; i_p ++ ) { ivnfroue5d [ i_p ] = ( ( ( real32_T ) k3uq5srdl2 [ 3 * i_p + 1
] * nsmwxx5bxv + ( real32_T ) k3uq5srdl2 [ 3 * i_p ] * - jtoldnh5tw ) + (
real32_T ) k3uq5srdl2 [ 3 * i_p + 2 ] * - rtP . Constant_Value_ikjzkckehf ) *
ipej1ctcz4 * rtB . lhopa3gq4f * rtP . Gain_Gain_mx5de2nek5 ; }
muDoubleScalarSinCos ( ( real32_T ) dh3zefosvy , & hy1xz2ukcn , &
g52k1xdouv_idx_0 ) ; muDoubleScalarSinCos ( ( real32_T ) cwdb3qacqr , &
dh3zefosvy , & gdvtsdc4i4_idx_1 ) ; d0th5waoye [ 0 ] = g52k1xdouv_idx_0 *
gdvtsdc4i4_idx_1 ; d0th5waoye [ 1 ] = - ( g52k1xdouv_idx_0 * dh3zefosvy ) ;
d0th5waoye [ 2 ] = - hy1xz2ukcn ; d0th5waoye [ 3 ] = dh3zefosvy ; d0th5waoye
[ 4 ] = gdvtsdc4i4_idx_1 ; d0th5waoye [ 5 ] = rtP . Constant_Value_od0kiqq04i
; d0th5waoye [ 6 ] = hy1xz2ukcn * gdvtsdc4i4_idx_1 ; d0th5waoye [ 7 ] = - (
hy1xz2ukcn * dh3zefosvy ) ; d0th5waoye [ 8 ] = g52k1xdouv_idx_0 ; jtoldnh5tw
= - ( ( rtP . gear_drag_Value * ( real32_T ) rtB . izvthfvymi [ 19 ] + rtP .
extra_drag_Value ) * rtB . lhopa3gq4f * rtP . Gain_Gain_lgqalpl5jq * ( (
real32_T ) j0r0arniji * ( real32_T ) j0r0arniji ) ) ; di1tsh2hwg [ 0 ] = ( (
g0uuf55mpg [ 0 ] + bdvkktmal5_idx_0 ) + ( real32_T ) p4xbdqn5oc [ 0 ] ) +
ivnfroue5d [ 0 ] ; di1tsh2hwg [ 1 ] = ( ( - g0uuf55mpg [ 1 ] +
bdvkktmal5_idx_1 ) + ( real32_T ) p4xbdqn5oc [ 1 ] ) + ivnfroue5d [ 1 ] ;
di1tsh2hwg [ 2 ] = ( ( g0uuf55mpg [ 2 ] + bdvkktmal5_idx_2 ) + ( real32_T )
p4xbdqn5oc [ 2 ] ) + ivnfroue5d [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) { rtB .
a3mkzombuo [ i ] = ( ( ( real32_T ) d0th5waoye [ 3 * i + 1 ] * rtP .
Constant1_Value_miwybntjms + ( real32_T ) d0th5waoye [ 3 * i ] * jtoldnh5tw )
+ ( real32_T ) d0th5waoye [ 3 * i + 2 ] * rtP . Constant1_Value_miwybntjms )
+ di1tsh2hwg [ i ] ; p4xbdqn5oc [ i ] = rtB . a3mkzombuo [ i ] ; cwdb3qacqr =
- 0.0 ; for ( i_e = 0 ; i_e < 12 ; i_e ++ ) { cwdb3qacqr += rtB . hgoikru4cx
[ i_e * 3 + i ] ; } agmxf0bpkk [ i ] = cwdb3qacqr ; } muDoubleScalarSinCos (
rtB . gkiqijsiwi [ 2 ] , & awuilyxvbq [ 0 ] , & nl202crtfv [ 0 ] ) ;
muDoubleScalarSinCos ( rtB . gkiqijsiwi [ 1 ] , & awuilyxvbq [ 1 ] , &
nl202crtfv [ 1 ] ) ; muDoubleScalarSinCos ( rtB . gkiqijsiwi [ 0 ] , &
awuilyxvbq [ 2 ] , & nl202crtfv [ 2 ] ) ; ositd3czvc [ 0 ] = nl202crtfv [ 0 ]
* nl202crtfv [ 1 ] ; ositd3czvc [ 1 ] = awuilyxvbq [ 1 ] * awuilyxvbq [ 2 ] *
nl202crtfv [ 0 ] - awuilyxvbq [ 0 ] * nl202crtfv [ 2 ] ; ositd3czvc [ 2 ] =
awuilyxvbq [ 1 ] * nl202crtfv [ 2 ] * nl202crtfv [ 0 ] + awuilyxvbq [ 0 ] *
awuilyxvbq [ 2 ] ; ositd3czvc [ 3 ] = awuilyxvbq [ 0 ] * nl202crtfv [ 1 ] ;
ositd3czvc [ 4 ] = awuilyxvbq [ 1 ] * awuilyxvbq [ 2 ] * awuilyxvbq [ 0 ] +
nl202crtfv [ 0 ] * nl202crtfv [ 2 ] ; ositd3czvc [ 5 ] = awuilyxvbq [ 1 ] *
nl202crtfv [ 2 ] * awuilyxvbq [ 0 ] - nl202crtfv [ 0 ] * awuilyxvbq [ 2 ] ;
ositd3czvc [ 6 ] = - awuilyxvbq [ 1 ] ; ositd3czvc [ 7 ] = nl202crtfv [ 1 ] *
awuilyxvbq [ 2 ] ; ositd3czvc [ 8 ] = nl202crtfv [ 1 ] * nl202crtfv [ 2 ] ;
nl202crtfv [ 0 ] = rtP . Constant_Value_ae2ilawvvq ; nl202crtfv [ 1 ] = rtP .
Constant_Value_ae2ilawvvq ; nl202crtfv [ 2 ] = rtB . dtrv4jpa1s ; for ( i_p =
0 ; i_p < 3 ; i_p ++ ) { awuilyxvbq [ i_p ] = 0.0 ; awuilyxvbq [ i_p ] +=
ositd3czvc [ i_p ] * nl202crtfv [ 0 ] ; awuilyxvbq [ i_p ] += ositd3czvc [
i_p + 3 ] * nl202crtfv [ 1 ] ; awuilyxvbq [ i_p ] += ositd3czvc [ i_p + 6 ] *
nl202crtfv [ 2 ] ; } dh3zefosvy = muSingleScalarSqrt ( rtP .
Gain_Gain_bite31qwrd * rtB . lhopa3gq4f ) * j0r0arniji ; cwdb3qacqr =
look1_plinlxpw ( dh3zefosvy , rtP . dp_HTU . limits . V_up_lim , rtP . dp_HTU
. limits . T_up_lim , & rtDW . f5phmbs2tn , 4U ) ; j0r0arniji =
look1_plinlcpw ( rtB . izvthfvymi [ 18 ] , rtP . uDLookupTable1_bp01Data ,
rtP . uDLookupTable1_tableData , & rtDW . jkkslszvco , 1U ) ; if ( ! (
j0r0arniji > cwdb3qacqr ) ) { dh3zefosvy = look1_plinlxpw ( dh3zefosvy , rtP
. dp_HTU . limits . V_low_lim , rtP . dp_HTU . limits . T_low_lim , & rtDW .
ii3syi53bn , 5U ) ; if ( j0r0arniji < dh3zefosvy ) { cwdb3qacqr = dh3zefosvy
; } else { cwdb3qacqr = j0r0arniji ; } } nl202crtfv [ 0 ] = ( agmxf0bpkk [ 0
] + awuilyxvbq [ 0 ] ) + cwdb3qacqr ; nl202crtfv [ 1 ] = ( agmxf0bpkk [ 1 ] +
awuilyxvbq [ 1 ] ) + rtP . Constant_Value_byhs54latf ; nl202crtfv [ 2 ] = (
agmxf0bpkk [ 2 ] + awuilyxvbq [ 2 ] ) + rtP . Constant_Value_byhs54latf ;
l2oqv3g1zy [ 0 ] = p4xbdqn5oc [ 0 ] + nl202crtfv [ 0 ] ; l2oqv3g1zy [ 1 ] =
p4xbdqn5oc [ 1 ] + nl202crtfv [ 1 ] ; l2oqv3g1zy [ 2 ] = p4xbdqn5oc [ 2 ] +
nl202crtfv [ 2 ] ; muDoubleScalarSinCos ( rtB . gkiqijsiwi [ 2 ] , &
nl202crtfv [ 0 ] , & awuilyxvbq [ 0 ] ) ; muDoubleScalarSinCos ( rtB .
gkiqijsiwi [ 1 ] , & nl202crtfv [ 1 ] , & awuilyxvbq [ 1 ] ) ;
muDoubleScalarSinCos ( rtB . gkiqijsiwi [ 0 ] , & nl202crtfv [ 2 ] , &
awuilyxvbq [ 2 ] ) ; laapbpohx0 [ 0 ] = awuilyxvbq [ 0 ] * awuilyxvbq [ 1 ] ;
laapbpohx0 [ 1 ] = nl202crtfv [ 1 ] * nl202crtfv [ 2 ] * awuilyxvbq [ 0 ] -
nl202crtfv [ 0 ] * awuilyxvbq [ 2 ] ; laapbpohx0 [ 2 ] = nl202crtfv [ 1 ] *
awuilyxvbq [ 2 ] * awuilyxvbq [ 0 ] + nl202crtfv [ 0 ] * nl202crtfv [ 2 ] ;
laapbpohx0 [ 3 ] = nl202crtfv [ 0 ] * awuilyxvbq [ 1 ] ; laapbpohx0 [ 4 ] =
nl202crtfv [ 1 ] * nl202crtfv [ 2 ] * nl202crtfv [ 0 ] + awuilyxvbq [ 0 ] *
awuilyxvbq [ 2 ] ; laapbpohx0 [ 5 ] = nl202crtfv [ 1 ] * awuilyxvbq [ 2 ] *
nl202crtfv [ 0 ] - awuilyxvbq [ 0 ] * nl202crtfv [ 2 ] ; laapbpohx0 [ 6 ] = -
nl202crtfv [ 1 ] ; laapbpohx0 [ 7 ] = awuilyxvbq [ 1 ] * nl202crtfv [ 2 ] ;
laapbpohx0 [ 8 ] = awuilyxvbq [ 1 ] * awuilyxvbq [ 2 ] ; for ( i_p = 0 ; i_p
< 3 ; i_p ++ ) { for ( i_e = 0 ; i_e < 3 ; i_e ++ ) { a1ibcjxfxt [ i_p + 3 *
i_e ] = 0.0 ; a1ibcjxfxt [ i_p + 3 * i_e ] += mvrmkcanel [ i_e ] * laapbpohx0
[ i_p ] ; a1ibcjxfxt [ i_p + 3 * i_e ] += mvrmkcanel [ i_e + 3 ] * laapbpohx0
[ i_p + 3 ] ; a1ibcjxfxt [ i_p + 3 * i_e ] += mvrmkcanel [ i_e + 6 ] *
laapbpohx0 [ i_p + 6 ] ; } } ohkhd0oxm4 [ 0 ] = rtP . Gain1_Gain_p0ucw0fes4 [
0 ] * a1ibcjxfxt [ 7 ] ; ohkhd0oxm4 [ 1 ] = rtP . Gain1_Gain_p0ucw0fes4 [ 1 ]
* a1ibcjxfxt [ 4 ] ; ohkhd0oxm4 [ 2 ] = a1ibcjxfxt [ 1 ] * rtP .
Gain1_Gain_p0ucw0fes4 [ 2 ] ; ohkhd0oxm4 [ 3 ] = rtP . Gain2_Gain_lvzx3gz0bc
[ 0 ] * a1ibcjxfxt [ 2 ] ; ohkhd0oxm4 [ 5 ] = rtP . Gain3_Gain [ 0 ] *
a1ibcjxfxt [ 5 ] ; ohkhd0oxm4 [ 4 ] = a1ibcjxfxt [ 0 ] * rtP .
Gain2_Gain_lvzx3gz0bc [ 1 ] ; ohkhd0oxm4 [ 6 ] = rtP . Gain3_Gain [ 1 ] *
a1ibcjxfxt [ 8 ] ; if ( ( ohkhd0oxm4 [ 2 ] >= 1.0 ) || ( ohkhd0oxm4 [ 2 ] <=
- 1.0 ) ) { cm0yj40hhf ( ohkhd0oxm4 , nl202crtfv , & rtDW . cm0yj40hhfp , &
rtP . cm0yj40hhfp ) ; } else { biiojft2vb ( ohkhd0oxm4 , nl202crtfv , & rtDW
. biiojft2vbl , & rtP . biiojft2vbl ) ; } hqsannv2yt [ 0 ] = rtP .
Gain_Gain_eqt0ztfrqg [ 0 ] * nl202crtfv [ 0 ] ; hqsannv2yt [ 1 ] = rtP .
Gain_Gain_eqt0ztfrqg [ 1 ] * nl202crtfv [ 1 ] ; hqsannv2yt [ 2 ] = rtP .
Gain_Gain_eqt0ztfrqg [ 2 ] * nl202crtfv [ 2 ] ; i5nfd4afyg ( l2oqv3g1zy [ 0 ]
, l2oqv3g1zy [ 1 ] , l2oqv3g1zy [ 2 ] , hqsannv2yt [ 2 ] , hqsannv2yt [ 1 ] ,
hqsannv2yt [ 0 ] , hfwwqokbwo , oxomw1ffaj , & rtB . hcyzeqbkyr ) ;
j0r0arniji = rtDW . ewnwvk30kq + rtP . Constant1_Value_gvcoclhcjn ; if ( (
int32_T ) rtP . UpdateCompleteB_Value == 0 ) { dh3zefosvy = j0r0arniji ; }
else { dh3zefosvy = s315_iter ; } if ( ( rtB . oksmwianox [ ( int32_T )
dh3zefosvy - 1 ] - lyv0niej1z [ ( int32_T ) dh3zefosvy - 1 ] ) - rtP . fcc .
path_u_pert [ ( ( ( int32_T ) dh3zefosvy - 1 ) * 5 + ( int32_T ) dh3zefosvy )
- 1 ] >= rtP . Switch_Threshold ) { hy1xz2ukcn = rtP .
Constant_Value_nky0adtoeh ; } else { hy1xz2ukcn = rtP .
Constant1_Value_bhepbkxf1k ; } for ( i_p = 0 ; i_p < 5 ; i_p ++ ) {
f3an1bor3z [ i_p ] = rtP . fcc . path_u_pert [ ( ( int32_T ) dh3zefosvy - 1 )
* 5 + i_p ] * hy1xz2ukcn + lyv0niej1z [ i_p ] ; } cwdb3qacqr =
muDoubleScalarCos ( f3an1bor3z [ 3 ] ) ; cb = muDoubleScalarCos ( rtB .
mxf3xuhmmg ) ; g52k1xdouv_idx_0 = muDoubleScalarCos ( f3an1bor3z [ 4 ] ) ;
gdvtsdc4i4_idx_1 = muDoubleScalarSin ( f3an1bor3z [ 3 ] ) ; sb =
muDoubleScalarSin ( rtB . mxf3xuhmmg ) ; g52k1xdouv_idx_1 = muDoubleScalarSin
( f3an1bor3z [ 4 ] ) ; pciztti2mf [ 0 ] = cwdb3qacqr * cb ; pciztti2mf [ 1 ]
= sb ; pciztti2mf [ 2 ] = gdvtsdc4i4_idx_1 * cb ; pciztti2mf [ 3 ] = -
cwdb3qacqr * sb * g52k1xdouv_idx_0 + gdvtsdc4i4_idx_1 * g52k1xdouv_idx_1 ;
pciztti2mf [ 4 ] = cb * g52k1xdouv_idx_0 ; pciztti2mf [ 5 ] = -
gdvtsdc4i4_idx_1 * sb * g52k1xdouv_idx_0 - cwdb3qacqr * g52k1xdouv_idx_1 ;
pciztti2mf [ 6 ] = - cwdb3qacqr * sb * g52k1xdouv_idx_1 - gdvtsdc4i4_idx_1 *
g52k1xdouv_idx_0 ; pciztti2mf [ 7 ] = cb * g52k1xdouv_idx_1 ; pciztti2mf [ 8
] = - gdvtsdc4i4_idx_1 * sb * g52k1xdouv_idx_1 + cwdb3qacqr *
g52k1xdouv_idx_0 ; for ( i = 0 ; i < 3 ; i ++ ) { nl202crtfv [ i ] = 0.0 ;
for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { lbb4akipfk [ i + 3 * i_p ] = 0.0 ;
lbb4akipfk [ i + 3 * i_p ] += mvrmkcanel [ 3 * i_p ] * pciztti2mf [ i ] ;
lbb4akipfk [ i + 3 * i_p ] += mvrmkcanel [ 3 * i_p + 1 ] * pciztti2mf [ i + 3
] ; lbb4akipfk [ i + 3 * i_p ] += mvrmkcanel [ 3 * i_p + 2 ] * pciztti2mf [ i
+ 6 ] ; nl202crtfv [ i ] += lbb4akipfk [ 3 * i_p + i ] * fsgbuyd2yn [ i_p ] ;
} rtB . ktfkjimbx1 [ i ] = ( real32_T ) nl202crtfv [ i ] ; } jaejdr5121 [ 0 ]
= rtP . Gain1_Gain_fmztyhj5wj [ 0 ] * lbb4akipfk [ 3 ] ; jaejdr5121 [ 1 ] =
lbb4akipfk [ 0 ] * rtP . Gain1_Gain_fmztyhj5wj [ 1 ] ; jaejdr5121 [ 2 ] = rtP
. Gain1_Gain_fmztyhj5wj [ 2 ] * lbb4akipfk [ 6 ] ; jaejdr5121 [ 3 ] = rtP .
Gain2_Gain_jwchgvnc0v [ 0 ] * lbb4akipfk [ 7 ] ; jaejdr5121 [ 5 ] = rtP .
Gain3_Gain_ahtkcfwis1 [ 0 ] * lbb4akipfk [ 1 ] ; jaejdr5121 [ 4 ] = rtP .
Gain2_Gain_jwchgvnc0v [ 1 ] * lbb4akipfk [ 8 ] ; jaejdr5121 [ 6 ] = rtP .
Gain3_Gain_ahtkcfwis1 [ 1 ] * lbb4akipfk [ 4 ] ; if ( ( jaejdr5121 [ 2 ] >=
1.0 ) || ( jaejdr5121 [ 2 ] <= - 1.0 ) ) { cm0yj40hhf ( jaejdr5121 ,
awuilyxvbq , & rtDW . hga0x4lkqb , & rtP . hga0x4lkqb ) ; } else { biiojft2vb
( jaejdr5121 , awuilyxvbq , & rtDW . knjlllhond , & rtP . knjlllhond ) ; }
for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { p4xbdqn5oc [ i_p ] = 0.0 ; p4xbdqn5oc [
i_p ] += lbb4akipfk [ i_p ] * p1t5syw2cc [ 0 ] ; p4xbdqn5oc [ i_p ] +=
lbb4akipfk [ i_p + 3 ] * p1t5syw2cc [ 1 ] ; p4xbdqn5oc [ i_p ] += lbb4akipfk
[ i_p + 6 ] * p1t5syw2cc [ 2 ] ; } if ( s315_iter == 1 ) { c3klqxe1kc [ 9 ] =
rtB . mkyju0odm1 [ 0 ] ; c3klqxe1kc [ 10 ] = rtB . mkyju0odm1 [ 1 ] ;
c3klqxe1kc [ 11 ] = rtB . mkyju0odm1 [ 2 ] ; } c3klqxe1kc [ 6 ] = awuilyxvbq
[ 2 ] ; c3klqxe1kc [ 7 ] = awuilyxvbq [ 1 ] ; c3klqxe1kc [ 8 ] = awuilyxvbq [
0 ] ; rtB . nnfetlp35t [ 0 ] = ( real32_T ) c3klqxe1kc [ 9 ] ; rtB .
nnfetlp35t [ 1 ] = ( real32_T ) c3klqxe1kc [ 10 ] ; rtB . nnfetlp35t [ 2 ] =
( real32_T ) c3klqxe1kc [ 11 ] ; parallel_for ( 14 , e3uu0qv2yt , 1 ,
"e3uu0qv2yt" ) ; rtB . h43romyxqz [ 0 ] = rtB . nt1ep5s5gk [ 6 ] ; rtB .
h43romyxqz [ 1 ] = rtB . nt1ep5s5gk [ 5 ] ; rtB . h43romyxqz [ 2 ] = rtB .
nt1ep5s5gk [ 4 ] ; rtB . h43romyxqz [ 3 ] = rtB . nt1ep5s5gk [ 3 ] ; rtB .
h43romyxqz [ 4 ] = rtB . nt1ep5s5gk [ 2 ] ; rtB . h43romyxqz [ 5 ] = rtB .
nt1ep5s5gk [ 1 ] ; rtB . h43romyxqz [ 6 ] = rtB . nt1ep5s5gk [ 0 ] ;
e2bqxknvrt [ 0 ] = rtB . a3xfql2xu1 [ 6 ] ; e2bqxknvrt [ 1 ] = rtB .
a3xfql2xu1 [ 5 ] ; e2bqxknvrt [ 2 ] = rtB . a3xfql2xu1 [ 4 ] ; e2bqxknvrt [ 3
] = rtB . a3xfql2xu1 [ 3 ] ; e2bqxknvrt [ 4 ] = rtB . a3xfql2xu1 [ 2 ] ;
e2bqxknvrt [ 5 ] = rtB . a3xfql2xu1 [ 1 ] ; e2bqxknvrt [ 6 ] = rtB .
a3xfql2xu1 [ 0 ] ; e2bqxknvrt [ 7 ] = rtB . a3xfql2xu1 [ 6 ] ; e2bqxknvrt [ 8
] = rtB . a3xfql2xu1 [ 5 ] ; e2bqxknvrt [ 9 ] = rtB . a3xfql2xu1 [ 4 ] ;
e2bqxknvrt [ 10 ] = rtB . a3xfql2xu1 [ 3 ] ; e2bqxknvrt [ 11 ] = rtB .
a3xfql2xu1 [ 2 ] ; e2bqxknvrt [ 12 ] = rtB . a3xfql2xu1 [ 1 ] ; e2bqxknvrt [
13 ] = rtB . a3xfql2xu1 [ 0 ] ; e2bqxknvrt [ 14 ] = rtB . a3xfql2xu1 [ 6 ] ;
e2bqxknvrt [ 15 ] = rtB . a3xfql2xu1 [ 5 ] ; e2bqxknvrt [ 16 ] = rtB .
a3xfql2xu1 [ 4 ] ; e2bqxknvrt [ 17 ] = rtB . a3xfql2xu1 [ 3 ] ; e2bqxknvrt [
18 ] = rtB . a3xfql2xu1 [ 2 ] ; e2bqxknvrt [ 19 ] = rtB . a3xfql2xu1 [ 1 ] ;
e2bqxknvrt [ 20 ] = rtB . a3xfql2xu1 [ 0 ] ; for ( i_p = 0 ; i_p < 7 ; i_p ++
) { liydxvyvbx [ 3 * i_p ] = e2bqxknvrt [ i_p ] ; liydxvyvbx [ 3 * i_p + 1 ]
= e2bqxknvrt [ i_p + 7 ] ; liydxvyvbx [ 3 * i_p + 2 ] = e2bqxknvrt [ i_p + 14
] ; } for ( i = 0 ; i < 21 ; i ++ ) { cq2trmp0xn_idx_0 = liydxvyvbx [ i ] ;
du3g43l3nf [ i ] = cq2trmp0xn_idx_0 * cq2trmp0xn_idx_0 ; } rtB . omswnn4raq [
0 ] = rtB . izvthfvymi [ 0 ] ; rtB . omswnn4raq [ 1 ] = rtB . izvthfvymi [ 1
] ; rtB . omswnn4raq [ 2 ] = rtB . izvthfvymi [ 2 ] ; rtB . omswnn4raq [ 3 ]
= rtB . izvthfvymi [ 3 ] ; rtB . omswnn4raq [ 4 ] = f3an1bor3z [ 2 ] ; rtB .
omswnn4raq [ 5 ] = f3an1bor3z [ 2 ] ; ghhzyt0vqy = rtP . fcc . k_DEP_slope *
acafcyi14i [ 3 ] ; pxudjjmfpa ( f3an1bor3z [ 1 ] , ghhzyt0vqy , & rtB .
m2glog0cwe ) ; for ( i = 0 ; i < 12 ; i ++ ) { if ( rtB . m2glog0cwe .
lxe0n2dnxv [ i ] > f40yzytdn0 [ i + 6 ] ) { rtB . omswnn4raq [ i + 6 ] =
f40yzytdn0 [ i + 6 ] ; } else if ( rtB . m2glog0cwe . lxe0n2dnxv [ i ] < rtP
. Constant_Value_fpcopb1w40 ) { rtB . omswnn4raq [ i + 6 ] = rtP .
Constant_Value_fpcopb1w40 ; } else { rtB . omswnn4raq [ i + 6 ] = rtB .
m2glog0cwe . lxe0n2dnxv [ i ] ; } } rtB . omswnn4raq [ 18 ] = f3an1bor3z [ 0
] ; rtB . omswnn4raq [ 19 ] = rtB . izvthfvymi [ 19 ] ; if ( rtB . omswnn4raq
[ 2 ] > rtP . Saturation2_UpperSat_excxtpamnc ) { hjpu2sw0us_idx_1 = rtP .
Saturation2_UpperSat_excxtpamnc ; } else if ( rtB . omswnn4raq [ 2 ] < rtP .
Saturation2_LowerSat_d0apypejdr ) { hjpu2sw0us_idx_1 = rtP .
Saturation2_LowerSat_d0apypejdr ; } else { hjpu2sw0us_idx_1 = rtB .
omswnn4raq [ 2 ] ; } if ( rtB . omswnn4raq [ 3 ] > rtP .
Saturation3_UpperSat_jnym2dhklj ) { y_p = rtP .
Saturation3_UpperSat_jnym2dhklj ; } else if ( rtB . omswnn4raq [ 3 ] < rtP .
Saturation3_LowerSat_pf4sutrdfa ) { y_p = rtP .
Saturation3_LowerSat_pf4sutrdfa ; } else { y_p = rtB . omswnn4raq [ 3 ] ; }
if ( rtB . omswnn4raq [ 4 ] > rtP . Saturation6_UpperSat_huq1ln1fdj ) { y_e =
rtP . Saturation6_UpperSat_huq1ln1fdj ; } else if ( rtB . omswnn4raq [ 4 ] <
rtP . Saturation6_LowerSat_fwxdrxgwsl ) { y_e = rtP .
Saturation6_LowerSat_fwxdrxgwsl ; } else { y_e = rtB . omswnn4raq [ 4 ] ; }
if ( rtB . omswnn4raq [ 5 ] > rtP . Saturation4_UpperSat_p52jlkrtk5 ) { y_i =
rtP . Saturation4_UpperSat_p52jlkrtk5 ; } else if ( rtB . omswnn4raq [ 5 ] <
rtP . Saturation4_LowerSat_knx5q1ygpz ) { y_i = rtP .
Saturation4_LowerSat_knx5q1ygpz ; } else { y_i = rtB . omswnn4raq [ 5 ] ; }
hwi3v4bm1e = plook_u32ff_lincpa ( ( real32_T ) y_e , rtP . dp_WING_root .
flap_defl , 4U , & afif0ynjey , & rtDW . g32aqgov41 ) ; k4aa1o2bhw [ 0 ] =
rtB . nt1ep5s5gk [ 6 ] ; k4aa1o2bhw [ 1 ] = rtB . nt1ep5s5gk [ 5 ] ;
k4aa1o2bhw [ 2 ] = rtB . nt1ep5s5gk [ 4 ] ; k4aa1o2bhw [ 3 ] = rtB .
nt1ep5s5gk [ 3 ] ; k4aa1o2bhw [ 4 ] = rtB . nt1ep5s5gk [ 2 ] ; for ( iU = 0 ;
iU < 5 ; iU ++ ) { noamhvni52 [ iU ] = plook_u32ff_lincpa ( k4aa1o2bhw [ iU ]
, rtP . dp_WING_root . alphas , 24U , & dq5140y2bs [ iU ] , & rtDW .
cqa40zcbre [ iU ] ) ; } k4aa1o2bhw [ 0 ] = rtB . a3xfql2xu1 [ 6 ] ;
k4aa1o2bhw [ 1 ] = rtB . a3xfql2xu1 [ 5 ] ; k4aa1o2bhw [ 2 ] = rtB .
a3xfql2xu1 [ 4 ] ; k4aa1o2bhw [ 3 ] = rtB . a3xfql2xu1 [ 3 ] ; k4aa1o2bhw [ 4
] = rtB . a3xfql2xu1 [ 2 ] ; for ( iU = 0 ; iU < 5 ; iU ++ ) { m155nrsjmd [
iU ] = plook_u32ff_lincpa ( k4aa1o2bhw [ iU ] , rtP . dp_WING_root . V , 1U ,
& bdbtstt51i [ iU ] , & rtDW . fscf4o21tu [ iU ] ) ; } for ( i = 0 ; i <= 10
; i += 2 ) { tmp_c = _mm_loadu_pd ( & rtB . dy2k1mnk5k [ i ] ) ;
_mm_storeu_pd ( & rtB . duodwdurl2 [ i ] , _mm_mul_pd ( _mm_add_pd (
_mm_mul_pd ( _mm_set1_pd ( c3klqxe1kc [ 11 ] ) , tmp_c ) , _mm_set1_pd (
nl202crtfv [ 0 ] ) ) , _mm_set1_pd ( rtB . c3gvsthqob ) ) ) ; } parallel_for
( 12 , otzd1cms4c , 1 , "otzd1cms4c" ) ; for ( i = 0 ; i < 12 ; i ++ ) {
prizw2ngzn [ i ] = ( real32_T ) rtB . bxtb3gohdc [ i ] ; } k4aa1o2bhw [ 0 ] =
prizw2ngzn [ 5 ] ; k4aa1o2bhw [ 1 ] = prizw2ngzn [ 4 ] ; k4aa1o2bhw [ 2 ] =
prizw2ngzn [ 3 ] ; k4aa1o2bhw [ 3 ] = prizw2ngzn [ 2 ] ; k4aa1o2bhw [ 4 ] =
prizw2ngzn [ 1 ] ; for ( iU = 0 ; iU < 5 ; iU ++ ) { dqy5hcjfdc [ iU ] =
plook_u32ff_lincpa ( k4aa1o2bhw [ iU ] , rtP . dp_WING_root . DEP_J , 6U , &
ndmwly2tkn [ iU ] , & rtDW . ijffkakodk [ iU ] ) ; } frac_ot [ 0 ] =
afif0ynjey ; bpIndex_ot [ 0 ] = hwi3v4bm1e ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_ot [ 1 ] = dq5140y2bs [ iU ] ; frac_ot [ 2 ] = bdbtstt51i [ iU ] ;
frac_ot [ 3 ] = ndmwly2tkn [ iU ] ; bpIndex_ot [ 1 ] = noamhvni52 [ iU ] ;
bpIndex_ot [ 2 ] = m155nrsjmd [ iU ] ; bpIndex_ot [ 3 ] = dqy5hcjfdc [ iU ] ;
if ( rtP . Constant8_Value_oxicdwsrs5 [ iU ] > 4.0 ) { bpIndex_ot [ 4 ] = 4U
; } else { bpIndex_ot [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_oxicdwsrs5 [ iU ] , 0.0 ) ; } piziyg51sq [ iU ] =
intrp4d_fu32fla_pw ( bpIndex_ot , frac_ot , & rtP . dp_WING_root . CD [ 1750U
* bpIndex_ot [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_atheik2o4u
, rtP . InterpolationUsingPrelookup1_maxIndex_lec2tbmzkq ) ; } if ( rtB .
omswnn4raq [ 0 ] > rtP . Saturation_UpperSat_e3rpp4rrcj ) { g52k1xdouv_idx_1
= rtP . Saturation_UpperSat_e3rpp4rrcj ; } else if ( rtB . omswnn4raq [ 0 ] <
rtP . Saturation_LowerSat_nn3oqbyvzg ) { g52k1xdouv_idx_1 = rtP .
Saturation_LowerSat_nn3oqbyvzg ; } else { g52k1xdouv_idx_1 = rtB . omswnn4raq
[ 0 ] ; } g2xbodp0xg = plook_u32ff_lincpa ( ( real32_T ) g52k1xdouv_idx_1 ,
rtP . dp_WING_tip . ail_defl , 6U , & gg4lrsx5if , & rtDW . lic05r3aek ) ;
g3ud4i51ui_idx_0 = plook_u32ff_lincpa ( rtB . nt1ep5s5gk [ 1 ] , rtP .
dp_WING_tip . alphas , 24U , & mzlgmqychg [ 0 ] , & rtDW . onbuk53hje [ 0 ] )
; g3ud4i51ui_idx_1 = plook_u32ff_lincpa ( rtB . nt1ep5s5gk [ 0 ] , rtP .
dp_WING_tip . alphas , 24U , & mzlgmqychg [ 1 ] , & rtDW . onbuk53hje [ 1 ] )
; bcylnfhnxj_idx_0 = plook_u32ff_lincpa ( rtB . a3xfql2xu1 [ 1 ] , rtP .
dp_WING_tip . V , 1U , & myhzkqobqq [ 0 ] , & rtDW . e5hj5xeuwo [ 0 ] ) ;
bcylnfhnxj_idx_1 = plook_u32ff_lincpa ( rtB . a3xfql2xu1 [ 0 ] , rtP .
dp_WING_tip . V , 1U , & myhzkqobqq [ 1 ] , & rtDW . e5hj5xeuwo [ 1 ] ) ;
ievp443ply_idx_0 = plook_u32ff_lincpa ( prizw2ngzn [ 1 ] , rtP . dp_WING_tip
. DEP_J , 6U , & oixlaxkj0z [ 0 ] , & rtDW . oznafgtnf4 [ 0 ] ) ;
ievp443ply_idx_1 = plook_u32ff_lincpa ( prizw2ngzn [ 0 ] , rtP . dp_WING_tip
. DEP_J , 6U , & oixlaxkj0z [ 1 ] , & rtDW . oznafgtnf4 [ 1 ] ) ; frac_ch [ 0
] = gg4lrsx5if ; bpIndex_ch [ 0 ] = g2xbodp0xg ; frac_ch [ 1 ] = mzlgmqychg [
0 ] ; frac_ch [ 2 ] = myhzkqobqq [ 0 ] ; frac_ch [ 3 ] = oixlaxkj0z [ 0 ] ;
bpIndex_ch [ 1 ] = g3ud4i51ui_idx_0 ; bpIndex_ch [ 2 ] = bcylnfhnxj_idx_0 ;
bpIndex_ch [ 3 ] = ievp443ply_idx_0 ; if ( rtP . Constant8_Value_k4nt3fz4xw [
0 ] > 1.0 ) { bpIndex_ch [ 4 ] = 1U ; } else { bpIndex_ch [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_k4nt3fz4xw [ 0 ] , 0.0 ) ; }
piziyg51sq [ 5 ] = intrp4d_fu32fla_pw ( bpIndex_ch , frac_ch , & rtP .
dp_WING_tip . CD [ 2450U * bpIndex_ch [ 4 ] ] , rtP .
InterpolationUsingPrelookup1_dimSize_naxeuvxn1f , rtP .
InterpolationUsingPrelookup1_maxIndex_a335itov2e ) ; frac_ch [ 1 ] =
mzlgmqychg [ 1 ] ; frac_ch [ 2 ] = myhzkqobqq [ 1 ] ; frac_ch [ 3 ] =
oixlaxkj0z [ 1 ] ; bpIndex_ch [ 1 ] = g3ud4i51ui_idx_1 ; bpIndex_ch [ 2 ] =
bcylnfhnxj_idx_1 ; bpIndex_ch [ 3 ] = ievp443ply_idx_1 ; if ( rtP .
Constant8_Value_k4nt3fz4xw [ 1 ] > 1.0 ) { bpIndex_ch [ 4 ] = 1U ; } else {
bpIndex_ch [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_k4nt3fz4xw [ 1 ] , 0.0 ) ; } piziyg51sq [ 6 ] =
intrp4d_fu32fla_pw ( bpIndex_ch , frac_ch , & rtP . dp_WING_tip . CD [ 2450U
* bpIndex_ch [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_naxeuvxn1f
, rtP . InterpolationUsingPrelookup1_maxIndex_a335itov2e ) ; frac_dh [ 0 ] =
afif0ynjey ; bpIndex_dh [ 0 ] = hwi3v4bm1e ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_dh [ 1 ] = dq5140y2bs [ iU ] ; frac_dh [ 2 ] = bdbtstt51i [ iU ] ;
frac_dh [ 3 ] = ndmwly2tkn [ iU ] ; bpIndex_dh [ 1 ] = noamhvni52 [ iU ] ;
bpIndex_dh [ 2 ] = m155nrsjmd [ iU ] ; bpIndex_dh [ 3 ] = dqy5hcjfdc [ iU ] ;
if ( rtP . Constant8_Value_oxicdwsrs5 [ iU ] > 4.0 ) { bpIndex_dh [ 4 ] = 4U
; } else { bpIndex_dh [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_oxicdwsrs5 [ iU ] , 0.0 ) ; } piziyg51sq [ iU + 7 ] =
intrp4d_fu32fla_pw ( bpIndex_dh , frac_dh , & rtP . dp_WING_root . CS [ 1750U
* bpIndex_dh [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_nekhswqi4j
, rtP . InterpolationUsingPrelookup2_maxIndex_oi1k2izxqj ) ; } frac_dd [ 0 ]
= gg4lrsx5if ; bpIndex_dd [ 0 ] = g2xbodp0xg ; frac_dd [ 1 ] = mzlgmqychg [ 0
] ; frac_dd [ 2 ] = myhzkqobqq [ 0 ] ; frac_dd [ 3 ] = oixlaxkj0z [ 0 ] ;
bpIndex_dd [ 1 ] = g3ud4i51ui_idx_0 ; bpIndex_dd [ 2 ] = bcylnfhnxj_idx_0 ;
bpIndex_dd [ 3 ] = ievp443ply_idx_0 ; if ( rtP . Constant8_Value_k4nt3fz4xw [
0 ] > 1.0 ) { bpIndex_dd [ 4 ] = 1U ; } else { bpIndex_dd [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_k4nt3fz4xw [ 0 ] , 0.0 ) ; }
piziyg51sq [ 12 ] = intrp4d_fu32fla_pw ( bpIndex_dd , frac_dd , & rtP .
dp_WING_tip . CS [ 2450U * bpIndex_dd [ 4 ] ] , rtP .
InterpolationUsingPrelookup2_dimSize_bs0mlngpwq , rtP .
InterpolationUsingPrelookup2_maxIndex_duxspq2toa ) ; frac_dd [ 1 ] =
mzlgmqychg [ 1 ] ; frac_dd [ 2 ] = myhzkqobqq [ 1 ] ; frac_dd [ 3 ] =
oixlaxkj0z [ 1 ] ; bpIndex_dd [ 1 ] = g3ud4i51ui_idx_1 ; bpIndex_dd [ 2 ] =
bcylnfhnxj_idx_1 ; bpIndex_dd [ 3 ] = ievp443ply_idx_1 ; if ( rtP .
Constant8_Value_k4nt3fz4xw [ 1 ] > 1.0 ) { bpIndex_dd [ 4 ] = 1U ; } else {
bpIndex_dd [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_k4nt3fz4xw [ 1 ] , 0.0 ) ; } piziyg51sq [ 13 ] =
intrp4d_fu32fla_pw ( bpIndex_dd , frac_dd , & rtP . dp_WING_tip . CS [ 2450U
* bpIndex_dd [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_bs0mlngpwq
, rtP . InterpolationUsingPrelookup2_maxIndex_duxspq2toa ) ; frac_i2 [ 0 ] =
afif0ynjey ; bpIndex_i2 [ 0 ] = hwi3v4bm1e ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_i2 [ 1 ] = dq5140y2bs [ iU ] ; frac_i2 [ 2 ] = bdbtstt51i [ iU ] ;
frac_i2 [ 3 ] = ndmwly2tkn [ iU ] ; bpIndex_i2 [ 1 ] = noamhvni52 [ iU ] ;
bpIndex_i2 [ 2 ] = m155nrsjmd [ iU ] ; bpIndex_i2 [ 3 ] = dqy5hcjfdc [ iU ] ;
if ( rtP . Constant8_Value_oxicdwsrs5 [ iU ] > 4.0 ) { bpIndex_i2 [ 4 ] = 4U
; } else { bpIndex_i2 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_oxicdwsrs5 [ iU ] , 0.0 ) ; } piziyg51sq [ iU + 14 ] =
intrp4d_fu32fla_pw ( bpIndex_i2 , frac_i2 , & rtP . dp_WING_root . CL [ 1750U
* bpIndex_i2 [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_m40doxbusc
, rtP . InterpolationUsingPrelookup3_maxIndex_byeq1y44kc ) ; } frac_hr [ 0 ]
= gg4lrsx5if ; bpIndex_hr [ 0 ] = g2xbodp0xg ; frac_hr [ 1 ] = mzlgmqychg [ 0
] ; frac_hr [ 2 ] = myhzkqobqq [ 0 ] ; frac_hr [ 3 ] = oixlaxkj0z [ 0 ] ;
bpIndex_hr [ 1 ] = g3ud4i51ui_idx_0 ; bpIndex_hr [ 2 ] = bcylnfhnxj_idx_0 ;
bpIndex_hr [ 3 ] = ievp443ply_idx_0 ; if ( rtP . Constant8_Value_k4nt3fz4xw [
0 ] > 1.0 ) { bpIndex_hr [ 4 ] = 1U ; } else { bpIndex_hr [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_k4nt3fz4xw [ 0 ] , 0.0 ) ; }
piziyg51sq [ 19 ] = intrp4d_fu32fla_pw ( bpIndex_hr , frac_hr , & rtP .
dp_WING_tip . CL [ 2450U * bpIndex_hr [ 4 ] ] , rtP .
InterpolationUsingPrelookup3_dimSize_fbbpm2qi25 , rtP .
InterpolationUsingPrelookup3_maxIndex_b0cekt332v ) ; frac_hr [ 1 ] =
mzlgmqychg [ 1 ] ; frac_hr [ 2 ] = myhzkqobqq [ 1 ] ; frac_hr [ 3 ] =
oixlaxkj0z [ 1 ] ; bpIndex_hr [ 1 ] = g3ud4i51ui_idx_1 ; bpIndex_hr [ 2 ] =
bcylnfhnxj_idx_1 ; bpIndex_hr [ 3 ] = ievp443ply_idx_1 ; if ( rtP .
Constant8_Value_k4nt3fz4xw [ 1 ] > 1.0 ) { bpIndex_hr [ 4 ] = 1U ; } else {
bpIndex_hr [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_k4nt3fz4xw [ 1 ] , 0.0 ) ; } piziyg51sq [ 20 ] =
intrp4d_fu32fla_pw ( bpIndex_hr , frac_hr , & rtP . dp_WING_tip . CL [ 2450U
* bpIndex_hr [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_fbbpm2qi25
, rtP . InterpolationUsingPrelookup3_maxIndex_b0cekt332v ) ; dbff0mb3bq = rtB
. lhopa3gq4f ; for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { rtB . jsvvojf0gq [ 3 *
i_p ] = du3g43l3nf [ 3 * i_p ] * piziyg51sq [ i_p ] * rtB . lhopa3gq4f * rtP
. Gain_Gain_fqpuwwoy2d ; rtB . jsvvojf0gq [ 3 * i_p + 1 ] = du3g43l3nf [ 3 *
i_p + 1 ] * piziyg51sq [ i_p + 7 ] * rtB . lhopa3gq4f * rtP .
Gain_Gain_fqpuwwoy2d ; rtB . jsvvojf0gq [ 3 * i_p + 2 ] = du3g43l3nf [ 3 *
i_p + 2 ] * piziyg51sq [ i_p + 14 ] * rtB . lhopa3gq4f * rtP .
Gain_Gain_fqpuwwoy2d ; } parallel_for ( 7 , lkoepecx5g , 1 , "lkoepecx5g" ) ;
for ( i = 0 ; i < 21 ; i ++ ) { dq25kgk52k [ i ] = rtB . db2vpmywoos [ i ] ;
} for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { cwdb3qacqr = - 0.0 ; for ( i_e = 0 ;
i_e < 7 ; i_e ++ ) { cwdb3qacqr += dq25kgk52k [ i_e * 3 + i_p ] ; }
awuilyxvbq [ i_p ] = cwdb3qacqr ; } bdvkktmal5_idx_0 = ( real32_T )
awuilyxvbq [ 0 ] ; bdvkktmal5_idx_1 = ( real32_T ) awuilyxvbq [ 1 ] ;
bdvkktmal5_idx_2 = ( real32_T ) awuilyxvbq [ 2 ] ; for ( i = 0 ; i < 7 ; i ++
) { ai3hxrjap5 [ i ] = rtB . a3xfql2xu1 [ i + 7 ] ; ai3hxrjap5 [ i + 7 ] =
rtB . a3xfql2xu1 [ i + 7 ] ; ai3hxrjap5 [ i + 14 ] = rtB . a3xfql2xu1 [ i + 7
] ; liydxvyvbx [ 3 * i ] = ai3hxrjap5 [ i ] ; liydxvyvbx [ 3 * i + 1 ] =
ai3hxrjap5 [ i + 7 ] ; liydxvyvbx [ 3 * i + 2 ] = ai3hxrjap5 [ i + 14 ] ; }
for ( i_p = 0 ; i_p < 21 ; i_p ++ ) { cq2trmp0xn_idx_0 = liydxvyvbx [ i_p ] ;
cq2trmp0xn_idx_0 *= cq2trmp0xn_idx_0 ; liydxvyvbx [ i_p ] = cq2trmp0xn_idx_0
; } bfvckiyvxm = plook_u32ff_lincpa ( ( real32_T ) y_i , rtP . dp_WING_root .
flap_defl , 4U , & adrjjwpu5v , & rtDW . kziglxgcas ) ; for ( iU = 0 ; iU < 5
; iU ++ ) { o1tzdshqbe [ iU ] = plook_u32ff_lincpa ( rtB . nt1ep5s5gk [ iU +
7 ] , rtP . dp_WING_root . alphas , 24U , & k4aa1o2bhw [ iU ] , & rtDW .
dwguyo0lfa [ iU ] ) ; } for ( iU = 0 ; iU < 5 ; iU ++ ) { ku12scvirb [ iU ] =
plook_u32ff_lincpa ( rtB . a3xfql2xu1 [ iU + 7 ] , rtP . dp_WING_root . V ,
1U , & nirteiccr5 [ iU ] , & rtDW . gvlplkt5zq [ iU ] ) ; } for ( iU = 0 ; iU
< 5 ; iU ++ ) { mqutrzwpbz [ iU ] = plook_u32ff_lincpa ( prizw2ngzn [ iU + 6
] , rtP . dp_WING_root . DEP_J , 6U , & hlj0oel2qy [ iU ] , & rtDW .
kooonezqli [ iU ] ) ; } frac_dj [ 0 ] = adrjjwpu5v ; bpIndex_dj [ 0 ] =
bfvckiyvxm ; for ( iU = 0 ; iU < 5 ; iU ++ ) { frac_dj [ 1 ] = k4aa1o2bhw [
iU ] ; frac_dj [ 2 ] = nirteiccr5 [ iU ] ; frac_dj [ 3 ] = hlj0oel2qy [ iU ]
; bpIndex_dj [ 1 ] = o1tzdshqbe [ iU ] ; bpIndex_dj [ 2 ] = ku12scvirb [ iU ]
; bpIndex_dj [ 3 ] = mqutrzwpbz [ iU ] ; if ( rtP .
Constant8_Value_njl3h32qv2 [ iU ] > 4.0 ) { bpIndex_dj [ 4 ] = 4U ; } else {
bpIndex_dj [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_njl3h32qv2 [ iU ] , 0.0 ) ; } ld2pkixaze [ iU ] =
intrp4d_fu32fla_pw ( bpIndex_dj , frac_dj , & rtP . dp_WING_root . CD [ 1750U
* bpIndex_dj [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_dfcg3gz54g
, rtP . InterpolationUsingPrelookup1_maxIndex_jizsobonmk ) ; } if ( rtB .
omswnn4raq [ 1 ] > rtP . Saturation1_UpperSat_geh4hyaxbs ) { g52k1xdouv_idx_1
= rtP . Saturation1_UpperSat_geh4hyaxbs ; } else if ( rtB . omswnn4raq [ 1 ]
< rtP . Saturation1_LowerSat_cz42deahan ) { g52k1xdouv_idx_1 = rtP .
Saturation1_LowerSat_cz42deahan ; } else { g52k1xdouv_idx_1 = rtB .
omswnn4raq [ 1 ] ; } gtuyvnkhut = plook_u32ff_lincpa ( ( real32_T )
g52k1xdouv_idx_1 , rtP . dp_WING_tip . ail_defl , 6U , & do51zgnib3 , & rtDW
. evhyqcpton ) ; mzftiie1yg_idx_0 = plook_u32ff_lincpa ( rtB . nt1ep5s5gk [
12 ] , rtP . dp_WING_tip . alphas , 24U , & ceos33awbx [ 0 ] , & rtDW .
nab3mylhfe [ 0 ] ) ; mzftiie1yg_idx_1 = plook_u32ff_lincpa ( rtB . nt1ep5s5gk
[ 13 ] , rtP . dp_WING_tip . alphas , 24U , & ceos33awbx [ 1 ] , & rtDW .
nab3mylhfe [ 1 ] ) ; gkal1jh445_idx_0 = plook_u32ff_lincpa ( rtB . a3xfql2xu1
[ 12 ] , rtP . dp_WING_tip . V , 1U , & a3usql3psn [ 0 ] , & rtDW .
i5342xzqyj [ 0 ] ) ; gkal1jh445_idx_1 = plook_u32ff_lincpa ( rtB . a3xfql2xu1
[ 13 ] , rtP . dp_WING_tip . V , 1U , & a3usql3psn [ 1 ] , & rtDW .
i5342xzqyj [ 1 ] ) ; gloodttbiv_idx_0 = plook_u32ff_lincpa ( prizw2ngzn [ 10
] , rtP . dp_WING_tip . DEP_J , 6U , & bglwh2qkc0 [ 0 ] , & rtDW . mxv2hnd5hy
[ 0 ] ) ; gloodttbiv_idx_1 = plook_u32ff_lincpa ( prizw2ngzn [ 11 ] , rtP .
dp_WING_tip . DEP_J , 6U , & bglwh2qkc0 [ 1 ] , & rtDW . mxv2hnd5hy [ 1 ] ) ;
frac_f3 [ 0 ] = do51zgnib3 ; bpIndex_f3 [ 0 ] = gtuyvnkhut ; frac_f3 [ 1 ] =
ceos33awbx [ 0 ] ; frac_f3 [ 2 ] = a3usql3psn [ 0 ] ; frac_f3 [ 3 ] =
bglwh2qkc0 [ 0 ] ; bpIndex_f3 [ 1 ] = mzftiie1yg_idx_0 ; bpIndex_f3 [ 2 ] =
gkal1jh445_idx_0 ; bpIndex_f3 [ 3 ] = gloodttbiv_idx_0 ; if ( rtP .
Constant8_Value_feoxjcmban [ 0 ] > 1.0 ) { bpIndex_f3 [ 4 ] = 1U ; } else {
bpIndex_f3 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_feoxjcmban [ 0 ] , 0.0 ) ; } ld2pkixaze [ 5 ] =
intrp4d_fu32fla_pw ( bpIndex_f3 , frac_f3 , & rtP . dp_WING_tip . CD [ 2450U
* bpIndex_f3 [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_e0xuxqxzgq
, rtP . InterpolationUsingPrelookup1_maxIndex_acxovp4bty ) ; frac_f3 [ 1 ] =
ceos33awbx [ 1 ] ; frac_f3 [ 2 ] = a3usql3psn [ 1 ] ; frac_f3 [ 3 ] =
bglwh2qkc0 [ 1 ] ; bpIndex_f3 [ 1 ] = mzftiie1yg_idx_1 ; bpIndex_f3 [ 2 ] =
gkal1jh445_idx_1 ; bpIndex_f3 [ 3 ] = gloodttbiv_idx_1 ; if ( rtP .
Constant8_Value_feoxjcmban [ 1 ] > 1.0 ) { bpIndex_f3 [ 4 ] = 1U ; } else {
bpIndex_f3 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_feoxjcmban [ 1 ] , 0.0 ) ; } ld2pkixaze [ 6 ] =
intrp4d_fu32fla_pw ( bpIndex_f3 , frac_f3 , & rtP . dp_WING_tip . CD [ 2450U
* bpIndex_f3 [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_e0xuxqxzgq
, rtP . InterpolationUsingPrelookup1_maxIndex_acxovp4bty ) ; frac_l3 [ 0 ] =
adrjjwpu5v ; bpIndex_l3 [ 0 ] = bfvckiyvxm ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_l3 [ 1 ] = k4aa1o2bhw [ iU ] ; frac_l3 [ 2 ] = nirteiccr5 [ iU ] ;
frac_l3 [ 3 ] = hlj0oel2qy [ iU ] ; bpIndex_l3 [ 1 ] = o1tzdshqbe [ iU ] ;
bpIndex_l3 [ 2 ] = ku12scvirb [ iU ] ; bpIndex_l3 [ 3 ] = mqutrzwpbz [ iU ] ;
if ( rtP . Constant8_Value_njl3h32qv2 [ iU ] > 4.0 ) { bpIndex_l3 [ 4 ] = 4U
; } else { bpIndex_l3 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_njl3h32qv2 [ iU ] , 0.0 ) ; } ld2pkixaze [ iU + 7 ] =
intrp4d_fu32fla_pw ( bpIndex_l3 , frac_l3 , & rtP . dp_WING_root . CS [ 1750U
* bpIndex_l3 [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_pqzao3330v
, rtP . InterpolationUsingPrelookup2_maxIndex_jda425ghbq ) ; } frac_f4 [ 0 ]
= do51zgnib3 ; bpIndex_f4 [ 0 ] = gtuyvnkhut ; frac_f4 [ 1 ] = ceos33awbx [ 0
] ; frac_f4 [ 2 ] = a3usql3psn [ 0 ] ; frac_f4 [ 3 ] = bglwh2qkc0 [ 0 ] ;
bpIndex_f4 [ 1 ] = mzftiie1yg_idx_0 ; bpIndex_f4 [ 2 ] = gkal1jh445_idx_0 ;
bpIndex_f4 [ 3 ] = gloodttbiv_idx_0 ; if ( rtP . Constant8_Value_feoxjcmban [
0 ] > 1.0 ) { bpIndex_f4 [ 4 ] = 1U ; } else { bpIndex_f4 [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_feoxjcmban [ 0 ] , 0.0 ) ; }
ld2pkixaze [ 12 ] = intrp4d_fu32fla_pw ( bpIndex_f4 , frac_f4 , & rtP .
dp_WING_tip . CS [ 2450U * bpIndex_f4 [ 4 ] ] , rtP .
InterpolationUsingPrelookup2_dimSize_p2ddjqqlcc , rtP .
InterpolationUsingPrelookup2_maxIndex_a253nepeon ) ; frac_f4 [ 1 ] =
ceos33awbx [ 1 ] ; frac_f4 [ 2 ] = a3usql3psn [ 1 ] ; frac_f4 [ 3 ] =
bglwh2qkc0 [ 1 ] ; bpIndex_f4 [ 1 ] = mzftiie1yg_idx_1 ; bpIndex_f4 [ 2 ] =
gkal1jh445_idx_1 ; bpIndex_f4 [ 3 ] = gloodttbiv_idx_1 ; if ( rtP .
Constant8_Value_feoxjcmban [ 1 ] > 1.0 ) { bpIndex_f4 [ 4 ] = 1U ; } else {
bpIndex_f4 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_feoxjcmban [ 1 ] , 0.0 ) ; } ld2pkixaze [ 13 ] =
intrp4d_fu32fla_pw ( bpIndex_f4 , frac_f4 , & rtP . dp_WING_tip . CS [ 2450U
* bpIndex_f4 [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_p2ddjqqlcc
, rtP . InterpolationUsingPrelookup2_maxIndex_a253nepeon ) ; frac_gy [ 0 ] =
adrjjwpu5v ; bpIndex_gy [ 0 ] = bfvckiyvxm ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_gy [ 1 ] = k4aa1o2bhw [ iU ] ; frac_gy [ 2 ] = nirteiccr5 [ iU ] ;
frac_gy [ 3 ] = hlj0oel2qy [ iU ] ; bpIndex_gy [ 1 ] = o1tzdshqbe [ iU ] ;
bpIndex_gy [ 2 ] = ku12scvirb [ iU ] ; bpIndex_gy [ 3 ] = mqutrzwpbz [ iU ] ;
if ( rtP . Constant8_Value_njl3h32qv2 [ iU ] > 4.0 ) { bpIndex_gy [ 4 ] = 4U
; } else { bpIndex_gy [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_njl3h32qv2 [ iU ] , 0.0 ) ; } ld2pkixaze [ iU + 14 ] =
intrp4d_fu32fla_pw ( bpIndex_gy , frac_gy , & rtP . dp_WING_root . CL [ 1750U
* bpIndex_gy [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_pobutrajug
, rtP . InterpolationUsingPrelookup3_maxIndex_phxiqgft5z ) ; } frac_gz [ 0 ]
= do51zgnib3 ; bpIndex_gz [ 0 ] = gtuyvnkhut ; frac_gz [ 1 ] = ceos33awbx [ 0
] ; frac_gz [ 2 ] = a3usql3psn [ 0 ] ; frac_gz [ 3 ] = bglwh2qkc0 [ 0 ] ;
bpIndex_gz [ 1 ] = mzftiie1yg_idx_0 ; bpIndex_gz [ 2 ] = gkal1jh445_idx_0 ;
bpIndex_gz [ 3 ] = gloodttbiv_idx_0 ; if ( rtP . Constant8_Value_feoxjcmban [
0 ] > 1.0 ) { bpIndex_gz [ 4 ] = 1U ; } else { bpIndex_gz [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_feoxjcmban [ 0 ] , 0.0 ) ; }
ld2pkixaze [ 19 ] = intrp4d_fu32fla_pw ( bpIndex_gz , frac_gz , & rtP .
dp_WING_tip . CL [ 2450U * bpIndex_gz [ 4 ] ] , rtP .
InterpolationUsingPrelookup3_dimSize_moesxsoyzp , rtP .
InterpolationUsingPrelookup3_maxIndex_eoqqk34ry0 ) ; frac_gz [ 1 ] =
ceos33awbx [ 1 ] ; frac_gz [ 2 ] = a3usql3psn [ 1 ] ; frac_gz [ 3 ] =
bglwh2qkc0 [ 1 ] ; bpIndex_gz [ 1 ] = mzftiie1yg_idx_1 ; bpIndex_gz [ 2 ] =
gkal1jh445_idx_1 ; bpIndex_gz [ 3 ] = gloodttbiv_idx_1 ; if ( rtP .
Constant8_Value_feoxjcmban [ 1 ] > 1.0 ) { bpIndex_gz [ 4 ] = 1U ; } else {
bpIndex_gz [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_feoxjcmban [ 1 ] , 0.0 ) ; } ld2pkixaze [ 20 ] =
intrp4d_fu32fla_pw ( bpIndex_gz , frac_gz , & rtP . dp_WING_tip . CL [ 2450U
* bpIndex_gz [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_moesxsoyzp
, rtP . InterpolationUsingPrelookup3_maxIndex_eoqqk34ry0 ) ; for ( i_p = 0 ;
i_p < 7 ; i_p ++ ) { rtB . chio10ryue [ 3 * i_p ] = liydxvyvbx [ 3 * i_p ] *
ld2pkixaze [ i_p ] * rtB . lhopa3gq4f * rtP . Gain_Gain_ogcponzdi3 ; rtB .
chio10ryue [ 3 * i_p + 1 ] = liydxvyvbx [ 3 * i_p + 1 ] * ld2pkixaze [ i_p +
7 ] * rtB . lhopa3gq4f * rtP . Gain_Gain_ogcponzdi3 ; rtB . chio10ryue [ 3 *
i_p + 2 ] = liydxvyvbx [ 3 * i_p + 2 ] * ld2pkixaze [ i_p + 14 ] * rtB .
lhopa3gq4f * rtP . Gain_Gain_ogcponzdi3 ; } parallel_for ( 7 , gur2dlo22c , 1
, "gur2dlo22c" ) ; for ( i = 0 ; i < 21 ; i ++ ) { dq25kgk52k [ i ] = rtB .
db2vpmywoo [ i ] ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { cwdb3qacqr = - 0.0
; for ( i_e = 0 ; i_e < 7 ; i_e ++ ) { cwdb3qacqr += dq25kgk52k [ i_e * 3 +
i_p ] ; } awuilyxvbq [ i_p ] = cwdb3qacqr ; } cq2trmp0xn_idx_0 = ( real32_T )
awuilyxvbq [ 0 ] ; cq2trmp0xn_idx_1 = ( real32_T ) awuilyxvbq [ 1 ] ;
cq2trmp0xn_idx_2 = ( real32_T ) awuilyxvbq [ 2 ] ; for ( i = 0 ; i <= 6 ; i
+= 2 ) { _mm_storeu_pd ( & lqbwr5bl13 [ i ] , _mm_mul_pd ( _mm_loadu_pd ( &
rtP . Constant_Value_m4lu0iaeiu [ i ] ) , _mm_set1_pd ( ( real32_T ) y_e ) )
) ; _mm_storeu_pd ( & lqbwr5bl13 [ i + 8 ] , _mm_mul_pd ( _mm_loadu_pd ( &
rtP . Constant1_Value_pfjn4um3cl [ i ] ) , _mm_set1_pd ( ( real32_T ) y_i ) )
) ; } for ( i_p = 0 ; i_p < 5 ; i_p ++ ) { p [ i_p ] = rtP . dp_VTAIL_INDUCED
. flap_defl [ i_p ] ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { ayy24n2qrl [ iU ]
= plook_linxp ( lqbwr5bl13 [ iU ] , p , 4U , & irfwaeofjb [ iU ] , & rtDW .
cyzymhco2p [ iU ] ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { biece21jwb [ iU ]
= look1_iflf_pbinlcpw ( rtP . Constant7_Value_knyv2amwuk [ iU ] , rtP .
uDLookupTable_bp01Data_ltg0bjjklu , & rtB . nt1ep5s5gk [ 4 ] , & rtDW .
cbx2viebna [ iU ] , 5U ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { gm4p0rdh2f [
iU ] = plook_u32ff_linxp ( biece21jwb [ iU ] , rtP . dp_VTAIL_INDUCED .
alphas , 24U , & l0zhodiblx [ iU ] , & rtDW . crhnfogbxa [ iU ] ) ; } for (
iU = 0 ; iU < 16 ; iU ++ ) { biece21jwb [ iU ] = look1_iflf_pbinlcpw ( rtP .
Constant7_Value_knyv2amwuk [ iU ] , rtP . uDLookupTable1_bp01Data_bxrgdnyemm
, & rtB . a3xfql2xu1 [ 4 ] , & rtDW . ksofld5bxu [ iU ] , 5U ) ; } for ( iU =
0 ; iU < 16 ; iU ++ ) { d4lboqrosv [ iU ] = plook_u32ff_linxp ( biece21jwb [
iU ] , rtP . dp_VTAIL_INDUCED . V_infs , 1U , & acmnvm3xsn [ iU ] , & rtDW .
nalp0vjrpv [ iU ] ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { biece21jwb [ iU ]
= look1_iflf_pbinlcpw ( rtP . Constant7_Value_knyv2amwuk [ iU ] , rtP .
uDLookupTable2_bp01Data_iqnyzwsphp , & prizw2ngzn [ 3 ] , & rtDW . gjcgz4hrbp
[ iU ] , 5U ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { mvstg4yzt0 [ iU ] =
plook_u32ff_lincp ( biece21jwb [ iU ] , rtP . dp_VTAIL_INDUCED . DEP_J , 6U ,
& fqmpp1ruun [ iU ] , & rtDW . jzpbje250b [ iU ] ) ; } for ( iU = 0 ; iU < 16
; iU ++ ) { frac_av [ 0 ] = irfwaeofjb [ iU ] ; frac_av [ 1 ] = l0zhodiblx [
iU ] ; frac_av [ 2 ] = acmnvm3xsn [ iU ] ; frac_av [ 3 ] = fqmpp1ruun [ iU ]
; bpIndex_av [ 0 ] = ayy24n2qrl [ iU ] ; bpIndex_av [ 1 ] = gm4p0rdh2f [ iU ]
; bpIndex_av [ 2 ] = d4lboqrosv [ iU ] ; bpIndex_av [ 3 ] = mvstg4yzt0 [ iU ]
; if ( rtP . Constant8_Value_mgctpwkrie [ iU ] > 15.0 ) { bpIndex_av [ 4 ] =
15U ; } else { bpIndex_av [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_mgctpwkrie [ iU ] , 0.0 ) ; } biece21jwb [ iU ] =
intrp4d_fl_pw ( bpIndex_av , frac_av , & rtP . dp_VTAIL_INDUCED . V_induced [
1750U * bpIndex_av [ 4 ] ] , rtP . V_induced_dimSize_cfs0selkbv ) ; }
parallel_for ( 16 , mtrxzbtg4o , 1 , "mtrxzbtg4o" ) ; for ( i = 0 ; i < 16 ;
i ++ ) { jtoldnh5tw = biece21jwb [ i ] + rtB . a3xfql2xu1x [ i ] ; k1zpj42h11
[ i ] = jtoldnh5tw ; k1zpj42h11 [ i + 16 ] = jtoldnh5tw ; k1zpj42h11 [ i + 32
] = jtoldnh5tw ; mybyivl1uq [ 3 * i ] = k1zpj42h11 [ i ] ; mybyivl1uq [ 3 * i
+ 1 ] = k1zpj42h11 [ i + 16 ] ; mybyivl1uq [ 3 * i + 2 ] = k1zpj42h11 [ i +
32 ] ; } for ( i_p = 0 ; i_p <= 44 ; i_p += 4 ) { tmp_f = _mm_loadu_ps ( &
mybyivl1uq [ i_p ] ) ; _mm_storeu_ps ( & mybyivl1uq [ i_p ] , _mm_mul_ps (
tmp_f , tmp_f ) ) ; } for ( i = 0 ; i <= 6 ; i += 2 ) { _mm_storeu_pd ( &
lqbwr5bl13 [ i ] , _mm_mul_pd ( _mm_loadu_pd ( & rtP .
Constant_Value_bn4ba3r33w [ i ] ) , _mm_set1_pd ( ( real32_T )
hjpu2sw0us_idx_1 ) ) ) ; _mm_storeu_pd ( & lqbwr5bl13 [ i + 8 ] , _mm_mul_pd
( _mm_loadu_pd ( & rtP . Constant1_Value_cg01hxc0uw [ i ] ) , _mm_set1_pd ( (
real32_T ) y_p ) ) ) ; } for ( i_p = 0 ; i_p < 10 ; i_p ++ ) { tmp [ i_p ] =
rtP . dp_VTAIL . rude_defl [ i_p ] ; } for ( iU = 0 ; iU < 16 ; iU ++ ) {
fehxxn152z [ iU ] = plook_linxp ( lqbwr5bl13 [ iU ] , tmp , 9U , & mcfbmp4hwj
[ iU ] , & rtDW . adcrsey4fl [ iU ] ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) {
frac_du [ 0 ] = irfwaeofjb [ iU ] ; frac_du [ 1 ] = l0zhodiblx [ iU ] ;
frac_du [ 2 ] = acmnvm3xsn [ iU ] ; frac_du [ 3 ] = fqmpp1ruun [ iU ] ;
bpIndex_du [ 0 ] = ayy24n2qrl [ iU ] ; bpIndex_du [ 1 ] = gm4p0rdh2f [ iU ] ;
bpIndex_du [ 2 ] = d4lboqrosv [ iU ] ; bpIndex_du [ 3 ] = mvstg4yzt0 [ iU ] ;
if ( rtP . Constant8_Value_mgctpwkrie [ iU ] > 15.0 ) { bpIndex_du [ 4 ] =
15U ; } else { bpIndex_du [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_mgctpwkrie [ iU ] , 0.0 ) ; } jtoldnh5tw = intrp4d_fl_pw (
bpIndex_du , frac_du , & rtP . dp_VTAIL_INDUCED . alpha_induced [ 1750U *
bpIndex_du [ 4 ] ] , rtP . alpha_induced_dimSize_bgw15tpidk ) ; fgtgm00bdu [
iU ] = jtoldnh5tw ; fqmpp1ruun [ iU ] = jtoldnh5tw + rtB . nt1ep5s5gk4 [ iU ]
; } for ( iU = 0 ; iU < 16 ; iU ++ ) { mvstg4yzt0 [ iU ] = plook_u32ff_linxp
( fqmpp1ruun [ iU ] , rtP . dp_VTAIL . alphas , 12U , & fgtgm00bdu [ iU ] , &
rtDW . pym1a1c4u4 [ iU ] ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { d4lboqrosv
[ iU ] = plook_u32ff_linxp ( rtB . imvdti53mt [ iU ] , rtP . dp_VTAIL . betas
, 8U , & fqmpp1ruun [ iU ] , & rtDW . jpzkj2zafj [ iU ] ) ; } for ( iU = 0 ;
iU < 16 ; iU ++ ) { lco5i2tcb1 = d4lboqrosv [ iU ] ; n00enf32nh = mvstg4yzt0
[ iU ] ; mpp40chq4u = fehxxn152z [ iU ] ; nsmwxx5bxv = fqmpp1ruun [ iU ] ;
jtoldnh5tw = fgtgm00bdu [ iU ] ; cwdb3qacqr = mcfbmp4hwj [ iU ] ; frac_bc [ 0
] = cwdb3qacqr ; frac_bc [ 1 ] = jtoldnh5tw ; frac_bc [ 2 ] = nsmwxx5bxv ;
bpIndex_bc [ 0 ] = mpp40chq4u ; bpIndex_bc [ 1 ] = n00enf32nh ; bpIndex_bc [
2 ] = lco5i2tcb1 ; if ( rtP . Constant8_Value_fts3foi4on [ iU ] > 15.0 ) {
bpIndex_bc [ 3 ] = 15U ; } else { bpIndex_bc [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_fts3foi4on [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU ] = intrp3d_fl_pw ( bpIndex_bc , frac_bc , & rtP . dp_VTAIL .
CFx [ 1170U * bpIndex_bc [ 3 ] ] , rtP .
InterpolationUsingPrelookup1_dimSize_dyowyldwsm ) ; frac_dg [ 0 ] =
cwdb3qacqr ; frac_dg [ 1 ] = jtoldnh5tw ; frac_dg [ 2 ] = nsmwxx5bxv ;
bpIndex_dg [ 0 ] = mpp40chq4u ; bpIndex_dg [ 1 ] = n00enf32nh ; bpIndex_dg [
2 ] = lco5i2tcb1 ; if ( rtP . Constant8_Value_fts3foi4on [ iU ] > 15.0 ) {
bpIndex_dg [ 3 ] = 15U ; } else { bpIndex_dg [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_fts3foi4on [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU + 16 ] = intrp3d_fl_pw ( bpIndex_dg , frac_dg , & rtP .
dp_VTAIL . CFy [ 1170U * bpIndex_dg [ 3 ] ] , rtP .
InterpolationUsingPrelookup2_dimSize_eouerjluvg ) ; frac_as [ 0 ] =
cwdb3qacqr ; frac_as [ 1 ] = jtoldnh5tw ; frac_as [ 2 ] = nsmwxx5bxv ;
bpIndex_as [ 0 ] = mpp40chq4u ; bpIndex_as [ 1 ] = n00enf32nh ; bpIndex_as [
2 ] = lco5i2tcb1 ; if ( rtP . Constant8_Value_fts3foi4on [ iU ] > 15.0 ) {
bpIndex_as [ 3 ] = 15U ; } else { bpIndex_as [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_fts3foi4on [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU + 32 ] = intrp3d_fl_pw ( bpIndex_as , frac_as , & rtP .
dp_VTAIL . CFz [ 1170U * bpIndex_as [ 3 ] ] , rtP .
InterpolationUsingPrelookup3_dimSize_fr45oxcni5 ) ; rtB . mfew4idj1w [ 3 * iU
] = mybyivl1uq [ 3 * iU ] * k1zpj42h11 [ iU ] * rtB . lhopa3gq4f * rtP .
Gain2_Gain_fp35woyw3h ; rtB . mfew4idj1w [ 3 * iU + 1 ] = mybyivl1uq [ 3 * iU
+ 1 ] * k1zpj42h11 [ iU + 16 ] * rtB . lhopa3gq4f * rtP .
Gain2_Gain_fp35woyw3h ; rtB . mfew4idj1w [ 3 * iU + 2 ] = mybyivl1uq [ 3 * iU
+ 2 ] * k1zpj42h11 [ iU + 32 ] * rtB . lhopa3gq4f * rtP .
Gain2_Gain_fp35woyw3h ; } for ( i = 0 ; i < 48 ; i ++ ) { mfkqvhwnqs [ i ] =
rtB . mfew4idj1w [ i ] ; } g52k1xdouv_idx_1 = 0.0 ; for ( i_p = 0 ; i_p < 3 ;
i_p ++ ) { cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e < 16 ; i_e ++ ) {
cwdb3qacqr += mfkqvhwnqs [ i_e * 3 + i_p ] ; } awuilyxvbq [ i_p ] =
cwdb3qacqr ; g52k1xdouv_idx_1 += nl202crtfv [ i_p ] * nl202crtfv [ i_p ] ; }
cwdb3qacqr = muDoubleScalarAtan2 ( nl202crtfv [ 2 ] , nl202crtfv [ 0 ] ) ; cb
= muDoubleScalarSqrt ( g52k1xdouv_idx_1 ) + rtP . Constant1_Value_dgdrfjfech
; sb = nl202crtfv [ 1 ] / cb ; if ( sb > 1.0 ) { sb = 1.0 ; } else if ( sb <
- 1.0 ) { sb = - 1.0 ; } g52k1xdouv_idx_0 = muDoubleScalarAsin ( sb ) ;
muDoubleScalarSinCos ( ( real32_T ) cwdb3qacqr , & gdvtsdc4i4_idx_1 , &
g52k1xdouv_idx_1 ) ; muDoubleScalarSinCos ( ( real32_T ) g52k1xdouv_idx_0 , &
sb , & hjpu2sw0us_idx_1 ) ; bfqymjqlpw [ 0 ] = g52k1xdouv_idx_1 *
hjpu2sw0us_idx_1 ; bfqymjqlpw [ 1 ] = - ( g52k1xdouv_idx_1 * sb ) ;
bfqymjqlpw [ 2 ] = - gdvtsdc4i4_idx_1 ; bfqymjqlpw [ 3 ] = sb ; bfqymjqlpw [
4 ] = hjpu2sw0us_idx_1 ; bfqymjqlpw [ 5 ] = rtP . Constant_Value_ko2gftm1t1 ;
bfqymjqlpw [ 6 ] = gdvtsdc4i4_idx_1 * hjpu2sw0us_idx_1 ; bfqymjqlpw [ 7 ] = -
( gdvtsdc4i4_idx_1 * sb ) ; bfqymjqlpw [ 8 ] = g52k1xdouv_idx_1 ; exyi3olyp3
= plook_u32ff_linxp ( ( real32_T ) g52k1xdouv_idx_0 , rtP .
Prelookup_BreakpointsData_fi0mtycc45 , 12U , & fathofdwn4 , & rtDW .
axjl1de1kg ) ; ogpett5jn1 = plook_u32ff_linxp ( ( real32_T ) cwdb3qacqr , rtP
. Prelookup1_BreakpointsData_p41e0k4rg1 , 14U , & nz0cjy5leu , & rtDW .
pn4ledpxlb ) ; frac_mq [ 0 ] = fathofdwn4 ; frac_mq [ 1 ] = nz0cjy5leu ;
bpIndex_mq [ 0 ] = exyi3olyp3 ; bpIndex_mq [ 1 ] = ogpett5jn1 ; frac_ie [ 0 ]
= fathofdwn4 ; frac_ie [ 1 ] = nz0cjy5leu ; bpIndex_ie [ 0 ] = exyi3olyp3 ;
bpIndex_ie [ 1 ] = ogpett5jn1 ; o0o3ab3dt4 = ( real32_T ) cb * ( real32_T )
cb ; jtoldnh5tw = intrp2d_fu32fl_pw ( bpIndex_mq , frac_mq , rtP .
dp_FUSE_FIN . CD , 13U ) ; nsmwxx5bxv = intrp2d_fu32fl_pw ( bpIndex_ie ,
frac_ie , rtP . dp_FUSE_FIN . CS , 13U ) ; for ( i_p = 0 ; i_p < 3 ; i_p ++ )
{ g0uuf55mpg [ i_p ] = ( ( ( real32_T ) bfqymjqlpw [ 3 * i_p + 1 ] *
nsmwxx5bxv + ( real32_T ) bfqymjqlpw [ 3 * i_p ] * - jtoldnh5tw ) + (
real32_T ) bfqymjqlpw [ 3 * i_p + 2 ] * - rtP . Constant_Value_dw4h1l2eds ) *
o0o3ab3dt4 * rtB . lhopa3gq4f * rtP . Gain_Gain_dp3gx0j3a3 ; }
muDoubleScalarSinCos ( ( real32_T ) cwdb3qacqr , & gdvtsdc4i4_idx_1 , &
g52k1xdouv_idx_1 ) ; muDoubleScalarSinCos ( ( real32_T ) g52k1xdouv_idx_0 , &
cwdb3qacqr , & sb ) ; ckkjeon1gu [ 0 ] = g52k1xdouv_idx_1 * sb ; ckkjeon1gu [
1 ] = - ( g52k1xdouv_idx_1 * cwdb3qacqr ) ; ckkjeon1gu [ 2 ] = -
gdvtsdc4i4_idx_1 ; ckkjeon1gu [ 3 ] = cwdb3qacqr ; ckkjeon1gu [ 4 ] = sb ;
ckkjeon1gu [ 5 ] = rtP . Constant_Value_jnacoicsdt ; ckkjeon1gu [ 6 ] =
gdvtsdc4i4_idx_1 * sb ; ckkjeon1gu [ 7 ] = - ( gdvtsdc4i4_idx_1 * cwdb3qacqr
) ; ckkjeon1gu [ 8 ] = g52k1xdouv_idx_1 ; jtoldnh5tw = - ( ( rtP .
gear_drag_Value_cyr5x10snc * ( real32_T ) rtB . omswnn4raq [ 19 ] + rtP .
extra_drag_Value_acac1stfol ) * rtB . lhopa3gq4f * rtP . Gain_Gain_ncblbj5hm1
* ( ( real32_T ) cb * ( real32_T ) cb ) ) ; bdvkktmal5_p [ 0 ] = ( (
bdvkktmal5_idx_0 + cq2trmp0xn_idx_0 ) + ( real32_T ) awuilyxvbq [ 0 ] ) +
g0uuf55mpg [ 0 ] ; bdvkktmal5_p [ 1 ] = ( ( - bdvkktmal5_idx_1 +
cq2trmp0xn_idx_1 ) + ( real32_T ) awuilyxvbq [ 1 ] ) + g0uuf55mpg [ 1 ] ;
bdvkktmal5_p [ 2 ] = ( ( bdvkktmal5_idx_2 + cq2trmp0xn_idx_2 ) + ( real32_T )
awuilyxvbq [ 2 ] ) + g0uuf55mpg [ 2 ] ; for ( i = 0 ; i < 3 ; i ++ ) { rtB .
duuyhsibqx [ i ] = ( ( ( real32_T ) ckkjeon1gu [ 3 * i + 1 ] * rtP .
Constant1_Value_iysti3vr00 + ( real32_T ) ckkjeon1gu [ 3 * i ] * jtoldnh5tw )
+ ( real32_T ) ckkjeon1gu [ 3 * i + 2 ] * rtP . Constant1_Value_iysti3vr00 )
+ bdvkktmal5_p [ i ] ; nl202crtfv [ i ] = rtB . duuyhsibqx [ i ] ; cwdb3qacqr
= - 0.0 ; for ( i_e = 0 ; i_e < 12 ; i_e ++ ) { cwdb3qacqr += rtB .
nmsebbpti5 [ i_e * 3 + i ] ; } awuilyxvbq [ i ] = cwdb3qacqr ; } p4xbdqn5oc [
0 ] = c3klqxe1kc [ 8 ] ; p4xbdqn5oc [ 1 ] = c3klqxe1kc [ 7 ] ; p4xbdqn5oc [ 2
] = c3klqxe1kc [ 6 ] ; muDoubleScalarSinCos ( p4xbdqn5oc [ 0 ] , & agmxf0bpkk
[ 0 ] , & ncgfuwjrdt [ 0 ] ) ; muDoubleScalarSinCos ( p4xbdqn5oc [ 1 ] , &
agmxf0bpkk [ 1 ] , & ncgfuwjrdt [ 1 ] ) ; muDoubleScalarSinCos ( p4xbdqn5oc [
2 ] , & agmxf0bpkk [ 2 ] , & ncgfuwjrdt [ 2 ] ) ; pcdy0tdgbf [ 0 ] =
ncgfuwjrdt [ 0 ] * ncgfuwjrdt [ 1 ] ; pcdy0tdgbf [ 1 ] = agmxf0bpkk [ 1 ] *
agmxf0bpkk [ 2 ] * ncgfuwjrdt [ 0 ] - agmxf0bpkk [ 0 ] * ncgfuwjrdt [ 2 ] ;
pcdy0tdgbf [ 2 ] = agmxf0bpkk [ 1 ] * ncgfuwjrdt [ 2 ] * ncgfuwjrdt [ 0 ] +
agmxf0bpkk [ 0 ] * agmxf0bpkk [ 2 ] ; pcdy0tdgbf [ 3 ] = agmxf0bpkk [ 0 ] *
ncgfuwjrdt [ 1 ] ; pcdy0tdgbf [ 4 ] = agmxf0bpkk [ 1 ] * agmxf0bpkk [ 2 ] *
agmxf0bpkk [ 0 ] + ncgfuwjrdt [ 0 ] * ncgfuwjrdt [ 2 ] ; pcdy0tdgbf [ 5 ] =
agmxf0bpkk [ 1 ] * ncgfuwjrdt [ 2 ] * agmxf0bpkk [ 0 ] - ncgfuwjrdt [ 0 ] *
agmxf0bpkk [ 2 ] ; pcdy0tdgbf [ 6 ] = - agmxf0bpkk [ 1 ] ; pcdy0tdgbf [ 7 ] =
ncgfuwjrdt [ 1 ] * agmxf0bpkk [ 2 ] ; pcdy0tdgbf [ 8 ] = ncgfuwjrdt [ 1 ] *
ncgfuwjrdt [ 2 ] ; cb *= muSingleScalarSqrt ( rtP . Gain_Gain_gb4daaw33j *
rtB . lhopa3gq4f ) ; g52k1xdouv_idx_0 = look1_plinlxpw ( cb , rtP . dp_HTU .
limits . V_up_lim , rtP . dp_HTU . limits . T_up_lim , & rtDW . buhdzc4orn ,
4U ) ; cwdb3qacqr = look1_plinlcpw ( rtB . omswnn4raq [ 18 ] , rtP .
uDLookupTable1_bp01Data_evckx2go4d , rtP .
uDLookupTable1_tableData_kvohgmx5cm , & rtDW . a2szru3bcs , 1U ) ; if ( ! (
cwdb3qacqr > g52k1xdouv_idx_0 ) ) { cb = look1_plinlxpw ( cb , rtP . dp_HTU .
limits . V_low_lim , rtP . dp_HTU . limits . T_low_lim , & rtDW . jp0ljiil3a
, 5U ) ; if ( cwdb3qacqr < cb ) { g52k1xdouv_idx_0 = cb ; } else {
g52k1xdouv_idx_0 = cwdb3qacqr ; } } cm [ 0 ] = g52k1xdouv_idx_0 ; cm [ 1 ] =
rtP . Constant_Value_npeniteliy ; cm [ 2 ] = rtP . Constant_Value_npeniteliy
; for ( i = 0 ; i < 3 ; i ++ ) { louycaqmjf [ i ] = ( ( ( ( pcdy0tdgbf [ i +
3 ] * rtP . Constant_Value_mj5imqgxrw + pcdy0tdgbf [ i ] * rtP .
Constant_Value_mj5imqgxrw ) + pcdy0tdgbf [ i + 6 ] * rtB . g2bqzjbrkl ) +
awuilyxvbq [ i ] ) + cm [ i ] ) + nl202crtfv [ i ] ; } muDoubleScalarSinCos (
p4xbdqn5oc [ 0 ] , & nl202crtfv [ 0 ] , & awuilyxvbq [ 0 ] ) ;
muDoubleScalarSinCos ( p4xbdqn5oc [ 1 ] , & nl202crtfv [ 1 ] , & awuilyxvbq [
1 ] ) ; muDoubleScalarSinCos ( p4xbdqn5oc [ 2 ] , & nl202crtfv [ 2 ] , &
awuilyxvbq [ 2 ] ) ; pgeu4112gv [ 0 ] = awuilyxvbq [ 0 ] * awuilyxvbq [ 1 ] ;
pgeu4112gv [ 1 ] = nl202crtfv [ 1 ] * nl202crtfv [ 2 ] * awuilyxvbq [ 0 ] -
nl202crtfv [ 0 ] * awuilyxvbq [ 2 ] ; pgeu4112gv [ 2 ] = nl202crtfv [ 1 ] *
awuilyxvbq [ 2 ] * awuilyxvbq [ 0 ] + nl202crtfv [ 0 ] * nl202crtfv [ 2 ] ;
pgeu4112gv [ 3 ] = nl202crtfv [ 0 ] * awuilyxvbq [ 1 ] ; pgeu4112gv [ 4 ] =
nl202crtfv [ 1 ] * nl202crtfv [ 2 ] * nl202crtfv [ 0 ] + awuilyxvbq [ 0 ] *
awuilyxvbq [ 2 ] ; pgeu4112gv [ 5 ] = nl202crtfv [ 1 ] * awuilyxvbq [ 2 ] *
nl202crtfv [ 0 ] - awuilyxvbq [ 0 ] * nl202crtfv [ 2 ] ; pgeu4112gv [ 6 ] = -
nl202crtfv [ 1 ] ; pgeu4112gv [ 7 ] = awuilyxvbq [ 1 ] * nl202crtfv [ 2 ] ;
pgeu4112gv [ 8 ] = awuilyxvbq [ 1 ] * awuilyxvbq [ 2 ] ; for ( i_p = 0 ; i_p
< 3 ; i_p ++ ) { for ( i_e = 0 ; i_e < 3 ; i_e ++ ) { dnttemuy2m [ i_p + 3 *
i_e ] = 0.0 ; dnttemuy2m [ i_p + 3 * i_e ] += mvrmkcanel [ i_e ] * pgeu4112gv
[ i_p ] ; dnttemuy2m [ i_p + 3 * i_e ] += mvrmkcanel [ i_e + 3 ] * pgeu4112gv
[ i_p + 3 ] ; dnttemuy2m [ i_p + 3 * i_e ] += mvrmkcanel [ i_e + 6 ] *
pgeu4112gv [ i_p + 6 ] ; } } g5udvnfnq3 [ 0 ] = rtP . Gain1_Gain_nkc3kph3j5 [
0 ] * dnttemuy2m [ 7 ] ; g5udvnfnq3 [ 1 ] = rtP . Gain1_Gain_nkc3kph3j5 [ 1 ]
* dnttemuy2m [ 4 ] ; g5udvnfnq3 [ 2 ] = dnttemuy2m [ 1 ] * rtP .
Gain1_Gain_nkc3kph3j5 [ 2 ] ; g5udvnfnq3 [ 3 ] = rtP . Gain2_Gain_lpjnwvjsc2
[ 0 ] * dnttemuy2m [ 2 ] ; g5udvnfnq3 [ 5 ] = rtP . Gain3_Gain_n41z0xjgns [ 0
] * dnttemuy2m [ 5 ] ; g5udvnfnq3 [ 4 ] = dnttemuy2m [ 0 ] * rtP .
Gain2_Gain_lpjnwvjsc2 [ 1 ] ; g5udvnfnq3 [ 6 ] = rtP . Gain3_Gain_n41z0xjgns
[ 1 ] * dnttemuy2m [ 8 ] ; if ( ( g5udvnfnq3 [ 2 ] >= 1.0 ) || ( g5udvnfnq3 [
2 ] <= - 1.0 ) ) { cm0yj40hhf ( g5udvnfnq3 , nl202crtfv , & rtDW . o021qo2kqg
, & rtP . o021qo2kqg ) ; } else { biiojft2vb ( g5udvnfnq3 , nl202crtfv , &
rtDW . gr5ouy33uc , & rtP . gr5ouy33uc ) ; } ievbduqdsw [ 0 ] = rtP .
Gain_Gain_hvstc4ry54 [ 0 ] * nl202crtfv [ 0 ] ; ievbduqdsw [ 1 ] = rtP .
Gain_Gain_hvstc4ry54 [ 1 ] * nl202crtfv [ 1 ] ; ievbduqdsw [ 2 ] = rtP .
Gain_Gain_hvstc4ry54 [ 2 ] * nl202crtfv [ 2 ] ; i5nfd4afyg ( louycaqmjf [ 0 ]
, louycaqmjf [ 1 ] , louycaqmjf [ 2 ] , ievbduqdsw [ 2 ] , ievbduqdsw [ 1 ] ,
ievbduqdsw [ 0 ] , hfwwqokbwo , oxomw1ffaj , & rtB . euncnp30uc ) ;
nl202crtfv [ 0 ] = rtB . euncnp30uc . irdqb2psgr - rtB . hcyzeqbkyr .
irdqb2psgr ; nl202crtfv [ 1 ] = rtB . euncnp30uc . hrb5rmirrg - rtB .
hcyzeqbkyr . hrb5rmirrg ; nl202crtfv [ 2 ] = rtB . euncnp30uc . dpynkxuvej -
rtB . hcyzeqbkyr . dpynkxuvej ; cwdb3qacqr = rtP . fcc . path_u_pert [ ( ( (
int32_T ) dh3zefosvy - 1 ) * 5 + ( int32_T ) dh3zefosvy ) - 1 ] * hy1xz2ukcn
; if ( s315_iter == 1 ) { memcpy ( & rtB . cy3oarwspn [ 0 ] , & rtDW .
hrv12n540b [ 0 ] , 15U * sizeof ( real_T ) ) ; } rtB . cy3oarwspn [ 3 * ( (
int32_T ) dh3zefosvy - 1 ) ] = nl202crtfv [ 0 ] / cwdb3qacqr ; rtB .
cy3oarwspn [ 3 * ( ( int32_T ) dh3zefosvy - 1 ) + 1 ] = nl202crtfv [ 1 ] /
cwdb3qacqr ; rtB . cy3oarwspn [ 3 * ( ( int32_T ) dh3zefosvy - 1 ) + 2 ] =
nl202crtfv [ 2 ] / cwdb3qacqr ; parallel_for ( 7 , dufjikm3ah , 1 ,
"dufjikm3ah" ) ; frac_kq [ 0 ] = f5qwewprly ; bpIndex_kq [ 0 ] = m04ebe1zz2 ;
for ( iU = 0 ; iU < 5 ; iU ++ ) { frac_kq [ 1 ] = kko0lbsvwo [ iU ] ; frac_kq
[ 2 ] = epaolvt0vm [ iU ] ; frac_kq [ 3 ] = pdb2lmu2m2 [ iU ] ; bpIndex_kq [
1 ] = h0u2qqbsra [ iU ] ; bpIndex_kq [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_kq [
3 ] = okphy1ntzm [ iU ] ; if ( rtP . Constant8_Value_mgxme44jz3 [ iU ] > 4.0
) { bpIndex_kq [ 4 ] = 4U ; } else { bpIndex_kq [ 4 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_mgxme44jz3 [ iU ] , 0.0 ) ; }
emjtkpfqsk [ iU ] = intrp4d_fu32fla_pw ( bpIndex_kq , frac_kq , & rtP .
dp_WING_root . CMx [ 1750U * bpIndex_kq [ 4 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize , rtP .
InterpolationUsingPrelookup4_maxIndex ) ; } frac_au [ 0 ] = p5e3xkr1y0 ;
bpIndex_au [ 0 ] = kiombdthr4 ; frac_au [ 1 ] = ijn42ncetb [ 0 ] ; frac_au [
2 ] = nwsd1dfjvy [ 0 ] ; frac_au [ 3 ] = ohuehvepr1 [ 0 ] ; bpIndex_au [ 1 ]
= n5yhkyeg5n_idx_0 ; bpIndex_au [ 2 ] = khukbzvgdj_idx_0 ; bpIndex_au [ 3 ] =
hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_miw3wecx3m [ 0 ] > 1.0 ) {
bpIndex_au [ 4 ] = 1U ; } else { bpIndex_au [ 4 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_miw3wecx3m [ 0 ] , 0.0 ) ; }
emjtkpfqsk [ 5 ] = intrp4d_fu32fla_pw ( bpIndex_au , frac_au , & rtP .
dp_WING_tip . CMx [ 2450U * bpIndex_au [ 4 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_gpslzd4q2y , rtP .
InterpolationUsingPrelookup4_maxIndex_glkhidhe4p ) ; frac_au [ 1 ] =
ijn42ncetb [ 1 ] ; frac_au [ 2 ] = nwsd1dfjvy [ 1 ] ; frac_au [ 3 ] =
ohuehvepr1 [ 1 ] ; bpIndex_au [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_au [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_au [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_miw3wecx3m [ 1 ] > 1.0 ) { bpIndex_au [ 4 ] = 1U ; } else {
bpIndex_au [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_miw3wecx3m [ 1 ] , 0.0 ) ; } emjtkpfqsk [ 6 ] =
intrp4d_fu32fla_pw ( bpIndex_au , frac_au , & rtP . dp_WING_tip . CMx [ 2450U
* bpIndex_au [ 4 ] ] , rtP . InterpolationUsingPrelookup4_dimSize_gpslzd4q2y
, rtP . InterpolationUsingPrelookup4_maxIndex_glkhidhe4p ) ; frac_m2 [ 0 ] =
f5qwewprly ; bpIndex_m2 [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_m2 [ 1 ] = kko0lbsvwo [ iU ] ; frac_m2 [ 2 ] = epaolvt0vm [ iU ] ;
frac_m2 [ 3 ] = pdb2lmu2m2 [ iU ] ; bpIndex_m2 [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_m2 [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_m2 [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_mgxme44jz3 [ iU ] > 4.0 ) { bpIndex_m2 [ 4 ] = 4U
; } else { bpIndex_m2 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_mgxme44jz3 [ iU ] , 0.0 ) ; } emjtkpfqsk [ iU + 7 ] =
intrp4d_fu32fla_pw ( bpIndex_m2 , frac_m2 , & rtP . dp_WING_root . CMy [
1750U * bpIndex_m2 [ 4 ] ] , rtP . InterpolationUsingPrelookup5_dimSize , rtP
. InterpolationUsingPrelookup5_maxIndex ) ; } frac_ce [ 0 ] = p5e3xkr1y0 ;
bpIndex_ce [ 0 ] = kiombdthr4 ; frac_ce [ 1 ] = ijn42ncetb [ 0 ] ; frac_ce [
2 ] = nwsd1dfjvy [ 0 ] ; frac_ce [ 3 ] = ohuehvepr1 [ 0 ] ; bpIndex_ce [ 1 ]
= n5yhkyeg5n_idx_0 ; bpIndex_ce [ 2 ] = khukbzvgdj_idx_0 ; bpIndex_ce [ 3 ] =
hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_miw3wecx3m [ 0 ] > 1.0 ) {
bpIndex_ce [ 4 ] = 1U ; } else { bpIndex_ce [ 4 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_miw3wecx3m [ 0 ] , 0.0 ) ; }
emjtkpfqsk [ 12 ] = intrp4d_fu32fla_pw ( bpIndex_ce , frac_ce , & rtP .
dp_WING_tip . CMy [ 2450U * bpIndex_ce [ 4 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_b0g4wje51t , rtP .
InterpolationUsingPrelookup5_maxIndex_il13jvr0ww ) ; frac_ce [ 1 ] =
ijn42ncetb [ 1 ] ; frac_ce [ 2 ] = nwsd1dfjvy [ 1 ] ; frac_ce [ 3 ] =
ohuehvepr1 [ 1 ] ; bpIndex_ce [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_ce [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_ce [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_miw3wecx3m [ 1 ] > 1.0 ) { bpIndex_ce [ 4 ] = 1U ; } else {
bpIndex_ce [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_miw3wecx3m [ 1 ] , 0.0 ) ; } emjtkpfqsk [ 13 ] =
intrp4d_fu32fla_pw ( bpIndex_ce , frac_ce , & rtP . dp_WING_tip . CMy [ 2450U
* bpIndex_ce [ 4 ] ] , rtP . InterpolationUsingPrelookup5_dimSize_b0g4wje51t
, rtP . InterpolationUsingPrelookup5_maxIndex_il13jvr0ww ) ; frac_bo [ 0 ] =
f5qwewprly ; bpIndex_bo [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_bo [ 1 ] = kko0lbsvwo [ iU ] ; frac_bo [ 2 ] = epaolvt0vm [ iU ] ;
frac_bo [ 3 ] = pdb2lmu2m2 [ iU ] ; bpIndex_bo [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_bo [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_bo [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_mgxme44jz3 [ iU ] > 4.0 ) { bpIndex_bo [ 4 ] = 4U
; } else { bpIndex_bo [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_mgxme44jz3 [ iU ] , 0.0 ) ; } emjtkpfqsk [ iU + 14 ] =
intrp4d_fu32fla_pw ( bpIndex_bo , frac_bo , & rtP . dp_WING_root . CMz [
1750U * bpIndex_bo [ 4 ] ] , rtP . InterpolationUsingPrelookup6_dimSize , rtP
. InterpolationUsingPrelookup6_maxIndex ) ; } frac_kg [ 0 ] = p5e3xkr1y0 ;
bpIndex_kg [ 0 ] = kiombdthr4 ; frac_kg [ 1 ] = ijn42ncetb [ 0 ] ; frac_kg [
2 ] = nwsd1dfjvy [ 0 ] ; frac_kg [ 3 ] = ohuehvepr1 [ 0 ] ; bpIndex_kg [ 1 ]
= n5yhkyeg5n_idx_0 ; bpIndex_kg [ 2 ] = khukbzvgdj_idx_0 ; bpIndex_kg [ 3 ] =
hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_miw3wecx3m [ 0 ] > 1.0 ) {
bpIndex_kg [ 4 ] = 1U ; } else { bpIndex_kg [ 4 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_miw3wecx3m [ 0 ] , 0.0 ) ; }
emjtkpfqsk [ 19 ] = intrp4d_fu32fla_pw ( bpIndex_kg , frac_kg , & rtP .
dp_WING_tip . CMz [ 2450U * bpIndex_kg [ 4 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_jtracik21x , rtP .
InterpolationUsingPrelookup6_maxIndex_bmg5gi0py0 ) ; frac_kg [ 1 ] =
ijn42ncetb [ 1 ] ; frac_kg [ 2 ] = nwsd1dfjvy [ 1 ] ; frac_kg [ 3 ] =
ohuehvepr1 [ 1 ] ; bpIndex_kg [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_kg [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_kg [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_miw3wecx3m [ 1 ] > 1.0 ) { bpIndex_kg [ 4 ] = 1U ; } else {
bpIndex_kg [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_miw3wecx3m [ 1 ] , 0.0 ) ; } emjtkpfqsk [ 20 ] =
intrp4d_fu32fla_pw ( bpIndex_kg , frac_kg , & rtP . dp_WING_tip . CMz [ 2450U
* bpIndex_kg [ 4 ] ] , rtP . InterpolationUsingPrelookup6_dimSize_jtracik21x
, rtP . InterpolationUsingPrelookup6_maxIndex_bmg5gi0py0 ) ; cwdb3qacqr = rtP
. S / 2.0 ; for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { dq25kgk52k [ 3 * i_p ] =
kta5xsgp3m [ 3 * i_p ] * emjtkpfqsk [ i_p ] * rtP . Constant_Value_i3ezekhgjx
[ 3 * i_p ] * rtB . lhopa3gq4f * cwdb3qacqr + rtB . jqwdkrkcdnz [ 3 * i_p ] ;
dq25kgk52k [ 3 * i_p + 1 ] = kta5xsgp3m [ 3 * i_p + 1 ] * emjtkpfqsk [ i_p +
7 ] * rtP . Constant_Value_i3ezekhgjx [ 3 * i_p + 1 ] * rtB . lhopa3gq4f *
cwdb3qacqr + rtB . jqwdkrkcdnz [ 3 * i_p + 1 ] ; dq25kgk52k [ 3 * i_p + 2 ] =
kta5xsgp3m [ 3 * i_p + 2 ] * emjtkpfqsk [ i_p + 14 ] * rtP .
Constant_Value_i3ezekhgjx [ 3 * i_p + 2 ] * rtB . lhopa3gq4f * cwdb3qacqr +
rtB . jqwdkrkcdnz [ 3 * i_p + 2 ] ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) {
cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e < 7 ; i_e ++ ) { cwdb3qacqr +=
dq25kgk52k [ i_e * 3 + i_p ] ; } nl202crtfv [ i_p ] = cwdb3qacqr ; }
bdvkktmal5_idx_0 = ( real32_T ) nl202crtfv [ 0 ] ; bdvkktmal5_idx_1 = (
real32_T ) nl202crtfv [ 1 ] ; bdvkktmal5_idx_2 = ( real32_T ) nl202crtfv [ 2
] ; parallel_for ( 7 , hxpjklhlk1 , 1 , "hxpjklhlk1" ) ; frac_ex [ 0 ] =
lrpn1bvaje ; bpIndex_ex [ 0 ] = aoonk22yz4 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_ex [ 1 ] = d2guuznk3s [ iU ] ; frac_ex [ 2 ] = fgrhjqvnic [ iU ] ;
frac_ex [ 3 ] = g5intoqa2s [ iU ] ; bpIndex_ex [ 1 ] = k1zguhxahv [ iU ] ;
bpIndex_ex [ 2 ] = eqjb1ghghq [ iU ] ; bpIndex_ex [ 3 ] = kxwiwb3dqe [ iU ] ;
if ( rtP . Constant8_Value_guqmjpzam2 [ iU ] > 4.0 ) { bpIndex_ex [ 4 ] = 4U
; } else { bpIndex_ex [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_guqmjpzam2 [ iU ] , 0.0 ) ; } kgia3ln2qj [ iU ] =
intrp4d_fu32fla_pw ( bpIndex_ex , frac_ex , & rtP . dp_WING_root . CMx [
1750U * bpIndex_ex [ 4 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_msgcidecmv , rtP .
InterpolationUsingPrelookup4_maxIndex_k3pwj5lcg4 ) ; } frac_bk [ 0 ] =
dh4cgxbhqr ; bpIndex_bk [ 0 ] = gpjb51jpeb ; frac_bk [ 1 ] = emuqsm3je3 [ 0 ]
; frac_bk [ 2 ] = i5htqtys5b [ 0 ] ; frac_bk [ 3 ] = kxk0mmptat [ 0 ] ;
bpIndex_bk [ 1 ] = kfmilwvdgo_idx_0 ; bpIndex_bk [ 2 ] = pkmvhntapc_idx_0 ;
bpIndex_bk [ 3 ] = fql1hnjds1_idx_0 ; if ( rtP . Constant8_Value_ik45uzosiz [
0 ] > 1.0 ) { bpIndex_bk [ 4 ] = 1U ; } else { bpIndex_bk [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_ik45uzosiz [ 0 ] , 0.0 ) ; }
kgia3ln2qj [ 5 ] = intrp4d_fu32fla_pw ( bpIndex_bk , frac_bk , & rtP .
dp_WING_tip . CMx [ 2450U * bpIndex_bk [ 4 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_cogj2azluo , rtP .
InterpolationUsingPrelookup4_maxIndex_ptzvtpn4ay ) ; frac_bk [ 1 ] =
emuqsm3je3 [ 1 ] ; frac_bk [ 2 ] = i5htqtys5b [ 1 ] ; frac_bk [ 3 ] =
kxk0mmptat [ 1 ] ; bpIndex_bk [ 1 ] = kfmilwvdgo_idx_1 ; bpIndex_bk [ 2 ] =
pkmvhntapc_idx_1 ; bpIndex_bk [ 3 ] = fql1hnjds1_idx_1 ; if ( rtP .
Constant8_Value_ik45uzosiz [ 1 ] > 1.0 ) { bpIndex_bk [ 4 ] = 1U ; } else {
bpIndex_bk [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ik45uzosiz [ 1 ] , 0.0 ) ; } kgia3ln2qj [ 6 ] =
intrp4d_fu32fla_pw ( bpIndex_bk , frac_bk , & rtP . dp_WING_tip . CMx [ 2450U
* bpIndex_bk [ 4 ] ] , rtP . InterpolationUsingPrelookup4_dimSize_cogj2azluo
, rtP . InterpolationUsingPrelookup4_maxIndex_ptzvtpn4ay ) ; frac_de [ 0 ] =
lrpn1bvaje ; bpIndex_de [ 0 ] = aoonk22yz4 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_de [ 1 ] = d2guuznk3s [ iU ] ; frac_de [ 2 ] = fgrhjqvnic [ iU ] ;
frac_de [ 3 ] = g5intoqa2s [ iU ] ; bpIndex_de [ 1 ] = k1zguhxahv [ iU ] ;
bpIndex_de [ 2 ] = eqjb1ghghq [ iU ] ; bpIndex_de [ 3 ] = kxwiwb3dqe [ iU ] ;
if ( rtP . Constant8_Value_guqmjpzam2 [ iU ] > 4.0 ) { bpIndex_de [ 4 ] = 4U
; } else { bpIndex_de [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_guqmjpzam2 [ iU ] , 0.0 ) ; } kgia3ln2qj [ iU + 7 ] =
intrp4d_fu32fla_pw ( bpIndex_de , frac_de , & rtP . dp_WING_root . CMy [
1750U * bpIndex_de [ 4 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_ko5p5jl1fg , rtP .
InterpolationUsingPrelookup5_maxIndex_c2sxuwpvda ) ; } frac_il [ 0 ] =
dh4cgxbhqr ; bpIndex_il [ 0 ] = gpjb51jpeb ; frac_il [ 1 ] = emuqsm3je3 [ 0 ]
; frac_il [ 2 ] = i5htqtys5b [ 0 ] ; frac_il [ 3 ] = kxk0mmptat [ 0 ] ;
bpIndex_il [ 1 ] = kfmilwvdgo_idx_0 ; bpIndex_il [ 2 ] = pkmvhntapc_idx_0 ;
bpIndex_il [ 3 ] = fql1hnjds1_idx_0 ; if ( rtP . Constant8_Value_ik45uzosiz [
0 ] > 1.0 ) { bpIndex_il [ 4 ] = 1U ; } else { bpIndex_il [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_ik45uzosiz [ 0 ] , 0.0 ) ; }
kgia3ln2qj [ 12 ] = intrp4d_fu32fla_pw ( bpIndex_il , frac_il , & rtP .
dp_WING_tip . CMy [ 2450U * bpIndex_il [ 4 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_op42dcq1bg , rtP .
InterpolationUsingPrelookup5_maxIndex_f5ev5mcs0z ) ; frac_il [ 1 ] =
emuqsm3je3 [ 1 ] ; frac_il [ 2 ] = i5htqtys5b [ 1 ] ; frac_il [ 3 ] =
kxk0mmptat [ 1 ] ; bpIndex_il [ 1 ] = kfmilwvdgo_idx_1 ; bpIndex_il [ 2 ] =
pkmvhntapc_idx_1 ; bpIndex_il [ 3 ] = fql1hnjds1_idx_1 ; if ( rtP .
Constant8_Value_ik45uzosiz [ 1 ] > 1.0 ) { bpIndex_il [ 4 ] = 1U ; } else {
bpIndex_il [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ik45uzosiz [ 1 ] , 0.0 ) ; } kgia3ln2qj [ 13 ] =
intrp4d_fu32fla_pw ( bpIndex_il , frac_il , & rtP . dp_WING_tip . CMy [ 2450U
* bpIndex_il [ 4 ] ] , rtP . InterpolationUsingPrelookup5_dimSize_op42dcq1bg
, rtP . InterpolationUsingPrelookup5_maxIndex_f5ev5mcs0z ) ; frac_jk [ 0 ] =
lrpn1bvaje ; bpIndex_jk [ 0 ] = aoonk22yz4 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_jk [ 1 ] = d2guuznk3s [ iU ] ; frac_jk [ 2 ] = fgrhjqvnic [ iU ] ;
frac_jk [ 3 ] = g5intoqa2s [ iU ] ; bpIndex_jk [ 1 ] = k1zguhxahv [ iU ] ;
bpIndex_jk [ 2 ] = eqjb1ghghq [ iU ] ; bpIndex_jk [ 3 ] = kxwiwb3dqe [ iU ] ;
if ( rtP . Constant8_Value_guqmjpzam2 [ iU ] > 4.0 ) { bpIndex_jk [ 4 ] = 4U
; } else { bpIndex_jk [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_guqmjpzam2 [ iU ] , 0.0 ) ; } kgia3ln2qj [ iU + 14 ] =
intrp4d_fu32fla_pw ( bpIndex_jk , frac_jk , & rtP . dp_WING_root . CMz [
1750U * bpIndex_jk [ 4 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_iw5j3dygi2 , rtP .
InterpolationUsingPrelookup6_maxIndex_jdqfbgrff3 ) ; } frac_f5 [ 0 ] =
dh4cgxbhqr ; bpIndex_f5 [ 0 ] = gpjb51jpeb ; frac_f5 [ 1 ] = emuqsm3je3 [ 0 ]
; frac_f5 [ 2 ] = i5htqtys5b [ 0 ] ; frac_f5 [ 3 ] = kxk0mmptat [ 0 ] ;
bpIndex_f5 [ 1 ] = kfmilwvdgo_idx_0 ; bpIndex_f5 [ 2 ] = pkmvhntapc_idx_0 ;
bpIndex_f5 [ 3 ] = fql1hnjds1_idx_0 ; if ( rtP . Constant8_Value_ik45uzosiz [
0 ] > 1.0 ) { bpIndex_f5 [ 4 ] = 1U ; } else { bpIndex_f5 [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_ik45uzosiz [ 0 ] , 0.0 ) ; }
kgia3ln2qj [ 19 ] = intrp4d_fu32fla_pw ( bpIndex_f5 , frac_f5 , & rtP .
dp_WING_tip . CMz [ 2450U * bpIndex_f5 [ 4 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_lj1ftd05ly , rtP .
InterpolationUsingPrelookup6_maxIndex_ape5o0udka ) ; frac_f5 [ 1 ] =
emuqsm3je3 [ 1 ] ; frac_f5 [ 2 ] = i5htqtys5b [ 1 ] ; frac_f5 [ 3 ] =
kxk0mmptat [ 1 ] ; bpIndex_f5 [ 1 ] = kfmilwvdgo_idx_1 ; bpIndex_f5 [ 2 ] =
pkmvhntapc_idx_1 ; bpIndex_f5 [ 3 ] = fql1hnjds1_idx_1 ; if ( rtP .
Constant8_Value_ik45uzosiz [ 1 ] > 1.0 ) { bpIndex_f5 [ 4 ] = 1U ; } else {
bpIndex_f5 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ik45uzosiz [ 1 ] , 0.0 ) ; } kgia3ln2qj [ 20 ] =
intrp4d_fu32fla_pw ( bpIndex_f5 , frac_f5 , & rtP . dp_WING_tip . CMz [ 2450U
* bpIndex_f5 [ 4 ] ] , rtP . InterpolationUsingPrelookup6_dimSize_lj1ftd05ly
, rtP . InterpolationUsingPrelookup6_maxIndex_ape5o0udka ) ; cwdb3qacqr = rtP
. S / 2.0 ; for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { dq25kgk52k [ 3 * i_p ] =
aohvunheuk [ 3 * i_p ] * kgia3ln2qj [ i_p ] * rtP . Constant_Value_moftzoh04z
[ 3 * i_p ] * rtB . lhopa3gq4f * cwdb3qacqr + rtB . jqwdkrkcdn [ 3 * i_p ] ;
dq25kgk52k [ 3 * i_p + 1 ] = aohvunheuk [ 3 * i_p + 1 ] * kgia3ln2qj [ i_p +
7 ] * rtP . Constant_Value_moftzoh04z [ 3 * i_p + 1 ] * rtB . lhopa3gq4f *
cwdb3qacqr + rtB . jqwdkrkcdn [ 3 * i_p + 1 ] ; dq25kgk52k [ 3 * i_p + 2 ] =
aohvunheuk [ 3 * i_p + 2 ] * kgia3ln2qj [ i_p + 14 ] * rtP .
Constant_Value_moftzoh04z [ 3 * i_p + 2 ] * rtB . lhopa3gq4f * cwdb3qacqr +
rtB . jqwdkrkcdn [ 3 * i_p + 2 ] ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) {
cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e < 7 ; i_e ++ ) { cwdb3qacqr +=
dq25kgk52k [ i_e * 3 + i_p ] ; } nl202crtfv [ i_p ] = cwdb3qacqr ; }
cq2trmp0xn_idx_0 = ( real32_T ) nl202crtfv [ 0 ] ; cq2trmp0xn_idx_1 = (
real32_T ) nl202crtfv [ 1 ] ; cq2trmp0xn_idx_2 = ( real32_T ) nl202crtfv [ 2
] ; parallel_for ( 16 , pd4mrqlmyf , 1 , "pd4mrqlmyf" ) ; for ( iU = 0 ; iU <
16 ; iU ++ ) { lco5i2tcb1 = asvvjqwjnk [ iU ] ; n00enf32nh = f2e5fcgb3v [ iU
] ; mpp40chq4u = c3swjrmvem [ iU ] ; nsmwxx5bxv = bqkagafcws [ iU ] ;
jtoldnh5tw = h5rdtgmjbr [ iU ] ; cwdb3qacqr = nvl2rva03y [ iU ] ; frac_fx [ 0
] = cwdb3qacqr ; frac_fx [ 1 ] = jtoldnh5tw ; frac_fx [ 2 ] = nsmwxx5bxv ;
bpIndex_fx [ 0 ] = mpp40chq4u ; bpIndex_fx [ 1 ] = n00enf32nh ; bpIndex_fx [
2 ] = lco5i2tcb1 ; if ( rtP . Constant8_Value_dv2bw3t1fx [ iU ] > 15.0 ) {
bpIndex_fx [ 3 ] = 15U ; } else { bpIndex_fx [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_dv2bw3t1fx [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU ] = intrp3d_fl_pw ( bpIndex_fx , frac_fx , & rtP . dp_VTAIL .
CMx [ 1170U * bpIndex_fx [ 3 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_m0n22w0r0f ) ; frac_g3 [ 0 ] =
cwdb3qacqr ; frac_g3 [ 1 ] = jtoldnh5tw ; frac_g3 [ 2 ] = nsmwxx5bxv ;
bpIndex_g3 [ 0 ] = mpp40chq4u ; bpIndex_g3 [ 1 ] = n00enf32nh ; bpIndex_g3 [
2 ] = lco5i2tcb1 ; if ( rtP . Constant8_Value_dv2bw3t1fx [ iU ] > 15.0 ) {
bpIndex_g3 [ 3 ] = 15U ; } else { bpIndex_g3 [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_dv2bw3t1fx [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU + 16 ] = intrp3d_fl_pw ( bpIndex_g3 , frac_g3 , & rtP .
dp_VTAIL . CMy [ 1170U * bpIndex_g3 [ 3 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_eksfcnoc55 ) ; frac_lr [ 0 ] =
cwdb3qacqr ; frac_lr [ 1 ] = jtoldnh5tw ; frac_lr [ 2 ] = nsmwxx5bxv ;
bpIndex_lr [ 0 ] = mpp40chq4u ; bpIndex_lr [ 1 ] = n00enf32nh ; bpIndex_lr [
2 ] = lco5i2tcb1 ; if ( rtP . Constant8_Value_dv2bw3t1fx [ iU ] > 15.0 ) {
bpIndex_lr [ 3 ] = 15U ; } else { bpIndex_lr [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_dv2bw3t1fx [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU + 32 ] = intrp3d_fl_pw ( bpIndex_lr , frac_lr , & rtP .
dp_VTAIL . CMz [ 1170U * bpIndex_lr [ 3 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_f52pcp5yiz ) ; mfkqvhwnqs [ 3 * iU ] =
pf3wpndfmw [ 3 * iU ] * k1zpj42h11 [ iU ] * rtP . Constant1_Value_ln5f5nbydd
[ 3 * iU ] * rtB . lhopa3gq4f * rtP . Gain3_Gain_gwhcoygsbf + rtB .
jqwdkrkcdnzd [ 3 * iU ] ; mfkqvhwnqs [ 3 * iU + 1 ] = pf3wpndfmw [ 3 * iU + 1
] * k1zpj42h11 [ iU + 16 ] * rtP . Constant1_Value_ln5f5nbydd [ 3 * iU + 1 ]
* rtB . lhopa3gq4f * rtP . Gain3_Gain_gwhcoygsbf + rtB . jqwdkrkcdnzd [ 3 *
iU + 1 ] ; mfkqvhwnqs [ 3 * iU + 2 ] = pf3wpndfmw [ 3 * iU + 2 ] * k1zpj42h11
[ iU + 32 ] * rtP . Constant1_Value_ln5f5nbydd [ 3 * iU + 2 ] * rtB .
lhopa3gq4f * rtP . Gain3_Gain_gwhcoygsbf + rtB . jqwdkrkcdnzd [ 3 * iU + 2 ]
; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { cwdb3qacqr = - 0.0 ; for ( i_e = 0 ;
i_e < 16 ; i_e ++ ) { cwdb3qacqr += mfkqvhwnqs [ i_e * 3 + i_p ] ; }
nl202crtfv [ i_p ] = cwdb3qacqr ; } dh4cgxbhqr = ( real32_T ) nl202crtfv [ 0
] ; i2pbocf1g0_idx_1 = ( real32_T ) nl202crtfv [ 1 ] ; i2pbocf1g0_idx_2 = (
real32_T ) nl202crtfv [ 2 ] ; frac_nz [ 0 ] = nzrycehjx4 ; frac_nz [ 1 ] =
csenboislk ; bpIndex_nz [ 0 ] = bgilaurrar ; bpIndex_nz [ 1 ] = e0icl3aktx ;
frac_pp [ 0 ] = nzrycehjx4 ; frac_pp [ 1 ] = csenboislk ; bpIndex_pp [ 0 ] =
bgilaurrar ; bpIndex_pp [ 1 ] = e0icl3aktx ; frac_f0 [ 0 ] = nzrycehjx4 ;
frac_f0 [ 1 ] = csenboislk ; bpIndex_f0 [ 0 ] = bgilaurrar ; bpIndex_f0 [ 1 ]
= e0icl3aktx ; nl202crtfv [ 0 ] = intrp2d_fu32fl_pw ( bpIndex_nz , frac_nz ,
rtP . dp_FUSE_FIN . CMx , 13U ) * ipej1ctcz4 * rtP .
Constant_Value_mvjuntafo2 [ 0 ] ; nl202crtfv [ 1 ] = intrp2d_fu32fl_pw (
bpIndex_pp , frac_pp , rtP . dp_FUSE_FIN . CMy , 13U ) * ipej1ctcz4 * rtP .
Constant_Value_mvjuntafo2 [ 1 ] ; nl202crtfv [ 2 ] = intrp2d_fu32fl_pw (
bpIndex_f0 , frac_f0 , rtP . dp_FUSE_FIN . CMz , 13U ) * ipej1ctcz4 * rtP .
Constant_Value_mvjuntafo2 [ 2 ] ; awuilyxvbq [ 0 ] = rtB . lhopa3gq4f *
nl202crtfv [ 0 ] ; awuilyxvbq [ 1 ] = rtB . lhopa3gq4f * nl202crtfv [ 1 ] ;
awuilyxvbq [ 2 ] = rtB . lhopa3gq4f * nl202crtfv [ 2 ] ; cwdb3qacqr = rtP . S
/ 2.0 ; rtB . nf0co0trgn [ 0 ] = ( ( rtB . iylp3ntlzw [ 1 ] * ivnfroue5d [ 2
] - ivnfroue5d [ 1 ] * rtB . iylp3ntlzw [ 2 ] ) + cwdb3qacqr * awuilyxvbq [ 0
] ) + ( ( real_T ) ( - bdvkktmal5_idx_0 + cq2trmp0xn_idx_0 ) + dh4cgxbhqr ) ;
rtB . nf0co0trgn [ 1 ] = ( ( ivnfroue5d [ 0 ] * rtB . iylp3ntlzw [ 2 ] - rtB
. iylp3ntlzw [ 0 ] * ivnfroue5d [ 2 ] ) + cwdb3qacqr * awuilyxvbq [ 1 ] ) + (
( real_T ) ( bdvkktmal5_idx_1 + cq2trmp0xn_idx_1 ) + i2pbocf1g0_idx_1 ) ; rtB
. nf0co0trgn [ 2 ] = ( ( rtB . iylp3ntlzw [ 0 ] * ivnfroue5d [ 1 ] -
ivnfroue5d [ 0 ] * rtB . iylp3ntlzw [ 1 ] ) + cwdb3qacqr * awuilyxvbq [ 2 ] )
+ ( ( real_T ) ( - bdvkktmal5_idx_2 + cq2trmp0xn_idx_2 ) + i2pbocf1g0_idx_2 )
; if ( rtP . DirectionCosineMatrixtoRotationAngles_action != 1.0 ) {
ctbmhlk4sc ( rtS , a1ibcjxfxt , rtP .
DirectionCosineMatrixtoRotationAngles_action , rtP .
DirectionCosineMatrixtoRotationAngles_tolerance , & rtDW . ctbmhlk4scc , &
rtP . ctbmhlk4scc ) ; } parallel_for ( 7 , fxo32xx45w , 1 , "fxo32xx45w" ) ;
frac_ko [ 0 ] = afif0ynjey ; bpIndex_ko [ 0 ] = hwi3v4bm1e ; for ( iU = 0 ;
iU < 5 ; iU ++ ) { frac_ko [ 1 ] = dq5140y2bs [ iU ] ; frac_ko [ 2 ] =
bdbtstt51i [ iU ] ; frac_ko [ 3 ] = ndmwly2tkn [ iU ] ; bpIndex_ko [ 1 ] =
noamhvni52 [ iU ] ; bpIndex_ko [ 2 ] = m155nrsjmd [ iU ] ; bpIndex_ko [ 3 ] =
dqy5hcjfdc [ iU ] ; if ( rtP . Constant8_Value_oxicdwsrs5 [ iU ] > 4.0 ) {
bpIndex_ko [ 4 ] = 4U ; } else { bpIndex_ko [ 4 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_oxicdwsrs5 [ iU ] , 0.0 ) ; }
p4roalmgbr [ iU ] = intrp4d_fu32fla_pw ( bpIndex_ko , frac_ko , & rtP .
dp_WING_root . CMx [ 1750U * bpIndex_ko [ 4 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_kohuhdy2zp , rtP .
InterpolationUsingPrelookup4_maxIndex_bokaziuvsf ) ; } frac_en [ 0 ] =
gg4lrsx5if ; bpIndex_en [ 0 ] = g2xbodp0xg ; frac_en [ 1 ] = mzlgmqychg [ 0 ]
; frac_en [ 2 ] = myhzkqobqq [ 0 ] ; frac_en [ 3 ] = oixlaxkj0z [ 0 ] ;
bpIndex_en [ 1 ] = g3ud4i51ui_idx_0 ; bpIndex_en [ 2 ] = bcylnfhnxj_idx_0 ;
bpIndex_en [ 3 ] = ievp443ply_idx_0 ; if ( rtP . Constant8_Value_k4nt3fz4xw [
0 ] > 1.0 ) { bpIndex_en [ 4 ] = 1U ; } else { bpIndex_en [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_k4nt3fz4xw [ 0 ] , 0.0 ) ; }
p4roalmgbr [ 5 ] = intrp4d_fu32fla_pw ( bpIndex_en , frac_en , & rtP .
dp_WING_tip . CMx [ 2450U * bpIndex_en [ 4 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_k0mxbpkec3 , rtP .
InterpolationUsingPrelookup4_maxIndex_nub313soju ) ; frac_en [ 1 ] =
mzlgmqychg [ 1 ] ; frac_en [ 2 ] = myhzkqobqq [ 1 ] ; frac_en [ 3 ] =
oixlaxkj0z [ 1 ] ; bpIndex_en [ 1 ] = g3ud4i51ui_idx_1 ; bpIndex_en [ 2 ] =
bcylnfhnxj_idx_1 ; bpIndex_en [ 3 ] = ievp443ply_idx_1 ; if ( rtP .
Constant8_Value_k4nt3fz4xw [ 1 ] > 1.0 ) { bpIndex_en [ 4 ] = 1U ; } else {
bpIndex_en [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_k4nt3fz4xw [ 1 ] , 0.0 ) ; } p4roalmgbr [ 6 ] =
intrp4d_fu32fla_pw ( bpIndex_en , frac_en , & rtP . dp_WING_tip . CMx [ 2450U
* bpIndex_en [ 4 ] ] , rtP . InterpolationUsingPrelookup4_dimSize_k0mxbpkec3
, rtP . InterpolationUsingPrelookup4_maxIndex_nub313soju ) ; frac_na [ 0 ] =
afif0ynjey ; bpIndex_na [ 0 ] = hwi3v4bm1e ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_na [ 1 ] = dq5140y2bs [ iU ] ; frac_na [ 2 ] = bdbtstt51i [ iU ] ;
frac_na [ 3 ] = ndmwly2tkn [ iU ] ; bpIndex_na [ 1 ] = noamhvni52 [ iU ] ;
bpIndex_na [ 2 ] = m155nrsjmd [ iU ] ; bpIndex_na [ 3 ] = dqy5hcjfdc [ iU ] ;
if ( rtP . Constant8_Value_oxicdwsrs5 [ iU ] > 4.0 ) { bpIndex_na [ 4 ] = 4U
; } else { bpIndex_na [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_oxicdwsrs5 [ iU ] , 0.0 ) ; } p4roalmgbr [ iU + 7 ] =
intrp4d_fu32fla_pw ( bpIndex_na , frac_na , & rtP . dp_WING_root . CMy [
1750U * bpIndex_na [ 4 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_n2rzyp4snd , rtP .
InterpolationUsingPrelookup5_maxIndex_nqyfd3pzdn ) ; } frac_ol [ 0 ] =
gg4lrsx5if ; bpIndex_ol [ 0 ] = g2xbodp0xg ; frac_ol [ 1 ] = mzlgmqychg [ 0 ]
; frac_ol [ 2 ] = myhzkqobqq [ 0 ] ; frac_ol [ 3 ] = oixlaxkj0z [ 0 ] ;
bpIndex_ol [ 1 ] = g3ud4i51ui_idx_0 ; bpIndex_ol [ 2 ] = bcylnfhnxj_idx_0 ;
bpIndex_ol [ 3 ] = ievp443ply_idx_0 ; if ( rtP . Constant8_Value_k4nt3fz4xw [
0 ] > 1.0 ) { bpIndex_ol [ 4 ] = 1U ; } else { bpIndex_ol [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_k4nt3fz4xw [ 0 ] , 0.0 ) ; }
p4roalmgbr [ 12 ] = intrp4d_fu32fla_pw ( bpIndex_ol , frac_ol , & rtP .
dp_WING_tip . CMy [ 2450U * bpIndex_ol [ 4 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_cuujl3wdda , rtP .
InterpolationUsingPrelookup5_maxIndex_dtnijlfuco ) ; frac_ol [ 1 ] =
mzlgmqychg [ 1 ] ; frac_ol [ 2 ] = myhzkqobqq [ 1 ] ; frac_ol [ 3 ] =
oixlaxkj0z [ 1 ] ; bpIndex_ol [ 1 ] = g3ud4i51ui_idx_1 ; bpIndex_ol [ 2 ] =
bcylnfhnxj_idx_1 ; bpIndex_ol [ 3 ] = ievp443ply_idx_1 ; if ( rtP .
Constant8_Value_k4nt3fz4xw [ 1 ] > 1.0 ) { bpIndex_ol [ 4 ] = 1U ; } else {
bpIndex_ol [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_k4nt3fz4xw [ 1 ] , 0.0 ) ; } p4roalmgbr [ 13 ] =
intrp4d_fu32fla_pw ( bpIndex_ol , frac_ol , & rtP . dp_WING_tip . CMy [ 2450U
* bpIndex_ol [ 4 ] ] , rtP . InterpolationUsingPrelookup5_dimSize_cuujl3wdda
, rtP . InterpolationUsingPrelookup5_maxIndex_dtnijlfuco ) ; frac_ad [ 0 ] =
afif0ynjey ; bpIndex_ad [ 0 ] = hwi3v4bm1e ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_ad [ 1 ] = dq5140y2bs [ iU ] ; frac_ad [ 2 ] = bdbtstt51i [ iU ] ;
frac_ad [ 3 ] = ndmwly2tkn [ iU ] ; bpIndex_ad [ 1 ] = noamhvni52 [ iU ] ;
bpIndex_ad [ 2 ] = m155nrsjmd [ iU ] ; bpIndex_ad [ 3 ] = dqy5hcjfdc [ iU ] ;
if ( rtP . Constant8_Value_oxicdwsrs5 [ iU ] > 4.0 ) { bpIndex_ad [ 4 ] = 4U
; } else { bpIndex_ad [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_oxicdwsrs5 [ iU ] , 0.0 ) ; } p4roalmgbr [ iU + 14 ] =
intrp4d_fu32fla_pw ( bpIndex_ad , frac_ad , & rtP . dp_WING_root . CMz [
1750U * bpIndex_ad [ 4 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_dtkt15wwk3 , rtP .
InterpolationUsingPrelookup6_maxIndex_gjjssvtpss ) ; } frac_bi [ 0 ] =
gg4lrsx5if ; bpIndex_bi [ 0 ] = g2xbodp0xg ; frac_bi [ 1 ] = mzlgmqychg [ 0 ]
; frac_bi [ 2 ] = myhzkqobqq [ 0 ] ; frac_bi [ 3 ] = oixlaxkj0z [ 0 ] ;
bpIndex_bi [ 1 ] = g3ud4i51ui_idx_0 ; bpIndex_bi [ 2 ] = bcylnfhnxj_idx_0 ;
bpIndex_bi [ 3 ] = ievp443ply_idx_0 ; if ( rtP . Constant8_Value_k4nt3fz4xw [
0 ] > 1.0 ) { bpIndex_bi [ 4 ] = 1U ; } else { bpIndex_bi [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_k4nt3fz4xw [ 0 ] , 0.0 ) ; }
p4roalmgbr [ 19 ] = intrp4d_fu32fla_pw ( bpIndex_bi , frac_bi , & rtP .
dp_WING_tip . CMz [ 2450U * bpIndex_bi [ 4 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_mldz1mijpt , rtP .
InterpolationUsingPrelookup6_maxIndex_pbivizdauj ) ; frac_bi [ 1 ] =
mzlgmqychg [ 1 ] ; frac_bi [ 2 ] = myhzkqobqq [ 1 ] ; frac_bi [ 3 ] =
oixlaxkj0z [ 1 ] ; bpIndex_bi [ 1 ] = g3ud4i51ui_idx_1 ; bpIndex_bi [ 2 ] =
bcylnfhnxj_idx_1 ; bpIndex_bi [ 3 ] = ievp443ply_idx_1 ; if ( rtP .
Constant8_Value_k4nt3fz4xw [ 1 ] > 1.0 ) { bpIndex_bi [ 4 ] = 1U ; } else {
bpIndex_bi [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_k4nt3fz4xw [ 1 ] , 0.0 ) ; } p4roalmgbr [ 20 ] =
intrp4d_fu32fla_pw ( bpIndex_bi , frac_bi , & rtP . dp_WING_tip . CMz [ 2450U
* bpIndex_bi [ 4 ] ] , rtP . InterpolationUsingPrelookup6_dimSize_mldz1mijpt
, rtP . InterpolationUsingPrelookup6_maxIndex_pbivizdauj ) ; cwdb3qacqr = rtP
. S / 2.0 ; for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { dq25kgk52k [ 3 * i_p ] =
du3g43l3nf [ 3 * i_p ] * p4roalmgbr [ i_p ] * rtP . Constant_Value_mzicrsrha0
[ 3 * i_p ] * dbff0mb3bq * cwdb3qacqr + rtB . dakrs4do3bn [ 3 * i_p ] ;
dq25kgk52k [ 3 * i_p + 1 ] = du3g43l3nf [ 3 * i_p + 1 ] * p4roalmgbr [ i_p +
7 ] * rtP . Constant_Value_mzicrsrha0 [ 3 * i_p + 1 ] * dbff0mb3bq *
cwdb3qacqr + rtB . dakrs4do3bn [ 3 * i_p + 1 ] ; dq25kgk52k [ 3 * i_p + 2 ] =
du3g43l3nf [ 3 * i_p + 2 ] * p4roalmgbr [ i_p + 14 ] * rtP .
Constant_Value_mzicrsrha0 [ 3 * i_p + 2 ] * dbff0mb3bq * cwdb3qacqr + rtB .
dakrs4do3bn [ 3 * i_p + 2 ] ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) {
cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e < 7 ; i_e ++ ) { cwdb3qacqr +=
dq25kgk52k [ i_e * 3 + i_p ] ; } nl202crtfv [ i_p ] = cwdb3qacqr ; }
ivnfroue5d [ 0 ] = ( real32_T ) nl202crtfv [ 0 ] ; ivnfroue5d [ 1 ] = (
real32_T ) nl202crtfv [ 1 ] ; ivnfroue5d [ 2 ] = ( real32_T ) nl202crtfv [ 2
] ; parallel_for ( 7 , fpg3s0wb2o , 1 , "fpg3s0wb2o" ) ; frac_ba [ 0 ] =
adrjjwpu5v ; bpIndex_ba [ 0 ] = bfvckiyvxm ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_ba [ 1 ] = k4aa1o2bhw [ iU ] ; frac_ba [ 2 ] = nirteiccr5 [ iU ] ;
frac_ba [ 3 ] = hlj0oel2qy [ iU ] ; bpIndex_ba [ 1 ] = o1tzdshqbe [ iU ] ;
bpIndex_ba [ 2 ] = ku12scvirb [ iU ] ; bpIndex_ba [ 3 ] = mqutrzwpbz [ iU ] ;
if ( rtP . Constant8_Value_njl3h32qv2 [ iU ] > 4.0 ) { bpIndex_ba [ 4 ] = 4U
; } else { bpIndex_ba [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_njl3h32qv2 [ iU ] , 0.0 ) ; } l1aqdduiuf [ iU ] =
intrp4d_fu32fla_pw ( bpIndex_ba , frac_ba , & rtP . dp_WING_root . CMx [
1750U * bpIndex_ba [ 4 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_ge3vapa1k4 , rtP .
InterpolationUsingPrelookup4_maxIndex_jnxytu2nuz ) ; } frac_mg [ 0 ] =
do51zgnib3 ; bpIndex_mg [ 0 ] = gtuyvnkhut ; frac_mg [ 1 ] = ceos33awbx [ 0 ]
; frac_mg [ 2 ] = a3usql3psn [ 0 ] ; frac_mg [ 3 ] = bglwh2qkc0 [ 0 ] ;
bpIndex_mg [ 1 ] = mzftiie1yg_idx_0 ; bpIndex_mg [ 2 ] = gkal1jh445_idx_0 ;
bpIndex_mg [ 3 ] = gloodttbiv_idx_0 ; if ( rtP . Constant8_Value_feoxjcmban [
0 ] > 1.0 ) { bpIndex_mg [ 4 ] = 1U ; } else { bpIndex_mg [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_feoxjcmban [ 0 ] , 0.0 ) ; }
l1aqdduiuf [ 5 ] = intrp4d_fu32fla_pw ( bpIndex_mg , frac_mg , & rtP .
dp_WING_tip . CMx [ 2450U * bpIndex_mg [ 4 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_ocexngzvmf , rtP .
InterpolationUsingPrelookup4_maxIndex_enfzl53ssl ) ; frac_mg [ 1 ] =
ceos33awbx [ 1 ] ; frac_mg [ 2 ] = a3usql3psn [ 1 ] ; frac_mg [ 3 ] =
bglwh2qkc0 [ 1 ] ; bpIndex_mg [ 1 ] = mzftiie1yg_idx_1 ; bpIndex_mg [ 2 ] =
gkal1jh445_idx_1 ; bpIndex_mg [ 3 ] = gloodttbiv_idx_1 ; if ( rtP .
Constant8_Value_feoxjcmban [ 1 ] > 1.0 ) { bpIndex_mg [ 4 ] = 1U ; } else {
bpIndex_mg [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_feoxjcmban [ 1 ] , 0.0 ) ; } l1aqdduiuf [ 6 ] =
intrp4d_fu32fla_pw ( bpIndex_mg , frac_mg , & rtP . dp_WING_tip . CMx [ 2450U
* bpIndex_mg [ 4 ] ] , rtP . InterpolationUsingPrelookup4_dimSize_ocexngzvmf
, rtP . InterpolationUsingPrelookup4_maxIndex_enfzl53ssl ) ; frac_mc [ 0 ] =
adrjjwpu5v ; bpIndex_mc [ 0 ] = bfvckiyvxm ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_mc [ 1 ] = k4aa1o2bhw [ iU ] ; frac_mc [ 2 ] = nirteiccr5 [ iU ] ;
frac_mc [ 3 ] = hlj0oel2qy [ iU ] ; bpIndex_mc [ 1 ] = o1tzdshqbe [ iU ] ;
bpIndex_mc [ 2 ] = ku12scvirb [ iU ] ; bpIndex_mc [ 3 ] = mqutrzwpbz [ iU ] ;
if ( rtP . Constant8_Value_njl3h32qv2 [ iU ] > 4.0 ) { bpIndex_mc [ 4 ] = 4U
; } else { bpIndex_mc [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_njl3h32qv2 [ iU ] , 0.0 ) ; } l1aqdduiuf [ iU + 7 ] =
intrp4d_fu32fla_pw ( bpIndex_mc , frac_mc , & rtP . dp_WING_root . CMy [
1750U * bpIndex_mc [ 4 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_f5ct1ea3oc , rtP .
InterpolationUsingPrelookup5_maxIndex_pdg1fsteyw ) ; } frac_kw [ 0 ] =
do51zgnib3 ; bpIndex_kw [ 0 ] = gtuyvnkhut ; frac_kw [ 1 ] = ceos33awbx [ 0 ]
; frac_kw [ 2 ] = a3usql3psn [ 0 ] ; frac_kw [ 3 ] = bglwh2qkc0 [ 0 ] ;
bpIndex_kw [ 1 ] = mzftiie1yg_idx_0 ; bpIndex_kw [ 2 ] = gkal1jh445_idx_0 ;
bpIndex_kw [ 3 ] = gloodttbiv_idx_0 ; if ( rtP . Constant8_Value_feoxjcmban [
0 ] > 1.0 ) { bpIndex_kw [ 4 ] = 1U ; } else { bpIndex_kw [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_feoxjcmban [ 0 ] , 0.0 ) ; }
l1aqdduiuf [ 12 ] = intrp4d_fu32fla_pw ( bpIndex_kw , frac_kw , & rtP .
dp_WING_tip . CMy [ 2450U * bpIndex_kw [ 4 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_basg2zxn5a , rtP .
InterpolationUsingPrelookup5_maxIndex_ltgaqb4j52 ) ; frac_kw [ 1 ] =
ceos33awbx [ 1 ] ; frac_kw [ 2 ] = a3usql3psn [ 1 ] ; frac_kw [ 3 ] =
bglwh2qkc0 [ 1 ] ; bpIndex_kw [ 1 ] = mzftiie1yg_idx_1 ; bpIndex_kw [ 2 ] =
gkal1jh445_idx_1 ; bpIndex_kw [ 3 ] = gloodttbiv_idx_1 ; if ( rtP .
Constant8_Value_feoxjcmban [ 1 ] > 1.0 ) { bpIndex_kw [ 4 ] = 1U ; } else {
bpIndex_kw [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_feoxjcmban [ 1 ] , 0.0 ) ; } l1aqdduiuf [ 13 ] =
intrp4d_fu32fla_pw ( bpIndex_kw , frac_kw , & rtP . dp_WING_tip . CMy [ 2450U
* bpIndex_kw [ 4 ] ] , rtP . InterpolationUsingPrelookup5_dimSize_basg2zxn5a
, rtP . InterpolationUsingPrelookup5_maxIndex_ltgaqb4j52 ) ; frac_hk [ 0 ] =
adrjjwpu5v ; bpIndex_hk [ 0 ] = bfvckiyvxm ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_hk [ 1 ] = k4aa1o2bhw [ iU ] ; frac_hk [ 2 ] = nirteiccr5 [ iU ] ;
frac_hk [ 3 ] = hlj0oel2qy [ iU ] ; bpIndex_hk [ 1 ] = o1tzdshqbe [ iU ] ;
bpIndex_hk [ 2 ] = ku12scvirb [ iU ] ; bpIndex_hk [ 3 ] = mqutrzwpbz [ iU ] ;
if ( rtP . Constant8_Value_njl3h32qv2 [ iU ] > 4.0 ) { bpIndex_hk [ 4 ] = 4U
; } else { bpIndex_hk [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_njl3h32qv2 [ iU ] , 0.0 ) ; } l1aqdduiuf [ iU + 14 ] =
intrp4d_fu32fla_pw ( bpIndex_hk , frac_hk , & rtP . dp_WING_root . CMz [
1750U * bpIndex_hk [ 4 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_p14bgfbmah , rtP .
InterpolationUsingPrelookup6_maxIndex_js3danak4m ) ; } frac_i1 [ 0 ] =
do51zgnib3 ; bpIndex_i1 [ 0 ] = gtuyvnkhut ; frac_i1 [ 1 ] = ceos33awbx [ 0 ]
; frac_i1 [ 2 ] = a3usql3psn [ 0 ] ; frac_i1 [ 3 ] = bglwh2qkc0 [ 0 ] ;
bpIndex_i1 [ 1 ] = mzftiie1yg_idx_0 ; bpIndex_i1 [ 2 ] = gkal1jh445_idx_0 ;
bpIndex_i1 [ 3 ] = gloodttbiv_idx_0 ; if ( rtP . Constant8_Value_feoxjcmban [
0 ] > 1.0 ) { bpIndex_i1 [ 4 ] = 1U ; } else { bpIndex_i1 [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_feoxjcmban [ 0 ] , 0.0 ) ; }
l1aqdduiuf [ 19 ] = intrp4d_fu32fla_pw ( bpIndex_i1 , frac_i1 , & rtP .
dp_WING_tip . CMz [ 2450U * bpIndex_i1 [ 4 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_lg0hi1o0ih , rtP .
InterpolationUsingPrelookup6_maxIndex_c25w2rmlzy ) ; frac_i1 [ 1 ] =
ceos33awbx [ 1 ] ; frac_i1 [ 2 ] = a3usql3psn [ 1 ] ; frac_i1 [ 3 ] =
bglwh2qkc0 [ 1 ] ; bpIndex_i1 [ 1 ] = mzftiie1yg_idx_1 ; bpIndex_i1 [ 2 ] =
gkal1jh445_idx_1 ; bpIndex_i1 [ 3 ] = gloodttbiv_idx_1 ; if ( rtP .
Constant8_Value_feoxjcmban [ 1 ] > 1.0 ) { bpIndex_i1 [ 4 ] = 1U ; } else {
bpIndex_i1 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_feoxjcmban [ 1 ] , 0.0 ) ; } l1aqdduiuf [ 20 ] =
intrp4d_fu32fla_pw ( bpIndex_i1 , frac_i1 , & rtP . dp_WING_tip . CMz [ 2450U
* bpIndex_i1 [ 4 ] ] , rtP . InterpolationUsingPrelookup6_dimSize_lg0hi1o0ih
, rtP . InterpolationUsingPrelookup6_maxIndex_c25w2rmlzy ) ; cwdb3qacqr = rtP
. S / 2.0 ; for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { dq25kgk52k [ 3 * i_p ] =
liydxvyvbx [ 3 * i_p ] * l1aqdduiuf [ i_p ] * rtP . Constant_Value_gjwxjhry2s
[ 3 * i_p ] * dbff0mb3bq * cwdb3qacqr + rtB . dakrs4do3b [ 3 * i_p ] ;
dq25kgk52k [ 3 * i_p + 1 ] = liydxvyvbx [ 3 * i_p + 1 ] * l1aqdduiuf [ i_p +
7 ] * rtP . Constant_Value_gjwxjhry2s [ 3 * i_p + 1 ] * dbff0mb3bq *
cwdb3qacqr + rtB . dakrs4do3b [ 3 * i_p + 1 ] ; dq25kgk52k [ 3 * i_p + 2 ] =
liydxvyvbx [ 3 * i_p + 2 ] * l1aqdduiuf [ i_p + 14 ] * rtP .
Constant_Value_gjwxjhry2s [ 3 * i_p + 2 ] * dbff0mb3bq * cwdb3qacqr + rtB .
dakrs4do3b [ 3 * i_p + 2 ] ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) {
cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e < 7 ; i_e ++ ) { cwdb3qacqr +=
dq25kgk52k [ i_e * 3 + i_p ] ; } nl202crtfv [ i_p ] = cwdb3qacqr ; }
bdvkktmal5_idx_0 = ( real32_T ) nl202crtfv [ 0 ] ; bdvkktmal5_idx_1 = (
real32_T ) nl202crtfv [ 1 ] ; bdvkktmal5_idx_2 = ( real32_T ) nl202crtfv [ 2
] ; parallel_for ( 16 , hircojder3 , 1 , "hircojder3" ) ; for ( iU = 0 ; iU <
16 ; iU ++ ) { lco5i2tcb1 = d4lboqrosv [ iU ] ; n00enf32nh = mvstg4yzt0 [ iU
] ; mpp40chq4u = fehxxn152z [ iU ] ; nsmwxx5bxv = fqmpp1ruun [ iU ] ;
jtoldnh5tw = fgtgm00bdu [ iU ] ; cwdb3qacqr = mcfbmp4hwj [ iU ] ; frac_ct [ 0
] = cwdb3qacqr ; frac_ct [ 1 ] = jtoldnh5tw ; frac_ct [ 2 ] = nsmwxx5bxv ;
bpIndex_ct [ 0 ] = mpp40chq4u ; bpIndex_ct [ 1 ] = n00enf32nh ; bpIndex_ct [
2 ] = lco5i2tcb1 ; if ( rtP . Constant8_Value_fts3foi4on [ iU ] > 15.0 ) {
bpIndex_ct [ 3 ] = 15U ; } else { bpIndex_ct [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_fts3foi4on [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU ] = intrp3d_fl_pw ( bpIndex_ct , frac_ct , & rtP . dp_VTAIL .
CMx [ 1170U * bpIndex_ct [ 3 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_k2yx1bmfms ) ; frac_ni [ 0 ] =
cwdb3qacqr ; frac_ni [ 1 ] = jtoldnh5tw ; frac_ni [ 2 ] = nsmwxx5bxv ;
bpIndex_ni [ 0 ] = mpp40chq4u ; bpIndex_ni [ 1 ] = n00enf32nh ; bpIndex_ni [
2 ] = lco5i2tcb1 ; if ( rtP . Constant8_Value_fts3foi4on [ iU ] > 15.0 ) {
bpIndex_ni [ 3 ] = 15U ; } else { bpIndex_ni [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_fts3foi4on [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU + 16 ] = intrp3d_fl_pw ( bpIndex_ni , frac_ni , & rtP .
dp_VTAIL . CMy [ 1170U * bpIndex_ni [ 3 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_kii5u2qxy2 ) ; frac_oc [ 0 ] =
cwdb3qacqr ; frac_oc [ 1 ] = jtoldnh5tw ; frac_oc [ 2 ] = nsmwxx5bxv ;
bpIndex_oc [ 0 ] = mpp40chq4u ; bpIndex_oc [ 1 ] = n00enf32nh ; bpIndex_oc [
2 ] = lco5i2tcb1 ; if ( rtP . Constant8_Value_fts3foi4on [ iU ] > 15.0 ) {
bpIndex_oc [ 3 ] = 15U ; } else { bpIndex_oc [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_fts3foi4on [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU + 32 ] = intrp3d_fl_pw ( bpIndex_oc , frac_oc , & rtP .
dp_VTAIL . CMz [ 1170U * bpIndex_oc [ 3 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_eow2ukjsmr ) ; mfkqvhwnqs [ 3 * iU ] =
mybyivl1uq [ 3 * iU ] * k1zpj42h11 [ iU ] * rtP . Constant1_Value_hrig2irx54
[ 3 * iU ] * dbff0mb3bq * rtP . Gain3_Gain_d4okuvomnp + rtB . dakrs4do3bni [
3 * iU ] ; mfkqvhwnqs [ 3 * iU + 1 ] = mybyivl1uq [ 3 * iU + 1 ] * k1zpj42h11
[ iU + 16 ] * rtP . Constant1_Value_hrig2irx54 [ 3 * iU + 1 ] * dbff0mb3bq *
rtP . Gain3_Gain_d4okuvomnp + rtB . dakrs4do3bni [ 3 * iU + 1 ] ; mfkqvhwnqs
[ 3 * iU + 2 ] = mybyivl1uq [ 3 * iU + 2 ] * k1zpj42h11 [ iU + 32 ] * rtP .
Constant1_Value_hrig2irx54 [ 3 * iU + 2 ] * dbff0mb3bq * rtP .
Gain3_Gain_d4okuvomnp + rtB . dakrs4do3bni [ 3 * iU + 2 ] ; } iU = 0 ; for (
i_p = 0 ; i_p < 3 ; i_p ++ ) { cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e < 16
; i_e ++ ) { cwdb3qacqr += mfkqvhwnqs [ i_e * 3 + i_p ] ; } nl202crtfv [ i_p
] = cwdb3qacqr ; } cq2trmp0xn_idx_0 = ( real32_T ) nl202crtfv [ 0 ] ;
cq2trmp0xn_idx_1 = ( real32_T ) nl202crtfv [ 1 ] ; cq2trmp0xn_idx_2 = (
real32_T ) nl202crtfv [ 2 ] ; frac_hy [ 0 ] = fathofdwn4 ; frac_hy [ 1 ] =
nz0cjy5leu ; bpIndex_hy [ 0 ] = exyi3olyp3 ; bpIndex_hy [ 1 ] = ogpett5jn1 ;
frac_cy [ 0 ] = fathofdwn4 ; frac_cy [ 1 ] = nz0cjy5leu ; bpIndex_cy [ 0 ] =
exyi3olyp3 ; bpIndex_cy [ 1 ] = ogpett5jn1 ; frac_gn [ 0 ] = fathofdwn4 ;
frac_gn [ 1 ] = nz0cjy5leu ; bpIndex_gn [ 0 ] = exyi3olyp3 ; bpIndex_gn [ 1 ]
= ogpett5jn1 ; nl202crtfv [ 0 ] = intrp2d_fu32fl_pw ( bpIndex_hy , frac_hy ,
rtP . dp_FUSE_FIN . CMx , 13U ) * o0o3ab3dt4 * rtP .
Constant_Value_mw5orau3x5 [ 0 ] ; nl202crtfv [ 1 ] = intrp2d_fu32fl_pw (
bpIndex_cy , frac_cy , rtP . dp_FUSE_FIN . CMy , 13U ) * o0o3ab3dt4 * rtP .
Constant_Value_mw5orau3x5 [ 1 ] ; nl202crtfv [ 2 ] = intrp2d_fu32fl_pw (
bpIndex_gn , frac_gn , rtP . dp_FUSE_FIN . CMz , 13U ) * o0o3ab3dt4 * rtP .
Constant_Value_mw5orau3x5 [ 2 ] ; awuilyxvbq [ 0 ] = dbff0mb3bq * nl202crtfv
[ 0 ] ; awuilyxvbq [ 1 ] = dbff0mb3bq * nl202crtfv [ 1 ] ; awuilyxvbq [ 2 ] =
dbff0mb3bq * nl202crtfv [ 2 ] ; cwdb3qacqr = rtP . S / 2.0 ; rtB . mdz0s04dcr
[ 0 ] = ( ( rtB . j0nikyscbg [ 1 ] * g0uuf55mpg [ 2 ] - g0uuf55mpg [ 1 ] *
rtB . j0nikyscbg [ 2 ] ) + cwdb3qacqr * awuilyxvbq [ 0 ] ) + ( ( real_T ) ( -
ivnfroue5d [ 0 ] + bdvkktmal5_idx_0 ) + cq2trmp0xn_idx_0 ) ; rtB . mdz0s04dcr
[ 1 ] = ( ( g0uuf55mpg [ 0 ] * rtB . j0nikyscbg [ 2 ] - rtB . j0nikyscbg [ 0
] * g0uuf55mpg [ 2 ] ) + cwdb3qacqr * awuilyxvbq [ 1 ] ) + ( ( real_T ) (
ivnfroue5d [ 1 ] + bdvkktmal5_idx_1 ) + cq2trmp0xn_idx_1 ) ; rtB . mdz0s04dcr
[ 2 ] = ( ( rtB . j0nikyscbg [ 0 ] * g0uuf55mpg [ 1 ] - g0uuf55mpg [ 0 ] *
rtB . j0nikyscbg [ 1 ] ) + cwdb3qacqr * awuilyxvbq [ 2 ] ) + ( ( real_T ) ( -
ivnfroue5d [ 2 ] + bdvkktmal5_idx_2 ) + cq2trmp0xn_idx_2 ) ; if ( rtP .
DirectionCosineMatrixtoRotationAngles_action_n1wskj42x4 != 1.0 ) { ctbmhlk4sc
( rtS , dnttemuy2m , rtP .
DirectionCosineMatrixtoRotationAngles_action_n1wskj42x4 , rtP .
DirectionCosineMatrixtoRotationAngles_tolerance_nigpbslnuo , & rtDW .
f1rxuufunp , & rtP . f1rxuufunp ) ; } if ( j0r0arniji >= rtP . fcc .
path_num_u - 0.5 ) { j0r0arniji = rtP . Constant2_Value_khh0lleyaf ; } if (
rtP . DirectionCosineMatrixtoRotationAngles1_action != 1.0 ) { ctbmhlk4sc (
rtS , lbb4akipfk , rtP . DirectionCosineMatrixtoRotationAngles1_action , rtP
. DirectionCosineMatrixtoRotationAngles1_tolerance , & rtDW . pw2pn5yxj3 , &
rtP . pw2pn5yxj3 ) ; } rtDW . hvrukley13 = false ; memcpy ( & rtDW .
hrv12n540b [ 0 ] , & rtB . cy3oarwspn [ 0 ] , 15U * sizeof ( real_T ) ) ;
rtDW . ewnwvk30kq = j0r0arniji ; s315_iter ++ ; } while ( ( rtP .
UpdateCompleteB_Value != 0.0 ) && ( s315_iter <= 5 ) ) ; ncgfuwjrdt [ 0 ] =
ebzekdphab [ 0 ] - rtB . hcyzeqbkyr . irdqb2psgr ; ncgfuwjrdt [ 1 ] =
ebzekdphab [ 1 ] - rtB . hcyzeqbkyr . hrb5rmirrg ; ncgfuwjrdt [ 2 ] =
ebzekdphab [ 2 ] - rtB . hcyzeqbkyr . dpynkxuvej ; for ( i = 0 ; i < 5 ; i ++
) { rtB . kjiklmu0rz [ i ] = muDoubleScalarMax ( muDoubleScalarMin (
hz1wdoosnd [ i ] + rtB . bmeh4vds3c [ i ] , rtB . oksmwianox [ i ] ) , rtB .
e5lut2zpnm [ i ] ) ; } rtB . gm0tzlf5nh = look1_plinlcpw ( rtB . m1kth42sm5 ,
rtP . dp_PREF . DEP_PREF . V , rtP . dp_PREF . DEP_PREF . actf , & rtDW .
drfz5czaqt , 48U ) ; rtB . dqudjsttt2 = look1_plinlcpw ( rtB . m1kth42sm5 ,
rtP . dp_PREF . FLAP_PREF . V , rtP . dp_PREF . FLAP_PREF . flap , & rtDW .
bghenoofp3 , 48U ) ; j0r0arniji = look1_plinlcpw ( rtB . cuqqqrtko4 , rtP .
DEP_WEIGHTS_bp01Data , rtP . DEP_WEIGHTS_tableData , & rtDW . efelnchztt , 1U
) ; memcpy ( & rtB . m1fq1zddst [ 0 ] , & rtP . fcc . path_W_pref [ 0 ] , 25U
* sizeof ( real_T ) ) ; rtB . m1fq1zddst [ 6 ] = j0r0arniji ; rtB .
m1fq1zddst [ 12 ] = look1_plinlcpw ( rtB . cuqqqrtko4 , rtP .
FLAP_WEIGHTS_bp01Data , rtP . FLAP_WEIGHTS_tableData , & rtDW . mmlvnrnkd5 ,
1U ) ; rtB . m1fq1zddst [ 18 ] = look1_plinlcpw ( rtB . cuqqqrtko4 , rtP .
ALPHA_WEIGHTS_bp01Data , rtP . ALPHA_WEIGHTS_tableData , & rtDW . pyico4tskx
, 1U ) ; sol_pref [ 0 ] = rtB . blaocua1dm - lyv0niej1z [ 0 ] ; sol_pref [ 1
] = rtB . gm0tzlf5nh - lyv0niej1z [ 1 ] ; sol_pref [ 2 ] = rtB . dqudjsttt2 -
lyv0niej1z [ 2 ] ; sol_pref [ 3 ] = rtP . Constant_Value_ng5hf1pymy -
lyv0niej1z [ 3 ] ; sol_pref [ 4 ] = rtP . Constant1_Value_g2pa3kbxro -
i5y02tnznl_idx_0 ; for ( i = 0 ; i < 5 ; i ++ ) { j0r0arniji = sol_pref [ i ]
; dh3zefosvy = lyv0niej1z [ i ] ; umax [ i ] = rtB . kjiklmu0rz [ i ] -
dh3zefosvy ; nyvvsyjlz2 [ i ] = j0r0arniji * 0.0 ; a__1 [ i ] = j0r0arniji *
0.0 ; for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { tmp_p [ i_p + 3 * i ] = 0.0 ;
tmp_p [ i_p + 3 * i ] += 100.0 * rtP . fcc . path_W_des [ i_p ] * rtB .
cy3oarwspn [ 3 * i ] ; tmp_p [ i_p + 3 * i ] += rtP . fcc . path_W_des [ i_p
+ 3 ] * 100.0 * rtB . cy3oarwspn [ 3 * i + 1 ] ; tmp_p [ i_p + 3 * i ] += rtP
. fcc . path_W_des [ i_p + 6 ] * 100.0 * rtB . cy3oarwspn [ 3 * i + 2 ] ; }
hz1wdoosnd [ i ] = muDoubleScalarMin ( muDoubleScalarMax ( hz1wdoosnd [ i ] +
rtB . avjdxfoo5a [ i ] , rtB . e5lut2zpnm [ i ] ) , rtB . oksmwianox [ i ] )
- dh3zefosvy ; } for ( i_p = 0 ; i_p < 5 ; i_p ++ ) { A [ i_p << 3 ] = tmp_p
[ 3 * i_p ] ; A [ ( i_p << 3 ) + 1 ] = tmp_p [ 3 * i_p + 1 ] ; A [ ( i_p << 3
) + 2 ] = tmp_p [ 3 * i_p + 2 ] ; for ( i_e = 0 ; i_e < 5 ; i_e ++ ) { A [ (
i_e + ( i_p << 3 ) ) + 3 ] = rtB . m1fq1zddst [ 5 * i_p + i_e ] ; } } for (
i_p = 0 ; i_p < 3 ; i_p ++ ) { p1t5syw2cc [ i_p ] = ( rtP . fcc . path_W_des
[ i_p + 3 ] * 100.0 * ncgfuwjrdt [ 1 ] + 100.0 * rtP . fcc . path_W_des [ i_p
] * ncgfuwjrdt [ 0 ] ) + rtP . fcc . path_W_des [ i_p + 6 ] * 100.0 *
ncgfuwjrdt [ 2 ] ; } tmp_e [ 0 ] = p1t5syw2cc [ 0 ] ; tmp_e [ 1 ] =
p1t5syw2cc [ 1 ] ; tmp_e [ 2 ] = p1t5syw2cc [ 2 ] ; for ( i_p = 0 ; i_p < 5 ;
i_p ++ ) { p [ i_p ] = 0.0 ; for ( i_e = 0 ; i_e < 5 ; i_e ++ ) { p [ i_p ]
+= rtB . m1fq1zddst [ 5 * i_e + i_p ] * sol_pref [ i_e ] ; } tmp_e [ i_p + 3
] = p [ i_p ] ; } for ( i_p = 0 ; i_p < 8 ; i_p ++ ) { A_e [ i_p ] = 0.0 ;
for ( i_e = 0 ; i_e < 5 ; i_e ++ ) { A_e [ i_p ] += A [ ( i_e << 3 ) + i_p ]
* nyvvsyjlz2 [ i_e ] ; } d [ i_p ] = tmp_e [ i_p ] - A_e [ i_p ] ; } for ( i
= 0 ; i < 5 ; i ++ ) { i_free [ i ] = ( a__1 [ i ] == 0.0 ) ; } s315_iter = 1
; do { exitg1 = 0 ; if ( iU < 100 ) { s315_iter = iU + 1 ; i_p = 0 ; for (
i_e = 0 ; i_e < 5 ; i_e ++ ) { if ( i_free [ i_e ] ) { i_p ++ ; } }
e_size_idx_0 = i_p ; i_p = 0 ; for ( i_e = 0 ; i_e < 5 ; i_e ++ ) { if (
i_free [ i_e ] ) { e_data [ i_p ] = ( int8_T ) ( i_e + 1 ) ; i_p ++ ; } }
A_free_size [ 0 ] = 8 ; A_free_size [ 1 ] = e_size_idx_0 ; for ( i_p = 0 ;
i_p < e_size_idx_0 ; i_p ++ ) { for ( i_e = 0 ; i_e < 8 ; i_e ++ ) {
A_free_data [ i_e + ( i_p << 3 ) ] = A [ ( ( e_data [ i_p ] - 1 ) << 3 ) +
i_e ] ; } } gmaok0xwak ( A_free_data , A_free_size , d , p_free_data , &
p_free_size ) ; i_p = 0 ; for ( i = 0 ; i < 5 ; i ++ ) { j0r0arniji = 0.0 ;
if ( i_free [ i ] ) { j0r0arniji = p_free_data [ i_p ] ; i_p ++ ; } sol_pref
[ i ] = nyvvsyjlz2 [ i ] + j0r0arniji ; p [ i ] = j0r0arniji ; } i_p = 0 ;
for ( i_e = 0 ; i_e < 5 ; i_e ++ ) { if ( i_free [ i_e ] ) { i_p ++ ; } } i =
i_p ; i_p = 0 ; for ( i_e = 0 ; i_e < 5 ; i_e ++ ) { if ( i_free [ i_e ] ) {
f_data [ i_p ] = ( int8_T ) ( i_e + 1 ) ; i_p ++ ; } } sol_pref_size = i ;
for ( i_p = 0 ; i_p < i ; i_p ++ ) { f = f_data [ i_p ] ; sol_pref_data [ i_p
] = ( ( sol_pref [ f - 1 ] < hz1wdoosnd [ f - 1 ] ) || ( sol_pref [ f - 1 ] >
umax [ f - 1 ] ) ) ; } if ( ! d10bfzk1x4 ( sol_pref_data , & sol_pref_size )
) { for ( i = 0 ; i < 5 ; i ++ ) { nyvvsyjlz2 [ i ] = sol_pref [ i ] ; }
bu1ixebwun ( A_free_data , A_free_size , p_free_data , tmp_e ) ; for ( i_p =
0 ; i_p <= 6 ; i_p += 2 ) { tmp_c = _mm_loadu_pd ( & d [ i_p ] ) ; tmp_j =
_mm_loadu_pd ( & tmp_e [ i_p ] ) ; _mm_storeu_pd ( & d [ i_p ] , _mm_sub_pd (
tmp_c , tmp_j ) ) ; } for ( i_p = 0 ; i_p < 5 ; i_p ++ ) { p [ i_p ] = 0.0 ;
for ( i_e = 0 ; i_e < 8 ; i_e ++ ) { p [ i_p ] += A [ ( i_p << 3 ) + i_e ] *
d [ i_e ] ; } sol_pref [ i_p ] = a__1 [ i_p ] * p [ i_p ] ; } buu2icvrlx =
true ; i_e = 0 ; exitg2 = false ; while ( ( ! exitg2 ) && ( i_e < 5 ) ) { if
( ! ( sol_pref [ i_e ] >= - 2.2204460492503131E-16 ) ) { buu2icvrlx = false ;
exitg2 = true ; } else { i_e ++ ; } } if ( buu2icvrlx ) { iU = 1 ; exitg1 = 1
; } else { lca5lqssir ( sol_pref , & j0r0arniji , & i_e ) ; a__1 [ i_e - 1 ]
= 0.0 ; i_free [ i_e - 1 ] = true ; iU ++ ; } } else { i_p = 0 ; for ( i = 0
; i < 5 ; i ++ ) { j0r0arniji = p [ i ] ; sol_pref [ i ] = 1.0 ; buu2icvrlx =
( j0r0arniji < 0.0 ) ; sol_pref_data [ i ] = ( j0r0arniji > 0.0 ) ; if (
i_free [ i ] && buu2icvrlx ) { i_p ++ ; } c [ i ] = buu2icvrlx ; } i = i_p ;
i_p = 0 ; for ( i_e = 0 ; i_e < 5 ; i_e ++ ) { if ( i_free [ i_e ] && c [ i_e
] ) { g_data [ i_p ] = ( int8_T ) ( i_e + 1 ) ; i_p ++ ; } } for ( i_p = 0 ;
i_p < i ; i_p ++ ) { f = g_data [ i_p ] ; x_data [ i_p ] = ( hz1wdoosnd [ f -
1 ] - nyvvsyjlz2 [ f - 1 ] ) / p [ f - 1 ] ; } i_p = 0 ; for ( i_e = 0 ; i_e
< 5 ; i_e ++ ) { if ( i_free [ i_e ] && c [ i_e ] ) { sol_pref [ i_e ] =
x_data [ i_p ] ; i_p ++ ; } } i_p = 0 ; for ( i_e = 0 ; i_e < 5 ; i_e ++ ) {
if ( i_free [ i_e ] && sol_pref_data [ i_e ] ) { i_p ++ ; } } i = i_p ; i_p =
0 ; for ( i_e = 0 ; i_e < 5 ; i_e ++ ) { if ( i_free [ i_e ] && sol_pref_data
[ i_e ] ) { h_data [ i_p ] = ( int8_T ) ( i_e + 1 ) ; i_p ++ ; } } for ( i_p
= 0 ; i_p < i ; i_p ++ ) { f = h_data [ i_p ] ; x_data [ i_p ] = ( umax [ f -
1 ] - nyvvsyjlz2 [ f - 1 ] ) / p [ f - 1 ] ; } i_p = 0 ; for ( i_e = 0 ; i_e
< 5 ; i_e ++ ) { if ( i_free [ i_e ] && sol_pref_data [ i_e ] ) { sol_pref [
i_e ] = x_data [ i_p ] ; i_p ++ ; } } lca5lqssir ( sol_pref , & j0r0arniji ,
& i_e ) ; for ( i_p = 0 ; i_p < 5 ; i_p ++ ) { nyvvsyjlz2 [ i_p ] +=
j0r0arniji * p [ i_p ] ; } A_free_size_e [ 0 ] = 8 ; A_free_size_e [ 1 ] =
e_size_idx_0 ; i = e_size_idx_0 << 3 ; e_size_idx_0 = ( i / 2 ) << 1 ;
vectorUB = e_size_idx_0 - 2 ; for ( i_p = 0 ; i_p <= vectorUB ; i_p += 2 ) {
tmp_c = _mm_loadu_pd ( & A_free_data [ i_p ] ) ; _mm_storeu_pd ( &
A_free_data_e [ i_p ] , _mm_mul_pd ( tmp_c , _mm_set1_pd ( j0r0arniji ) ) ) ;
} for ( i_p = e_size_idx_0 ; i_p < i ; i_p ++ ) { A_free_data_e [ i_p ] =
A_free_data [ i_p ] * j0r0arniji ; } bu1ixebwun ( A_free_data_e ,
A_free_size_e , p_free_data , tmp_e ) ; for ( i_p = 0 ; i_p <= 6 ; i_p += 2 )
{ tmp_c = _mm_loadu_pd ( & d [ i_p ] ) ; tmp_j = _mm_loadu_pd ( & tmp_e [ i_p
] ) ; _mm_storeu_pd ( & d [ i_p ] , _mm_sub_pd ( tmp_c , tmp_j ) ) ; } a__1 [
i_e - 1 ] = muDoubleScalarSign ( p [ i_e - 1 ] ) ; i_free [ i_e - 1 ] = false
; iU ++ ; } } else { iU = 0 ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; for (
i_p = 0 ; i_p < 3 ; i_p ++ ) { g52k1xdouv_idx_1 = 0.0 ; for ( i_e = 0 ; i_e <
5 ; i_e ++ ) { g52k1xdouv_idx_1 += rtB . cy3oarwspn [ 3 * i_e + i_p ] *
nyvvsyjlz2 [ i_e ] ; } rtB . dnroe21vud [ i_p ] = ncgfuwjrdt [ i_p ] -
g52k1xdouv_idx_1 ; } for ( i = 0 ; i < 5 ; i ++ ) { if ( iU < 1 ) { rtB .
enpvrp5gce [ i ] = lyv0niej1z [ i ] ; } else { rtB . enpvrp5gce [ i ] =
lyv0niej1z [ i ] + nyvvsyjlz2 [ i ] ; } } rtB . j02exxidge = s315_iter ;
e32kai3hdx = rtP . DiscreteTransferFcn1_NumCoef * rtDW . agukinkt3v ; if ( !
( rtP . fcc . use_joystick > rtP . Switch1_Threshold_kpavomuuj5 ) ) {
e32kai3hdx = rtP . Constant_Value_jdoc1l1i1t ; } rtB . cu0gyogazi [ 0 ] = rtP
. Gain_Gain_cicuzn1les * rtB . enpvrp5gce [ 3 ] ; rtB . cu0gyogazi [ 1 ] =
rtP . Gain_Gain_cicuzn1les * e32kai3hdx ; rtB . cu0gyogazi [ 2 ] = rtP .
Gain_Gain_cicuzn1les * rtB . enpvrp5gce [ 4 ] ; rtB . pxar0qtz24 [ 0 ] = rtP
. Gain_Gain_hixyoibsnq * rtB . cuqqqrtko4 ; rtB . pxar0qtz24 [ 1 ] = rtP .
Gain_Gain_hixyoibsnq * rtB . mxf3xuhmmg ; rtB . pxar0qtz24 [ 2 ] = rtP .
Gain_Gain_hixyoibsnq * i5y02tnznl_idx_0 ; p4xbdqn5oc [ 0 ] = rtP . fcc .
att_kc * rtB . enpvrp5gce [ 3 ] ; p4xbdqn5oc [ 1 ] = rtP . fcc . att_kc *
e32kai3hdx ; p4xbdqn5oc [ 2 ] = rtP . fcc . att_kc * rtB . enpvrp5gce [ 4 ] ;
if ( rtDW . mnnmbnljys != 0 ) { if ( rtP . fcc . att_int0_from_command > rtP
. Switch_Threshold_krkze4r0pz ) { rtDW . fy4szg1x5i [ 0 ] = p4xbdqn5oc [ 0 ]
; rtDW . fy4szg1x5i [ 1 ] = p4xbdqn5oc [ 1 ] ; rtDW . fy4szg1x5i [ 2 ] =
p4xbdqn5oc [ 2 ] ; } else { rtDW . fy4szg1x5i [ 0 ] = rtP . fcc . att_int0 ;
rtDW . fy4szg1x5i [ 1 ] = rtP . fcc . att_int0 ; rtDW . fy4szg1x5i [ 2 ] =
rtP . fcc . att_int0 ; } } p4xbdqn5oc [ 0 ] = ( ( p4xbdqn5oc [ 0 ] + rtDW .
fy4szg1x5i [ 0 ] ) - rtB . cuqqqrtko4 ) * rtP . fcc . att_kb [ 0 ] + rtB .
drxfnrnb3t ; if ( p4xbdqn5oc [ 0 ] > rtP . fcc . att_y_ref_dot_ulim [ 0 ] ) {
ncgfuwjrdt [ 0 ] = rtP . fcc . att_y_ref_dot_ulim [ 0 ] ; } else if (
p4xbdqn5oc [ 0 ] < rtP . fcc . att_y_ref_dot_llim [ 0 ] ) { ncgfuwjrdt [ 0 ]
= rtP . fcc . att_y_ref_dot_llim [ 0 ] ; } else { ncgfuwjrdt [ 0 ] =
p4xbdqn5oc [ 0 ] ; } p4xbdqn5oc [ 1 ] = ( ( p4xbdqn5oc [ 1 ] + rtDW .
fy4szg1x5i [ 1 ] ) - rtB . mxf3xuhmmg ) * rtP . fcc . att_kb [ 1 ] + rtB .
drxfnrnb3t ; if ( p4xbdqn5oc [ 1 ] > rtP . fcc . att_y_ref_dot_ulim [ 1 ] ) {
ncgfuwjrdt [ 1 ] = rtP . fcc . att_y_ref_dot_ulim [ 1 ] ; } else if (
p4xbdqn5oc [ 1 ] < rtP . fcc . att_y_ref_dot_llim [ 1 ] ) { ncgfuwjrdt [ 1 ]
= rtP . fcc . att_y_ref_dot_llim [ 1 ] ; } else { ncgfuwjrdt [ 1 ] =
p4xbdqn5oc [ 1 ] ; } p4xbdqn5oc [ 2 ] = ( ( p4xbdqn5oc [ 2 ] + rtDW .
fy4szg1x5i [ 2 ] ) - i5y02tnznl_idx_0 ) * rtP . fcc . att_kb [ 2 ] + rtB .
drxfnrnb3t ; if ( p4xbdqn5oc [ 2 ] > rtP . fcc . att_y_ref_dot_ulim [ 2 ] ) {
ncgfuwjrdt [ 2 ] = rtP . fcc . att_y_ref_dot_ulim [ 2 ] ; } else if (
p4xbdqn5oc [ 2 ] < rtP . fcc . att_y_ref_dot_llim [ 2 ] ) { ncgfuwjrdt [ 2 ]
= rtP . fcc . att_y_ref_dot_llim [ 2 ] ; } else { ncgfuwjrdt [ 2 ] =
p4xbdqn5oc [ 2 ] ; } cwdb3qacqr = muDoubleScalarCos ( rtB . cuqqqrtko4 ) ; cb
= muDoubleScalarCos ( rtB . mxf3xuhmmg ) ; g52k1xdouv_idx_0 =
muDoubleScalarCos ( i5y02tnznl_idx_0 ) ; gdvtsdc4i4_idx_1 = muDoubleScalarSin
( rtB . cuqqqrtko4 ) ; sb = muDoubleScalarSin ( rtB . mxf3xuhmmg ) ;
g52k1xdouv_idx_1 = muDoubleScalarSin ( i5y02tnznl_idx_0 ) ; j0r0arniji =
muDoubleScalarCos ( rtB . cuqqqrtko4 ) ; dh3zefosvy = muDoubleScalarCos ( rtB
. mxf3xuhmmg ) ; hy1xz2ukcn = muDoubleScalarSin ( rtB . cuqqqrtko4 ) ;
mvrmkcanel [ 0 ] = j0r0arniji * dh3zefosvy ; mvrmkcanel [ 3 ] = 0.0 ;
mvrmkcanel [ 6 ] = hy1xz2ukcn ; mvrmkcanel [ 1 ] = muDoubleScalarSin ( rtB .
mxf3xuhmmg ) ; mvrmkcanel [ 4 ] = 1.0 ; mvrmkcanel [ 7 ] = 0.0 ; mvrmkcanel [
2 ] = hy1xz2ukcn * dh3zefosvy ; mvrmkcanel [ 5 ] = 0.0 ; mvrmkcanel [ 8 ] = -
j0r0arniji ; j0r0arniji = ncgfuwjrdt [ 2 ] ; dh3zefosvy = ncgfuwjrdt [ 0 ] ;
l4omwvocst_idx_1 = ncgfuwjrdt [ 1 ] ; pciztti2mf [ 0 ] = cwdb3qacqr * cb ;
pciztti2mf [ 1 ] = sb ; pciztti2mf [ 2 ] = gdvtsdc4i4_idx_1 * cb ; pciztti2mf
[ 3 ] = - cwdb3qacqr * sb * g52k1xdouv_idx_0 + gdvtsdc4i4_idx_1 *
g52k1xdouv_idx_1 ; pciztti2mf [ 4 ] = cb * g52k1xdouv_idx_0 ; pciztti2mf [ 5
] = - gdvtsdc4i4_idx_1 * sb * g52k1xdouv_idx_0 - cwdb3qacqr *
g52k1xdouv_idx_1 ; pciztti2mf [ 6 ] = - cwdb3qacqr * sb * g52k1xdouv_idx_1 -
gdvtsdc4i4_idx_1 * g52k1xdouv_idx_0 ; pciztti2mf [ 7 ] = cb *
g52k1xdouv_idx_1 ; pciztti2mf [ 8 ] = - gdvtsdc4i4_idx_1 * sb *
g52k1xdouv_idx_1 + cwdb3qacqr * g52k1xdouv_idx_0 ; kld3j4mgfs_idx_1 = - rtB .
hcyzeqbkyr . dpynkxuvej * muDoubleScalarSin ( hfwwqokbwo ) ; kurpvwnuj4_idx_1
= rtB . hcyzeqbkyr . dpynkxuvej * muDoubleScalarCos ( hfwwqokbwo ) ; for (
i_p = 0 ; i_p < 3 ; i_p ++ ) { rtB . ljez30jgck [ i_p ] = ( ( mvrmkcanel [
i_p + 3 ] * dh3zefosvy + mvrmkcanel [ i_p ] * j0r0arniji ) + mvrmkcanel [ i_p
+ 6 ] * l4omwvocst_idx_1 ) + ( ( pciztti2mf [ i_p + 3 ] * rtB . hcyzeqbkyr .
hrb5rmirrg + pciztti2mf [ i_p ] * kld3j4mgfs_idx_1 ) + pciztti2mf [ i_p + 6 ]
* kurpvwnuj4_idx_1 ) ; } rtB . dgroxh3aiu = rtP . Gain_Gain_o52x04akgf *
bcwof20ssn ; rtB . dyptlhmida [ 0 ] = ( rtB . enpvrp5gce [ 3 ] - rtB .
cuqqqrtko4 ) * rtP . fcc . att_kb [ 0 ] * rtP . fcc . att_ki + ( ncgfuwjrdt [
0 ] - p4xbdqn5oc [ 0 ] ) * rtP . fcc . att_ka ; rtB . dyptlhmida [ 1 ] = (
e32kai3hdx - rtB . mxf3xuhmmg ) * rtP . fcc . att_kb [ 1 ] * rtP . fcc .
att_ki + ( ncgfuwjrdt [ 1 ] - p4xbdqn5oc [ 1 ] ) * rtP . fcc . att_ka ; rtB .
dyptlhmida [ 2 ] = ( rtB . enpvrp5gce [ 4 ] - i5y02tnznl_idx_0 ) * rtP . fcc
. att_kb [ 2 ] * rtP . fcc . att_ki + ( ncgfuwjrdt [ 2 ] - p4xbdqn5oc [ 2 ] )
* rtP . fcc . att_ka ; p4xbdqn5oc [ 0 ] = inoflfxzl4 [ 0 ] - rtB . m1kth42sm5
; p4xbdqn5oc [ 1 ] = inoflfxzl4 [ 1 ] - hfwwqokbwo ; p4xbdqn5oc [ 2 ] =
inoflfxzl4 [ 2 ] - lir1dfa45c ; rtB . i4h14hn31u [ 0 ] = p4xbdqn5oc [ 0 ] *
rtP . fcc . path_kb [ 0 ] * rtP . fcc . path_ki + ( ebzekdphab [ 0 ] -
as2exlo2n4 [ 0 ] ) * rtP . fcc . path_ka ; rtB . i4h14hn31u [ 1 ] =
p4xbdqn5oc [ 1 ] * rtP . fcc . path_kb [ 1 ] * rtP . fcc . path_ki + (
ebzekdphab [ 1 ] - as2exlo2n4 [ 1 ] ) * rtP . fcc . path_ka ; rtB .
i4h14hn31u [ 2 ] = p4xbdqn5oc [ 2 ] * rtP . fcc . path_kb [ 2 ] * rtP . fcc .
path_ki + ( ebzekdphab [ 2 ] - kld3j4mgfs_idx_0 ) * rtP . fcc . path_ka ;
frac_ir [ 0 ] = rtP . fcc . rate_u_ulim [ 0 ] ; frac_ir [ 3 ] = rtP . fcc .
rate_u_ulim [ 3 ] ; frac_ir [ 1 ] = f40yzytdn0 [ 2 ] ; frac_ir [ 2 ] =
f40yzytdn0 [ 3 ] ; s315_iter = 1 ; rtB . fnfm0xobo0 [ 0 ] = ( real32_T )
gkshvepttp [ 0 ] ; rtB . pg0q1ivdwm [ 0 ] = ( real32_T ) rtB . mkyju0odm1 [ 0
] ; rtB . fnfm0xobo0 [ 1 ] = ( real32_T ) gkshvepttp [ 1 ] ; rtB . pg0q1ivdwm
[ 1 ] = ( real32_T ) rtB . mkyju0odm1 [ 1 ] ; rtB . fnfm0xobo0 [ 2 ] = (
real32_T ) gkshvepttp [ 2 ] ; rtB . pg0q1ivdwm [ 2 ] = ( real32_T ) rtB .
mkyju0odm1 [ 2 ] ; denlcl541x = rtP . fcc . k_DEP_slope * acafcyi14i [ 3 ] ;
e32kai3hdx = muDoubleScalarAtan2 ( gkshvepttp [ 2 ] , gkshvepttp [ 0 ] ) ;
lir1dfa45c = muDoubleScalarSqrt ( ( gkshvepttp [ 0 ] * gkshvepttp [ 0 ] +
gkshvepttp [ 1 ] * gkshvepttp [ 1 ] ) + gkshvepttp [ 2 ] * gkshvepttp [ 2 ] )
+ rtP . Constant1_Value_afmwb25toz ; sb = gkshvepttp [ 1 ] / lir1dfa45c ; if
( sb > 1.0 ) { sb = 1.0 ; } else if ( sb < - 1.0 ) { sb = - 1.0 ; }
j0r0arniji = muDoubleScalarAsin ( sb ) ; iksijyt0t5 [ 5 ] = rtP .
Constant_Value_ng54phad4c ; rtB . petq0ddot1 [ 0 ] = ( real32_T ) gkshvepttp
[ 0 ] ; rtB . cdaqgvy4ew [ 0 ] = ( real32_T ) rtB . mkyju0odm1 [ 0 ] ; rtB .
petq0ddot1 [ 1 ] = ( real32_T ) gkshvepttp [ 1 ] ; rtB . cdaqgvy4ew [ 1 ] = (
real32_T ) rtB . mkyju0odm1 [ 1 ] ; rtB . petq0ddot1 [ 2 ] = ( real32_T )
gkshvepttp [ 2 ] ; rtB . cdaqgvy4ew [ 2 ] = ( real32_T ) rtB . mkyju0odm1 [ 2
] ; g52k1xdouv_idx_0 = muDoubleScalarAtan2 ( gkshvepttp [ 2 ] , gkshvepttp [
0 ] ) ; gdvtsdc4i4_idx_1 = muDoubleScalarSqrt ( ( gkshvepttp [ 0 ] *
gkshvepttp [ 0 ] + gkshvepttp [ 1 ] * gkshvepttp [ 1 ] ) + gkshvepttp [ 2 ] *
gkshvepttp [ 2 ] ) + rtP . Constant1_Value_fvcyxyzsht ; sb = gkshvepttp [ 1 ]
/ gdvtsdc4i4_idx_1 ; if ( sb > 1.0 ) { sb = 1.0 ; } else if ( sb < - 1.0 ) {
sb = - 1.0 ; } sb = muDoubleScalarAsin ( sb ) ; goislsqndx [ 5 ] = rtP .
Constant_Value_al5wwqny50 ; hhjx0kn5md [ 5 ] = rtP .
Constant_Value_jieo141xsx ; oqjjyzlelr [ 5 ] = rtP .
Constant_Value_awd1ikrqdw ; for ( i_p = 0 ; i_p < 5 ; i_p ++ ) { p [ i_p ] =
rtP . dp_VTAIL_INDUCED . flap_defl [ i_p ] ; } for ( i_p = 0 ; i_p < 10 ; i_p
++ ) { tmp [ i_p ] = rtP . dp_VTAIL . rude_defl [ i_p ] ; } for ( i_p = 0 ;
i_p < 5 ; i_p ++ ) { lyv0niej1z [ i_p ] = rtP . dp_VTAIL_INDUCED . flap_defl
[ i_p ] ; } for ( i_p = 0 ; i_p < 10 ; i_p ++ ) { tmp_i [ i_p ] = rtP .
dp_VTAIL . rude_defl [ i_p ] ; } for ( i = 0 ; i <= 10 ; i += 2 ) { tmp_c =
_mm_loadu_pd ( & rtB . dsun4ub0yr [ i ] ) ; _mm_storeu_pd ( & rtB .
h2sn1vo2jc [ i ] , _mm_mul_pd ( _mm_add_pd ( _mm_mul_pd ( _mm_set1_pd ( rtB .
mkyju0odm1 [ 2 ] ) , tmp_c ) , _mm_set1_pd ( gkshvepttp [ 0 ] ) ) ,
_mm_set1_pd ( rtB . d1gftjoaku ) ) ) ; tmp_c = _mm_loadu_pd ( & rtB .
h0qxix2j45 [ i ] ) ; _mm_storeu_pd ( & rtB . iwkjq2gkyu [ i ] , _mm_mul_pd (
_mm_add_pd ( _mm_mul_pd ( _mm_set1_pd ( rtB . mkyju0odm1 [ 2 ] ) , tmp_c ) ,
_mm_set1_pd ( gkshvepttp [ 0 ] ) ) , _mm_set1_pd ( rtB . pero4svcts ) ) ) ; }
do { if ( rtDW . dkewog43cc ) { memcpy ( & rtDW . cg3pqhuaqw [ 0 ] , & rtP .
fcc . rate_Bmat_IC [ 0 ] , 12U * sizeof ( real_T ) ) ; } parallel_for ( 14 ,
gq0vzmvbii , 1 , "gq0vzmvbii" ) ; rtB . jn3504llb5 [ 0 ] = rtB . kbchqf1nmc [
6 ] ; rtB . jn3504llb5 [ 1 ] = rtB . kbchqf1nmc [ 5 ] ; rtB . jn3504llb5 [ 2
] = rtB . kbchqf1nmc [ 4 ] ; rtB . jn3504llb5 [ 3 ] = rtB . kbchqf1nmc [ 3 ]
; rtB . jn3504llb5 [ 4 ] = rtB . kbchqf1nmc [ 2 ] ; rtB . jn3504llb5 [ 5 ] =
rtB . kbchqf1nmc [ 1 ] ; rtB . jn3504llb5 [ 6 ] = rtB . kbchqf1nmc [ 0 ] ;
pncrddvvzg [ 0 ] = rtB . due3kthwym [ 6 ] ; pncrddvvzg [ 1 ] = rtB .
due3kthwym [ 5 ] ; pncrddvvzg [ 2 ] = rtB . due3kthwym [ 4 ] ; pncrddvvzg [ 3
] = rtB . due3kthwym [ 3 ] ; pncrddvvzg [ 4 ] = rtB . due3kthwym [ 2 ] ;
pncrddvvzg [ 5 ] = rtB . due3kthwym [ 1 ] ; pncrddvvzg [ 6 ] = rtB .
due3kthwym [ 0 ] ; pncrddvvzg [ 7 ] = rtB . due3kthwym [ 6 ] ; pncrddvvzg [ 8
] = rtB . due3kthwym [ 5 ] ; pncrddvvzg [ 9 ] = rtB . due3kthwym [ 4 ] ;
pncrddvvzg [ 10 ] = rtB . due3kthwym [ 3 ] ; pncrddvvzg [ 11 ] = rtB .
due3kthwym [ 2 ] ; pncrddvvzg [ 12 ] = rtB . due3kthwym [ 1 ] ; pncrddvvzg [
13 ] = rtB . due3kthwym [ 0 ] ; pncrddvvzg [ 14 ] = rtB . due3kthwym [ 6 ] ;
pncrddvvzg [ 15 ] = rtB . due3kthwym [ 5 ] ; pncrddvvzg [ 16 ] = rtB .
due3kthwym [ 4 ] ; pncrddvvzg [ 17 ] = rtB . due3kthwym [ 3 ] ; pncrddvvzg [
18 ] = rtB . due3kthwym [ 2 ] ; pncrddvvzg [ 19 ] = rtB . due3kthwym [ 1 ] ;
pncrddvvzg [ 20 ] = rtB . due3kthwym [ 0 ] ; for ( i_p = 0 ; i_p < 7 ; i_p ++
) { aohvunheuk [ 3 * i_p ] = pncrddvvzg [ i_p ] ; aohvunheuk [ 3 * i_p + 1 ]
= pncrddvvzg [ i_p + 7 ] ; aohvunheuk [ 3 * i_p + 2 ] = pncrddvvzg [ i_p + 14
] ; } for ( i = 0 ; i < 21 ; i ++ ) { bdvkktmal5_idx_0 = aohvunheuk [ i ] ;
kta5xsgp3m [ i ] = bdvkktmal5_idx_0 * bdvkktmal5_idx_0 ; } if ( acafcyi14i [
0 ] > f40yzytdn0 [ 0 ] ) { rtB . p3gbp1cov5 [ 0 ] = f40yzytdn0 [ 0 ] ; } else
if ( acafcyi14i [ 0 ] < mstjku3ag5 [ 0 ] ) { rtB . p3gbp1cov5 [ 0 ] =
mstjku3ag5 [ 0 ] ; } else { rtB . p3gbp1cov5 [ 0 ] = acafcyi14i [ 0 ] ; } if
( - acafcyi14i [ 0 ] > f40yzytdn0 [ 1 ] ) { rtB . p3gbp1cov5 [ 1 ] =
f40yzytdn0 [ 1 ] ; } else if ( - acafcyi14i [ 0 ] < mstjku3ag5 [ 1 ] ) { rtB
. p3gbp1cov5 [ 1 ] = mstjku3ag5 [ 1 ] ; } else { rtB . p3gbp1cov5 [ 1 ] = -
acafcyi14i [ 0 ] ; } rtB . p3gbp1cov5 [ 2 ] = acafcyi14i [ 1 ] ; rtB .
p3gbp1cov5 [ 3 ] = acafcyi14i [ 2 ] ; rtB . p3gbp1cov5 [ 4 ] = rtB .
enpvrp5gce [ 2 ] ; rtB . p3gbp1cov5 [ 5 ] = rtB . enpvrp5gce [ 2 ] ;
pxudjjmfpa ( rtB . enpvrp5gce [ 1 ] , denlcl541x , & rtB . hymp14tjep ) ; for
( i = 0 ; i < 12 ; i ++ ) { if ( rtB . hymp14tjep . lxe0n2dnxv [ i ] >
f40yzytdn0 [ i + 6 ] ) { rtB . p3gbp1cov5 [ i + 6 ] = f40yzytdn0 [ i + 6 ] ;
} else if ( rtB . hymp14tjep . lxe0n2dnxv [ i ] < rtP .
Constant_Value_jzek0z2jq3 ) { rtB . p3gbp1cov5 [ i + 6 ] = rtP .
Constant_Value_jzek0z2jq3 ; } else { rtB . p3gbp1cov5 [ i + 6 ] = rtB .
hymp14tjep . lxe0n2dnxv [ i ] ; } } rtB . p3gbp1cov5 [ 18 ] = rtB .
enpvrp5gce [ 0 ] ; rtB . p3gbp1cov5 [ 19 ] = rtB . izvthfvymi [ 19 ] ; if (
rtB . p3gbp1cov5 [ 2 ] > rtP . Saturation2_UpperSat_nfoofwfzjj ) {
hjpu2sw0us_idx_1 = rtP . Saturation2_UpperSat_nfoofwfzjj ; } else if ( rtB .
p3gbp1cov5 [ 2 ] < rtP . Saturation2_LowerSat_e5ww5fnxkk ) { hjpu2sw0us_idx_1
= rtP . Saturation2_LowerSat_e5ww5fnxkk ; } else { hjpu2sw0us_idx_1 = rtB .
p3gbp1cov5 [ 2 ] ; } if ( rtB . p3gbp1cov5 [ 3 ] > rtP .
Saturation3_UpperSat_nyrrwrlfh4 ) { y_p = rtP .
Saturation3_UpperSat_nyrrwrlfh4 ; } else if ( rtB . p3gbp1cov5 [ 3 ] < rtP .
Saturation3_LowerSat_kmvswxsvbv ) { y_p = rtP .
Saturation3_LowerSat_kmvswxsvbv ; } else { y_p = rtB . p3gbp1cov5 [ 3 ] ; }
if ( rtB . p3gbp1cov5 [ 4 ] > rtP . Saturation6_UpperSat_go0aajd0cw ) { y_e =
rtP . Saturation6_UpperSat_go0aajd0cw ; } else if ( rtB . p3gbp1cov5 [ 4 ] <
rtP . Saturation6_LowerSat_dbm0mzv5ze ) { y_e = rtP .
Saturation6_LowerSat_dbm0mzv5ze ; } else { y_e = rtB . p3gbp1cov5 [ 4 ] ; }
if ( rtB . p3gbp1cov5 [ 5 ] > rtP . Saturation4_UpperSat_geic3o2s1s ) { y_i =
rtP . Saturation4_UpperSat_geic3o2s1s ; } else if ( rtB . p3gbp1cov5 [ 5 ] <
rtP . Saturation4_LowerSat_d2rz2aetmp ) { y_i = rtP .
Saturation4_LowerSat_d2rz2aetmp ; } else { y_i = rtB . p3gbp1cov5 [ 5 ] ; }
m04ebe1zz2 = plook_u32ff_lincpa ( ( real32_T ) y_e , rtP . dp_WING_root .
flap_defl , 4U , & f5qwewprly , & rtDW . d1chukr5qk ) ; pdb2lmu2m2 [ 0 ] =
rtB . kbchqf1nmc [ 6 ] ; pdb2lmu2m2 [ 1 ] = rtB . kbchqf1nmc [ 5 ] ;
pdb2lmu2m2 [ 2 ] = rtB . kbchqf1nmc [ 4 ] ; pdb2lmu2m2 [ 3 ] = rtB .
kbchqf1nmc [ 3 ] ; pdb2lmu2m2 [ 4 ] = rtB . kbchqf1nmc [ 2 ] ; for ( iU = 0 ;
iU < 5 ; iU ++ ) { okphy1ntzm [ iU ] = plook_u32ff_lincpa ( pdb2lmu2m2 [ iU ]
, rtP . dp_WING_root . alphas , 24U , & epaolvt0vm [ iU ] , & rtDW .
a114jaowoa [ iU ] ) ; } pdb2lmu2m2 [ 0 ] = rtB . due3kthwym [ 6 ] ;
pdb2lmu2m2 [ 1 ] = rtB . due3kthwym [ 5 ] ; pdb2lmu2m2 [ 2 ] = rtB .
due3kthwym [ 4 ] ; pdb2lmu2m2 [ 3 ] = rtB . due3kthwym [ 3 ] ; pdb2lmu2m2 [ 4
] = rtB . due3kthwym [ 2 ] ; for ( iU = 0 ; iU < 5 ; iU ++ ) { kugs2ta1qq [
iU ] = plook_u32ff_lincpa ( pdb2lmu2m2 [ iU ] , rtP . dp_WING_root . V , 1U ,
& kko0lbsvwo [ iU ] , & rtDW . fmnuqfwd2y [ iU ] ) ; } parallel_for ( 12 ,
fs2jlt5vxt , 1 , "fs2jlt5vxt" ) ; for ( i = 0 ; i < 12 ; i ++ ) { prizw2ngzn
[ i ] = ( real32_T ) rtB . g1gwgtjexn [ i ] ; } pdb2lmu2m2 [ 0 ] = prizw2ngzn
[ 5 ] ; pdb2lmu2m2 [ 1 ] = prizw2ngzn [ 4 ] ; pdb2lmu2m2 [ 2 ] = prizw2ngzn [
3 ] ; pdb2lmu2m2 [ 3 ] = prizw2ngzn [ 2 ] ; pdb2lmu2m2 [ 4 ] = prizw2ngzn [ 1
] ; for ( iU = 0 ; iU < 5 ; iU ++ ) { h0u2qqbsra [ iU ] = plook_u32ff_lincpa
( pdb2lmu2m2 [ iU ] , rtP . dp_WING_root . DEP_J , 6U , & d2guuznk3s [ iU ] ,
& rtDW . kxbke0l40t [ iU ] ) ; } frac_gf [ 0 ] = f5qwewprly ; bpIndex_gf [ 0
] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ ) { frac_gf [ 1 ] = epaolvt0vm
[ iU ] ; frac_gf [ 2 ] = kko0lbsvwo [ iU ] ; frac_gf [ 3 ] = d2guuznk3s [ iU
] ; bpIndex_gf [ 1 ] = okphy1ntzm [ iU ] ; bpIndex_gf [ 2 ] = kugs2ta1qq [ iU
] ; bpIndex_gf [ 3 ] = h0u2qqbsra [ iU ] ; if ( rtP .
Constant8_Value_ixl10prwcy [ iU ] > 4.0 ) { bpIndex_gf [ 4 ] = 4U ; } else {
bpIndex_gf [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ixl10prwcy [ iU ] , 0.0 ) ; } dunv5mncfe [ iU ] =
intrp4d_fu32fla_pw ( bpIndex_gf , frac_gf , & rtP . dp_WING_root . CD [ 1750U
* bpIndex_gf [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_cqq0jtkrru
, rtP . InterpolationUsingPrelookup1_maxIndex_kz0iowmebp ) ; } if ( rtB .
p3gbp1cov5 [ 0 ] > rtP . Saturation_UpperSat_jyplwwt1ie ) { g52k1xdouv_idx_1
= rtP . Saturation_UpperSat_jyplwwt1ie ; } else if ( rtB . p3gbp1cov5 [ 0 ] <
rtP . Saturation_LowerSat_flu20geohk ) { g52k1xdouv_idx_1 = rtP .
Saturation_LowerSat_flu20geohk ; } else { g52k1xdouv_idx_1 = rtB . p3gbp1cov5
[ 0 ] ; } kiombdthr4 = plook_u32ff_lincpa ( ( real32_T ) g52k1xdouv_idx_1 ,
rtP . dp_WING_tip . ail_defl , 6U , & p5e3xkr1y0 , & rtDW . cn3pwtmbrz ) ;
n5yhkyeg5n_idx_0 = plook_u32ff_lincpa ( rtB . kbchqf1nmc [ 1 ] , rtP .
dp_WING_tip . alphas , 24U , & cttxxy2eqo [ 0 ] , & rtDW . afbj2p43u0 [ 0 ] )
; n5yhkyeg5n_idx_1 = plook_u32ff_lincpa ( rtB . kbchqf1nmc [ 0 ] , rtP .
dp_WING_tip . alphas , 24U , & cttxxy2eqo [ 1 ] , & rtDW . afbj2p43u0 [ 1 ] )
; khukbzvgdj_idx_0 = plook_u32ff_lincpa ( rtB . due3kthwym [ 1 ] , rtP .
dp_WING_tip . V , 1U , & o4gvcq0m0s [ 0 ] , & rtDW . orlfhdhe1j [ 0 ] ) ;
khukbzvgdj_idx_1 = plook_u32ff_lincpa ( rtB . due3kthwym [ 0 ] , rtP .
dp_WING_tip . V , 1U , & o4gvcq0m0s [ 1 ] , & rtDW . orlfhdhe1j [ 1 ] ) ;
hcbpipseis_idx_0 = plook_u32ff_lincpa ( prizw2ngzn [ 1 ] , rtP . dp_WING_tip
. DEP_J , 6U , & ozvztj532a [ 0 ] , & rtDW . gid5guyvyn [ 0 ] ) ;
hcbpipseis_idx_1 = plook_u32ff_lincpa ( prizw2ngzn [ 0 ] , rtP . dp_WING_tip
. DEP_J , 6U , & ozvztj532a [ 1 ] , & rtDW . gid5guyvyn [ 1 ] ) ; frac_ew [ 0
] = p5e3xkr1y0 ; bpIndex_ew [ 0 ] = kiombdthr4 ; frac_ew [ 1 ] = cttxxy2eqo [
0 ] ; frac_ew [ 2 ] = o4gvcq0m0s [ 0 ] ; frac_ew [ 3 ] = ozvztj532a [ 0 ] ;
bpIndex_ew [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_ew [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_ew [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_ieyg5bfv4a [
0 ] > 1.0 ) { bpIndex_ew [ 4 ] = 1U ; } else { bpIndex_ew [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_ieyg5bfv4a [ 0 ] , 0.0 ) ; }
dunv5mncfe [ 5 ] = intrp4d_fu32fla_pw ( bpIndex_ew , frac_ew , & rtP .
dp_WING_tip . CD [ 2450U * bpIndex_ew [ 4 ] ] , rtP .
InterpolationUsingPrelookup1_dimSize_m5omgyunpo , rtP .
InterpolationUsingPrelookup1_maxIndex_l25yks0okd ) ; frac_ew [ 1 ] =
cttxxy2eqo [ 1 ] ; frac_ew [ 2 ] = o4gvcq0m0s [ 1 ] ; frac_ew [ 3 ] =
ozvztj532a [ 1 ] ; bpIndex_ew [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_ew [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_ew [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_ieyg5bfv4a [ 1 ] > 1.0 ) { bpIndex_ew [ 4 ] = 1U ; } else {
bpIndex_ew [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ieyg5bfv4a [ 1 ] , 0.0 ) ; } dunv5mncfe [ 6 ] =
intrp4d_fu32fla_pw ( bpIndex_ew , frac_ew , & rtP . dp_WING_tip . CD [ 2450U
* bpIndex_ew [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_m5omgyunpo
, rtP . InterpolationUsingPrelookup1_maxIndex_l25yks0okd ) ; frac_bq [ 0 ] =
f5qwewprly ; bpIndex_bq [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_bq [ 1 ] = epaolvt0vm [ iU ] ; frac_bq [ 2 ] = kko0lbsvwo [ iU ] ;
frac_bq [ 3 ] = d2guuznk3s [ iU ] ; bpIndex_bq [ 1 ] = okphy1ntzm [ iU ] ;
bpIndex_bq [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_bq [ 3 ] = h0u2qqbsra [ iU ] ;
if ( rtP . Constant8_Value_ixl10prwcy [ iU ] > 4.0 ) { bpIndex_bq [ 4 ] = 4U
; } else { bpIndex_bq [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ixl10prwcy [ iU ] , 0.0 ) ; } dunv5mncfe [ iU + 7 ] =
intrp4d_fu32fla_pw ( bpIndex_bq , frac_bq , & rtP . dp_WING_root . CS [ 1750U
* bpIndex_bq [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_pg5soloyr5
, rtP . InterpolationUsingPrelookup2_maxIndex_kwltec0z2r ) ; } frac_hg [ 0 ]
= p5e3xkr1y0 ; bpIndex_hg [ 0 ] = kiombdthr4 ; frac_hg [ 1 ] = cttxxy2eqo [ 0
] ; frac_hg [ 2 ] = o4gvcq0m0s [ 0 ] ; frac_hg [ 3 ] = ozvztj532a [ 0 ] ;
bpIndex_hg [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_hg [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_hg [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_ieyg5bfv4a [
0 ] > 1.0 ) { bpIndex_hg [ 4 ] = 1U ; } else { bpIndex_hg [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_ieyg5bfv4a [ 0 ] , 0.0 ) ; }
dunv5mncfe [ 12 ] = intrp4d_fu32fla_pw ( bpIndex_hg , frac_hg , & rtP .
dp_WING_tip . CS [ 2450U * bpIndex_hg [ 4 ] ] , rtP .
InterpolationUsingPrelookup2_dimSize_ahxbwjmamu , rtP .
InterpolationUsingPrelookup2_maxIndex_ijwqxs1zuo ) ; frac_hg [ 1 ] =
cttxxy2eqo [ 1 ] ; frac_hg [ 2 ] = o4gvcq0m0s [ 1 ] ; frac_hg [ 3 ] =
ozvztj532a [ 1 ] ; bpIndex_hg [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_hg [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_hg [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_ieyg5bfv4a [ 1 ] > 1.0 ) { bpIndex_hg [ 4 ] = 1U ; } else {
bpIndex_hg [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ieyg5bfv4a [ 1 ] , 0.0 ) ; } dunv5mncfe [ 13 ] =
intrp4d_fu32fla_pw ( bpIndex_hg , frac_hg , & rtP . dp_WING_tip . CS [ 2450U
* bpIndex_hg [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_ahxbwjmamu
, rtP . InterpolationUsingPrelookup2_maxIndex_ijwqxs1zuo ) ; frac_hx [ 0 ] =
f5qwewprly ; bpIndex_hx [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_hx [ 1 ] = epaolvt0vm [ iU ] ; frac_hx [ 2 ] = kko0lbsvwo [ iU ] ;
frac_hx [ 3 ] = d2guuznk3s [ iU ] ; bpIndex_hx [ 1 ] = okphy1ntzm [ iU ] ;
bpIndex_hx [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_hx [ 3 ] = h0u2qqbsra [ iU ] ;
if ( rtP . Constant8_Value_ixl10prwcy [ iU ] > 4.0 ) { bpIndex_hx [ 4 ] = 4U
; } else { bpIndex_hx [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ixl10prwcy [ iU ] , 0.0 ) ; } dunv5mncfe [ iU + 14 ] =
intrp4d_fu32fla_pw ( bpIndex_hx , frac_hx , & rtP . dp_WING_root . CL [ 1750U
* bpIndex_hx [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_acizgnonyz
, rtP . InterpolationUsingPrelookup3_maxIndex_oxb5p4i4sc ) ; } frac_md [ 0 ]
= p5e3xkr1y0 ; bpIndex_md [ 0 ] = kiombdthr4 ; frac_md [ 1 ] = cttxxy2eqo [ 0
] ; frac_md [ 2 ] = o4gvcq0m0s [ 0 ] ; frac_md [ 3 ] = ozvztj532a [ 0 ] ;
bpIndex_md [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_md [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_md [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_ieyg5bfv4a [
0 ] > 1.0 ) { bpIndex_md [ 4 ] = 1U ; } else { bpIndex_md [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_ieyg5bfv4a [ 0 ] , 0.0 ) ; }
dunv5mncfe [ 19 ] = intrp4d_fu32fla_pw ( bpIndex_md , frac_md , & rtP .
dp_WING_tip . CL [ 2450U * bpIndex_md [ 4 ] ] , rtP .
InterpolationUsingPrelookup3_dimSize_iozjtx3zmm , rtP .
InterpolationUsingPrelookup3_maxIndex_b0y01tho4j ) ; frac_md [ 1 ] =
cttxxy2eqo [ 1 ] ; frac_md [ 2 ] = o4gvcq0m0s [ 1 ] ; frac_md [ 3 ] =
ozvztj532a [ 1 ] ; bpIndex_md [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_md [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_md [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_ieyg5bfv4a [ 1 ] > 1.0 ) { bpIndex_md [ 4 ] = 1U ; } else {
bpIndex_md [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ieyg5bfv4a [ 1 ] , 0.0 ) ; } dunv5mncfe [ 20 ] =
intrp4d_fu32fla_pw ( bpIndex_md , frac_md , & rtP . dp_WING_tip . CL [ 2450U
* bpIndex_md [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_iozjtx3zmm
, rtP . InterpolationUsingPrelookup3_maxIndex_b0y01tho4j ) ; for ( i_p = 0 ;
i_p < 7 ; i_p ++ ) { rtB . lsleed4oje [ 3 * i_p ] = kta5xsgp3m [ 3 * i_p ] *
dunv5mncfe [ i_p ] * rtB . lhopa3gq4f * rtP . Gain_Gain_fel3340ymi ; rtB .
lsleed4oje [ 3 * i_p + 1 ] = kta5xsgp3m [ 3 * i_p + 1 ] * dunv5mncfe [ i_p +
7 ] * rtB . lhopa3gq4f * rtP . Gain_Gain_fel3340ymi ; rtB . lsleed4oje [ 3 *
i_p + 2 ] = kta5xsgp3m [ 3 * i_p + 2 ] * dunv5mncfe [ i_p + 14 ] * rtB .
lhopa3gq4f * rtP . Gain_Gain_fel3340ymi ; } parallel_for ( 7 , o1qccxjyb0 , 1
, "o1qccxjyb0" ) ; parallel_for ( 7 , edz33uvfnq , 1 , "edz33uvfnq" ) ;
frac_ju [ 0 ] = f5qwewprly ; bpIndex_ju [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ;
iU < 5 ; iU ++ ) { frac_ju [ 1 ] = epaolvt0vm [ iU ] ; frac_ju [ 2 ] =
kko0lbsvwo [ iU ] ; frac_ju [ 3 ] = d2guuznk3s [ iU ] ; bpIndex_ju [ 1 ] =
okphy1ntzm [ iU ] ; bpIndex_ju [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_ju [ 3 ] =
h0u2qqbsra [ iU ] ; if ( rtP . Constant8_Value_ixl10prwcy [ iU ] > 4.0 ) {
bpIndex_ju [ 4 ] = 4U ; } else { bpIndex_ju [ 4 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_ixl10prwcy [ iU ] , 0.0 ) ; }
irujaevkeq [ iU ] = intrp4d_fu32fla_pw ( bpIndex_ju , frac_ju , & rtP .
dp_WING_root . CMx [ 1750U * bpIndex_ju [ 4 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_f2b3l0obc3 , rtP .
InterpolationUsingPrelookup4_maxIndex_juabcx1nc1 ) ; } frac_eo [ 0 ] =
p5e3xkr1y0 ; bpIndex_eo [ 0 ] = kiombdthr4 ; frac_eo [ 1 ] = cttxxy2eqo [ 0 ]
; frac_eo [ 2 ] = o4gvcq0m0s [ 0 ] ; frac_eo [ 3 ] = ozvztj532a [ 0 ] ;
bpIndex_eo [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_eo [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_eo [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_ieyg5bfv4a [
0 ] > 1.0 ) { bpIndex_eo [ 4 ] = 1U ; } else { bpIndex_eo [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_ieyg5bfv4a [ 0 ] , 0.0 ) ; }
irujaevkeq [ 5 ] = intrp4d_fu32fla_pw ( bpIndex_eo , frac_eo , & rtP .
dp_WING_tip . CMx [ 2450U * bpIndex_eo [ 4 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_jbrc2ebbbk , rtP .
InterpolationUsingPrelookup4_maxIndex_j2g3c4kg2u ) ; frac_eo [ 1 ] =
cttxxy2eqo [ 1 ] ; frac_eo [ 2 ] = o4gvcq0m0s [ 1 ] ; frac_eo [ 3 ] =
ozvztj532a [ 1 ] ; bpIndex_eo [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_eo [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_eo [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_ieyg5bfv4a [ 1 ] > 1.0 ) { bpIndex_eo [ 4 ] = 1U ; } else {
bpIndex_eo [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ieyg5bfv4a [ 1 ] , 0.0 ) ; } irujaevkeq [ 6 ] =
intrp4d_fu32fla_pw ( bpIndex_eo , frac_eo , & rtP . dp_WING_tip . CMx [ 2450U
* bpIndex_eo [ 4 ] ] , rtP . InterpolationUsingPrelookup4_dimSize_jbrc2ebbbk
, rtP . InterpolationUsingPrelookup4_maxIndex_j2g3c4kg2u ) ; frac_bb [ 0 ] =
f5qwewprly ; bpIndex_bb [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_bb [ 1 ] = epaolvt0vm [ iU ] ; frac_bb [ 2 ] = kko0lbsvwo [ iU ] ;
frac_bb [ 3 ] = d2guuznk3s [ iU ] ; bpIndex_bb [ 1 ] = okphy1ntzm [ iU ] ;
bpIndex_bb [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_bb [ 3 ] = h0u2qqbsra [ iU ] ;
if ( rtP . Constant8_Value_ixl10prwcy [ iU ] > 4.0 ) { bpIndex_bb [ 4 ] = 4U
; } else { bpIndex_bb [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ixl10prwcy [ iU ] , 0.0 ) ; } irujaevkeq [ iU + 7 ] =
intrp4d_fu32fla_pw ( bpIndex_bb , frac_bb , & rtP . dp_WING_root . CMy [
1750U * bpIndex_bb [ 4 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_ahj5eqm24i , rtP .
InterpolationUsingPrelookup5_maxIndex_jfaeimhqun ) ; } frac_j0 [ 0 ] =
p5e3xkr1y0 ; bpIndex_j0 [ 0 ] = kiombdthr4 ; frac_j0 [ 1 ] = cttxxy2eqo [ 0 ]
; frac_j0 [ 2 ] = o4gvcq0m0s [ 0 ] ; frac_j0 [ 3 ] = ozvztj532a [ 0 ] ;
bpIndex_j0 [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_j0 [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_j0 [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_ieyg5bfv4a [
0 ] > 1.0 ) { bpIndex_j0 [ 4 ] = 1U ; } else { bpIndex_j0 [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_ieyg5bfv4a [ 0 ] , 0.0 ) ; }
irujaevkeq [ 12 ] = intrp4d_fu32fla_pw ( bpIndex_j0 , frac_j0 , & rtP .
dp_WING_tip . CMy [ 2450U * bpIndex_j0 [ 4 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_bqodulm0zh , rtP .
InterpolationUsingPrelookup5_maxIndex_iaeh2yjmoy ) ; frac_j0 [ 1 ] =
cttxxy2eqo [ 1 ] ; frac_j0 [ 2 ] = o4gvcq0m0s [ 1 ] ; frac_j0 [ 3 ] =
ozvztj532a [ 1 ] ; bpIndex_j0 [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_j0 [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_j0 [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_ieyg5bfv4a [ 1 ] > 1.0 ) { bpIndex_j0 [ 4 ] = 1U ; } else {
bpIndex_j0 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ieyg5bfv4a [ 1 ] , 0.0 ) ; } irujaevkeq [ 13 ] =
intrp4d_fu32fla_pw ( bpIndex_j0 , frac_j0 , & rtP . dp_WING_tip . CMy [ 2450U
* bpIndex_j0 [ 4 ] ] , rtP . InterpolationUsingPrelookup5_dimSize_bqodulm0zh
, rtP . InterpolationUsingPrelookup5_maxIndex_iaeh2yjmoy ) ; frac_ha [ 0 ] =
f5qwewprly ; bpIndex_ha [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_ha [ 1 ] = epaolvt0vm [ iU ] ; frac_ha [ 2 ] = kko0lbsvwo [ iU ] ;
frac_ha [ 3 ] = d2guuznk3s [ iU ] ; bpIndex_ha [ 1 ] = okphy1ntzm [ iU ] ;
bpIndex_ha [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_ha [ 3 ] = h0u2qqbsra [ iU ] ;
if ( rtP . Constant8_Value_ixl10prwcy [ iU ] > 4.0 ) { bpIndex_ha [ 4 ] = 4U
; } else { bpIndex_ha [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ixl10prwcy [ iU ] , 0.0 ) ; } irujaevkeq [ iU + 14 ] =
intrp4d_fu32fla_pw ( bpIndex_ha , frac_ha , & rtP . dp_WING_root . CMz [
1750U * bpIndex_ha [ 4 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_gtyb3mxf4y , rtP .
InterpolationUsingPrelookup6_maxIndex_gfppdyw0ow ) ; } frac_d4 [ 0 ] =
p5e3xkr1y0 ; bpIndex_d4 [ 0 ] = kiombdthr4 ; frac_d4 [ 1 ] = cttxxy2eqo [ 0 ]
; frac_d4 [ 2 ] = o4gvcq0m0s [ 0 ] ; frac_d4 [ 3 ] = ozvztj532a [ 0 ] ;
bpIndex_d4 [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_d4 [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_d4 [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_ieyg5bfv4a [
0 ] > 1.0 ) { bpIndex_d4 [ 4 ] = 1U ; } else { bpIndex_d4 [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_ieyg5bfv4a [ 0 ] , 0.0 ) ; }
irujaevkeq [ 19 ] = intrp4d_fu32fla_pw ( bpIndex_d4 , frac_d4 , & rtP .
dp_WING_tip . CMz [ 2450U * bpIndex_d4 [ 4 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_cl0vl42e4o , rtP .
InterpolationUsingPrelookup6_maxIndex_fqbwmh0s4c ) ; frac_d4 [ 1 ] =
cttxxy2eqo [ 1 ] ; frac_d4 [ 2 ] = o4gvcq0m0s [ 1 ] ; frac_d4 [ 3 ] =
ozvztj532a [ 1 ] ; bpIndex_d4 [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_d4 [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_d4 [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_ieyg5bfv4a [ 1 ] > 1.0 ) { bpIndex_d4 [ 4 ] = 1U ; } else {
bpIndex_d4 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ieyg5bfv4a [ 1 ] , 0.0 ) ; } irujaevkeq [ 20 ] =
intrp4d_fu32fla_pw ( bpIndex_d4 , frac_d4 , & rtP . dp_WING_tip . CMz [ 2450U
* bpIndex_d4 [ 4 ] ] , rtP . InterpolationUsingPrelookup6_dimSize_cl0vl42e4o
, rtP . InterpolationUsingPrelookup6_maxIndex_fqbwmh0s4c ) ; cwdb3qacqr = rtP
. S / 2.0 ; for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { dq25kgk52k [ 3 * i_p ] =
kta5xsgp3m [ 3 * i_p ] * irujaevkeq [ i_p ] * rtP . Constant_Value_ftd5hvh3zw
[ 3 * i_p ] * rtB . lhopa3gq4f * cwdb3qacqr + rtB . dfrnathep2i [ 3 * i_p ] ;
dq25kgk52k [ 3 * i_p + 1 ] = kta5xsgp3m [ 3 * i_p + 1 ] * irujaevkeq [ i_p +
7 ] * rtP . Constant_Value_ftd5hvh3zw [ 3 * i_p + 1 ] * rtB . lhopa3gq4f *
cwdb3qacqr + rtB . dfrnathep2i [ 3 * i_p + 1 ] ; dq25kgk52k [ 3 * i_p + 2 ] =
kta5xsgp3m [ 3 * i_p + 2 ] * irujaevkeq [ i_p + 14 ] * rtP .
Constant_Value_ftd5hvh3zw [ 3 * i_p + 2 ] * rtB . lhopa3gq4f * cwdb3qacqr +
rtB . dfrnathep2i [ 3 * i_p + 2 ] ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) {
cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e < 7 ; i_e ++ ) { cwdb3qacqr +=
dq25kgk52k [ i_e * 3 + i_p ] ; } p4xbdqn5oc [ i_p ] = cwdb3qacqr ; }
ivnfroue5d [ 0 ] = ( real32_T ) p4xbdqn5oc [ 0 ] ; ivnfroue5d [ 1 ] = (
real32_T ) p4xbdqn5oc [ 1 ] ; ivnfroue5d [ 2 ] = ( real32_T ) p4xbdqn5oc [ 2
] ; for ( i = 0 ; i < 7 ; i ++ ) { na5l3vydql [ i ] = rtB . due3kthwym [ i +
7 ] ; na5l3vydql [ i + 7 ] = rtB . due3kthwym [ i + 7 ] ; na5l3vydql [ i + 14
] = rtB . due3kthwym [ i + 7 ] ; liydxvyvbx [ 3 * i ] = na5l3vydql [ i ] ;
liydxvyvbx [ 3 * i + 1 ] = na5l3vydql [ i + 7 ] ; liydxvyvbx [ 3 * i + 2 ] =
na5l3vydql [ i + 14 ] ; } for ( i = 0 ; i < 21 ; i ++ ) { cq2trmp0xn_idx_0 =
liydxvyvbx [ i ] ; kta5xsgp3m [ i ] = cq2trmp0xn_idx_0 * cq2trmp0xn_idx_0 ; }
m04ebe1zz2 = plook_u32ff_lincpa ( ( real32_T ) y_i , rtP . dp_WING_root .
flap_defl , 4U , & f5qwewprly , & rtDW . cicwclszwg ) ; for ( iU = 0 ; iU < 5
; iU ++ ) { h0u2qqbsra [ iU ] = plook_u32ff_lincpa ( rtB . kbchqf1nmc [ iU +
7 ] , rtP . dp_WING_root . alphas , 24U , & d2guuznk3s [ iU ] , & rtDW .
mrk1ckqhf2 [ iU ] ) ; } for ( iU = 0 ; iU < 5 ; iU ++ ) { kugs2ta1qq [ iU ] =
plook_u32ff_lincpa ( rtB . due3kthwym [ iU + 7 ] , rtP . dp_WING_root . V ,
1U , & kko0lbsvwo [ iU ] , & rtDW . bozrvqxxg2 [ iU ] ) ; } for ( iU = 0 ; iU
< 5 ; iU ++ ) { okphy1ntzm [ iU ] = plook_u32ff_lincpa ( prizw2ngzn [ iU + 6
] , rtP . dp_WING_root . DEP_J , 6U , & epaolvt0vm [ iU ] , & rtDW .
ifrmin0vwy [ iU ] ) ; } frac_oa [ 0 ] = f5qwewprly ; bpIndex_oa [ 0 ] =
m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ ) { frac_oa [ 1 ] = d2guuznk3s [
iU ] ; frac_oa [ 2 ] = kko0lbsvwo [ iU ] ; frac_oa [ 3 ] = epaolvt0vm [ iU ]
; bpIndex_oa [ 1 ] = h0u2qqbsra [ iU ] ; bpIndex_oa [ 2 ] = kugs2ta1qq [ iU ]
; bpIndex_oa [ 3 ] = okphy1ntzm [ iU ] ; if ( rtP .
Constant8_Value_czdl4czirx [ iU ] > 4.0 ) { bpIndex_oa [ 4 ] = 4U ; } else {
bpIndex_oa [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_czdl4czirx [ iU ] , 0.0 ) ; } cczoirn2ah [ iU ] =
intrp4d_fu32fla_pw ( bpIndex_oa , frac_oa , & rtP . dp_WING_root . CD [ 1750U
* bpIndex_oa [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_lcxpikgrrm
, rtP . InterpolationUsingPrelookup1_maxIndex_ltd4b34mrv ) ; } if ( rtB .
p3gbp1cov5 [ 1 ] > rtP . Saturation1_UpperSat_opam5cmuy4 ) { g52k1xdouv_idx_1
= rtP . Saturation1_UpperSat_opam5cmuy4 ; } else if ( rtB . p3gbp1cov5 [ 1 ]
< rtP . Saturation1_LowerSat_iix5wp2wmm ) { g52k1xdouv_idx_1 = rtP .
Saturation1_LowerSat_iix5wp2wmm ; } else { g52k1xdouv_idx_1 = rtB .
p3gbp1cov5 [ 1 ] ; } kiombdthr4 = plook_u32ff_lincpa ( ( real32_T )
g52k1xdouv_idx_1 , rtP . dp_WING_tip . ail_defl , 6U , & p5e3xkr1y0 , & rtDW
. mh4tfkaouk ) ; n5yhkyeg5n_idx_0 = plook_u32ff_lincpa ( rtB . kbchqf1nmc [
12 ] , rtP . dp_WING_tip . alphas , 24U , & elutacwd5z [ 0 ] , & rtDW .
jek4mbk1vx [ 0 ] ) ; n5yhkyeg5n_idx_1 = plook_u32ff_lincpa ( rtB . kbchqf1nmc
[ 13 ] , rtP . dp_WING_tip . alphas , 24U , & elutacwd5z [ 1 ] , & rtDW .
jek4mbk1vx [ 1 ] ) ; khukbzvgdj_idx_0 = plook_u32ff_lincpa ( rtB . due3kthwym
[ 12 ] , rtP . dp_WING_tip . V , 1U , & ccgkoxgkvr [ 0 ] , & rtDW .
olk2wajvjn [ 0 ] ) ; khukbzvgdj_idx_1 = plook_u32ff_lincpa ( rtB . due3kthwym
[ 13 ] , rtP . dp_WING_tip . V , 1U , & ccgkoxgkvr [ 1 ] , & rtDW .
olk2wajvjn [ 1 ] ) ; hcbpipseis_idx_0 = plook_u32ff_lincpa ( prizw2ngzn [ 10
] , rtP . dp_WING_tip . DEP_J , 6U , & nbctofij0w [ 0 ] , & rtDW . dj4sdqer2s
[ 0 ] ) ; hcbpipseis_idx_1 = plook_u32ff_lincpa ( prizw2ngzn [ 11 ] , rtP .
dp_WING_tip . DEP_J , 6U , & nbctofij0w [ 1 ] , & rtDW . dj4sdqer2s [ 1 ] ) ;
frac_k2 [ 0 ] = p5e3xkr1y0 ; bpIndex_k2 [ 0 ] = kiombdthr4 ; frac_k2 [ 1 ] =
elutacwd5z [ 0 ] ; frac_k2 [ 2 ] = ccgkoxgkvr [ 0 ] ; frac_k2 [ 3 ] =
nbctofij0w [ 0 ] ; bpIndex_k2 [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_k2 [ 2 ] =
khukbzvgdj_idx_0 ; bpIndex_k2 [ 3 ] = hcbpipseis_idx_0 ; if ( rtP .
Constant8_Value_p5dioc5g11 [ 0 ] > 1.0 ) { bpIndex_k2 [ 4 ] = 1U ; } else {
bpIndex_k2 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_p5dioc5g11 [ 0 ] , 0.0 ) ; } cczoirn2ah [ 5 ] =
intrp4d_fu32fla_pw ( bpIndex_k2 , frac_k2 , & rtP . dp_WING_tip . CD [ 2450U
* bpIndex_k2 [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_iexu0jlwvg
, rtP . InterpolationUsingPrelookup1_maxIndex_hudoyvnwah ) ; frac_k2 [ 1 ] =
elutacwd5z [ 1 ] ; frac_k2 [ 2 ] = ccgkoxgkvr [ 1 ] ; frac_k2 [ 3 ] =
nbctofij0w [ 1 ] ; bpIndex_k2 [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_k2 [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_k2 [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_p5dioc5g11 [ 1 ] > 1.0 ) { bpIndex_k2 [ 4 ] = 1U ; } else {
bpIndex_k2 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_p5dioc5g11 [ 1 ] , 0.0 ) ; } cczoirn2ah [ 6 ] =
intrp4d_fu32fla_pw ( bpIndex_k2 , frac_k2 , & rtP . dp_WING_tip . CD [ 2450U
* bpIndex_k2 [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_iexu0jlwvg
, rtP . InterpolationUsingPrelookup1_maxIndex_hudoyvnwah ) ; frac_jw [ 0 ] =
f5qwewprly ; bpIndex_jw [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_jw [ 1 ] = d2guuznk3s [ iU ] ; frac_jw [ 2 ] = kko0lbsvwo [ iU ] ;
frac_jw [ 3 ] = epaolvt0vm [ iU ] ; bpIndex_jw [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_jw [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_jw [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_czdl4czirx [ iU ] > 4.0 ) { bpIndex_jw [ 4 ] = 4U
; } else { bpIndex_jw [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_czdl4czirx [ iU ] , 0.0 ) ; } cczoirn2ah [ iU + 7 ] =
intrp4d_fu32fla_pw ( bpIndex_jw , frac_jw , & rtP . dp_WING_root . CS [ 1750U
* bpIndex_jw [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_mgsxwcxubf
, rtP . InterpolationUsingPrelookup2_maxIndex_l1cyc2f3dd ) ; } frac_aq [ 0 ]
= p5e3xkr1y0 ; bpIndex_aq [ 0 ] = kiombdthr4 ; frac_aq [ 1 ] = elutacwd5z [ 0
] ; frac_aq [ 2 ] = ccgkoxgkvr [ 0 ] ; frac_aq [ 3 ] = nbctofij0w [ 0 ] ;
bpIndex_aq [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_aq [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_aq [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_p5dioc5g11 [
0 ] > 1.0 ) { bpIndex_aq [ 4 ] = 1U ; } else { bpIndex_aq [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_p5dioc5g11 [ 0 ] , 0.0 ) ; }
cczoirn2ah [ 12 ] = intrp4d_fu32fla_pw ( bpIndex_aq , frac_aq , & rtP .
dp_WING_tip . CS [ 2450U * bpIndex_aq [ 4 ] ] , rtP .
InterpolationUsingPrelookup2_dimSize_gmbdfam0rl , rtP .
InterpolationUsingPrelookup2_maxIndex_b401gtkwiu ) ; frac_aq [ 1 ] =
elutacwd5z [ 1 ] ; frac_aq [ 2 ] = ccgkoxgkvr [ 1 ] ; frac_aq [ 3 ] =
nbctofij0w [ 1 ] ; bpIndex_aq [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_aq [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_aq [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_p5dioc5g11 [ 1 ] > 1.0 ) { bpIndex_aq [ 4 ] = 1U ; } else {
bpIndex_aq [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_p5dioc5g11 [ 1 ] , 0.0 ) ; } cczoirn2ah [ 13 ] =
intrp4d_fu32fla_pw ( bpIndex_aq , frac_aq , & rtP . dp_WING_tip . CS [ 2450U
* bpIndex_aq [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_gmbdfam0rl
, rtP . InterpolationUsingPrelookup2_maxIndex_b401gtkwiu ) ; frac_eg [ 0 ] =
f5qwewprly ; bpIndex_eg [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_eg [ 1 ] = d2guuznk3s [ iU ] ; frac_eg [ 2 ] = kko0lbsvwo [ iU ] ;
frac_eg [ 3 ] = epaolvt0vm [ iU ] ; bpIndex_eg [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_eg [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_eg [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_czdl4czirx [ iU ] > 4.0 ) { bpIndex_eg [ 4 ] = 4U
; } else { bpIndex_eg [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_czdl4czirx [ iU ] , 0.0 ) ; } cczoirn2ah [ iU + 14 ] =
intrp4d_fu32fla_pw ( bpIndex_eg , frac_eg , & rtP . dp_WING_root . CL [ 1750U
* bpIndex_eg [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_g1lbsxhre4
, rtP . InterpolationUsingPrelookup3_maxIndex_ac32pppnfz ) ; } frac_ns [ 0 ]
= p5e3xkr1y0 ; bpIndex_ns [ 0 ] = kiombdthr4 ; frac_ns [ 1 ] = elutacwd5z [ 0
] ; frac_ns [ 2 ] = ccgkoxgkvr [ 0 ] ; frac_ns [ 3 ] = nbctofij0w [ 0 ] ;
bpIndex_ns [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_ns [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_ns [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_p5dioc5g11 [
0 ] > 1.0 ) { bpIndex_ns [ 4 ] = 1U ; } else { bpIndex_ns [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_p5dioc5g11 [ 0 ] , 0.0 ) ; }
cczoirn2ah [ 19 ] = intrp4d_fu32fla_pw ( bpIndex_ns , frac_ns , & rtP .
dp_WING_tip . CL [ 2450U * bpIndex_ns [ 4 ] ] , rtP .
InterpolationUsingPrelookup3_dimSize_mzkoz0oe2k , rtP .
InterpolationUsingPrelookup3_maxIndex_pluyiuztzx ) ; frac_ns [ 1 ] =
elutacwd5z [ 1 ] ; frac_ns [ 2 ] = ccgkoxgkvr [ 1 ] ; frac_ns [ 3 ] =
nbctofij0w [ 1 ] ; bpIndex_ns [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_ns [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_ns [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_p5dioc5g11 [ 1 ] > 1.0 ) { bpIndex_ns [ 4 ] = 1U ; } else {
bpIndex_ns [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_p5dioc5g11 [ 1 ] , 0.0 ) ; } cczoirn2ah [ 20 ] =
intrp4d_fu32fla_pw ( bpIndex_ns , frac_ns , & rtP . dp_WING_tip . CL [ 2450U
* bpIndex_ns [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_mzkoz0oe2k
, rtP . InterpolationUsingPrelookup3_maxIndex_pluyiuztzx ) ; for ( i_p = 0 ;
i_p < 7 ; i_p ++ ) { rtB . mm1arq2jyz [ 3 * i_p ] = kta5xsgp3m [ 3 * i_p ] *
cczoirn2ah [ i_p ] * rtB . lhopa3gq4f * rtP . Gain_Gain_olhvbnudcj ; rtB .
mm1arq2jyz [ 3 * i_p + 1 ] = kta5xsgp3m [ 3 * i_p + 1 ] * cczoirn2ah [ i_p +
7 ] * rtB . lhopa3gq4f * rtP . Gain_Gain_olhvbnudcj ; rtB . mm1arq2jyz [ 3 *
i_p + 2 ] = kta5xsgp3m [ 3 * i_p + 2 ] * cczoirn2ah [ i_p + 14 ] * rtB .
lhopa3gq4f * rtP . Gain_Gain_olhvbnudcj ; } parallel_for ( 7 , nthclqxgfx , 1
, "nthclqxgfx" ) ; parallel_for ( 7 , c1bqh5nyuc , 1 , "c1bqh5nyuc" ) ;
frac_ob [ 0 ] = f5qwewprly ; bpIndex_ob [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ;
iU < 5 ; iU ++ ) { frac_ob [ 1 ] = d2guuznk3s [ iU ] ; frac_ob [ 2 ] =
kko0lbsvwo [ iU ] ; frac_ob [ 3 ] = epaolvt0vm [ iU ] ; bpIndex_ob [ 1 ] =
h0u2qqbsra [ iU ] ; bpIndex_ob [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_ob [ 3 ] =
okphy1ntzm [ iU ] ; if ( rtP . Constant8_Value_czdl4czirx [ iU ] > 4.0 ) {
bpIndex_ob [ 4 ] = 4U ; } else { bpIndex_ob [ 4 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_czdl4czirx [ iU ] , 0.0 ) ; }
nfgppod2lf [ iU ] = intrp4d_fu32fla_pw ( bpIndex_ob , frac_ob , & rtP .
dp_WING_root . CMx [ 1750U * bpIndex_ob [ 4 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_c0elhhhrk1 , rtP .
InterpolationUsingPrelookup4_maxIndex_lvambm4ywl ) ; } frac_dk [ 0 ] =
p5e3xkr1y0 ; bpIndex_dk [ 0 ] = kiombdthr4 ; frac_dk [ 1 ] = elutacwd5z [ 0 ]
; frac_dk [ 2 ] = ccgkoxgkvr [ 0 ] ; frac_dk [ 3 ] = nbctofij0w [ 0 ] ;
bpIndex_dk [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_dk [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_dk [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_p5dioc5g11 [
0 ] > 1.0 ) { bpIndex_dk [ 4 ] = 1U ; } else { bpIndex_dk [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_p5dioc5g11 [ 0 ] , 0.0 ) ; }
nfgppod2lf [ 5 ] = intrp4d_fu32fla_pw ( bpIndex_dk , frac_dk , & rtP .
dp_WING_tip . CMx [ 2450U * bpIndex_dk [ 4 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_ds31wnwaq4 , rtP .
InterpolationUsingPrelookup4_maxIndex_neizwzo30i ) ; frac_dk [ 1 ] =
elutacwd5z [ 1 ] ; frac_dk [ 2 ] = ccgkoxgkvr [ 1 ] ; frac_dk [ 3 ] =
nbctofij0w [ 1 ] ; bpIndex_dk [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_dk [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_dk [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_p5dioc5g11 [ 1 ] > 1.0 ) { bpIndex_dk [ 4 ] = 1U ; } else {
bpIndex_dk [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_p5dioc5g11 [ 1 ] , 0.0 ) ; } nfgppod2lf [ 6 ] =
intrp4d_fu32fla_pw ( bpIndex_dk , frac_dk , & rtP . dp_WING_tip . CMx [ 2450U
* bpIndex_dk [ 4 ] ] , rtP . InterpolationUsingPrelookup4_dimSize_ds31wnwaq4
, rtP . InterpolationUsingPrelookup4_maxIndex_neizwzo30i ) ; frac_cu [ 0 ] =
f5qwewprly ; bpIndex_cu [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_cu [ 1 ] = d2guuznk3s [ iU ] ; frac_cu [ 2 ] = kko0lbsvwo [ iU ] ;
frac_cu [ 3 ] = epaolvt0vm [ iU ] ; bpIndex_cu [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_cu [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_cu [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_czdl4czirx [ iU ] > 4.0 ) { bpIndex_cu [ 4 ] = 4U
; } else { bpIndex_cu [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_czdl4czirx [ iU ] , 0.0 ) ; } nfgppod2lf [ iU + 7 ] =
intrp4d_fu32fla_pw ( bpIndex_cu , frac_cu , & rtP . dp_WING_root . CMy [
1750U * bpIndex_cu [ 4 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_dwk0qlyggm , rtP .
InterpolationUsingPrelookup5_maxIndex_jw5s1e1ppq ) ; } frac_mw [ 0 ] =
p5e3xkr1y0 ; bpIndex_mw [ 0 ] = kiombdthr4 ; frac_mw [ 1 ] = elutacwd5z [ 0 ]
; frac_mw [ 2 ] = ccgkoxgkvr [ 0 ] ; frac_mw [ 3 ] = nbctofij0w [ 0 ] ;
bpIndex_mw [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_mw [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_mw [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_p5dioc5g11 [
0 ] > 1.0 ) { bpIndex_mw [ 4 ] = 1U ; } else { bpIndex_mw [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_p5dioc5g11 [ 0 ] , 0.0 ) ; }
nfgppod2lf [ 12 ] = intrp4d_fu32fla_pw ( bpIndex_mw , frac_mw , & rtP .
dp_WING_tip . CMy [ 2450U * bpIndex_mw [ 4 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_g3hbsdju5h , rtP .
InterpolationUsingPrelookup5_maxIndex_c2yvfgf1kn ) ; frac_mw [ 1 ] =
elutacwd5z [ 1 ] ; frac_mw [ 2 ] = ccgkoxgkvr [ 1 ] ; frac_mw [ 3 ] =
nbctofij0w [ 1 ] ; bpIndex_mw [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_mw [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_mw [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_p5dioc5g11 [ 1 ] > 1.0 ) { bpIndex_mw [ 4 ] = 1U ; } else {
bpIndex_mw [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_p5dioc5g11 [ 1 ] , 0.0 ) ; } nfgppod2lf [ 13 ] =
intrp4d_fu32fla_pw ( bpIndex_mw , frac_mw , & rtP . dp_WING_tip . CMy [ 2450U
* bpIndex_mw [ 4 ] ] , rtP . InterpolationUsingPrelookup5_dimSize_g3hbsdju5h
, rtP . InterpolationUsingPrelookup5_maxIndex_c2yvfgf1kn ) ; frac_ml [ 0 ] =
f5qwewprly ; bpIndex_ml [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_ml [ 1 ] = d2guuznk3s [ iU ] ; frac_ml [ 2 ] = kko0lbsvwo [ iU ] ;
frac_ml [ 3 ] = epaolvt0vm [ iU ] ; bpIndex_ml [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_ml [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_ml [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_czdl4czirx [ iU ] > 4.0 ) { bpIndex_ml [ 4 ] = 4U
; } else { bpIndex_ml [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_czdl4czirx [ iU ] , 0.0 ) ; } nfgppod2lf [ iU + 14 ] =
intrp4d_fu32fla_pw ( bpIndex_ml , frac_ml , & rtP . dp_WING_root . CMz [
1750U * bpIndex_ml [ 4 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_filx3zdtwg , rtP .
InterpolationUsingPrelookup6_maxIndex_h0x1rdzcz5 ) ; } frac_ih [ 0 ] =
p5e3xkr1y0 ; bpIndex_ih [ 0 ] = kiombdthr4 ; frac_ih [ 1 ] = elutacwd5z [ 0 ]
; frac_ih [ 2 ] = ccgkoxgkvr [ 0 ] ; frac_ih [ 3 ] = nbctofij0w [ 0 ] ;
bpIndex_ih [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_ih [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_ih [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_p5dioc5g11 [
0 ] > 1.0 ) { bpIndex_ih [ 4 ] = 1U ; } else { bpIndex_ih [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_p5dioc5g11 [ 0 ] , 0.0 ) ; }
nfgppod2lf [ 19 ] = intrp4d_fu32fla_pw ( bpIndex_ih , frac_ih , & rtP .
dp_WING_tip . CMz [ 2450U * bpIndex_ih [ 4 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_hct55glihc , rtP .
InterpolationUsingPrelookup6_maxIndex_m4egiylzsk ) ; frac_ih [ 1 ] =
elutacwd5z [ 1 ] ; frac_ih [ 2 ] = ccgkoxgkvr [ 1 ] ; frac_ih [ 3 ] =
nbctofij0w [ 1 ] ; bpIndex_ih [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_ih [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_ih [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_p5dioc5g11 [ 1 ] > 1.0 ) { bpIndex_ih [ 4 ] = 1U ; } else {
bpIndex_ih [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_p5dioc5g11 [ 1 ] , 0.0 ) ; } nfgppod2lf [ 20 ] =
intrp4d_fu32fla_pw ( bpIndex_ih , frac_ih , & rtP . dp_WING_tip . CMz [ 2450U
* bpIndex_ih [ 4 ] ] , rtP . InterpolationUsingPrelookup6_dimSize_hct55glihc
, rtP . InterpolationUsingPrelookup6_maxIndex_m4egiylzsk ) ; cwdb3qacqr = rtP
. S / 2.0 ; for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { dq25kgk52k [ 3 * i_p ] =
kta5xsgp3m [ 3 * i_p ] * nfgppod2lf [ i_p ] * rtP . Constant_Value_bz5a000fc2
[ 3 * i_p ] * rtB . lhopa3gq4f * cwdb3qacqr + rtB . dfrnathep2 [ 3 * i_p ] ;
dq25kgk52k [ 3 * i_p + 1 ] = kta5xsgp3m [ 3 * i_p + 1 ] * nfgppod2lf [ i_p +
7 ] * rtP . Constant_Value_bz5a000fc2 [ 3 * i_p + 1 ] * rtB . lhopa3gq4f *
cwdb3qacqr + rtB . dfrnathep2 [ 3 * i_p + 1 ] ; dq25kgk52k [ 3 * i_p + 2 ] =
kta5xsgp3m [ 3 * i_p + 2 ] * nfgppod2lf [ i_p + 14 ] * rtP .
Constant_Value_bz5a000fc2 [ 3 * i_p + 2 ] * rtB . lhopa3gq4f * cwdb3qacqr +
rtB . dfrnathep2 [ 3 * i_p + 2 ] ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) {
cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e < 7 ; i_e ++ ) { cwdb3qacqr +=
dq25kgk52k [ i_e * 3 + i_p ] ; } p4xbdqn5oc [ i_p ] = cwdb3qacqr ; }
bdvkktmal5_idx_0 = ( real32_T ) p4xbdqn5oc [ 0 ] ; bdvkktmal5_idx_1 = (
real32_T ) p4xbdqn5oc [ 1 ] ; bdvkktmal5_idx_2 = ( real32_T ) p4xbdqn5oc [ 2
] ; for ( i = 0 ; i <= 6 ; i += 2 ) { _mm_storeu_pd ( & nvl2rva03y [ i ] ,
_mm_mul_pd ( _mm_loadu_pd ( & rtP . Constant_Value_ccppqm51kc [ i ] ) ,
_mm_set1_pd ( ( real32_T ) y_e ) ) ) ; _mm_storeu_pd ( & nvl2rva03y [ i + 8 ]
, _mm_mul_pd ( _mm_loadu_pd ( & rtP . Constant1_Value_eikt0bo2b5 [ i ] ) ,
_mm_set1_pd ( ( real32_T ) y_i ) ) ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) {
c3swjrmvem [ iU ] = plook_linxp ( nvl2rva03y [ iU ] , p , 4U , & irfwaeofjb [
iU ] , & rtDW . cnggkfwmtg [ iU ] ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) {
acmnvm3xsn [ iU ] = look1_iflf_pbinlcpw ( rtP . Constant7_Value_cnk4za3icy [
iU ] , rtP . uDLookupTable_bp01Data_grpqwlpvcq , & rtB . kbchqf1nmc [ 4 ] , &
rtDW . gywplgfgo2 [ iU ] , 5U ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) {
gm4p0rdh2f [ iU ] = plook_u32ff_linxp ( acmnvm3xsn [ iU ] , rtP .
dp_VTAIL_INDUCED . alphas , 24U , & l0zhodiblx [ iU ] , & rtDW . ejpzs4ilay [
iU ] ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { acmnvm3xsn [ iU ] =
look1_iflf_pbinlcpw ( rtP . Constant7_Value_cnk4za3icy [ iU ] , rtP .
uDLookupTable1_bp01Data_nd4xkzy5yd , & rtB . due3kthwym [ 4 ] , & rtDW .
can5ffl1pr [ iU ] , 5U ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { ayy24n2qrl [
iU ] = plook_u32ff_linxp ( acmnvm3xsn [ iU ] , rtP . dp_VTAIL_INDUCED .
V_infs , 1U , & biece21jwb [ iU ] , & rtDW . hxzrjsvd30 [ iU ] ) ; } for ( iU
= 0 ; iU < 16 ; iU ++ ) { acmnvm3xsn [ iU ] = look1_iflf_pbinlcpw ( rtP .
Constant7_Value_cnk4za3icy [ iU ] , rtP . uDLookupTable2_bp01Data_hrcxzhxouy
, & prizw2ngzn [ 3 ] , & rtDW . e3iqk0pnev [ iU ] , 5U ) ; } for ( iU = 0 ;
iU < 16 ; iU ++ ) { asvvjqwjnk [ iU ] = plook_u32ff_lincp ( acmnvm3xsn [ iU ]
, rtP . dp_VTAIL_INDUCED . DEP_J , 6U , & bqkagafcws [ iU ] , & rtDW .
dt01p1zmsc [ iU ] ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { frac_g5 [ 0 ] =
irfwaeofjb [ iU ] ; frac_g5 [ 1 ] = l0zhodiblx [ iU ] ; frac_g5 [ 2 ] =
biece21jwb [ iU ] ; frac_g5 [ 3 ] = bqkagafcws [ iU ] ; bpIndex_g5 [ 0 ] =
c3swjrmvem [ iU ] ; bpIndex_g5 [ 1 ] = gm4p0rdh2f [ iU ] ; bpIndex_g5 [ 2 ] =
ayy24n2qrl [ iU ] ; bpIndex_g5 [ 3 ] = asvvjqwjnk [ iU ] ; if ( rtP .
Constant8_Value_cj4edq0psu [ iU ] > 15.0 ) { bpIndex_g5 [ 4 ] = 15U ; } else
{ bpIndex_g5 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_cj4edq0psu [ iU ] , 0.0 ) ; } acmnvm3xsn [ iU ] =
intrp4d_fl_pw ( bpIndex_g5 , frac_g5 , & rtP . dp_VTAIL_INDUCED . V_induced [
1750U * bpIndex_g5 [ 4 ] ] , rtP . V_induced_dimSize_fbx5u0depe ) ; }
parallel_for ( 16 , fpyiqjkxe4 , 1 , "fpyiqjkxe4" ) ; for ( i = 0 ; i < 16 ;
i ++ ) { jtoldnh5tw = acmnvm3xsn [ i ] + rtB . due3kthwym3 [ i ] ; k1zpj42h11
[ i ] = jtoldnh5tw ; k1zpj42h11 [ i + 16 ] = jtoldnh5tw ; k1zpj42h11 [ i + 32
] = jtoldnh5tw ; pf3wpndfmw [ 3 * i ] = k1zpj42h11 [ i ] ; pf3wpndfmw [ 3 * i
+ 1 ] = k1zpj42h11 [ i + 16 ] ; pf3wpndfmw [ 3 * i + 2 ] = k1zpj42h11 [ i +
32 ] ; } for ( i = 0 ; i <= 44 ; i += 4 ) { tmp_f = _mm_loadu_ps ( &
pf3wpndfmw [ i ] ) ; _mm_storeu_ps ( & mybyivl1uq [ i ] , _mm_mul_ps ( tmp_f
, tmp_f ) ) ; } for ( i = 0 ; i <= 6 ; i += 2 ) { _mm_storeu_pd ( &
nvl2rva03y [ i ] , _mm_mul_pd ( _mm_loadu_pd ( & rtP .
Constant_Value_e4wpbrws14 [ i ] ) , _mm_set1_pd ( ( real32_T )
hjpu2sw0us_idx_1 ) ) ) ; _mm_storeu_pd ( & nvl2rva03y [ i + 8 ] , _mm_mul_pd
( _mm_loadu_pd ( & rtP . Constant1_Value_jb1k1aylyd [ i ] ) , _mm_set1_pd ( (
real32_T ) y_p ) ) ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { f2e5fcgb3v [ iU ]
= plook_linxp ( nvl2rva03y [ iU ] , tmp , 9U , & lqbwr5bl13 [ iU ] , & rtDW .
gjocb1fbkw [ iU ] ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { frac_mu [ 0 ] =
irfwaeofjb [ iU ] ; frac_mu [ 1 ] = l0zhodiblx [ iU ] ; frac_mu [ 2 ] =
biece21jwb [ iU ] ; frac_mu [ 3 ] = bqkagafcws [ iU ] ; bpIndex_mu [ 0 ] =
c3swjrmvem [ iU ] ; bpIndex_mu [ 1 ] = gm4p0rdh2f [ iU ] ; bpIndex_mu [ 2 ] =
ayy24n2qrl [ iU ] ; bpIndex_mu [ 3 ] = asvvjqwjnk [ iU ] ; if ( rtP .
Constant8_Value_cj4edq0psu [ iU ] > 15.0 ) { bpIndex_mu [ 4 ] = 15U ; } else
{ bpIndex_mu [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_cj4edq0psu [ iU ] , 0.0 ) ; } jtoldnh5tw = intrp4d_fl_pw (
bpIndex_mu , frac_mu , & rtP . dp_VTAIL_INDUCED . alpha_induced [ 1750U *
bpIndex_mu [ 4 ] ] , rtP . alpha_induced_dimSize_ktik5gjgtn ) ; h5rdtgmjbr [
iU ] = jtoldnh5tw ; bqkagafcws [ iU ] = jtoldnh5tw + rtB . kbchqf1nmcj [ iU ]
; } for ( iU = 0 ; iU < 16 ; iU ++ ) { asvvjqwjnk [ iU ] = plook_u32ff_linxp
( bqkagafcws [ iU ] , rtP . dp_VTAIL . alphas , 12U , & h5rdtgmjbr [ iU ] , &
rtDW . b3cbqcpv1h [ iU ] ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { ayy24n2qrl
[ iU ] = plook_u32ff_linxp ( rtB . aqvld2rfg4 [ iU ] , rtP . dp_VTAIL . betas
, 8U , & bqkagafcws [ iU ] , & rtDW . gzdase1ucw [ iU ] ) ; } for ( iU = 0 ;
iU < 16 ; iU ++ ) { m04ebe1zz2 = ayy24n2qrl [ iU ] ; lco5i2tcb1 = asvvjqwjnk
[ iU ] ; n00enf32nh = f2e5fcgb3v [ iU ] ; nsmwxx5bxv = bqkagafcws [ iU ] ;
jtoldnh5tw = h5rdtgmjbr [ iU ] ; dh3zefosvy = lqbwr5bl13 [ iU ] ; frac_no [ 0
] = dh3zefosvy ; frac_no [ 1 ] = jtoldnh5tw ; frac_no [ 2 ] = nsmwxx5bxv ;
bpIndex_no [ 0 ] = n00enf32nh ; bpIndex_no [ 1 ] = lco5i2tcb1 ; bpIndex_no [
2 ] = m04ebe1zz2 ; if ( rtP . Constant8_Value_ixnsdoap5p [ iU ] > 15.0 ) {
bpIndex_no [ 3 ] = 15U ; } else { bpIndex_no [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_ixnsdoap5p [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU ] = intrp3d_fl_pw ( bpIndex_no , frac_no , & rtP . dp_VTAIL .
CFx [ 1170U * bpIndex_no [ 3 ] ] , rtP .
InterpolationUsingPrelookup1_dimSize_oruopgdmfm ) ; frac_ca [ 0 ] =
dh3zefosvy ; frac_ca [ 1 ] = jtoldnh5tw ; frac_ca [ 2 ] = nsmwxx5bxv ;
bpIndex_ca [ 0 ] = n00enf32nh ; bpIndex_ca [ 1 ] = lco5i2tcb1 ; bpIndex_ca [
2 ] = m04ebe1zz2 ; if ( rtP . Constant8_Value_ixnsdoap5p [ iU ] > 15.0 ) {
bpIndex_ca [ 3 ] = 15U ; } else { bpIndex_ca [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_ixnsdoap5p [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU + 16 ] = intrp3d_fl_pw ( bpIndex_ca , frac_ca , & rtP .
dp_VTAIL . CFy [ 1170U * bpIndex_ca [ 3 ] ] , rtP .
InterpolationUsingPrelookup2_dimSize_mxakr3khpf ) ; frac_jv [ 0 ] =
dh3zefosvy ; frac_jv [ 1 ] = jtoldnh5tw ; frac_jv [ 2 ] = nsmwxx5bxv ;
bpIndex_jv [ 0 ] = n00enf32nh ; bpIndex_jv [ 1 ] = lco5i2tcb1 ; bpIndex_jv [
2 ] = m04ebe1zz2 ; if ( rtP . Constant8_Value_ixnsdoap5p [ iU ] > 15.0 ) {
bpIndex_jv [ 3 ] = 15U ; } else { bpIndex_jv [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_ixnsdoap5p [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU + 32 ] = intrp3d_fl_pw ( bpIndex_jv , frac_jv , & rtP .
dp_VTAIL . CFz [ 1170U * bpIndex_jv [ 3 ] ] , rtP .
InterpolationUsingPrelookup3_dimSize_fjky5krsak ) ; rtB . h12sa05pgw [ 3 * iU
] = mybyivl1uq [ 3 * iU ] * k1zpj42h11 [ iU ] * rtB . lhopa3gq4f * rtP .
Gain2_Gain_asvoaqvb0s ; rtB . h12sa05pgw [ 3 * iU + 1 ] = mybyivl1uq [ 3 * iU
+ 1 ] * k1zpj42h11 [ iU + 16 ] * rtB . lhopa3gq4f * rtP .
Gain2_Gain_asvoaqvb0s ; rtB . h12sa05pgw [ 3 * iU + 2 ] = mybyivl1uq [ 3 * iU
+ 2 ] * k1zpj42h11 [ iU + 32 ] * rtB . lhopa3gq4f * rtP .
Gain2_Gain_asvoaqvb0s ; } parallel_for ( 16 , lrwp4abblu , 1 , "lrwp4abblu" )
; for ( iU = 0 ; iU < 16 ; iU ++ ) { m04ebe1zz2 = ayy24n2qrl [ iU ] ;
lco5i2tcb1 = asvvjqwjnk [ iU ] ; n00enf32nh = f2e5fcgb3v [ iU ] ; nsmwxx5bxv
= bqkagafcws [ iU ] ; jtoldnh5tw = h5rdtgmjbr [ iU ] ; dh3zefosvy =
lqbwr5bl13 [ iU ] ; frac_ah [ 0 ] = dh3zefosvy ; frac_ah [ 1 ] = jtoldnh5tw ;
frac_ah [ 2 ] = nsmwxx5bxv ; bpIndex_ah [ 0 ] = n00enf32nh ; bpIndex_ah [ 1 ]
= lco5i2tcb1 ; bpIndex_ah [ 2 ] = m04ebe1zz2 ; if ( rtP .
Constant8_Value_ixnsdoap5p [ iU ] > 15.0 ) { bpIndex_ah [ 3 ] = 15U ; } else
{ bpIndex_ah [ 3 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ixnsdoap5p [ iU ] , 0.0 ) ; } k1zpj42h11 [ iU ] =
intrp3d_fl_pw ( bpIndex_ah , frac_ah , & rtP . dp_VTAIL . CMx [ 1170U *
bpIndex_ah [ 3 ] ] , rtP . InterpolationUsingPrelookup4_dimSize_g4tfwgxe2s )
; frac_iy [ 0 ] = dh3zefosvy ; frac_iy [ 1 ] = jtoldnh5tw ; frac_iy [ 2 ] =
nsmwxx5bxv ; bpIndex_iy [ 0 ] = n00enf32nh ; bpIndex_iy [ 1 ] = lco5i2tcb1 ;
bpIndex_iy [ 2 ] = m04ebe1zz2 ; if ( rtP . Constant8_Value_ixnsdoap5p [ iU ]
> 15.0 ) { bpIndex_iy [ 3 ] = 15U ; } else { bpIndex_iy [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_ixnsdoap5p [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU + 16 ] = intrp3d_fl_pw ( bpIndex_iy , frac_iy , & rtP .
dp_VTAIL . CMy [ 1170U * bpIndex_iy [ 3 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_m21mus4ulz ) ; frac_kr [ 0 ] =
dh3zefosvy ; frac_kr [ 1 ] = jtoldnh5tw ; frac_kr [ 2 ] = nsmwxx5bxv ;
bpIndex_kr [ 0 ] = n00enf32nh ; bpIndex_kr [ 1 ] = lco5i2tcb1 ; bpIndex_kr [
2 ] = m04ebe1zz2 ; if ( rtP . Constant8_Value_ixnsdoap5p [ iU ] > 15.0 ) {
bpIndex_kr [ 3 ] = 15U ; } else { bpIndex_kr [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_ixnsdoap5p [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU + 32 ] = intrp3d_fl_pw ( bpIndex_kr , frac_kr , & rtP .
dp_VTAIL . CMz [ 1170U * bpIndex_kr [ 3 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_ehhuunl5g5 ) ; mfkqvhwnqs [ 3 * iU ] =
mybyivl1uq [ 3 * iU ] * k1zpj42h11 [ iU ] * rtP . Constant1_Value_oor1xxfbqn
[ 3 * iU ] * rtB . lhopa3gq4f * rtP . Gain3_Gain_pedh4qdw3v + rtB .
dfrnathep2iw [ 3 * iU ] ; mfkqvhwnqs [ 3 * iU + 1 ] = mybyivl1uq [ 3 * iU + 1
] * k1zpj42h11 [ iU + 16 ] * rtP . Constant1_Value_oor1xxfbqn [ 3 * iU + 1 ]
* rtB . lhopa3gq4f * rtP . Gain3_Gain_pedh4qdw3v + rtB . dfrnathep2iw [ 3 *
iU + 1 ] ; mfkqvhwnqs [ 3 * iU + 2 ] = mybyivl1uq [ 3 * iU + 2 ] * k1zpj42h11
[ iU + 32 ] * rtP . Constant1_Value_oor1xxfbqn [ 3 * iU + 2 ] * rtB .
lhopa3gq4f * rtP . Gain3_Gain_pedh4qdw3v + rtB . dfrnathep2iw [ 3 * iU + 2 ]
; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { cwdb3qacqr = - 0.0 ; for ( i_e = 0 ;
i_e < 16 ; i_e ++ ) { cwdb3qacqr += mfkqvhwnqs [ i_e * 3 + i_p ] ; }
p4xbdqn5oc [ i_p ] = cwdb3qacqr ; } cq2trmp0xn_idx_0 = ( real32_T )
p4xbdqn5oc [ 0 ] ; cq2trmp0xn_idx_1 = ( real32_T ) p4xbdqn5oc [ 1 ] ;
cq2trmp0xn_idx_2 = ( real32_T ) p4xbdqn5oc [ 2 ] ; muDoubleScalarSinCos ( (
real32_T ) e32kai3hdx , & dh3zefosvy , & kld3j4mgfs_idx_0 ) ;
muDoubleScalarSinCos ( ( real32_T ) j0r0arniji , & l4omwvocst_idx_1 , &
kld3j4mgfs_idx_1 ) ; iksijyt0t5 [ 0 ] = kld3j4mgfs_idx_0 * kld3j4mgfs_idx_1 ;
iksijyt0t5 [ 1 ] = - ( kld3j4mgfs_idx_0 * l4omwvocst_idx_1 ) ; iksijyt0t5 [ 2
] = - dh3zefosvy ; iksijyt0t5 [ 3 ] = l4omwvocst_idx_1 ; iksijyt0t5 [ 4 ] =
kld3j4mgfs_idx_1 ; iksijyt0t5 [ 6 ] = dh3zefosvy * kld3j4mgfs_idx_1 ;
iksijyt0t5 [ 7 ] = - ( dh3zefosvy * l4omwvocst_idx_1 ) ; iksijyt0t5 [ 8 ] =
kld3j4mgfs_idx_0 ; m04ebe1zz2 = plook_u32ff_linxp ( ( real32_T ) j0r0arniji ,
rtP . Prelookup_BreakpointsData_agogm1ywyd , 12U , & f5qwewprly , & rtDW .
l2x1n13zrt ) ; kiombdthr4 = plook_u32ff_linxp ( ( real32_T ) e32kai3hdx , rtP
. Prelookup1_BreakpointsData_huhhw0zjq0 , 14U , & p5e3xkr1y0 , & rtDW .
nsylsr0oax ) ; frac_im [ 0 ] = f5qwewprly ; frac_im [ 1 ] = p5e3xkr1y0 ;
bpIndex_im [ 0 ] = m04ebe1zz2 ; bpIndex_im [ 1 ] = kiombdthr4 ; frac_ge [ 0 ]
= f5qwewprly ; frac_ge [ 1 ] = p5e3xkr1y0 ; bpIndex_ge [ 0 ] = m04ebe1zz2 ;
bpIndex_ge [ 1 ] = kiombdthr4 ; lrpn1bvaje = ( real32_T ) lir1dfa45c * (
real32_T ) lir1dfa45c ; jtoldnh5tw = intrp2d_fu32fl_pw ( bpIndex_im , frac_im
, rtP . dp_FUSE_FIN . CD , 13U ) ; nsmwxx5bxv = intrp2d_fu32fl_pw (
bpIndex_ge , frac_ge , rtP . dp_FUSE_FIN . CS , 13U ) ; for ( i_p = 0 ; i_p <
3 ; i_p ++ ) { g0uuf55mpg [ i_p ] = ( ( ( real32_T ) iksijyt0t5 [ 3 * i_p + 1
] * nsmwxx5bxv + ( real32_T ) iksijyt0t5 [ 3 * i_p ] * - jtoldnh5tw ) + (
real32_T ) iksijyt0t5 [ 3 * i_p + 2 ] * - rtP . Constant_Value_ezoie0cfg5 ) *
lrpn1bvaje * rtB . lhopa3gq4f * rtP . Gain_Gain_ceaafgmrgm ; } frac_f1 [ 0 ]
= f5qwewprly ; frac_f1 [ 1 ] = p5e3xkr1y0 ; bpIndex_f1 [ 0 ] = m04ebe1zz2 ;
bpIndex_f1 [ 1 ] = kiombdthr4 ; frac_pb [ 0 ] = f5qwewprly ; frac_pb [ 1 ] =
p5e3xkr1y0 ; bpIndex_pb [ 0 ] = m04ebe1zz2 ; bpIndex_pb [ 1 ] = kiombdthr4 ;
frac_gq [ 0 ] = f5qwewprly ; frac_gq [ 1 ] = p5e3xkr1y0 ; bpIndex_gq [ 0 ] =
m04ebe1zz2 ; bpIndex_gq [ 1 ] = kiombdthr4 ; p4xbdqn5oc [ 0 ] =
intrp2d_fu32fl_pw ( bpIndex_f1 , frac_f1 , rtP . dp_FUSE_FIN . CMx , 13U ) *
lrpn1bvaje * rtP . Constant_Value_m5qvzimlbd [ 0 ] ; p4xbdqn5oc [ 1 ] =
intrp2d_fu32fl_pw ( bpIndex_pb , frac_pb , rtP . dp_FUSE_FIN . CMy , 13U ) *
lrpn1bvaje * rtP . Constant_Value_m5qvzimlbd [ 1 ] ; p4xbdqn5oc [ 2 ] =
intrp2d_fu32fl_pw ( bpIndex_gq , frac_gq , rtP . dp_FUSE_FIN . CMz , 13U ) *
lrpn1bvaje * rtP . Constant_Value_m5qvzimlbd [ 2 ] ; cwdb3qacqr = rtP . S /
2.0 ; rtB . hjfyosur03 [ 0 ] = ( ( rtB . ezqlnpmitg [ 1 ] * g0uuf55mpg [ 2 ]
- g0uuf55mpg [ 1 ] * rtB . ezqlnpmitg [ 2 ] ) + rtB . lhopa3gq4f * p4xbdqn5oc
[ 0 ] * cwdb3qacqr ) + ( ( real_T ) ( - ivnfroue5d [ 0 ] + bdvkktmal5_idx_0 )
+ cq2trmp0xn_idx_0 ) ; rtB . hjfyosur03 [ 1 ] = ( ( g0uuf55mpg [ 0 ] * rtB .
ezqlnpmitg [ 2 ] - rtB . ezqlnpmitg [ 0 ] * g0uuf55mpg [ 2 ] ) + rtB .
lhopa3gq4f * p4xbdqn5oc [ 1 ] * cwdb3qacqr ) + ( ( real_T ) ( ivnfroue5d [ 1
] + bdvkktmal5_idx_1 ) + cq2trmp0xn_idx_1 ) ; rtB . hjfyosur03 [ 2 ] = ( (
rtB . ezqlnpmitg [ 0 ] * g0uuf55mpg [ 1 ] - g0uuf55mpg [ 0 ] * rtB .
ezqlnpmitg [ 1 ] ) + rtB . lhopa3gq4f * p4xbdqn5oc [ 2 ] * cwdb3qacqr ) + ( (
real_T ) ( - ivnfroue5d [ 2 ] + bdvkktmal5_idx_2 ) + cq2trmp0xn_idx_2 ) ; for
( i_p = 0 ; i_p < 3 ; i_p ++ ) { cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e <
12 ; i_e ++ ) { cwdb3qacqr += rtB . gspzpbwxqr [ i_e * 3 + i_p ] ; }
p4xbdqn5oc [ i_p ] = cwdb3qacqr ; } inoflfxzl4 [ 0 ] = ( p4xbdqn5oc [ 0 ] +
rtP . Constant_Value_mqn3mezyr0 ) + rtB . hjfyosur03 [ 0 ] ; inoflfxzl4 [ 1 ]
= ( p4xbdqn5oc [ 1 ] + rtP . Constant_Value_mqn3mezyr0 ) + rtB . hjfyosur03 [
1 ] ; inoflfxzl4 [ 2 ] = ( p4xbdqn5oc [ 2 ] + rtP . Constant_Value_mqn3mezyr0
) + rtB . hjfyosur03 [ 2 ] ; p4xbdqn5oc [ 0 ] = rtB . mkyju0odm1 [ 0 ] ;
p4xbdqn5oc [ 1 ] = rtB . mkyju0odm1 [ 1 ] ; p4xbdqn5oc [ 2 ] = rtB .
mkyju0odm1 [ 2 ] ; for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { ebzekdphab [ i_p ] =
( rtB . lmkobnys11 [ i_p + 3 ] * p4xbdqn5oc [ 1 ] + rtB . lmkobnys11 [ i_p ]
* p4xbdqn5oc [ 0 ] ) + rtB . lmkobnys11 [ i_p + 6 ] * p4xbdqn5oc [ 2 ] ; }
p4xbdqn5oc [ 0 ] = rtB . mkyju0odm1 [ 0 ] ; p4xbdqn5oc [ 1 ] = rtB .
mkyju0odm1 [ 1 ] ; p4xbdqn5oc [ 2 ] = rtB . mkyju0odm1 [ 2 ] ; for ( i_p = 0
; i_p < 3 ; i_p ++ ) { as2exlo2n4 [ i_p ] = ( rtB . kz2why5p22 [ i_p + 3 ] *
p4xbdqn5oc [ 1 ] + rtB . kz2why5p22 [ i_p ] * p4xbdqn5oc [ 0 ] ) + rtB .
kz2why5p22 [ i_p + 6 ] * p4xbdqn5oc [ 2 ] ; } p4xbdqn5oc [ 0 ] = rtB .
mkyju0odm1 [ 1 ] * as2exlo2n4 [ 2 ] - as2exlo2n4 [ 1 ] * rtB . mkyju0odm1 [ 2
] ; p4xbdqn5oc [ 1 ] = as2exlo2n4 [ 0 ] * rtB . mkyju0odm1 [ 2 ] - rtB .
mkyju0odm1 [ 0 ] * as2exlo2n4 [ 2 ] ; p4xbdqn5oc [ 2 ] = rtB . mkyju0odm1 [ 0
] * as2exlo2n4 [ 1 ] - as2exlo2n4 [ 0 ] * rtB . mkyju0odm1 [ 1 ] ; gkshvepttp
[ 0 ] = ( inoflfxzl4 [ 0 ] - ebzekdphab [ 0 ] ) - p4xbdqn5oc [ 0 ] ;
gkshvepttp [ 1 ] = ( inoflfxzl4 [ 1 ] - ebzekdphab [ 1 ] ) - p4xbdqn5oc [ 1 ]
; gkshvepttp [ 2 ] = ( inoflfxzl4 [ 2 ] - ebzekdphab [ 2 ] ) - p4xbdqn5oc [ 2
] ; rt_mrdivide_U1d1x3_U2d3x3_Yd1x3_snf ( gkshvepttp , rtB . j0ivb0laay ,
p4xbdqn5oc ) ; inoflfxzl4 [ 0 ] = p4xbdqn5oc [ 0 ] ; inoflfxzl4 [ 1 ] =
p4xbdqn5oc [ 1 ] ; inoflfxzl4 [ 2 ] = p4xbdqn5oc [ 2 ] ; parallel_for ( 14 ,
bo1p4zvpzl , 1 , "bo1p4zvpzl" ) ; rtB . gad0n3uwlc [ 0 ] = rtB . pcrwxsalun [
6 ] ; rtB . gad0n3uwlc [ 1 ] = rtB . pcrwxsalun [ 5 ] ; rtB . gad0n3uwlc [ 2
] = rtB . pcrwxsalun [ 4 ] ; rtB . gad0n3uwlc [ 3 ] = rtB . pcrwxsalun [ 3 ]
; rtB . gad0n3uwlc [ 4 ] = rtB . pcrwxsalun [ 2 ] ; rtB . gad0n3uwlc [ 5 ] =
rtB . pcrwxsalun [ 1 ] ; rtB . gad0n3uwlc [ 6 ] = rtB . pcrwxsalun [ 0 ] ;
far5jcykzg [ 0 ] = rtB . evhqkw31g3 [ 6 ] ; far5jcykzg [ 1 ] = rtB .
evhqkw31g3 [ 5 ] ; far5jcykzg [ 2 ] = rtB . evhqkw31g3 [ 4 ] ; far5jcykzg [ 3
] = rtB . evhqkw31g3 [ 3 ] ; far5jcykzg [ 4 ] = rtB . evhqkw31g3 [ 2 ] ;
far5jcykzg [ 5 ] = rtB . evhqkw31g3 [ 1 ] ; far5jcykzg [ 6 ] = rtB .
evhqkw31g3 [ 0 ] ; far5jcykzg [ 7 ] = rtB . evhqkw31g3 [ 6 ] ; far5jcykzg [ 8
] = rtB . evhqkw31g3 [ 5 ] ; far5jcykzg [ 9 ] = rtB . evhqkw31g3 [ 4 ] ;
far5jcykzg [ 10 ] = rtB . evhqkw31g3 [ 3 ] ; far5jcykzg [ 11 ] = rtB .
evhqkw31g3 [ 2 ] ; far5jcykzg [ 12 ] = rtB . evhqkw31g3 [ 1 ] ; far5jcykzg [
13 ] = rtB . evhqkw31g3 [ 0 ] ; far5jcykzg [ 14 ] = rtB . evhqkw31g3 [ 6 ] ;
far5jcykzg [ 15 ] = rtB . evhqkw31g3 [ 5 ] ; far5jcykzg [ 16 ] = rtB .
evhqkw31g3 [ 4 ] ; far5jcykzg [ 17 ] = rtB . evhqkw31g3 [ 3 ] ; far5jcykzg [
18 ] = rtB . evhqkw31g3 [ 2 ] ; far5jcykzg [ 19 ] = rtB . evhqkw31g3 [ 1 ] ;
far5jcykzg [ 20 ] = rtB . evhqkw31g3 [ 0 ] ; for ( i_p = 0 ; i_p < 7 ; i_p ++
) { liydxvyvbx [ 3 * i_p ] = far5jcykzg [ i_p ] ; liydxvyvbx [ 3 * i_p + 1 ]
= far5jcykzg [ i_p + 7 ] ; liydxvyvbx [ 3 * i_p + 2 ] = far5jcykzg [ i_p + 14
] ; } for ( i = 0 ; i < 21 ; i ++ ) { cq2trmp0xn_idx_0 = liydxvyvbx [ i ] ;
kta5xsgp3m [ i ] = cq2trmp0xn_idx_0 * cq2trmp0xn_idx_0 ; } dh3zefosvy = rtDW
. h21bdoedky + rtP . Constant1_Value_heqd3rccy3 ; if ( ( int32_T ) rtP .
UpdateCompleteB_Value_mezom0rtzf == 0 ) { hy1xz2ukcn = dh3zefosvy ; } else {
hy1xz2ukcn = s315_iter ; } if ( ( frac_ir [ ( int32_T ) hy1xz2ukcn - 1 ] -
acafcyi14i [ ( int32_T ) hy1xz2ukcn - 1 ] ) - rtP . fcc . rate_u_pert [ ( ( (
( int32_T ) hy1xz2ukcn - 1 ) << 2 ) + ( int32_T ) hy1xz2ukcn ) - 1 ] >= rtP .
Switch_Threshold_oqvumhratm ) { cb = rtP . Constant_Value_gpb5waz5ae ; } else
{ cb = rtP . Constant1_Value_h23w2e41ge ; } frac_av [ 0 ] = rtP . fcc .
rate_u_pert [ ( ( int32_T ) hy1xz2ukcn - 1 ) << 2 ] * cb + acafcyi14i [ 0 ] ;
if ( frac_av [ 0 ] > f40yzytdn0 [ 0 ] ) { rtB . le5ehxvxar [ 0 ] = f40yzytdn0
[ 0 ] ; } else if ( frac_av [ 0 ] < mstjku3ag5 [ 0 ] ) { rtB . le5ehxvxar [ 0
] = mstjku3ag5 [ 0 ] ; } else { rtB . le5ehxvxar [ 0 ] = frac_av [ 0 ] ; } if
( - frac_av [ 0 ] > f40yzytdn0 [ 1 ] ) { rtB . le5ehxvxar [ 1 ] = f40yzytdn0
[ 1 ] ; } else if ( - frac_av [ 0 ] < mstjku3ag5 [ 1 ] ) { rtB . le5ehxvxar [
1 ] = mstjku3ag5 [ 1 ] ; } else { rtB . le5ehxvxar [ 1 ] = - frac_av [ 0 ] ;
} rtB . le5ehxvxar [ 2 ] = rtP . fcc . rate_u_pert [ ( ( ( int32_T )
hy1xz2ukcn - 1 ) << 2 ) + 1 ] * cb + acafcyi14i [ 1 ] ; rtB . le5ehxvxar [ 3
] = rtP . fcc . rate_u_pert [ ( ( ( int32_T ) hy1xz2ukcn - 1 ) << 2 ) + 2 ] *
cb + acafcyi14i [ 2 ] ; rtB . le5ehxvxar [ 4 ] = rtB . enpvrp5gce [ 2 ] ; rtB
. le5ehxvxar [ 5 ] = rtB . enpvrp5gce [ 2 ] ; jdf3sumceh = ( rtP . fcc .
rate_u_pert [ ( ( ( int32_T ) hy1xz2ukcn - 1 ) << 2 ) + 3 ] * cb + acafcyi14i
[ 3 ] ) * rtP . fcc . k_DEP_slope ; pxudjjmfpa ( rtB . enpvrp5gce [ 1 ] ,
jdf3sumceh , & rtB . iam05r1gwg ) ; for ( i = 0 ; i < 12 ; i ++ ) { if ( rtB
. iam05r1gwg . lxe0n2dnxv [ i ] > f40yzytdn0 [ i + 6 ] ) { rtB . le5ehxvxar [
i + 6 ] = f40yzytdn0 [ i + 6 ] ; } else if ( rtB . iam05r1gwg . lxe0n2dnxv [
i ] < rtP . Constant_Value_gxbj4pvd0p ) { rtB . le5ehxvxar [ i + 6 ] = rtP .
Constant_Value_gxbj4pvd0p ; } else { rtB . le5ehxvxar [ i + 6 ] = rtB .
iam05r1gwg . lxe0n2dnxv [ i ] ; } } rtB . le5ehxvxar [ 18 ] = rtB .
enpvrp5gce [ 0 ] ; rtB . le5ehxvxar [ 19 ] = rtB . izvthfvymi [ 19 ] ; if (
rtB . le5ehxvxar [ 2 ] > rtP . Saturation2_UpperSat_lrpcekjaf4 ) {
hjpu2sw0us_idx_1 = rtP . Saturation2_UpperSat_lrpcekjaf4 ; } else if ( rtB .
le5ehxvxar [ 2 ] < rtP . Saturation2_LowerSat_jvlvahk0yh ) { hjpu2sw0us_idx_1
= rtP . Saturation2_LowerSat_jvlvahk0yh ; } else { hjpu2sw0us_idx_1 = rtB .
le5ehxvxar [ 2 ] ; } if ( rtB . le5ehxvxar [ 3 ] > rtP .
Saturation3_UpperSat_menlqkm12j ) { y_p = rtP .
Saturation3_UpperSat_menlqkm12j ; } else if ( rtB . le5ehxvxar [ 3 ] < rtP .
Saturation3_LowerSat_b0khprmwvj ) { y_p = rtP .
Saturation3_LowerSat_b0khprmwvj ; } else { y_p = rtB . le5ehxvxar [ 3 ] ; }
if ( rtB . le5ehxvxar [ 4 ] > rtP . Saturation6_UpperSat_az3cach0d2 ) { y_e =
rtP . Saturation6_UpperSat_az3cach0d2 ; } else if ( rtB . le5ehxvxar [ 4 ] <
rtP . Saturation6_LowerSat_mnhyzjhxr4 ) { y_e = rtP .
Saturation6_LowerSat_mnhyzjhxr4 ; } else { y_e = rtB . le5ehxvxar [ 4 ] ; }
if ( rtB . le5ehxvxar [ 5 ] > rtP . Saturation4_UpperSat_mste44m5l5 ) { y_i =
rtP . Saturation4_UpperSat_mste44m5l5 ; } else if ( rtB . le5ehxvxar [ 5 ] <
rtP . Saturation4_LowerSat_bwni0xl4ug ) { y_i = rtP .
Saturation4_LowerSat_bwni0xl4ug ; } else { y_i = rtB . le5ehxvxar [ 5 ] ; }
m04ebe1zz2 = plook_u32ff_lincpa ( ( real32_T ) y_e , rtP . dp_WING_root .
flap_defl , 4U , & f5qwewprly , & rtDW . nqbfiajmmx ) ; d2guuznk3s [ 0 ] =
rtB . pcrwxsalun [ 6 ] ; d2guuznk3s [ 1 ] = rtB . pcrwxsalun [ 5 ] ;
d2guuznk3s [ 2 ] = rtB . pcrwxsalun [ 4 ] ; d2guuznk3s [ 3 ] = rtB .
pcrwxsalun [ 3 ] ; d2guuznk3s [ 4 ] = rtB . pcrwxsalun [ 2 ] ; for ( iU = 0 ;
iU < 5 ; iU ++ ) { h0u2qqbsra [ iU ] = plook_u32ff_lincpa ( d2guuznk3s [ iU ]
, rtP . dp_WING_root . alphas , 24U , & kko0lbsvwo [ iU ] , & rtDW .
dxzhrvzosm [ iU ] ) ; } d2guuznk3s [ 0 ] = rtB . evhqkw31g3 [ 6 ] ;
d2guuznk3s [ 1 ] = rtB . evhqkw31g3 [ 5 ] ; d2guuznk3s [ 2 ] = rtB .
evhqkw31g3 [ 4 ] ; d2guuznk3s [ 3 ] = rtB . evhqkw31g3 [ 3 ] ; d2guuznk3s [ 4
] = rtB . evhqkw31g3 [ 2 ] ; for ( iU = 0 ; iU < 5 ; iU ++ ) { kugs2ta1qq [
iU ] = plook_u32ff_lincpa ( d2guuznk3s [ iU ] , rtP . dp_WING_root . V , 1U ,
& epaolvt0vm [ iU ] , & rtDW . f3x1iuxbls [ iU ] ) ; } parallel_for ( 12 ,
j4wzsijapu , 1 , "j4wzsijapu" ) ; for ( i = 0 ; i < 12 ; i ++ ) { prizw2ngzn
[ i ] = ( real32_T ) rtB . hlbelf1gro [ i ] ; } d2guuznk3s [ 0 ] = prizw2ngzn
[ 5 ] ; d2guuznk3s [ 1 ] = prizw2ngzn [ 4 ] ; d2guuznk3s [ 2 ] = prizw2ngzn [
3 ] ; d2guuznk3s [ 3 ] = prizw2ngzn [ 2 ] ; d2guuznk3s [ 4 ] = prizw2ngzn [ 1
] ; for ( iU = 0 ; iU < 5 ; iU ++ ) { okphy1ntzm [ iU ] = plook_u32ff_lincpa
( d2guuznk3s [ iU ] , rtP . dp_WING_root . DEP_J , 6U , & pdb2lmu2m2 [ iU ] ,
& rtDW . ew3v0ngbur [ iU ] ) ; } frac_j5 [ 0 ] = f5qwewprly ; bpIndex_j5 [ 0
] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ ) { frac_j5 [ 1 ] = kko0lbsvwo
[ iU ] ; frac_j5 [ 2 ] = epaolvt0vm [ iU ] ; frac_j5 [ 3 ] = pdb2lmu2m2 [ iU
] ; bpIndex_j5 [ 1 ] = h0u2qqbsra [ iU ] ; bpIndex_j5 [ 2 ] = kugs2ta1qq [ iU
] ; bpIndex_j5 [ 3 ] = okphy1ntzm [ iU ] ; if ( rtP .
Constant8_Value_hm25yxrb2c [ iU ] > 4.0 ) { bpIndex_j5 [ 4 ] = 4U ; } else {
bpIndex_j5 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_hm25yxrb2c [ iU ] , 0.0 ) ; } fg1vqqswik [ iU ] =
intrp4d_fu32fla_pw ( bpIndex_j5 , frac_j5 , & rtP . dp_WING_root . CD [ 1750U
* bpIndex_j5 [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_m3rz0exmgq
, rtP . InterpolationUsingPrelookup1_maxIndex_ezpa4sxsu0 ) ; } if ( rtB .
le5ehxvxar [ 0 ] > rtP . Saturation_UpperSat_jk04ej4xxs ) { g52k1xdouv_idx_1
= rtP . Saturation_UpperSat_jk04ej4xxs ; } else if ( rtB . le5ehxvxar [ 0 ] <
rtP . Saturation_LowerSat_jv15xf2rn1 ) { g52k1xdouv_idx_1 = rtP .
Saturation_LowerSat_jv15xf2rn1 ; } else { g52k1xdouv_idx_1 = rtB . le5ehxvxar
[ 0 ] ; } kiombdthr4 = plook_u32ff_lincpa ( ( real32_T ) g52k1xdouv_idx_1 ,
rtP . dp_WING_tip . ail_defl , 6U , & p5e3xkr1y0 , & rtDW . cauppzu2z3 ) ;
n5yhkyeg5n_idx_0 = plook_u32ff_lincpa ( rtB . pcrwxsalun [ 1 ] , rtP .
dp_WING_tip . alphas , 24U , & pqybaqddwg [ 0 ] , & rtDW . lbnvio5iis [ 0 ] )
; n5yhkyeg5n_idx_1 = plook_u32ff_lincpa ( rtB . pcrwxsalun [ 0 ] , rtP .
dp_WING_tip . alphas , 24U , & pqybaqddwg [ 1 ] , & rtDW . lbnvio5iis [ 1 ] )
; khukbzvgdj_idx_0 = plook_u32ff_lincpa ( rtB . evhqkw31g3 [ 1 ] , rtP .
dp_WING_tip . V , 1U , & furcgytxjj [ 0 ] , & rtDW . l0y0sibjp0 [ 0 ] ) ;
khukbzvgdj_idx_1 = plook_u32ff_lincpa ( rtB . evhqkw31g3 [ 0 ] , rtP .
dp_WING_tip . V , 1U , & furcgytxjj [ 1 ] , & rtDW . l0y0sibjp0 [ 1 ] ) ;
hcbpipseis_idx_0 = plook_u32ff_lincpa ( prizw2ngzn [ 1 ] , rtP . dp_WING_tip
. DEP_J , 6U , & i2s0r3le3k [ 0 ] , & rtDW . kd2av241hc [ 0 ] ) ;
hcbpipseis_idx_1 = plook_u32ff_lincpa ( prizw2ngzn [ 0 ] , rtP . dp_WING_tip
. DEP_J , 6U , & i2s0r3le3k [ 1 ] , & rtDW . kd2av241hc [ 1 ] ) ; frac_ej [ 0
] = p5e3xkr1y0 ; bpIndex_ej [ 0 ] = kiombdthr4 ; frac_ej [ 1 ] = pqybaqddwg [
0 ] ; frac_ej [ 2 ] = furcgytxjj [ 0 ] ; frac_ej [ 3 ] = i2s0r3le3k [ 0 ] ;
bpIndex_ej [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_ej [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_ej [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_fhnynnw31f [
0 ] > 1.0 ) { bpIndex_ej [ 4 ] = 1U ; } else { bpIndex_ej [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_fhnynnw31f [ 0 ] , 0.0 ) ; }
fg1vqqswik [ 5 ] = intrp4d_fu32fla_pw ( bpIndex_ej , frac_ej , & rtP .
dp_WING_tip . CD [ 2450U * bpIndex_ej [ 4 ] ] , rtP .
InterpolationUsingPrelookup1_dimSize_flayciloc3 , rtP .
InterpolationUsingPrelookup1_maxIndex_gn4ojksihn ) ; frac_ej [ 1 ] =
pqybaqddwg [ 1 ] ; frac_ej [ 2 ] = furcgytxjj [ 1 ] ; frac_ej [ 3 ] =
i2s0r3le3k [ 1 ] ; bpIndex_ej [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_ej [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_ej [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_fhnynnw31f [ 1 ] > 1.0 ) { bpIndex_ej [ 4 ] = 1U ; } else {
bpIndex_ej [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_fhnynnw31f [ 1 ] , 0.0 ) ; } fg1vqqswik [ 6 ] =
intrp4d_fu32fla_pw ( bpIndex_ej , frac_ej , & rtP . dp_WING_tip . CD [ 2450U
* bpIndex_ej [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_flayciloc3
, rtP . InterpolationUsingPrelookup1_maxIndex_gn4ojksihn ) ; frac_ep [ 0 ] =
f5qwewprly ; bpIndex_ep [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_ep [ 1 ] = kko0lbsvwo [ iU ] ; frac_ep [ 2 ] = epaolvt0vm [ iU ] ;
frac_ep [ 3 ] = pdb2lmu2m2 [ iU ] ; bpIndex_ep [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_ep [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_ep [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_hm25yxrb2c [ iU ] > 4.0 ) { bpIndex_ep [ 4 ] = 4U
; } else { bpIndex_ep [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_hm25yxrb2c [ iU ] , 0.0 ) ; } fg1vqqswik [ iU + 7 ] =
intrp4d_fu32fla_pw ( bpIndex_ep , frac_ep , & rtP . dp_WING_root . CS [ 1750U
* bpIndex_ep [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_jqhuhgsv2s
, rtP . InterpolationUsingPrelookup2_maxIndex_mczwp45ntw ) ; } frac_k4 [ 0 ]
= p5e3xkr1y0 ; bpIndex_k4 [ 0 ] = kiombdthr4 ; frac_k4 [ 1 ] = pqybaqddwg [ 0
] ; frac_k4 [ 2 ] = furcgytxjj [ 0 ] ; frac_k4 [ 3 ] = i2s0r3le3k [ 0 ] ;
bpIndex_k4 [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_k4 [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_k4 [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_fhnynnw31f [
0 ] > 1.0 ) { bpIndex_k4 [ 4 ] = 1U ; } else { bpIndex_k4 [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_fhnynnw31f [ 0 ] , 0.0 ) ; }
fg1vqqswik [ 12 ] = intrp4d_fu32fla_pw ( bpIndex_k4 , frac_k4 , & rtP .
dp_WING_tip . CS [ 2450U * bpIndex_k4 [ 4 ] ] , rtP .
InterpolationUsingPrelookup2_dimSize_krtnqirj3q , rtP .
InterpolationUsingPrelookup2_maxIndex_btbf5d1v0d ) ; frac_k4 [ 1 ] =
pqybaqddwg [ 1 ] ; frac_k4 [ 2 ] = furcgytxjj [ 1 ] ; frac_k4 [ 3 ] =
i2s0r3le3k [ 1 ] ; bpIndex_k4 [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_k4 [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_k4 [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_fhnynnw31f [ 1 ] > 1.0 ) { bpIndex_k4 [ 4 ] = 1U ; } else {
bpIndex_k4 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_fhnynnw31f [ 1 ] , 0.0 ) ; } fg1vqqswik [ 13 ] =
intrp4d_fu32fla_pw ( bpIndex_k4 , frac_k4 , & rtP . dp_WING_tip . CS [ 2450U
* bpIndex_k4 [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_krtnqirj3q
, rtP . InterpolationUsingPrelookup2_maxIndex_btbf5d1v0d ) ; frac_id [ 0 ] =
f5qwewprly ; bpIndex_id [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_id [ 1 ] = kko0lbsvwo [ iU ] ; frac_id [ 2 ] = epaolvt0vm [ iU ] ;
frac_id [ 3 ] = pdb2lmu2m2 [ iU ] ; bpIndex_id [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_id [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_id [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_hm25yxrb2c [ iU ] > 4.0 ) { bpIndex_id [ 4 ] = 4U
; } else { bpIndex_id [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_hm25yxrb2c [ iU ] , 0.0 ) ; } fg1vqqswik [ iU + 14 ] =
intrp4d_fu32fla_pw ( bpIndex_id , frac_id , & rtP . dp_WING_root . CL [ 1750U
* bpIndex_id [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_ivoxilqv3f
, rtP . InterpolationUsingPrelookup3_maxIndex_cootcuzh2d ) ; } frac_eh [ 0 ]
= p5e3xkr1y0 ; bpIndex_eh [ 0 ] = kiombdthr4 ; frac_eh [ 1 ] = pqybaqddwg [ 0
] ; frac_eh [ 2 ] = furcgytxjj [ 0 ] ; frac_eh [ 3 ] = i2s0r3le3k [ 0 ] ;
bpIndex_eh [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_eh [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_eh [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_fhnynnw31f [
0 ] > 1.0 ) { bpIndex_eh [ 4 ] = 1U ; } else { bpIndex_eh [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_fhnynnw31f [ 0 ] , 0.0 ) ; }
fg1vqqswik [ 19 ] = intrp4d_fu32fla_pw ( bpIndex_eh , frac_eh , & rtP .
dp_WING_tip . CL [ 2450U * bpIndex_eh [ 4 ] ] , rtP .
InterpolationUsingPrelookup3_dimSize_jxgdkw331w , rtP .
InterpolationUsingPrelookup3_maxIndex_pbqtozvwoz ) ; frac_eh [ 1 ] =
pqybaqddwg [ 1 ] ; frac_eh [ 2 ] = furcgytxjj [ 1 ] ; frac_eh [ 3 ] =
i2s0r3le3k [ 1 ] ; bpIndex_eh [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_eh [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_eh [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_fhnynnw31f [ 1 ] > 1.0 ) { bpIndex_eh [ 4 ] = 1U ; } else {
bpIndex_eh [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_fhnynnw31f [ 1 ] , 0.0 ) ; } fg1vqqswik [ 20 ] =
intrp4d_fu32fla_pw ( bpIndex_eh , frac_eh , & rtP . dp_WING_tip . CL [ 2450U
* bpIndex_eh [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_jxgdkw331w
, rtP . InterpolationUsingPrelookup3_maxIndex_pbqtozvwoz ) ; for ( i_p = 0 ;
i_p < 7 ; i_p ++ ) { rtB . dnlwiccdyx [ 3 * i_p ] = kta5xsgp3m [ 3 * i_p ] *
fg1vqqswik [ i_p ] * rtB . lhopa3gq4f * rtP . Gain_Gain_pbybcn50jr ; rtB .
dnlwiccdyx [ 3 * i_p + 1 ] = kta5xsgp3m [ 3 * i_p + 1 ] * fg1vqqswik [ i_p +
7 ] * rtB . lhopa3gq4f * rtP . Gain_Gain_pbybcn50jr ; rtB . dnlwiccdyx [ 3 *
i_p + 2 ] = kta5xsgp3m [ 3 * i_p + 2 ] * fg1vqqswik [ i_p + 14 ] * rtB .
lhopa3gq4f * rtP . Gain_Gain_pbybcn50jr ; } parallel_for ( 7 , fmrsksrnzz , 1
, "fmrsksrnzz" ) ; parallel_for ( 7 , avd00xkr3e , 1 , "avd00xkr3e" ) ;
frac_ly [ 0 ] = f5qwewprly ; bpIndex_ly [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ;
iU < 5 ; iU ++ ) { frac_ly [ 1 ] = kko0lbsvwo [ iU ] ; frac_ly [ 2 ] =
epaolvt0vm [ iU ] ; frac_ly [ 3 ] = pdb2lmu2m2 [ iU ] ; bpIndex_ly [ 1 ] =
h0u2qqbsra [ iU ] ; bpIndex_ly [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_ly [ 3 ] =
okphy1ntzm [ iU ] ; if ( rtP . Constant8_Value_hm25yxrb2c [ iU ] > 4.0 ) {
bpIndex_ly [ 4 ] = 4U ; } else { bpIndex_ly [ 4 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_hm25yxrb2c [ iU ] , 0.0 ) ; }
lfthidi5c0 [ iU ] = intrp4d_fu32fla_pw ( bpIndex_ly , frac_ly , & rtP .
dp_WING_root . CMx [ 1750U * bpIndex_ly [ 4 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_nr3wekmxjh , rtP .
InterpolationUsingPrelookup4_maxIndex_fboifxtwau ) ; } frac_ld [ 0 ] =
p5e3xkr1y0 ; bpIndex_ld [ 0 ] = kiombdthr4 ; frac_ld [ 1 ] = pqybaqddwg [ 0 ]
; frac_ld [ 2 ] = furcgytxjj [ 0 ] ; frac_ld [ 3 ] = i2s0r3le3k [ 0 ] ;
bpIndex_ld [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_ld [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_ld [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_fhnynnw31f [
0 ] > 1.0 ) { bpIndex_ld [ 4 ] = 1U ; } else { bpIndex_ld [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_fhnynnw31f [ 0 ] , 0.0 ) ; }
lfthidi5c0 [ 5 ] = intrp4d_fu32fla_pw ( bpIndex_ld , frac_ld , & rtP .
dp_WING_tip . CMx [ 2450U * bpIndex_ld [ 4 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_lm21mpdig4 , rtP .
InterpolationUsingPrelookup4_maxIndex_dalqonnlvt ) ; frac_ld [ 1 ] =
pqybaqddwg [ 1 ] ; frac_ld [ 2 ] = furcgytxjj [ 1 ] ; frac_ld [ 3 ] =
i2s0r3le3k [ 1 ] ; bpIndex_ld [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_ld [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_ld [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_fhnynnw31f [ 1 ] > 1.0 ) { bpIndex_ld [ 4 ] = 1U ; } else {
bpIndex_ld [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_fhnynnw31f [ 1 ] , 0.0 ) ; } lfthidi5c0 [ 6 ] =
intrp4d_fu32fla_pw ( bpIndex_ld , frac_ld , & rtP . dp_WING_tip . CMx [ 2450U
* bpIndex_ld [ 4 ] ] , rtP . InterpolationUsingPrelookup4_dimSize_lm21mpdig4
, rtP . InterpolationUsingPrelookup4_maxIndex_dalqonnlvt ) ; frac_lc [ 0 ] =
f5qwewprly ; bpIndex_lc [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_lc [ 1 ] = kko0lbsvwo [ iU ] ; frac_lc [ 2 ] = epaolvt0vm [ iU ] ;
frac_lc [ 3 ] = pdb2lmu2m2 [ iU ] ; bpIndex_lc [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_lc [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_lc [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_hm25yxrb2c [ iU ] > 4.0 ) { bpIndex_lc [ 4 ] = 4U
; } else { bpIndex_lc [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_hm25yxrb2c [ iU ] , 0.0 ) ; } lfthidi5c0 [ iU + 7 ] =
intrp4d_fu32fla_pw ( bpIndex_lc , frac_lc , & rtP . dp_WING_root . CMy [
1750U * bpIndex_lc [ 4 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_ae5xiqoqwy , rtP .
InterpolationUsingPrelookup5_maxIndex_pryjbwloyj ) ; } frac_i5 [ 0 ] =
p5e3xkr1y0 ; bpIndex_i5 [ 0 ] = kiombdthr4 ; frac_i5 [ 1 ] = pqybaqddwg [ 0 ]
; frac_i5 [ 2 ] = furcgytxjj [ 0 ] ; frac_i5 [ 3 ] = i2s0r3le3k [ 0 ] ;
bpIndex_i5 [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_i5 [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_i5 [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_fhnynnw31f [
0 ] > 1.0 ) { bpIndex_i5 [ 4 ] = 1U ; } else { bpIndex_i5 [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_fhnynnw31f [ 0 ] , 0.0 ) ; }
lfthidi5c0 [ 12 ] = intrp4d_fu32fla_pw ( bpIndex_i5 , frac_i5 , & rtP .
dp_WING_tip . CMy [ 2450U * bpIndex_i5 [ 4 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_dxv035320c , rtP .
InterpolationUsingPrelookup5_maxIndex_imu0lmonof ) ; frac_i5 [ 1 ] =
pqybaqddwg [ 1 ] ; frac_i5 [ 2 ] = furcgytxjj [ 1 ] ; frac_i5 [ 3 ] =
i2s0r3le3k [ 1 ] ; bpIndex_i5 [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_i5 [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_i5 [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_fhnynnw31f [ 1 ] > 1.0 ) { bpIndex_i5 [ 4 ] = 1U ; } else {
bpIndex_i5 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_fhnynnw31f [ 1 ] , 0.0 ) ; } lfthidi5c0 [ 13 ] =
intrp4d_fu32fla_pw ( bpIndex_i5 , frac_i5 , & rtP . dp_WING_tip . CMy [ 2450U
* bpIndex_i5 [ 4 ] ] , rtP . InterpolationUsingPrelookup5_dimSize_dxv035320c
, rtP . InterpolationUsingPrelookup5_maxIndex_imu0lmonof ) ; frac_e2 [ 0 ] =
f5qwewprly ; bpIndex_e2 [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_e2 [ 1 ] = kko0lbsvwo [ iU ] ; frac_e2 [ 2 ] = epaolvt0vm [ iU ] ;
frac_e2 [ 3 ] = pdb2lmu2m2 [ iU ] ; bpIndex_e2 [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_e2 [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_e2 [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_hm25yxrb2c [ iU ] > 4.0 ) { bpIndex_e2 [ 4 ] = 4U
; } else { bpIndex_e2 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_hm25yxrb2c [ iU ] , 0.0 ) ; } lfthidi5c0 [ iU + 14 ] =
intrp4d_fu32fla_pw ( bpIndex_e2 , frac_e2 , & rtP . dp_WING_root . CMz [
1750U * bpIndex_e2 [ 4 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_hptwqla15t , rtP .
InterpolationUsingPrelookup6_maxIndex_i0uunzq1ok ) ; } frac_lo [ 0 ] =
p5e3xkr1y0 ; bpIndex_lo [ 0 ] = kiombdthr4 ; frac_lo [ 1 ] = pqybaqddwg [ 0 ]
; frac_lo [ 2 ] = furcgytxjj [ 0 ] ; frac_lo [ 3 ] = i2s0r3le3k [ 0 ] ;
bpIndex_lo [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_lo [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_lo [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_fhnynnw31f [
0 ] > 1.0 ) { bpIndex_lo [ 4 ] = 1U ; } else { bpIndex_lo [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_fhnynnw31f [ 0 ] , 0.0 ) ; }
lfthidi5c0 [ 19 ] = intrp4d_fu32fla_pw ( bpIndex_lo , frac_lo , & rtP .
dp_WING_tip . CMz [ 2450U * bpIndex_lo [ 4 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_kyg3eyhvtz , rtP .
InterpolationUsingPrelookup6_maxIndex_pvkynt4mob ) ; frac_lo [ 1 ] =
pqybaqddwg [ 1 ] ; frac_lo [ 2 ] = furcgytxjj [ 1 ] ; frac_lo [ 3 ] =
i2s0r3le3k [ 1 ] ; bpIndex_lo [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_lo [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_lo [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_fhnynnw31f [ 1 ] > 1.0 ) { bpIndex_lo [ 4 ] = 1U ; } else {
bpIndex_lo [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_fhnynnw31f [ 1 ] , 0.0 ) ; } lfthidi5c0 [ 20 ] =
intrp4d_fu32fla_pw ( bpIndex_lo , frac_lo , & rtP . dp_WING_tip . CMz [ 2450U
* bpIndex_lo [ 4 ] ] , rtP . InterpolationUsingPrelookup6_dimSize_kyg3eyhvtz
, rtP . InterpolationUsingPrelookup6_maxIndex_pvkynt4mob ) ; cwdb3qacqr = rtP
. S / 2.0 ; for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { dq25kgk52k [ 3 * i_p ] =
kta5xsgp3m [ 3 * i_p ] * lfthidi5c0 [ i_p ] * rtP . Constant_Value_j32eah5sr4
[ 3 * i_p ] * rtB . lhopa3gq4f * cwdb3qacqr + rtB . gniuf51ho0u [ 3 * i_p ] ;
dq25kgk52k [ 3 * i_p + 1 ] = kta5xsgp3m [ 3 * i_p + 1 ] * lfthidi5c0 [ i_p +
7 ] * rtP . Constant_Value_j32eah5sr4 [ 3 * i_p + 1 ] * rtB . lhopa3gq4f *
cwdb3qacqr + rtB . gniuf51ho0u [ 3 * i_p + 1 ] ; dq25kgk52k [ 3 * i_p + 2 ] =
kta5xsgp3m [ 3 * i_p + 2 ] * lfthidi5c0 [ i_p + 14 ] * rtP .
Constant_Value_j32eah5sr4 [ 3 * i_p + 2 ] * rtB . lhopa3gq4f * cwdb3qacqr +
rtB . gniuf51ho0u [ 3 * i_p + 2 ] ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) {
cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e < 7 ; i_e ++ ) { cwdb3qacqr +=
dq25kgk52k [ i_e * 3 + i_p ] ; } p4xbdqn5oc [ i_p ] = cwdb3qacqr ; }
bdvkktmal5_idx_0 = ( real32_T ) p4xbdqn5oc [ 0 ] ; bdvkktmal5_idx_1 = (
real32_T ) p4xbdqn5oc [ 1 ] ; bdvkktmal5_idx_2 = ( real32_T ) p4xbdqn5oc [ 2
] ; for ( i = 0 ; i < 7 ; i ++ ) { oqeykbiv2k [ i ] = rtB . evhqkw31g3 [ i +
7 ] ; oqeykbiv2k [ i + 7 ] = rtB . evhqkw31g3 [ i + 7 ] ; oqeykbiv2k [ i + 14
] = rtB . evhqkw31g3 [ i + 7 ] ; liydxvyvbx [ 3 * i ] = oqeykbiv2k [ i ] ;
liydxvyvbx [ 3 * i + 1 ] = oqeykbiv2k [ i + 7 ] ; liydxvyvbx [ 3 * i + 2 ] =
oqeykbiv2k [ i + 14 ] ; } for ( i = 0 ; i < 21 ; i ++ ) { cq2trmp0xn_idx_0 =
liydxvyvbx [ i ] ; kta5xsgp3m [ i ] = cq2trmp0xn_idx_0 * cq2trmp0xn_idx_0 ; }
m04ebe1zz2 = plook_u32ff_lincpa ( ( real32_T ) y_i , rtP . dp_WING_root .
flap_defl , 4U , & f5qwewprly , & rtDW . lznod44who ) ; for ( iU = 0 ; iU < 5
; iU ++ ) { h0u2qqbsra [ iU ] = plook_u32ff_lincpa ( rtB . pcrwxsalun [ iU +
7 ] , rtP . dp_WING_root . alphas , 24U , & d2guuznk3s [ iU ] , & rtDW .
d5s5scu00d [ iU ] ) ; } for ( iU = 0 ; iU < 5 ; iU ++ ) { kugs2ta1qq [ iU ] =
plook_u32ff_lincpa ( rtB . evhqkw31g3 [ iU + 7 ] , rtP . dp_WING_root . V ,
1U , & kko0lbsvwo [ iU ] , & rtDW . ne2n02ii3u [ iU ] ) ; } for ( iU = 0 ; iU
< 5 ; iU ++ ) { okphy1ntzm [ iU ] = plook_u32ff_lincpa ( prizw2ngzn [ iU + 6
] , rtP . dp_WING_root . DEP_J , 6U , & epaolvt0vm [ iU ] , & rtDW .
fzyukbgm1g [ iU ] ) ; } frac_eu [ 0 ] = f5qwewprly ; bpIndex_eu [ 0 ] =
m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ ) { frac_eu [ 1 ] = d2guuznk3s [
iU ] ; frac_eu [ 2 ] = kko0lbsvwo [ iU ] ; frac_eu [ 3 ] = epaolvt0vm [ iU ]
; bpIndex_eu [ 1 ] = h0u2qqbsra [ iU ] ; bpIndex_eu [ 2 ] = kugs2ta1qq [ iU ]
; bpIndex_eu [ 3 ] = okphy1ntzm [ iU ] ; if ( rtP .
Constant8_Value_db4ran3g2w [ iU ] > 4.0 ) { bpIndex_eu [ 4 ] = 4U ; } else {
bpIndex_eu [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_db4ran3g2w [ iU ] , 0.0 ) ; } k35pxeh0mi [ iU ] =
intrp4d_fu32fla_pw ( bpIndex_eu , frac_eu , & rtP . dp_WING_root . CD [ 1750U
* bpIndex_eu [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_fre0i4jndv
, rtP . InterpolationUsingPrelookup1_maxIndex_epnnzbk3gp ) ; } if ( rtB .
le5ehxvxar [ 1 ] > rtP . Saturation1_UpperSat_hv5no1ifno ) { g52k1xdouv_idx_1
= rtP . Saturation1_UpperSat_hv5no1ifno ; } else if ( rtB . le5ehxvxar [ 1 ]
< rtP . Saturation1_LowerSat_ppruoe4m1e ) { g52k1xdouv_idx_1 = rtP .
Saturation1_LowerSat_ppruoe4m1e ; } else { g52k1xdouv_idx_1 = rtB .
le5ehxvxar [ 1 ] ; } kiombdthr4 = plook_u32ff_lincpa ( ( real32_T )
g52k1xdouv_idx_1 , rtP . dp_WING_tip . ail_defl , 6U , & p5e3xkr1y0 , & rtDW
. eism1mkbhp ) ; n5yhkyeg5n_idx_0 = plook_u32ff_lincpa ( rtB . pcrwxsalun [
12 ] , rtP . dp_WING_tip . alphas , 24U , & mr0w2gp23k [ 0 ] , & rtDW .
cy0fp04shv [ 0 ] ) ; n5yhkyeg5n_idx_1 = plook_u32ff_lincpa ( rtB . pcrwxsalun
[ 13 ] , rtP . dp_WING_tip . alphas , 24U , & mr0w2gp23k [ 1 ] , & rtDW .
cy0fp04shv [ 1 ] ) ; khukbzvgdj_idx_0 = plook_u32ff_lincpa ( rtB . evhqkw31g3
[ 12 ] , rtP . dp_WING_tip . V , 1U , & bunb5souut [ 0 ] , & rtDW .
ibavnqjmbw [ 0 ] ) ; khukbzvgdj_idx_1 = plook_u32ff_lincpa ( rtB . evhqkw31g3
[ 13 ] , rtP . dp_WING_tip . V , 1U , & bunb5souut [ 1 ] , & rtDW .
ibavnqjmbw [ 1 ] ) ; hcbpipseis_idx_0 = plook_u32ff_lincpa ( prizw2ngzn [ 10
] , rtP . dp_WING_tip . DEP_J , 6U , & lah51nh4mc [ 0 ] , & rtDW . lekr1dkbkg
[ 0 ] ) ; hcbpipseis_idx_1 = plook_u32ff_lincpa ( prizw2ngzn [ 11 ] , rtP .
dp_WING_tip . DEP_J , 6U , & lah51nh4mc [ 1 ] , & rtDW . lekr1dkbkg [ 1 ] ) ;
frac_ms [ 0 ] = p5e3xkr1y0 ; bpIndex_ms [ 0 ] = kiombdthr4 ; frac_ms [ 1 ] =
mr0w2gp23k [ 0 ] ; frac_ms [ 2 ] = bunb5souut [ 0 ] ; frac_ms [ 3 ] =
lah51nh4mc [ 0 ] ; bpIndex_ms [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_ms [ 2 ] =
khukbzvgdj_idx_0 ; bpIndex_ms [ 3 ] = hcbpipseis_idx_0 ; if ( rtP .
Constant8_Value_pipw2cftaa [ 0 ] > 1.0 ) { bpIndex_ms [ 4 ] = 1U ; } else {
bpIndex_ms [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_pipw2cftaa [ 0 ] , 0.0 ) ; } k35pxeh0mi [ 5 ] =
intrp4d_fu32fla_pw ( bpIndex_ms , frac_ms , & rtP . dp_WING_tip . CD [ 2450U
* bpIndex_ms [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_gwwssrec2o
, rtP . InterpolationUsingPrelookup1_maxIndex_ondmlwzc1q ) ; frac_ms [ 1 ] =
mr0w2gp23k [ 1 ] ; frac_ms [ 2 ] = bunb5souut [ 1 ] ; frac_ms [ 3 ] =
lah51nh4mc [ 1 ] ; bpIndex_ms [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_ms [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_ms [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_pipw2cftaa [ 1 ] > 1.0 ) { bpIndex_ms [ 4 ] = 1U ; } else {
bpIndex_ms [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_pipw2cftaa [ 1 ] , 0.0 ) ; } k35pxeh0mi [ 6 ] =
intrp4d_fu32fla_pw ( bpIndex_ms , frac_ms , & rtP . dp_WING_tip . CD [ 2450U
* bpIndex_ms [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_gwwssrec2o
, rtP . InterpolationUsingPrelookup1_maxIndex_ondmlwzc1q ) ; frac_fg [ 0 ] =
f5qwewprly ; bpIndex_fg [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_fg [ 1 ] = d2guuznk3s [ iU ] ; frac_fg [ 2 ] = kko0lbsvwo [ iU ] ;
frac_fg [ 3 ] = epaolvt0vm [ iU ] ; bpIndex_fg [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_fg [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_fg [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_db4ran3g2w [ iU ] > 4.0 ) { bpIndex_fg [ 4 ] = 4U
; } else { bpIndex_fg [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_db4ran3g2w [ iU ] , 0.0 ) ; } k35pxeh0mi [ iU + 7 ] =
intrp4d_fu32fla_pw ( bpIndex_fg , frac_fg , & rtP . dp_WING_root . CS [ 1750U
* bpIndex_fg [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_lij2kqzbu0
, rtP . InterpolationUsingPrelookup2_maxIndex_nwqzjt1dsc ) ; } frac_mj [ 0 ]
= p5e3xkr1y0 ; bpIndex_mj [ 0 ] = kiombdthr4 ; frac_mj [ 1 ] = mr0w2gp23k [ 0
] ; frac_mj [ 2 ] = bunb5souut [ 0 ] ; frac_mj [ 3 ] = lah51nh4mc [ 0 ] ;
bpIndex_mj [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_mj [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_mj [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_pipw2cftaa [
0 ] > 1.0 ) { bpIndex_mj [ 4 ] = 1U ; } else { bpIndex_mj [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_pipw2cftaa [ 0 ] , 0.0 ) ; }
k35pxeh0mi [ 12 ] = intrp4d_fu32fla_pw ( bpIndex_mj , frac_mj , & rtP .
dp_WING_tip . CS [ 2450U * bpIndex_mj [ 4 ] ] , rtP .
InterpolationUsingPrelookup2_dimSize_imfyvnplv5 , rtP .
InterpolationUsingPrelookup2_maxIndex_ih5w2jocfi ) ; frac_mj [ 1 ] =
mr0w2gp23k [ 1 ] ; frac_mj [ 2 ] = bunb5souut [ 1 ] ; frac_mj [ 3 ] =
lah51nh4mc [ 1 ] ; bpIndex_mj [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_mj [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_mj [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_pipw2cftaa [ 1 ] > 1.0 ) { bpIndex_mj [ 4 ] = 1U ; } else {
bpIndex_mj [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_pipw2cftaa [ 1 ] , 0.0 ) ; } k35pxeh0mi [ 13 ] =
intrp4d_fu32fla_pw ( bpIndex_mj , frac_mj , & rtP . dp_WING_tip . CS [ 2450U
* bpIndex_mj [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_imfyvnplv5
, rtP . InterpolationUsingPrelookup2_maxIndex_ih5w2jocfi ) ; frac_k0 [ 0 ] =
f5qwewprly ; bpIndex_k0 [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_k0 [ 1 ] = d2guuznk3s [ iU ] ; frac_k0 [ 2 ] = kko0lbsvwo [ iU ] ;
frac_k0 [ 3 ] = epaolvt0vm [ iU ] ; bpIndex_k0 [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_k0 [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_k0 [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_db4ran3g2w [ iU ] > 4.0 ) { bpIndex_k0 [ 4 ] = 4U
; } else { bpIndex_k0 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_db4ran3g2w [ iU ] , 0.0 ) ; } k35pxeh0mi [ iU + 14 ] =
intrp4d_fu32fla_pw ( bpIndex_k0 , frac_k0 , & rtP . dp_WING_root . CL [ 1750U
* bpIndex_k0 [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_kfnusjetj4
, rtP . InterpolationUsingPrelookup3_maxIndex_nd3rzmhdpr ) ; } frac_bu [ 0 ]
= p5e3xkr1y0 ; bpIndex_bu [ 0 ] = kiombdthr4 ; frac_bu [ 1 ] = mr0w2gp23k [ 0
] ; frac_bu [ 2 ] = bunb5souut [ 0 ] ; frac_bu [ 3 ] = lah51nh4mc [ 0 ] ;
bpIndex_bu [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_bu [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_bu [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_pipw2cftaa [
0 ] > 1.0 ) { bpIndex_bu [ 4 ] = 1U ; } else { bpIndex_bu [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_pipw2cftaa [ 0 ] , 0.0 ) ; }
k35pxeh0mi [ 19 ] = intrp4d_fu32fla_pw ( bpIndex_bu , frac_bu , & rtP .
dp_WING_tip . CL [ 2450U * bpIndex_bu [ 4 ] ] , rtP .
InterpolationUsingPrelookup3_dimSize_huu4ci4hzq , rtP .
InterpolationUsingPrelookup3_maxIndex_k1tgpttx2u ) ; frac_bu [ 1 ] =
mr0w2gp23k [ 1 ] ; frac_bu [ 2 ] = bunb5souut [ 1 ] ; frac_bu [ 3 ] =
lah51nh4mc [ 1 ] ; bpIndex_bu [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_bu [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_bu [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_pipw2cftaa [ 1 ] > 1.0 ) { bpIndex_bu [ 4 ] = 1U ; } else {
bpIndex_bu [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_pipw2cftaa [ 1 ] , 0.0 ) ; } k35pxeh0mi [ 20 ] =
intrp4d_fu32fla_pw ( bpIndex_bu , frac_bu , & rtP . dp_WING_tip . CL [ 2450U
* bpIndex_bu [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_huu4ci4hzq
, rtP . InterpolationUsingPrelookup3_maxIndex_k1tgpttx2u ) ; for ( i_p = 0 ;
i_p < 7 ; i_p ++ ) { rtB . havkhumthp [ 3 * i_p ] = kta5xsgp3m [ 3 * i_p ] *
k35pxeh0mi [ i_p ] * rtB . lhopa3gq4f * rtP . Gain_Gain_kmy5kaeqdk ; rtB .
havkhumthp [ 3 * i_p + 1 ] = kta5xsgp3m [ 3 * i_p + 1 ] * k35pxeh0mi [ i_p +
7 ] * rtB . lhopa3gq4f * rtP . Gain_Gain_kmy5kaeqdk ; rtB . havkhumthp [ 3 *
i_p + 2 ] = kta5xsgp3m [ 3 * i_p + 2 ] * k35pxeh0mi [ i_p + 14 ] * rtB .
lhopa3gq4f * rtP . Gain_Gain_kmy5kaeqdk ; } parallel_for ( 7 , hkavxjjm4m , 1
, "hkavxjjm4m" ) ; parallel_for ( 7 , eezkdrz3yw , 1 , "eezkdrz3yw" ) ;
frac_hc [ 0 ] = f5qwewprly ; bpIndex_hc [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ;
iU < 5 ; iU ++ ) { frac_hc [ 1 ] = d2guuznk3s [ iU ] ; frac_hc [ 2 ] =
kko0lbsvwo [ iU ] ; frac_hc [ 3 ] = epaolvt0vm [ iU ] ; bpIndex_hc [ 1 ] =
h0u2qqbsra [ iU ] ; bpIndex_hc [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_hc [ 3 ] =
okphy1ntzm [ iU ] ; if ( rtP . Constant8_Value_db4ran3g2w [ iU ] > 4.0 ) {
bpIndex_hc [ 4 ] = 4U ; } else { bpIndex_hc [ 4 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_db4ran3g2w [ iU ] , 0.0 ) ; }
fjztecg33x [ iU ] = intrp4d_fu32fla_pw ( bpIndex_hc , frac_hc , & rtP .
dp_WING_root . CMx [ 1750U * bpIndex_hc [ 4 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_a3p0qyovfc , rtP .
InterpolationUsingPrelookup4_maxIndex_mwhf11frpy ) ; } frac_h2 [ 0 ] =
p5e3xkr1y0 ; bpIndex_h2 [ 0 ] = kiombdthr4 ; frac_h2 [ 1 ] = mr0w2gp23k [ 0 ]
; frac_h2 [ 2 ] = bunb5souut [ 0 ] ; frac_h2 [ 3 ] = lah51nh4mc [ 0 ] ;
bpIndex_h2 [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_h2 [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_h2 [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_pipw2cftaa [
0 ] > 1.0 ) { bpIndex_h2 [ 4 ] = 1U ; } else { bpIndex_h2 [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_pipw2cftaa [ 0 ] , 0.0 ) ; }
fjztecg33x [ 5 ] = intrp4d_fu32fla_pw ( bpIndex_h2 , frac_h2 , & rtP .
dp_WING_tip . CMx [ 2450U * bpIndex_h2 [ 4 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_g0tuksftqm , rtP .
InterpolationUsingPrelookup4_maxIndex_gfq25ddmll ) ; frac_h2 [ 1 ] =
mr0w2gp23k [ 1 ] ; frac_h2 [ 2 ] = bunb5souut [ 1 ] ; frac_h2 [ 3 ] =
lah51nh4mc [ 1 ] ; bpIndex_h2 [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_h2 [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_h2 [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_pipw2cftaa [ 1 ] > 1.0 ) { bpIndex_h2 [ 4 ] = 1U ; } else {
bpIndex_h2 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_pipw2cftaa [ 1 ] , 0.0 ) ; } fjztecg33x [ 6 ] =
intrp4d_fu32fla_pw ( bpIndex_h2 , frac_h2 , & rtP . dp_WING_tip . CMx [ 2450U
* bpIndex_h2 [ 4 ] ] , rtP . InterpolationUsingPrelookup4_dimSize_g0tuksftqm
, rtP . InterpolationUsingPrelookup4_maxIndex_gfq25ddmll ) ; frac_hl [ 0 ] =
f5qwewprly ; bpIndex_hl [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_hl [ 1 ] = d2guuznk3s [ iU ] ; frac_hl [ 2 ] = kko0lbsvwo [ iU ] ;
frac_hl [ 3 ] = epaolvt0vm [ iU ] ; bpIndex_hl [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_hl [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_hl [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_db4ran3g2w [ iU ] > 4.0 ) { bpIndex_hl [ 4 ] = 4U
; } else { bpIndex_hl [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_db4ran3g2w [ iU ] , 0.0 ) ; } fjztecg33x [ iU + 7 ] =
intrp4d_fu32fla_pw ( bpIndex_hl , frac_hl , & rtP . dp_WING_root . CMy [
1750U * bpIndex_hl [ 4 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_pmbxxmafiu , rtP .
InterpolationUsingPrelookup5_maxIndex_cbugmdfj3u ) ; } frac_pz [ 0 ] =
p5e3xkr1y0 ; bpIndex_pz [ 0 ] = kiombdthr4 ; frac_pz [ 1 ] = mr0w2gp23k [ 0 ]
; frac_pz [ 2 ] = bunb5souut [ 0 ] ; frac_pz [ 3 ] = lah51nh4mc [ 0 ] ;
bpIndex_pz [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_pz [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_pz [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_pipw2cftaa [
0 ] > 1.0 ) { bpIndex_pz [ 4 ] = 1U ; } else { bpIndex_pz [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_pipw2cftaa [ 0 ] , 0.0 ) ; }
fjztecg33x [ 12 ] = intrp4d_fu32fla_pw ( bpIndex_pz , frac_pz , & rtP .
dp_WING_tip . CMy [ 2450U * bpIndex_pz [ 4 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_kcy3bxibtx , rtP .
InterpolationUsingPrelookup5_maxIndex_osvl2yeigv ) ; frac_pz [ 1 ] =
mr0w2gp23k [ 1 ] ; frac_pz [ 2 ] = bunb5souut [ 1 ] ; frac_pz [ 3 ] =
lah51nh4mc [ 1 ] ; bpIndex_pz [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_pz [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_pz [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_pipw2cftaa [ 1 ] > 1.0 ) { bpIndex_pz [ 4 ] = 1U ; } else {
bpIndex_pz [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_pipw2cftaa [ 1 ] , 0.0 ) ; } fjztecg33x [ 13 ] =
intrp4d_fu32fla_pw ( bpIndex_pz , frac_pz , & rtP . dp_WING_tip . CMy [ 2450U
* bpIndex_pz [ 4 ] ] , rtP . InterpolationUsingPrelookup5_dimSize_kcy3bxibtx
, rtP . InterpolationUsingPrelookup5_maxIndex_osvl2yeigv ) ; frac_dp [ 0 ] =
f5qwewprly ; bpIndex_dp [ 0 ] = m04ebe1zz2 ; for ( iU = 0 ; iU < 5 ; iU ++ )
{ frac_dp [ 1 ] = d2guuznk3s [ iU ] ; frac_dp [ 2 ] = kko0lbsvwo [ iU ] ;
frac_dp [ 3 ] = epaolvt0vm [ iU ] ; bpIndex_dp [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_dp [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_dp [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_db4ran3g2w [ iU ] > 4.0 ) { bpIndex_dp [ 4 ] = 4U
; } else { bpIndex_dp [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_db4ran3g2w [ iU ] , 0.0 ) ; } fjztecg33x [ iU + 14 ] =
intrp4d_fu32fla_pw ( bpIndex_dp , frac_dp , & rtP . dp_WING_root . CMz [
1750U * bpIndex_dp [ 4 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_gshycobmic , rtP .
InterpolationUsingPrelookup6_maxIndex_haabzays25 ) ; } frac_k3 [ 0 ] =
p5e3xkr1y0 ; bpIndex_k3 [ 0 ] = kiombdthr4 ; frac_k3 [ 1 ] = mr0w2gp23k [ 0 ]
; frac_k3 [ 2 ] = bunb5souut [ 0 ] ; frac_k3 [ 3 ] = lah51nh4mc [ 0 ] ;
bpIndex_k3 [ 1 ] = n5yhkyeg5n_idx_0 ; bpIndex_k3 [ 2 ] = khukbzvgdj_idx_0 ;
bpIndex_k3 [ 3 ] = hcbpipseis_idx_0 ; if ( rtP . Constant8_Value_pipw2cftaa [
0 ] > 1.0 ) { bpIndex_k3 [ 4 ] = 1U ; } else { bpIndex_k3 [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_pipw2cftaa [ 0 ] , 0.0 ) ; }
fjztecg33x [ 19 ] = intrp4d_fu32fla_pw ( bpIndex_k3 , frac_k3 , & rtP .
dp_WING_tip . CMz [ 2450U * bpIndex_k3 [ 4 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_aldvytslxw , rtP .
InterpolationUsingPrelookup6_maxIndex_j0bjlidrbu ) ; frac_k3 [ 1 ] =
mr0w2gp23k [ 1 ] ; frac_k3 [ 2 ] = bunb5souut [ 1 ] ; frac_k3 [ 3 ] =
lah51nh4mc [ 1 ] ; bpIndex_k3 [ 1 ] = n5yhkyeg5n_idx_1 ; bpIndex_k3 [ 2 ] =
khukbzvgdj_idx_1 ; bpIndex_k3 [ 3 ] = hcbpipseis_idx_1 ; if ( rtP .
Constant8_Value_pipw2cftaa [ 1 ] > 1.0 ) { bpIndex_k3 [ 4 ] = 1U ; } else {
bpIndex_k3 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_pipw2cftaa [ 1 ] , 0.0 ) ; } fjztecg33x [ 20 ] =
intrp4d_fu32fla_pw ( bpIndex_k3 , frac_k3 , & rtP . dp_WING_tip . CMz [ 2450U
* bpIndex_k3 [ 4 ] ] , rtP . InterpolationUsingPrelookup6_dimSize_aldvytslxw
, rtP . InterpolationUsingPrelookup6_maxIndex_j0bjlidrbu ) ; cwdb3qacqr = rtP
. S / 2.0 ; for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { dq25kgk52k [ 3 * i_p ] =
kta5xsgp3m [ 3 * i_p ] * fjztecg33x [ i_p ] * rtP . Constant_Value_ckajhgftgd
[ 3 * i_p ] * rtB . lhopa3gq4f * cwdb3qacqr + rtB . gniuf51ho0 [ 3 * i_p ] ;
dq25kgk52k [ 3 * i_p + 1 ] = kta5xsgp3m [ 3 * i_p + 1 ] * fjztecg33x [ i_p +
7 ] * rtP . Constant_Value_ckajhgftgd [ 3 * i_p + 1 ] * rtB . lhopa3gq4f *
cwdb3qacqr + rtB . gniuf51ho0 [ 3 * i_p + 1 ] ; dq25kgk52k [ 3 * i_p + 2 ] =
kta5xsgp3m [ 3 * i_p + 2 ] * fjztecg33x [ i_p + 14 ] * rtP .
Constant_Value_ckajhgftgd [ 3 * i_p + 2 ] * rtB . lhopa3gq4f * cwdb3qacqr +
rtB . gniuf51ho0 [ 3 * i_p + 2 ] ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) {
cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e < 7 ; i_e ++ ) { cwdb3qacqr +=
dq25kgk52k [ i_e * 3 + i_p ] ; } p4xbdqn5oc [ i_p ] = cwdb3qacqr ; }
cq2trmp0xn_idx_0 = ( real32_T ) p4xbdqn5oc [ 0 ] ; cq2trmp0xn_idx_1 = (
real32_T ) p4xbdqn5oc [ 1 ] ; cq2trmp0xn_idx_2 = ( real32_T ) p4xbdqn5oc [ 2
] ; for ( i = 0 ; i <= 6 ; i += 2 ) { _mm_storeu_pd ( & lqbwr5bl13 [ i ] ,
_mm_mul_pd ( _mm_loadu_pd ( & rtP . Constant_Value_cyypbfhxbt [ i ] ) ,
_mm_set1_pd ( ( real32_T ) y_e ) ) ) ; _mm_storeu_pd ( & lqbwr5bl13 [ i + 8 ]
, _mm_mul_pd ( _mm_loadu_pd ( & rtP . Constant1_Value_idktkz3xu2 [ i ] ) ,
_mm_set1_pd ( ( real32_T ) y_i ) ) ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) {
f2e5fcgb3v [ iU ] = plook_linxp ( lqbwr5bl13 [ iU ] , lyv0niej1z , 4U , &
irfwaeofjb [ iU ] , & rtDW . dbvpgm1eii [ iU ] ) ; } for ( iU = 0 ; iU < 16 ;
iU ++ ) { h5rdtgmjbr [ iU ] = look1_iflf_pbinlcpw ( rtP .
Constant7_Value_cqbz1hurfz [ iU ] , rtP . uDLookupTable_bp01Data_hz0jyoampa ,
& rtB . pcrwxsalun [ 4 ] , & rtDW . iysyxlklep [ iU ] , 5U ) ; } for ( iU = 0
; iU < 16 ; iU ++ ) { asvvjqwjnk [ iU ] = plook_u32ff_linxp ( h5rdtgmjbr [ iU
] , rtP . dp_VTAIL_INDUCED . alphas , 24U , & bqkagafcws [ iU ] , & rtDW .
hrfauuwygv [ iU ] ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { h5rdtgmjbr [ iU ]
= look1_iflf_pbinlcpw ( rtP . Constant7_Value_cqbz1hurfz [ iU ] , rtP .
uDLookupTable1_bp01Data_b0g3rgtizf , & rtB . evhqkw31g3 [ 4 ] , & rtDW .
dxyyfd5j1h [ iU ] , 5U ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { ayy24n2qrl [
iU ] = plook_u32ff_linxp ( h5rdtgmjbr [ iU ] , rtP . dp_VTAIL_INDUCED .
V_infs , 1U , & biece21jwb [ iU ] , & rtDW . cbvbkjurbn [ iU ] ) ; } for ( iU
= 0 ; iU < 16 ; iU ++ ) { h5rdtgmjbr [ iU ] = look1_iflf_pbinlcpw ( rtP .
Constant7_Value_cqbz1hurfz [ iU ] , rtP . uDLookupTable2_bp01Data_debf0xr1zc
, & prizw2ngzn [ 3 ] , & rtDW . bv303cgicw [ iU ] , 5U ) ; } for ( iU = 0 ;
iU < 16 ; iU ++ ) { gm4p0rdh2f [ iU ] = plook_u32ff_lincp ( h5rdtgmjbr [ iU ]
, rtP . dp_VTAIL_INDUCED . DEP_J , 6U , & l0zhodiblx [ iU ] , & rtDW .
grbvdxyxvz [ iU ] ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { frac_cv [ 0 ] =
irfwaeofjb [ iU ] ; frac_cv [ 1 ] = bqkagafcws [ iU ] ; frac_cv [ 2 ] =
biece21jwb [ iU ] ; frac_cv [ 3 ] = l0zhodiblx [ iU ] ; bpIndex_cv [ 0 ] =
f2e5fcgb3v [ iU ] ; bpIndex_cv [ 1 ] = asvvjqwjnk [ iU ] ; bpIndex_cv [ 2 ] =
ayy24n2qrl [ iU ] ; bpIndex_cv [ 3 ] = gm4p0rdh2f [ iU ] ; if ( rtP .
Constant8_Value_ifpw1hiprw [ iU ] > 15.0 ) { bpIndex_cv [ 4 ] = 15U ; } else
{ bpIndex_cv [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ifpw1hiprw [ iU ] , 0.0 ) ; } h5rdtgmjbr [ iU ] =
intrp4d_fl_pw ( bpIndex_cv , frac_cv , & rtP . dp_VTAIL_INDUCED . V_induced [
1750U * bpIndex_cv [ 4 ] ] , rtP . V_induced_dimSize_kivppbpxe5 ) ; }
parallel_for ( 16 , bvcrkjfwjy , 1 , "bvcrkjfwjy" ) ; for ( i = 0 ; i < 16 ;
i ++ ) { nzrycehjx4 = h5rdtgmjbr [ i ] + rtB . evhqkw31g3q [ i ] ; k1zpj42h11
[ i ] = nzrycehjx4 ; k1zpj42h11 [ i + 16 ] = nzrycehjx4 ; k1zpj42h11 [ i + 32
] = nzrycehjx4 ; mybyivl1uq [ 3 * i ] = k1zpj42h11 [ i ] ; mybyivl1uq [ 3 * i
+ 1 ] = k1zpj42h11 [ i + 16 ] ; mybyivl1uq [ 3 * i + 2 ] = k1zpj42h11 [ i +
32 ] ; } for ( i = 0 ; i <= 44 ; i += 4 ) { tmp_f = _mm_loadu_ps ( &
mybyivl1uq [ i ] ) ; _mm_storeu_ps ( & pf3wpndfmw [ i ] , _mm_mul_ps ( tmp_f
, tmp_f ) ) ; } for ( i = 0 ; i <= 6 ; i += 2 ) { _mm_storeu_pd ( &
lqbwr5bl13 [ i ] , _mm_mul_pd ( _mm_loadu_pd ( & rtP .
Constant_Value_i2hbsz4wzi [ i ] ) , _mm_set1_pd ( ( real32_T )
hjpu2sw0us_idx_1 ) ) ) ; _mm_storeu_pd ( & lqbwr5bl13 [ i + 8 ] , _mm_mul_pd
( _mm_loadu_pd ( & rtP . Constant1_Value_c3hussklf2 [ i ] ) , _mm_set1_pd ( (
real32_T ) y_p ) ) ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { c3swjrmvem [ iU ]
= plook_linxp ( lqbwr5bl13 [ iU ] , tmp_i , 9U , & nvl2rva03y [ iU ] , & rtDW
. hlwi0mkbiu [ iU ] ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { frac_d1 [ 0 ] =
irfwaeofjb [ iU ] ; frac_d1 [ 1 ] = bqkagafcws [ iU ] ; frac_d1 [ 2 ] =
biece21jwb [ iU ] ; frac_d1 [ 3 ] = l0zhodiblx [ iU ] ; bpIndex_d1 [ 0 ] =
f2e5fcgb3v [ iU ] ; bpIndex_d1 [ 1 ] = asvvjqwjnk [ iU ] ; bpIndex_d1 [ 2 ] =
ayy24n2qrl [ iU ] ; bpIndex_d1 [ 3 ] = gm4p0rdh2f [ iU ] ; if ( rtP .
Constant8_Value_ifpw1hiprw [ iU ] > 15.0 ) { bpIndex_d1 [ 4 ] = 15U ; } else
{ bpIndex_d1 [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ifpw1hiprw [ iU ] , 0.0 ) ; } jtoldnh5tw = intrp4d_fl_pw (
bpIndex_d1 , frac_d1 , & rtP . dp_VTAIL_INDUCED . alpha_induced [ 1750U *
bpIndex_d1 [ 4 ] ] , rtP . alpha_induced_dimSize_ovemibsoz5 ) ; h5rdtgmjbr [
iU ] = jtoldnh5tw ; bqkagafcws [ iU ] = jtoldnh5tw + rtB . pcrwxsaluni [ iU ]
; } for ( iU = 0 ; iU < 16 ; iU ++ ) { f2e5fcgb3v [ iU ] = plook_u32ff_linxp
( bqkagafcws [ iU ] , rtP . dp_VTAIL . alphas , 12U , & h5rdtgmjbr [ iU ] , &
rtDW . jirkxxvdzn [ iU ] ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { asvvjqwjnk
[ iU ] = plook_u32ff_linxp ( rtB . kmrinhn2my [ iU ] , rtP . dp_VTAIL . betas
, 8U , & bqkagafcws [ iU ] , & rtDW . ibhybetp43 [ iU ] ) ; } for ( iU = 0 ;
iU < 16 ; iU ++ ) { lco5i2tcb1 = asvvjqwjnk [ iU ] ; n00enf32nh = f2e5fcgb3v
[ iU ] ; mpp40chq4u = c3swjrmvem [ iU ] ; nsmwxx5bxv = bqkagafcws [ iU ] ;
jtoldnh5tw = h5rdtgmjbr [ iU ] ; cwdb3qacqr = nvl2rva03y [ iU ] ; frac_dt [ 0
] = cwdb3qacqr ; frac_dt [ 1 ] = jtoldnh5tw ; frac_dt [ 2 ] = nsmwxx5bxv ;
bpIndex_dt [ 0 ] = mpp40chq4u ; bpIndex_dt [ 1 ] = n00enf32nh ; bpIndex_dt [
2 ] = lco5i2tcb1 ; if ( rtP . Constant8_Value_kyqtwzzori [ iU ] > 15.0 ) {
bpIndex_dt [ 3 ] = 15U ; } else { bpIndex_dt [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_kyqtwzzori [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU ] = intrp3d_fl_pw ( bpIndex_dt , frac_dt , & rtP . dp_VTAIL .
CFx [ 1170U * bpIndex_dt [ 3 ] ] , rtP .
InterpolationUsingPrelookup1_dimSize_jdmyh0rds4 ) ; frac_e5 [ 0 ] =
cwdb3qacqr ; frac_e5 [ 1 ] = jtoldnh5tw ; frac_e5 [ 2 ] = nsmwxx5bxv ;
bpIndex_e5 [ 0 ] = mpp40chq4u ; bpIndex_e5 [ 1 ] = n00enf32nh ; bpIndex_e5 [
2 ] = lco5i2tcb1 ; if ( rtP . Constant8_Value_kyqtwzzori [ iU ] > 15.0 ) {
bpIndex_e5 [ 3 ] = 15U ; } else { bpIndex_e5 [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_kyqtwzzori [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU + 16 ] = intrp3d_fl_pw ( bpIndex_e5 , frac_e5 , & rtP .
dp_VTAIL . CFy [ 1170U * bpIndex_e5 [ 3 ] ] , rtP .
InterpolationUsingPrelookup2_dimSize_mmfyq0ibuy ) ; frac_bp [ 0 ] =
cwdb3qacqr ; frac_bp [ 1 ] = jtoldnh5tw ; frac_bp [ 2 ] = nsmwxx5bxv ;
bpIndex_bp [ 0 ] = mpp40chq4u ; bpIndex_bp [ 1 ] = n00enf32nh ; bpIndex_bp [
2 ] = lco5i2tcb1 ; if ( rtP . Constant8_Value_kyqtwzzori [ iU ] > 15.0 ) {
bpIndex_bp [ 3 ] = 15U ; } else { bpIndex_bp [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_kyqtwzzori [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU + 32 ] = intrp3d_fl_pw ( bpIndex_bp , frac_bp , & rtP .
dp_VTAIL . CFz [ 1170U * bpIndex_bp [ 3 ] ] , rtP .
InterpolationUsingPrelookup3_dimSize_kcdfn2jc5w ) ; rtB . enr40llpyf [ 3 * iU
] = pf3wpndfmw [ 3 * iU ] * k1zpj42h11 [ iU ] * rtB . lhopa3gq4f * rtP .
Gain2_Gain_j4y052of2v ; rtB . enr40llpyf [ 3 * iU + 1 ] = pf3wpndfmw [ 3 * iU
+ 1 ] * k1zpj42h11 [ iU + 16 ] * rtB . lhopa3gq4f * rtP .
Gain2_Gain_j4y052of2v ; rtB . enr40llpyf [ 3 * iU + 2 ] = pf3wpndfmw [ 3 * iU
+ 2 ] * k1zpj42h11 [ iU + 32 ] * rtB . lhopa3gq4f * rtP .
Gain2_Gain_j4y052of2v ; } parallel_for ( 16 , npienbht1r , 1 , "npienbht1r" )
; for ( iU = 0 ; iU < 16 ; iU ++ ) { lco5i2tcb1 = asvvjqwjnk [ iU ] ;
n00enf32nh = f2e5fcgb3v [ iU ] ; mpp40chq4u = c3swjrmvem [ iU ] ; nsmwxx5bxv
= bqkagafcws [ iU ] ; jtoldnh5tw = h5rdtgmjbr [ iU ] ; cwdb3qacqr =
nvl2rva03y [ iU ] ; frac_bf [ 0 ] = cwdb3qacqr ; frac_bf [ 1 ] = jtoldnh5tw ;
frac_bf [ 2 ] = nsmwxx5bxv ; bpIndex_bf [ 0 ] = mpp40chq4u ; bpIndex_bf [ 1 ]
= n00enf32nh ; bpIndex_bf [ 2 ] = lco5i2tcb1 ; if ( rtP .
Constant8_Value_kyqtwzzori [ iU ] > 15.0 ) { bpIndex_bf [ 3 ] = 15U ; } else
{ bpIndex_bf [ 3 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_kyqtwzzori [ iU ] , 0.0 ) ; } k1zpj42h11 [ iU ] =
intrp3d_fl_pw ( bpIndex_bf , frac_bf , & rtP . dp_VTAIL . CMx [ 1170U *
bpIndex_bf [ 3 ] ] , rtP . InterpolationUsingPrelookup4_dimSize_br3wgbxqta )
; frac_jd [ 0 ] = cwdb3qacqr ; frac_jd [ 1 ] = jtoldnh5tw ; frac_jd [ 2 ] =
nsmwxx5bxv ; bpIndex_jd [ 0 ] = mpp40chq4u ; bpIndex_jd [ 1 ] = n00enf32nh ;
bpIndex_jd [ 2 ] = lco5i2tcb1 ; if ( rtP . Constant8_Value_kyqtwzzori [ iU ]
> 15.0 ) { bpIndex_jd [ 3 ] = 15U ; } else { bpIndex_jd [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_kyqtwzzori [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU + 16 ] = intrp3d_fl_pw ( bpIndex_jd , frac_jd , & rtP .
dp_VTAIL . CMy [ 1170U * bpIndex_jd [ 3 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_gxng3uhsan ) ; frac_dl [ 0 ] =
cwdb3qacqr ; frac_dl [ 1 ] = jtoldnh5tw ; frac_dl [ 2 ] = nsmwxx5bxv ;
bpIndex_dl [ 0 ] = mpp40chq4u ; bpIndex_dl [ 1 ] = n00enf32nh ; bpIndex_dl [
2 ] = lco5i2tcb1 ; if ( rtP . Constant8_Value_kyqtwzzori [ iU ] > 15.0 ) {
bpIndex_dl [ 3 ] = 15U ; } else { bpIndex_dl [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_kyqtwzzori [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU + 32 ] = intrp3d_fl_pw ( bpIndex_dl , frac_dl , & rtP .
dp_VTAIL . CMz [ 1170U * bpIndex_dl [ 3 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_kvuyiqq5jp ) ; mfkqvhwnqs [ 3 * iU ] =
pf3wpndfmw [ 3 * iU ] * k1zpj42h11 [ iU ] * rtP . Constant1_Value_p2nvqevadb
[ 3 * iU ] * rtB . lhopa3gq4f * rtP . Gain3_Gain_e5hqj2pw54 + rtB .
gniuf51ho0uq [ 3 * iU ] ; mfkqvhwnqs [ 3 * iU + 1 ] = pf3wpndfmw [ 3 * iU + 1
] * k1zpj42h11 [ iU + 16 ] * rtP . Constant1_Value_p2nvqevadb [ 3 * iU + 1 ]
* rtB . lhopa3gq4f * rtP . Gain3_Gain_e5hqj2pw54 + rtB . gniuf51ho0uq [ 3 *
iU + 1 ] ; mfkqvhwnqs [ 3 * iU + 2 ] = pf3wpndfmw [ 3 * iU + 2 ] * k1zpj42h11
[ iU + 32 ] * rtP . Constant1_Value_p2nvqevadb [ 3 * iU + 2 ] * rtB .
lhopa3gq4f * rtP . Gain3_Gain_e5hqj2pw54 + rtB . gniuf51ho0uq [ 3 * iU + 2 ]
; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { cwdb3qacqr = - 0.0 ; for ( i_e = 0 ;
i_e < 16 ; i_e ++ ) { cwdb3qacqr += mfkqvhwnqs [ i_e * 3 + i_p ] ; }
p4xbdqn5oc [ i_p ] = cwdb3qacqr ; } dh4cgxbhqr = ( real32_T ) p4xbdqn5oc [ 0
] ; i2pbocf1g0_idx_1 = ( real32_T ) p4xbdqn5oc [ 1 ] ; i2pbocf1g0_idx_2 = (
real32_T ) p4xbdqn5oc [ 2 ] ; muDoubleScalarSinCos ( ( real32_T )
g52k1xdouv_idx_0 , & kld3j4mgfs_idx_0 , & l4omwvocst_idx_1 ) ;
muDoubleScalarSinCos ( ( real32_T ) sb , & kld3j4mgfs_idx_1 , &
kurpvwnuj4_idx_1 ) ; goislsqndx [ 0 ] = l4omwvocst_idx_1 * kurpvwnuj4_idx_1 ;
goislsqndx [ 1 ] = - ( l4omwvocst_idx_1 * kld3j4mgfs_idx_1 ) ; goislsqndx [ 2
] = - kld3j4mgfs_idx_0 ; goislsqndx [ 3 ] = kld3j4mgfs_idx_1 ; goislsqndx [ 4
] = kurpvwnuj4_idx_1 ; goislsqndx [ 6 ] = kld3j4mgfs_idx_0 * kurpvwnuj4_idx_1
; goislsqndx [ 7 ] = - ( kld3j4mgfs_idx_0 * kld3j4mgfs_idx_1 ) ; goislsqndx [
8 ] = l4omwvocst_idx_1 ; m04ebe1zz2 = plook_u32ff_linxp ( ( real32_T ) sb ,
rtP . Prelookup_BreakpointsData_cgpj0ugnww , 12U , & f5qwewprly , & rtDW .
gubxapj1vp ) ; kiombdthr4 = plook_u32ff_linxp ( ( real32_T ) g52k1xdouv_idx_0
, rtP . Prelookup1_BreakpointsData_l30cfur4ew , 14U , & p5e3xkr1y0 , & rtDW .
mfhxczbxqh ) ; frac_l1 [ 0 ] = f5qwewprly ; frac_l1 [ 1 ] = p5e3xkr1y0 ;
bpIndex_l1 [ 0 ] = m04ebe1zz2 ; bpIndex_l1 [ 1 ] = kiombdthr4 ; frac_ok [ 0 ]
= f5qwewprly ; frac_ok [ 1 ] = p5e3xkr1y0 ; bpIndex_ok [ 0 ] = m04ebe1zz2 ;
bpIndex_ok [ 1 ] = kiombdthr4 ; lrpn1bvaje = ( real32_T ) gdvtsdc4i4_idx_1 *
( real32_T ) gdvtsdc4i4_idx_1 ; jtoldnh5tw = intrp2d_fu32fl_pw ( bpIndex_l1 ,
frac_l1 , rtP . dp_FUSE_FIN . CD , 13U ) ; nsmwxx5bxv = intrp2d_fu32fl_pw (
bpIndex_ok , frac_ok , rtP . dp_FUSE_FIN . CS , 13U ) ; for ( i_p = 0 ; i_p <
3 ; i_p ++ ) { ivnfroue5d [ i_p ] = ( ( ( real32_T ) goislsqndx [ 3 * i_p + 1
] * nsmwxx5bxv + ( real32_T ) goislsqndx [ 3 * i_p ] * - jtoldnh5tw ) + (
real32_T ) goislsqndx [ 3 * i_p + 2 ] * - rtP . Constant_Value_ay23noagrk ) *
lrpn1bvaje * rtB . lhopa3gq4f * rtP . Gain_Gain_cqzq1hxios ; } frac_bv [ 0 ]
= f5qwewprly ; frac_bv [ 1 ] = p5e3xkr1y0 ; bpIndex_bv [ 0 ] = m04ebe1zz2 ;
bpIndex_bv [ 1 ] = kiombdthr4 ; frac_it [ 0 ] = f5qwewprly ; frac_it [ 1 ] =
p5e3xkr1y0 ; bpIndex_it [ 0 ] = m04ebe1zz2 ; bpIndex_it [ 1 ] = kiombdthr4 ;
frac_gv [ 0 ] = f5qwewprly ; frac_gv [ 1 ] = p5e3xkr1y0 ; bpIndex_gv [ 0 ] =
m04ebe1zz2 ; bpIndex_gv [ 1 ] = kiombdthr4 ; p4xbdqn5oc [ 0 ] =
intrp2d_fu32fl_pw ( bpIndex_bv , frac_bv , rtP . dp_FUSE_FIN . CMx , 13U ) *
lrpn1bvaje * rtP . Constant_Value_iwm21w14aq [ 0 ] ; p4xbdqn5oc [ 1 ] =
intrp2d_fu32fl_pw ( bpIndex_it , frac_it , rtP . dp_FUSE_FIN . CMy , 13U ) *
lrpn1bvaje * rtP . Constant_Value_iwm21w14aq [ 1 ] ; p4xbdqn5oc [ 2 ] =
intrp2d_fu32fl_pw ( bpIndex_gv , frac_gv , rtP . dp_FUSE_FIN . CMz , 13U ) *
lrpn1bvaje * rtP . Constant_Value_iwm21w14aq [ 2 ] ; cwdb3qacqr = rtP . S /
2.0 ; rtB . b2zgnzkkmq [ 0 ] = ( ( rtB . jnziwso4sc [ 1 ] * ivnfroue5d [ 2 ]
- ivnfroue5d [ 1 ] * rtB . jnziwso4sc [ 2 ] ) + rtB . lhopa3gq4f * p4xbdqn5oc
[ 0 ] * cwdb3qacqr ) + ( ( real_T ) ( - bdvkktmal5_idx_0 + cq2trmp0xn_idx_0 )
+ dh4cgxbhqr ) ; rtB . b2zgnzkkmq [ 1 ] = ( ( ivnfroue5d [ 0 ] * rtB .
jnziwso4sc [ 2 ] - rtB . jnziwso4sc [ 0 ] * ivnfroue5d [ 2 ] ) + rtB .
lhopa3gq4f * p4xbdqn5oc [ 1 ] * cwdb3qacqr ) + ( ( real_T ) (
bdvkktmal5_idx_1 + cq2trmp0xn_idx_1 ) + i2pbocf1g0_idx_1 ) ; rtB . b2zgnzkkmq
[ 2 ] = ( ( rtB . jnziwso4sc [ 0 ] * ivnfroue5d [ 1 ] - ivnfroue5d [ 0 ] *
rtB . jnziwso4sc [ 1 ] ) + rtB . lhopa3gq4f * p4xbdqn5oc [ 2 ] * cwdb3qacqr )
+ ( ( real_T ) ( - bdvkktmal5_idx_2 + cq2trmp0xn_idx_2 ) + i2pbocf1g0_idx_2 )
; for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { cwdb3qacqr = - 0.0 ; for ( i_e = 0 ;
i_e < 12 ; i_e ++ ) { cwdb3qacqr += rtB . heluxjysvd [ i_e * 3 + i_p ] ; }
p4xbdqn5oc [ i_p ] = cwdb3qacqr ; } ncgfuwjrdt [ 0 ] = ( p4xbdqn5oc [ 0 ] +
rtP . Constant_Value_nqbwsvpu1c ) + rtB . b2zgnzkkmq [ 0 ] ; ncgfuwjrdt [ 1 ]
= ( p4xbdqn5oc [ 1 ] + rtP . Constant_Value_nqbwsvpu1c ) + rtB . b2zgnzkkmq [
1 ] ; ncgfuwjrdt [ 2 ] = ( p4xbdqn5oc [ 2 ] + rtP . Constant_Value_nqbwsvpu1c
) + rtB . b2zgnzkkmq [ 2 ] ; p4xbdqn5oc [ 0 ] = rtB . mkyju0odm1 [ 0 ] ;
p4xbdqn5oc [ 1 ] = rtB . mkyju0odm1 [ 1 ] ; p4xbdqn5oc [ 2 ] = rtB .
mkyju0odm1 [ 2 ] ; for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { ebzekdphab [ i_p ] =
( rtB . pz0e54e2g1 [ i_p + 3 ] * p4xbdqn5oc [ 1 ] + rtB . pz0e54e2g1 [ i_p ]
* p4xbdqn5oc [ 0 ] ) + rtB . pz0e54e2g1 [ i_p + 6 ] * p4xbdqn5oc [ 2 ] ; }
p4xbdqn5oc [ 0 ] = rtB . mkyju0odm1 [ 0 ] ; p4xbdqn5oc [ 1 ] = rtB .
mkyju0odm1 [ 1 ] ; p4xbdqn5oc [ 2 ] = rtB . mkyju0odm1 [ 2 ] ; for ( i_p = 0
; i_p < 3 ; i_p ++ ) { as2exlo2n4 [ i_p ] = ( rtB . kunolojslw [ i_p + 3 ] *
p4xbdqn5oc [ 1 ] + rtB . kunolojslw [ i_p ] * p4xbdqn5oc [ 0 ] ) + rtB .
kunolojslw [ i_p + 6 ] * p4xbdqn5oc [ 2 ] ; } p4xbdqn5oc [ 0 ] = rtB .
mkyju0odm1 [ 1 ] * as2exlo2n4 [ 2 ] - as2exlo2n4 [ 1 ] * rtB . mkyju0odm1 [ 2
] ; p4xbdqn5oc [ 1 ] = as2exlo2n4 [ 0 ] * rtB . mkyju0odm1 [ 2 ] - rtB .
mkyju0odm1 [ 0 ] * as2exlo2n4 [ 2 ] ; p4xbdqn5oc [ 2 ] = rtB . mkyju0odm1 [ 0
] * as2exlo2n4 [ 1 ] - as2exlo2n4 [ 0 ] * rtB . mkyju0odm1 [ 1 ] ; p1t5syw2cc
[ 0 ] = ( ncgfuwjrdt [ 0 ] - ebzekdphab [ 0 ] ) - p4xbdqn5oc [ 0 ] ;
p1t5syw2cc [ 1 ] = ( ncgfuwjrdt [ 1 ] - ebzekdphab [ 1 ] ) - p4xbdqn5oc [ 1 ]
; p1t5syw2cc [ 2 ] = ( ncgfuwjrdt [ 2 ] - ebzekdphab [ 2 ] ) - p4xbdqn5oc [ 2
] ; rt_mrdivide_U1d1x3_U2d3x3_Yd1x3_snf ( p1t5syw2cc , rtB . mfbzirmkpn ,
p4xbdqn5oc ) ; cwdb3qacqr = rtP . fcc . rate_u_pert [ ( ( ( ( int32_T )
hy1xz2ukcn - 1 ) << 2 ) + ( int32_T ) hy1xz2ukcn ) - 1 ] * cb ; if (
s315_iter == 1 ) { memcpy ( & rtB . jmtm5fxob3 [ 0 ] , & rtDW . cg3pqhuaqw [
0 ] , 12U * sizeof ( real_T ) ) ; } rtB . jmtm5fxob3 [ 3 * ( ( int32_T )
hy1xz2ukcn - 1 ) ] = ( p4xbdqn5oc [ 0 ] - inoflfxzl4 [ 0 ] ) / cwdb3qacqr ;
rtB . jmtm5fxob3 [ 3 * ( ( int32_T ) hy1xz2ukcn - 1 ) + 1 ] = ( p4xbdqn5oc [
1 ] - inoflfxzl4 [ 1 ] ) / cwdb3qacqr ; rtB . jmtm5fxob3 [ 3 * ( ( int32_T )
hy1xz2ukcn - 1 ) + 2 ] = ( p4xbdqn5oc [ 2 ] - inoflfxzl4 [ 2 ] ) / cwdb3qacqr
; for ( i = 0 ; i < 21 ; i ++ ) { dq25kgk52k [ i ] = rtB . pupjln41gmw [ i ]
; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { cwdb3qacqr = - 0.0 ; for ( i_e = 0 ;
i_e < 7 ; i_e ++ ) { cwdb3qacqr += dq25kgk52k [ i_e * 3 + i_p ] ; }
p4xbdqn5oc [ i_p ] = cwdb3qacqr ; } bdvkktmal5_idx_0 = ( real32_T )
p4xbdqn5oc [ 0 ] ; bdvkktmal5_idx_1 = ( real32_T ) p4xbdqn5oc [ 1 ] ;
bdvkktmal5_idx_2 = ( real32_T ) p4xbdqn5oc [ 2 ] ; for ( i = 0 ; i < 21 ; i
++ ) { dq25kgk52k [ i ] = rtB . pupjln41gm [ i ] ; } for ( i_p = 0 ; i_p < 3
; i_p ++ ) { cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e < 7 ; i_e ++ ) {
cwdb3qacqr += dq25kgk52k [ i_e * 3 + i_p ] ; } p4xbdqn5oc [ i_p ] =
cwdb3qacqr ; } cq2trmp0xn_idx_0 = ( real32_T ) p4xbdqn5oc [ 0 ] ;
cq2trmp0xn_idx_1 = ( real32_T ) p4xbdqn5oc [ 1 ] ; cq2trmp0xn_idx_2 = (
real32_T ) p4xbdqn5oc [ 2 ] ; for ( i = 0 ; i < 48 ; i ++ ) { mfkqvhwnqs [ i
] = rtB . h12sa05pgw [ i ] ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) {
cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e < 16 ; i_e ++ ) { cwdb3qacqr +=
mfkqvhwnqs [ i_e * 3 + i_p ] ; } p4xbdqn5oc [ i_p ] = cwdb3qacqr ; }
muDoubleScalarSinCos ( ( real32_T ) e32kai3hdx , & kld3j4mgfs_idx_0 , &
l4omwvocst_idx_1 ) ; muDoubleScalarSinCos ( ( real32_T ) j0r0arniji , &
kld3j4mgfs_idx_1 , & kurpvwnuj4_idx_1 ) ; hhjx0kn5md [ 0 ] = l4omwvocst_idx_1
* kurpvwnuj4_idx_1 ; hhjx0kn5md [ 1 ] = - ( l4omwvocst_idx_1 *
kld3j4mgfs_idx_1 ) ; hhjx0kn5md [ 2 ] = - kld3j4mgfs_idx_0 ; hhjx0kn5md [ 3 ]
= kld3j4mgfs_idx_1 ; hhjx0kn5md [ 4 ] = kurpvwnuj4_idx_1 ; hhjx0kn5md [ 6 ] =
kld3j4mgfs_idx_0 * kurpvwnuj4_idx_1 ; hhjx0kn5md [ 7 ] = - ( kld3j4mgfs_idx_0
* kld3j4mgfs_idx_1 ) ; hhjx0kn5md [ 8 ] = l4omwvocst_idx_1 ; jtoldnh5tw = - (
( rtP . gear_drag_Value_eygcwjgye3 * ( real32_T ) rtB . p3gbp1cov5 [ 19 ] +
rtP . extra_drag_Value_aw4gwlr5dp ) * rtB . lhopa3gq4f * rtP .
Gain_Gain_g2kq3jybp0 * ( ( real32_T ) lir1dfa45c * ( real32_T ) lir1dfa45c )
) ; bdvkktmal5_p [ 0 ] = ( ( bdvkktmal5_idx_0 + cq2trmp0xn_idx_0 ) + (
real32_T ) p4xbdqn5oc [ 0 ] ) + g0uuf55mpg [ 0 ] ; bdvkktmal5_p [ 1 ] = ( ( -
bdvkktmal5_idx_1 + cq2trmp0xn_idx_1 ) + ( real32_T ) p4xbdqn5oc [ 1 ] ) +
g0uuf55mpg [ 1 ] ; bdvkktmal5_p [ 2 ] = ( ( bdvkktmal5_idx_2 +
cq2trmp0xn_idx_2 ) + ( real32_T ) p4xbdqn5oc [ 2 ] ) + g0uuf55mpg [ 2 ] ; for
( i_p = 0 ; i_p < 3 ; i_p ++ ) { rtB . pjbgip2a4k [ i_p ] = ( ( ( real32_T )
hhjx0kn5md [ 3 * i_p + 1 ] * rtP . Constant1_Value_ozafy51hgy + ( real32_T )
hhjx0kn5md [ 3 * i_p ] * jtoldnh5tw ) + ( real32_T ) hhjx0kn5md [ 3 * i_p + 2
] * rtP . Constant1_Value_ozafy51hgy ) + bdvkktmal5_p [ i_p ] ; } p4xbdqn5oc
[ 0 ] = rtB . gkiqijsiwi [ 2 ] ; p4xbdqn5oc [ 1 ] = rtB . gkiqijsiwi [ 1 ] ;
p4xbdqn5oc [ 2 ] = rtB . gkiqijsiwi [ 0 ] ; muDoubleScalarSinCos ( p4xbdqn5oc
[ 0 ] , & ebzekdphab [ 0 ] , & as2exlo2n4 [ 0 ] ) ; muDoubleScalarSinCos (
p4xbdqn5oc [ 1 ] , & ebzekdphab [ 1 ] , & as2exlo2n4 [ 1 ] ) ;
muDoubleScalarSinCos ( p4xbdqn5oc [ 2 ] , & ebzekdphab [ 2 ] , & as2exlo2n4 [
2 ] ) ; for ( i = 0 ; i < 21 ; i ++ ) { dq25kgk52k [ i ] = rtB . oiodmcndy4v
[ i ] ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { cwdb3qacqr = - 0.0 ; for ( i_e
= 0 ; i_e < 7 ; i_e ++ ) { cwdb3qacqr += dq25kgk52k [ i_e * 3 + i_p ] ; }
ebzekdphab [ i_p ] = cwdb3qacqr ; } g0uuf55mpg [ 0 ] = ( real32_T )
ebzekdphab [ 0 ] ; g0uuf55mpg [ 1 ] = ( real32_T ) ebzekdphab [ 1 ] ;
g0uuf55mpg [ 2 ] = ( real32_T ) ebzekdphab [ 2 ] ; for ( i = 0 ; i < 21 ; i
++ ) { dq25kgk52k [ i ] = rtB . oiodmcndy4 [ i ] ; } for ( i_p = 0 ; i_p < 3
; i_p ++ ) { cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e < 7 ; i_e ++ ) {
cwdb3qacqr += dq25kgk52k [ i_e * 3 + i_p ] ; } ebzekdphab [ i_p ] =
cwdb3qacqr ; } bdvkktmal5_idx_0 = ( real32_T ) ebzekdphab [ 0 ] ;
bdvkktmal5_idx_1 = ( real32_T ) ebzekdphab [ 1 ] ; bdvkktmal5_idx_2 = (
real32_T ) ebzekdphab [ 2 ] ; for ( i = 0 ; i < 48 ; i ++ ) { mfkqvhwnqs [ i
] = rtB . enr40llpyf [ i ] ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) {
cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e < 16 ; i_e ++ ) { cwdb3qacqr +=
mfkqvhwnqs [ i_e * 3 + i_p ] ; } ebzekdphab [ i_p ] = cwdb3qacqr ; }
muDoubleScalarSinCos ( ( real32_T ) g52k1xdouv_idx_0 , & kld3j4mgfs_idx_0 , &
l4omwvocst_idx_1 ) ; muDoubleScalarSinCos ( ( real32_T ) sb , &
kld3j4mgfs_idx_1 , & kurpvwnuj4_idx_1 ) ; oqjjyzlelr [ 0 ] = l4omwvocst_idx_1
* kurpvwnuj4_idx_1 ; oqjjyzlelr [ 1 ] = - ( l4omwvocst_idx_1 *
kld3j4mgfs_idx_1 ) ; oqjjyzlelr [ 2 ] = - kld3j4mgfs_idx_0 ; oqjjyzlelr [ 3 ]
= kld3j4mgfs_idx_1 ; oqjjyzlelr [ 4 ] = kurpvwnuj4_idx_1 ; oqjjyzlelr [ 6 ] =
kld3j4mgfs_idx_0 * kurpvwnuj4_idx_1 ; oqjjyzlelr [ 7 ] = - ( kld3j4mgfs_idx_0
* kld3j4mgfs_idx_1 ) ; oqjjyzlelr [ 8 ] = l4omwvocst_idx_1 ; jtoldnh5tw = - (
( rtP . gear_drag_Value_oqxpbuy1r2 * ( real32_T ) rtB . le5ehxvxar [ 19 ] +
rtP . extra_drag_Value_cwdhttg0kl ) * rtB . lhopa3gq4f * rtP .
Gain_Gain_i2ojm5npae * ( ( real32_T ) gdvtsdc4i4_idx_1 * ( real32_T )
gdvtsdc4i4_idx_1 ) ) ; di1tsh2hwg [ 0 ] = ( ( g0uuf55mpg [ 0 ] +
bdvkktmal5_idx_0 ) + ( real32_T ) ebzekdphab [ 0 ] ) + ivnfroue5d [ 0 ] ;
di1tsh2hwg [ 1 ] = ( ( - g0uuf55mpg [ 1 ] + bdvkktmal5_idx_1 ) + ( real32_T )
ebzekdphab [ 1 ] ) + ivnfroue5d [ 1 ] ; di1tsh2hwg [ 2 ] = ( ( g0uuf55mpg [ 2
] + bdvkktmal5_idx_2 ) + ( real32_T ) ebzekdphab [ 2 ] ) + ivnfroue5d [ 2 ] ;
for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { rtB . nu3ypr5cbp [ i_p ] = ( ( (
real32_T ) oqjjyzlelr [ 3 * i_p + 1 ] * rtP . Constant1_Value_juf0qs2hrl + (
real32_T ) oqjjyzlelr [ 3 * i_p ] * jtoldnh5tw ) + ( real32_T ) oqjjyzlelr [
3 * i_p + 2 ] * rtP . Constant1_Value_juf0qs2hrl ) + di1tsh2hwg [ i_p ] ; }
muDoubleScalarSinCos ( p4xbdqn5oc [ 0 ] , & ebzekdphab [ 0 ] , & as2exlo2n4 [
0 ] ) ; muDoubleScalarSinCos ( p4xbdqn5oc [ 1 ] , & ebzekdphab [ 1 ] , &
as2exlo2n4 [ 1 ] ) ; muDoubleScalarSinCos ( p4xbdqn5oc [ 2 ] , & ebzekdphab [
2 ] , & as2exlo2n4 [ 2 ] ) ; rtDW . dkewog43cc = false ; memcpy ( & rtDW .
cg3pqhuaqw [ 0 ] , & rtB . jmtm5fxob3 [ 0 ] , 12U * sizeof ( real_T ) ) ; if
( dh3zefosvy >= rtP . fcc . rate_num_u - 0.5 ) { rtDW . h21bdoedky = rtP .
Constant2_Value_gudtts4va2 ; } else { rtDW . h21bdoedky = dh3zefosvy ; }
s315_iter ++ ; } while ( ( rtP . UpdateCompleteB_Value_mezom0rtzf != 0.0 ) &&
( s315_iter <= 4 ) ) ; p4xbdqn5oc [ 0 ] = rtP . fcc . rate_kc * rtB .
ljez30jgck [ 0 ] ; p4xbdqn5oc [ 1 ] = rtP . fcc . rate_kc * rtB . ljez30jgck
[ 1 ] ; p4xbdqn5oc [ 2 ] = rtP . fcc . rate_kc * rtB . ljez30jgck [ 2 ] ; if
( rtDW . kielu0c1kf != 0 ) { if ( rtP . fcc . rate_int0_from_command > rtP .
Switch_Threshold_kd4fpbzuor ) { rtDW . l4ppeudfek [ 0 ] = p4xbdqn5oc [ 0 ] ;
rtDW . l4ppeudfek [ 1 ] = p4xbdqn5oc [ 1 ] ; rtDW . l4ppeudfek [ 2 ] =
p4xbdqn5oc [ 2 ] ; } else { rtDW . l4ppeudfek [ 0 ] = rtP . fcc . rate_int0 ;
rtDW . l4ppeudfek [ 1 ] = rtP . fcc . rate_int0 ; rtDW . l4ppeudfek [ 2 ] =
rtP . fcc . rate_int0 ; } } p4xbdqn5oc [ 0 ] = ( ( p4xbdqn5oc [ 0 ] + rtDW .
l4ppeudfek [ 0 ] ) - rtB . mkyju0odm1 [ 0 ] ) * rtP . fcc . rate_kb + rtB .
ijed1dxirj ; if ( p4xbdqn5oc [ 0 ] > rtP . fcc . rate_y_ref_dot_ulim [ 0 ] )
{ kld3j4mgfs_idx_1 = rtP . fcc . rate_y_ref_dot_ulim [ 0 ] ; } else if (
p4xbdqn5oc [ 0 ] < rtP . fcc . rate_y_ref_dot_llim [ 0 ] ) { kld3j4mgfs_idx_1
= rtP . fcc . rate_y_ref_dot_llim [ 0 ] ; } else { kld3j4mgfs_idx_1 =
p4xbdqn5oc [ 0 ] ; } ncgfuwjrdt [ 0 ] = kld3j4mgfs_idx_1 ; inoflfxzl4 [ 0 ] =
kld3j4mgfs_idx_1 - inoflfxzl4 [ 0 ] ; p4xbdqn5oc [ 1 ] = ( ( p4xbdqn5oc [ 1 ]
+ rtDW . l4ppeudfek [ 1 ] ) - rtB . mkyju0odm1 [ 1 ] ) * rtP . fcc . rate_kb
+ rtB . ijed1dxirj ; if ( p4xbdqn5oc [ 1 ] > rtP . fcc . rate_y_ref_dot_ulim
[ 1 ] ) { kld3j4mgfs_idx_1 = rtP . fcc . rate_y_ref_dot_ulim [ 1 ] ; } else
if ( p4xbdqn5oc [ 1 ] < rtP . fcc . rate_y_ref_dot_llim [ 1 ] ) {
kld3j4mgfs_idx_1 = rtP . fcc . rate_y_ref_dot_llim [ 1 ] ; } else {
kld3j4mgfs_idx_1 = p4xbdqn5oc [ 1 ] ; } ncgfuwjrdt [ 1 ] = kld3j4mgfs_idx_1 ;
inoflfxzl4 [ 1 ] = kld3j4mgfs_idx_1 - inoflfxzl4 [ 1 ] ; p4xbdqn5oc [ 2 ] = (
( p4xbdqn5oc [ 2 ] + rtDW . l4ppeudfek [ 2 ] ) - rtB . mkyju0odm1 [ 2 ] ) *
rtP . fcc . rate_kb + rtB . ijed1dxirj ; if ( p4xbdqn5oc [ 2 ] > rtP . fcc .
rate_y_ref_dot_ulim [ 2 ] ) { kld3j4mgfs_idx_1 = rtP . fcc .
rate_y_ref_dot_ulim [ 2 ] ; } else if ( p4xbdqn5oc [ 2 ] < rtP . fcc .
rate_y_ref_dot_llim [ 2 ] ) { kld3j4mgfs_idx_1 = rtP . fcc .
rate_y_ref_dot_llim [ 2 ] ; } else { kld3j4mgfs_idx_1 = p4xbdqn5oc [ 2 ] ; }
j0r0arniji = kld3j4mgfs_idx_1 - inoflfxzl4 [ 2 ] ; inoflfxzl4 [ 2 ] =
j0r0arniji ; sb = rtP . fcc . rate_u_pref [ 0 ] - acafcyi14i [ 0 ] ; frac_mu
[ 0 ] = muDoubleScalarMin ( muDoubleScalarMax ( acafcyi14i [ 0 ] + rtB .
pdz4grm5e4 [ 0 ] , rtP . fcc . rate_u_llim [ 0 ] ) , rtP . fcc . rate_u_ulim
[ 0 ] ) - acafcyi14i [ 0 ] ; frac_cv [ 0 ] = muDoubleScalarMax (
muDoubleScalarMin ( acafcyi14i [ 0 ] + rtB . i0glmo1df0 [ 0 ] , rtP . fcc .
rate_u_ulim [ 0 ] ) , rtP . fcc . rate_u_llim [ 0 ] ) - acafcyi14i [ 0 ] ;
rtB . bvzqh0n5x5 [ 0 ] = sb * 0.0 ; frac_d1 [ 0 ] = sb * 0.0 ; frac_g5 [ 0 ]
= sb ; sb = rtP . fcc . rate_u_pref [ 1 ] - acafcyi14i [ 1 ] ; frac_mu [ 1 ]
= muDoubleScalarMin ( muDoubleScalarMax ( acafcyi14i [ 1 ] + rtB . pdz4grm5e4
[ 1 ] , mstjku3ag5 [ 2 ] ) , f40yzytdn0 [ 2 ] ) - acafcyi14i [ 1 ] ; frac_cv
[ 1 ] = muDoubleScalarMax ( muDoubleScalarMin ( acafcyi14i [ 1 ] + rtB .
i0glmo1df0 [ 1 ] , f40yzytdn0 [ 2 ] ) , mstjku3ag5 [ 2 ] ) - acafcyi14i [ 1 ]
; rtB . bvzqh0n5x5 [ 1 ] = sb * 0.0 ; frac_d1 [ 1 ] = sb * 0.0 ; frac_g5 [ 1
] = sb ; sb = rtP . fcc . rate_u_pref [ 2 ] - acafcyi14i [ 2 ] ; frac_mu [ 2
] = muDoubleScalarMin ( muDoubleScalarMax ( acafcyi14i [ 2 ] + rtB .
pdz4grm5e4 [ 2 ] , mstjku3ag5 [ 3 ] ) , f40yzytdn0 [ 3 ] ) - acafcyi14i [ 2 ]
; frac_cv [ 2 ] = muDoubleScalarMax ( muDoubleScalarMin ( acafcyi14i [ 2 ] +
rtB . i0glmo1df0 [ 2 ] , f40yzytdn0 [ 3 ] ) , mstjku3ag5 [ 3 ] ) - acafcyi14i
[ 2 ] ; rtB . bvzqh0n5x5 [ 2 ] = sb * 0.0 ; frac_d1 [ 2 ] = sb * 0.0 ;
frac_g5 [ 2 ] = sb ; sb = rtP . fcc . rate_u_pref [ 3 ] - acafcyi14i [ 3 ] ;
frac_mu [ 3 ] = muDoubleScalarMin ( muDoubleScalarMax ( acafcyi14i [ 3 ] +
rtB . pdz4grm5e4 [ 3 ] , rtP . fcc . rate_u_llim [ 3 ] ) , rtP . fcc .
rate_u_ulim [ 3 ] ) - acafcyi14i [ 3 ] ; frac_cv [ 3 ] = muDoubleScalarMax (
muDoubleScalarMin ( acafcyi14i [ 3 ] + rtB . i0glmo1df0 [ 3 ] , rtP . fcc .
rate_u_ulim [ 3 ] ) , rtP . fcc . rate_u_llim [ 3 ] ) - acafcyi14i [ 3 ] ;
rtB . bvzqh0n5x5 [ 3 ] = sb * 0.0 ; frac_d1 [ 3 ] = sb * 0.0 ; for ( i_p = 0
; i_p < 4 ; i_p ++ ) { for ( i_e = 0 ; i_e < 3 ; i_e ++ ) { c3klqxe1kc [ i_e
+ 3 * i_p ] = 0.0 ; c3klqxe1kc [ i_e + 3 * i_p ] += 100.0 * rtP . fcc .
rate_W_des [ i_e ] * rtB . jmtm5fxob3 [ 3 * i_p ] ; c3klqxe1kc [ i_e + 3 *
i_p ] += rtP . fcc . rate_W_des [ i_e + 3 ] * 100.0 * rtB . jmtm5fxob3 [ 3 *
i_p + 1 ] ; c3klqxe1kc [ i_e + 3 * i_p ] += rtP . fcc . rate_W_des [ i_e + 6
] * 100.0 * rtB . jmtm5fxob3 [ 3 * i_p + 2 ] ; } } for ( i_p = 0 ; i_p < 4 ;
i_p ++ ) { A_p [ 7 * i_p ] = c3klqxe1kc [ 3 * i_p ] ; A_p [ 7 * i_p + 1 ] =
c3klqxe1kc [ 3 * i_p + 1 ] ; A_p [ 7 * i_p + 2 ] = c3klqxe1kc [ 3 * i_p + 2 ]
; A_p [ 7 * i_p + 3 ] = rtP . fcc . rate_W_pref [ i_p << 2 ] ; A_p [ 7 * i_p
+ 4 ] = rtP . fcc . rate_W_pref [ ( i_p << 2 ) + 1 ] ; A_p [ 7 * i_p + 5 ] =
rtP . fcc . rate_W_pref [ ( i_p << 2 ) + 2 ] ; A_p [ 7 * i_p + 6 ] = rtP .
fcc . rate_W_pref [ ( i_p << 2 ) + 3 ] ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ )
{ p1t5syw2cc [ i_p ] = ( rtP . fcc . rate_W_des [ i_p + 3 ] * 100.0 *
inoflfxzl4 [ 1 ] + 100.0 * rtP . fcc . rate_W_des [ i_p ] * inoflfxzl4 [ 0 ]
) + rtP . fcc . rate_W_des [ i_p + 6 ] * 100.0 * j0r0arniji ; } for ( i_p = 0
; i_p <= 2 ; i_p += 2 ) { tmp_c = _mm_add_pd ( _mm_mul_pd ( _mm_loadu_pd ( &
rtP . fcc . rate_W_pref [ i_p ] ) , _mm_set1_pd ( frac_g5 [ 0 ] ) ) ,
_mm_set1_pd ( 0.0 ) ) ; tmp_j = _mm_mul_pd ( _mm_loadu_pd ( & rtP . fcc .
rate_W_pref [ i_p + 4 ] ) , _mm_set1_pd ( frac_g5 [ 1 ] ) ) ; tmp_g =
_mm_loadu_pd ( & rtP . fcc . rate_W_pref [ i_p + 8 ] ) ; _mm_storeu_pd ( &
frac_ir [ i_p ] , _mm_add_pd ( _mm_mul_pd ( _mm_loadu_pd ( & rtP . fcc .
rate_W_pref [ i_p + 12 ] ) , _mm_set1_pd ( sb ) ) , _mm_add_pd ( _mm_mul_pd (
tmp_g , _mm_set1_pd ( frac_g5 [ 2 ] ) ) , _mm_add_pd ( tmp_j , tmp_c ) ) ) )
; } tmp_m [ 0 ] = p1t5syw2cc [ 0 ] ; tmp_m [ 1 ] = p1t5syw2cc [ 1 ] ; tmp_m [
2 ] = p1t5syw2cc [ 2 ] ; tmp_m [ 3 ] = frac_ir [ 0 ] ; tmp_m [ 4 ] = frac_ir
[ 1 ] ; tmp_m [ 5 ] = frac_ir [ 2 ] ; tmp_m [ 6 ] = frac_ir [ 3 ] ; for ( i_p
= 0 ; i_p < 7 ; i_p ++ ) { d_p [ i_p ] = tmp_m [ i_p ] - ( ( ( A_p [ i_p + 7
] * rtB . bvzqh0n5x5 [ 1 ] + A_p [ i_p ] * rtB . bvzqh0n5x5 [ 0 ] ) + A_p [
i_p + 14 ] * rtB . bvzqh0n5x5 [ 2 ] ) + A_p [ i_p + 21 ] * rtB . bvzqh0n5x5 [
3 ] ) ; } i_free_p [ 0 ] = ( frac_d1 [ 0 ] == 0.0 ) ; i_free_p [ 1 ] = (
frac_d1 [ 1 ] == 0.0 ) ; i_free_p [ 2 ] = ( frac_d1 [ 2 ] == 0.0 ) ; i_free_p
[ 3 ] = ( frac_d1 [ 3 ] == 0.0 ) ; s315_iter = 1 ; iU = 0 ; do { exitg1 = 0 ;
if ( iU < 100 ) { s315_iter = iU + 1 ; i_p = 0 ; if ( i_free_p [ 0 ] ) { i_p
= 1 ; } if ( i_free_p [ 1 ] ) { i_p ++ ; } if ( i_free_p [ 2 ] ) { i_p ++ ; }
if ( i_free_p [ 3 ] ) { i_p ++ ; } e_size_idx_0 = i_p ; i_p = 0 ; if (
i_free_p [ 0 ] ) { e_data_p [ 0 ] = 1 ; i_p = 1 ; } if ( i_free_p [ 1 ] ) {
e_data_p [ i_p ] = 2 ; i_p ++ ; } if ( i_free_p [ 2 ] ) { e_data_p [ i_p ] =
3 ; i_p ++ ; } if ( i_free_p [ 3 ] ) { e_data_p [ i_p ] = 4 ; } A_free_size_p
[ 0 ] = 7 ; A_free_size_p [ 1 ] = e_size_idx_0 ; for ( i_p = 0 ; i_p <
e_size_idx_0 ; i_p ++ ) { for ( i_e = 0 ; i_e < 7 ; i_e ++ ) { A_free_data_p
[ i_e + 7 * i_p ] = A_p [ ( e_data_p [ i_p ] - 1 ) * 7 + i_e ] ; } }
fyjldj202i ( A_free_data_p , A_free_size_p , d_p , frac_ir , & p_free_size )
; i_p = 0 ; sb = 0.0 ; if ( i_free_p [ 0 ] ) { sb = frac_ir [ 0 ] ; i_p = 1 ;
} frac_g5 [ 0 ] = rtB . bvzqh0n5x5 [ 0 ] + sb ; frac_am [ 0 ] = sb ; sb = 0.0
; if ( i_free_p [ 1 ] ) { sb = frac_ir [ i_p ] ; i_p ++ ; } frac_g5 [ 1 ] =
rtB . bvzqh0n5x5 [ 1 ] + sb ; frac_am [ 1 ] = sb ; sb = 0.0 ; if ( i_free_p [
2 ] ) { sb = frac_ir [ i_p ] ; i_p ++ ; } frac_g5 [ 2 ] = rtB . bvzqh0n5x5 [
2 ] + sb ; frac_am [ 2 ] = sb ; sb = 0.0 ; if ( i_free_p [ 3 ] ) { sb =
frac_ir [ i_p ] ; } frac_g5 [ 3 ] = rtB . bvzqh0n5x5 [ 3 ] + sb ; frac_am [ 3
] = sb ; i_p = 0 ; if ( i_free_p [ 0 ] ) { i_p = 1 ; } if ( i_free_p [ 1 ] )
{ i_p ++ ; } if ( i_free_p [ 2 ] ) { i_p ++ ; } if ( i_free_p [ 3 ] ) { i_p
++ ; } i = i_p ; i_p = 0 ; if ( i_free_p [ 0 ] ) { f_data_p [ 0 ] = 1 ; i_p =
1 ; } if ( i_free_p [ 1 ] ) { f_data_p [ i_p ] = 2 ; i_p ++ ; } if ( i_free_p
[ 2 ] ) { f_data_p [ i_p ] = 3 ; i_p ++ ; } if ( i_free_p [ 3 ] ) { f_data_p
[ i_p ] = 4 ; } frac_size = i ; for ( i_p = 0 ; i_p < i ; i_p ++ ) { f =
f_data_p [ i_p ] ; frac_data [ i_p ] = ( ( frac_g5 [ f - 1 ] < frac_mu [ f -
1 ] ) || ( frac_g5 [ f - 1 ] > frac_cv [ f - 1 ] ) ) ; } if ( ! ldlcqmqfqw (
frac_data , & frac_size ) ) { rtB . bvzqh0n5x5 [ 0 ] = frac_g5 [ 0 ] ; rtB .
bvzqh0n5x5 [ 1 ] = frac_g5 [ 1 ] ; rtB . bvzqh0n5x5 [ 2 ] = frac_g5 [ 2 ] ;
rtB . bvzqh0n5x5 [ 3 ] = frac_g5 [ 3 ] ; o4qizio5qf ( A_free_data_p ,
A_free_size_p , frac_ir , tmp_m ) ; for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { d_p
[ i_p ] -= tmp_m [ i_p ] ; } for ( i_p = 0 ; i_p < 4 ; i_p ++ ) { frac_ir [
i_p ] = 0.0 ; for ( i_e = 0 ; i_e < 7 ; i_e ++ ) { frac_ir [ i_p ] += A_p [ 7
* i_p + i_e ] * d_p [ i_e ] ; } frac_g5 [ i_p ] = frac_d1 [ i_p ] * frac_ir [
i_p ] ; } buu2icvrlx = true ; i_e = 0 ; exitg2 = false ; while ( ( ! exitg2 )
&& ( i_e < 4 ) ) { if ( ! ( frac_g5 [ i_e ] >= - 2.2204460492503131E-16 ) ) {
buu2icvrlx = false ; exitg2 = true ; } else { i_e ++ ; } } if ( buu2icvrlx )
{ iU = 1 ; exitg1 = 1 ; } else { aova43bznr ( frac_g5 , & j0r0arniji , & i_e
) ; frac_d1 [ i_e - 1 ] = 0.0 ; i_free_p [ i_e - 1 ] = true ; iU ++ ; } }
else { i_p = 0 ; frac_g5 [ 0 ] = 1.0 ; buu2icvrlx = ( frac_am [ 0 ] < 0.0 ) ;
b_idx_0 = ( frac_am [ 0 ] > 0.0 ) ; if ( i_free_p [ 0 ] && buu2icvrlx ) { i_p
= 1 ; } c_idx_0 = buu2icvrlx ; frac_g5 [ 1 ] = 1.0 ; buu2icvrlx = ( frac_am [
1 ] < 0.0 ) ; b_idx_1 = ( frac_am [ 1 ] > 0.0 ) ; if ( i_free_p [ 1 ] &&
buu2icvrlx ) { i_p ++ ; } c_idx_1 = buu2icvrlx ; frac_g5 [ 2 ] = 1.0 ;
buu2icvrlx = ( frac_am [ 2 ] < 0.0 ) ; b_idx_2 = ( frac_am [ 2 ] > 0.0 ) ; if
( i_free_p [ 2 ] && buu2icvrlx ) { i_p ++ ; } c_idx_2 = buu2icvrlx ; frac_g5
[ 3 ] = 1.0 ; buu2icvrlx = ( sb < 0.0 ) ; b_idx_3 = ( sb > 0.0 ) ; if (
i_free_p [ 3 ] && buu2icvrlx ) { i_p ++ ; } i = i_p ; i_p = 0 ; if ( i_free_p
[ 0 ] && c_idx_0 ) { g_data_p [ 0 ] = 1 ; i_p = 1 ; } if ( i_free_p [ 1 ] &&
c_idx_1 ) { g_data_p [ i_p ] = 2 ; i_p ++ ; } if ( i_free_p [ 2 ] && c_idx_2
) { g_data_p [ i_p ] = 3 ; i_p ++ ; } if ( i_free_p [ 3 ] && buu2icvrlx ) {
g_data_p [ i_p ] = 4 ; } for ( i_p = 0 ; i_p < i ; i_p ++ ) { f = g_data_p [
i_p ] ; frac_av [ i_p ] = ( frac_mu [ f - 1 ] - rtB . bvzqh0n5x5 [ f - 1 ] )
/ frac_am [ f - 1 ] ; } i_p = 0 ; if ( i_free_p [ 0 ] && c_idx_0 ) { frac_g5
[ 0 ] = frac_av [ 0 ] ; i_p = 1 ; } if ( i_free_p [ 1 ] && c_idx_1 ) {
frac_g5 [ 1 ] = frac_av [ i_p ] ; i_p ++ ; } if ( i_free_p [ 2 ] && c_idx_2 )
{ frac_g5 [ 2 ] = frac_av [ i_p ] ; i_p ++ ; } if ( i_free_p [ 3 ] &&
buu2icvrlx ) { frac_g5 [ 3 ] = frac_av [ i_p ] ; } i_p = 0 ; if ( i_free_p [
0 ] && b_idx_0 ) { i_p = 1 ; } if ( i_free_p [ 1 ] && b_idx_1 ) { i_p ++ ; }
if ( i_free_p [ 2 ] && b_idx_2 ) { i_p ++ ; } if ( i_free_p [ 3 ] && b_idx_3
) { i_p ++ ; } i = i_p ; i_p = 0 ; if ( i_free_p [ 0 ] && b_idx_0 ) {
h_data_p [ 0 ] = 1 ; i_p = 1 ; } if ( i_free_p [ 1 ] && b_idx_1 ) { h_data_p
[ i_p ] = 2 ; i_p ++ ; } if ( i_free_p [ 2 ] && b_idx_2 ) { h_data_p [ i_p ]
= 3 ; i_p ++ ; } if ( i_free_p [ 3 ] && b_idx_3 ) { h_data_p [ i_p ] = 4 ; }
for ( i_p = 0 ; i_p < i ; i_p ++ ) { f = h_data_p [ i_p ] ; frac_av [ i_p ] =
( frac_cv [ f - 1 ] - rtB . bvzqh0n5x5 [ f - 1 ] ) / frac_am [ f - 1 ] ; }
i_p = 0 ; if ( i_free_p [ 0 ] && b_idx_0 ) { frac_g5 [ 0 ] = frac_av [ 0 ] ;
i_p = 1 ; } if ( i_free_p [ 1 ] && b_idx_1 ) { frac_g5 [ 1 ] = frac_av [ i_p
] ; i_p ++ ; } if ( i_free_p [ 2 ] && b_idx_2 ) { frac_g5 [ 2 ] = frac_av [
i_p ] ; i_p ++ ; } if ( i_free_p [ 3 ] && b_idx_3 ) { frac_g5 [ 3 ] = frac_av
[ i_p ] ; } aova43bznr ( frac_g5 , & j0r0arniji , & i_e ) ; rtB . bvzqh0n5x5
[ 0 ] += j0r0arniji * frac_am [ 0 ] ; rtB . bvzqh0n5x5 [ 1 ] += j0r0arniji *
frac_am [ 1 ] ; rtB . bvzqh0n5x5 [ 2 ] += j0r0arniji * frac_am [ 2 ] ; rtB .
bvzqh0n5x5 [ 3 ] += j0r0arniji * sb ; A_free_size_i [ 0 ] = 7 ; A_free_size_i
[ 1 ] = e_size_idx_0 ; i = 7 * e_size_idx_0 ; e_size_idx_0 = ( i / 2 ) << 1 ;
vectorUB = e_size_idx_0 - 2 ; for ( i_p = 0 ; i_p <= vectorUB ; i_p += 2 ) {
tmp_c = _mm_loadu_pd ( & A_free_data_p [ i_p ] ) ; _mm_storeu_pd ( &
A_free_data_i [ i_p ] , _mm_mul_pd ( tmp_c , _mm_set1_pd ( j0r0arniji ) ) ) ;
} for ( i_p = e_size_idx_0 ; i_p < i ; i_p ++ ) { A_free_data_i [ i_p ] =
A_free_data_p [ i_p ] * j0r0arniji ; } o4qizio5qf ( A_free_data_i ,
A_free_size_i , frac_ir , tmp_m ) ; for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { d_p
[ i_p ] -= tmp_m [ i_p ] ; } frac_d1 [ i_e - 1 ] = muDoubleScalarSign (
frac_am [ i_e - 1 ] ) ; i_free_p [ i_e - 1 ] = false ; iU ++ ; } } else { iU
= 0 ; exitg1 = 1 ; } } while ( exitg1 == 0 ) ; for ( i_p = 0 ; i_p < 3 ; i_p
++ ) { rtB . eypzpl2k4a [ i_p ] = inoflfxzl4 [ i_p ] - ( ( ( rtB . jmtm5fxob3
[ i_p + 3 ] * rtB . bvzqh0n5x5 [ 1 ] + rtB . jmtm5fxob3 [ i_p ] * rtB .
bvzqh0n5x5 [ 0 ] ) + rtB . jmtm5fxob3 [ i_p + 6 ] * rtB . bvzqh0n5x5 [ 2 ] )
+ rtB . jmtm5fxob3 [ i_p + 9 ] * rtB . bvzqh0n5x5 [ 3 ] ) ; } if ( iU < 1 ) {
rtB . bvzqh0n5x5 [ 0 ] = acafcyi14i [ 0 ] ; rtB . bvzqh0n5x5 [ 1 ] =
acafcyi14i [ 1 ] ; rtB . bvzqh0n5x5 [ 2 ] = acafcyi14i [ 2 ] ; rtB .
bvzqh0n5x5 [ 3 ] = acafcyi14i [ 3 ] ; } else { rtB . bvzqh0n5x5 [ 0 ] +=
acafcyi14i [ 0 ] ; rtB . bvzqh0n5x5 [ 1 ] += acafcyi14i [ 1 ] ; rtB .
bvzqh0n5x5 [ 2 ] += acafcyi14i [ 2 ] ; rtB . bvzqh0n5x5 [ 3 ] += acafcyi14i [
3 ] ; } rtB . kjiouxavjc = s315_iter ; rtB . pzwihjpowt [ 0 ] = ( rtB .
ljez30jgck [ 0 ] - rtB . mkyju0odm1 [ 0 ] ) * rtP . fcc . rate_kb * rtP . fcc
. rate_ki + ( ncgfuwjrdt [ 0 ] - p4xbdqn5oc [ 0 ] ) * rtP . fcc . rate_ka ;
rtB . pzwihjpowt [ 1 ] = ( rtB . ljez30jgck [ 1 ] - rtB . mkyju0odm1 [ 1 ] )
* rtP . fcc . rate_kb * rtP . fcc . rate_ki + ( ncgfuwjrdt [ 1 ] - p4xbdqn5oc
[ 1 ] ) * rtP . fcc . rate_ka ; rtB . pzwihjpowt [ 2 ] = ( rtB . ljez30jgck [
2 ] - rtB . mkyju0odm1 [ 2 ] ) * rtP . fcc . rate_kb * rtP . fcc . rate_ki +
( kld3j4mgfs_idx_1 - p4xbdqn5oc [ 2 ] ) * rtP . fcc . rate_ka ; if ( rtB .
bvzqh0n5x5 [ 0 ] > f40yzytdn0 [ 0 ] ) { rtB . i5tai251hi [ 0 ] = f40yzytdn0 [
0 ] ; } else if ( rtB . bvzqh0n5x5 [ 0 ] < mstjku3ag5 [ 0 ] ) { rtB .
i5tai251hi [ 0 ] = mstjku3ag5 [ 0 ] ; } else { rtB . i5tai251hi [ 0 ] = rtB .
bvzqh0n5x5 [ 0 ] ; } if ( - rtB . bvzqh0n5x5 [ 0 ] > f40yzytdn0 [ 1 ] ) { rtB
. i5tai251hi [ 1 ] = f40yzytdn0 [ 1 ] ; } else if ( - rtB . bvzqh0n5x5 [ 0 ]
< mstjku3ag5 [ 1 ] ) { rtB . i5tai251hi [ 1 ] = mstjku3ag5 [ 1 ] ; } else {
rtB . i5tai251hi [ 1 ] = - rtB . bvzqh0n5x5 [ 0 ] ; } rtB . i5tai251hi [ 2 ]
= rtB . bvzqh0n5x5 [ 1 ] ; rtB . i5tai251hi [ 3 ] = rtB . bvzqh0n5x5 [ 2 ] ;
rtB . i5tai251hi [ 4 ] = rtB . enpvrp5gce [ 2 ] ; rtB . i5tai251hi [ 5 ] =
rtB . enpvrp5gce [ 2 ] ; rtB . i5tai251hi [ 18 ] = rtB . enpvrp5gce [ 0 ] ;
rtB . i5tai251hi [ 19 ] = rtB . izvthfvymi [ 19 ] ; fqencds54o = rtP . fcc .
k_DEP_slope * rtB . bvzqh0n5x5 [ 3 ] ; pxudjjmfpa ( rtB . enpvrp5gce [ 1 ] ,
fqencds54o , & rtB . lhvqmcwxnc ) ; for ( i = 0 ; i < 12 ; i ++ ) { if ( rtB
. lhvqmcwxnc . lxe0n2dnxv [ i ] > f40yzytdn0 [ i + 6 ] ) { rtB . i5tai251hi [
i + 6 ] = f40yzytdn0 [ i + 6 ] ; } else if ( rtB . lhvqmcwxnc . lxe0n2dnxv [
i ] < rtP . Constant_Value_n24x1pxnbh ) { rtB . i5tai251hi [ i + 6 ] = rtP .
Constant_Value_n24x1pxnbh ; } else { rtB . i5tai251hi [ i + 6 ] = rtB .
lhvqmcwxnc . lxe0n2dnxv [ i ] ; } } rtB . mibyp4a3ir = rtP . fcc . dt * rtP .
Constant1_Value_kreq0wqgss + j2olvplitn_idx_0 ; if ( rtP .
DirectionCosineMatrixtoRotationAngles_action_dsxyxaszhe != 1.0 ) { for ( i_p
= 0 ; i_p < 3 ; i_p ++ ) { for ( i_e = 0 ; i_e < 3 ; i_e ++ ) { iksijyt0t5 [
i_p + 3 * i_e ] = ( ( mwudvr0dno [ 3 * i_p + 1 ] * mwudvr0dno [ 3 * i_e + 1 ]
+ mwudvr0dno [ 3 * i_p ] * mwudvr0dno [ 3 * i_e ] ) + mwudvr0dno [ 3 * i_p +
2 ] * mwudvr0dno [ 3 * i_e + 2 ] ) + rtP . Bias1_Bias [ 3 * i_e + i_p ] ; } }
for ( i_p = 0 ; i_p < 9 ; i_p ++ ) { kprswhjtou [ i_p ] = ( muDoubleScalarAbs
( iksijyt0t5 [ i_p ] ) > rtP .
DirectionCosineMatrixtoRotationAngles_tolerance_m14a4duiqx ) ; } buu2icvrlx =
kprswhjtou [ 0 ] ; for ( iU = 0 ; iU < 8 ; iU ++ ) { buu2icvrlx = (
buu2icvrlx || kprswhjtou [ iU + 1 ] ) ; } if ( muDoubleScalarAbs ( ( ( ( ( (
mwudvr0dno [ 0 ] * mwudvr0dno [ 4 ] * mwudvr0dno [ 8 ] - mwudvr0dno [ 0 ] *
mwudvr0dno [ 5 ] * mwudvr0dno [ 7 ] ) - mwudvr0dno [ 1 ] * mwudvr0dno [ 3 ] *
mwudvr0dno [ 8 ] ) + mwudvr0dno [ 2 ] * mwudvr0dno [ 3 ] * mwudvr0dno [ 7 ] )
+ mwudvr0dno [ 1 ] * mwudvr0dno [ 5 ] * mwudvr0dno [ 6 ] ) - mwudvr0dno [ 2 ]
* mwudvr0dno [ 4 ] * mwudvr0dno [ 6 ] ) + rtP . Bias_Bias ) > rtP .
DirectionCosineMatrixtoRotationAngles_tolerance_m14a4duiqx ) { if ( rtP .
DirectionCosineMatrixtoRotationAngles_action_dsxyxaszhe == 2.0 ) { dzsm3cj0kl
( rtS , rtP . Constant1_Value_nluucvpbgy , & rtDW . kq23drdvrd ) ; } else if
( rtP . DirectionCosineMatrixtoRotationAngles_action_dsxyxaszhe == 3.0 ) {
iyuu340osl ( rtS , rtP . Constant1_Value_nluucvpbgy , & rtDW . c3nx5ahmxh ) ;
} srUpdateBC ( rtDW . ae5y3r3gcn ) ; } else if ( buu2icvrlx ) { if ( rtP .
DirectionCosineMatrixtoRotationAngles_action_dsxyxaszhe == 2.0 ) { dhyklihgew
( rtS , rtP . Constant1_Value_kctzo4nn4w , & rtDW . f2z2t5yyw1 ) ; } else if
( rtP . DirectionCosineMatrixtoRotationAngles_action_dsxyxaszhe == 3.0 ) {
avztlaubna ( rtS , rtP . Constant1_Value_kctzo4nn4w , & rtDW . onvtpfrqwn ) ;
} srUpdateBC ( rtDW . ixmz3u3uqw ) ; } srUpdateBC ( rtDW . l4pkohbzxl ) ; }
if ( e04f1erd1u > rtP . Switch_Threshold_oowek3aq0v ) { rtB . famxoupov1 =
rtP . Constant_Value_d25z0ool5h ; } else { rtB . famxoupov1 = rtP .
Constant1_Value_i2grkoua3y + rtB . omevzybjen ; } switch ( ( int32_T ) rtP .
Constant4_Value_ok5bwtwhgl ) { case 1 : memcpy ( & rtB . f0lcoipiql [ 0 ] , &
rtB . i5tai251hi [ 0 ] , 20U * sizeof ( real_T ) ) ; break ; case 2 : for ( i
= 0 ; i < 6 ; i ++ ) { rtB . f0lcoipiql [ i ] = rtP . u1_0 [ i ] ; } memcpy (
& rtB . f0lcoipiql [ 6 ] , & rtP . u2_0 [ 0 ] , 12U * sizeof ( real_T ) ) ;
rtB . f0lcoipiql [ 18 ] = rtP . u3_0 ; rtB . f0lcoipiql [ 19 ] = rtP . u4_0 ;
break ; default : rtB . f0lcoipiql [ 18 ] = rtP . Gain3_Gain_ecx4se1fsx * rtB
. kz552dd3t1 ; rtB . f0lcoipiql [ 19 ] = rtP . Constant1_Value_ex2qbdm54l ;
rtB . f0lcoipiql [ 6 ] = rtB . kz552dd3t1 ; rtB . f0lcoipiql [ 7 ] = rtB .
kz552dd3t1 ; rtB . f0lcoipiql [ 8 ] = rtB . kz552dd3t1 ; rtB . f0lcoipiql [ 9
] = rtP . Constant2_Value_appzvxjgoh ; rtB . f0lcoipiql [ 10 ] = rtP .
Constant2_Value_appzvxjgoh ; rtB . f0lcoipiql [ 11 ] = rtP .
Constant2_Value_appzvxjgoh ; rtB . f0lcoipiql [ 12 ] = rtP .
Constant2_Value_appzvxjgoh ; rtB . f0lcoipiql [ 13 ] = rtP .
Constant2_Value_appzvxjgoh ; rtB . f0lcoipiql [ 14 ] = rtP .
Constant2_Value_appzvxjgoh ; rtB . f0lcoipiql [ 15 ] = rtB . kz552dd3t1 ; rtB
. f0lcoipiql [ 16 ] = rtB . kz552dd3t1 ; rtB . f0lcoipiql [ 17 ] = rtB .
kz552dd3t1 ; if ( rtB . ekmklzxfox [ 3 ] > rtP . DeadZone2_End ) {
g52k1xdouv_idx_1 = rtB . ekmklzxfox [ 3 ] - rtP . DeadZone2_End ; } else if (
rtB . ekmklzxfox [ 3 ] >= rtP . DeadZone2_Start ) { g52k1xdouv_idx_1 = 0.0 ;
} else { g52k1xdouv_idx_1 = rtB . ekmklzxfox [ 3 ] - rtP . DeadZone2_Start ;
} j2olvplitn_idx_0 = rtP . Gain2_Gain_cgzzmzwgxo * g52k1xdouv_idx_1 ; if (
rtB . ekmklzxfox [ 1 ] > rtP . DeadZone1_End ) { g52k1xdouv_idx_1 = rtB .
ekmklzxfox [ 1 ] - rtP . DeadZone1_End ; } else if ( rtB . ekmklzxfox [ 1 ]
>= rtP . DeadZone1_Start ) { g52k1xdouv_idx_1 = 0.0 ; } else {
g52k1xdouv_idx_1 = rtB . ekmklzxfox [ 1 ] - rtP . DeadZone1_Start ; }
kld3j4mgfs_idx_1 = rtP . Gain1_Gain_m0xxn0hg1b * g52k1xdouv_idx_1 ; if ( rtB
. ekmklzxfox [ 0 ] > rtP . DeadZone_End ) { g52k1xdouv_idx_1 = rtB .
ekmklzxfox [ 0 ] - rtP . DeadZone_End ; } else if ( rtB . ekmklzxfox [ 0 ] >=
rtP . DeadZone_Start ) { g52k1xdouv_idx_1 = 0.0 ; } else { g52k1xdouv_idx_1 =
rtB . ekmklzxfox [ 0 ] - rtP . DeadZone_Start ; } sb = rtP .
Gain_Gain_haazg3a24j * g52k1xdouv_idx_1 ; if ( sb > rtP .
Saturation3_UpperSat_h0i0v5q4gn ) { rtB . f0lcoipiql [ 0 ] = rtP .
Saturation3_UpperSat_h0i0v5q4gn ; } else if ( sb < rtP .
Saturation3_LowerSat_g2rbbjchhn ) { rtB . f0lcoipiql [ 0 ] = rtP .
Saturation3_LowerSat_g2rbbjchhn ; } else { rtB . f0lcoipiql [ 0 ] = sb ; } if
( - sb > rtP . Saturation2_UpperSat_mjze1kt3o3 ) { rtB . f0lcoipiql [ 1 ] =
rtP . Saturation2_UpperSat_mjze1kt3o3 ; } else if ( - sb < rtP .
Saturation2_LowerSat_o4mdb0uk3s ) { rtB . f0lcoipiql [ 1 ] = rtP .
Saturation2_LowerSat_o4mdb0uk3s ; } else { rtB . f0lcoipiql [ 1 ] = - sb ; }
sb = kld3j4mgfs_idx_1 + - j2olvplitn_idx_0 ; if ( sb > rtP .
Saturation_UpperSat_ecnhjpc5q0 ) { rtB . f0lcoipiql [ 2 ] = rtP .
Saturation_UpperSat_ecnhjpc5q0 ; } else if ( sb < rtP .
Saturation_LowerSat_jv0jjhgv55 ) { rtB . f0lcoipiql [ 2 ] = rtP .
Saturation_LowerSat_jv0jjhgv55 ; } else { rtB . f0lcoipiql [ 2 ] = sb ; } sb
= kld3j4mgfs_idx_1 + j2olvplitn_idx_0 ; if ( sb > rtP .
Saturation1_UpperSat_fnkfoezvpn ) { rtB . f0lcoipiql [ 3 ] = rtP .
Saturation1_UpperSat_fnkfoezvpn ; } else if ( sb < rtP .
Saturation1_LowerSat_h10yxhpxfs ) { rtB . f0lcoipiql [ 3 ] = rtP .
Saturation1_LowerSat_h10yxhpxfs ; } else { rtB . f0lcoipiql [ 3 ] = sb ; }
rtB . f0lcoipiql [ 4 ] = rtP . Constant_Value_esplyfz3az ; rtB . f0lcoipiql [
5 ] = rtP . Constant_Value_esplyfz3az ; break ; } j2olvplitn_idx_0 = rtP .
Gain1_Gain_hfz1gyk0he * rtB . ekmklzxfox [ 0 ] ; if ( j2olvplitn_idx_0 > rtP
. DeadZone1_End_nignzxtmgf ) { rtB . e2gqyvidtc = j2olvplitn_idx_0 - rtP .
DeadZone1_End_nignzxtmgf ; } else if ( j2olvplitn_idx_0 >= rtP .
DeadZone1_Start_j1elmkerha ) { rtB . e2gqyvidtc = 0.0 ; } else { rtB .
e2gqyvidtc = j2olvplitn_idx_0 - rtP . DeadZone1_Start_j1elmkerha ; }
j2olvplitn_idx_0 = rtP . Gain_Gain_jw0m3gdqjz * rtB . ekmklzxfox [ 1 ] ; if (
j2olvplitn_idx_0 > rtP . DeadZone2_End_ombvzehdkb ) { rtB . bxb20ghqvu =
j2olvplitn_idx_0 - rtP . DeadZone2_End_ombvzehdkb ; } else if (
j2olvplitn_idx_0 >= rtP . DeadZone2_Start_edk0tuokto ) { rtB . bxb20ghqvu =
0.0 ; } else { rtB . bxb20ghqvu = j2olvplitn_idx_0 - rtP .
DeadZone2_Start_edk0tuokto ; } buu2icvrlx = ( ( jbp40v4j45 <= rtP .
Constant_Value_kvszop02ca ) || ( da3saky4rw < rtP . Constant_Value_ofkjbkrwdj
) ) ; if ( buu2icvrlx && ( ( da3saky4rw > rtP . Constant_Value_nbiwhz55uv )
|| ( jbp40v4j45 >= bcwof20ssn ) ) ) { rtB . nqnp5f0q15 = da3saky4rw ; } else
if ( ! buu2icvrlx ) { rtB . nqnp5f0q15 = ( rtP . Constant_Value_kvszop02ca -
jbp40v4j45 ) * rtP . Gain_Gain_jbucqlhfon ; } else { rtB . nqnp5f0q15 = (
bcwof20ssn - jbp40v4j45 ) * rtP . Gain1_Gain_lnprsvety4 ; } jbp40v4j45 = ( (
1.0 - rtP . Constant_Value_mxdnfv5xlo ) * rtB . ekmklzxfox [ 3 ] + rtP .
Constant_Value_mxdnfv5xlo * muDoubleScalarPower ( rtB . ekmklzxfox [ 3 ] ,
3.0 ) ) * rtP . Gain_Gain_hlszq1thhs ; if ( jbp40v4j45 > rtP . DeadZone3_End
) { rtB . pownj42keg = jbp40v4j45 - rtP . DeadZone3_End ; } else if (
jbp40v4j45 >= rtP . DeadZone3_Start ) { rtB . pownj42keg = 0.0 ; } else { rtB
. pownj42keg = jbp40v4j45 - rtP . DeadZone3_Start ; } if ( rtB . ftef13qeww >
rtP . Constant_Value_lztrojp0wv ) { g52k1xdouv_idx_1 = rtP .
Constant_Value_lztrojp0wv ; } else if ( rtB . ftef13qeww < rtB . mwjui1jwdj )
{ g52k1xdouv_idx_1 = rtB . mwjui1jwdj ; } else { g52k1xdouv_idx_1 = rtB .
ftef13qeww ; } rtB . kwx4tf2rpd = ( g52k1xdouv_idx_1 - lsurenbes1 ) * rtP .
Gain_Gain_g23mhqyecw ; jiw1iujqjc = ( real32_T ) ( rtP . Gain_Gain_hkwjozvx2n
* rtB . f0lcoipiql [ 0 ] ) ; bezhj2arkr ( rtP . Constant_Value_ezp4vos5at ,
jiw1iujqjc , & rtB . bd32gk0ocy ) ; ojlhabvsec = ( real32_T ) ( rtP .
Gain_Gain_mw0psof1f3 * rtB . f0lcoipiql [ 1 ] ) ; bezhj2arkr ( rtP .
Constant_Value_o1jhv21mne , ojlhabvsec , & rtB . dffuptpbcz ) ; rtB .
bopxyfw2ia = rtDW . kedw3dybgq ; lsurenbes1 = rtB . f0lcoipiql [ 11 ] * rtP .
Constant3_Value_arqhpk5tsi + rtB . bopxyfw2ia ; if ( lsurenbes1 > rtP .
Switch_Threshold_hotwss01ht ) { rtB . ecvavrybwp = rtP .
Constant2_Value_evxyvbxyx4 ; } else { rtB . ecvavrybwp = lsurenbes1 ; }
f5qwewprly = ( real32_T ) rtB . ecvavrybwp ; memset ( & rtB . j02ammmnbk [ 0
] , 32 , 509U * sizeof ( uint8_T ) ) ; for ( i_p = 0 ; i_p < 5 ; i_p ++ ) {
rtB . j02ammmnbk [ i_p ] = b_p [ i_p ] ; } memcpy ( ( void * ) & b_y [ 0 ] ,
( void * ) & f5qwewprly , ( uint32_T ) ( ( size_t ) 4 * sizeof ( uint8_T ) )
) ; rtB . j02ammmnbk [ 5 ] = b_y [ 0 ] ; rtB . j02ammmnbk [ 6 ] = b_y [ 1 ] ;
rtB . j02ammmnbk [ 7 ] = b_y [ 2 ] ; rtB . j02ammmnbk [ 8 ] = b_y [ 3 ] ; for
( i = 0 ; i < 29 ; i ++ ) { rtB . j02ammmnbk [ i + 9 ] = rtP .
Constant_Value_oln3j4ocph [ i ] ; } rtB . j02ammmnbk [ 38 ] = 0U ; if ( rtB .
f0lcoipiql [ 11 ] > rtP . Switch_Threshold_keldsx1mfj ) { f5qwewprly = (
real32_T ) rtP . Constant2_Value_fqbq1clpin ; } else { f5qwewprly = (
real32_T ) rtP . Constant3_Value_nbcxsvbsnn ; } memset ( & rtB . fmyapefplk [
0 ] , 32 , 509U * sizeof ( uint8_T ) ) ; for ( i_p = 0 ; i_p < 5 ; i_p ++ ) {
rtB . fmyapefplk [ i_p ] = b_p [ i_p ] ; } memcpy ( ( void * ) & b_y [ 0 ] ,
( void * ) & f5qwewprly , ( uint32_T ) ( ( size_t ) 4 * sizeof ( uint8_T ) )
) ; rtB . fmyapefplk [ 5 ] = b_y [ 0 ] ; rtB . fmyapefplk [ 6 ] = b_y [ 1 ] ;
rtB . fmyapefplk [ 7 ] = b_y [ 2 ] ; rtB . fmyapefplk [ 8 ] = b_y [ 3 ] ; for
( i = 0 ; i < 27 ; i ++ ) { rtB . fmyapefplk [ i + 9 ] = rtP .
Constant_Value_deiptb1fdi [ i ] ; } rtB . fmyapefplk [ 36 ] = 0U ; nfkmzcdnvu
= ( real32_T ) ( rtP . Gain_Gain_n4k11xn3pg * rtB . f0lcoipiql [ 2 ] ) ;
bhtkyxb11t ( rtP . Constant_Value_bunajjeyd1 , nfkmzcdnvu , & rtB .
hl5ibqcu3w ) ; ddrshnc1rz = ( real32_T ) ( rtP . Gain_Gain_lmgk2iw1td * rtB .
f0lcoipiql [ 3 ] ) ; bhtkyxb11t ( rtP . Constant_Value_fu24dwcohf ,
ddrshnc1rz , & rtB . pookhwl2ri ) ; f5qwewprly = ( real32_T ) ( rtP .
Gain_Gain_aycx2qnlhg * rtB . f0lcoipiql [ 4 ] * rtP . Gain_Gain_fqf4wrixzl )
; memset ( & rtB . fax0s1cyhb [ 0 ] , 32 , 509U * sizeof ( uint8_T ) ) ; for
( i_p = 0 ; i_p < 5 ; i_p ++ ) { rtB . fax0s1cyhb [ i_p ] = b_p [ i_p ] ; }
memcpy ( ( void * ) & b_y [ 0 ] , ( void * ) & f5qwewprly , ( uint32_T ) ( (
size_t ) 4 * sizeof ( uint8_T ) ) ) ; rtB . fax0s1cyhb [ 5 ] = b_y [ 0 ] ;
rtB . fax0s1cyhb [ 6 ] = b_y [ 1 ] ; rtB . fax0s1cyhb [ 7 ] = b_y [ 2 ] ; rtB
. fax0s1cyhb [ 8 ] = b_y [ 3 ] ; for ( i = 0 ; i < 32 ; i ++ ) { rtB .
fax0s1cyhb [ i + 9 ] = rtP . Constant_Value_p45zmbuefy [ i ] ; } rtB .
fax0s1cyhb [ 41 ] = 0U ; oympz1skih = ( real32_T ) rtB . f0lcoipiql [ 19 ] ;
f3054a4w15 ( rtP . Constant_Value_mpqd4zb22a , oympz1skih , & rtB .
enohy5yaap ) ; oqpjcq5edz = ( real32_T ) rtB . f0lcoipiql [ 19 ] ; f3054a4w15
( rtP . Constant_Value_prr5w4kjl2 , oqpjcq5edz , & rtB . nikuyjvr0y ) ;
iwbdjbsqge = ( real32_T ) rtB . f0lcoipiql [ 19 ] ; f3054a4w15 ( rtP .
Constant_Value_lqvyli4q5s , iwbdjbsqge , & rtB . jek5zaxern ) ; rtB .
okge55f2b5 = rtDW . ktsj2nkchd ; lsurenbes1 = rtB . f0lcoipiql [ 18 ] * rtP .
Constant3_Value_kdceg0pib4 + rtB . okge55f2b5 ; if ( lsurenbes1 > rtP .
Switch_Threshold_lm0zosgxar ) { rtB . n2fj5a4cso = rtP .
Constant2_Value_imckxbitho ; } else { rtB . n2fj5a4cso = lsurenbes1 ; }
fqtwihsnmo = ( real32_T ) rtB . n2fj5a4cso ; kgud4px1j0 ( rtP .
Constant_Value_e2xroppgrn , fqtwihsnmo , & rtB . n1ybyykngv ) ; arynktfrap =
( real32_T ) rtB . ecvavrybwp ; kgud4px1j0 ( rtP . Constant_Value_nmj1ootknt
, arynktfrap , & rtB . hztlwupntw ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) &&
ssIsMajorTimeStep ( rtS ) ) { zcEvent = rt_ZCFcn ( RISING_ZERO_CROSSING , &
rtPrevZCX . poxwpyd5xz , ( rtP . Constant_Value_lkyy414dse ) ) ; if ( zcEvent
!= NO_ZCEVENT ) { memset ( & rtB . i5lydheiao [ 0 ] , 32 , 509U * sizeof (
uint8_T ) ) ; for ( i_p = 0 ; i_p < 5 ; i_p ++ ) { rtB . i5lydheiao [ i_p ] =
b_p [ i_p ] ; } memcpy ( ( void * ) & b_y [ 0 ] , ( void * ) & rtB .
ckez2fhnc0 , ( uint32_T ) ( ( size_t ) 4 * sizeof ( uint8_T ) ) ) ; rtB .
i5lydheiao [ 5 ] = b_y [ 0 ] ; rtB . i5lydheiao [ 6 ] = b_y [ 1 ] ; rtB .
i5lydheiao [ 7 ] = b_y [ 2 ] ; rtB . i5lydheiao [ 8 ] = b_y [ 3 ] ; for ( i =
0 ; i < 45 ; i ++ ) { rtB . i5lydheiao [ i + 9 ] = rtP .
Constant_Value_ecr3ukwupu [ i ] ; } rtB . i5lydheiao [ 54 ] = 0U ; sErr =
GetErrorBuffer ( & rtDW . o4nasosvnh [ 0U ] ) ; LibUpdate_Network ( & rtDW .
o4nasosvnh [ 0U ] , & rtB . i5lydheiao [ 0U ] , 509 ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } rtDW .
anhm4dpp2l = 4 ; } zcEvent = rt_ZCFcn ( RISING_ZERO_CROSSING , & rtPrevZCX .
asefyvndgw , ( rtP . Constant1_Value_poq4unoobj ) ) ; if ( zcEvent !=
NO_ZCEVENT ) { memset ( & rtB . pvabiume5j [ 0 ] , 32 , 509U * sizeof (
uint8_T ) ) ; for ( i_p = 0 ; i_p < 5 ; i_p ++ ) { rtB . pvabiume5j [ i_p ] =
b_p [ i_p ] ; } memcpy ( ( void * ) & b_y [ 0 ] , ( void * ) & rtB .
ar3fw3fuom , ( uint32_T ) ( ( size_t ) 4 * sizeof ( uint8_T ) ) ) ; rtB .
pvabiume5j [ 5 ] = b_y [ 0 ] ; rtB . pvabiume5j [ 6 ] = b_y [ 1 ] ; rtB .
pvabiume5j [ 7 ] = b_y [ 2 ] ; rtB . pvabiume5j [ 8 ] = b_y [ 3 ] ; for ( i =
0 ; i < 48 ; i ++ ) { rtB . pvabiume5j [ i + 9 ] = rtP .
Constant_Value_cj4suguqdh [ i ] ; } rtB . pvabiume5j [ 57 ] = 0U ; sErr =
GetErrorBuffer ( & rtDW . lwsgjestu3 [ 0U ] ) ; LibUpdate_Network ( & rtDW .
lwsgjestu3 [ 0U ] , & rtB . pvabiume5j [ 0U ] , 509 ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } rtDW .
cfvgbkovvu = 4 ; } } rtB . jrm5mulpgo [ 0 ] = ( real32_T ) cuwl4zp4yw [ 0 ] ;
rtB . gatr2i4bsw [ 0 ] = rtP . Constant_Value_o1n0s5ledo [ 0 ] + rtB .
mkyju0odm1 [ 0 ] ; if ( rtP . ManualSwitch1_CurrentSetting == 1 ) {
kld3j4mgfs_idx_0 = rtB . gatr2i4bsw [ 0 ] ; } else { kld3j4mgfs_idx_0 = rtB .
mkyju0odm1 [ 0 ] ; } rtB . kp4feo544t [ 0 ] = ( real32_T ) kld3j4mgfs_idx_0 ;
rtB . jrm5mulpgo [ 1 ] = ( real32_T ) cuwl4zp4yw [ 1 ] ; rtB . gatr2i4bsw [ 1
] = rtP . Constant_Value_o1n0s5ledo [ 1 ] + rtB . mkyju0odm1 [ 1 ] ; if ( rtP
. ManualSwitch1_CurrentSetting == 1 ) { kld3j4mgfs_idx_0 = rtB . gatr2i4bsw [
1 ] ; } else { kld3j4mgfs_idx_0 = rtB . mkyju0odm1 [ 1 ] ; } rtB . kp4feo544t
[ 1 ] = ( real32_T ) kld3j4mgfs_idx_0 ; rtB . jrm5mulpgo [ 2 ] = ( real32_T )
lclwc4tmbx ; rtB . gatr2i4bsw [ 2 ] = rtP . Constant_Value_o1n0s5ledo [ 2 ] +
rtB . mkyju0odm1 [ 2 ] ; if ( rtP . ManualSwitch1_CurrentSetting == 1 ) {
kld3j4mgfs_idx_0 = rtB . gatr2i4bsw [ 2 ] ; } else { kld3j4mgfs_idx_0 = rtB .
mkyju0odm1 [ 2 ] ; } rtB . kp4feo544t [ 2 ] = ( real32_T ) kld3j4mgfs_idx_0 ;
parallel_for ( 14 , ppqwruko3j , 1 , "ppqwruko3j" ) ; rtB . korrwukkg3 [ 0 ]
= rtB . cfz24gonbx [ 6 ] ; rtB . korrwukkg3 [ 1 ] = rtB . cfz24gonbx [ 5 ] ;
rtB . korrwukkg3 [ 2 ] = rtB . cfz24gonbx [ 4 ] ; rtB . korrwukkg3 [ 3 ] =
rtB . cfz24gonbx [ 3 ] ; rtB . korrwukkg3 [ 4 ] = rtB . cfz24gonbx [ 2 ] ;
rtB . korrwukkg3 [ 5 ] = rtB . cfz24gonbx [ 1 ] ; rtB . korrwukkg3 [ 6 ] =
rtB . cfz24gonbx [ 0 ] ; liydxvyvbx [ 0 ] = rtB . nmxk2xrfk3 [ 6 ] ;
liydxvyvbx [ 1 ] = rtB . nmxk2xrfk3 [ 5 ] ; liydxvyvbx [ 2 ] = rtB .
nmxk2xrfk3 [ 4 ] ; liydxvyvbx [ 3 ] = rtB . nmxk2xrfk3 [ 3 ] ; liydxvyvbx [ 4
] = rtB . nmxk2xrfk3 [ 2 ] ; liydxvyvbx [ 5 ] = rtB . nmxk2xrfk3 [ 1 ] ;
liydxvyvbx [ 6 ] = rtB . nmxk2xrfk3 [ 0 ] ; liydxvyvbx [ 7 ] = rtB .
nmxk2xrfk3 [ 6 ] ; liydxvyvbx [ 8 ] = rtB . nmxk2xrfk3 [ 5 ] ; liydxvyvbx [ 9
] = rtB . nmxk2xrfk3 [ 4 ] ; liydxvyvbx [ 10 ] = rtB . nmxk2xrfk3 [ 3 ] ;
liydxvyvbx [ 11 ] = rtB . nmxk2xrfk3 [ 2 ] ; liydxvyvbx [ 12 ] = rtB .
nmxk2xrfk3 [ 1 ] ; liydxvyvbx [ 13 ] = rtB . nmxk2xrfk3 [ 0 ] ; liydxvyvbx [
14 ] = rtB . nmxk2xrfk3 [ 6 ] ; liydxvyvbx [ 15 ] = rtB . nmxk2xrfk3 [ 5 ] ;
liydxvyvbx [ 16 ] = rtB . nmxk2xrfk3 [ 4 ] ; liydxvyvbx [ 17 ] = rtB .
nmxk2xrfk3 [ 3 ] ; liydxvyvbx [ 18 ] = rtB . nmxk2xrfk3 [ 2 ] ; liydxvyvbx [
19 ] = rtB . nmxk2xrfk3 [ 1 ] ; liydxvyvbx [ 20 ] = rtB . nmxk2xrfk3 [ 0 ] ;
for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { ge04r1sxrb [ 3 * i_p ] = liydxvyvbx [
i_p ] ; ge04r1sxrb [ 3 * i_p + 1 ] = liydxvyvbx [ i_p + 7 ] ; ge04r1sxrb [ 3
* i_p + 2 ] = liydxvyvbx [ i_p + 14 ] ; } for ( i_p = 0 ; i_p < 21 ; i_p ++ )
{ bdvkktmal5_idx_0 = ge04r1sxrb [ i_p ] ; bdvkktmal5_idx_0 *=
bdvkktmal5_idx_0 ; ge04r1sxrb [ i_p ] = bdvkktmal5_idx_0 ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { for ( i = 0 ; i < 6 ; i ++ ) { rtB .
ak0q0uaprv [ i ] = ( real32_T ) rtB . f0lcoipiql [ i ] ; } rtB . pgacreyak0 =
plook_u32ff_lincpa ( rtB . ak0q0uaprv [ 4 ] , rtP . dp_WING_root . flap_defl
, 4U , & rtB . buybsypzuh , & rtDW . onpp1osnf1 ) ; } d2guuznk3s [ 0 ] = rtB
. cfz24gonbx [ 6 ] ; d2guuznk3s [ 1 ] = rtB . cfz24gonbx [ 5 ] ; d2guuznk3s [
2 ] = rtB . cfz24gonbx [ 4 ] ; d2guuznk3s [ 3 ] = rtB . cfz24gonbx [ 3 ] ;
d2guuznk3s [ 4 ] = rtB . cfz24gonbx [ 2 ] ; for ( iU = 0 ; iU < 5 ; iU ++ ) {
h0u2qqbsra [ iU ] = plook_u32ff_lincpa ( d2guuznk3s [ iU ] , rtP .
dp_WING_root . alphas , 24U , & gsmuzimw5z [ iU ] , & rtDW . knywr3cygt [ iU
] ) ; } d2guuznk3s [ 0 ] = rtB . nmxk2xrfk3 [ 6 ] ; d2guuznk3s [ 1 ] = rtB .
nmxk2xrfk3 [ 5 ] ; d2guuznk3s [ 2 ] = rtB . nmxk2xrfk3 [ 4 ] ; d2guuznk3s [ 3
] = rtB . nmxk2xrfk3 [ 3 ] ; d2guuznk3s [ 4 ] = rtB . nmxk2xrfk3 [ 2 ] ; for
( iU = 0 ; iU < 5 ; iU ++ ) { kugs2ta1qq [ iU ] = plook_u32ff_lincpa (
d2guuznk3s [ iU ] , rtP . dp_WING_root . V , 1U , & l2m0tr3gxj [ iU ] , &
rtDW . bxxehqrfhk [ iU ] ) ; } for ( i = 0 ; i <= 10 ; i += 2 ) { tmp_c =
_mm_loadu_pd ( & rtB . dcirnuyxde [ i ] ) ; _mm_storeu_pd ( & rtB .
nupdx24lfb [ i ] , _mm_mul_pd ( _mm_add_pd ( _mm_mul_pd ( _mm_set1_pd ( rtB .
mkyju0odm1 [ 2 ] ) , tmp_c ) , _mm_set1_pd ( cuwl4zp4yw [ 0 ] ) ) ,
_mm_set1_pd ( rtB . jferaaeyyn ) ) ) ; } for ( aldazsptev = 0 ; aldazsptev <
12 ; aldazsptev ++ ) { if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { sb = rtB .
f0lcoipiql [ aldazsptev + 6 ] ; if ( sb > rtP . adqmzv0sx0 .
Saturation2_UpperSat ) { rtB . adqmzv0sx0 [ aldazsptev ] . ibnqksi5kc = rtP .
adqmzv0sx0 . Saturation2_UpperSat ; } else if ( sb < rtP . adqmzv0sx0 .
Saturation2_LowerSat ) { rtB . adqmzv0sx0 [ aldazsptev ] . ibnqksi5kc = rtP .
adqmzv0sx0 . Saturation2_LowerSat ; } else { rtB . adqmzv0sx0 [ aldazsptev ]
. ibnqksi5kc = sb ; } rtB . adqmzv0sx0 [ aldazsptev ] . jagzqtugld = rtP .
adqmzv0sx0 . actf2T_Gain * rtB . adqmzv0sx0 [ aldazsptev ] . ibnqksi5kc ; }
if ( rtB . adqmzv0sx0 [ aldazsptev ] . ibnqksi5kc > rtP . adqmzv0sx0 .
Switch1_Threshold ) { bcwof20ssn = look2_plinlcpw ( rtB . nupdx24lfb [
aldazsptev ] , rtB . adqmzv0sx0 [ aldazsptev ] . jagzqtugld , rtP . dp_DEP .
rpm_lookup . V_vec , rtP . dp_DEP . rpm_lookup . T_vec , rtP . dp_DEP .
rpm_lookup . rpm_gird , rtDW . adqmzv0sx0 [ aldazsptev ] . mczobgpj2t , rtP .
adqmzv0sx0 . T2rpm_maxIndex , 43U ) ; } else { bcwof20ssn = rtP . adqmzv0sx0
. Constant3_Value ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . adqmzv0sx0
[ aldazsptev ] . dfpeduhr4c [ 0 ] = rtP . xyz_DEP [ 3 * aldazsptev ] - rtB .
adqmzv0sx0 [ aldazsptev ] . aox0khugvh [ 0 ] ; rtB . adqmzv0sx0 [ aldazsptev
] . dfpeduhr4c [ 1 ] = rtP . xyz_DEP [ 3 * aldazsptev + 1 ] - rtB .
adqmzv0sx0 [ aldazsptev ] . aox0khugvh [ 1 ] ; rtB . adqmzv0sx0 [ aldazsptev
] . dfpeduhr4c [ 2 ] = rtP . xyz_DEP [ 3 * aldazsptev + 2 ] - rtB .
adqmzv0sx0 [ aldazsptev ] . aox0khugvh [ 2 ] ; } lsurenbes1 = rtP .
adqmzv0sx0 . Gain7_Gain * rtX . adqmzv0sx0 [ aldazsptev ] . jtqvm3jkcz ; if (
lsurenbes1 > rtP . adqmzv0sx0 . Saturation_UpperSat ) { j2olvplitn_idx_0 =
rtP . adqmzv0sx0 . Saturation_UpperSat ; } else if ( lsurenbes1 < rtP .
adqmzv0sx0 . Saturation_LowerSat ) { j2olvplitn_idx_0 = rtP . adqmzv0sx0 .
Saturation_LowerSat ; } else { j2olvplitn_idx_0 = lsurenbes1 ; } jbp40v4j45 =
rtB . nupdx24lfb [ aldazsptev ] / ( rtP . adqmzv0sx0 . Gain2_Gain *
j2olvplitn_idx_0 + rtP . adqmzv0sx0 . Constant_Value_hl5xkc3gs1 ) ; if (
jbp40v4j45 > rtP . adqmzv0sx0 . Saturation1_UpperSat ) { jbp40v4j45 = rtP .
adqmzv0sx0 . Saturation1_UpperSat ; } else if ( jbp40v4j45 < rtP . adqmzv0sx0
. Saturation1_LowerSat ) { jbp40v4j45 = rtP . adqmzv0sx0 .
Saturation1_LowerSat ; } da3saky4rw = look1_plinlcapw ( jbp40v4j45 , rtP .
dp_DEP . J , rtP . dp_DEP . C_T , & rtDW . adqmzv0sx0 [ aldazsptev ] .
adrjjytrwd , 45U ) ; j2olvplitn_idx_0 *= j2olvplitn_idx_0 ; sb = rtB .
lhopa3gq4f * da3saky4rw * j2olvplitn_idx_0 * rtP . adqmzv0sx0 . Gain3_Gain ;
if ( sb > rtP . adqmzv0sx0 . Saturation_UpperSat_ollczcryiu ) { sb = rtP .
adqmzv0sx0 . Saturation_UpperSat_ollczcryiu ; } else if ( sb < rtP .
adqmzv0sx0 . Saturation_LowerSat_oypzpqvfzv ) { sb = rtP . adqmzv0sx0 .
Saturation_LowerSat_oypzpqvfzv ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) {
cuwl4zp4yw [ i_p ] = ( rtB . adqmzv0sx0 [ aldazsptev ] . dbnx540oz1 [ i_p + 3
] * rtP . adqmzv0sx0 . Constant_Value + rtB . adqmzv0sx0 [ aldazsptev ] .
dbnx540oz1 [ i_p ] * sb ) + rtB . adqmzv0sx0 [ aldazsptev ] . dbnx540oz1 [
i_p + 6 ] * rtP . adqmzv0sx0 . Constant_Value ; } da3saky4rw =
look1_plinlcapw ( jbp40v4j45 , rtP . dp_DEP . J , rtP . dp_DEP . C_Q , & rtDW
. adqmzv0sx0 [ aldazsptev ] . mirazmrnvl , 45U ) ; da3saky4rw = rtB .
lhopa3gq4f * da3saky4rw * j2olvplitn_idx_0 * rtP . adqmzv0sx0 . Gain_Gain ;
if ( da3saky4rw > rtP . adqmzv0sx0 . Saturation1_UpperSat_e5noinhxx3 ) {
hjpu2sw0us_idx_1 = rtP . adqmzv0sx0 . Saturation1_UpperSat_e5noinhxx3 ; }
else if ( da3saky4rw < rtP . adqmzv0sx0 . Saturation1_LowerSat_ghkwhqvuwp ) {
hjpu2sw0us_idx_1 = rtP . adqmzv0sx0 . Saturation1_LowerSat_ghkwhqvuwp ; }
else { hjpu2sw0us_idx_1 = da3saky4rw ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) {
a5zxkwaluu [ i_p ] = ( rtB . adqmzv0sx0 [ aldazsptev ] . dbnx540oz1 [ i_p + 3
] * rtP . adqmzv0sx0 . Constant_Value + rtB . adqmzv0sx0 [ aldazsptev ] .
dbnx540oz1 [ i_p ] * hjpu2sw0us_idx_1 ) + rtB . adqmzv0sx0 [ aldazsptev ] .
dbnx540oz1 [ i_p + 6 ] * rtP . adqmzv0sx0 . Constant_Value ; }
j2olvplitn_idx_0 = rtP . adqmzv0sx0 . Gain5_Gain * lsurenbes1 ; sb =
bcwof20ssn - j2olvplitn_idx_0 ; bcwof20ssn = rtP . adqmzv0sx0 . EM_P * sb +
rtX . adqmzv0sx0 [ aldazsptev ] . dkxi20ccfc ; if ( bcwof20ssn > rtP .
adqmzv0sx0 . EM_UpperSaturationLimit ) { kld3j4mgfs_idx_1 = bcwof20ssn - rtP
. adqmzv0sx0 . EM_UpperSaturationLimit ; } else if ( bcwof20ssn >= rtP .
adqmzv0sx0 . EM_LowerSaturationLimit ) { kld3j4mgfs_idx_1 = 0.0 ; } else {
kld3j4mgfs_idx_1 = bcwof20ssn - rtP . adqmzv0sx0 . EM_LowerSaturationLimit ;
} sb *= rtP . adqmzv0sx0 . EM_I ; g52k1xdouv_idx_1 = muDoubleScalarSign (
kld3j4mgfs_idx_1 ) ; if ( muDoubleScalarIsNaN ( g52k1xdouv_idx_1 ) ) {
g52k1xdouv_idx_1 = 0.0 ; } else { g52k1xdouv_idx_1 = muDoubleScalarRem (
g52k1xdouv_idx_1 , 256.0 ) ; } kld3j4mgfs_idx_0 = muDoubleScalarSign ( sb ) ;
if ( muDoubleScalarIsNaN ( kld3j4mgfs_idx_0 ) ) { kld3j4mgfs_idx_0 = 0.0 ; }
else { kld3j4mgfs_idx_0 = muDoubleScalarRem ( kld3j4mgfs_idx_0 , 256.0 ) ; }
rtB . adqmzv0sx0 [ aldazsptev ] . cgxtlo5ezj = ( ( rtP . adqmzv0sx0 .
ZeroGain_Gain * bcwof20ssn != kld3j4mgfs_idx_1 ) && ( ( g52k1xdouv_idx_1 <
0.0 ? ( int32_T ) ( int8_T ) - ( int8_T ) ( uint8_T ) - g52k1xdouv_idx_1 : (
int32_T ) ( int8_T ) ( uint8_T ) g52k1xdouv_idx_1 ) == ( kld3j4mgfs_idx_0 <
0.0 ? ( int32_T ) ( int8_T ) - ( int8_T ) ( uint8_T ) - kld3j4mgfs_idx_0 : (
int32_T ) ( int8_T ) ( uint8_T ) kld3j4mgfs_idx_0 ) ) ) ; if ( ssIsSampleHit
( rtS , 1 , 0 ) ) { rtB . adqmzv0sx0 [ aldazsptev ] . hqlowwzkov = rtDW .
adqmzv0sx0 [ aldazsptev ] . kd3fwxo3ke ; } if ( rtB . adqmzv0sx0 [ aldazsptev
] . hqlowwzkov ) { rtB . adqmzv0sx0 [ aldazsptev ] . ex2xojeend = rtP .
adqmzv0sx0 . Constant1_Value ; } else { rtB . adqmzv0sx0 [ aldazsptev ] .
ex2xojeend = sb ; } if ( bcwof20ssn > rtP . adqmzv0sx0 .
EM_UpperSaturationLimit ) { bcwof20ssn = rtP . adqmzv0sx0 .
EM_UpperSaturationLimit ; } else if ( bcwof20ssn < rtP . adqmzv0sx0 .
EM_LowerSaturationLimit ) { bcwof20ssn = rtP . adqmzv0sx0 .
EM_LowerSaturationLimit ; } rtB . adqmzv0sx0 [ aldazsptev ] . n52zpi4j4s = (
bcwof20ssn - da3saky4rw ) * rtP . adqmzv0sx0 . Multiply1_Gain ; rtB .
nhnvabjkuz [ aldazsptev ] = j2olvplitn_idx_0 ; gmj3cy4km1 [ aldazsptev ] =
rtP . adqmzv0sx0 . Gain3_Gain_cb0ak2utk4 * lsurenbes1 * da3saky4rw ;
g52k1xdouv_idx_1 = rtP . Constant2_Value_eyx5hzotxm [ aldazsptev ] ; if (
jbp40v4j45 > rtP . adqmzv0sx0 . Saturation3_UpperSat ) { rtB . anhsgyheay [
aldazsptev ] = rtP . adqmzv0sx0 . Saturation3_UpperSat ; } else if (
jbp40v4j45 < rtP . adqmzv0sx0 . Saturation3_LowerSat ) { rtB . anhsgyheay [
aldazsptev ] = rtP . adqmzv0sx0 . Saturation3_LowerSat ; } else { rtB .
anhsgyheay [ aldazsptev ] = jbp40v4j45 ; } gsnhdicnm0 [ 3 * aldazsptev ] = (
rtB . adqmzv0sx0 [ aldazsptev ] . dfpeduhr4c [ 1 ] * cuwl4zp4yw [ 2 ] -
cuwl4zp4yw [ 1 ] * rtB . adqmzv0sx0 [ aldazsptev ] . dfpeduhr4c [ 2 ] ) +
g52k1xdouv_idx_1 * a5zxkwaluu [ 0 ] ; dsccgxajgj [ 3 * aldazsptev ] =
cuwl4zp4yw [ 0 ] ; gsnhdicnm0 [ 3 * aldazsptev + 1 ] = ( cuwl4zp4yw [ 0 ] *
rtB . adqmzv0sx0 [ aldazsptev ] . dfpeduhr4c [ 2 ] - rtB . adqmzv0sx0 [
aldazsptev ] . dfpeduhr4c [ 0 ] * cuwl4zp4yw [ 2 ] ) + g52k1xdouv_idx_1 *
a5zxkwaluu [ 1 ] ; dsccgxajgj [ 3 * aldazsptev + 1 ] = cuwl4zp4yw [ 1 ] ;
gsnhdicnm0 [ 3 * aldazsptev + 2 ] = ( rtB . adqmzv0sx0 [ aldazsptev ] .
dfpeduhr4c [ 0 ] * cuwl4zp4yw [ 1 ] - cuwl4zp4yw [ 0 ] * rtB . adqmzv0sx0 [
aldazsptev ] . dfpeduhr4c [ 1 ] ) + g52k1xdouv_idx_1 * a5zxkwaluu [ 2 ] ;
dsccgxajgj [ 3 * aldazsptev + 2 ] = cuwl4zp4yw [ 2 ] ; } for ( i = 0 ; i < 12
; i ++ ) { prizw2ngzn [ i ] = ( real32_T ) rtB . anhsgyheay [ i ] ; }
d2guuznk3s [ 0 ] = prizw2ngzn [ 5 ] ; d2guuznk3s [ 1 ] = prizw2ngzn [ 4 ] ;
d2guuznk3s [ 2 ] = prizw2ngzn [ 3 ] ; d2guuznk3s [ 3 ] = prizw2ngzn [ 2 ] ;
d2guuznk3s [ 4 ] = prizw2ngzn [ 1 ] ; for ( iU = 0 ; iU < 5 ; iU ++ ) {
okphy1ntzm [ iU ] = plook_u32ff_lincpa ( d2guuznk3s [ iU ] , rtP .
dp_WING_root . DEP_J , 6U , & kybpw4f1la [ iU ] , & rtDW . lybiwzq15a [ iU ]
) ; } frac [ 0 ] = rtB . buybsypzuh ; bpIndex [ 0 ] = rtB . pgacreyak0 ; for
( iU = 0 ; iU < 5 ; iU ++ ) { frac [ 1 ] = gsmuzimw5z [ iU ] ; frac [ 2 ] =
l2m0tr3gxj [ iU ] ; frac [ 3 ] = kybpw4f1la [ iU ] ; bpIndex [ 1 ] =
h0u2qqbsra [ iU ] ; bpIndex [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex [ 3 ] =
okphy1ntzm [ iU ] ; if ( rtP . Constant8_Value_fdguqum2g1 [ iU ] > 4.0 ) {
bpIndex [ 4 ] = 4U ; } else { bpIndex [ 4 ] = ( uint32_T ) muDoubleScalarMax
( rtP . Constant8_Value_fdguqum2g1 [ iU ] , 0.0 ) ; } liydxvyvbx [ iU ] =
intrp4d_fu32fla_pw ( bpIndex , frac , & rtP . dp_WING_root . CD [ 1750U *
bpIndex [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_n5actodiw1 , rtP
. InterpolationUsingPrelookup1_maxIndex_pqkeiews41 ) ; } if ( ssIsSampleHit (
rtS , 2 , 0 ) ) { rtB . lcfixu2lfk = plook_u32ff_lincpa ( rtB . ak0q0uaprv [
0 ] , rtP . dp_WING_tip . ail_defl , 6U , & rtB . kdl2q2ktlu , & rtDW .
hhpqcwloh0 ) ; } m04ebe1zz2 = plook_u32ff_lincpa ( rtB . cfz24gonbx [ 1 ] ,
rtP . dp_WING_tip . alphas , 24U , & m1ahso5u4m [ 0 ] , & rtDW . hxdxaozqh1 [
0 ] ) ; kiombdthr4 = plook_u32ff_lincpa ( rtB . cfz24gonbx [ 0 ] , rtP .
dp_WING_tip . alphas , 24U , & m1ahso5u4m [ 1 ] , & rtDW . hxdxaozqh1 [ 1 ] )
; n5yhkyeg5n_idx_0 = plook_u32ff_lincpa ( rtB . nmxk2xrfk3 [ 1 ] , rtP .
dp_WING_tip . V , 1U , & d3scbkbwlb [ 0 ] , & rtDW . fknte5kkos [ 0 ] ) ;
n5yhkyeg5n_idx_1 = plook_u32ff_lincpa ( rtB . nmxk2xrfk3 [ 0 ] , rtP .
dp_WING_tip . V , 1U , & d3scbkbwlb [ 1 ] , & rtDW . fknte5kkos [ 1 ] ) ;
khukbzvgdj_idx_0 = plook_u32ff_lincpa ( prizw2ngzn [ 1 ] , rtP . dp_WING_tip
. DEP_J , 6U , & njurhkovsz [ 0 ] , & rtDW . mnfw2imvdw [ 0 ] ) ;
khukbzvgdj_idx_1 = plook_u32ff_lincpa ( prizw2ngzn [ 0 ] , rtP . dp_WING_tip
. DEP_J , 6U , & njurhkovsz [ 1 ] , & rtDW . mnfw2imvdw [ 1 ] ) ; frac_p [ 0
] = rtB . kdl2q2ktlu ; bpIndex_p [ 0 ] = rtB . lcfixu2lfk ; frac_p [ 1 ] =
m1ahso5u4m [ 0 ] ; frac_p [ 2 ] = d3scbkbwlb [ 0 ] ; frac_p [ 3 ] =
njurhkovsz [ 0 ] ; bpIndex_p [ 1 ] = m04ebe1zz2 ; bpIndex_p [ 2 ] =
n5yhkyeg5n_idx_0 ; bpIndex_p [ 3 ] = khukbzvgdj_idx_0 ; if ( rtP .
Constant8_Value_dn0swibioj [ 0 ] > 1.0 ) { bpIndex_p [ 4 ] = 1U ; } else {
bpIndex_p [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_dn0swibioj [ 0 ] , 0.0 ) ; } liydxvyvbx [ 5 ] =
intrp4d_fu32fla_pw ( bpIndex_p , frac_p , & rtP . dp_WING_tip . CD [ 2450U *
bpIndex_p [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_gfiklomvd1 ,
rtP . InterpolationUsingPrelookup1_maxIndex_kpkpckmswm ) ; frac_p [ 1 ] =
m1ahso5u4m [ 1 ] ; frac_p [ 2 ] = d3scbkbwlb [ 1 ] ; frac_p [ 3 ] =
njurhkovsz [ 1 ] ; bpIndex_p [ 1 ] = kiombdthr4 ; bpIndex_p [ 2 ] =
n5yhkyeg5n_idx_1 ; bpIndex_p [ 3 ] = khukbzvgdj_idx_1 ; if ( rtP .
Constant8_Value_dn0swibioj [ 1 ] > 1.0 ) { bpIndex_p [ 4 ] = 1U ; } else {
bpIndex_p [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_dn0swibioj [ 1 ] , 0.0 ) ; } liydxvyvbx [ 6 ] =
intrp4d_fu32fla_pw ( bpIndex_p , frac_p , & rtP . dp_WING_tip . CD [ 2450U *
bpIndex_p [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_gfiklomvd1 ,
rtP . InterpolationUsingPrelookup1_maxIndex_kpkpckmswm ) ; frac_e [ 0 ] = rtB
. buybsypzuh ; bpIndex_e [ 0 ] = rtB . pgacreyak0 ; for ( iU = 0 ; iU < 5 ;
iU ++ ) { frac_e [ 1 ] = gsmuzimw5z [ iU ] ; frac_e [ 2 ] = l2m0tr3gxj [ iU ]
; frac_e [ 3 ] = kybpw4f1la [ iU ] ; bpIndex_e [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_e [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_e [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_fdguqum2g1 [ iU ] > 4.0 ) { bpIndex_e [ 4 ] = 4U ;
} else { bpIndex_e [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_fdguqum2g1 [ iU ] , 0.0 ) ; } liydxvyvbx [ iU + 7 ] =
intrp4d_fu32fla_pw ( bpIndex_e , frac_e , & rtP . dp_WING_root . CS [ 1750U *
bpIndex_e [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_jnqmfk2tr5 ,
rtP . InterpolationUsingPrelookup2_maxIndex_br2dnz0iqq ) ; } frac_i [ 0 ] =
rtB . kdl2q2ktlu ; bpIndex_i [ 0 ] = rtB . lcfixu2lfk ; frac_i [ 1 ] =
m1ahso5u4m [ 0 ] ; frac_i [ 2 ] = d3scbkbwlb [ 0 ] ; frac_i [ 3 ] =
njurhkovsz [ 0 ] ; bpIndex_i [ 1 ] = m04ebe1zz2 ; bpIndex_i [ 2 ] =
n5yhkyeg5n_idx_0 ; bpIndex_i [ 3 ] = khukbzvgdj_idx_0 ; if ( rtP .
Constant8_Value_dn0swibioj [ 0 ] > 1.0 ) { bpIndex_i [ 4 ] = 1U ; } else {
bpIndex_i [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_dn0swibioj [ 0 ] , 0.0 ) ; } liydxvyvbx [ 12 ] =
intrp4d_fu32fla_pw ( bpIndex_i , frac_i , & rtP . dp_WING_tip . CS [ 2450U *
bpIndex_i [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_nrl20k3nz5 ,
rtP . InterpolationUsingPrelookup2_maxIndex_halnsma1cb ) ; frac_i [ 1 ] =
m1ahso5u4m [ 1 ] ; frac_i [ 2 ] = d3scbkbwlb [ 1 ] ; frac_i [ 3 ] =
njurhkovsz [ 1 ] ; bpIndex_i [ 1 ] = kiombdthr4 ; bpIndex_i [ 2 ] =
n5yhkyeg5n_idx_1 ; bpIndex_i [ 3 ] = khukbzvgdj_idx_1 ; if ( rtP .
Constant8_Value_dn0swibioj [ 1 ] > 1.0 ) { bpIndex_i [ 4 ] = 1U ; } else {
bpIndex_i [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_dn0swibioj [ 1 ] , 0.0 ) ; } liydxvyvbx [ 13 ] =
intrp4d_fu32fla_pw ( bpIndex_i , frac_i , & rtP . dp_WING_tip . CS [ 2450U *
bpIndex_i [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_nrl20k3nz5 ,
rtP . InterpolationUsingPrelookup2_maxIndex_halnsma1cb ) ; frac_m [ 0 ] = rtB
. buybsypzuh ; bpIndex_m [ 0 ] = rtB . pgacreyak0 ; for ( iU = 0 ; iU < 5 ;
iU ++ ) { frac_m [ 1 ] = gsmuzimw5z [ iU ] ; frac_m [ 2 ] = l2m0tr3gxj [ iU ]
; frac_m [ 3 ] = kybpw4f1la [ iU ] ; bpIndex_m [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_m [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_m [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_fdguqum2g1 [ iU ] > 4.0 ) { bpIndex_m [ 4 ] = 4U ;
} else { bpIndex_m [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_fdguqum2g1 [ iU ] , 0.0 ) ; } liydxvyvbx [ iU + 14 ] =
intrp4d_fu32fla_pw ( bpIndex_m , frac_m , & rtP . dp_WING_root . CL [ 1750U *
bpIndex_m [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_iw1ndtizmt ,
rtP . InterpolationUsingPrelookup3_maxIndex_hnpvow1aox ) ; } frac_g [ 0 ] =
rtB . kdl2q2ktlu ; bpIndex_g [ 0 ] = rtB . lcfixu2lfk ; frac_g [ 1 ] =
m1ahso5u4m [ 0 ] ; frac_g [ 2 ] = d3scbkbwlb [ 0 ] ; frac_g [ 3 ] =
njurhkovsz [ 0 ] ; bpIndex_g [ 1 ] = m04ebe1zz2 ; bpIndex_g [ 2 ] =
n5yhkyeg5n_idx_0 ; bpIndex_g [ 3 ] = khukbzvgdj_idx_0 ; if ( rtP .
Constant8_Value_dn0swibioj [ 0 ] > 1.0 ) { bpIndex_g [ 4 ] = 1U ; } else {
bpIndex_g [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_dn0swibioj [ 0 ] , 0.0 ) ; } liydxvyvbx [ 19 ] =
intrp4d_fu32fla_pw ( bpIndex_g , frac_g , & rtP . dp_WING_tip . CL [ 2450U *
bpIndex_g [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_bwdov31odu ,
rtP . InterpolationUsingPrelookup3_maxIndex_dnuuotdmkt ) ; frac_g [ 1 ] =
m1ahso5u4m [ 1 ] ; frac_g [ 2 ] = d3scbkbwlb [ 1 ] ; frac_g [ 3 ] =
njurhkovsz [ 1 ] ; bpIndex_g [ 1 ] = kiombdthr4 ; bpIndex_g [ 2 ] =
n5yhkyeg5n_idx_1 ; bpIndex_g [ 3 ] = khukbzvgdj_idx_1 ; if ( rtP .
Constant8_Value_dn0swibioj [ 1 ] > 1.0 ) { bpIndex_g [ 4 ] = 1U ; } else {
bpIndex_g [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_dn0swibioj [ 1 ] , 0.0 ) ; } liydxvyvbx [ 20 ] =
intrp4d_fu32fla_pw ( bpIndex_g , frac_g , & rtP . dp_WING_tip . CL [ 2450U *
bpIndex_g [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_bwdov31odu ,
rtP . InterpolationUsingPrelookup3_maxIndex_dnuuotdmkt ) ; for ( i_p = 0 ;
i_p < 7 ; i_p ++ ) { rtB . bflkh3tw3c [ 3 * i_p ] = ge04r1sxrb [ 3 * i_p ] *
liydxvyvbx [ i_p ] * rtB . lhopa3gq4f * rtP . Gain_Gain_igdiaogfc0 ; rtB .
bflkh3tw3c [ 3 * i_p + 1 ] = ge04r1sxrb [ 3 * i_p + 1 ] * liydxvyvbx [ i_p +
7 ] * rtB . lhopa3gq4f * rtP . Gain_Gain_igdiaogfc0 ; rtB . bflkh3tw3c [ 3 *
i_p + 2 ] = ge04r1sxrb [ 3 * i_p + 2 ] * liydxvyvbx [ i_p + 14 ] * rtB .
lhopa3gq4f * rtP . Gain_Gain_igdiaogfc0 ; } parallel_for ( 7 , nonjggp2zg , 1
, "nonjggp2zg" ) ; parallel_for ( 7 , ozenep403f , 1 , "ozenep403f" ) ;
frac_j [ 0 ] = rtB . buybsypzuh ; bpIndex_j [ 0 ] = rtB . pgacreyak0 ; for (
iU = 0 ; iU < 5 ; iU ++ ) { frac_j [ 1 ] = gsmuzimw5z [ iU ] ; frac_j [ 2 ] =
l2m0tr3gxj [ iU ] ; frac_j [ 3 ] = kybpw4f1la [ iU ] ; bpIndex_j [ 1 ] =
h0u2qqbsra [ iU ] ; bpIndex_j [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_j [ 3 ] =
okphy1ntzm [ iU ] ; if ( rtP . Constant8_Value_fdguqum2g1 [ iU ] > 4.0 ) {
bpIndex_j [ 4 ] = 4U ; } else { bpIndex_j [ 4 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_fdguqum2g1 [ iU ] , 0.0 ) ; }
liydxvyvbx [ iU ] = intrp4d_fu32fla_pw ( bpIndex_j , frac_j , & rtP .
dp_WING_root . CMx [ 1750U * bpIndex_j [ 4 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_n1by4aaaye , rtP .
InterpolationUsingPrelookup4_maxIndex_k5s45b3xd5 ) ; } frac_f [ 0 ] = rtB .
kdl2q2ktlu ; bpIndex_f [ 0 ] = rtB . lcfixu2lfk ; frac_f [ 1 ] = m1ahso5u4m [
0 ] ; frac_f [ 2 ] = d3scbkbwlb [ 0 ] ; frac_f [ 3 ] = njurhkovsz [ 0 ] ;
bpIndex_f [ 1 ] = m04ebe1zz2 ; bpIndex_f [ 2 ] = n5yhkyeg5n_idx_0 ; bpIndex_f
[ 3 ] = khukbzvgdj_idx_0 ; if ( rtP . Constant8_Value_dn0swibioj [ 0 ] > 1.0
) { bpIndex_f [ 4 ] = 1U ; } else { bpIndex_f [ 4 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_dn0swibioj [ 0 ] , 0.0 ) ; }
liydxvyvbx [ 5 ] = intrp4d_fu32fla_pw ( bpIndex_f , frac_f , & rtP .
dp_WING_tip . CMx [ 2450U * bpIndex_f [ 4 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_lcwylc1smw , rtP .
InterpolationUsingPrelookup4_maxIndex_cy2xlkh5vq ) ; frac_f [ 1 ] =
m1ahso5u4m [ 1 ] ; frac_f [ 2 ] = d3scbkbwlb [ 1 ] ; frac_f [ 3 ] =
njurhkovsz [ 1 ] ; bpIndex_f [ 1 ] = kiombdthr4 ; bpIndex_f [ 2 ] =
n5yhkyeg5n_idx_1 ; bpIndex_f [ 3 ] = khukbzvgdj_idx_1 ; if ( rtP .
Constant8_Value_dn0swibioj [ 1 ] > 1.0 ) { bpIndex_f [ 4 ] = 1U ; } else {
bpIndex_f [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_dn0swibioj [ 1 ] , 0.0 ) ; } liydxvyvbx [ 6 ] =
intrp4d_fu32fla_pw ( bpIndex_f , frac_f , & rtP . dp_WING_tip . CMx [ 2450U *
bpIndex_f [ 4 ] ] , rtP . InterpolationUsingPrelookup4_dimSize_lcwylc1smw ,
rtP . InterpolationUsingPrelookup4_maxIndex_cy2xlkh5vq ) ; frac_c [ 0 ] = rtB
. buybsypzuh ; bpIndex_c [ 0 ] = rtB . pgacreyak0 ; for ( iU = 0 ; iU < 5 ;
iU ++ ) { frac_c [ 1 ] = gsmuzimw5z [ iU ] ; frac_c [ 2 ] = l2m0tr3gxj [ iU ]
; frac_c [ 3 ] = kybpw4f1la [ iU ] ; bpIndex_c [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_c [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_c [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_fdguqum2g1 [ iU ] > 4.0 ) { bpIndex_c [ 4 ] = 4U ;
} else { bpIndex_c [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_fdguqum2g1 [ iU ] , 0.0 ) ; } liydxvyvbx [ iU + 7 ] =
intrp4d_fu32fla_pw ( bpIndex_c , frac_c , & rtP . dp_WING_root . CMy [ 1750U
* bpIndex_c [ 4 ] ] , rtP . InterpolationUsingPrelookup5_dimSize_atiu31jf2u ,
rtP . InterpolationUsingPrelookup5_maxIndex_fibwdsgief ) ; } frac_k [ 0 ] =
rtB . kdl2q2ktlu ; bpIndex_k [ 0 ] = rtB . lcfixu2lfk ; frac_k [ 1 ] =
m1ahso5u4m [ 0 ] ; frac_k [ 2 ] = d3scbkbwlb [ 0 ] ; frac_k [ 3 ] =
njurhkovsz [ 0 ] ; bpIndex_k [ 1 ] = m04ebe1zz2 ; bpIndex_k [ 2 ] =
n5yhkyeg5n_idx_0 ; bpIndex_k [ 3 ] = khukbzvgdj_idx_0 ; if ( rtP .
Constant8_Value_dn0swibioj [ 0 ] > 1.0 ) { bpIndex_k [ 4 ] = 1U ; } else {
bpIndex_k [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_dn0swibioj [ 0 ] , 0.0 ) ; } liydxvyvbx [ 12 ] =
intrp4d_fu32fla_pw ( bpIndex_k , frac_k , & rtP . dp_WING_tip . CMy [ 2450U *
bpIndex_k [ 4 ] ] , rtP . InterpolationUsingPrelookup5_dimSize_c5irdqqd1s ,
rtP . InterpolationUsingPrelookup5_maxIndex_d44fsejhpt ) ; frac_k [ 1 ] =
m1ahso5u4m [ 1 ] ; frac_k [ 2 ] = d3scbkbwlb [ 1 ] ; frac_k [ 3 ] =
njurhkovsz [ 1 ] ; bpIndex_k [ 1 ] = kiombdthr4 ; bpIndex_k [ 2 ] =
n5yhkyeg5n_idx_1 ; bpIndex_k [ 3 ] = khukbzvgdj_idx_1 ; if ( rtP .
Constant8_Value_dn0swibioj [ 1 ] > 1.0 ) { bpIndex_k [ 4 ] = 1U ; } else {
bpIndex_k [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_dn0swibioj [ 1 ] , 0.0 ) ; } liydxvyvbx [ 13 ] =
intrp4d_fu32fla_pw ( bpIndex_k , frac_k , & rtP . dp_WING_tip . CMy [ 2450U *
bpIndex_k [ 4 ] ] , rtP . InterpolationUsingPrelookup5_dimSize_c5irdqqd1s ,
rtP . InterpolationUsingPrelookup5_maxIndex_d44fsejhpt ) ; frac_b [ 0 ] = rtB
. buybsypzuh ; bpIndex_b [ 0 ] = rtB . pgacreyak0 ; for ( iU = 0 ; iU < 5 ;
iU ++ ) { frac_b [ 1 ] = gsmuzimw5z [ iU ] ; frac_b [ 2 ] = l2m0tr3gxj [ iU ]
; frac_b [ 3 ] = kybpw4f1la [ iU ] ; bpIndex_b [ 1 ] = h0u2qqbsra [ iU ] ;
bpIndex_b [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_b [ 3 ] = okphy1ntzm [ iU ] ;
if ( rtP . Constant8_Value_fdguqum2g1 [ iU ] > 4.0 ) { bpIndex_b [ 4 ] = 4U ;
} else { bpIndex_b [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_fdguqum2g1 [ iU ] , 0.0 ) ; } liydxvyvbx [ iU + 14 ] =
intrp4d_fu32fla_pw ( bpIndex_b , frac_b , & rtP . dp_WING_root . CMz [ 1750U
* bpIndex_b [ 4 ] ] , rtP . InterpolationUsingPrelookup6_dimSize_njmq1sj0t0 ,
rtP . InterpolationUsingPrelookup6_maxIndex_am45zm2s12 ) ; } frac_n [ 0 ] =
rtB . kdl2q2ktlu ; bpIndex_n [ 0 ] = rtB . lcfixu2lfk ; frac_n [ 1 ] =
m1ahso5u4m [ 0 ] ; frac_n [ 2 ] = d3scbkbwlb [ 0 ] ; frac_n [ 3 ] =
njurhkovsz [ 0 ] ; bpIndex_n [ 1 ] = m04ebe1zz2 ; bpIndex_n [ 2 ] =
n5yhkyeg5n_idx_0 ; bpIndex_n [ 3 ] = khukbzvgdj_idx_0 ; if ( rtP .
Constant8_Value_dn0swibioj [ 0 ] > 1.0 ) { bpIndex_n [ 4 ] = 1U ; } else {
bpIndex_n [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_dn0swibioj [ 0 ] , 0.0 ) ; } liydxvyvbx [ 19 ] =
intrp4d_fu32fla_pw ( bpIndex_n , frac_n , & rtP . dp_WING_tip . CMz [ 2450U *
bpIndex_n [ 4 ] ] , rtP . InterpolationUsingPrelookup6_dimSize_iia0rqhr03 ,
rtP . InterpolationUsingPrelookup6_maxIndex_f1aiexynmu ) ; frac_n [ 1 ] =
m1ahso5u4m [ 1 ] ; frac_n [ 2 ] = d3scbkbwlb [ 1 ] ; frac_n [ 3 ] =
njurhkovsz [ 1 ] ; bpIndex_n [ 1 ] = kiombdthr4 ; bpIndex_n [ 2 ] =
n5yhkyeg5n_idx_1 ; bpIndex_n [ 3 ] = khukbzvgdj_idx_1 ; if ( rtP .
Constant8_Value_dn0swibioj [ 1 ] > 1.0 ) { bpIndex_n [ 4 ] = 1U ; } else {
bpIndex_n [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_dn0swibioj [ 1 ] , 0.0 ) ; } liydxvyvbx [ 20 ] =
intrp4d_fu32fla_pw ( bpIndex_n , frac_n , & rtP . dp_WING_tip . CMz [ 2450U *
bpIndex_n [ 4 ] ] , rtP . InterpolationUsingPrelookup6_dimSize_iia0rqhr03 ,
rtP . InterpolationUsingPrelookup6_maxIndex_f1aiexynmu ) ; cwdb3qacqr = rtP .
S / 2.0 ; for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { dq25kgk52k [ 3 * i_p ] =
ge04r1sxrb [ 3 * i_p ] * liydxvyvbx [ i_p ] * rtP . Constant_Value_b3o3asdnd0
[ 3 * i_p ] * rtB . lhopa3gq4f * cwdb3qacqr + rtB . byhpdluumbu [ 3 * i_p ] ;
dq25kgk52k [ 3 * i_p + 1 ] = ge04r1sxrb [ 3 * i_p + 1 ] * liydxvyvbx [ i_p +
7 ] * rtP . Constant_Value_b3o3asdnd0 [ 3 * i_p + 1 ] * rtB . lhopa3gq4f *
cwdb3qacqr + rtB . byhpdluumbu [ 3 * i_p + 1 ] ; dq25kgk52k [ 3 * i_p + 2 ] =
ge04r1sxrb [ 3 * i_p + 2 ] * liydxvyvbx [ i_p + 14 ] * rtP .
Constant_Value_b3o3asdnd0 [ 3 * i_p + 2 ] * rtB . lhopa3gq4f * cwdb3qacqr +
rtB . byhpdluumbu [ 3 * i_p + 2 ] ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) {
cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e < 7 ; i_e ++ ) { cwdb3qacqr +=
dq25kgk52k [ i_e * 3 + i_p ] ; } as2exlo2n4 [ i_p ] = cwdb3qacqr ; }
ivnfroue5d [ 0 ] = ( real32_T ) as2exlo2n4 [ 0 ] ; ivnfroue5d [ 1 ] = (
real32_T ) as2exlo2n4 [ 1 ] ; ivnfroue5d [ 2 ] = ( real32_T ) as2exlo2n4 [ 2
] ; for ( i = 0 ; i < 7 ; i ++ ) { liydxvyvbx [ i ] = rtB . nmxk2xrfk3 [ i +
7 ] ; liydxvyvbx [ i + 7 ] = rtB . nmxk2xrfk3 [ i + 7 ] ; liydxvyvbx [ i + 14
] = rtB . nmxk2xrfk3 [ i + 7 ] ; ge04r1sxrb [ 3 * i ] = liydxvyvbx [ i ] ;
ge04r1sxrb [ 3 * i + 1 ] = liydxvyvbx [ i + 7 ] ; ge04r1sxrb [ 3 * i + 2 ] =
liydxvyvbx [ i + 14 ] ; } for ( i_p = 0 ; i_p < 21 ; i_p ++ ) {
bdvkktmal5_idx_0 = ge04r1sxrb [ i_p ] ; bdvkktmal5_idx_0 *= bdvkktmal5_idx_0
; ge04r1sxrb [ i_p ] = bdvkktmal5_idx_0 ; } if ( ssIsSampleHit ( rtS , 2 , 0
) ) { rtB . mb1y0b3eym = plook_u32ff_lincpa ( rtB . ak0q0uaprv [ 5 ] , rtP .
dp_WING_root . flap_defl , 4U , & rtB . be1wst1pkg , & rtDW . felqedgyx1 ) ;
} for ( iU = 0 ; iU < 5 ; iU ++ ) { okphy1ntzm [ iU ] = plook_u32ff_lincpa (
rtB . cfz24gonbx [ iU + 7 ] , rtP . dp_WING_root . alphas , 24U , &
kybpw4f1la [ iU ] , & rtDW . knvjdfedfb [ iU ] ) ; } for ( iU = 0 ; iU < 5 ;
iU ++ ) { kugs2ta1qq [ iU ] = plook_u32ff_lincpa ( rtB . nmxk2xrfk3 [ iU + 7
] , rtP . dp_WING_root . V , 1U , & l2m0tr3gxj [ iU ] , & rtDW . apjnubwssp [
iU ] ) ; } for ( iU = 0 ; iU < 5 ; iU ++ ) { h0u2qqbsra [ iU ] =
plook_u32ff_lincpa ( prizw2ngzn [ iU + 6 ] , rtP . dp_WING_root . DEP_J , 6U
, & gsmuzimw5z [ iU ] , & rtDW . ptu3l2ehpk [ iU ] ) ; } frac_l [ 0 ] = rtB .
be1wst1pkg ; bpIndex_l [ 0 ] = rtB . mb1y0b3eym ; for ( iU = 0 ; iU < 5 ; iU
++ ) { frac_l [ 1 ] = kybpw4f1la [ iU ] ; frac_l [ 2 ] = l2m0tr3gxj [ iU ] ;
frac_l [ 3 ] = gsmuzimw5z [ iU ] ; bpIndex_l [ 1 ] = okphy1ntzm [ iU ] ;
bpIndex_l [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_l [ 3 ] = h0u2qqbsra [ iU ] ;
if ( rtP . Constant8_Value_o2vddtqbhz [ iU ] > 4.0 ) { bpIndex_l [ 4 ] = 4U ;
} else { bpIndex_l [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_o2vddtqbhz [ iU ] , 0.0 ) ; } liydxvyvbx [ iU ] =
intrp4d_fu32fla_pw ( bpIndex_l , frac_l , & rtP . dp_WING_root . CD [ 1750U *
bpIndex_l [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_cc1prjb2oo ,
rtP . InterpolationUsingPrelookup1_maxIndex_n2qqbs4dob ) ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB . lj1ecmy3sj = plook_u32ff_lincpa ( rtB
. ak0q0uaprv [ 1 ] , rtP . dp_WING_tip . ail_defl , 6U , & rtB . gefiy4un3d ,
& rtDW . ebmg2d0djd ) ; } m04ebe1zz2 = plook_u32ff_lincpa ( rtB . cfz24gonbx
[ 12 ] , rtP . dp_WING_tip . alphas , 24U , & gsguxbdffk [ 0 ] , & rtDW .
nmrn1j5ohh [ 0 ] ) ; kiombdthr4 = plook_u32ff_lincpa ( rtB . cfz24gonbx [ 13
] , rtP . dp_WING_tip . alphas , 24U , & gsguxbdffk [ 1 ] , & rtDW .
nmrn1j5ohh [ 1 ] ) ; n5yhkyeg5n_idx_0 = plook_u32ff_lincpa ( rtB . nmxk2xrfk3
[ 12 ] , rtP . dp_WING_tip . V , 1U , & ovjd1la42y [ 0 ] , & rtDW .
hl5ux0u3e5 [ 0 ] ) ; n5yhkyeg5n_idx_1 = plook_u32ff_lincpa ( rtB . nmxk2xrfk3
[ 13 ] , rtP . dp_WING_tip . V , 1U , & ovjd1la42y [ 1 ] , & rtDW .
hl5ux0u3e5 [ 1 ] ) ; khukbzvgdj_idx_0 = plook_u32ff_lincpa ( prizw2ngzn [ 10
] , rtP . dp_WING_tip . DEP_J , 6U , & pyfokpvamr [ 0 ] , & rtDW . kywikzuq0z
[ 0 ] ) ; khukbzvgdj_idx_1 = plook_u32ff_lincpa ( prizw2ngzn [ 11 ] , rtP .
dp_WING_tip . DEP_J , 6U , & pyfokpvamr [ 1 ] , & rtDW . kywikzuq0z [ 1 ] ) ;
frac_d [ 0 ] = rtB . gefiy4un3d ; bpIndex_d [ 0 ] = rtB . lj1ecmy3sj ; frac_d
[ 1 ] = gsguxbdffk [ 0 ] ; frac_d [ 2 ] = ovjd1la42y [ 0 ] ; frac_d [ 3 ] =
pyfokpvamr [ 0 ] ; bpIndex_d [ 1 ] = m04ebe1zz2 ; bpIndex_d [ 2 ] =
n5yhkyeg5n_idx_0 ; bpIndex_d [ 3 ] = khukbzvgdj_idx_0 ; if ( rtP .
Constant8_Value_oaybf0pjve [ 0 ] > 1.0 ) { bpIndex_d [ 4 ] = 1U ; } else {
bpIndex_d [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_oaybf0pjve [ 0 ] , 0.0 ) ; } liydxvyvbx [ 5 ] =
intrp4d_fu32fla_pw ( bpIndex_d , frac_d , & rtP . dp_WING_tip . CD [ 2450U *
bpIndex_d [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_kx41jhq53z ,
rtP . InterpolationUsingPrelookup1_maxIndex_dvymep4nij ) ; frac_d [ 1 ] =
gsguxbdffk [ 1 ] ; frac_d [ 2 ] = ovjd1la42y [ 1 ] ; frac_d [ 3 ] =
pyfokpvamr [ 1 ] ; bpIndex_d [ 1 ] = kiombdthr4 ; bpIndex_d [ 2 ] =
n5yhkyeg5n_idx_1 ; bpIndex_d [ 3 ] = khukbzvgdj_idx_1 ; if ( rtP .
Constant8_Value_oaybf0pjve [ 1 ] > 1.0 ) { bpIndex_d [ 4 ] = 1U ; } else {
bpIndex_d [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_oaybf0pjve [ 1 ] , 0.0 ) ; } liydxvyvbx [ 6 ] =
intrp4d_fu32fla_pw ( bpIndex_d , frac_d , & rtP . dp_WING_tip . CD [ 2450U *
bpIndex_d [ 4 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_kx41jhq53z ,
rtP . InterpolationUsingPrelookup1_maxIndex_dvymep4nij ) ; frac_o [ 0 ] = rtB
. be1wst1pkg ; bpIndex_o [ 0 ] = rtB . mb1y0b3eym ; for ( iU = 0 ; iU < 5 ;
iU ++ ) { frac_o [ 1 ] = kybpw4f1la [ iU ] ; frac_o [ 2 ] = l2m0tr3gxj [ iU ]
; frac_o [ 3 ] = gsmuzimw5z [ iU ] ; bpIndex_o [ 1 ] = okphy1ntzm [ iU ] ;
bpIndex_o [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_o [ 3 ] = h0u2qqbsra [ iU ] ;
if ( rtP . Constant8_Value_o2vddtqbhz [ iU ] > 4.0 ) { bpIndex_o [ 4 ] = 4U ;
} else { bpIndex_o [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_o2vddtqbhz [ iU ] , 0.0 ) ; } liydxvyvbx [ iU + 7 ] =
intrp4d_fu32fla_pw ( bpIndex_o , frac_o , & rtP . dp_WING_root . CS [ 1750U *
bpIndex_o [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_j2ofnaf0w0 ,
rtP . InterpolationUsingPrelookup2_maxIndex_fiuiapwlsq ) ; } frac_dz [ 0 ] =
rtB . gefiy4un3d ; bpIndex_dz [ 0 ] = rtB . lj1ecmy3sj ; frac_dz [ 1 ] =
gsguxbdffk [ 0 ] ; frac_dz [ 2 ] = ovjd1la42y [ 0 ] ; frac_dz [ 3 ] =
pyfokpvamr [ 0 ] ; bpIndex_dz [ 1 ] = m04ebe1zz2 ; bpIndex_dz [ 2 ] =
n5yhkyeg5n_idx_0 ; bpIndex_dz [ 3 ] = khukbzvgdj_idx_0 ; if ( rtP .
Constant8_Value_oaybf0pjve [ 0 ] > 1.0 ) { bpIndex_dz [ 4 ] = 1U ; } else {
bpIndex_dz [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_oaybf0pjve [ 0 ] , 0.0 ) ; } liydxvyvbx [ 12 ] =
intrp4d_fu32fla_pw ( bpIndex_dz , frac_dz , & rtP . dp_WING_tip . CS [ 2450U
* bpIndex_dz [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_duz043yjyq
, rtP . InterpolationUsingPrelookup2_maxIndex_bi1sjla3q2 ) ; frac_dz [ 1 ] =
gsguxbdffk [ 1 ] ; frac_dz [ 2 ] = ovjd1la42y [ 1 ] ; frac_dz [ 3 ] =
pyfokpvamr [ 1 ] ; bpIndex_dz [ 1 ] = kiombdthr4 ; bpIndex_dz [ 2 ] =
n5yhkyeg5n_idx_1 ; bpIndex_dz [ 3 ] = khukbzvgdj_idx_1 ; if ( rtP .
Constant8_Value_oaybf0pjve [ 1 ] > 1.0 ) { bpIndex_dz [ 4 ] = 1U ; } else {
bpIndex_dz [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_oaybf0pjve [ 1 ] , 0.0 ) ; } liydxvyvbx [ 13 ] =
intrp4d_fu32fla_pw ( bpIndex_dz , frac_dz , & rtP . dp_WING_tip . CS [ 2450U
* bpIndex_dz [ 4 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_duz043yjyq
, rtP . InterpolationUsingPrelookup2_maxIndex_bi1sjla3q2 ) ; frac_fs [ 0 ] =
rtB . be1wst1pkg ; bpIndex_fs [ 0 ] = rtB . mb1y0b3eym ; for ( iU = 0 ; iU <
5 ; iU ++ ) { frac_fs [ 1 ] = kybpw4f1la [ iU ] ; frac_fs [ 2 ] = l2m0tr3gxj
[ iU ] ; frac_fs [ 3 ] = gsmuzimw5z [ iU ] ; bpIndex_fs [ 1 ] = okphy1ntzm [
iU ] ; bpIndex_fs [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_fs [ 3 ] = h0u2qqbsra [
iU ] ; if ( rtP . Constant8_Value_o2vddtqbhz [ iU ] > 4.0 ) { bpIndex_fs [ 4
] = 4U ; } else { bpIndex_fs [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_o2vddtqbhz [ iU ] , 0.0 ) ; } liydxvyvbx [ iU + 14 ] =
intrp4d_fu32fla_pw ( bpIndex_fs , frac_fs , & rtP . dp_WING_root . CL [ 1750U
* bpIndex_fs [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_n5hof3ggty
, rtP . InterpolationUsingPrelookup3_maxIndex_frabtm3htz ) ; } frac_ck [ 0 ]
= rtB . gefiy4un3d ; bpIndex_ck [ 0 ] = rtB . lj1ecmy3sj ; frac_ck [ 1 ] =
gsguxbdffk [ 0 ] ; frac_ck [ 2 ] = ovjd1la42y [ 0 ] ; frac_ck [ 3 ] =
pyfokpvamr [ 0 ] ; bpIndex_ck [ 1 ] = m04ebe1zz2 ; bpIndex_ck [ 2 ] =
n5yhkyeg5n_idx_0 ; bpIndex_ck [ 3 ] = khukbzvgdj_idx_0 ; if ( rtP .
Constant8_Value_oaybf0pjve [ 0 ] > 1.0 ) { bpIndex_ck [ 4 ] = 1U ; } else {
bpIndex_ck [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_oaybf0pjve [ 0 ] , 0.0 ) ; } liydxvyvbx [ 19 ] =
intrp4d_fu32fla_pw ( bpIndex_ck , frac_ck , & rtP . dp_WING_tip . CL [ 2450U
* bpIndex_ck [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_dkrtirzueo
, rtP . InterpolationUsingPrelookup3_maxIndex_imdp4seazn ) ; frac_ck [ 1 ] =
gsguxbdffk [ 1 ] ; frac_ck [ 2 ] = ovjd1la42y [ 1 ] ; frac_ck [ 3 ] =
pyfokpvamr [ 1 ] ; bpIndex_ck [ 1 ] = kiombdthr4 ; bpIndex_ck [ 2 ] =
n5yhkyeg5n_idx_1 ; bpIndex_ck [ 3 ] = khukbzvgdj_idx_1 ; if ( rtP .
Constant8_Value_oaybf0pjve [ 1 ] > 1.0 ) { bpIndex_ck [ 4 ] = 1U ; } else {
bpIndex_ck [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_oaybf0pjve [ 1 ] , 0.0 ) ; } liydxvyvbx [ 20 ] =
intrp4d_fu32fla_pw ( bpIndex_ck , frac_ck , & rtP . dp_WING_tip . CL [ 2450U
* bpIndex_ck [ 4 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_dkrtirzueo
, rtP . InterpolationUsingPrelookup3_maxIndex_imdp4seazn ) ; for ( i_p = 0 ;
i_p < 7 ; i_p ++ ) { rtB . lif0jqyjen [ 3 * i_p ] = ge04r1sxrb [ 3 * i_p ] *
liydxvyvbx [ i_p ] * rtB . lhopa3gq4f * rtP . Gain_Gain_acyum2oy5l ; rtB .
lif0jqyjen [ 3 * i_p + 1 ] = ge04r1sxrb [ 3 * i_p + 1 ] * liydxvyvbx [ i_p +
7 ] * rtB . lhopa3gq4f * rtP . Gain_Gain_acyum2oy5l ; rtB . lif0jqyjen [ 3 *
i_p + 2 ] = ge04r1sxrb [ 3 * i_p + 2 ] * liydxvyvbx [ i_p + 14 ] * rtB .
lhopa3gq4f * rtP . Gain_Gain_acyum2oy5l ; } parallel_for ( 7 , jpp5owoa3n , 1
, "jpp5owoa3n" ) ; parallel_for ( 7 , jiwpvcutff , 1 , "jiwpvcutff" ) ;
frac_f2 [ 0 ] = rtB . be1wst1pkg ; bpIndex_f2 [ 0 ] = rtB . mb1y0b3eym ; for
( iU = 0 ; iU < 5 ; iU ++ ) { frac_f2 [ 1 ] = kybpw4f1la [ iU ] ; frac_f2 [ 2
] = l2m0tr3gxj [ iU ] ; frac_f2 [ 3 ] = gsmuzimw5z [ iU ] ; bpIndex_f2 [ 1 ]
= okphy1ntzm [ iU ] ; bpIndex_f2 [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_f2 [ 3 ]
= h0u2qqbsra [ iU ] ; if ( rtP . Constant8_Value_o2vddtqbhz [ iU ] > 4.0 ) {
bpIndex_f2 [ 4 ] = 4U ; } else { bpIndex_f2 [ 4 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_o2vddtqbhz [ iU ] , 0.0 ) ; }
liydxvyvbx [ iU ] = intrp4d_fu32fla_pw ( bpIndex_f2 , frac_f2 , & rtP .
dp_WING_root . CMx [ 1750U * bpIndex_f2 [ 4 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_dqlnhgz1zi , rtP .
InterpolationUsingPrelookup4_maxIndex_o4wzqxphno ) ; } frac_kt [ 0 ] = rtB .
gefiy4un3d ; bpIndex_kt [ 0 ] = rtB . lj1ecmy3sj ; frac_kt [ 1 ] = gsguxbdffk
[ 0 ] ; frac_kt [ 2 ] = ovjd1la42y [ 0 ] ; frac_kt [ 3 ] = pyfokpvamr [ 0 ] ;
bpIndex_kt [ 1 ] = m04ebe1zz2 ; bpIndex_kt [ 2 ] = n5yhkyeg5n_idx_0 ;
bpIndex_kt [ 3 ] = khukbzvgdj_idx_0 ; if ( rtP . Constant8_Value_oaybf0pjve [
0 ] > 1.0 ) { bpIndex_kt [ 4 ] = 1U ; } else { bpIndex_kt [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_oaybf0pjve [ 0 ] , 0.0 ) ; }
liydxvyvbx [ 5 ] = intrp4d_fu32fla_pw ( bpIndex_kt , frac_kt , & rtP .
dp_WING_tip . CMx [ 2450U * bpIndex_kt [ 4 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_p4aarrlaxb , rtP .
InterpolationUsingPrelookup4_maxIndex_mqwubj3l1q ) ; frac_kt [ 1 ] =
gsguxbdffk [ 1 ] ; frac_kt [ 2 ] = ovjd1la42y [ 1 ] ; frac_kt [ 3 ] =
pyfokpvamr [ 1 ] ; bpIndex_kt [ 1 ] = kiombdthr4 ; bpIndex_kt [ 2 ] =
n5yhkyeg5n_idx_1 ; bpIndex_kt [ 3 ] = khukbzvgdj_idx_1 ; if ( rtP .
Constant8_Value_oaybf0pjve [ 1 ] > 1.0 ) { bpIndex_kt [ 4 ] = 1U ; } else {
bpIndex_kt [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_oaybf0pjve [ 1 ] , 0.0 ) ; } liydxvyvbx [ 6 ] =
intrp4d_fu32fla_pw ( bpIndex_kt , frac_kt , & rtP . dp_WING_tip . CMx [ 2450U
* bpIndex_kt [ 4 ] ] , rtP . InterpolationUsingPrelookup4_dimSize_p4aarrlaxb
, rtP . InterpolationUsingPrelookup4_maxIndex_mqwubj3l1q ) ; frac_lt [ 0 ] =
rtB . be1wst1pkg ; bpIndex_lt [ 0 ] = rtB . mb1y0b3eym ; for ( iU = 0 ; iU <
5 ; iU ++ ) { frac_lt [ 1 ] = kybpw4f1la [ iU ] ; frac_lt [ 2 ] = l2m0tr3gxj
[ iU ] ; frac_lt [ 3 ] = gsmuzimw5z [ iU ] ; bpIndex_lt [ 1 ] = okphy1ntzm [
iU ] ; bpIndex_lt [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_lt [ 3 ] = h0u2qqbsra [
iU ] ; if ( rtP . Constant8_Value_o2vddtqbhz [ iU ] > 4.0 ) { bpIndex_lt [ 4
] = 4U ; } else { bpIndex_lt [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_o2vddtqbhz [ iU ] , 0.0 ) ; } liydxvyvbx [ iU + 7 ] =
intrp4d_fu32fla_pw ( bpIndex_lt , frac_lt , & rtP . dp_WING_root . CMy [
1750U * bpIndex_lt [ 4 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_hlna0n1104 , rtP .
InterpolationUsingPrelookup5_maxIndex_p1qlpsazb4 ) ; } frac_hn [ 0 ] = rtB .
gefiy4un3d ; bpIndex_hn [ 0 ] = rtB . lj1ecmy3sj ; frac_hn [ 1 ] = gsguxbdffk
[ 0 ] ; frac_hn [ 2 ] = ovjd1la42y [ 0 ] ; frac_hn [ 3 ] = pyfokpvamr [ 0 ] ;
bpIndex_hn [ 1 ] = m04ebe1zz2 ; bpIndex_hn [ 2 ] = n5yhkyeg5n_idx_0 ;
bpIndex_hn [ 3 ] = khukbzvgdj_idx_0 ; if ( rtP . Constant8_Value_oaybf0pjve [
0 ] > 1.0 ) { bpIndex_hn [ 4 ] = 1U ; } else { bpIndex_hn [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_oaybf0pjve [ 0 ] , 0.0 ) ; }
liydxvyvbx [ 12 ] = intrp4d_fu32fla_pw ( bpIndex_hn , frac_hn , & rtP .
dp_WING_tip . CMy [ 2450U * bpIndex_hn [ 4 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_p4p42jneab , rtP .
InterpolationUsingPrelookup5_maxIndex_oxrypmydry ) ; frac_hn [ 1 ] =
gsguxbdffk [ 1 ] ; frac_hn [ 2 ] = ovjd1la42y [ 1 ] ; frac_hn [ 3 ] =
pyfokpvamr [ 1 ] ; bpIndex_hn [ 1 ] = kiombdthr4 ; bpIndex_hn [ 2 ] =
n5yhkyeg5n_idx_1 ; bpIndex_hn [ 3 ] = khukbzvgdj_idx_1 ; if ( rtP .
Constant8_Value_oaybf0pjve [ 1 ] > 1.0 ) { bpIndex_hn [ 4 ] = 1U ; } else {
bpIndex_hn [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_oaybf0pjve [ 1 ] , 0.0 ) ; } liydxvyvbx [ 13 ] =
intrp4d_fu32fla_pw ( bpIndex_hn , frac_hn , & rtP . dp_WING_tip . CMy [ 2450U
* bpIndex_hn [ 4 ] ] , rtP . InterpolationUsingPrelookup5_dimSize_p4p42jneab
, rtP . InterpolationUsingPrelookup5_maxIndex_oxrypmydry ) ; frac_ap [ 0 ] =
rtB . be1wst1pkg ; bpIndex_ap [ 0 ] = rtB . mb1y0b3eym ; for ( iU = 0 ; iU <
5 ; iU ++ ) { frac_ap [ 1 ] = kybpw4f1la [ iU ] ; frac_ap [ 2 ] = l2m0tr3gxj
[ iU ] ; frac_ap [ 3 ] = gsmuzimw5z [ iU ] ; bpIndex_ap [ 1 ] = okphy1ntzm [
iU ] ; bpIndex_ap [ 2 ] = kugs2ta1qq [ iU ] ; bpIndex_ap [ 3 ] = h0u2qqbsra [
iU ] ; if ( rtP . Constant8_Value_o2vddtqbhz [ iU ] > 4.0 ) { bpIndex_ap [ 4
] = 4U ; } else { bpIndex_ap [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_o2vddtqbhz [ iU ] , 0.0 ) ; } liydxvyvbx [ iU + 14 ] =
intrp4d_fu32fla_pw ( bpIndex_ap , frac_ap , & rtP . dp_WING_root . CMz [
1750U * bpIndex_ap [ 4 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_cdsngd0wzd , rtP .
InterpolationUsingPrelookup6_maxIndex_g3wkr4rrcb ) ; } frac_pj [ 0 ] = rtB .
gefiy4un3d ; bpIndex_pj [ 0 ] = rtB . lj1ecmy3sj ; frac_pj [ 1 ] = gsguxbdffk
[ 0 ] ; frac_pj [ 2 ] = ovjd1la42y [ 0 ] ; frac_pj [ 3 ] = pyfokpvamr [ 0 ] ;
bpIndex_pj [ 1 ] = m04ebe1zz2 ; bpIndex_pj [ 2 ] = n5yhkyeg5n_idx_0 ;
bpIndex_pj [ 3 ] = khukbzvgdj_idx_0 ; if ( rtP . Constant8_Value_oaybf0pjve [
0 ] > 1.0 ) { bpIndex_pj [ 4 ] = 1U ; } else { bpIndex_pj [ 4 ] = ( uint32_T
) muDoubleScalarMax ( rtP . Constant8_Value_oaybf0pjve [ 0 ] , 0.0 ) ; }
liydxvyvbx [ 19 ] = intrp4d_fu32fla_pw ( bpIndex_pj , frac_pj , & rtP .
dp_WING_tip . CMz [ 2450U * bpIndex_pj [ 4 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_dpanpvfjmk , rtP .
InterpolationUsingPrelookup6_maxIndex_mdnu5qffrq ) ; frac_pj [ 1 ] =
gsguxbdffk [ 1 ] ; frac_pj [ 2 ] = ovjd1la42y [ 1 ] ; frac_pj [ 3 ] =
pyfokpvamr [ 1 ] ; bpIndex_pj [ 1 ] = kiombdthr4 ; bpIndex_pj [ 2 ] =
n5yhkyeg5n_idx_1 ; bpIndex_pj [ 3 ] = khukbzvgdj_idx_1 ; if ( rtP .
Constant8_Value_oaybf0pjve [ 1 ] > 1.0 ) { bpIndex_pj [ 4 ] = 1U ; } else {
bpIndex_pj [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_oaybf0pjve [ 1 ] , 0.0 ) ; } liydxvyvbx [ 20 ] =
intrp4d_fu32fla_pw ( bpIndex_pj , frac_pj , & rtP . dp_WING_tip . CMz [ 2450U
* bpIndex_pj [ 4 ] ] , rtP . InterpolationUsingPrelookup6_dimSize_dpanpvfjmk
, rtP . InterpolationUsingPrelookup6_maxIndex_mdnu5qffrq ) ; cwdb3qacqr = rtP
. S / 2.0 ; for ( i_p = 0 ; i_p < 7 ; i_p ++ ) { dq25kgk52k [ 3 * i_p ] =
ge04r1sxrb [ 3 * i_p ] * liydxvyvbx [ i_p ] * rtP . Constant_Value_benf1an55k
[ 3 * i_p ] * rtB . lhopa3gq4f * cwdb3qacqr + rtB . byhpdluumb [ 3 * i_p ] ;
dq25kgk52k [ 3 * i_p + 1 ] = ge04r1sxrb [ 3 * i_p + 1 ] * liydxvyvbx [ i_p +
7 ] * rtP . Constant_Value_benf1an55k [ 3 * i_p + 1 ] * rtB . lhopa3gq4f *
cwdb3qacqr + rtB . byhpdluumb [ 3 * i_p + 1 ] ; dq25kgk52k [ 3 * i_p + 2 ] =
ge04r1sxrb [ 3 * i_p + 2 ] * liydxvyvbx [ i_p + 14 ] * rtP .
Constant_Value_benf1an55k [ 3 * i_p + 2 ] * rtB . lhopa3gq4f * cwdb3qacqr +
rtB . byhpdluumb [ 3 * i_p + 2 ] ; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) {
cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e < 7 ; i_e ++ ) { cwdb3qacqr +=
dq25kgk52k [ i_e * 3 + i_p ] ; } as2exlo2n4 [ i_p ] = cwdb3qacqr ; }
bdvkktmal5_idx_0 = ( real32_T ) as2exlo2n4 [ 0 ] ; bdvkktmal5_idx_1 = (
real32_T ) as2exlo2n4 [ 1 ] ; bdvkktmal5_idx_2 = ( real32_T ) as2exlo2n4 [ 2
] ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { for ( i = 0 ; i <= 6 ; i += 2 ) {
_mm_storeu_pd ( & nvl2rva03y [ i ] , _mm_mul_pd ( _mm_loadu_pd ( & rtP .
Constant_Value_mn4jvly12r [ i ] ) , _mm_set1_pd ( rtB . ak0q0uaprv [ 4 ] ) )
) ; _mm_storeu_pd ( & nvl2rva03y [ i + 8 ] , _mm_mul_pd ( _mm_loadu_pd ( &
rtP . Constant1_Value_dqqxjknpbv [ i ] ) , _mm_set1_pd ( rtB . ak0q0uaprv [ 5
] ) ) ) ; } for ( i_p = 0 ; i_p < 5 ; i_p ++ ) { p [ i_p ] = rtP .
dp_VTAIL_INDUCED . flap_defl [ i_p ] ; } for ( iU = 0 ; iU < 16 ; iU ++ ) {
rtB . nj3xuut2fh [ iU ] = plook_linxp ( nvl2rva03y [ iU ] , p , 4U , & rtB .
bw4iyihnma [ iU ] , & rtDW . op4s5nmfn0 [ iU ] ) ; } } for ( iU = 0 ; iU < 16
; iU ++ ) { bqkagafcws [ iU ] = look1_iflf_pbinlcpw ( rtP .
Constant7_Value_n5pk3usycf [ iU ] , rtP . uDLookupTable_bp01Data_anwusoh2uk ,
& rtB . cfz24gonbx [ 4 ] , & rtDW . p3qcu4kyf3 [ iU ] , 5U ) ; } for ( iU = 0
; iU < 16 ; iU ++ ) { f2e5fcgb3v [ iU ] = plook_u32ff_linxp ( bqkagafcws [ iU
] , rtP . dp_VTAIL_INDUCED . alphas , 24U , & hmfdyqp1cp [ iU ] , & rtDW .
d1rjlxqbuf [ iU ] ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { bqkagafcws [ iU ]
= look1_iflf_pbinlcpw ( rtP . Constant7_Value_n5pk3usycf [ iU ] , rtP .
uDLookupTable1_bp01Data_lct4mwibxn , & rtB . nmxk2xrfk3 [ 4 ] , & rtDW .
g130c2x32o [ iU ] , 5U ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { asvvjqwjnk [
iU ] = plook_u32ff_linxp ( bqkagafcws [ iU ] , rtP . dp_VTAIL_INDUCED .
V_infs , 1U , & dkboypdf3m [ iU ] , & rtDW . dssqgth4gt [ iU ] ) ; } for ( iU
= 0 ; iU < 16 ; iU ++ ) { bqkagafcws [ iU ] = look1_iflf_pbinlcpw ( rtP .
Constant7_Value_n5pk3usycf [ iU ] , rtP . uDLookupTable2_bp01Data_g0abpzsujt
, & prizw2ngzn [ 3 ] , & rtDW . erz4us2nfk [ iU ] , 5U ) ; } for ( iU = 0 ;
iU < 16 ; iU ++ ) { ayy24n2qrl [ iU ] = plook_u32ff_lincp ( bqkagafcws [ iU ]
, rtP . dp_VTAIL_INDUCED . DEP_J , 6U , & lzm2khqk43 [ iU ] , & rtDW .
fyjcynthf1 [ iU ] ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { frac_pk [ 0 ] =
rtB . bw4iyihnma [ iU ] ; frac_pk [ 1 ] = hmfdyqp1cp [ iU ] ; frac_pk [ 2 ] =
dkboypdf3m [ iU ] ; frac_pk [ 3 ] = lzm2khqk43 [ iU ] ; bpIndex_pk [ 0 ] =
rtB . nj3xuut2fh [ iU ] ; bpIndex_pk [ 1 ] = f2e5fcgb3v [ iU ] ; bpIndex_pk [
2 ] = asvvjqwjnk [ iU ] ; bpIndex_pk [ 3 ] = ayy24n2qrl [ iU ] ; if ( rtP .
Constant8_Value_ew40w2pnft [ iU ] > 15.0 ) { bpIndex_pk [ 4 ] = 15U ; } else
{ bpIndex_pk [ 4 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_ew40w2pnft [ iU ] , 0.0 ) ; } f5qwewprly = intrp4d_fl_pw (
bpIndex_pk , frac_pk , & rtP . dp_VTAIL_INDUCED . V_induced [ 1750U *
bpIndex_pk [ 4 ] ] , rtP . V_induced_dimSize_ldea5xe4ld ) ; rtB . kmxfn2bnil
[ iU ] = f5qwewprly ; bqkagafcws [ iU ] = f5qwewprly ; } parallel_for ( 16 ,
ggl0rm1hau , 1 , "ggl0rm1hau" ) ; for ( i = 0 ; i < 16 ; i ++ ) { lrpn1bvaje
= bqkagafcws [ i ] + rtB . nmxk2xrfk3z [ i ] ; if ( lrpn1bvaje > rtP .
Saturation_UpperSat_b2a52laupk ) { lrpn1bvaje = rtP .
Saturation_UpperSat_b2a52laupk ; } else if ( lrpn1bvaje < rtP .
Saturation_LowerSat_gotqetz1tq ) { lrpn1bvaje = rtP .
Saturation_LowerSat_gotqetz1tq ; } jtoldnh5tw = rtP . vtail_dist_to_wing /
lrpn1bvaje ; rtB . pgxjqf3hkj [ i ] = jtoldnh5tw ; h5rdtgmjbr [ i ] =
jtoldnh5tw ; } { real_T * * uBuffer = ( real_T * * ) & rtDW . a1p5mmdhor .
TUbufferPtrs [ 0 ] ; real_T simTime = ssGetT ( rtS ) ; real_T appliedDelay ;
{ int_T i1 ; const real_T * u0 = & rtB . kmxfn2bnil [ 0 ] ; const real_T * u1
= & rtB . pgxjqf3hkj [ 0 ] ; real_T * y0 = & pb5onpph4x [ 0 ] ; int_T *
iw_Tail = & rtDW . l1l2gip32s . Tail [ 0 ] ; int_T * iw_Head = & rtDW .
l1l2gip32s . Head [ 0 ] ; int_T * iw_Last = & rtDW . l1l2gip32s . Last [ 0 ]
; int_T * iw_CircularBufSize = & rtDW . l1l2gip32s . CircularBufSize [ 0 ] ;
for ( i1 = 0 ; i1 < 16 ; i1 ++ ) { appliedDelay = u1 [ i1 ] ; if (
appliedDelay > rtP . VariableTransportDelay1_MaxDelay ) { appliedDelay = rtP
. VariableTransportDelay1_MaxDelay ; } if ( appliedDelay < 0.0 ) {
appliedDelay = 0.0 ; } if ( appliedDelay == 0.0 ) { y0 [ i1 ] = u0 [ i1 ] ; }
else { y0 [ i1 ] = rt_TDelayInterpolate ( simTime - appliedDelay , 0.0 , *
uBuffer , iw_CircularBufSize [ i1 ] , & iw_Last [ i1 ] , iw_Tail [ i1 ] ,
iw_Head [ i1 ] , rtP . VariableTransportDelay1_InitOutput , 0 , ( boolean_T )
( ssIsMinorTimeStep ( rtS ) && ( ssGetTimeOfLastOutput ( rtS ) == ssGetT (
rtS ) ) ) ) ; } uBuffer ++ ; } } } if ( ssGetTaskTime ( rtS , 0 ) < rtP .
Step_Time_p3h2hhbflf ) { lsurenbes1 = rtP . Step_Y0_lfbs5fhwi5 ; } else {
lsurenbes1 = rtP . Step_YFinal_jpaebrffl1 ; } for ( i = 0 ; i < 16 ; i ++ ) {
if ( lsurenbes1 > rtP . Switch_Threshold_barcjzagnb ) { j1ncyjcm0a [ i ] =
pb5onpph4x [ i ] ; } else { j1ncyjcm0a [ i ] = rtB . kmxfn2bnil [ i ] ; } rtB
. ln5blvjdm3 [ i ] = ( real32_T ) j1ncyjcm0a [ i ] ; f5qwewprly = rtB .
ln5blvjdm3 [ i ] + rtB . nmxk2xrfk3z [ i ] ; k1zpj42h11 [ i ] = f5qwewprly ;
k1zpj42h11 [ i + 16 ] = f5qwewprly ; k1zpj42h11 [ i + 32 ] = f5qwewprly ;
mybyivl1uq [ 3 * i ] = k1zpj42h11 [ i ] ; mybyivl1uq [ 3 * i + 1 ] =
k1zpj42h11 [ i + 16 ] ; mybyivl1uq [ 3 * i + 2 ] = k1zpj42h11 [ i + 32 ] ; }
for ( i_p = 0 ; i_p <= 44 ; i_p += 4 ) { tmp_f = _mm_loadu_ps ( & mybyivl1uq
[ i_p ] ) ; _mm_storeu_ps ( & mybyivl1uq [ i_p ] , _mm_mul_ps ( tmp_f , tmp_f
) ) ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { for ( i = 0 ; i <= 6 ; i += 2
) { _mm_storeu_pd ( & nvl2rva03y [ i ] , _mm_mul_pd ( _mm_loadu_pd ( & rtP .
Constant_Value_asshyiafnn [ i ] ) , _mm_set1_pd ( rtB . ak0q0uaprv [ 2 ] ) )
) ; _mm_storeu_pd ( & nvl2rva03y [ i + 8 ] , _mm_mul_pd ( _mm_loadu_pd ( &
rtP . Constant1_Value_h01num5fy3 [ i ] ) , _mm_set1_pd ( rtB . ak0q0uaprv [ 3
] ) ) ) ; } for ( i_p = 0 ; i_p < 10 ; i_p ++ ) { tmp [ i_p ] = rtP .
dp_VTAIL . rude_defl [ i_p ] ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { rtB .
ngy3pgy40m [ iU ] = plook_linxp ( nvl2rva03y [ iU ] , tmp , 9U , & rtB .
d0gfg5onrd [ iU ] , & rtDW . acn3fu00s1 [ iU ] ) ; } } for ( iU = 0 ; iU < 16
; iU ++ ) { frac_fv [ 0 ] = rtB . bw4iyihnma [ iU ] ; frac_fv [ 1 ] =
hmfdyqp1cp [ iU ] ; frac_fv [ 2 ] = dkboypdf3m [ iU ] ; frac_fv [ 3 ] =
lzm2khqk43 [ iU ] ; bpIndex_fv [ 0 ] = rtB . nj3xuut2fh [ iU ] ; bpIndex_fv [
1 ] = f2e5fcgb3v [ iU ] ; bpIndex_fv [ 2 ] = asvvjqwjnk [ iU ] ; bpIndex_fv [
3 ] = ayy24n2qrl [ iU ] ; if ( rtP . Constant8_Value_ew40w2pnft [ iU ] > 15.0
) { bpIndex_fv [ 4 ] = 15U ; } else { bpIndex_fv [ 4 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_ew40w2pnft [ iU ] , 0.0 ) ; }
f5qwewprly = intrp4d_fl_pw ( bpIndex_fv , frac_fv , & rtP . dp_VTAIL_INDUCED
. alpha_induced [ 1750U * bpIndex_fv [ 4 ] ] , rtP .
alpha_induced_dimSize_mh0u12qjqn ) ; rtB . agdfetg0qt [ iU ] = f5qwewprly ;
rtB . iygwn2n1hi [ iU ] = h5rdtgmjbr [ iU ] ; } { real_T * * uBuffer = (
real_T * * ) & rtDW . d5j1ciynjn . TUbufferPtrs [ 0 ] ; real_T simTime =
ssGetT ( rtS ) ; real_T appliedDelay ; { int_T i1 ; const real_T * u0 = & rtB
. agdfetg0qt [ 0 ] ; const real_T * u1 = & rtB . iygwn2n1hi [ 0 ] ; real_T *
y0 = & j1ncyjcm0a [ 0 ] ; int_T * iw_Tail = & rtDW . lynamxwk0r . Tail [ 0 ]
; int_T * iw_Head = & rtDW . lynamxwk0r . Head [ 0 ] ; int_T * iw_Last = &
rtDW . lynamxwk0r . Last [ 0 ] ; int_T * iw_CircularBufSize = & rtDW .
lynamxwk0r . CircularBufSize [ 0 ] ; for ( i1 = 0 ; i1 < 16 ; i1 ++ ) {
appliedDelay = u1 [ i1 ] ; if ( appliedDelay > rtP .
VariableTransportDelay_MaxDelay ) { appliedDelay = rtP .
VariableTransportDelay_MaxDelay ; } if ( appliedDelay < 0.0 ) { appliedDelay
= 0.0 ; } if ( appliedDelay == 0.0 ) { y0 [ i1 ] = u0 [ i1 ] ; } else { y0 [
i1 ] = rt_TDelayInterpolate ( simTime - appliedDelay , 0.0 , * uBuffer ,
iw_CircularBufSize [ i1 ] , & iw_Last [ i1 ] , iw_Tail [ i1 ] , iw_Head [ i1
] , rtP . VariableTransportDelay_InitOutput , 0 , ( boolean_T ) (
ssIsMinorTimeStep ( rtS ) && ( ssGetTimeOfLastOutput ( rtS ) == ssGetT ( rtS
) ) ) ) ; } uBuffer ++ ; } } } if ( ssGetTaskTime ( rtS , 0 ) < rtP .
Step1_Time_iu554jfbx3 ) { lsurenbes1 = rtP . Step1_Y0_b5454jljpv ; } else {
lsurenbes1 = rtP . Step1_YFinal_iefhvdxzkm ; } for ( i = 0 ; i < 16 ; i ++ )
{ if ( lsurenbes1 > rtP . Switch1_Threshold_e2dssfhnlr ) { pb5onpph4x [ i ] =
j1ncyjcm0a [ i ] ; } else { pb5onpph4x [ i ] = rtB . agdfetg0qt [ i ] ; }
jtoldnh5tw = ( real32_T ) pb5onpph4x [ i ] ; rtB . ge01nkozzs [ i ] =
jtoldnh5tw + rtB . cfz24gonbxg [ i ] ; h5rdtgmjbr [ i ] = jtoldnh5tw ; } for
( iU = 0 ; iU < 16 ; iU ++ ) { ayy24n2qrl [ iU ] = plook_u32ff_linxp ( rtB .
ge01nkozzs [ iU ] , rtP . dp_VTAIL . alphas , 12U , & h5rdtgmjbr [ iU ] , &
rtDW . itcccsf0ct [ iU ] ) ; } for ( iU = 0 ; iU < 16 ; iU ++ ) { asvvjqwjnk
[ iU ] = plook_u32ff_linxp ( rtB . atgyr3lfo3 [ iU ] , rtP . dp_VTAIL . betas
, 8U , & lzm2khqk43 [ iU ] , & rtDW . lipbrcbfzk [ iU ] ) ; } for ( iU = 0 ;
iU < 16 ; iU ++ ) { m04ebe1zz2 = asvvjqwjnk [ iU ] ; kiombdthr4 = ayy24n2qrl
[ iU ] ; f5qwewprly = lzm2khqk43 [ iU ] ; jtoldnh5tw = h5rdtgmjbr [ iU ] ;
frac_mi [ 0 ] = rtB . d0gfg5onrd [ iU ] ; frac_mi [ 1 ] = jtoldnh5tw ;
frac_mi [ 2 ] = f5qwewprly ; bpIndex_mi [ 0 ] = rtB . ngy3pgy40m [ iU ] ;
bpIndex_mi [ 1 ] = kiombdthr4 ; bpIndex_mi [ 2 ] = m04ebe1zz2 ; if ( rtP .
Constant8_Value_gsd4tzxrvv [ iU ] > 15.0 ) { bpIndex_mi [ 3 ] = 15U ; } else
{ bpIndex_mi [ 3 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_gsd4tzxrvv [ iU ] , 0.0 ) ; } k1zpj42h11 [ iU ] =
intrp3d_fl_pw ( bpIndex_mi , frac_mi , & rtP . dp_VTAIL . CFx [ 1170U *
bpIndex_mi [ 3 ] ] , rtP . InterpolationUsingPrelookup1_dimSize_ff4dr0zil3 )
; frac_b0 [ 0 ] = rtB . d0gfg5onrd [ iU ] ; frac_b0 [ 1 ] = jtoldnh5tw ;
frac_b0 [ 2 ] = f5qwewprly ; bpIndex_b0 [ 0 ] = rtB . ngy3pgy40m [ iU ] ;
bpIndex_b0 [ 1 ] = kiombdthr4 ; bpIndex_b0 [ 2 ] = m04ebe1zz2 ; if ( rtP .
Constant8_Value_gsd4tzxrvv [ iU ] > 15.0 ) { bpIndex_b0 [ 3 ] = 15U ; } else
{ bpIndex_b0 [ 3 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_gsd4tzxrvv [ iU ] , 0.0 ) ; } k1zpj42h11 [ iU + 16 ] =
intrp3d_fl_pw ( bpIndex_b0 , frac_b0 , & rtP . dp_VTAIL . CFy [ 1170U *
bpIndex_b0 [ 3 ] ] , rtP . InterpolationUsingPrelookup2_dimSize_kfgynmyj32 )
; frac_cc [ 0 ] = rtB . d0gfg5onrd [ iU ] ; frac_cc [ 1 ] = jtoldnh5tw ;
frac_cc [ 2 ] = f5qwewprly ; bpIndex_cc [ 0 ] = rtB . ngy3pgy40m [ iU ] ;
bpIndex_cc [ 1 ] = kiombdthr4 ; bpIndex_cc [ 2 ] = m04ebe1zz2 ; if ( rtP .
Constant8_Value_gsd4tzxrvv [ iU ] > 15.0 ) { bpIndex_cc [ 3 ] = 15U ; } else
{ bpIndex_cc [ 3 ] = ( uint32_T ) muDoubleScalarMax ( rtP .
Constant8_Value_gsd4tzxrvv [ iU ] , 0.0 ) ; } k1zpj42h11 [ iU + 32 ] =
intrp3d_fl_pw ( bpIndex_cc , frac_cc , & rtP . dp_VTAIL . CFz [ 1170U *
bpIndex_cc [ 3 ] ] , rtP . InterpolationUsingPrelookup3_dimSize_m2ki2jhx1z )
; rtB . o0icr3ysdn [ 3 * iU ] = mybyivl1uq [ 3 * iU ] * k1zpj42h11 [ iU ] *
rtB . lhopa3gq4f * rtP . Gain2_Gain_pp1pwsqq1n ; rtB . o0icr3ysdn [ 3 * iU +
1 ] = mybyivl1uq [ 3 * iU + 1 ] * k1zpj42h11 [ iU + 16 ] * rtB . lhopa3gq4f *
rtP . Gain2_Gain_pp1pwsqq1n ; rtB . o0icr3ysdn [ 3 * iU + 2 ] = mybyivl1uq [
3 * iU + 2 ] * k1zpj42h11 [ iU + 32 ] * rtB . lhopa3gq4f * rtP .
Gain2_Gain_pp1pwsqq1n ; } parallel_for ( 16 , femu5gktcp , 1 , "femu5gktcp" )
; for ( iU = 0 ; iU < 16 ; iU ++ ) { m04ebe1zz2 = asvvjqwjnk [ iU ] ;
kiombdthr4 = ayy24n2qrl [ iU ] ; f5qwewprly = lzm2khqk43 [ iU ] ; jtoldnh5tw
= h5rdtgmjbr [ iU ] ; frac_gw [ 0 ] = rtB . d0gfg5onrd [ iU ] ; frac_gw [ 1 ]
= jtoldnh5tw ; frac_gw [ 2 ] = f5qwewprly ; bpIndex_gw [ 0 ] = rtB .
ngy3pgy40m [ iU ] ; bpIndex_gw [ 1 ] = kiombdthr4 ; bpIndex_gw [ 2 ] =
m04ebe1zz2 ; if ( rtP . Constant8_Value_gsd4tzxrvv [ iU ] > 15.0 ) {
bpIndex_gw [ 3 ] = 15U ; } else { bpIndex_gw [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_gsd4tzxrvv [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU ] = intrp3d_fl_pw ( bpIndex_gw , frac_gw , & rtP . dp_VTAIL .
CMx [ 1170U * bpIndex_gw [ 3 ] ] , rtP .
InterpolationUsingPrelookup4_dimSize_juyddnk1fb ) ; frac_iz [ 0 ] = rtB .
d0gfg5onrd [ iU ] ; frac_iz [ 1 ] = jtoldnh5tw ; frac_iz [ 2 ] = f5qwewprly ;
bpIndex_iz [ 0 ] = rtB . ngy3pgy40m [ iU ] ; bpIndex_iz [ 1 ] = kiombdthr4 ;
bpIndex_iz [ 2 ] = m04ebe1zz2 ; if ( rtP . Constant8_Value_gsd4tzxrvv [ iU ]
> 15.0 ) { bpIndex_iz [ 3 ] = 15U ; } else { bpIndex_iz [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_gsd4tzxrvv [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU + 16 ] = intrp3d_fl_pw ( bpIndex_iz , frac_iz , & rtP .
dp_VTAIL . CMy [ 1170U * bpIndex_iz [ 3 ] ] , rtP .
InterpolationUsingPrelookup5_dimSize_mnvowrob4d ) ; frac_kv [ 0 ] = rtB .
d0gfg5onrd [ iU ] ; frac_kv [ 1 ] = jtoldnh5tw ; frac_kv [ 2 ] = f5qwewprly ;
bpIndex_kv [ 0 ] = rtB . ngy3pgy40m [ iU ] ; bpIndex_kv [ 1 ] = kiombdthr4 ;
bpIndex_kv [ 2 ] = m04ebe1zz2 ; if ( rtP . Constant8_Value_gsd4tzxrvv [ iU ]
> 15.0 ) { bpIndex_kv [ 3 ] = 15U ; } else { bpIndex_kv [ 3 ] = ( uint32_T )
muDoubleScalarMax ( rtP . Constant8_Value_gsd4tzxrvv [ iU ] , 0.0 ) ; }
k1zpj42h11 [ iU + 32 ] = intrp3d_fl_pw ( bpIndex_kv , frac_kv , & rtP .
dp_VTAIL . CMz [ 1170U * bpIndex_kv [ 3 ] ] , rtP .
InterpolationUsingPrelookup6_dimSize_lpul1da2p2 ) ; mfkqvhwnqs [ 3 * iU ] =
mybyivl1uq [ 3 * iU ] * k1zpj42h11 [ iU ] * rtP . Constant1_Value_lhco2hmkqd
[ 3 * iU ] * rtB . lhopa3gq4f * rtP . Gain3_Gain_i1yimbgde1 + rtB .
byhpdluumbuo [ 3 * iU ] ; mfkqvhwnqs [ 3 * iU + 1 ] = mybyivl1uq [ 3 * iU + 1
] * k1zpj42h11 [ iU + 16 ] * rtP . Constant1_Value_lhco2hmkqd [ 3 * iU + 1 ]
* rtB . lhopa3gq4f * rtP . Gain3_Gain_i1yimbgde1 + rtB . byhpdluumbuo [ 3 *
iU + 1 ] ; mfkqvhwnqs [ 3 * iU + 2 ] = mybyivl1uq [ 3 * iU + 2 ] * k1zpj42h11
[ iU + 32 ] * rtP . Constant1_Value_lhco2hmkqd [ 3 * iU + 2 ] * rtB .
lhopa3gq4f * rtP . Gain3_Gain_i1yimbgde1 + rtB . byhpdluumbuo [ 3 * iU + 2 ]
; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { cwdb3qacqr = - 0.0 ; for ( i_e = 0 ;
i_e < 16 ; i_e ++ ) { cwdb3qacqr += mfkqvhwnqs [ i_e * 3 + i_p ] ; }
as2exlo2n4 [ i_p ] = cwdb3qacqr ; } cq2trmp0xn_idx_0 = ( real32_T )
as2exlo2n4 [ 0 ] ; cq2trmp0xn_idx_1 = ( real32_T ) as2exlo2n4 [ 1 ] ;
cq2trmp0xn_idx_2 = ( real32_T ) as2exlo2n4 [ 2 ] ; muDoubleScalarSinCos ( (
real32_T ) rtB . cuqqqrtko4 , & lsurenbes1 , & jbp40v4j45 ) ;
muDoubleScalarSinCos ( ( real32_T ) rtB . mxf3xuhmmg , & bcwof20ssn , &
do2fmqm0jw_idx_1 ) ; pciztti2mf [ 0 ] = jbp40v4j45 * do2fmqm0jw_idx_1 ;
pciztti2mf [ 1 ] = - ( jbp40v4j45 * bcwof20ssn ) ; pciztti2mf [ 2 ] = -
lsurenbes1 ; pciztti2mf [ 3 ] = bcwof20ssn ; pciztti2mf [ 4 ] =
do2fmqm0jw_idx_1 ; pciztti2mf [ 5 ] = rtP . Constant_Value_lx5fpqludr ;
pciztti2mf [ 6 ] = lsurenbes1 * do2fmqm0jw_idx_1 ; pciztti2mf [ 7 ] = - (
lsurenbes1 * bcwof20ssn ) ; pciztti2mf [ 8 ] = jbp40v4j45 ; m04ebe1zz2 =
plook_u32ff_linxp ( ( real32_T ) rtB . mxf3xuhmmg , rtP .
Prelookup_BreakpointsData_jhj5wmsqza , 12U , & f5qwewprly , & rtDW .
md1fsm3br3 ) ; kiombdthr4 = plook_u32ff_linxp ( ( real32_T ) rtB . cuqqqrtko4
, rtP . Prelookup1_BreakpointsData_ohopywq20p , 14U , & p5e3xkr1y0 , & rtDW .
be05daasmg ) ; frac_lb [ 0 ] = f5qwewprly ; frac_lb [ 1 ] = p5e3xkr1y0 ;
bpIndex_lb [ 0 ] = m04ebe1zz2 ; bpIndex_lb [ 1 ] = kiombdthr4 ; frac_m5 [ 0 ]
= f5qwewprly ; frac_m5 [ 1 ] = p5e3xkr1y0 ; bpIndex_m5 [ 0 ] = m04ebe1zz2 ;
bpIndex_m5 [ 1 ] = kiombdthr4 ; lrpn1bvaje = ( real32_T ) rtB . beu34wglui *
( real32_T ) rtB . beu34wglui ; jtoldnh5tw = intrp2d_fu32fl_pw ( bpIndex_lb ,
frac_lb , rtP . dp_FUSE_FIN . CD , 13U ) ; nsmwxx5bxv = intrp2d_fu32fl_pw (
bpIndex_m5 , frac_m5 , rtP . dp_FUSE_FIN . CS , 13U ) ; frac_j4 [ 0 ] =
f5qwewprly ; frac_j4 [ 1 ] = p5e3xkr1y0 ; bpIndex_j4 [ 0 ] = m04ebe1zz2 ;
bpIndex_j4 [ 1 ] = kiombdthr4 ; frac_ii [ 0 ] = f5qwewprly ; frac_ii [ 1 ] =
p5e3xkr1y0 ; bpIndex_ii [ 0 ] = m04ebe1zz2 ; bpIndex_ii [ 1 ] = kiombdthr4 ;
frac_hv [ 0 ] = f5qwewprly ; frac_hv [ 1 ] = p5e3xkr1y0 ; bpIndex_hv [ 0 ] =
m04ebe1zz2 ; bpIndex_hv [ 1 ] = kiombdthr4 ; as2exlo2n4 [ 0 ] =
intrp2d_fu32fl_pw ( bpIndex_j4 , frac_j4 , rtP . dp_FUSE_FIN . CMx , 13U ) *
lrpn1bvaje * rtP . Constant_Value_jra04za24u [ 0 ] ; as2exlo2n4 [ 1 ] =
intrp2d_fu32fl_pw ( bpIndex_ii , frac_ii , rtP . dp_FUSE_FIN . CMy , 13U ) *
lrpn1bvaje * rtP . Constant_Value_jra04za24u [ 1 ] ; as2exlo2n4 [ 2 ] =
intrp2d_fu32fl_pw ( bpIndex_hv , frac_hv , rtP . dp_FUSE_FIN . CMz , 13U ) *
lrpn1bvaje * rtP . Constant_Value_jra04za24u [ 2 ] ; for ( i = 0 ; i < 3 ; i
++ ) { g0uuf55mpg [ i ] = ( ( ( real32_T ) pciztti2mf [ 3 * i + 1 ] *
nsmwxx5bxv + ( real32_T ) pciztti2mf [ 3 * i ] * - jtoldnh5tw ) + ( real32_T
) pciztti2mf [ 3 * i + 2 ] * rtB . phywd5jekf ) * lrpn1bvaje * rtB .
lhopa3gq4f * rtP . Gain_Gain_llsqu3hkdm ; cuwl4zp4yw [ i ] = rtB . lhopa3gq4f
* as2exlo2n4 [ i ] ; } cwdb3qacqr = rtP . S / 2.0 ; rtB . d1dja0jwhm [ 0 ] =
( ( rtB . krmhpaiwtk [ 1 ] * g0uuf55mpg [ 2 ] - g0uuf55mpg [ 1 ] * rtB .
krmhpaiwtk [ 2 ] ) + cwdb3qacqr * cuwl4zp4yw [ 0 ] ) + ( ( real_T ) ( -
ivnfroue5d [ 0 ] + bdvkktmal5_idx_0 ) + cq2trmp0xn_idx_0 ) ; rtB . d1dja0jwhm
[ 1 ] = ( ( g0uuf55mpg [ 0 ] * rtB . krmhpaiwtk [ 2 ] - rtB . krmhpaiwtk [ 0
] * g0uuf55mpg [ 2 ] ) + cwdb3qacqr * cuwl4zp4yw [ 1 ] ) + ( ( real_T ) (
ivnfroue5d [ 1 ] + bdvkktmal5_idx_1 ) + cq2trmp0xn_idx_1 ) ; rtB . d1dja0jwhm
[ 2 ] = ( ( rtB . krmhpaiwtk [ 0 ] * g0uuf55mpg [ 1 ] - g0uuf55mpg [ 0 ] *
rtB . krmhpaiwtk [ 1 ] ) + cwdb3qacqr * cuwl4zp4yw [ 2 ] ) + ( ( real_T ) ( -
ivnfroue5d [ 2 ] + bdvkktmal5_idx_2 ) + cq2trmp0xn_idx_2 ) ; for ( i_p = 0 ;
i_p < 3 ; i_p ++ ) { cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e < 12 ; i_e ++ )
{ cwdb3qacqr += gsnhdicnm0 [ i_e * 3 + i_p ] ; } as2exlo2n4 [ i_p ] =
cwdb3qacqr ; } muDoubleScalarSinCos ( m00opiy3yc_idx_0 , & cuwl4zp4yw [ 0 ] ,
& a5zxkwaluu [ 0 ] ) ; muDoubleScalarSinCos ( m00opiy3yc_idx_1 , & cuwl4zp4yw
[ 1 ] , & a5zxkwaluu [ 1 ] ) ; muDoubleScalarSinCos ( m00opiy3yc_idx_2 , &
cuwl4zp4yw [ 2 ] , & a5zxkwaluu [ 2 ] ) ; pciztti2mf [ 0 ] = a5zxkwaluu [ 0 ]
* a5zxkwaluu [ 1 ] ; pciztti2mf [ 1 ] = cuwl4zp4yw [ 1 ] * cuwl4zp4yw [ 2 ] *
a5zxkwaluu [ 0 ] - cuwl4zp4yw [ 0 ] * a5zxkwaluu [ 2 ] ; pciztti2mf [ 2 ] =
cuwl4zp4yw [ 1 ] * a5zxkwaluu [ 2 ] * a5zxkwaluu [ 0 ] + cuwl4zp4yw [ 0 ] *
cuwl4zp4yw [ 2 ] ; pciztti2mf [ 3 ] = cuwl4zp4yw [ 0 ] * a5zxkwaluu [ 1 ] ;
pciztti2mf [ 4 ] = cuwl4zp4yw [ 1 ] * cuwl4zp4yw [ 2 ] * cuwl4zp4yw [ 0 ] +
a5zxkwaluu [ 0 ] * a5zxkwaluu [ 2 ] ; pciztti2mf [ 5 ] = cuwl4zp4yw [ 1 ] *
a5zxkwaluu [ 2 ] * cuwl4zp4yw [ 0 ] - a5zxkwaluu [ 0 ] * cuwl4zp4yw [ 2 ] ;
pciztti2mf [ 6 ] = - cuwl4zp4yw [ 1 ] ; pciztti2mf [ 7 ] = a5zxkwaluu [ 1 ] *
cuwl4zp4yw [ 2 ] ; pciztti2mf [ 8 ] = a5zxkwaluu [ 1 ] * a5zxkwaluu [ 2 ] ;
for ( i = 0 ; i < 3 ; i ++ ) { frhju144cl [ i ] = ( ( pciztti2mf [ 3 * i + 1
] * rtB . pr1vt54ko4 [ 1 ] + pciztti2mf [ 3 * i ] * rtB . pr1vt54ko4 [ 0 ] )
+ pciztti2mf [ 3 * i + 2 ] * rtB . pr1vt54ko4 [ 2 ] ) + rtB . evtlmv3rtj [ i
] ; } rtB . jagg20wiay = rtP . ground_alt - frhju144cl [ 2 ] ; if ( rtB .
jagg20wiay > rtP . Switch_Threshold_fa0qrtsblw ) { rtB . h5anqi052g = rtP .
Constant1_Value_dhktifwxn5 ; } else { rtB . h5anqi052g = rtP .
Constant_Value_l3yr2jaxah ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB .
cutvjsc51o [ 0 ] = rtDW . oy300njhw2 [ 0 ] ; rtB . cutvjsc51o [ 1 ] = rtDW .
oy300njhw2 [ 1 ] ; rtB . cutvjsc51o [ 2 ] = rtDW . oy300njhw2 [ 2 ] ; } rtB .
jvaexa3o5a . fxgxda1orz [ 0 ] = rtB . cutvjsc51o [ 0 ] ; rtB . jvaexa3o5a .
fxgxda1orz [ 1 ] = rtB . cutvjsc51o [ 1 ] ; rtB . jvaexa3o5a . fxgxda1orz [ 2
] = rtB . cutvjsc51o [ 2 ] ; pm13c03kzl ( frhju144cl , rtB . h5anqi052g , &
rtB . jvaexa3o5a ) ; if ( rtB . h5anqi052g ) { g52k1xdouv_idx_1 = rtB .
jvaexa3o5a . mydm0s4bv0 [ 2 ] - frhju144cl [ 2 ] ; } else { g52k1xdouv_idx_1
= rtP . Constant_Value_o1yp2gl00i ; } sb = g52k1xdouv_idx_1 + rtP .
Constant2_Value_p2rjztbk2r ; if ( sb > rtP . Saturation1_UpperSat_faajmjiyue
) { sb = rtP . Saturation1_UpperSat_faajmjiyue ; } else if ( sb < rtP .
Saturation1_LowerSat_fjfihtgctt ) { sb = rtP .
Saturation1_LowerSat_fjfihtgctt ; } rtB . llwqqnw3ke = sb * rtP .
Constant_Value_fgevrsqc4v ; if ( rtB . h5anqi052g ) { muDoubleScalarSinCos (
rtP . Constant1_Value_eyubj2pyfz , & lsurenbes1 , & jbp40v4j45 ) ;
muDoubleScalarSinCos ( rtB . gkiqijsiwi [ 1 ] , & mfkf5g0cet_idx_1 , &
hp3vnvb34m_idx_1 ) ; muDoubleScalarSinCos ( rtB . gkiqijsiwi [ 0 ] , &
mfkf5g0cet_idx_2 , & hp3vnvb34m_idx_2 ) ; pciztti2mf [ 8 ] = hp3vnvb34m_idx_1
* hp3vnvb34m_idx_2 ; pciztti2mf [ 7 ] = hp3vnvb34m_idx_1 * mfkf5g0cet_idx_2 ;
pciztti2mf [ 6 ] = - mfkf5g0cet_idx_1 ; pciztti2mf [ 5 ] = mfkf5g0cet_idx_1 *
hp3vnvb34m_idx_2 * lsurenbes1 - jbp40v4j45 * mfkf5g0cet_idx_2 ; pciztti2mf [
4 ] = mfkf5g0cet_idx_1 * mfkf5g0cet_idx_2 * lsurenbes1 + jbp40v4j45 *
hp3vnvb34m_idx_2 ; pciztti2mf [ 3 ] = lsurenbes1 * hp3vnvb34m_idx_1 ;
pciztti2mf [ 2 ] = mfkf5g0cet_idx_1 * hp3vnvb34m_idx_2 * jbp40v4j45 +
lsurenbes1 * mfkf5g0cet_idx_2 ; pciztti2mf [ 1 ] = mfkf5g0cet_idx_1 *
mfkf5g0cet_idx_2 * jbp40v4j45 - lsurenbes1 * hp3vnvb34m_idx_2 ; pciztti2mf [
0 ] = jbp40v4j45 * hp3vnvb34m_idx_1 ; kld3j4mgfs_idx_1 = ( rtB . mkyju0odm1 [
1 ] * rtB . pr1vt54ko4 [ 2 ] - rtB . pr1vt54ko4 [ 1 ] * rtB . mkyju0odm1 [ 2
] ) + rtB . cig1ezu0up [ 0 ] ; j2olvplitn_idx_0 = ( rtB . pr1vt54ko4 [ 0 ] *
rtB . mkyju0odm1 [ 2 ] - rtB . mkyju0odm1 [ 0 ] * rtB . pr1vt54ko4 [ 2 ] ) +
rtB . cig1ezu0up [ 1 ] ; kurpvwnuj4_idx_1 = ( rtB . mkyju0odm1 [ 0 ] * rtB .
pr1vt54ko4 [ 1 ] - rtB . pr1vt54ko4 [ 0 ] * rtB . mkyju0odm1 [ 1 ] ) + rtB .
cig1ezu0up [ 2 ] ; for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { inoflfxzl4 [ i_p ] =
( pciztti2mf [ 3 * i_p + 1 ] * j2olvplitn_idx_0 + pciztti2mf [ 3 * i_p ] *
kld3j4mgfs_idx_1 ) + pciztti2mf [ 3 * i_p + 2 ] * kurpvwnuj4_idx_1 ; }
lsurenbes1 = - inoflfxzl4 [ 2 ] ; } else { lsurenbes1 = rtP .
Constant_Value_o1yp2gl00i ; } rtB . lpr3engkn0 = rtP .
Constant1_Value_dgi3p5u40k * lsurenbes1 ; rtB . adxfu05snb = rtB . llwqqnw3ke
+ rtB . lpr3engkn0 ; if ( rtB . adxfu05snb > rtP .
Saturation_UpperSat_hpioqrnjvm ) { rtB . mfsumfb52o = rtP .
Saturation_UpperSat_hpioqrnjvm ; } else if ( rtB . adxfu05snb < rtP .
Saturation_LowerSat_ckp25ja5tp ) { rtB . mfsumfb52o = rtP .
Saturation_LowerSat_ckp25ja5tp ; } else { rtB . mfsumfb52o = rtB . adxfu05snb
; } muDoubleScalarSinCos ( m00opiy3yc_idx_0 , & a5zxkwaluu [ 0 ] , &
cuwl4zp4yw [ 0 ] ) ; muDoubleScalarSinCos ( m00opiy3yc_idx_1 , & a5zxkwaluu [
1 ] , & cuwl4zp4yw [ 1 ] ) ; muDoubleScalarSinCos ( m00opiy3yc_idx_2 , &
a5zxkwaluu [ 2 ] , & cuwl4zp4yw [ 2 ] ) ; pciztti2mf [ 0 ] = cuwl4zp4yw [ 0 ]
* cuwl4zp4yw [ 1 ] ; pciztti2mf [ 1 ] = a5zxkwaluu [ 1 ] * a5zxkwaluu [ 2 ] *
cuwl4zp4yw [ 0 ] - a5zxkwaluu [ 0 ] * cuwl4zp4yw [ 2 ] ; pciztti2mf [ 2 ] =
a5zxkwaluu [ 1 ] * cuwl4zp4yw [ 2 ] * cuwl4zp4yw [ 0 ] + a5zxkwaluu [ 0 ] *
a5zxkwaluu [ 2 ] ; pciztti2mf [ 3 ] = a5zxkwaluu [ 0 ] * cuwl4zp4yw [ 1 ] ;
pciztti2mf [ 4 ] = a5zxkwaluu [ 1 ] * a5zxkwaluu [ 2 ] * a5zxkwaluu [ 0 ] +
cuwl4zp4yw [ 0 ] * cuwl4zp4yw [ 2 ] ; pciztti2mf [ 5 ] = a5zxkwaluu [ 1 ] *
cuwl4zp4yw [ 2 ] * a5zxkwaluu [ 0 ] - cuwl4zp4yw [ 0 ] * a5zxkwaluu [ 2 ] ;
pciztti2mf [ 6 ] = - a5zxkwaluu [ 1 ] ; pciztti2mf [ 7 ] = cuwl4zp4yw [ 1 ] *
a5zxkwaluu [ 2 ] ; pciztti2mf [ 8 ] = cuwl4zp4yw [ 1 ] * cuwl4zp4yw [ 2 ] ;
for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { j4ckedbbex [ i_p ] = ( ( pciztti2mf [ 3
* i_p + 1 ] * rtB . njlxqs1uc4 [ 1 ] + pciztti2mf [ 3 * i_p ] * rtB .
njlxqs1uc4 [ 0 ] ) + pciztti2mf [ 3 * i_p + 2 ] * rtB . njlxqs1uc4 [ 2 ] ) +
rtB . evtlmv3rtj [ i_p ] ; } rtB . ibkkavp3uy = rtP . ground_alt - j4ckedbbex
[ 2 ] ; if ( rtB . ibkkavp3uy > rtP . Switch_Threshold_nwgyj0aeyx ) { rtB .
fvsr3tltfl = rtP . Constant1_Value_fad3jx5usw ; } else { rtB . fvsr3tltfl =
rtP . Constant_Value_bmpfzxx1ux ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
rtB . k002wprevb [ 0 ] = rtDW . ie2l444zba [ 0 ] ; rtB . k002wprevb [ 1 ] =
rtDW . ie2l444zba [ 1 ] ; rtB . k002wprevb [ 2 ] = rtDW . ie2l444zba [ 2 ] ;
} rtB . leuhdrxpbe . fxgxda1orz [ 0 ] = rtB . k002wprevb [ 0 ] ; rtB .
leuhdrxpbe . fxgxda1orz [ 1 ] = rtB . k002wprevb [ 1 ] ; rtB . leuhdrxpbe .
fxgxda1orz [ 2 ] = rtB . k002wprevb [ 2 ] ; pm13c03kzl ( j4ckedbbex , rtB .
fvsr3tltfl , & rtB . leuhdrxpbe ) ; if ( rtB . fvsr3tltfl ) {
g52k1xdouv_idx_1 = rtB . leuhdrxpbe . mydm0s4bv0 [ 2 ] - j4ckedbbex [ 2 ] ; }
else { g52k1xdouv_idx_1 = rtP . Constant_Value_feb2wg5gid ; } sb =
g52k1xdouv_idx_1 + rtP . Constant2_Value_hhw30thswa ; if ( sb > rtP .
Saturation1_UpperSat_jujzsatqjs ) { sb = rtP .
Saturation1_UpperSat_jujzsatqjs ; } else if ( sb < rtP .
Saturation1_LowerSat_ifds41vj3d ) { sb = rtP .
Saturation1_LowerSat_ifds41vj3d ; } rtB . dwtsbon1wj = sb * rtP .
Constant_Value_ivz01hdudw ; if ( rtB . fvsr3tltfl ) { muDoubleScalarSinCos (
rtP . Constant1_Value_f4dk2n3412 , & pbzebb1cbu_idx_0 , & dmol4f0gb0_idx_0 )
; muDoubleScalarSinCos ( rtB . gkiqijsiwi [ 1 ] , & pbzebb1cbu_idx_1 , &
dmol4f0gb0_idx_1 ) ; muDoubleScalarSinCos ( rtB . gkiqijsiwi [ 0 ] , &
pbzebb1cbu_idx_2 , & dmol4f0gb0_idx_2 ) ; pciztti2mf [ 8 ] = dmol4f0gb0_idx_1
* dmol4f0gb0_idx_2 ; pciztti2mf [ 7 ] = dmol4f0gb0_idx_1 * pbzebb1cbu_idx_2 ;
pciztti2mf [ 6 ] = - pbzebb1cbu_idx_1 ; pciztti2mf [ 5 ] = pbzebb1cbu_idx_1 *
dmol4f0gb0_idx_2 * pbzebb1cbu_idx_0 - dmol4f0gb0_idx_0 * pbzebb1cbu_idx_2 ;
pciztti2mf [ 4 ] = pbzebb1cbu_idx_1 * pbzebb1cbu_idx_2 * pbzebb1cbu_idx_0 +
dmol4f0gb0_idx_0 * dmol4f0gb0_idx_2 ; pciztti2mf [ 3 ] = pbzebb1cbu_idx_0 *
dmol4f0gb0_idx_1 ; pciztti2mf [ 2 ] = pbzebb1cbu_idx_1 * dmol4f0gb0_idx_2 *
dmol4f0gb0_idx_0 + pbzebb1cbu_idx_0 * pbzebb1cbu_idx_2 ; pciztti2mf [ 1 ] =
pbzebb1cbu_idx_1 * pbzebb1cbu_idx_2 * dmol4f0gb0_idx_0 - pbzebb1cbu_idx_0 *
dmol4f0gb0_idx_2 ; pciztti2mf [ 0 ] = dmol4f0gb0_idx_0 * dmol4f0gb0_idx_1 ;
kld3j4mgfs_idx_1 = ( rtB . mkyju0odm1 [ 1 ] * rtB . njlxqs1uc4 [ 2 ] - rtB .
njlxqs1uc4 [ 1 ] * rtB . mkyju0odm1 [ 2 ] ) + rtB . cig1ezu0up [ 0 ] ;
j2olvplitn_idx_0 = ( rtB . njlxqs1uc4 [ 0 ] * rtB . mkyju0odm1 [ 2 ] - rtB .
mkyju0odm1 [ 0 ] * rtB . njlxqs1uc4 [ 2 ] ) + rtB . cig1ezu0up [ 1 ] ;
kurpvwnuj4_idx_1 = ( rtB . mkyju0odm1 [ 0 ] * rtB . njlxqs1uc4 [ 1 ] - rtB .
njlxqs1uc4 [ 0 ] * rtB . mkyju0odm1 [ 1 ] ) + rtB . cig1ezu0up [ 2 ] ; for (
i_p = 0 ; i_p < 3 ; i_p ++ ) { inoflfxzl4 [ i_p ] = ( pciztti2mf [ 3 * i_p +
1 ] * j2olvplitn_idx_0 + pciztti2mf [ 3 * i_p ] * kld3j4mgfs_idx_1 ) +
pciztti2mf [ 3 * i_p + 2 ] * kurpvwnuj4_idx_1 ; } lsurenbes1 = - inoflfxzl4 [
2 ] ; } else { lsurenbes1 = rtP . Constant_Value_feb2wg5gid ; } rtB .
g2lkzpk1cd = rtP . Constant1_Value_nw1qma1fjc * lsurenbes1 ; rtB . o3f4ir0mnt
= rtB . dwtsbon1wj + rtB . g2lkzpk1cd ; if ( rtB . o3f4ir0mnt > rtP .
Saturation_UpperSat_n2gmlqdobk ) { rtB . phhcl0h52y = rtP .
Saturation_UpperSat_n2gmlqdobk ; } else if ( rtB . o3f4ir0mnt < rtP .
Saturation_LowerSat_egflfzvuqx ) { rtB . phhcl0h52y = rtP .
Saturation_LowerSat_egflfzvuqx ; } else { rtB . phhcl0h52y = rtB . o3f4ir0mnt
; } a5zxkwaluu [ 2 ] = rtB . mfsumfb52o + rtB . phhcl0h52y ; lsurenbes1 = rtP
. FrictionCoefficient_Gain * muDoubleScalarAbs ( a5zxkwaluu [ 2 ] ) ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . cmce4od5nu = rtP .
Constant1_Value_aeivuiuwhs * rtB . j3t4wyjy41 [ 4 ] ; } if ( ! ( rtB .
cmce4od5nu > lsurenbes1 ) ) { if ( rtB . cmce4od5nu < - lsurenbes1 ) {
lsurenbes1 = - lsurenbes1 ; } else { lsurenbes1 = rtB . cmce4od5nu ; } }
jbp40v4j45 = rtP . FrictionCoefficient_Gain_bld3rumxab * muDoubleScalarAbs (
a5zxkwaluu [ 2 ] ) ; if ( rtB . h5anqi052g || rtB . fvsr3tltfl ) {
g52k1xdouv_idx_1 = - rtB . cig1ezu0up [ 1 ] ; } else { g52k1xdouv_idx_1 = rtP
. Constant_Value_ph3kv45jlz ; } bcwof20ssn = rtP . Constant1_Value_crvf1ymqjc
* g52k1xdouv_idx_1 ; if ( ! ( bcwof20ssn > jbp40v4j45 ) ) { if ( bcwof20ssn <
- jbp40v4j45 ) { jbp40v4j45 = - jbp40v4j45 ; } else { jbp40v4j45 = bcwof20ssn
; } } muDoubleScalarSinCos ( m00opiy3yc_idx_0 , & cuwl4zp4yw [ 0 ] , &
aikhueixpf [ 0 ] ) ; muDoubleScalarSinCos ( m00opiy3yc_idx_1 , & cuwl4zp4yw [
1 ] , & aikhueixpf [ 1 ] ) ; muDoubleScalarSinCos ( m00opiy3yc_idx_2 , &
cuwl4zp4yw [ 2 ] , & aikhueixpf [ 2 ] ) ; pciztti2mf [ 0 ] = aikhueixpf [ 0 ]
* aikhueixpf [ 1 ] ; pciztti2mf [ 1 ] = cuwl4zp4yw [ 1 ] * cuwl4zp4yw [ 2 ] *
aikhueixpf [ 0 ] - cuwl4zp4yw [ 0 ] * aikhueixpf [ 2 ] ; pciztti2mf [ 2 ] =
cuwl4zp4yw [ 1 ] * aikhueixpf [ 2 ] * aikhueixpf [ 0 ] + cuwl4zp4yw [ 0 ] *
cuwl4zp4yw [ 2 ] ; pciztti2mf [ 3 ] = cuwl4zp4yw [ 0 ] * aikhueixpf [ 1 ] ;
pciztti2mf [ 4 ] = cuwl4zp4yw [ 1 ] * cuwl4zp4yw [ 2 ] * cuwl4zp4yw [ 0 ] +
aikhueixpf [ 0 ] * aikhueixpf [ 2 ] ; pciztti2mf [ 5 ] = cuwl4zp4yw [ 1 ] *
aikhueixpf [ 2 ] * cuwl4zp4yw [ 0 ] - aikhueixpf [ 0 ] * cuwl4zp4yw [ 2 ] ;
pciztti2mf [ 6 ] = - cuwl4zp4yw [ 1 ] ; pciztti2mf [ 7 ] = aikhueixpf [ 1 ] *
cuwl4zp4yw [ 2 ] ; pciztti2mf [ 8 ] = aikhueixpf [ 1 ] * aikhueixpf [ 2 ] ;
for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { egh4jyhxcm [ i_p ] = ( ( pciztti2mf [ 3
* i_p + 1 ] * rtB . mythzqzjez [ 1 ] + pciztti2mf [ 3 * i_p ] * rtB .
mythzqzjez [ 0 ] ) + pciztti2mf [ 3 * i_p + 2 ] * rtB . mythzqzjez [ 2 ] ) +
rtB . evtlmv3rtj [ i_p ] ; } rtB . cvpaunpk1i = rtP . ground_alt - egh4jyhxcm
[ 2 ] ; if ( rtB . cvpaunpk1i > rtP . Switch_Threshold_kslqyxqwsc ) { rtB .
dzk03qgr1o = rtP . Constant1_Value_apy2wpsmee ; } else { rtB . dzk03qgr1o =
rtP . Constant_Value_hagifheq3t ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
rtB . kra5wvotxw [ 0 ] = rtDW . fr2fpc1qxz [ 0 ] ; rtB . kra5wvotxw [ 1 ] =
rtDW . fr2fpc1qxz [ 1 ] ; rtB . kra5wvotxw [ 2 ] = rtDW . fr2fpc1qxz [ 2 ] ;
} rtB . csf3emrtxr . fxgxda1orz [ 0 ] = rtB . kra5wvotxw [ 0 ] ; rtB .
csf3emrtxr . fxgxda1orz [ 1 ] = rtB . kra5wvotxw [ 1 ] ; rtB . csf3emrtxr .
fxgxda1orz [ 2 ] = rtB . kra5wvotxw [ 2 ] ; pm13c03kzl ( egh4jyhxcm , rtB .
dzk03qgr1o , & rtB . csf3emrtxr ) ; if ( rtB . dzk03qgr1o ) {
g52k1xdouv_idx_1 = rtB . csf3emrtxr . mydm0s4bv0 [ 2 ] - egh4jyhxcm [ 2 ] ; }
else { g52k1xdouv_idx_1 = rtP . Constant_Value_aqtgynqvul ; } sb =
g52k1xdouv_idx_1 + rtP . Constant2_Value_er0w5mtd4j ; if ( sb > rtP .
Saturation1_UpperSat_bgrqxpsgy2 ) { sb = rtP .
Saturation1_UpperSat_bgrqxpsgy2 ; } else if ( sb < rtP .
Saturation1_LowerSat_mtmmhddwjb ) { sb = rtP .
Saturation1_LowerSat_mtmmhddwjb ; } rtB . h1v0fki4wd = sb * rtP .
Constant_Value_gptvvpedc0 ; if ( rtB . dzk03qgr1o ) { muDoubleScalarSinCos (
rtP . Constant1_Value_jtm4r5yj4j , & jgywcuuufn [ 0 ] , & jgzcqdfrmy_idx_0 )
; muDoubleScalarSinCos ( rtB . gkiqijsiwi [ 1 ] , & jgywcuuufn [ 1 ] , &
jgzcqdfrmy_idx_1 ) ; muDoubleScalarSinCos ( rtB . gkiqijsiwi [ 0 ] , &
jgywcuuufn [ 2 ] , & jgzcqdfrmy_idx_2 ) ; pciztti2mf [ 8 ] = jgzcqdfrmy_idx_1
* jgzcqdfrmy_idx_2 ; pciztti2mf [ 7 ] = jgzcqdfrmy_idx_1 * jgywcuuufn [ 2 ] ;
pciztti2mf [ 6 ] = - jgywcuuufn [ 1 ] ; pciztti2mf [ 5 ] = jgywcuuufn [ 1 ] *
jgzcqdfrmy_idx_2 * jgywcuuufn [ 0 ] - jgzcqdfrmy_idx_0 * jgywcuuufn [ 2 ] ;
pciztti2mf [ 4 ] = jgywcuuufn [ 1 ] * jgywcuuufn [ 2 ] * jgywcuuufn [ 0 ] +
jgzcqdfrmy_idx_0 * jgzcqdfrmy_idx_2 ; pciztti2mf [ 3 ] = jgywcuuufn [ 0 ] *
jgzcqdfrmy_idx_1 ; pciztti2mf [ 2 ] = jgywcuuufn [ 1 ] * jgzcqdfrmy_idx_2 *
jgzcqdfrmy_idx_0 + jgywcuuufn [ 0 ] * jgywcuuufn [ 2 ] ; pciztti2mf [ 1 ] =
jgywcuuufn [ 1 ] * jgywcuuufn [ 2 ] * jgzcqdfrmy_idx_0 - jgywcuuufn [ 0 ] *
jgzcqdfrmy_idx_2 ; pciztti2mf [ 0 ] = jgzcqdfrmy_idx_0 * jgzcqdfrmy_idx_1 ;
kld3j4mgfs_idx_1 = ( rtB . mkyju0odm1 [ 1 ] * rtB . mythzqzjez [ 2 ] - rtB .
mythzqzjez [ 1 ] * rtB . mkyju0odm1 [ 2 ] ) + rtB . cig1ezu0up [ 0 ] ;
j2olvplitn_idx_0 = ( rtB . mythzqzjez [ 0 ] * rtB . mkyju0odm1 [ 2 ] - rtB .
mkyju0odm1 [ 0 ] * rtB . mythzqzjez [ 2 ] ) + rtB . cig1ezu0up [ 1 ] ;
kurpvwnuj4_idx_1 = ( rtB . mkyju0odm1 [ 0 ] * rtB . mythzqzjez [ 1 ] - rtB .
mythzqzjez [ 0 ] * rtB . mkyju0odm1 [ 1 ] ) + rtB . cig1ezu0up [ 2 ] ; for (
i_p = 0 ; i_p < 3 ; i_p ++ ) { inoflfxzl4 [ i_p ] = ( pciztti2mf [ 3 * i_p +
1 ] * j2olvplitn_idx_0 + pciztti2mf [ 3 * i_p ] * kld3j4mgfs_idx_1 ) +
pciztti2mf [ 3 * i_p + 2 ] * kurpvwnuj4_idx_1 ; } bcwof20ssn = - inoflfxzl4 [
2 ] ; } else { bcwof20ssn = rtP . Constant_Value_aqtgynqvul ; } rtB .
atski0fwo1 = rtP . Constant1_Value_es2hmwpsih * bcwof20ssn ; rtB . pzrd4nwhsl
= rtB . h1v0fki4wd + rtB . atski0fwo1 ; if ( rtB . pzrd4nwhsl > rtP .
Saturation_UpperSat_fkspttvlxs ) { rtB . hsrt1ciq4i = rtP .
Saturation_UpperSat_fkspttvlxs ; } else if ( rtB . pzrd4nwhsl < rtP .
Saturation_LowerSat_ihlfa0mqdb ) { rtB . hsrt1ciq4i = rtP .
Saturation_LowerSat_ihlfa0mqdb ; } else { rtB . hsrt1ciq4i = rtB . pzrd4nwhsl
; } bcwof20ssn = rtP . FrictionCoefficient_Gain_jiuksux40s *
muDoubleScalarAbs ( rtB . hsrt1ciq4i ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) )
{ rtB . gmov3gnpox = rtP . Gain_Gain_cssolhvy5w * rtB . ekmklzxfox [ 3 ] ; }
if ( rtB . dzk03qgr1o ) { da3saky4rw = rtB . gmov3gnpox ; } else { da3saky4rw
= rtP . Constant1_Value_po2h1uw5ro ; } if ( ! ( da3saky4rw > bcwof20ssn ) ) {
if ( da3saky4rw < - bcwof20ssn ) { bcwof20ssn = - bcwof20ssn ; } else {
bcwof20ssn = da3saky4rw ; } } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { aikhueixpf
[ i_p ] = ( rtB . j1iprpupw2 [ i_p + 3 ] * rtB . mkyju0odm1 [ 1 ] + rtB .
j1iprpupw2 [ i_p ] * rtB . mkyju0odm1 [ 0 ] ) + rtB . j1iprpupw2 [ i_p + 6 ]
* rtB . mkyju0odm1 [ 2 ] ; } p1t5syw2cc [ 0 ] = rtB . mkyju0odm1 [ 1 ] *
aikhueixpf [ 2 ] ; p1t5syw2cc [ 1 ] = aikhueixpf [ 0 ] * rtB . mkyju0odm1 [ 2
] ; p1t5syw2cc [ 2 ] = rtB . mkyju0odm1 [ 0 ] * aikhueixpf [ 1 ] ; jgywcuuufn
[ 0 ] = aikhueixpf [ 1 ] * rtB . mkyju0odm1 [ 2 ] ; jgywcuuufn [ 1 ] = rtB .
mkyju0odm1 [ 0 ] * aikhueixpf [ 2 ] ; jgywcuuufn [ 2 ] = aikhueixpf [ 0 ] *
rtB . mkyju0odm1 [ 1 ] ; cuwl4zp4yw [ 0 ] = ( ( ( ( ( ( rtB . higayyxcv3 -
rtB . e32n1qjlbz [ 2 ] * jbp40v4j45 ) + ( rtB . dkodtfhso0 - rtB . l2pt0kefdc
[ 2 ] * bcwof20ssn ) ) + ( rtB . awnwv0frb5 [ 1 ] * rtB . mfsumfb52o - rtB .
jmxba5skz5 ) ) + ( rtB . cdxkdrlzzm [ 1 ] * rtB . phhcl0h52y - rtB .
pmom2ene5w ) ) + ( rtB . jygnbcsqf1 [ 1 ] * rtB . hsrt1ciq4i - rtB .
grblrau4l1 ) ) + ( as2exlo2n4 [ 0 ] + rtP . Constant_Value_jax04gsciy ) ) +
rtB . d1dja0jwhm [ 0 ] ; cuwl4zp4yw [ 1 ] = ( ( ( ( ( ( rtB . e32n1qjlbz [ 2
] * lsurenbes1 - rtB . djejdif2w5 ) + ( rtB . lw0kvssqse - rtB . nos3a2bbnv )
) + ( rtB . fnmgllmgqx - rtB . awnwv0frb5 [ 0 ] * rtB . mfsumfb52o ) ) + (
rtB . hqi2kczfkw - rtB . cdxkdrlzzm [ 0 ] * rtB . phhcl0h52y ) ) + ( rtB .
ih10mokqjs - rtB . jygnbcsqf1 [ 0 ] * rtB . hsrt1ciq4i ) ) + ( as2exlo2n4 [ 1
] + rtP . Constant_Value_jax04gsciy ) ) + rtB . d1dja0jwhm [ 1 ] ; cuwl4zp4yw
[ 2 ] = ( ( ( ( ( ( rtB . e32n1qjlbz [ 0 ] * jbp40v4j45 - rtB . e32n1qjlbz [
1 ] * lsurenbes1 ) + ( rtB . l2pt0kefdc [ 0 ] * bcwof20ssn - rtB . lhydxe5abe
) ) + ( rtB . lrtymnw4xi - rtB . fqvqdt4rd2 ) ) + ( rtB . ftrxuf0i4a - rtB .
lpx2s5ac0u ) ) + ( rtB . f1a2rfeuz1 - rtB . g344blsojt ) ) + ( as2exlo2n4 [ 2
] + rtP . Constant_Value_jax04gsciy ) ) + rtB . d1dja0jwhm [ 2 ] ; for ( i_p
= 0 ; i_p < 3 ; i_p ++ ) { a5zxkwaluu [ i_p ] = ( cuwl4zp4yw [ i_p ] - ( (
rtB . gyysh5f44j [ i_p + 3 ] * rtB . mkyju0odm1 [ 1 ] + rtB . gyysh5f44j [
i_p ] * rtB . mkyju0odm1 [ 0 ] ) + rtB . gyysh5f44j [ i_p + 6 ] * rtB .
mkyju0odm1 [ 2 ] ) ) - ( p1t5syw2cc [ i_p ] - jgywcuuufn [ i_p ] ) ; }
rt_mrdivide_U1d1x3_U2d3x3_Yd1x3_snf ( a5zxkwaluu , rtB . nseveok2ya ,
jgywcuuufn ) ; rtB . npwmucyqyl [ 0 ] = jgywcuuufn [ 0 ] ; rtB . npwmucyqyl [
1 ] = jgywcuuufn [ 1 ] ; rtB . npwmucyqyl [ 2 ] = jgywcuuufn [ 2 ] ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } for ( i = 0 ; i < 21 ; i ++ ) {
dq25kgk52k [ i ] = rtB . ayq52soaqwz [ i ] ; } for ( i_p = 0 ; i_p < 3 ; i_p
++ ) { cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e < 7 ; i_e ++ ) { cwdb3qacqr
+= dq25kgk52k [ i_e * 3 + i_p ] ; } jgywcuuufn [ i_p ] = cwdb3qacqr ; }
ivnfroue5d [ 0 ] = ( real32_T ) jgywcuuufn [ 0 ] ; ivnfroue5d [ 1 ] = (
real32_T ) jgywcuuufn [ 1 ] ; ivnfroue5d [ 2 ] = ( real32_T ) jgywcuuufn [ 2
] ; for ( i = 0 ; i < 21 ; i ++ ) { dq25kgk52k [ i ] = rtB . ayq52soaqw [ i ]
; } for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { cwdb3qacqr = - 0.0 ; for ( i_e = 0 ;
i_e < 7 ; i_e ++ ) { cwdb3qacqr += dq25kgk52k [ i_e * 3 + i_p ] ; }
jgywcuuufn [ i_p ] = cwdb3qacqr ; } bdvkktmal5_idx_0 = ( real32_T )
jgywcuuufn [ 0 ] ; bdvkktmal5_idx_1 = ( real32_T ) jgywcuuufn [ 1 ] ;
bdvkktmal5_idx_2 = ( real32_T ) jgywcuuufn [ 2 ] ; for ( i = 0 ; i < 48 ; i
++ ) { mfkqvhwnqs [ i ] = rtB . o0icr3ysdn [ i ] ; } for ( i_p = 0 ; i_p < 3
; i_p ++ ) { cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e < 16 ; i_e ++ ) {
cwdb3qacqr += mfkqvhwnqs [ i_e * 3 + i_p ] ; } jgywcuuufn [ i_p ] =
cwdb3qacqr ; } muDoubleScalarSinCos ( ( real32_T ) rtB . cuqqqrtko4 , &
hndnwewn14_idx_0 , & n1fwtevrzf_idx_0 ) ; muDoubleScalarSinCos ( ( real32_T )
rtB . mxf3xuhmmg , & hndnwewn14_idx_1 , & n1fwtevrzf_idx_1 ) ; pciztti2mf [ 0
] = n1fwtevrzf_idx_0 * n1fwtevrzf_idx_1 ; pciztti2mf [ 1 ] = - (
n1fwtevrzf_idx_0 * hndnwewn14_idx_1 ) ; pciztti2mf [ 2 ] = - hndnwewn14_idx_0
; pciztti2mf [ 3 ] = hndnwewn14_idx_1 ; pciztti2mf [ 4 ] = n1fwtevrzf_idx_1 ;
pciztti2mf [ 5 ] = rtP . Constant_Value_ootamvdz1c ; pciztti2mf [ 6 ] =
hndnwewn14_idx_0 * n1fwtevrzf_idx_1 ; pciztti2mf [ 7 ] = - ( hndnwewn14_idx_0
* hndnwewn14_idx_1 ) ; pciztti2mf [ 8 ] = n1fwtevrzf_idx_0 ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { rtB . ehjp343jmw = rtP .
gear_drag_Value_ixedrmhna3 * rtB . f0lcoipiql [ 19 ] + rtP .
extra_drag_Value_jivobjlhfb ; } jtoldnh5tw = - ( real32_T ) ( rtP . S / 2.0 *
( rtB . ehjp343jmw * rtB . lhopa3gq4f ) * ( ( real32_T ) rtB . beu34wglui * (
real32_T ) rtB . beu34wglui ) ) ; di1tsh2hwg [ 0 ] = ( ( ivnfroue5d [ 0 ] +
bdvkktmal5_idx_0 ) + ( real32_T ) jgywcuuufn [ 0 ] ) + g0uuf55mpg [ 0 ] ;
di1tsh2hwg [ 1 ] = ( ( - ivnfroue5d [ 1 ] + bdvkktmal5_idx_1 ) + ( real32_T )
jgywcuuufn [ 1 ] ) + g0uuf55mpg [ 1 ] ; di1tsh2hwg [ 2 ] = ( ( ivnfroue5d [ 2
] + bdvkktmal5_idx_2 ) + ( real32_T ) jgywcuuufn [ 2 ] ) + g0uuf55mpg [ 2 ] ;
for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { rtB . dlawj1hfkq [ i_p ] = ( ( (
real32_T ) pciztti2mf [ 3 * i_p + 1 ] * rtP . Constant1_Value_b4mc4ixfm2 + (
real32_T ) pciztti2mf [ 3 * i_p ] * jtoldnh5tw ) + ( real32_T ) pciztti2mf [
3 * i_p + 2 ] * rtP . Constant1_Value_b4mc4ixfm2 ) + di1tsh2hwg [ i_p ] ;
cwdb3qacqr = - 0.0 ; for ( i_e = 0 ; i_e < 12 ; i_e ++ ) { cwdb3qacqr +=
dsccgxajgj [ i_e * 3 + i_p ] ; } aikhueixpf [ i_p ] = cwdb3qacqr ; }
muDoubleScalarSinCos ( m00opiy3yc_idx_0 , & a5zxkwaluu [ 0 ] , & as2exlo2n4 [
0 ] ) ; muDoubleScalarSinCos ( m00opiy3yc_idx_1 , & a5zxkwaluu [ 1 ] , &
as2exlo2n4 [ 1 ] ) ; muDoubleScalarSinCos ( m00opiy3yc_idx_2 , & a5zxkwaluu [
2 ] , & as2exlo2n4 [ 2 ] ) ; pciztti2mf [ 0 ] = as2exlo2n4 [ 0 ] * as2exlo2n4
[ 1 ] ; pciztti2mf [ 1 ] = a5zxkwaluu [ 1 ] * a5zxkwaluu [ 2 ] * as2exlo2n4 [
0 ] - a5zxkwaluu [ 0 ] * as2exlo2n4 [ 2 ] ; pciztti2mf [ 2 ] = a5zxkwaluu [ 1
] * as2exlo2n4 [ 2 ] * as2exlo2n4 [ 0 ] + a5zxkwaluu [ 0 ] * a5zxkwaluu [ 2 ]
; pciztti2mf [ 3 ] = a5zxkwaluu [ 0 ] * as2exlo2n4 [ 1 ] ; pciztti2mf [ 4 ] =
a5zxkwaluu [ 1 ] * a5zxkwaluu [ 2 ] * a5zxkwaluu [ 0 ] + as2exlo2n4 [ 0 ] *
as2exlo2n4 [ 2 ] ; pciztti2mf [ 5 ] = a5zxkwaluu [ 1 ] * as2exlo2n4 [ 2 ] *
a5zxkwaluu [ 0 ] - as2exlo2n4 [ 0 ] * a5zxkwaluu [ 2 ] ; pciztti2mf [ 6 ] = -
a5zxkwaluu [ 1 ] ; pciztti2mf [ 7 ] = as2exlo2n4 [ 1 ] * a5zxkwaluu [ 2 ] ;
pciztti2mf [ 8 ] = as2exlo2n4 [ 1 ] * as2exlo2n4 [ 2 ] ; rtB . oaagntandl =
rtX . oqemwaxlko [ 0 ] ; jgywcuuufn [ 0 ] = ga0emsz5x4 [ 1 ] * rtB .
mkyju0odm1 [ 2 ] - rtB . mkyju0odm1 [ 1 ] * ga0emsz5x4 [ 2 ] ; jgywcuuufn [ 1
] = rtB . mkyju0odm1 [ 0 ] * ga0emsz5x4 [ 2 ] - ga0emsz5x4 [ 0 ] * rtB .
mkyju0odm1 [ 2 ] ; jgywcuuufn [ 2 ] = ga0emsz5x4 [ 0 ] * rtB . mkyju0odm1 [ 1
] - rtB . mkyju0odm1 [ 0 ] * ga0emsz5x4 [ 1 ] ; p1t5syw2cc [ 0 ] = rtB .
oaagntandl ; p1t5syw2cc [ 1 ] = rtP . Constant_Value_jax04gsciy ; p1t5syw2cc
[ 2 ] = rtP . Constant_Value_jax04gsciy ; a5zxkwaluu [ 0 ] = ( lsurenbes1 +
rtP . Constant3_Value_gdofiqtr3v ) + rtB . on14h4dmvl ; a5zxkwaluu [ 1 ] = (
jbp40v4j45 + bcwof20ssn ) + rtB . on14h4dmvl ; a5zxkwaluu [ 2 ] = ( rtP .
Constant2_Value_p0sma1ifq3 + rtP . Constant3_Value_gdofiqtr3v ) + rtB .
mfsumfb52o ; cuwl4zp4yw [ 0 ] = rtB . ffkpsdx0zr ; cuwl4zp4yw [ 1 ] = rtB .
ffkpsdx0zr ; cuwl4zp4yw [ 2 ] = rtB . phhcl0h52y ; as2exlo2n4 [ 0 ] = rtB .
lwvqxcae23 ; as2exlo2n4 [ 1 ] = rtB . lwvqxcae23 ; as2exlo2n4 [ 2 ] = rtB .
hsrt1ciq4i ; for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { rtB . poxm5ojaul [ i_p ] =
( ( ( ( ( ( pciztti2mf [ i_p + 3 ] * rtP . Constant_Value_jkrncbjqj3 +
pciztti2mf [ i_p ] * rtP . Constant_Value_jkrncbjqj3 ) + pciztti2mf [ i_p + 6
] * rtB . jemxdtgsel ) + aikhueixpf [ i_p ] ) + p1t5syw2cc [ i_p ] ) + ( (
a5zxkwaluu [ i_p ] + cuwl4zp4yw [ i_p ] ) + as2exlo2n4 [ i_p ] ) ) + rtB .
dlawj1hfkq [ i_p ] ) / rtP . m + jgywcuuufn [ i_p ] ; } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { } rtB . bznjqb4cys = rtP . Gain_Gain_ay20xvgxq5 * rtB .
gkiqijsiwi [ 0 ] ; rtB . hilbxeegf0 = rtP . Gain_Gain_iuh3lzw4i0 * rtB .
gkiqijsiwi [ 1 ] ; rtB . p0trwoq5oi = rtP . Gain_Gain_inh0c1mtep * rtB .
gkiqijsiwi [ 2 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . c5avufipwu
= rtP . Gain_Gain_otfwfmpf50 * rtB . cuqqqrtko4 ; rtB . iovd14a0zv = rtP .
Gain_Gain_n2lq1m5z15 * rtB . mxf3xuhmmg ; if ( ssIsSampleHit ( rtS , 1 , 0 )
) { } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { { double locTime = ssGetTaskTime
( rtS , 2 ) ; if ( ssGetLogOutput ( rtS ) ) { { if ( rtwTimeInLoggingInterval
( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . ibef3azav3 .
LoggedData , & locTime , & rtB . ak0q0uaprv [ 0 ] ) ; } } } } { double
locTime = ssGetTaskTime ( rtS , 2 ) ; if ( ssGetLogOutput ( rtS ) ) { { if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . he3hcf0uqs . LoggedData , & locTime , & rtB .
ge01nkozzs [ 0 ] ) ; } } } } { double locTime = ssGetTaskTime ( rtS , 2 ) ;
if ( ssGetLogOutput ( rtS ) ) { { if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . mdcxryc1df .
LoggedData , & locTime , & rtB . ln5blvjdm3 [ 0 ] ) ; } } } } { double
locTime = ssGetTaskTime ( rtS , 2 ) ; if ( ssGetLogOutput ( rtS ) ) { { if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . ikwzxh2byr . LoggedData , & locTime , & rtB .
atgyr3lfo3 [ 0 ] ) ; } } } } { double locTime = ssGetTaskTime ( rtS , 2 ) ;
if ( ssGetLogOutput ( rtS ) ) { { if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . ilwsntin02 .
LoggedData , & locTime , & rtB . cfz24gonbx [ 0 ] ) ; } } } } } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { {
double locTime = ssGetTaskTime ( rtS , 2 ) ; if ( ssGetLogOutput ( rtS ) ) {
{ if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS
) -> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . ko3ssler2n . LoggedData , & locTime , & rtB .
o0icr3ysdn [ 0 ] ) ; } } } } { double locTime = ssGetTaskTime ( rtS , 2 ) ;
if ( ssGetLogOutput ( rtS ) ) { { if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . g1oneuq4p3 .
LoggedData , & locTime , & rtB . ayq52soaqwz [ 0 ] ) ; } } } } { double
locTime = ssGetTaskTime ( rtS , 2 ) ; if ( ssGetLogOutput ( rtS ) ) { { if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . ge550outi3 . LoggedData , & locTime , & rtB .
ayq52soaqw [ 0 ] ) ; } } } } { double locTime = ssGetTaskTime ( rtS , 2 ) ;
if ( ssGetLogOutput ( rtS ) ) { { if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . c0bpnojsnz .
LoggedData , & locTime , & rtB . cuqqqrtko4 ) ; } } } } rtB . c5mbuzo2v3 [ 0
] = rtB . evtlmv3rtj [ 0 ] ; rtB . c5mbuzo2v3 [ 3 ] = rtB . gkiqijsiwi [ 0 ]
; rtB . c5mbuzo2v3 [ 1 ] = rtB . evtlmv3rtj [ 1 ] ; rtB . c5mbuzo2v3 [ 4 ] =
rtB . gkiqijsiwi [ 1 ] ; rtB . c5mbuzo2v3 [ 2 ] = rtB . evtlmv3rtj [ 2 ] ;
rtB . c5mbuzo2v3 [ 5 ] = rtB . gkiqijsiwi [ 2 ] ; { double locTime =
ssGetTaskTime ( rtS , 2 ) ; if ( ssGetLogOutput ( rtS ) ) { { if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . fmk0yrcja4 . LoggedData , & locTime , & rtB .
c5mbuzo2v3 [ 0 ] ) ; } } } } rtB . oj0vjwuc4k [ 0 ] = rtB . cig1ezu0up [ 0 ]
; rtB . oj0vjwuc4k [ 3 ] = rtB . mkyju0odm1 [ 0 ] ; rtB . oj0vjwuc4k [ 1 ] =
rtB . cig1ezu0up [ 1 ] ; rtB . oj0vjwuc4k [ 4 ] = rtB . mkyju0odm1 [ 1 ] ;
rtB . oj0vjwuc4k [ 2 ] = rtB . cig1ezu0up [ 2 ] ; rtB . oj0vjwuc4k [ 5 ] =
rtB . mkyju0odm1 [ 2 ] ; { double locTime = ssGetTaskTime ( rtS , 2 ) ; if (
ssGetLogOutput ( rtS ) ) { { if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . ecypzsdvgt .
LoggedData , & locTime , & rtB . oj0vjwuc4k [ 0 ] ) ; } } } } rtB .
i45ioikb4r [ 0 ] = rtB . poxm5ojaul [ 0 ] ; rtB . i45ioikb4r [ 3 ] = rtB .
npwmucyqyl [ 0 ] ; rtB . i45ioikb4r [ 1 ] = rtB . poxm5ojaul [ 1 ] ; rtB .
i45ioikb4r [ 4 ] = rtB . npwmucyqyl [ 1 ] ; rtB . i45ioikb4r [ 2 ] = rtB .
poxm5ojaul [ 2 ] ; rtB . i45ioikb4r [ 5 ] = rtB . npwmucyqyl [ 2 ] ; { double
locTime = ssGetTaskTime ( rtS , 2 ) ; if ( ssGetLogOutput ( rtS ) ) { { if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . o5jdfgib3n . LoggedData , & locTime , & rtB .
i45ioikb4r [ 0 ] ) ; } } } } { double locTime = ssGetTaskTime ( rtS , 2 ) ;
if ( ssGetLogOutput ( rtS ) ) { { if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . dj4xuczyvy .
LoggedData , & locTime , & rtB . mxf3xuhmmg ) ; } } } } { double locTime =
ssGetTaskTime ( rtS , 2 ) ; if ( ssGetLogOutput ( rtS ) ) { { if (
rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS ( rtS ) ->
mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . jtsuzzwuf3 . LoggedData , & locTime , & rtB .
beu34wglui ) ; } } } } } muDoubleScalarSinCos ( rtB . gkiqijsiwi [ 0 ] , &
jgywcuuufn [ 0 ] , & aikhueixpf [ 0 ] ) ; muDoubleScalarSinCos ( rtB .
gkiqijsiwi [ 1 ] , & jgywcuuufn [ 1 ] , & aikhueixpf [ 1 ] ) ;
muDoubleScalarSinCos ( rtB . gkiqijsiwi [ 2 ] , & jgywcuuufn [ 2 ] , &
aikhueixpf [ 2 ] ) ; rtB . obpec22lib [ 0 ] = ( jgywcuuufn [ 0 ] * rtB .
mkyju0odm1 [ 1 ] + aikhueixpf [ 0 ] * rtB . mkyju0odm1 [ 2 ] ) * ( jgywcuuufn
[ 1 ] / aikhueixpf [ 1 ] ) + rtB . mkyju0odm1 [ 0 ] ; rtB . obpec22lib [ 1 ]
= aikhueixpf [ 0 ] * rtB . mkyju0odm1 [ 1 ] - jgywcuuufn [ 0 ] * rtB .
mkyju0odm1 [ 2 ] ; rtB . obpec22lib [ 2 ] = ( jgywcuuufn [ 0 ] * rtB .
mkyju0odm1 [ 1 ] + aikhueixpf [ 0 ] * rtB . mkyju0odm1 [ 2 ] ) / aikhueixpf [
1 ] ; for ( i_p = 0 ; i_p < 3 ; i_p ++ ) { rtB . bffbbnoz3r [ i_p ] = 0.0 ;
rtB . bffbbnoz3r [ i_p ] += pciztti2mf [ 3 * i_p ] * ga0emsz5x4 [ 0 ] ; rtB .
bffbbnoz3r [ i_p ] += pciztti2mf [ 3 * i_p + 1 ] * ga0emsz5x4 [ 1 ] ; rtB .
bffbbnoz3r [ i_p ] += pciztti2mf [ 3 * i_p + 2 ] * ga0emsz5x4 [ 2 ] ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . ccj2vt5i3b = muDoubleScalarSqrt ( (
rtB . cig1ezu0up [ 0 ] * rtB . cig1ezu0up [ 0 ] + rtB . cig1ezu0up [ 1 ] *
rtB . cig1ezu0up [ 1 ] ) + rtB . cig1ezu0up [ 2 ] * rtB . cig1ezu0up [ 2 ] )
; m00opiy3yc_idx_0 = - 0.0 ; for ( i_p = 0 ; i_p < 12 ; i_p ++ ) {
m00opiy3yc_idx_0 += gmj3cy4km1 [ i_p ] ; } m00opiy3yc_idx_1 = look2_plinlxpw
( rtB . m1kth42sm5 , rtB . oaagntandl , rtP . dp_HTU . V_vec , rtP . dp_HTU .
T_vec , rtP . dp_HTU . P_grid , rtDW . nq0rryljq1 , rtP . Plookup_maxIndex ,
13U ) ; rtB . hfraqjvvj1 = rtP . Gain1_Gain_h4hra1gikq * m00opiy3yc_idx_0 *
rtP . Gain2_Gain_ic5npr3xa1 + rtP . Gain_Gain_g41sdlhqvv * m00opiy3yc_idx_1 ;
if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } if ( ssIsSampleHit ( rtS , 2 , 0 ) )
{ { double locTime = ssGetTaskTime ( rtS , 2 ) ; if ( ssGetLogOutput ( rtS )
) { { if ( rtwTimeInLoggingInterval ( rtliGetLoggingInterval ( ssGetRootSS (
rtS ) -> mdlInfo -> rtwLogInfo ) , locTime ) ) { rt_UpdateStructLogVar ( (
StructLogVar * ) rtDW . bzybebrenk . LoggedData , & locTime , & rtB .
nhnvabjkuz [ 0 ] ) ; } } } } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { { double locTime = ssGetTaskTime ( rtS , 2
) ; if ( ssGetLogOutput ( rtS ) ) { { if ( rtwTimeInLoggingInterval (
rtliGetLoggingInterval ( ssGetRootSS ( rtS ) -> mdlInfo -> rtwLogInfo ) ,
locTime ) ) { rt_UpdateStructLogVar ( ( StructLogVar * ) rtDW . kp42abeqk1 .
LoggedData , & locTime , & rtB . oaagntandl ) ; } } } } rtB . n00gsxq4p1 =
look1_plinlcpw ( rtB . f0lcoipiql [ 18 ] , rtP .
uDLookupTable1_bp01Data_egyg5occmb , rtP .
uDLookupTable1_tableData_fs5mb0krrj , & rtDW . ddr4l0n5i3 , 1U ) ; }
m00opiy3yc_idx_0 = look1_plinlxpw ( rtB . m1kth42sm5 , rtP . dp_HTU . limits
. V_up_lim , rtP . dp_HTU . limits . T_up_lim , & rtDW . by2jasgm4o , 4U ) ;
if ( ! ( rtB . n00gsxq4p1 > m00opiy3yc_idx_0 ) ) { m00opiy3yc_idx_0 =
look1_plinlxpw ( rtB . m1kth42sm5 , rtP . dp_HTU . limits . V_low_lim , rtP .
dp_HTU . limits . T_low_lim , & rtDW . daljbq5gtz , 5U ) ; if ( ! ( rtB .
n00gsxq4p1 < m00opiy3yc_idx_0 ) ) { m00opiy3yc_idx_0 = rtB . n00gsxq4p1 ; } }
rtB . ixwwzqb4p2 = rtP . LinearSecondOrderActuator_wn_fin * rtP .
LinearSecondOrderActuator_wn_fin * ( m00opiy3yc_idx_0 - rtB . oaagntandl ) -
2.0 * rtP . LinearSecondOrderActuator_z_fin * rtP .
LinearSecondOrderActuator_wn_fin * rtX . oqemwaxlko [ 1 ] ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) {
for ( i = 0 ; i <= 4 ; i += 2 ) { tmp_c = _mm_loadu_pd ( & rtB . f0lcoipiql [
i ] ) ; _mm_storeu_pd ( & rtB . dienpmt5lk [ i ] , _mm_mul_pd ( _mm_set1_pd (
rtP . Gain_Gain_b0rnnooty0 ) , tmp_c ) ) ; tmp_c = _mm_loadu_pd ( & rtB .
f0lcoipiql [ i ] ) ; _mm_storeu_pd ( & rtB . lyw5uzhlvp [ i ] , _mm_mul_pd (
_mm_set1_pd ( rtP . Gain_Gain_lercwvznpd ) , tmp_c ) ) ; } } { SimStruct *
rts = ssGetSFunction ( rtS , 2 ) ; { static const char *
blockSIDForSFcnLoader = "UNIFIER:8429" ; sfcnLoader_setCurrentSFcnBlockSID (
blockSIDForSFcnLoader ) ; void ( * sfcnMethodPtr ) ( SimStruct * , int ) =
rts -> modelMethods . sFcn . mdlOutputs . level2 ;
sfcnLoader_separateComplexHandler_withTID ( rts , sfcnMethodPtr , ( 0 <= 1 )
&& gbl_raccel_tid01eq ? 0 : 0 ) ; } } rtB . ku55m1jm2d = ssGetT ( rtS ) ; if
( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtB . af22xidizc = rtDW . nwwie5t5of ; }
if ( ( rtB . ku55m1jm2d == rtP . Constant_Value_covdqsa2k4 ) == rtP .
const_Value ) { rtB . bifocupq14 = rtB . jopjoprq0c ; } else { rtB .
bifocupq14 = rtB . af22xidizc ; } rtB . bxtdurt4xq = rtB . jopjoprq0c - rtB .
bifocupq14 ; rtB . bdfwgn2f4t = ssGetT ( rtS ) - rtB . bxtdurt4xq ; rtB .
izwq3m54sy = muDoubleScalarMax ( rtB . bdfwgn2f4t , rtP .
Constant_Value_b3waei3ut2 ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( rtP
. ManualSwitch1_CurrentSetting_cwepdspi5f == 1 ) { rtB . mhiuaswy01 = rtP .
Constant2_Value_ovsjzrpt3j ; } else { rtB . mhiuaswy01 = rtP .
Constant1_Value_ksii3tuk3x ; } if ( ssIsMajorTimeStep ( rtS ) ) { if ( rtB .
mhiuaswy01 > 0.0 ) { if ( ! rtDW . bwa1fip2ky ) { if ( ssGetTaskTime ( rtS ,
1 ) != ssGetTStart ( rtS ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } rtDW . bwa1fip2ky = true ; } } else if ( rtDW . bwa1fip2ky ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; rtDW . bwa1fip2ky =
false ; } } } if ( rtDW . bwa1fip2ky ) { rtB . btiigxjvj2 [ 0 ] = ssGetT (
rtS ) ; rtB . btiigxjvj2 [ 1 ] = rtB . bxtdurt4xq ; rtB . btiigxjvj2 [ 2 ] =
rtB . izwq3m54sy ; { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; { static
const char * blockSIDForSFcnLoader = "UNIFIER:8414" ;
sfcnLoader_setCurrentSFcnBlockSID ( blockSIDForSFcnLoader ) ; void ( *
sfcnMethodPtr ) ( SimStruct * , int ) = rts -> modelMethods . sFcn .
mdlOutputs . level2 ; sfcnLoader_separateComplexHandler_withTID ( rts ,
sfcnMethodPtr , ( 0 <= 1 ) && gbl_raccel_tid01eq ? 0 : 0 ) ; } } if (
ssIsMajorTimeStep ( rtS ) ) { srUpdateBC ( rtDW . iw455stvt1 ) ; } } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { } rtB . hwhq5yb2fg = rtP . sms_Gain * rtB .
izwq3m54sy ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { { SimStruct * rts =
ssGetSFunction ( rtS , 3 ) ; { static const char * blockSIDForSFcnLoader =
"UNIFIER:8424" ; sfcnLoader_setCurrentSFcnBlockSID ( blockSIDForSFcnLoader )
; void ( * sfcnMethodPtr ) ( SimStruct * , int ) = rts -> modelMethods . sFcn
. mdlOutputs . level2 ; sfcnLoader_separateComplexHandler_withTID ( rts ,
sfcnMethodPtr , ( 0 <= 1 ) && gbl_raccel_tid01eq ? 0 : 0 ) ; } } }
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID3 ( int_T tid ) { int32_T
aldazsptev ; real_T jnu4wdyai5 [ 18 ] ; real_T akixfm5ltq [ 9 ] ; real_T
b030ufckb2_idx_0 ; real_T chvpb4ztbe ; real_T cnx245efe2 ; real_T f3k5g2dr2y
; real_T h34dwrxh1c_idx_0 ; real_T jnnfqkezxe ; int32_T i ; if (
muDoubleScalarAbs ( rtP . latlong0 [ 0 ] ) > rtP .
CompareToConstant_const_b5kwy5yvv2 ) { jnnfqkezxe = muDoubleScalarMod ( rtP .
latlong0 [ 0 ] + rtP . Bias_Bias_ftrguhqylg , rtP .
Constant2_Value_mxdetvroc4 ) + rtP . Bias1_Bias_kwaqdylxmf ; } else {
jnnfqkezxe = rtP . latlong0 [ 0 ] ; } cnx245efe2 = muDoubleScalarAbs (
jnnfqkezxe ) ; if ( cnx245efe2 > rtP . CompareToConstant_const_j3nekrd5nd ) {
rtB . l1dfj2jhio = ( ( cnx245efe2 + rtP . Bias_Bias_konxswsfpe ) * rtP .
Gain_Gain_jwbuilkyxy + rtP . Bias1_Bias_gdznygtef3 ) * muDoubleScalarSign (
jnnfqkezxe ) ; jnnfqkezxe = rtP . Constant_Value_o5fhcpqqyu ; } else { rtB .
l1dfj2jhio = jnnfqkezxe ; jnnfqkezxe = rtP . Constant1_Value_a0rz4phgln ; }
jnnfqkezxe += rtP . latlong0 [ 1 ] ; if ( muDoubleScalarAbs ( jnnfqkezxe ) >
rtP . CompareToConstant_const_gvfea0moje ) { rtB . l0khcdm5vj =
muDoubleScalarMod ( jnnfqkezxe + rtP . Bias_Bias_kd45ia31j2 , rtP .
Constant2_Value_d2ebp0gj1g ) + rtP . Bias1_Bias_pcofu2atfo ; } else { rtB .
l0khcdm5vj = jnnfqkezxe ; } jnnfqkezxe = 0.017453292519943295 * rtB .
l1dfj2jhio ; cnx245efe2 = rtP . f_Value - rtP . Constant_Value_nam4eq1guw ;
cnx245efe2 = muDoubleScalarSqrt ( rtP . Constant_Value_joj4ebuyjq -
cnx245efe2 * cnx245efe2 ) ; f3k5g2dr2y = muDoubleScalarSin ( jnnfqkezxe ) ;
f3k5g2dr2y = rtP . Constant_Value_bwixaan2i5 - cnx245efe2 * cnx245efe2 *
f3k5g2dr2y * f3k5g2dr2y ; chvpb4ztbe = rtP . Constant1_Value_auykfi4siv /
muDoubleScalarSqrt ( f3k5g2dr2y ) ; rtB . hc3pucpzoc = muDoubleScalarAtan2 (
rtP . Constant2_Value_dc1ztqo1sh , ( rtP . Constant_Value_cds1oetfvb -
cnx245efe2 * cnx245efe2 ) * chvpb4ztbe / f3k5g2dr2y ) ; rtB . h1pryicb3f =
muDoubleScalarAtan2 ( rtP . Constant3_Value_p4zi4m0xle , chvpb4ztbe *
muDoubleScalarCos ( jnnfqkezxe ) ) ; muDoubleScalarSinCos (
0.017453292519943295 * rtP . FlatEarthtoLLA_psi , & rtB . djshdafk4a , & rtB
. jurla4fp4a ) ; rtB . ckez2fhnc0 = ( real32_T ) rtP .
Constant_Value_p2sv0iawa4 ; rtB . ar3fw3fuom = ( real32_T ) rtP .
Constant_Value_ddzso0nzyx ; parallel_for ( 16 , ggl0rm1hauTID3 , 1 ,
"ggl0rm1hauTID3" ) ; parallel_for ( 14 , ppqwruko3jTID3 , 1 ,
"ppqwruko3jTID3" ) ; rtB . krmhpaiwtk [ 0 ] = ( real32_T ) rtP . dp_FUSE_FIN
. ref_CG [ 0 ] - ( real32_T ) rtP . xyz_cg [ 0 ] ; rtB . krmhpaiwtk [ 1 ] = (
real32_T ) rtP . dp_FUSE_FIN . ref_CG [ 1 ] - ( real32_T ) rtP . xyz_cg [ 1 ]
; rtB . krmhpaiwtk [ 2 ] = ( real32_T ) rtP . dp_FUSE_FIN . ref_CG [ 2 ] - (
real32_T ) rtP . xyz_cg [ 2 ] ; rtB . phywd5jekf = - rtP .
Constant_Value_guxqtm0enf ; parallel_for ( 16 , femu5gktcpTID3 , 1 ,
"femu5gktcpTID3" ) ; parallel_for ( 7 , ozenep403fTID3 , 1 , "ozenep403fTID3"
) ; parallel_for ( 7 , nonjggp2zgTID3 , 1 , "nonjggp2zgTID3" ) ; parallel_for
( 7 , jiwpvcutffTID3 , 1 , "jiwpvcutffTID3" ) ; parallel_for ( 7 ,
jpp5owoa3nTID3 , 1 , "jpp5owoa3nTID3" ) ; for ( i = 0 ; i < 3 ; i ++ ) {
jnu4wdyai5 [ 6 * i ] = rtP . I [ 3 * i ] ; jnu4wdyai5 [ 6 * i + 3 ] = rtP .
Constant2_Value_or31ropqwu [ 3 * i ] ; rtB . j1iprpupw2 [ 3 * i ] =
jnu4wdyai5 [ 6 * i ] ; rtB . gyysh5f44j [ 3 * i ] = jnu4wdyai5 [ 6 * i + 3 ]
; rtB . nseveok2ya [ 3 * i ] = jnu4wdyai5 [ 6 * i ] ; jnu4wdyai5 [ 6 * i + 1
] = rtP . I [ 3 * i + 1 ] ; jnu4wdyai5 [ 6 * i + 4 ] = rtP .
Constant2_Value_or31ropqwu [ 3 * i + 1 ] ; rtB . j1iprpupw2 [ 3 * i + 1 ] =
jnu4wdyai5 [ 6 * i + 1 ] ; rtB . gyysh5f44j [ 3 * i + 1 ] = jnu4wdyai5 [ 6 *
i + 4 ] ; rtB . nseveok2ya [ 3 * i + 1 ] = jnu4wdyai5 [ 6 * i + 1 ] ;
jnu4wdyai5 [ 6 * i + 2 ] = rtP . I [ 3 * i + 2 ] ; jnu4wdyai5 [ 6 * i + 5 ] =
rtP . Constant2_Value_or31ropqwu [ 3 * i + 2 ] ; rtB . j1iprpupw2 [ 3 * i + 2
] = jnu4wdyai5 [ 6 * i + 2 ] ; rtB . gyysh5f44j [ 3 * i + 2 ] = jnu4wdyai5 [
6 * i + 5 ] ; rtB . nseveok2ya [ 3 * i + 2 ] = jnu4wdyai5 [ 6 * i + 2 ] ; }
h34dwrxh1c_idx_0 = rtP . xyz_cg [ 1 ] ; for ( i = 0 ; i < 12 ; i ++ ) { rtB .
dcirnuyxde [ i ] = rtP . Gain_Gain_hvvnixqugo [ i ] * h34dwrxh1c_idx_0 - rtP
. xyz_DEP [ 3 * i + 1 ] ; } rtB . jferaaeyyn = muDoubleScalarCos ( rtP .
Inclination_Value_gjkhurhwl1 ) ; for ( aldazsptev = 0 ; aldazsptev < 12 ;
aldazsptev ++ ) { rtB . adqmzv0sx0 [ aldazsptev ] . aox0khugvh [ 0 ] = (
real32_T ) rtP . xyz_cg [ 0 ] ; rtB . adqmzv0sx0 [ aldazsptev ] . aox0khugvh
[ 1 ] = ( real32_T ) rtP . xyz_cg [ 1 ] ; rtB . adqmzv0sx0 [ aldazsptev ] .
aox0khugvh [ 2 ] = ( real32_T ) rtP . xyz_cg [ 2 ] ; muDoubleScalarSinCos (
rtP . adqmzv0sx0 . Constant1_Value_jux1hhk5qx , & h34dwrxh1c_idx_0 , &
b030ufckb2_idx_0 ) ; muDoubleScalarSinCos ( rtP . adqmzv0sx0 .
DEP_incidence_Value , & jnnfqkezxe , & cnx245efe2 ) ; muDoubleScalarSinCos (
rtP . adqmzv0sx0 . Constant1_Value_jux1hhk5qx , & f3k5g2dr2y , & chvpb4ztbe )
; akixfm5ltq [ 0 ] = b030ufckb2_idx_0 * cnx245efe2 ; akixfm5ltq [ 1 ] =
jnnfqkezxe * f3k5g2dr2y * b030ufckb2_idx_0 - h34dwrxh1c_idx_0 * chvpb4ztbe ;
akixfm5ltq [ 2 ] = jnnfqkezxe * chvpb4ztbe * b030ufckb2_idx_0 +
h34dwrxh1c_idx_0 * f3k5g2dr2y ; akixfm5ltq [ 3 ] = h34dwrxh1c_idx_0 *
cnx245efe2 ; akixfm5ltq [ 4 ] = jnnfqkezxe * f3k5g2dr2y * h34dwrxh1c_idx_0 +
b030ufckb2_idx_0 * chvpb4ztbe ; akixfm5ltq [ 5 ] = jnnfqkezxe * chvpb4ztbe *
h34dwrxh1c_idx_0 - b030ufckb2_idx_0 * f3k5g2dr2y ; akixfm5ltq [ 6 ] = -
jnnfqkezxe ; akixfm5ltq [ 7 ] = cnx245efe2 * f3k5g2dr2y ; akixfm5ltq [ 8 ] =
cnx245efe2 * chvpb4ztbe ; for ( i = 0 ; i < 3 ; i ++ ) { rtB . adqmzv0sx0 [
aldazsptev ] . dbnx540oz1 [ 3 * i ] = akixfm5ltq [ i ] ; rtB . adqmzv0sx0 [
aldazsptev ] . dbnx540oz1 [ 3 * i + 1 ] = akixfm5ltq [ i + 3 ] ; rtB .
adqmzv0sx0 [ aldazsptev ] . dbnx540oz1 [ 3 * i + 2 ] = akixfm5ltq [ i + 6 ] ;
} } rtB . jemxdtgsel = rtP . Multiply_Gain_nl3rfgxwjm * rtP . m ; rtB .
on14h4dmvl = rtP . Constant_Value_czh5rbe04d ; rtB . lwvqxcae23 = rtP .
Constant_Value_dkfqzg3jt5 ; rtB . ffkpsdx0zr = rtP .
Constant_Value_dosqprdn32 ; rtB . awnwv0frb5 [ 0 ] = rtP .
Constant_Value_ofr0qgx5yn [ 0 ] - rtP . xyz_cg [ 0 ] ; rtB . pr1vt54ko4 [ 0 ]
= rtP . Constant_Value_ofr0qgx5yn [ 0 ] - rtP . xyz_cg [ 0 ] ; rtB .
jygnbcsqf1 [ 0 ] = rtP . Constant2_Value_dksr45kxji [ 0 ] - rtP . xyz_cg [ 0
] ; rtB . mythzqzjez [ 0 ] = rtP . Constant2_Value_dksr45kxji [ 0 ] - rtP .
xyz_cg [ 0 ] ; rtB . cdxkdrlzzm [ 0 ] = rtP . Constant1_Value_i0jzjc51w0 [ 0
] - rtP . xyz_cg [ 0 ] ; rtB . njlxqs1uc4 [ 0 ] = rtP .
Constant1_Value_i0jzjc51w0 [ 0 ] - rtP . xyz_cg [ 0 ] ; rtB . e32n1qjlbz [ 0
] = rtP . Constant1_Value_grmbs0ngpp [ 0 ] - rtP . xyz_cg [ 0 ] ; rtB .
l2pt0kefdc [ 0 ] = rtP . Constant2_Value_eyfztz0fxi [ 0 ] - rtP . xyz_cg [ 0
] ; rtB . awnwv0frb5 [ 1 ] = rtP . Constant_Value_ofr0qgx5yn [ 1 ] - rtP .
xyz_cg [ 1 ] ; rtB . pr1vt54ko4 [ 1 ] = rtP . Constant_Value_ofr0qgx5yn [ 1 ]
- rtP . xyz_cg [ 1 ] ; rtB . jygnbcsqf1 [ 1 ] = rtP .
Constant2_Value_dksr45kxji [ 1 ] - rtP . xyz_cg [ 1 ] ; rtB . mythzqzjez [ 1
] = rtP . Constant2_Value_dksr45kxji [ 1 ] - rtP . xyz_cg [ 1 ] ; rtB .
cdxkdrlzzm [ 1 ] = rtP . Constant1_Value_i0jzjc51w0 [ 1 ] - rtP . xyz_cg [ 1
] ; rtB . njlxqs1uc4 [ 1 ] = rtP . Constant1_Value_i0jzjc51w0 [ 1 ] - rtP .
xyz_cg [ 1 ] ; rtB . e32n1qjlbz [ 1 ] = rtP . Constant1_Value_grmbs0ngpp [ 1
] - rtP . xyz_cg [ 1 ] ; rtB . l2pt0kefdc [ 1 ] = rtP .
Constant2_Value_eyfztz0fxi [ 1 ] - rtP . xyz_cg [ 1 ] ; rtB . awnwv0frb5 [ 2
] = rtP . Constant_Value_ofr0qgx5yn [ 2 ] - rtP . xyz_cg [ 2 ] ; rtB .
pr1vt54ko4 [ 2 ] = rtP . Constant_Value_ofr0qgx5yn [ 2 ] - rtP . xyz_cg [ 2 ]
; rtB . jygnbcsqf1 [ 2 ] = rtP . Constant2_Value_dksr45kxji [ 2 ] - rtP .
xyz_cg [ 2 ] ; rtB . mythzqzjez [ 2 ] = rtP . Constant2_Value_dksr45kxji [ 2
] - rtP . xyz_cg [ 2 ] ; rtB . cdxkdrlzzm [ 2 ] = rtP .
Constant1_Value_i0jzjc51w0 [ 2 ] - rtP . xyz_cg [ 2 ] ; rtB . njlxqs1uc4 [ 2
] = rtP . Constant1_Value_i0jzjc51w0 [ 2 ] - rtP . xyz_cg [ 2 ] ; rtB .
e32n1qjlbz [ 2 ] = rtP . Constant1_Value_grmbs0ngpp [ 2 ] - rtP . xyz_cg [ 2
] ; rtB . l2pt0kefdc [ 2 ] = rtP . Constant2_Value_eyfztz0fxi [ 2 ] - rtP .
xyz_cg [ 2 ] ; rtB . lrtymnw4xi = rtB . awnwv0frb5 [ 0 ] * rtB . on14h4dmvl ;
rtB . fnmgllmgqx = rtB . awnwv0frb5 [ 2 ] * rtB . on14h4dmvl ; rtB .
fqvqdt4rd2 = rtB . awnwv0frb5 [ 1 ] * rtB . on14h4dmvl ; rtB . jmxba5skz5 =
rtB . awnwv0frb5 [ 2 ] * rtB . on14h4dmvl ; rtB . f1a2rfeuz1 = rtB .
jygnbcsqf1 [ 0 ] * rtB . lwvqxcae23 ; rtB . ih10mokqjs = rtB . jygnbcsqf1 [ 2
] * rtB . lwvqxcae23 ; rtB . g344blsojt = rtB . jygnbcsqf1 [ 1 ] * rtB .
lwvqxcae23 ; rtB . grblrau4l1 = rtB . jygnbcsqf1 [ 2 ] * rtB . lwvqxcae23 ;
rtB . ftrxuf0i4a = rtB . cdxkdrlzzm [ 0 ] * rtB . ffkpsdx0zr ; rtB .
hqi2kczfkw = rtB . cdxkdrlzzm [ 2 ] * rtB . ffkpsdx0zr ; rtB . lpx2s5ac0u =
rtB . cdxkdrlzzm [ 1 ] * rtB . ffkpsdx0zr ; rtB . pmom2ene5w = rtB .
cdxkdrlzzm [ 2 ] * rtB . ffkpsdx0zr ; rtB . higayyxcv3 = rtB . e32n1qjlbz [ 1
] * rtP . Constant2_Value_p0sma1ifq3 ; rtB . djejdif2w5 = rtB . e32n1qjlbz [
0 ] * rtP . Constant2_Value_p0sma1ifq3 ; rtB . dkodtfhso0 = rtB . l2pt0kefdc
[ 1 ] * rtP . Constant3_Value_gdofiqtr3v ; rtB . lw0kvssqse = rtB .
l2pt0kefdc [ 2 ] * rtP . Constant3_Value_gdofiqtr3v ; rtB . nos3a2bbnv = rtB
. l2pt0kefdc [ 0 ] * rtP . Constant3_Value_gdofiqtr3v ; rtB . lhydxe5abe =
rtB . l2pt0kefdc [ 1 ] * rtP . Constant3_Value_gdofiqtr3v ; rtB . drxfnrnb3t
= rtP . fcc . att_kf * 0.0 ; parallel_for ( 16 , pi0mmsuhtlTID3 , 1 ,
"pi0mmsuhtlTID3" ) ; parallel_for ( 14 , i0h2b0hhepTID3 , 1 ,
"i0h2b0hhepTID3" ) ; rtB . iylp3ntlzw [ 0 ] = ( real32_T ) rtP . dp_FUSE_FIN
. ref_CG [ 0 ] - ( real32_T ) rtP . xyz_cg [ 0 ] ; rtB . iylp3ntlzw [ 1 ] = (
real32_T ) rtP . dp_FUSE_FIN . ref_CG [ 1 ] - ( real32_T ) rtP . xyz_cg [ 1 ]
; rtB . iylp3ntlzw [ 2 ] = ( real32_T ) rtP . dp_FUSE_FIN . ref_CG [ 2 ] - (
real32_T ) rtP . xyz_cg [ 2 ] ; parallel_for ( 16 , pd4mrqlmyfTID3 , 1 ,
"pd4mrqlmyfTID3" ) ; parallel_for ( 7 , dufjikm3ahTID3 , 1 , "dufjikm3ahTID3"
) ; parallel_for ( 7 , j53etjiqleTID3 , 1 , "j53etjiqleTID3" ) ; parallel_for
( 7 , hxpjklhlk1TID3 , 1 , "hxpjklhlk1TID3" ) ; parallel_for ( 7 ,
l13lfpb0ofTID3 , 1 , "l13lfpb0ofTID3" ) ; h34dwrxh1c_idx_0 = rtP . xyz_cg [ 1
] ; for ( i = 0 ; i < 12 ; i ++ ) { rtB . puaaevgvgw [ i ] = rtP .
Gain_Gain_bp5scabhwt [ i ] * h34dwrxh1c_idx_0 - rtP . xyz_DEP [ 3 * i + 1 ] ;
} rtB . hfnrcon5sq = muDoubleScalarCos ( rtP . Inclination_Value ) ;
parallel_for ( 12 , o2j1dr3sk2TID3 , 1 , "o2j1dr3sk2TID3" ) ; rtB .
dtrv4jpa1s = rtP . Multiply_Gain * rtP . m ; parallel_for ( 16 ,
mtrxzbtg4oTID3 , 1 , "mtrxzbtg4oTID3" ) ; parallel_for ( 14 , e3uu0qv2ytTID3
, 1 , "e3uu0qv2ytTID3" ) ; rtB . j0nikyscbg [ 0 ] = ( real32_T ) rtP .
dp_FUSE_FIN . ref_CG [ 0 ] - ( real32_T ) rtP . xyz_cg [ 0 ] ; rtB .
j0nikyscbg [ 1 ] = ( real32_T ) rtP . dp_FUSE_FIN . ref_CG [ 1 ] - ( real32_T
) rtP . xyz_cg [ 1 ] ; rtB . j0nikyscbg [ 2 ] = ( real32_T ) rtP .
dp_FUSE_FIN . ref_CG [ 2 ] - ( real32_T ) rtP . xyz_cg [ 2 ] ; parallel_for (
16 , hircojder3TID3 , 1 , "hircojder3TID3" ) ; parallel_for ( 7 ,
fxo32xx45wTID3 , 1 , "fxo32xx45wTID3" ) ; parallel_for ( 7 , lkoepecx5gTID3 ,
1 , "lkoepecx5gTID3" ) ; parallel_for ( 7 , fpg3s0wb2oTID3 , 1 ,
"fpg3s0wb2oTID3" ) ; parallel_for ( 7 , gur2dlo22cTID3 , 1 , "gur2dlo22cTID3"
) ; h34dwrxh1c_idx_0 = rtP . xyz_cg [ 1 ] ; for ( i = 0 ; i < 12 ; i ++ ) {
rtB . dy2k1mnk5k [ i ] = rtP . Gain_Gain_fy5yuofaev [ i ] * h34dwrxh1c_idx_0
- rtP . xyz_DEP [ 3 * i + 1 ] ; } rtB . c3gvsthqob = muDoubleScalarCos ( rtP
. Inclination_Value_amajnhnhqm ) ; parallel_for ( 12 , otzd1cms4cTID3 , 1 ,
"otzd1cms4cTID3" ) ; rtB . g2bqzjbrkl = rtP . Multiply_Gain_nsjxbpyri0 * rtP
. m ; for ( i = 0 ; i < 5 ; i ++ ) { rtB . avjdxfoo5a [ i ] = rtP . fcc . dt
* rtP . fcc . path_u_dot_llim [ i ] ; rtB . bmeh4vds3c [ i ] = rtP . fcc . dt
* rtP . fcc . path_u_dot_ulim [ i ] ; } rtB . blaocua1dm = rtP .
Constant2_Value_cpaugkrews ; rtB . ijed1dxirj = rtP . fcc . rate_kf * 0.0 ;
rtB . pdz4grm5e4 [ 0 ] = rtP . fcc . dt * rtP . fcc . rate_u_dot_llim [ 0 ] ;
rtB . i0glmo1df0 [ 0 ] = rtP . fcc . dt * rtP . fcc . rate_u_dot_ulim [ 0 ] ;
rtB . pdz4grm5e4 [ 1 ] = rtP . fcc . dt * rtP . fcc . rate_u_dot_llim [ 1 ] ;
rtB . i0glmo1df0 [ 1 ] = rtP . fcc . dt * rtP . fcc . rate_u_dot_ulim [ 1 ] ;
rtB . pdz4grm5e4 [ 2 ] = rtP . fcc . dt * rtP . fcc . rate_u_dot_llim [ 2 ] ;
rtB . i0glmo1df0 [ 2 ] = rtP . fcc . dt * rtP . fcc . rate_u_dot_ulim [ 2 ] ;
rtB . pdz4grm5e4 [ 3 ] = rtP . fcc . dt * rtP . fcc . rate_u_dot_llim [ 3 ] ;
rtB . i0glmo1df0 [ 3 ] = rtP . fcc . dt * rtP . fcc . rate_u_dot_ulim [ 3 ] ;
parallel_for ( 16 , fpyiqjkxe4TID3 , 1 , "fpyiqjkxe4TID3" ) ; parallel_for (
14 , gq0vzmvbiiTID3 , 1 , "gq0vzmvbiiTID3" ) ; rtB . ezqlnpmitg [ 0 ] = (
real32_T ) rtP . dp_FUSE_FIN . ref_CG [ 0 ] - ( real32_T ) rtP . xyz_cg [ 0 ]
; rtB . ezqlnpmitg [ 1 ] = ( real32_T ) rtP . dp_FUSE_FIN . ref_CG [ 1 ] - (
real32_T ) rtP . xyz_cg [ 1 ] ; rtB . ezqlnpmitg [ 2 ] = ( real32_T ) rtP .
dp_FUSE_FIN . ref_CG [ 2 ] - ( real32_T ) rtP . xyz_cg [ 2 ] ; parallel_for (
16 , lrwp4abbluTID3 , 1 , "lrwp4abbluTID3" ) ; parallel_for ( 7 ,
edz33uvfnqTID3 , 1 , "edz33uvfnqTID3" ) ; parallel_for ( 7 , o1qccxjyb0TID3 ,
1 , "o1qccxjyb0TID3" ) ; parallel_for ( 7 , c1bqh5nyucTID3 , 1 ,
"c1bqh5nyucTID3" ) ; parallel_for ( 7 , nthclqxgfxTID3 , 1 , "nthclqxgfxTID3"
) ; for ( i = 0 ; i < 3 ; i ++ ) { jnu4wdyai5 [ 6 * i ] = rtP . I [ 3 * i ] ;
jnu4wdyai5 [ 6 * i + 3 ] = rtP . Constant2_Value_gzzmx5bhnr [ 3 * i ] ; rtB .
kz2why5p22 [ 3 * i ] = jnu4wdyai5 [ 6 * i ] ; rtB . lmkobnys11 [ 3 * i ] =
jnu4wdyai5 [ 6 * i + 3 ] ; rtB . j0ivb0laay [ 3 * i ] = jnu4wdyai5 [ 6 * i ]
; jnu4wdyai5 [ 6 * i + 1 ] = rtP . I [ 3 * i + 1 ] ; jnu4wdyai5 [ 6 * i + 4 ]
= rtP . Constant2_Value_gzzmx5bhnr [ 3 * i + 1 ] ; rtB . kz2why5p22 [ 3 * i +
1 ] = jnu4wdyai5 [ 6 * i + 1 ] ; rtB . lmkobnys11 [ 3 * i + 1 ] = jnu4wdyai5
[ 6 * i + 4 ] ; rtB . j0ivb0laay [ 3 * i + 1 ] = jnu4wdyai5 [ 6 * i + 1 ] ;
jnu4wdyai5 [ 6 * i + 2 ] = rtP . I [ 3 * i + 2 ] ; jnu4wdyai5 [ 6 * i + 5 ] =
rtP . Constant2_Value_gzzmx5bhnr [ 3 * i + 2 ] ; rtB . kz2why5p22 [ 3 * i + 2
] = jnu4wdyai5 [ 6 * i + 2 ] ; rtB . lmkobnys11 [ 3 * i + 2 ] = jnu4wdyai5 [
6 * i + 5 ] ; rtB . j0ivb0laay [ 3 * i + 2 ] = jnu4wdyai5 [ 6 * i + 2 ] ; }
h34dwrxh1c_idx_0 = rtP . xyz_cg [ 1 ] ; for ( i = 0 ; i < 12 ; i ++ ) { rtB .
dsun4ub0yr [ i ] = rtP . Gain_Gain_cmlsyw5kuz [ i ] * h34dwrxh1c_idx_0 - rtP
. xyz_DEP [ 3 * i + 1 ] ; } rtB . d1gftjoaku = muDoubleScalarCos ( rtP .
Inclination_Value_o232ankinf ) ; parallel_for ( 12 , fs2jlt5vxtTID3 , 1 ,
"fs2jlt5vxtTID3" ) ; parallel_for ( 16 , bvcrkjfwjyTID3 , 1 ,
"bvcrkjfwjyTID3" ) ; parallel_for ( 14 , bo1p4zvpzlTID3 , 1 ,
"bo1p4zvpzlTID3" ) ; rtB . jnziwso4sc [ 0 ] = ( real32_T ) rtP . dp_FUSE_FIN
. ref_CG [ 0 ] - ( real32_T ) rtP . xyz_cg [ 0 ] ; rtB . jnziwso4sc [ 1 ] = (
real32_T ) rtP . dp_FUSE_FIN . ref_CG [ 1 ] - ( real32_T ) rtP . xyz_cg [ 1 ]
; rtB . jnziwso4sc [ 2 ] = ( real32_T ) rtP . dp_FUSE_FIN . ref_CG [ 2 ] - (
real32_T ) rtP . xyz_cg [ 2 ] ; parallel_for ( 16 , npienbht1rTID3 , 1 ,
"npienbht1rTID3" ) ; parallel_for ( 7 , avd00xkr3eTID3 , 1 , "avd00xkr3eTID3"
) ; parallel_for ( 7 , fmrsksrnzzTID3 , 1 , "fmrsksrnzzTID3" ) ; parallel_for
( 7 , eezkdrz3ywTID3 , 1 , "eezkdrz3ywTID3" ) ; parallel_for ( 7 ,
hkavxjjm4mTID3 , 1 , "hkavxjjm4mTID3" ) ; for ( i = 0 ; i < 3 ; i ++ ) {
jnu4wdyai5 [ 6 * i ] = rtP . I [ 3 * i ] ; jnu4wdyai5 [ 6 * i + 3 ] = rtP .
Constant2_Value_myb2ch0jii [ 3 * i ] ; rtB . kunolojslw [ 3 * i ] =
jnu4wdyai5 [ 6 * i ] ; rtB . pz0e54e2g1 [ 3 * i ] = jnu4wdyai5 [ 6 * i + 3 ]
; rtB . mfbzirmkpn [ 3 * i ] = jnu4wdyai5 [ 6 * i ] ; jnu4wdyai5 [ 6 * i + 1
] = rtP . I [ 3 * i + 1 ] ; jnu4wdyai5 [ 6 * i + 4 ] = rtP .
Constant2_Value_myb2ch0jii [ 3 * i + 1 ] ; rtB . kunolojslw [ 3 * i + 1 ] =
jnu4wdyai5 [ 6 * i + 1 ] ; rtB . pz0e54e2g1 [ 3 * i + 1 ] = jnu4wdyai5 [ 6 *
i + 4 ] ; rtB . mfbzirmkpn [ 3 * i + 1 ] = jnu4wdyai5 [ 6 * i + 1 ] ;
jnu4wdyai5 [ 6 * i + 2 ] = rtP . I [ 3 * i + 2 ] ; jnu4wdyai5 [ 6 * i + 5 ] =
rtP . Constant2_Value_myb2ch0jii [ 3 * i + 2 ] ; rtB . kunolojslw [ 3 * i + 2
] = jnu4wdyai5 [ 6 * i + 2 ] ; rtB . pz0e54e2g1 [ 3 * i + 2 ] = jnu4wdyai5 [
6 * i + 5 ] ; rtB . mfbzirmkpn [ 3 * i + 2 ] = jnu4wdyai5 [ 6 * i + 2 ] ; }
h34dwrxh1c_idx_0 = rtP . xyz_cg [ 1 ] ; for ( i = 0 ; i < 12 ; i ++ ) { rtB .
h0qxix2j45 [ i ] = rtP . Gain_Gain_b4mpyq13xh [ i ] * h34dwrxh1c_idx_0 - rtP
. xyz_DEP [ 3 * i + 1 ] ; } rtB . pero4svcts = muDoubleScalarCos ( rtP .
Inclination_Value_c4hn0cnhxt ) ; parallel_for ( 12 , j4wzsijapuTID3 , 1 ,
"j4wzsijapuTID3" ) ; memcpy ( & rtB . mijjbavmhd [ 0 ] , & rtP .
ulim_baseline_Value [ 0 ] , 20U * sizeof ( real_T ) ) ; memcpy ( & rtB .
pzbmgre0pt [ 0 ] , & rtP . llim_baseline_Value [ 0 ] , 20U * sizeof ( real_T
) ) ; rtB . mijjbavmhd [ 0 ] = rtP . ulim_baseline_Value [ 0 ] * rtP .
Constant_Value_lzs3iia4r1 ; rtB . mijjbavmhd [ 1 ] = rtP .
ulim_baseline_Value [ 1 ] * rtP . Constant_Value_lzs3iia4r1 ; rtB .
mijjbavmhd [ 2 ] = rtP . ulim_baseline_Value [ 2 ] * rtP .
Constant_Value_lzs3iia4r1 ; rtB . mijjbavmhd [ 3 ] = rtP .
ulim_baseline_Value [ 3 ] * rtP . Constant_Value_lzs3iia4r1 ; rtB .
mijjbavmhd [ 4 ] = rtP . ulim_baseline_Value [ 4 ] * rtP .
Constant_Value_lzs3iia4r1 ; rtB . mijjbavmhd [ 5 ] = rtP .
ulim_baseline_Value [ 5 ] * rtP . Constant_Value_lzs3iia4r1 ; rtB .
pzbmgre0pt [ 0 ] = rtP . llim_baseline_Value [ 0 ] * rtP .
Constant_Value_lzs3iia4r1 ; rtB . pzbmgre0pt [ 1 ] = rtP .
llim_baseline_Value [ 1 ] * rtP . Constant_Value_lzs3iia4r1 ; rtB .
pzbmgre0pt [ 2 ] = rtP . llim_baseline_Value [ 2 ] * rtP .
Constant_Value_lzs3iia4r1 ; rtB . pzbmgre0pt [ 3 ] = rtP .
llim_baseline_Value [ 3 ] * rtP . Constant_Value_lzs3iia4r1 ; rtB .
pzbmgre0pt [ 4 ] = rtP . llim_baseline_Value [ 4 ] * rtP .
Constant_Value_lzs3iia4r1 ; rtB . pzbmgre0pt [ 5 ] = rtP .
llim_baseline_Value [ 5 ] * rtP . Constant_Value_lzs3iia4r1 ; rtB .
pr1zzcknox = rtP . deviceID_Value ; rtB . lbzmmcd5bg = rtP .
Numberofsimstepstoskip_Value ; if ( ssIsMajorTimeStep ( rtS ) ) { srUpdateBC
( rtDW . iw455stvt1 ) ; } UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T
tid ) { int32_T aldazsptev ; int32_T i ; char_T * sErr ; sErr =
GetErrorBuffer ( & rtDW . faxkrudp40 [ 0U ] ) ; LibUpdate_Network ( & rtDW .
faxkrudp40 [ 0U ] , & rtB . clwiqfxuxg [ 0U ] , 45 ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { { SimStruct * rts = ssGetSFunction ( rtS ,
1 ) ; { static const char * blockSIDForSFcnLoader = "UNIFIER:31022" ;
sfcnLoader_setCurrentSFcnBlockSID ( blockSIDForSFcnLoader ) ; void ( *
sfcnMethodPtr ) ( SimStruct * , int ) = ssGetmdlUpdate ( rts ) ;
sfcnLoader_separateComplexHandler_withTID ( rts , sfcnMethodPtr , ( 0 <= 1 )
&& gbl_raccel_tid01eq ? 0 : 0 ) ; } if ( ssGetErrorStatus ( rts ) != ( NULL )
) return ; } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { rtDW . dlxximuhuf +=
rtP . DiscreteTimeIntegrator1_gainval * rtB . kwx4tf2rpd ; rtDW . khpyhk0eyn
+= rtP . DiscreteTimeIntegrator_gainval * rtB . nqnp5f0q15 ; rtDW .
jbwstjuywp += rtP . DiscreteTimeIntegrator_gainval_pw0lpdcwhh * rtB .
plcqk00upv ; rtDW . j2jiqbkm41 = rtB . mibyp4a3ir ; rtDW . oiqpesodi3 = ( rtB
. bxb20ghqvu - rtP . DiscreteTransferFcn_DenCoef [ 1 ] * rtDW . oiqpesodi3 )
/ rtP . DiscreteTransferFcn_DenCoef [ 0 ] ; rtDW . fd5b54bou3 = ( rtB .
e2gqyvidtc - rtP . DiscreteTransferFcn_DenCoef_byoyehge5w [ 1 ] * rtDW .
fd5b54bou3 ) / rtP . DiscreteTransferFcn_DenCoef_byoyehge5w [ 0 ] ; rtDW .
fshwisxlge = 0U ; rtDW . bwoaafu1ol [ 0 ] += rtP .
DiscreteTimeIntegrator_gainval_kmg3udrmnp * rtB . i4h14hn31u [ 0 ] ; rtDW .
bwoaafu1ol [ 1 ] += rtP . DiscreteTimeIntegrator_gainval_kmg3udrmnp * rtB .
i4h14hn31u [ 1 ] ; rtDW . bwoaafu1ol [ 2 ] += rtP .
DiscreteTimeIntegrator_gainval_kmg3udrmnp * rtB . i4h14hn31u [ 2 ] ; rtDW .
h2raxdlt4g = false ; memcpy ( & rtDW . elfrsuzvuo [ 0 ] , & rtB . i5tai251hi
[ 0 ] , 20U * sizeof ( real_T ) ) ; rtDW . gefwlenpf3 = rtB . lzsyefxdnk ;
rtDW . dwirzopvhn = rtB . famxoupov1 ; for ( i = 0 ; i < 5 ; i ++ ) { rtDW .
fzijynxjqu [ i ] = rtB . enpvrp5gce [ i ] ; } rtDW . etatrxd5ju [ 0 ] = rtB .
bvzqh0n5x5 [ 0 ] ; rtDW . etatrxd5ju [ 1 ] = rtB . bvzqh0n5x5 [ 1 ] ; rtDW .
etatrxd5ju [ 2 ] = rtB . bvzqh0n5x5 [ 2 ] ; rtDW . etatrxd5ju [ 3 ] = rtB .
bvzqh0n5x5 [ 3 ] ; rtDW . agukinkt3v = ( rtB . pownj42keg - rtP .
DiscreteTransferFcn1_DenCoef [ 1 ] * rtDW . agukinkt3v ) / rtP .
DiscreteTransferFcn1_DenCoef [ 0 ] ; rtDW . mnnmbnljys = 0U ; rtDW .
kielu0c1kf = 0U ; rtDW . fy4szg1x5i [ 0 ] += rtP .
DiscreteTimeIntegrator_gainval_foqeyzosjf * rtB . dyptlhmida [ 0 ] ; rtDW .
l4ppeudfek [ 0 ] += rtP . DiscreteTimeIntegrator_gainval_er1pmwhdaq * rtB .
pzwihjpowt [ 0 ] ; rtDW . fy4szg1x5i [ 1 ] += rtP .
DiscreteTimeIntegrator_gainval_foqeyzosjf * rtB . dyptlhmida [ 1 ] ; rtDW .
l4ppeudfek [ 1 ] += rtP . DiscreteTimeIntegrator_gainval_er1pmwhdaq * rtB .
pzwihjpowt [ 1 ] ; rtDW . fy4szg1x5i [ 2 ] += rtP .
DiscreteTimeIntegrator_gainval_foqeyzosjf * rtB . dyptlhmida [ 2 ] ; rtDW .
l4ppeudfek [ 2 ] += rtP . DiscreteTimeIntegrator_gainval_er1pmwhdaq * rtB .
pzwihjpowt [ 2 ] ; for ( i = 0 ; i < 2999 ; i ++ ) { rtDW . h0chx3glnf [ (
uint32_T ) i ] = rtDW . h0chx3glnf [ i + 1U ] ; } rtDW . h0chx3glnf [ 2999 ]
= rtP . Constant1_Value_hxs0fqj1dn ; sErr = GetErrorBuffer ( & rtDW .
m4a0ukvmhq [ 0U ] ) ; LibUpdate_Network ( & rtDW . m4a0ukvmhq [ 0U ] , & rtB
. bd32gk0ocy . fx012r44nt [ 0U ] , 509 ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } sErr =
GetErrorBuffer ( & rtDW . mbrgrjucym [ 0U ] ) ; LibUpdate_Network ( & rtDW .
mbrgrjucym [ 0U ] , & rtB . dffuptpbcz . fx012r44nt [ 0U ] , 509 ) ; if ( *
sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1
) ; } rtDW . kedw3dybgq = rtB . ecvavrybwp ; sErr = GetErrorBuffer ( & rtDW .
abjojyrz15 [ 0U ] ) ; LibUpdate_Network ( & rtDW . abjojyrz15 [ 0U ] , & rtB
. j02ammmnbk [ 0U ] , 509 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS ,
sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } sErr = GetErrorBuffer ( & rtDW .
ft5azbdazn [ 0U ] ) ; LibUpdate_Network ( & rtDW . ft5azbdazn [ 0U ] , & rtB
. fmyapefplk [ 0U ] , 509 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS ,
sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } sErr = GetErrorBuffer ( & rtDW .
m05hfkvpqz [ 0U ] ) ; LibUpdate_Network ( & rtDW . m05hfkvpqz [ 0U ] , & rtB
. hl5ibqcu3w . n1ioem5ozp [ 0U ] , 509 ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } sErr =
GetErrorBuffer ( & rtDW . ksy2wwjv20 [ 0U ] ) ; LibUpdate_Network ( & rtDW .
ksy2wwjv20 [ 0U ] , & rtB . pookhwl2ri . n1ioem5ozp [ 0U ] , 509 ) ; if ( *
sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1
) ; } sErr = GetErrorBuffer ( & rtDW . axqu4ckdky [ 0U ] ) ;
LibUpdate_Network ( & rtDW . axqu4ckdky [ 0U ] , & rtB . fax0s1cyhb [ 0U ] ,
509 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } sErr = GetErrorBuffer ( & rtDW .
f00y3b0qin [ 0U ] ) ; LibUpdate_Network ( & rtDW . f00y3b0qin [ 0U ] , & rtB
. enohy5yaap . iopntl53ab [ 0U ] , 509 ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } sErr =
GetErrorBuffer ( & rtDW . ehnerh2sch [ 0U ] ) ; LibUpdate_Network ( & rtDW .
ehnerh2sch [ 0U ] , & rtB . nikuyjvr0y . iopntl53ab [ 0U ] , 509 ) ; if ( *
sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1
) ; } sErr = GetErrorBuffer ( & rtDW . h52cjzwtlm [ 0U ] ) ;
LibUpdate_Network ( & rtDW . h52cjzwtlm [ 0U ] , & rtB . jek5zaxern .
iopntl53ab [ 0U ] , 509 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS ,
sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } rtDW . ktsj2nkchd = rtB .
n2fj5a4cso ; sErr = GetErrorBuffer ( & rtDW . hshhxf1iwg [ 0U ] ) ;
LibUpdate_Network ( & rtDW . hshhxf1iwg [ 0U ] , & rtB . n1ybyykngv .
dw4z4lzsfl [ 0U ] , 509 ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS ,
sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } sErr = GetErrorBuffer ( & rtDW .
fsed3lqtd2 [ 0U ] ) ; LibUpdate_Network ( & rtDW . fsed3lqtd2 [ 0U ] , & rtB
. hztlwupntw . dw4z4lzsfl [ 0U ] , 509 ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } } for (
aldazsptev = 0 ; aldazsptev < 12 ; aldazsptev ++ ) { if ( ssIsSampleHit ( rtS
, 1 , 0 ) ) { rtDW . adqmzv0sx0 [ aldazsptev ] . kd3fwxo3ke = rtB .
adqmzv0sx0 [ aldazsptev ] . cgxtlo5ezj ; } } { real_T * * uBuffer = ( real_T
* * ) & rtDW . a1p5mmdhor . TUbufferPtrs [ 0 ] ; int numBuffers = 2 ; real_T
simTime = ssGetT ( rtS ) ; { int_T i1 ; const real_T * u0 = & rtB .
kmxfn2bnil [ 0 ] ; const real_T * u1 = & rtB . pgxjqf3hkj [ 0 ] ; int_T *
iw_Tail = & rtDW . l1l2gip32s . Tail [ 0 ] ; int_T * iw_Head = & rtDW .
l1l2gip32s . Head [ 0 ] ; int_T * iw_Last = & rtDW . l1l2gip32s . Last [ 0 ]
; int_T * iw_CircularBufSize = & rtDW . l1l2gip32s . CircularBufSize [ 0 ] ;
for ( i1 = 0 ; i1 < 16 ; i1 ++ ) { iw_Head [ i1 ] = ( ( iw_Head [ i1 ] < (
iw_CircularBufSize [ i1 ] - 1 ) ) ? ( iw_Head [ i1 ] + 1 ) : 0 ) ; if (
iw_Head [ i1 ] == iw_Tail [ i1 ] ) { if ( ! rt_TDelayUpdateTailOrGrowBuf ( &
iw_CircularBufSize [ i1 ] , & iw_Tail [ i1 ] , & iw_Head [ i1 ] , & iw_Last [
i1 ] , simTime - rtP . VariableTransportDelay1_MaxDelay , uBuffer , (
boolean_T ) 0 , ( boolean_T ) 0 , & rtDW . l1l2gip32s . MaxNewBufSize ) ) {
ssSetErrorStatus ( rtS , "vtdelay memory allocation error" ) ; return ; }
slsaSaveRawMemoryForSimTargetOP ( rtS ,
 "UNIFIER/C7A_HARW/Aero/InducedAngleOfAttack/addDelay/Variable\nTransport Delay1_TUbuffer0"
, ( void * * ) ( & uBuffer [ 0 ] ) , numBuffers * iw_CircularBufSize [ i1 ] *
sizeof ( real_T ) , ( NULL ) , ( NULL ) ) ; } ( * uBuffer +
iw_CircularBufSize [ i1 ] ) [ iw_Head [ i1 ] ] = simTime ; ( * uBuffer ++ ) [
iw_Head [ i1 ] ] = u0 [ i1 ] ; } } } { real_T * * uBuffer = ( real_T * * ) &
rtDW . d5j1ciynjn . TUbufferPtrs [ 0 ] ; int numBuffers = 2 ; real_T simTime
= ssGetT ( rtS ) ; { int_T i1 ; const real_T * u0 = & rtB . agdfetg0qt [ 0 ]
; const real_T * u1 = & rtB . iygwn2n1hi [ 0 ] ; int_T * iw_Tail = & rtDW .
lynamxwk0r . Tail [ 0 ] ; int_T * iw_Head = & rtDW . lynamxwk0r . Head [ 0 ]
; int_T * iw_Last = & rtDW . lynamxwk0r . Last [ 0 ] ; int_T *
iw_CircularBufSize = & rtDW . lynamxwk0r . CircularBufSize [ 0 ] ; for ( i1 =
0 ; i1 < 16 ; i1 ++ ) { iw_Head [ i1 ] = ( ( iw_Head [ i1 ] < (
iw_CircularBufSize [ i1 ] - 1 ) ) ? ( iw_Head [ i1 ] + 1 ) : 0 ) ; if (
iw_Head [ i1 ] == iw_Tail [ i1 ] ) { if ( ! rt_TDelayUpdateTailOrGrowBuf ( &
iw_CircularBufSize [ i1 ] , & iw_Tail [ i1 ] , & iw_Head [ i1 ] , & iw_Last [
i1 ] , simTime - rtP . VariableTransportDelay_MaxDelay , uBuffer , (
boolean_T ) 0 , ( boolean_T ) 0 , & rtDW . lynamxwk0r . MaxNewBufSize ) ) {
ssSetErrorStatus ( rtS , "vtdelay memory allocation error" ) ; return ; }
slsaSaveRawMemoryForSimTargetOP ( rtS ,
 "UNIFIER/C7A_HARW/Aero/InducedAngleOfAttack/addDelay/Variable\nTransport Delay_TUbuffer0"
, ( void * * ) ( & uBuffer [ 0 ] ) , numBuffers * iw_CircularBufSize [ i1 ] *
sizeof ( real_T ) , ( NULL ) , ( NULL ) ) ; } ( * uBuffer +
iw_CircularBufSize [ i1 ] ) [ iw_Head [ i1 ] ] = simTime ; ( * uBuffer ++ ) [
iw_Head [ i1 ] ] = u0 [ i1 ] ; } } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
rtDW . oy300njhw2 [ 0 ] = rtB . jvaexa3o5a . fxgxda1orz [ 0 ] ; rtDW .
oy300njhw2 [ 1 ] = rtB . jvaexa3o5a . fxgxda1orz [ 1 ] ; rtDW . oy300njhw2 [
2 ] = rtB . jvaexa3o5a . fxgxda1orz [ 2 ] ; rtDW . ie2l444zba [ 0 ] = rtB .
leuhdrxpbe . fxgxda1orz [ 0 ] ; rtDW . ie2l444zba [ 1 ] = rtB . leuhdrxpbe .
fxgxda1orz [ 1 ] ; rtDW . ie2l444zba [ 2 ] = rtB . leuhdrxpbe . fxgxda1orz [
2 ] ; rtDW . fr2fpc1qxz [ 0 ] = rtB . csf3emrtxr . fxgxda1orz [ 0 ] ; rtDW .
fr2fpc1qxz [ 1 ] = rtB . csf3emrtxr . fxgxda1orz [ 1 ] ; rtDW . fr2fpc1qxz [
2 ] = rtB . csf3emrtxr . fxgxda1orz [ 2 ] ; } { SimStruct * rts =
ssGetSFunction ( rtS , 2 ) ; { static const char * blockSIDForSFcnLoader =
"UNIFIER:8429" ; sfcnLoader_setCurrentSFcnBlockSID ( blockSIDForSFcnLoader )
; void ( * sfcnMethodPtr ) ( SimStruct * , int ) = ssGetmdlUpdate ( rts ) ;
sfcnLoader_separateComplexHandler_withTID ( rts , sfcnMethodPtr , ( 0 <= 1 )
&& gbl_raccel_tid01eq ? 0 : 0 ) ; } if ( ssGetErrorStatus ( rts ) != ( NULL )
) return ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { rtDW . nwwie5t5of = rtB .
bifocupq14 ; } if ( rtDW . bwa1fip2ky ) { { SimStruct * rts = ssGetSFunction
( rtS , 0 ) ; { static const char * blockSIDForSFcnLoader = "UNIFIER:8414" ;
sfcnLoader_setCurrentSFcnBlockSID ( blockSIDForSFcnLoader ) ; void ( *
sfcnMethodPtr ) ( SimStruct * , int ) = ssGetmdlUpdate ( rts ) ;
sfcnLoader_separateComplexHandler_withTID ( rts , sfcnMethodPtr , ( 0 <= 1 )
&& gbl_raccel_tid01eq ? 0 : 0 ) ; } if ( ssGetErrorStatus ( rts ) != ( NULL )
) return ; } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { { SimStruct * rts =
ssGetSFunction ( rtS , 3 ) ; { static const char * blockSIDForSFcnLoader =
"UNIFIER:8424" ; sfcnLoader_setCurrentSFcnBlockSID ( blockSIDForSFcnLoader )
; void ( * sfcnMethodPtr ) ( SimStruct * , int ) = ssGetmdlUpdate ( rts ) ;
sfcnLoader_separateComplexHandler_withTID ( rts , sfcnMethodPtr , ( 0 <= 1 )
&& gbl_raccel_tid01eq ? 0 : 0 ) ; } if ( ssGetErrorStatus ( rts ) != ( NULL )
) return ; } } UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 ( int_T tid )
{ UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) { int32_T
aldazsptev ; XDot * _rtXdot ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ;
_rtXdot -> cqs5hdvfch [ 0 ] = rtB . bffbbnoz3r [ 0 ] ; _rtXdot -> cqtafeeuey
[ 0 ] = rtB . obpec22lib [ 0 ] ; _rtXdot -> lowr4jkjer [ 0 ] = rtB .
poxm5ojaul [ 0 ] ; _rtXdot -> jwtmx1crsn [ 0 ] = rtB . npwmucyqyl [ 0 ] ;
_rtXdot -> cqs5hdvfch [ 1 ] = rtB . bffbbnoz3r [ 1 ] ; _rtXdot -> cqtafeeuey
[ 1 ] = rtB . obpec22lib [ 1 ] ; _rtXdot -> lowr4jkjer [ 1 ] = rtB .
poxm5ojaul [ 1 ] ; _rtXdot -> jwtmx1crsn [ 1 ] = rtB . npwmucyqyl [ 1 ] ;
_rtXdot -> cqs5hdvfch [ 2 ] = rtB . bffbbnoz3r [ 2 ] ; _rtXdot -> cqtafeeuey
[ 2 ] = rtB . obpec22lib [ 2 ] ; _rtXdot -> lowr4jkjer [ 2 ] = rtB .
poxm5ojaul [ 2 ] ; _rtXdot -> jwtmx1crsn [ 2 ] = rtB . npwmucyqyl [ 2 ] ; if
( rtDW . j1mia3rzbj ) { if ( ( ( rtX . a5x0ow51a0 > rtP .
DistanceintoGustxLimitedtogustlengthd_LowerSat ) && ( rtX . a5x0ow51a0 < rtP
. Distanceintogustx_d_m ) ) || ( ( rtX . a5x0ow51a0 <= rtP .
DistanceintoGustxLimitedtogustlengthd_LowerSat ) && ( rtB . ccj2vt5i3b > 0.0
) ) || ( ( rtX . a5x0ow51a0 >= rtP . Distanceintogustx_d_m ) && ( rtB .
ccj2vt5i3b < 0.0 ) ) ) { _rtXdot -> a5x0ow51a0 = rtB . ccj2vt5i3b ; } else {
_rtXdot -> a5x0ow51a0 = 0.0 ; } } else { ( ( XDot * ) ssGetdX ( rtS ) ) ->
a5x0ow51a0 = 0.0 ; } nuri42chkg ( rtB . ccj2vt5i3b , rtP .
Distanceintogusty_d_m , & rtDW . cz2051lnszn , & rtP . cz2051lnszn , & rtX .
cz2051lnszn , & _rtXdot -> cz2051lnszn ) ; nuri42chkg ( rtB . ccj2vt5i3b ,
rtP . Distanceintogustz_d_m , & rtDW . lld2mvqphv , & rtP . lld2mvqphv , &
rtX . lld2mvqphv , & _rtXdot -> lld2mvqphv ) ; for ( aldazsptev = 0 ;
aldazsptev < 12 ; aldazsptev ++ ) { _rtXdot -> adqmzv0sx0 [ aldazsptev ] .
jtqvm3jkcz = rtB . adqmzv0sx0 [ aldazsptev ] . n52zpi4j4s ; _rtXdot ->
adqmzv0sx0 [ aldazsptev ] . dkxi20ccfc = rtB . adqmzv0sx0 [ aldazsptev ] .
ex2xojeend ; } { } { } if ( rtDW . nt5ueu32fc == 0 ) { _rtXdot -> oqemwaxlko
[ 0 ] = rtX . oqemwaxlko [ 1 ] ; _rtXdot -> oqemwaxlko [ 1 ] = rtB .
ixwwzqb4p2 ; } } void MdlProjection ( void ) { } void MdlTerminate ( void ) {
char_T * sErr ; sErr = GetErrorBuffer ( & rtDW . o4nasosvnh [ 0U ] ) ;
LibTerminate ( & rtDW . o4nasosvnh [ 0U ] ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; }
LibDestroy ( & rtDW . o4nasosvnh [ 0U ] , 1 ) ; DestroyUDPInterface ( & rtDW
. o4nasosvnh [ 0U ] ) ; sErr = GetErrorBuffer ( & rtDW . lwsgjestu3 [ 0U ] )
; LibTerminate ( & rtDW . lwsgjestu3 [ 0U ] ) ; if ( * sErr != 0 ) {
ssSetErrorStatus ( rtS , sErr ) ; ssSetStopRequested ( rtS , 1 ) ; }
LibDestroy ( & rtDW . lwsgjestu3 [ 0U ] , 1 ) ; DestroyUDPInterface ( & rtDW
. lwsgjestu3 [ 0U ] ) ; { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ; {
static const char * blockSIDForSFcnLoader = "UNIFIER:8414" ;
sfcnLoader_setCurrentSFcnBlockSID ( blockSIDForSFcnLoader ) ; void ( *
sfcnMethodPtr ) ( SimStruct * ) = rts -> modelMethods . sFcn . mdlTerminate ;
sfcnLoader_separateComplexHandler ( rts , sfcnMethodPtr ) ; } } sErr =
GetErrorBuffer ( & rtDW . faxkrudp40 [ 0U ] ) ; LibTerminate ( & rtDW .
faxkrudp40 [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } LibDestroy ( & rtDW . faxkrudp40 [ 0U ] ,
1 ) ; DestroyUDPInterface ( & rtDW . faxkrudp40 [ 0U ] ) ; { SimStruct * rts
= ssGetSFunction ( rtS , 1 ) ; { static const char * blockSIDForSFcnLoader =
"UNIFIER:31022" ; sfcnLoader_setCurrentSFcnBlockSID ( blockSIDForSFcnLoader )
; void ( * sfcnMethodPtr ) ( SimStruct * ) = rts -> modelMethods . sFcn .
mdlTerminate ; sfcnLoader_separateComplexHandler ( rts , sfcnMethodPtr ) ; }
} sErr = GetErrorBuffer ( & rtDW . m4a0ukvmhq [ 0U ] ) ; LibTerminate ( &
rtDW . m4a0ukvmhq [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS ,
sErr ) ; ssSetStopRequested ( rtS , 1 ) ; } LibDestroy ( & rtDW . m4a0ukvmhq
[ 0U ] , 1 ) ; DestroyUDPInterface ( & rtDW . m4a0ukvmhq [ 0U ] ) ; sErr =
GetErrorBuffer ( & rtDW . mbrgrjucym [ 0U ] ) ; LibTerminate ( & rtDW .
mbrgrjucym [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } LibDestroy ( & rtDW . mbrgrjucym [ 0U ] ,
1 ) ; DestroyUDPInterface ( & rtDW . mbrgrjucym [ 0U ] ) ; sErr =
GetErrorBuffer ( & rtDW . abjojyrz15 [ 0U ] ) ; LibTerminate ( & rtDW .
abjojyrz15 [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } LibDestroy ( & rtDW . abjojyrz15 [ 0U ] ,
1 ) ; DestroyUDPInterface ( & rtDW . abjojyrz15 [ 0U ] ) ; sErr =
GetErrorBuffer ( & rtDW . ft5azbdazn [ 0U ] ) ; LibTerminate ( & rtDW .
ft5azbdazn [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } LibDestroy ( & rtDW . ft5azbdazn [ 0U ] ,
1 ) ; DestroyUDPInterface ( & rtDW . ft5azbdazn [ 0U ] ) ; sErr =
GetErrorBuffer ( & rtDW . m05hfkvpqz [ 0U ] ) ; LibTerminate ( & rtDW .
m05hfkvpqz [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } LibDestroy ( & rtDW . m05hfkvpqz [ 0U ] ,
1 ) ; DestroyUDPInterface ( & rtDW . m05hfkvpqz [ 0U ] ) ; sErr =
GetErrorBuffer ( & rtDW . ksy2wwjv20 [ 0U ] ) ; LibTerminate ( & rtDW .
ksy2wwjv20 [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } LibDestroy ( & rtDW . ksy2wwjv20 [ 0U ] ,
1 ) ; DestroyUDPInterface ( & rtDW . ksy2wwjv20 [ 0U ] ) ; sErr =
GetErrorBuffer ( & rtDW . axqu4ckdky [ 0U ] ) ; LibTerminate ( & rtDW .
axqu4ckdky [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } LibDestroy ( & rtDW . axqu4ckdky [ 0U ] ,
1 ) ; DestroyUDPInterface ( & rtDW . axqu4ckdky [ 0U ] ) ; sErr =
GetErrorBuffer ( & rtDW . f00y3b0qin [ 0U ] ) ; LibTerminate ( & rtDW .
f00y3b0qin [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } LibDestroy ( & rtDW . f00y3b0qin [ 0U ] ,
1 ) ; DestroyUDPInterface ( & rtDW . f00y3b0qin [ 0U ] ) ; sErr =
GetErrorBuffer ( & rtDW . ehnerh2sch [ 0U ] ) ; LibTerminate ( & rtDW .
ehnerh2sch [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } LibDestroy ( & rtDW . ehnerh2sch [ 0U ] ,
1 ) ; DestroyUDPInterface ( & rtDW . ehnerh2sch [ 0U ] ) ; sErr =
GetErrorBuffer ( & rtDW . h52cjzwtlm [ 0U ] ) ; LibTerminate ( & rtDW .
h52cjzwtlm [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } LibDestroy ( & rtDW . h52cjzwtlm [ 0U ] ,
1 ) ; DestroyUDPInterface ( & rtDW . h52cjzwtlm [ 0U ] ) ; sErr =
GetErrorBuffer ( & rtDW . hshhxf1iwg [ 0U ] ) ; LibTerminate ( & rtDW .
hshhxf1iwg [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } LibDestroy ( & rtDW . hshhxf1iwg [ 0U ] ,
1 ) ; DestroyUDPInterface ( & rtDW . hshhxf1iwg [ 0U ] ) ; sErr =
GetErrorBuffer ( & rtDW . fsed3lqtd2 [ 0U ] ) ; LibTerminate ( & rtDW .
fsed3lqtd2 [ 0U ] ) ; if ( * sErr != 0 ) { ssSetErrorStatus ( rtS , sErr ) ;
ssSetStopRequested ( rtS , 1 ) ; } LibDestroy ( & rtDW . fsed3lqtd2 [ 0U ] ,
1 ) ; DestroyUDPInterface ( & rtDW . fsed3lqtd2 [ 0U ] ) ; { int_T i1 ; void
* * pw_TUbufferPtrs = & rtDW . a1p5mmdhor . TUbufferPtrs [ 0 ] ; for ( i1 = 0
; i1 < 16 ; i1 ++ ) { rt_TDelayFreeBuf ( pw_TUbufferPtrs [ i1 ] ) ; } } {
int_T i1 ; void * * pw_TUbufferPtrs = & rtDW . d5j1ciynjn . TUbufferPtrs [ 0
] ; for ( i1 = 0 ; i1 < 16 ; i1 ++ ) { rt_TDelayFreeBuf ( pw_TUbufferPtrs [
i1 ] ) ; } } { SimStruct * rts = ssGetSFunction ( rtS , 2 ) ; { static const
char * blockSIDForSFcnLoader = "UNIFIER:8429" ;
sfcnLoader_setCurrentSFcnBlockSID ( blockSIDForSFcnLoader ) ; void ( *
sfcnMethodPtr ) ( SimStruct * ) = rts -> modelMethods . sFcn . mdlTerminate ;
sfcnLoader_separateComplexHandler ( rts , sfcnMethodPtr ) ; } } { SimStruct *
rts = ssGetSFunction ( rtS , 3 ) ; { static const char *
blockSIDForSFcnLoader = "UNIFIER:8424" ; sfcnLoader_setCurrentSFcnBlockSID (
blockSIDForSFcnLoader ) ; void ( * sfcnMethodPtr ) ( SimStruct * ) = rts ->
modelMethods . sFcn . mdlTerminate ; sfcnLoader_separateComplexHandler ( rts
, sfcnMethodPtr ) ; } } } static void mr_UNIFIER_cacheDataAsMxArray ( mxArray
* destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_UNIFIER_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_UNIFIER_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_UNIFIER_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_UNIFIER_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_UNIFIER_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_UNIFIER_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) ; static uint_T
mr_UNIFIER_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_UNIFIER_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_UNIFIER_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_UNIFIER_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_UNIFIER_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_UNIFIER_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_UNIFIER_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_UNIFIER_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T
mr_UNIFIER_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T
fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray
, i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; }
mxArray * mr_UNIFIER_GetDWork ( ) { static const char * ssDWFieldNames [ 3 ]
= { "rtB" , "rtDW" , "rtPrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix
( 1 , 1 , 3 , ssDWFieldNames ) ; mr_UNIFIER_cacheDataAsMxArray ( ssDW , 0 , 0
, ( const void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char *
rtdwDataFieldNames [ 311 ] = { "rtDW.nwwie5t5of" , "rtDW.keywsrry0q" ,
"rtDW.dlxximuhuf" , "rtDW.khpyhk0eyn" , "rtDW.jbwstjuywp" , "rtDW.oiqpesodi3"
, "rtDW.fd5b54bou3" , "rtDW.bwoaafu1ol" , "rtDW.elfrsuzvuo" ,
"rtDW.fzijynxjqu" , "rtDW.etatrxd5ju" , "rtDW.agukinkt3v" , "rtDW.fy4szg1x5i"
, "rtDW.l4ppeudfek" , "rtDW.h0chx3glnf" , "rtDW.cg3pqhuaqw" ,
"rtDW.hrv12n540b" , "rtDW.kedw3dybgq" , "rtDW.ktsj2nkchd" , "rtDW.oy300njhw2"
, "rtDW.ie2l444zba" , "rtDW.fr2fpc1qxz" , "rtDW.iiyniqtsbl" ,
"rtDW.pqowklbvyf" , "rtDW.j2jiqbkm41" , "rtDW.kz1ulbsboy" , "rtDW.onfzjh24jl"
, "rtDW.gefwlenpf3" , "rtDW.dwirzopvhn" , "rtDW.lkiqlh4rt5" ,
"rtDW.h21bdoedky" , "rtDW.f2sqih31gq" , "rtDW.ewnwvk30kq" , "rtDW.nevgeggqm5"
, "rtDW.lq4e3tdaf4" , "rtDW.g5vbnuh5ul" , "rtDW.bgxy0tbgby" ,
"rtDW.iinforci3b" , "rtDW.onpp1osnf1" , "rtDW.knywr3cygt" , "rtDW.bxxehqrfhk"
, "rtDW.lybiwzq15a" , "rtDW.hhpqcwloh0" , "rtDW.hxdxaozqh1" ,
"rtDW.fknte5kkos" , "rtDW.mnfw2imvdw" , "rtDW.felqedgyx1" , "rtDW.knvjdfedfb"
, "rtDW.apjnubwssp" , "rtDW.ptu3l2ehpk" , "rtDW.ebmg2d0djd" ,
"rtDW.nmrn1j5ohh" , "rtDW.hl5ux0u3e5" , "rtDW.kywikzuq0z" , "rtDW.op4s5nmfn0"
, "rtDW.p3qcu4kyf3" , "rtDW.d1rjlxqbuf" , "rtDW.g130c2x32o" ,
"rtDW.dssqgth4gt" , "rtDW.erz4us2nfk" , "rtDW.fyjcynthf1" , "rtDW.acn3fu00s1"
, "rtDW.itcccsf0ct" , "rtDW.lipbrcbfzk" , "rtDW.md1fsm3br3" ,
"rtDW.be05daasmg" , "rtDW.nq0rryljq1" , "rtDW.ddr4l0n5i3" , "rtDW.by2jasgm4o"
, "rtDW.d2orna0nbx" , "rtDW.ltawfyrv1z" , "rtDW.k3eoy0kyly" ,
"rtDW.fwx2o3iy55" , "rtDW.payo3ow3lc" , "rtDW.dtoycisapu" , "rtDW.drfz5czaqt"
, "rtDW.bghenoofp3" , "rtDW.efelnchztt" , "rtDW.mmlvnrnkd5" ,
"rtDW.pyico4tskx" , "rtDW.d1chukr5qk" , "rtDW.a114jaowoa" , "rtDW.fmnuqfwd2y"
, "rtDW.kxbke0l40t" , "rtDW.cn3pwtmbrz" , "rtDW.afbj2p43u0" ,
"rtDW.orlfhdhe1j" , "rtDW.gid5guyvyn" , "rtDW.cicwclszwg" , "rtDW.mrk1ckqhf2"
, "rtDW.bozrvqxxg2" , "rtDW.ifrmin0vwy" , "rtDW.mh4tfkaouk" ,
"rtDW.jek4mbk1vx" , "rtDW.olk2wajvjn" , "rtDW.dj4sdqer2s" , "rtDW.cnggkfwmtg"
, "rtDW.gywplgfgo2" , "rtDW.ejpzs4ilay" , "rtDW.can5ffl1pr" ,
"rtDW.hxzrjsvd30" , "rtDW.e3iqk0pnev" , "rtDW.dt01p1zmsc" , "rtDW.gjocb1fbkw"
, "rtDW.b3cbqcpv1h" , "rtDW.gzdase1ucw" , "rtDW.l2x1n13zrt" ,
"rtDW.nsylsr0oax" , "rtDW.nqbfiajmmx" , "rtDW.dxzhrvzosm" , "rtDW.f3x1iuxbls"
, "rtDW.ew3v0ngbur" , "rtDW.cauppzu2z3" , "rtDW.lbnvio5iis" ,
"rtDW.l0y0sibjp0" , "rtDW.kd2av241hc" , "rtDW.lznod44who" , "rtDW.d5s5scu00d"
, "rtDW.ne2n02ii3u" , "rtDW.fzyukbgm1g" , "rtDW.eism1mkbhp" ,
"rtDW.cy0fp04shv" , "rtDW.ibavnqjmbw" , "rtDW.lekr1dkbkg" , "rtDW.dbvpgm1eii"
, "rtDW.iysyxlklep" , "rtDW.hrfauuwygv" , "rtDW.dxyyfd5j1h" ,
"rtDW.cbvbkjurbn" , "rtDW.bv303cgicw" , "rtDW.grbvdxyxvz" , "rtDW.hlwi0mkbiu"
, "rtDW.jirkxxvdzn" , "rtDW.ibhybetp43" , "rtDW.gubxapj1vp" ,
"rtDW.mfhxczbxqh" , "rtDW.ksgrrkn4aj" , "rtDW.pbrsinov1u" , "rtDW.ptwmh3h1zm"
, "rtDW.jezsbtdj5i" , "rtDW.kovsesfevn" , "rtDW.jqygi5hjmr" ,
"rtDW.fka3wa5y1h" , "rtDW.bo1nef12b5" , "rtDW.efbu502mmx" , "rtDW.d32hdtpoan"
, "rtDW.bzfig0ujyt" , "rtDW.pl4kkbhqoo" , "rtDW.pzrjkskwao" ,
"rtDW.gdy3zxhcjf" , "rtDW.npr5ivvwap" , "rtDW.no5lpmbbav" , "rtDW.fjvix5f1rz"
, "rtDW.ajomfxtqpu" , "rtDW.ebgkmc055j" , "rtDW.jt5c1vowbk" ,
"rtDW.etlbk5pudp" , "rtDW.lwhsegjgjj" , "rtDW.jdaeny0wrl" , "rtDW.hcj4r1mhfj"
, "rtDW.jixe3naiuk" , "rtDW.i5csyk2orb" , "rtDW.g4ci4vpjq5" ,
"rtDW.ilvem33lp3" , "rtDW.f5phmbs2tn" , "rtDW.jkkslszvco" , "rtDW.g32aqgov41"
, "rtDW.cqa40zcbre" , "rtDW.fscf4o21tu" , "rtDW.ijffkakodk" ,
"rtDW.lic05r3aek" , "rtDW.onbuk53hje" , "rtDW.e5hj5xeuwo" , "rtDW.oznafgtnf4"
, "rtDW.kziglxgcas" , "rtDW.dwguyo0lfa" , "rtDW.gvlplkt5zq" ,
"rtDW.kooonezqli" , "rtDW.evhyqcpton" , "rtDW.nab3mylhfe" , "rtDW.i5342xzqyj"
, "rtDW.mxv2hnd5hy" , "rtDW.cyzymhco2p" , "rtDW.cbx2viebna" ,
"rtDW.crhnfogbxa" , "rtDW.ksofld5bxu" , "rtDW.nalp0vjrpv" , "rtDW.gjcgz4hrbp"
, "rtDW.jzpbje250b" , "rtDW.adcrsey4fl" , "rtDW.pym1a1c4u4" ,
"rtDW.jpzkj2zafj" , "rtDW.axjl1de1kg" , "rtDW.pn4ledpxlb" , "rtDW.buhdzc4orn"
, "rtDW.a2szru3bcs" , "rtDW.jp0ljiil3a" , "rtDW.ii3syi53bn" ,
"rtDW.daljbq5gtz" , "rtDW.l1l2gip32s" , "rtDW.lynamxwk0r" , "rtDW.nt5ueu32fc"
, "rtDW.cfvgbkovvu" , "rtDW.anhm4dpp2l" , "rtDW.iw455stvt1" ,
"rtDW.l4pkohbzxl" , "rtDW.ixmz3u3uqw" , "rtDW.ae5y3r3gcn" , "rtDW.ail2sagdmg"
, "rtDW.fshwisxlge" , "rtDW.mnnmbnljys" , "rtDW.kielu0c1kf" ,
"rtDW.cg1cpca1ek" , "rtDW.h2raxdlt4g" , "rtDW.dkewog43cc" , "rtDW.hvrukley13"
, "rtDW.bwa1fip2ky" , "rtDW.j1mia3rzbj" , "rtDW.onvtpfrqwn.epzfbulv32" ,
"rtDW.onvtpfrqwn.ikkalmwo4a" , "rtDW.f2z2t5yyw1.p2xendpa3t" ,
"rtDW.f2z2t5yyw1.jjqjeeukne" , "rtDW.c3nx5ahmxh.nzkcuadowp" ,
"rtDW.c3nx5ahmxh.ncgtkhktc1" , "rtDW.kq23drdvrd.n5askzs1gj" ,
"rtDW.kq23drdvrd.eihhgub2fg" , "rtDW.nbnysw2wtu.oppfisosoh" ,
"rtDW.nbnysw2wtu.kh3r3fv0yw" , "rtDW.nbnysw2wtu.o33bpxl4on" ,
"rtDW.nbnysw2wtu.mjyyj4engg.cfq0b3accy" , "rtDW.i02x2fl5fr.g1l24xvjvk" ,
"rtDW.i02x2fl5fr.gkzhayocy3" , "rtDW.i02x2fl5fr.ik1h4vnwti" ,
"rtDW.i02x2fl5fr.fn2ws0qfrh0.cfq0b3accy" , "rtDW.pw2pn5yxj3.e1ojz4whx1" ,
"rtDW.pw2pn5yxj3.bb4awxjtrl" , "rtDW.pw2pn5yxj3.gpjpxfvvnp" ,
"rtDW.pw2pn5yxj3.avztlaubnav.epzfbulv32" ,
"rtDW.pw2pn5yxj3.avztlaubnav.ikkalmwo4a" ,
"rtDW.pw2pn5yxj3.dhyklihgewe.p2xendpa3t" ,
"rtDW.pw2pn5yxj3.dhyklihgewe.jjqjeeukne" ,
"rtDW.pw2pn5yxj3.iyuu340oslz.nzkcuadowp" ,
"rtDW.pw2pn5yxj3.iyuu340oslz.ncgtkhktc1" ,
"rtDW.pw2pn5yxj3.dzsm3cj0kly.n5askzs1gj" ,
"rtDW.pw2pn5yxj3.dzsm3cj0kly.eihhgub2fg" , "rtDW.knjlllhond.oppfisosoh" ,
"rtDW.knjlllhond.kh3r3fv0yw" , "rtDW.knjlllhond.o33bpxl4on" ,
"rtDW.knjlllhond.mjyyj4engg.cfq0b3accy" , "rtDW.hga0x4lkqb.g1l24xvjvk" ,
"rtDW.hga0x4lkqb.gkzhayocy3" , "rtDW.hga0x4lkqb.ik1h4vnwti" ,
"rtDW.hga0x4lkqb.fn2ws0qfrh0.cfq0b3accy" , "rtDW.f1rxuufunp.e1ojz4whx1" ,
"rtDW.f1rxuufunp.bb4awxjtrl" , "rtDW.f1rxuufunp.gpjpxfvvnp" ,
"rtDW.f1rxuufunp.avztlaubnav.epzfbulv32" ,
"rtDW.f1rxuufunp.avztlaubnav.ikkalmwo4a" ,
"rtDW.f1rxuufunp.dhyklihgewe.p2xendpa3t" ,
"rtDW.f1rxuufunp.dhyklihgewe.jjqjeeukne" ,
"rtDW.f1rxuufunp.iyuu340oslz.nzkcuadowp" ,
"rtDW.f1rxuufunp.iyuu340oslz.ncgtkhktc1" ,
"rtDW.f1rxuufunp.dzsm3cj0kly.n5askzs1gj" ,
"rtDW.f1rxuufunp.dzsm3cj0kly.eihhgub2fg" , "rtDW.gr5ouy33uc.oppfisosoh" ,
"rtDW.gr5ouy33uc.kh3r3fv0yw" , "rtDW.gr5ouy33uc.o33bpxl4on" ,
"rtDW.gr5ouy33uc.mjyyj4engg.cfq0b3accy" , "rtDW.o021qo2kqg.g1l24xvjvk" ,
"rtDW.o021qo2kqg.gkzhayocy3" , "rtDW.o021qo2kqg.ik1h4vnwti" ,
"rtDW.o021qo2kqg.fn2ws0qfrh0.cfq0b3accy" , "rtDW.ctbmhlk4scc.e1ojz4whx1" ,
"rtDW.ctbmhlk4scc.bb4awxjtrl" , "rtDW.ctbmhlk4scc.gpjpxfvvnp" ,
"rtDW.ctbmhlk4scc.avztlaubnav.epzfbulv32" ,
"rtDW.ctbmhlk4scc.avztlaubnav.ikkalmwo4a" ,
"rtDW.ctbmhlk4scc.dhyklihgewe.p2xendpa3t" ,
"rtDW.ctbmhlk4scc.dhyklihgewe.jjqjeeukne" ,
"rtDW.ctbmhlk4scc.iyuu340oslz.nzkcuadowp" ,
"rtDW.ctbmhlk4scc.iyuu340oslz.ncgtkhktc1" ,
"rtDW.ctbmhlk4scc.dzsm3cj0kly.n5askzs1gj" ,
"rtDW.ctbmhlk4scc.dzsm3cj0kly.eihhgub2fg" , "rtDW.biiojft2vbl.oppfisosoh" ,
"rtDW.biiojft2vbl.kh3r3fv0yw" , "rtDW.biiojft2vbl.o33bpxl4on" ,
"rtDW.biiojft2vbl.mjyyj4engg.cfq0b3accy" , "rtDW.cm0yj40hhfp.g1l24xvjvk" ,
"rtDW.cm0yj40hhfp.gkzhayocy3" , "rtDW.cm0yj40hhfp.ik1h4vnwti" ,
"rtDW.cm0yj40hhfp.fn2ws0qfrh0.cfq0b3accy" , "rtDW.lld2mvqphv.mn1t1xifkc" ,
"rtDW.lld2mvqphv.pswhghvaxh" , "rtDW.cz2051lnszn.mn1t1xifkc" ,
"rtDW.cz2051lnszn.pswhghvaxh" , "rtDW.icuuav0qej[0].i3lxxvdwzm" ,
"rtDW.icuuav0qej[0].mv3vvw3b42" , "rtDW.icuuav0qej[0].acsdmeuss0" ,
"rtDW.l20xgpl0hh[0].mk5iyqhcsl" , "rtDW.l20xgpl0hh[0].f2w5jzpw5v" ,
"rtDW.l20xgpl0hh[0].nlhryvabyo" , "rtDW.lokicy2luy[0].e4gu33l0io" ,
"rtDW.lokicy2luy[0].caw3xhb43b" , "rtDW.lokicy2luy[0].pn1zggpnnk" ,
"rtDW.hfrmr3oqrf[0].mi4ckqsald" , "rtDW.hfrmr3oqrf[0].n40fumdhgw" ,
"rtDW.hfrmr3oqrf[0].oeej20g4lc" , "rtDW.adqmzv0sx0[0].adrjjytrwd" ,
"rtDW.adqmzv0sx0[0].mirazmrnvl" , "rtDW.adqmzv0sx0[0].mczobgpj2t" ,
"rtDW.adqmzv0sx0[0].kd3fwxo3ke" , } ; mxArray * rtdwData =
mxCreateStructMatrix ( 1 , 1 , 311 , rtdwDataFieldNames ) ; int k0 ;
mxSetFieldByNumber ( rtdwData , 0 , 295 , mxCreateUninitNumericMatrix ( 1 ,
12 * sizeof ( rtDW . icuuav0qej [ 0 ] . i3lxxvdwzm ) , mxUINT8_CLASS , mxREAL
) ) ; mxSetFieldByNumber ( rtdwData , 0 , 296 , mxCreateUninitNumericMatrix (
1 , 12 * sizeof ( rtDW . icuuav0qej [ 0 ] . mv3vvw3b42 ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 297 ,
mxCreateUninitNumericMatrix ( 1 , 12 * sizeof ( rtDW . icuuav0qej [ 0 ] .
acsdmeuss0 ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 298 , mxCreateUninitNumericMatrix ( 1 , 12 * sizeof ( rtDW . l20xgpl0hh [ 0
] . mk5iyqhcsl ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData
, 0 , 299 , mxCreateUninitNumericMatrix ( 1 , 12 * sizeof ( rtDW . l20xgpl0hh
[ 0 ] . f2w5jzpw5v ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber (
rtdwData , 0 , 300 , mxCreateUninitNumericMatrix ( 1 , 12 * sizeof ( rtDW .
l20xgpl0hh [ 0 ] . nlhryvabyo ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 301 , mxCreateUninitNumericMatrix ( 1 ,
12 * sizeof ( rtDW . lokicy2luy [ 0 ] . e4gu33l0io ) , mxUINT8_CLASS , mxREAL
) ) ; mxSetFieldByNumber ( rtdwData , 0 , 302 , mxCreateUninitNumericMatrix (
1 , 12 * sizeof ( rtDW . lokicy2luy [ 0 ] . caw3xhb43b ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 303 ,
mxCreateUninitNumericMatrix ( 1 , 12 * sizeof ( rtDW . lokicy2luy [ 0 ] .
pn1zggpnnk ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 304 , mxCreateUninitNumericMatrix ( 1 , 12 * sizeof ( rtDW . hfrmr3oqrf [ 0
] . mi4ckqsald ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData
, 0 , 305 , mxCreateUninitNumericMatrix ( 1 , 12 * sizeof ( rtDW . hfrmr3oqrf
[ 0 ] . n40fumdhgw ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber (
rtdwData , 0 , 306 , mxCreateUninitNumericMatrix ( 1 , 12 * sizeof ( rtDW .
hfrmr3oqrf [ 0 ] . oeej20g4lc ) , mxUINT8_CLASS , mxREAL ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 307 , mxCreateUninitNumericMatrix ( 1 ,
12 * sizeof ( rtDW . adqmzv0sx0 [ 0 ] . adrjjytrwd ) , mxUINT8_CLASS , mxREAL
) ) ; mxSetFieldByNumber ( rtdwData , 0 , 308 , mxCreateUninitNumericMatrix (
1 , 12 * sizeof ( rtDW . adqmzv0sx0 [ 0 ] . mirazmrnvl ) , mxUINT8_CLASS ,
mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 309 ,
mxCreateUninitNumericMatrix ( 1 , 12 * sizeof ( rtDW . adqmzv0sx0 [ 0 ] .
mczobgpj2t ) , mxUINT8_CLASS , mxREAL ) ) ; mxSetFieldByNumber ( rtdwData , 0
, 310 , mxCreateUninitNumericMatrix ( 1 , 12 * sizeof ( rtDW . adqmzv0sx0 [ 0
] . kd3fwxo3ke ) , mxUINT8_CLASS , mxREAL ) ) ; mr_UNIFIER_cacheDataAsMxArray
( rtdwData , 0 , 0 , ( const void * ) & ( rtDW . nwwie5t5of ) , sizeof ( rtDW
. nwwie5t5of ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const
void * ) & ( rtDW . keywsrry0q ) , sizeof ( rtDW . keywsrry0q ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * ) & ( rtDW
. dlxximuhuf ) , sizeof ( rtDW . dlxximuhuf ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & ( rtDW
. khpyhk0eyn ) , sizeof ( rtDW . khpyhk0eyn ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & ( rtDW
. jbwstjuywp ) , sizeof ( rtDW . jbwstjuywp ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & ( rtDW
. oiqpesodi3 ) , sizeof ( rtDW . oiqpesodi3 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & ( rtDW
. fd5b54bou3 ) , sizeof ( rtDW . fd5b54bou3 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & ( rtDW
. bwoaafu1ol ) , sizeof ( rtDW . bwoaafu1ol ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & ( rtDW
. elfrsuzvuo ) , sizeof ( rtDW . elfrsuzvuo ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & ( rtDW
. fzijynxjqu ) , sizeof ( rtDW . fzijynxjqu ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & ( rtDW
. etatrxd5ju ) , sizeof ( rtDW . etatrxd5ju ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) & ( rtDW
. agukinkt3v ) , sizeof ( rtDW . agukinkt3v ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & ( rtDW
. fy4szg1x5i ) , sizeof ( rtDW . fy4szg1x5i ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & ( rtDW
. l4ppeudfek ) , sizeof ( rtDW . l4ppeudfek ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) & ( rtDW
. h0chx3glnf ) , sizeof ( rtDW . h0chx3glnf ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & ( rtDW
. cg3pqhuaqw ) , sizeof ( rtDW . cg3pqhuaqw ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) & ( rtDW
. hrv12n540b ) , sizeof ( rtDW . hrv12n540b ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) & ( rtDW
. kedw3dybgq ) , sizeof ( rtDW . kedw3dybgq ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & ( rtDW
. ktsj2nkchd ) , sizeof ( rtDW . ktsj2nkchd ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) & ( rtDW
. oy300njhw2 ) , sizeof ( rtDW . oy300njhw2 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * ) & ( rtDW
. ie2l444zba ) , sizeof ( rtDW . ie2l444zba ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) & ( rtDW
. fr2fpc1qxz ) , sizeof ( rtDW . fr2fpc1qxz ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * ) & ( rtDW
. iiyniqtsbl ) , sizeof ( rtDW . iiyniqtsbl ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * ) & ( rtDW
. pqowklbvyf ) , sizeof ( rtDW . pqowklbvyf ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * ) & ( rtDW
. j2jiqbkm41 ) , sizeof ( rtDW . j2jiqbkm41 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * ) & ( rtDW
. kz1ulbsboy ) , sizeof ( rtDW . kz1ulbsboy ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * ) & ( rtDW
. onfzjh24jl ) , sizeof ( rtDW . onfzjh24jl ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void * ) & ( rtDW
. gefwlenpf3 ) , sizeof ( rtDW . gefwlenpf3 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void * ) & ( rtDW
. dwirzopvhn ) , sizeof ( rtDW . dwirzopvhn ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void * ) & ( rtDW
. lkiqlh4rt5 ) , sizeof ( rtDW . lkiqlh4rt5 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void * ) & ( rtDW
. h21bdoedky ) , sizeof ( rtDW . h21bdoedky ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void * ) & ( rtDW
. f2sqih31gq ) , sizeof ( rtDW . f2sqih31gq ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const void * ) & ( rtDW
. ewnwvk30kq ) , sizeof ( rtDW . ewnwvk30kq ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void * ) & ( rtDW
. nevgeggqm5 ) , sizeof ( rtDW . nevgeggqm5 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void * ) & ( rtDW
. lq4e3tdaf4 ) , sizeof ( rtDW . lq4e3tdaf4 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const void * ) & ( rtDW
. g5vbnuh5ul ) , sizeof ( rtDW . g5vbnuh5ul ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const void * ) & ( rtDW
. bgxy0tbgby ) , sizeof ( rtDW . bgxy0tbgby ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void * ) & ( rtDW
. iinforci3b ) , sizeof ( rtDW . iinforci3b ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const void * ) & ( rtDW
. onpp1osnf1 ) , sizeof ( rtDW . onpp1osnf1 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const void * ) & ( rtDW
. knywr3cygt ) , sizeof ( rtDW . knywr3cygt ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const void * ) & ( rtDW
. bxxehqrfhk ) , sizeof ( rtDW . bxxehqrfhk ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const void * ) & ( rtDW
. lybiwzq15a ) , sizeof ( rtDW . lybiwzq15a ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const void * ) & ( rtDW
. hhpqcwloh0 ) , sizeof ( rtDW . hhpqcwloh0 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const void * ) & ( rtDW
. hxdxaozqh1 ) , sizeof ( rtDW . hxdxaozqh1 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 44 , ( const void * ) & ( rtDW
. fknte5kkos ) , sizeof ( rtDW . fknte5kkos ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 45 , ( const void * ) & ( rtDW
. mnfw2imvdw ) , sizeof ( rtDW . mnfw2imvdw ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const void * ) & ( rtDW
. felqedgyx1 ) , sizeof ( rtDW . felqedgyx1 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 47 , ( const void * ) & ( rtDW
. knvjdfedfb ) , sizeof ( rtDW . knvjdfedfb ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 48 , ( const void * ) & ( rtDW
. apjnubwssp ) , sizeof ( rtDW . apjnubwssp ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const void * ) & ( rtDW
. ptu3l2ehpk ) , sizeof ( rtDW . ptu3l2ehpk ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 50 , ( const void * ) & ( rtDW
. ebmg2d0djd ) , sizeof ( rtDW . ebmg2d0djd ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 51 , ( const void * ) & ( rtDW
. nmrn1j5ohh ) , sizeof ( rtDW . nmrn1j5ohh ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 52 , ( const void * ) & ( rtDW
. hl5ux0u3e5 ) , sizeof ( rtDW . hl5ux0u3e5 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 53 , ( const void * ) & ( rtDW
. kywikzuq0z ) , sizeof ( rtDW . kywikzuq0z ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 54 , ( const void * ) & ( rtDW
. op4s5nmfn0 ) , sizeof ( rtDW . op4s5nmfn0 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const void * ) & ( rtDW
. p3qcu4kyf3 ) , sizeof ( rtDW . p3qcu4kyf3 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 56 , ( const void * ) & ( rtDW
. d1rjlxqbuf ) , sizeof ( rtDW . d1rjlxqbuf ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 57 , ( const void * ) & ( rtDW
. g130c2x32o ) , sizeof ( rtDW . g130c2x32o ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 58 , ( const void * ) & ( rtDW
. dssqgth4gt ) , sizeof ( rtDW . dssqgth4gt ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 59 , ( const void * ) & ( rtDW
. erz4us2nfk ) , sizeof ( rtDW . erz4us2nfk ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 60 , ( const void * ) & ( rtDW
. fyjcynthf1 ) , sizeof ( rtDW . fyjcynthf1 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 61 , ( const void * ) & ( rtDW
. acn3fu00s1 ) , sizeof ( rtDW . acn3fu00s1 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 62 , ( const void * ) & ( rtDW
. itcccsf0ct ) , sizeof ( rtDW . itcccsf0ct ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 63 , ( const void * ) & ( rtDW
. lipbrcbfzk ) , sizeof ( rtDW . lipbrcbfzk ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 64 , ( const void * ) & ( rtDW
. md1fsm3br3 ) , sizeof ( rtDW . md1fsm3br3 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 65 , ( const void * ) & ( rtDW
. be05daasmg ) , sizeof ( rtDW . be05daasmg ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const void * ) & ( rtDW
. nq0rryljq1 ) , sizeof ( rtDW . nq0rryljq1 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 67 , ( const void * ) & ( rtDW
. ddr4l0n5i3 ) , sizeof ( rtDW . ddr4l0n5i3 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 68 , ( const void * ) & ( rtDW
. by2jasgm4o ) , sizeof ( rtDW . by2jasgm4o ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 69 , ( const void * ) & ( rtDW
. d2orna0nbx ) , sizeof ( rtDW . d2orna0nbx ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 70 , ( const void * ) & ( rtDW
. ltawfyrv1z ) , sizeof ( rtDW . ltawfyrv1z ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 71 , ( const void * ) & ( rtDW
. k3eoy0kyly ) , sizeof ( rtDW . k3eoy0kyly ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 72 , ( const void * ) & ( rtDW
. fwx2o3iy55 ) , sizeof ( rtDW . fwx2o3iy55 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 73 , ( const void * ) & ( rtDW
. payo3ow3lc ) , sizeof ( rtDW . payo3ow3lc ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 74 , ( const void * ) & ( rtDW
. dtoycisapu ) , sizeof ( rtDW . dtoycisapu ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 75 , ( const void * ) & ( rtDW
. drfz5czaqt ) , sizeof ( rtDW . drfz5czaqt ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 76 , ( const void * ) & ( rtDW
. bghenoofp3 ) , sizeof ( rtDW . bghenoofp3 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 77 , ( const void * ) & ( rtDW
. efelnchztt ) , sizeof ( rtDW . efelnchztt ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 78 , ( const void * ) & ( rtDW
. mmlvnrnkd5 ) , sizeof ( rtDW . mmlvnrnkd5 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 79 , ( const void * ) & ( rtDW
. pyico4tskx ) , sizeof ( rtDW . pyico4tskx ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 80 , ( const void * ) & ( rtDW
. d1chukr5qk ) , sizeof ( rtDW . d1chukr5qk ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 81 , ( const void * ) & ( rtDW
. a114jaowoa ) , sizeof ( rtDW . a114jaowoa ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 82 , ( const void * ) & ( rtDW
. fmnuqfwd2y ) , sizeof ( rtDW . fmnuqfwd2y ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 83 , ( const void * ) & ( rtDW
. kxbke0l40t ) , sizeof ( rtDW . kxbke0l40t ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 84 , ( const void * ) & ( rtDW
. cn3pwtmbrz ) , sizeof ( rtDW . cn3pwtmbrz ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 85 , ( const void * ) & ( rtDW
. afbj2p43u0 ) , sizeof ( rtDW . afbj2p43u0 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 86 , ( const void * ) & ( rtDW
. orlfhdhe1j ) , sizeof ( rtDW . orlfhdhe1j ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 87 , ( const void * ) & ( rtDW
. gid5guyvyn ) , sizeof ( rtDW . gid5guyvyn ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 88 , ( const void * ) & ( rtDW
. cicwclszwg ) , sizeof ( rtDW . cicwclszwg ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 89 , ( const void * ) & ( rtDW
. mrk1ckqhf2 ) , sizeof ( rtDW . mrk1ckqhf2 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 90 , ( const void * ) & ( rtDW
. bozrvqxxg2 ) , sizeof ( rtDW . bozrvqxxg2 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 91 , ( const void * ) & ( rtDW
. ifrmin0vwy ) , sizeof ( rtDW . ifrmin0vwy ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 92 , ( const void * ) & ( rtDW
. mh4tfkaouk ) , sizeof ( rtDW . mh4tfkaouk ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 93 , ( const void * ) & ( rtDW
. jek4mbk1vx ) , sizeof ( rtDW . jek4mbk1vx ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 94 , ( const void * ) & ( rtDW
. olk2wajvjn ) , sizeof ( rtDW . olk2wajvjn ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 95 , ( const void * ) & ( rtDW
. dj4sdqer2s ) , sizeof ( rtDW . dj4sdqer2s ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 96 , ( const void * ) & ( rtDW
. cnggkfwmtg ) , sizeof ( rtDW . cnggkfwmtg ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 97 , ( const void * ) & ( rtDW
. gywplgfgo2 ) , sizeof ( rtDW . gywplgfgo2 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 98 , ( const void * ) & ( rtDW
. ejpzs4ilay ) , sizeof ( rtDW . ejpzs4ilay ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 99 , ( const void * ) & ( rtDW
. can5ffl1pr ) , sizeof ( rtDW . can5ffl1pr ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 100 , ( const void * ) & (
rtDW . hxzrjsvd30 ) , sizeof ( rtDW . hxzrjsvd30 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 101 , ( const void * ) & (
rtDW . e3iqk0pnev ) , sizeof ( rtDW . e3iqk0pnev ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 102 , ( const void * ) & (
rtDW . dt01p1zmsc ) , sizeof ( rtDW . dt01p1zmsc ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 103 , ( const void * ) & (
rtDW . gjocb1fbkw ) , sizeof ( rtDW . gjocb1fbkw ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 104 , ( const void * ) & (
rtDW . b3cbqcpv1h ) , sizeof ( rtDW . b3cbqcpv1h ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 105 , ( const void * ) & (
rtDW . gzdase1ucw ) , sizeof ( rtDW . gzdase1ucw ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 106 , ( const void * ) & (
rtDW . l2x1n13zrt ) , sizeof ( rtDW . l2x1n13zrt ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 107 , ( const void * ) & (
rtDW . nsylsr0oax ) , sizeof ( rtDW . nsylsr0oax ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 108 , ( const void * ) & (
rtDW . nqbfiajmmx ) , sizeof ( rtDW . nqbfiajmmx ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 109 , ( const void * ) & (
rtDW . dxzhrvzosm ) , sizeof ( rtDW . dxzhrvzosm ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 110 , ( const void * ) & (
rtDW . f3x1iuxbls ) , sizeof ( rtDW . f3x1iuxbls ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 111 , ( const void * ) & (
rtDW . ew3v0ngbur ) , sizeof ( rtDW . ew3v0ngbur ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 112 , ( const void * ) & (
rtDW . cauppzu2z3 ) , sizeof ( rtDW . cauppzu2z3 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 113 , ( const void * ) & (
rtDW . lbnvio5iis ) , sizeof ( rtDW . lbnvio5iis ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 114 , ( const void * ) & (
rtDW . l0y0sibjp0 ) , sizeof ( rtDW . l0y0sibjp0 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 115 , ( const void * ) & (
rtDW . kd2av241hc ) , sizeof ( rtDW . kd2av241hc ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 116 , ( const void * ) & (
rtDW . lznod44who ) , sizeof ( rtDW . lznod44who ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 117 , ( const void * ) & (
rtDW . d5s5scu00d ) , sizeof ( rtDW . d5s5scu00d ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 118 , ( const void * ) & (
rtDW . ne2n02ii3u ) , sizeof ( rtDW . ne2n02ii3u ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 119 , ( const void * ) & (
rtDW . fzyukbgm1g ) , sizeof ( rtDW . fzyukbgm1g ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 120 , ( const void * ) & (
rtDW . eism1mkbhp ) , sizeof ( rtDW . eism1mkbhp ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 121 , ( const void * ) & (
rtDW . cy0fp04shv ) , sizeof ( rtDW . cy0fp04shv ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 122 , ( const void * ) & (
rtDW . ibavnqjmbw ) , sizeof ( rtDW . ibavnqjmbw ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 123 , ( const void * ) & (
rtDW . lekr1dkbkg ) , sizeof ( rtDW . lekr1dkbkg ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 124 , ( const void * ) & (
rtDW . dbvpgm1eii ) , sizeof ( rtDW . dbvpgm1eii ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 125 , ( const void * ) & (
rtDW . iysyxlklep ) , sizeof ( rtDW . iysyxlklep ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 126 , ( const void * ) & (
rtDW . hrfauuwygv ) , sizeof ( rtDW . hrfauuwygv ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 127 , ( const void * ) & (
rtDW . dxyyfd5j1h ) , sizeof ( rtDW . dxyyfd5j1h ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 128 , ( const void * ) & (
rtDW . cbvbkjurbn ) , sizeof ( rtDW . cbvbkjurbn ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 129 , ( const void * ) & (
rtDW . bv303cgicw ) , sizeof ( rtDW . bv303cgicw ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 130 , ( const void * ) & (
rtDW . grbvdxyxvz ) , sizeof ( rtDW . grbvdxyxvz ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 131 , ( const void * ) & (
rtDW . hlwi0mkbiu ) , sizeof ( rtDW . hlwi0mkbiu ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 132 , ( const void * ) & (
rtDW . jirkxxvdzn ) , sizeof ( rtDW . jirkxxvdzn ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 133 , ( const void * ) & (
rtDW . ibhybetp43 ) , sizeof ( rtDW . ibhybetp43 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 134 , ( const void * ) & (
rtDW . gubxapj1vp ) , sizeof ( rtDW . gubxapj1vp ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 135 , ( const void * ) & (
rtDW . mfhxczbxqh ) , sizeof ( rtDW . mfhxczbxqh ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 136 , ( const void * ) & (
rtDW . ksgrrkn4aj ) , sizeof ( rtDW . ksgrrkn4aj ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 137 , ( const void * ) & (
rtDW . pbrsinov1u ) , sizeof ( rtDW . pbrsinov1u ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 138 , ( const void * ) & (
rtDW . ptwmh3h1zm ) , sizeof ( rtDW . ptwmh3h1zm ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 139 , ( const void * ) & (
rtDW . jezsbtdj5i ) , sizeof ( rtDW . jezsbtdj5i ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 140 , ( const void * ) & (
rtDW . kovsesfevn ) , sizeof ( rtDW . kovsesfevn ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 141 , ( const void * ) & (
rtDW . jqygi5hjmr ) , sizeof ( rtDW . jqygi5hjmr ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 142 , ( const void * ) & (
rtDW . fka3wa5y1h ) , sizeof ( rtDW . fka3wa5y1h ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 143 , ( const void * ) & (
rtDW . bo1nef12b5 ) , sizeof ( rtDW . bo1nef12b5 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 144 , ( const void * ) & (
rtDW . efbu502mmx ) , sizeof ( rtDW . efbu502mmx ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 145 , ( const void * ) & (
rtDW . d32hdtpoan ) , sizeof ( rtDW . d32hdtpoan ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 146 , ( const void * ) & (
rtDW . bzfig0ujyt ) , sizeof ( rtDW . bzfig0ujyt ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 147 , ( const void * ) & (
rtDW . pl4kkbhqoo ) , sizeof ( rtDW . pl4kkbhqoo ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 148 , ( const void * ) & (
rtDW . pzrjkskwao ) , sizeof ( rtDW . pzrjkskwao ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 149 , ( const void * ) & (
rtDW . gdy3zxhcjf ) , sizeof ( rtDW . gdy3zxhcjf ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 150 , ( const void * ) & (
rtDW . npr5ivvwap ) , sizeof ( rtDW . npr5ivvwap ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 151 , ( const void * ) & (
rtDW . no5lpmbbav ) , sizeof ( rtDW . no5lpmbbav ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 152 , ( const void * ) & (
rtDW . fjvix5f1rz ) , sizeof ( rtDW . fjvix5f1rz ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 153 , ( const void * ) & (
rtDW . ajomfxtqpu ) , sizeof ( rtDW . ajomfxtqpu ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 154 , ( const void * ) & (
rtDW . ebgkmc055j ) , sizeof ( rtDW . ebgkmc055j ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 155 , ( const void * ) & (
rtDW . jt5c1vowbk ) , sizeof ( rtDW . jt5c1vowbk ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 156 , ( const void * ) & (
rtDW . etlbk5pudp ) , sizeof ( rtDW . etlbk5pudp ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 157 , ( const void * ) & (
rtDW . lwhsegjgjj ) , sizeof ( rtDW . lwhsegjgjj ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 158 , ( const void * ) & (
rtDW . jdaeny0wrl ) , sizeof ( rtDW . jdaeny0wrl ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 159 , ( const void * ) & (
rtDW . hcj4r1mhfj ) , sizeof ( rtDW . hcj4r1mhfj ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 160 , ( const void * ) & (
rtDW . jixe3naiuk ) , sizeof ( rtDW . jixe3naiuk ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 161 , ( const void * ) & (
rtDW . i5csyk2orb ) , sizeof ( rtDW . i5csyk2orb ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 162 , ( const void * ) & (
rtDW . g4ci4vpjq5 ) , sizeof ( rtDW . g4ci4vpjq5 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 163 , ( const void * ) & (
rtDW . ilvem33lp3 ) , sizeof ( rtDW . ilvem33lp3 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 164 , ( const void * ) & (
rtDW . f5phmbs2tn ) , sizeof ( rtDW . f5phmbs2tn ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 165 , ( const void * ) & (
rtDW . jkkslszvco ) , sizeof ( rtDW . jkkslszvco ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 166 , ( const void * ) & (
rtDW . g32aqgov41 ) , sizeof ( rtDW . g32aqgov41 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 167 , ( const void * ) & (
rtDW . cqa40zcbre ) , sizeof ( rtDW . cqa40zcbre ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 168 , ( const void * ) & (
rtDW . fscf4o21tu ) , sizeof ( rtDW . fscf4o21tu ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 169 , ( const void * ) & (
rtDW . ijffkakodk ) , sizeof ( rtDW . ijffkakodk ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 170 , ( const void * ) & (
rtDW . lic05r3aek ) , sizeof ( rtDW . lic05r3aek ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 171 , ( const void * ) & (
rtDW . onbuk53hje ) , sizeof ( rtDW . onbuk53hje ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 172 , ( const void * ) & (
rtDW . e5hj5xeuwo ) , sizeof ( rtDW . e5hj5xeuwo ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 173 , ( const void * ) & (
rtDW . oznafgtnf4 ) , sizeof ( rtDW . oznafgtnf4 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 174 , ( const void * ) & (
rtDW . kziglxgcas ) , sizeof ( rtDW . kziglxgcas ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 175 , ( const void * ) & (
rtDW . dwguyo0lfa ) , sizeof ( rtDW . dwguyo0lfa ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 176 , ( const void * ) & (
rtDW . gvlplkt5zq ) , sizeof ( rtDW . gvlplkt5zq ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 177 , ( const void * ) & (
rtDW . kooonezqli ) , sizeof ( rtDW . kooonezqli ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 178 , ( const void * ) & (
rtDW . evhyqcpton ) , sizeof ( rtDW . evhyqcpton ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 179 , ( const void * ) & (
rtDW . nab3mylhfe ) , sizeof ( rtDW . nab3mylhfe ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 180 , ( const void * ) & (
rtDW . i5342xzqyj ) , sizeof ( rtDW . i5342xzqyj ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 181 , ( const void * ) & (
rtDW . mxv2hnd5hy ) , sizeof ( rtDW . mxv2hnd5hy ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 182 , ( const void * ) & (
rtDW . cyzymhco2p ) , sizeof ( rtDW . cyzymhco2p ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 183 , ( const void * ) & (
rtDW . cbx2viebna ) , sizeof ( rtDW . cbx2viebna ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 184 , ( const void * ) & (
rtDW . crhnfogbxa ) , sizeof ( rtDW . crhnfogbxa ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 185 , ( const void * ) & (
rtDW . ksofld5bxu ) , sizeof ( rtDW . ksofld5bxu ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 186 , ( const void * ) & (
rtDW . nalp0vjrpv ) , sizeof ( rtDW . nalp0vjrpv ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 187 , ( const void * ) & (
rtDW . gjcgz4hrbp ) , sizeof ( rtDW . gjcgz4hrbp ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 188 , ( const void * ) & (
rtDW . jzpbje250b ) , sizeof ( rtDW . jzpbje250b ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 189 , ( const void * ) & (
rtDW . adcrsey4fl ) , sizeof ( rtDW . adcrsey4fl ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 190 , ( const void * ) & (
rtDW . pym1a1c4u4 ) , sizeof ( rtDW . pym1a1c4u4 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 191 , ( const void * ) & (
rtDW . jpzkj2zafj ) , sizeof ( rtDW . jpzkj2zafj ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 192 , ( const void * ) & (
rtDW . axjl1de1kg ) , sizeof ( rtDW . axjl1de1kg ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 193 , ( const void * ) & (
rtDW . pn4ledpxlb ) , sizeof ( rtDW . pn4ledpxlb ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 194 , ( const void * ) & (
rtDW . buhdzc4orn ) , sizeof ( rtDW . buhdzc4orn ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 195 , ( const void * ) & (
rtDW . a2szru3bcs ) , sizeof ( rtDW . a2szru3bcs ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 196 , ( const void * ) & (
rtDW . jp0ljiil3a ) , sizeof ( rtDW . jp0ljiil3a ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 197 , ( const void * ) & (
rtDW . ii3syi53bn ) , sizeof ( rtDW . ii3syi53bn ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 198 , ( const void * ) & (
rtDW . daljbq5gtz ) , sizeof ( rtDW . daljbq5gtz ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 199 , ( const void * ) & (
rtDW . l1l2gip32s ) , sizeof ( rtDW . l1l2gip32s ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 200 , ( const void * ) & (
rtDW . lynamxwk0r ) , sizeof ( rtDW . lynamxwk0r ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 201 , ( const void * ) & (
rtDW . nt5ueu32fc ) , sizeof ( rtDW . nt5ueu32fc ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 202 , ( const void * ) & (
rtDW . cfvgbkovvu ) , sizeof ( rtDW . cfvgbkovvu ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 203 , ( const void * ) & (
rtDW . anhm4dpp2l ) , sizeof ( rtDW . anhm4dpp2l ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 204 , ( const void * ) & (
rtDW . iw455stvt1 ) , sizeof ( rtDW . iw455stvt1 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 205 , ( const void * ) & (
rtDW . l4pkohbzxl ) , sizeof ( rtDW . l4pkohbzxl ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 206 , ( const void * ) & (
rtDW . ixmz3u3uqw ) , sizeof ( rtDW . ixmz3u3uqw ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 207 , ( const void * ) & (
rtDW . ae5y3r3gcn ) , sizeof ( rtDW . ae5y3r3gcn ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 208 , ( const void * ) & (
rtDW . ail2sagdmg ) , sizeof ( rtDW . ail2sagdmg ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 209 , ( const void * ) & (
rtDW . fshwisxlge ) , sizeof ( rtDW . fshwisxlge ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 210 , ( const void * ) & (
rtDW . mnnmbnljys ) , sizeof ( rtDW . mnnmbnljys ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 211 , ( const void * ) & (
rtDW . kielu0c1kf ) , sizeof ( rtDW . kielu0c1kf ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 212 , ( const void * ) & (
rtDW . cg1cpca1ek ) , sizeof ( rtDW . cg1cpca1ek ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 213 , ( const void * ) & (
rtDW . h2raxdlt4g ) , sizeof ( rtDW . h2raxdlt4g ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 214 , ( const void * ) & (
rtDW . dkewog43cc ) , sizeof ( rtDW . dkewog43cc ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 215 , ( const void * ) & (
rtDW . hvrukley13 ) , sizeof ( rtDW . hvrukley13 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 216 , ( const void * ) & (
rtDW . bwa1fip2ky ) , sizeof ( rtDW . bwa1fip2ky ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 217 , ( const void * ) & (
rtDW . j1mia3rzbj ) , sizeof ( rtDW . j1mia3rzbj ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 218 , ( const void * ) & (
rtDW . onvtpfrqwn . epzfbulv32 ) , sizeof ( rtDW . onvtpfrqwn . epzfbulv32 )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 219 , ( const void * ) & (
rtDW . onvtpfrqwn . ikkalmwo4a ) , sizeof ( rtDW . onvtpfrqwn . ikkalmwo4a )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 220 , ( const void * ) & (
rtDW . f2z2t5yyw1 . p2xendpa3t ) , sizeof ( rtDW . f2z2t5yyw1 . p2xendpa3t )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 221 , ( const void * ) & (
rtDW . f2z2t5yyw1 . jjqjeeukne ) , sizeof ( rtDW . f2z2t5yyw1 . jjqjeeukne )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 222 , ( const void * ) & (
rtDW . c3nx5ahmxh . nzkcuadowp ) , sizeof ( rtDW . c3nx5ahmxh . nzkcuadowp )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 223 , ( const void * ) & (
rtDW . c3nx5ahmxh . ncgtkhktc1 ) , sizeof ( rtDW . c3nx5ahmxh . ncgtkhktc1 )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 224 , ( const void * ) & (
rtDW . kq23drdvrd . n5askzs1gj ) , sizeof ( rtDW . kq23drdvrd . n5askzs1gj )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 225 , ( const void * ) & (
rtDW . kq23drdvrd . eihhgub2fg ) , sizeof ( rtDW . kq23drdvrd . eihhgub2fg )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 226 , ( const void * ) & (
rtDW . nbnysw2wtu . oppfisosoh ) , sizeof ( rtDW . nbnysw2wtu . oppfisosoh )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 227 , ( const void * ) & (
rtDW . nbnysw2wtu . kh3r3fv0yw ) , sizeof ( rtDW . nbnysw2wtu . kh3r3fv0yw )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 228 , ( const void * ) & (
rtDW . nbnysw2wtu . o33bpxl4on ) , sizeof ( rtDW . nbnysw2wtu . o33bpxl4on )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 229 , ( const void * ) & (
rtDW . nbnysw2wtu . mjyyj4engg . cfq0b3accy ) , sizeof ( rtDW . nbnysw2wtu .
mjyyj4engg . cfq0b3accy ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 ,
230 , ( const void * ) & ( rtDW . i02x2fl5fr . g1l24xvjvk ) , sizeof ( rtDW .
i02x2fl5fr . g1l24xvjvk ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 ,
231 , ( const void * ) & ( rtDW . i02x2fl5fr . gkzhayocy3 ) , sizeof ( rtDW .
i02x2fl5fr . gkzhayocy3 ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 ,
232 , ( const void * ) & ( rtDW . i02x2fl5fr . ik1h4vnwti ) , sizeof ( rtDW .
i02x2fl5fr . ik1h4vnwti ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 ,
233 , ( const void * ) & ( rtDW . i02x2fl5fr . fn2ws0qfrh0 . cfq0b3accy ) ,
sizeof ( rtDW . i02x2fl5fr . fn2ws0qfrh0 . cfq0b3accy ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 234 , ( const void * ) & (
rtDW . pw2pn5yxj3 . e1ojz4whx1 ) , sizeof ( rtDW . pw2pn5yxj3 . e1ojz4whx1 )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 235 , ( const void * ) & (
rtDW . pw2pn5yxj3 . bb4awxjtrl ) , sizeof ( rtDW . pw2pn5yxj3 . bb4awxjtrl )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 236 , ( const void * ) & (
rtDW . pw2pn5yxj3 . gpjpxfvvnp ) , sizeof ( rtDW . pw2pn5yxj3 . gpjpxfvvnp )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 237 , ( const void * ) & (
rtDW . pw2pn5yxj3 . avztlaubnav . epzfbulv32 ) , sizeof ( rtDW . pw2pn5yxj3 .
avztlaubnav . epzfbulv32 ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 ,
238 , ( const void * ) & ( rtDW . pw2pn5yxj3 . avztlaubnav . ikkalmwo4a ) ,
sizeof ( rtDW . pw2pn5yxj3 . avztlaubnav . ikkalmwo4a ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 239 , ( const void * ) & (
rtDW . pw2pn5yxj3 . dhyklihgewe . p2xendpa3t ) , sizeof ( rtDW . pw2pn5yxj3 .
dhyklihgewe . p2xendpa3t ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 ,
240 , ( const void * ) & ( rtDW . pw2pn5yxj3 . dhyklihgewe . jjqjeeukne ) ,
sizeof ( rtDW . pw2pn5yxj3 . dhyklihgewe . jjqjeeukne ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 241 , ( const void * ) & (
rtDW . pw2pn5yxj3 . iyuu340oslz . nzkcuadowp ) , sizeof ( rtDW . pw2pn5yxj3 .
iyuu340oslz . nzkcuadowp ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 ,
242 , ( const void * ) & ( rtDW . pw2pn5yxj3 . iyuu340oslz . ncgtkhktc1 ) ,
sizeof ( rtDW . pw2pn5yxj3 . iyuu340oslz . ncgtkhktc1 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 243 , ( const void * ) & (
rtDW . pw2pn5yxj3 . dzsm3cj0kly . n5askzs1gj ) , sizeof ( rtDW . pw2pn5yxj3 .
dzsm3cj0kly . n5askzs1gj ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 ,
244 , ( const void * ) & ( rtDW . pw2pn5yxj3 . dzsm3cj0kly . eihhgub2fg ) ,
sizeof ( rtDW . pw2pn5yxj3 . dzsm3cj0kly . eihhgub2fg ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 245 , ( const void * ) & (
rtDW . knjlllhond . oppfisosoh ) , sizeof ( rtDW . knjlllhond . oppfisosoh )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 246 , ( const void * ) & (
rtDW . knjlllhond . kh3r3fv0yw ) , sizeof ( rtDW . knjlllhond . kh3r3fv0yw )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 247 , ( const void * ) & (
rtDW . knjlllhond . o33bpxl4on ) , sizeof ( rtDW . knjlllhond . o33bpxl4on )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 248 , ( const void * ) & (
rtDW . knjlllhond . mjyyj4engg . cfq0b3accy ) , sizeof ( rtDW . knjlllhond .
mjyyj4engg . cfq0b3accy ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 ,
249 , ( const void * ) & ( rtDW . hga0x4lkqb . g1l24xvjvk ) , sizeof ( rtDW .
hga0x4lkqb . g1l24xvjvk ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 ,
250 , ( const void * ) & ( rtDW . hga0x4lkqb . gkzhayocy3 ) , sizeof ( rtDW .
hga0x4lkqb . gkzhayocy3 ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 ,
251 , ( const void * ) & ( rtDW . hga0x4lkqb . ik1h4vnwti ) , sizeof ( rtDW .
hga0x4lkqb . ik1h4vnwti ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 ,
252 , ( const void * ) & ( rtDW . hga0x4lkqb . fn2ws0qfrh0 . cfq0b3accy ) ,
sizeof ( rtDW . hga0x4lkqb . fn2ws0qfrh0 . cfq0b3accy ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 253 , ( const void * ) & (
rtDW . f1rxuufunp . e1ojz4whx1 ) , sizeof ( rtDW . f1rxuufunp . e1ojz4whx1 )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 254 , ( const void * ) & (
rtDW . f1rxuufunp . bb4awxjtrl ) , sizeof ( rtDW . f1rxuufunp . bb4awxjtrl )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 255 , ( const void * ) & (
rtDW . f1rxuufunp . gpjpxfvvnp ) , sizeof ( rtDW . f1rxuufunp . gpjpxfvvnp )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 256 , ( const void * ) & (
rtDW . f1rxuufunp . avztlaubnav . epzfbulv32 ) , sizeof ( rtDW . f1rxuufunp .
avztlaubnav . epzfbulv32 ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 ,
257 , ( const void * ) & ( rtDW . f1rxuufunp . avztlaubnav . ikkalmwo4a ) ,
sizeof ( rtDW . f1rxuufunp . avztlaubnav . ikkalmwo4a ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 258 , ( const void * ) & (
rtDW . f1rxuufunp . dhyklihgewe . p2xendpa3t ) , sizeof ( rtDW . f1rxuufunp .
dhyklihgewe . p2xendpa3t ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 ,
259 , ( const void * ) & ( rtDW . f1rxuufunp . dhyklihgewe . jjqjeeukne ) ,
sizeof ( rtDW . f1rxuufunp . dhyklihgewe . jjqjeeukne ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 260 , ( const void * ) & (
rtDW . f1rxuufunp . iyuu340oslz . nzkcuadowp ) , sizeof ( rtDW . f1rxuufunp .
iyuu340oslz . nzkcuadowp ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 ,
261 , ( const void * ) & ( rtDW . f1rxuufunp . iyuu340oslz . ncgtkhktc1 ) ,
sizeof ( rtDW . f1rxuufunp . iyuu340oslz . ncgtkhktc1 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 262 , ( const void * ) & (
rtDW . f1rxuufunp . dzsm3cj0kly . n5askzs1gj ) , sizeof ( rtDW . f1rxuufunp .
dzsm3cj0kly . n5askzs1gj ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 ,
263 , ( const void * ) & ( rtDW . f1rxuufunp . dzsm3cj0kly . eihhgub2fg ) ,
sizeof ( rtDW . f1rxuufunp . dzsm3cj0kly . eihhgub2fg ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 264 , ( const void * ) & (
rtDW . gr5ouy33uc . oppfisosoh ) , sizeof ( rtDW . gr5ouy33uc . oppfisosoh )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 265 , ( const void * ) & (
rtDW . gr5ouy33uc . kh3r3fv0yw ) , sizeof ( rtDW . gr5ouy33uc . kh3r3fv0yw )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 266 , ( const void * ) & (
rtDW . gr5ouy33uc . o33bpxl4on ) , sizeof ( rtDW . gr5ouy33uc . o33bpxl4on )
) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 267 , ( const void * ) & (
rtDW . gr5ouy33uc . mjyyj4engg . cfq0b3accy ) , sizeof ( rtDW . gr5ouy33uc .
mjyyj4engg . cfq0b3accy ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 ,
268 , ( const void * ) & ( rtDW . o021qo2kqg . g1l24xvjvk ) , sizeof ( rtDW .
o021qo2kqg . g1l24xvjvk ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 ,
269 , ( const void * ) & ( rtDW . o021qo2kqg . gkzhayocy3 ) , sizeof ( rtDW .
o021qo2kqg . gkzhayocy3 ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 ,
270 , ( const void * ) & ( rtDW . o021qo2kqg . ik1h4vnwti ) , sizeof ( rtDW .
o021qo2kqg . ik1h4vnwti ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 ,
271 , ( const void * ) & ( rtDW . o021qo2kqg . fn2ws0qfrh0 . cfq0b3accy ) ,
sizeof ( rtDW . o021qo2kqg . fn2ws0qfrh0 . cfq0b3accy ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 272 , ( const void * ) & (
rtDW . ctbmhlk4scc . e1ojz4whx1 ) , sizeof ( rtDW . ctbmhlk4scc . e1ojz4whx1
) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 273 , ( const void * ) &
( rtDW . ctbmhlk4scc . bb4awxjtrl ) , sizeof ( rtDW . ctbmhlk4scc .
bb4awxjtrl ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 274 , ( const
void * ) & ( rtDW . ctbmhlk4scc . gpjpxfvvnp ) , sizeof ( rtDW . ctbmhlk4scc
. gpjpxfvvnp ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 275 , (
const void * ) & ( rtDW . ctbmhlk4scc . avztlaubnav . epzfbulv32 ) , sizeof (
rtDW . ctbmhlk4scc . avztlaubnav . epzfbulv32 ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 276 , ( const void * ) & (
rtDW . ctbmhlk4scc . avztlaubnav . ikkalmwo4a ) , sizeof ( rtDW . ctbmhlk4scc
. avztlaubnav . ikkalmwo4a ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0
, 277 , ( const void * ) & ( rtDW . ctbmhlk4scc . dhyklihgewe . p2xendpa3t )
, sizeof ( rtDW . ctbmhlk4scc . dhyklihgewe . p2xendpa3t ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 278 , ( const void * ) & (
rtDW . ctbmhlk4scc . dhyklihgewe . jjqjeeukne ) , sizeof ( rtDW . ctbmhlk4scc
. dhyklihgewe . jjqjeeukne ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0
, 279 , ( const void * ) & ( rtDW . ctbmhlk4scc . iyuu340oslz . nzkcuadowp )
, sizeof ( rtDW . ctbmhlk4scc . iyuu340oslz . nzkcuadowp ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 280 , ( const void * ) & (
rtDW . ctbmhlk4scc . iyuu340oslz . ncgtkhktc1 ) , sizeof ( rtDW . ctbmhlk4scc
. iyuu340oslz . ncgtkhktc1 ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0
, 281 , ( const void * ) & ( rtDW . ctbmhlk4scc . dzsm3cj0kly . n5askzs1gj )
, sizeof ( rtDW . ctbmhlk4scc . dzsm3cj0kly . n5askzs1gj ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 282 , ( const void * ) & (
rtDW . ctbmhlk4scc . dzsm3cj0kly . eihhgub2fg ) , sizeof ( rtDW . ctbmhlk4scc
. dzsm3cj0kly . eihhgub2fg ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0
, 283 , ( const void * ) & ( rtDW . biiojft2vbl . oppfisosoh ) , sizeof (
rtDW . biiojft2vbl . oppfisosoh ) ) ; mr_UNIFIER_cacheDataAsMxArray (
rtdwData , 0 , 284 , ( const void * ) & ( rtDW . biiojft2vbl . kh3r3fv0yw ) ,
sizeof ( rtDW . biiojft2vbl . kh3r3fv0yw ) ) ; mr_UNIFIER_cacheDataAsMxArray
( rtdwData , 0 , 285 , ( const void * ) & ( rtDW . biiojft2vbl . o33bpxl4on )
, sizeof ( rtDW . biiojft2vbl . o33bpxl4on ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 286 , ( const void * ) & (
rtDW . biiojft2vbl . mjyyj4engg . cfq0b3accy ) , sizeof ( rtDW . biiojft2vbl
. mjyyj4engg . cfq0b3accy ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0
, 287 , ( const void * ) & ( rtDW . cm0yj40hhfp . g1l24xvjvk ) , sizeof (
rtDW . cm0yj40hhfp . g1l24xvjvk ) ) ; mr_UNIFIER_cacheDataAsMxArray (
rtdwData , 0 , 288 , ( const void * ) & ( rtDW . cm0yj40hhfp . gkzhayocy3 ) ,
sizeof ( rtDW . cm0yj40hhfp . gkzhayocy3 ) ) ; mr_UNIFIER_cacheDataAsMxArray
( rtdwData , 0 , 289 , ( const void * ) & ( rtDW . cm0yj40hhfp . ik1h4vnwti )
, sizeof ( rtDW . cm0yj40hhfp . ik1h4vnwti ) ) ;
mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0 , 290 , ( const void * ) & (
rtDW . cm0yj40hhfp . fn2ws0qfrh0 . cfq0b3accy ) , sizeof ( rtDW . cm0yj40hhfp
. fn2ws0qfrh0 . cfq0b3accy ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0
, 291 , ( const void * ) & ( rtDW . lld2mvqphv . mn1t1xifkc ) , sizeof ( rtDW
. lld2mvqphv . mn1t1xifkc ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0
, 292 , ( const void * ) & ( rtDW . lld2mvqphv . pswhghvaxh ) , sizeof ( rtDW
. lld2mvqphv . pswhghvaxh ) ) ; mr_UNIFIER_cacheDataAsMxArray ( rtdwData , 0
, 293 , ( const void * ) & ( rtDW . cz2051lnszn . mn1t1xifkc ) , sizeof (
rtDW . cz2051lnszn . mn1t1xifkc ) ) ; mr_UNIFIER_cacheDataAsMxArray (
rtdwData , 0 , 294 , ( const void * ) & ( rtDW . cz2051lnszn . pswhghvaxh ) ,
sizeof ( rtDW . cz2051lnszn . pswhghvaxh ) ) ; for ( k0 = 0 ; k0 < 12 ; ++ k0
) { const mwIndex offset0 = k0 ; mr_UNIFIER_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 295 , offset0 , & ( rtDW . icuuav0qej [ k0 ] . i3lxxvdwzm ) ,
sizeof ( rtDW . icuuav0qej [ 0 ] . i3lxxvdwzm ) ) ;
mr_UNIFIER_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 296 , offset0 , & (
rtDW . icuuav0qej [ k0 ] . mv3vvw3b42 ) , sizeof ( rtDW . icuuav0qej [ 0 ] .
mv3vvw3b42 ) ) ; mr_UNIFIER_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 297
, offset0 , & ( rtDW . icuuav0qej [ k0 ] . acsdmeuss0 ) , sizeof ( rtDW .
icuuav0qej [ 0 ] . acsdmeuss0 ) ) ; } for ( k0 = 0 ; k0 < 12 ; ++ k0 ) {
const mwIndex offset0 = k0 ; mr_UNIFIER_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 298 , offset0 , & ( rtDW . l20xgpl0hh [ k0 ] . mk5iyqhcsl ) ,
sizeof ( rtDW . l20xgpl0hh [ 0 ] . mk5iyqhcsl ) ) ;
mr_UNIFIER_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 299 , offset0 , & (
rtDW . l20xgpl0hh [ k0 ] . f2w5jzpw5v ) , sizeof ( rtDW . l20xgpl0hh [ 0 ] .
f2w5jzpw5v ) ) ; mr_UNIFIER_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 300
, offset0 , & ( rtDW . l20xgpl0hh [ k0 ] . nlhryvabyo ) , sizeof ( rtDW .
l20xgpl0hh [ 0 ] . nlhryvabyo ) ) ; } for ( k0 = 0 ; k0 < 12 ; ++ k0 ) {
const mwIndex offset0 = k0 ; mr_UNIFIER_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 301 , offset0 , & ( rtDW . lokicy2luy [ k0 ] . e4gu33l0io ) ,
sizeof ( rtDW . lokicy2luy [ 0 ] . e4gu33l0io ) ) ;
mr_UNIFIER_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 302 , offset0 , & (
rtDW . lokicy2luy [ k0 ] . caw3xhb43b ) , sizeof ( rtDW . lokicy2luy [ 0 ] .
caw3xhb43b ) ) ; mr_UNIFIER_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 303
, offset0 , & ( rtDW . lokicy2luy [ k0 ] . pn1zggpnnk ) , sizeof ( rtDW .
lokicy2luy [ 0 ] . pn1zggpnnk ) ) ; } for ( k0 = 0 ; k0 < 12 ; ++ k0 ) {
const mwIndex offset0 = k0 ; mr_UNIFIER_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 304 , offset0 , & ( rtDW . hfrmr3oqrf [ k0 ] . mi4ckqsald ) ,
sizeof ( rtDW . hfrmr3oqrf [ 0 ] . mi4ckqsald ) ) ;
mr_UNIFIER_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 305 , offset0 , & (
rtDW . hfrmr3oqrf [ k0 ] . n40fumdhgw ) , sizeof ( rtDW . hfrmr3oqrf [ 0 ] .
n40fumdhgw ) ) ; mr_UNIFIER_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 306
, offset0 , & ( rtDW . hfrmr3oqrf [ k0 ] . oeej20g4lc ) , sizeof ( rtDW .
hfrmr3oqrf [ 0 ] . oeej20g4lc ) ) ; } for ( k0 = 0 ; k0 < 12 ; ++ k0 ) {
const mwIndex offset0 = k0 ; mr_UNIFIER_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 307 , offset0 , & ( rtDW . adqmzv0sx0 [ k0 ] . adrjjytrwd ) ,
sizeof ( rtDW . adqmzv0sx0 [ 0 ] . adrjjytrwd ) ) ;
mr_UNIFIER_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 308 , offset0 , & (
rtDW . adqmzv0sx0 [ k0 ] . mirazmrnvl ) , sizeof ( rtDW . adqmzv0sx0 [ 0 ] .
mirazmrnvl ) ) ; mr_UNIFIER_cacheDataToMxArrayWithOffset ( rtdwData , 0 , 309
, offset0 , & ( rtDW . adqmzv0sx0 [ k0 ] . mczobgpj2t ) , sizeof ( rtDW .
adqmzv0sx0 [ 0 ] . mczobgpj2t ) ) ; mr_UNIFIER_cacheDataToMxArrayWithOffset (
rtdwData , 0 , 310 , offset0 , & ( rtDW . adqmzv0sx0 [ k0 ] . kd3fwxo3ke ) ,
sizeof ( rtDW . adqmzv0sx0 [ 0 ] . kd3fwxo3ke ) ) ; } mxSetFieldByNumber (
ssDW , 0 , 1 , rtdwData ) ; } mr_UNIFIER_cacheDataAsMxArray ( ssDW , 0 , 2 ,
( const void * ) & ( rtPrevZCX ) , sizeof ( rtPrevZCX ) ) ; return ssDW ; }
void mr_UNIFIER_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0 , 0 ,
sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0
, 1 ) ; int k0 ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nwwie5t5of ) , rtdwData , 0 , 0 , sizeof ( rtDW . nwwie5t5of ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . keywsrry0q ) ,
rtdwData , 0 , 1 , sizeof ( rtDW . keywsrry0q ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . dlxximuhuf ) ,
rtdwData , 0 , 2 , sizeof ( rtDW . dlxximuhuf ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . khpyhk0eyn ) ,
rtdwData , 0 , 3 , sizeof ( rtDW . khpyhk0eyn ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . jbwstjuywp ) ,
rtdwData , 0 , 4 , sizeof ( rtDW . jbwstjuywp ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . oiqpesodi3 ) ,
rtdwData , 0 , 5 , sizeof ( rtDW . oiqpesodi3 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . fd5b54bou3 ) ,
rtdwData , 0 , 6 , sizeof ( rtDW . fd5b54bou3 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . bwoaafu1ol ) ,
rtdwData , 0 , 7 , sizeof ( rtDW . bwoaafu1ol ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . elfrsuzvuo ) ,
rtdwData , 0 , 8 , sizeof ( rtDW . elfrsuzvuo ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . fzijynxjqu ) ,
rtdwData , 0 , 9 , sizeof ( rtDW . fzijynxjqu ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . etatrxd5ju ) ,
rtdwData , 0 , 10 , sizeof ( rtDW . etatrxd5ju ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . agukinkt3v ) ,
rtdwData , 0 , 11 , sizeof ( rtDW . agukinkt3v ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . fy4szg1x5i ) ,
rtdwData , 0 , 12 , sizeof ( rtDW . fy4szg1x5i ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . l4ppeudfek ) ,
rtdwData , 0 , 13 , sizeof ( rtDW . l4ppeudfek ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . h0chx3glnf ) ,
rtdwData , 0 , 14 , sizeof ( rtDW . h0chx3glnf ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . cg3pqhuaqw ) ,
rtdwData , 0 , 15 , sizeof ( rtDW . cg3pqhuaqw ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . hrv12n540b ) ,
rtdwData , 0 , 16 , sizeof ( rtDW . hrv12n540b ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . kedw3dybgq ) ,
rtdwData , 0 , 17 , sizeof ( rtDW . kedw3dybgq ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ktsj2nkchd ) ,
rtdwData , 0 , 18 , sizeof ( rtDW . ktsj2nkchd ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . oy300njhw2 ) ,
rtdwData , 0 , 19 , sizeof ( rtDW . oy300njhw2 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ie2l444zba ) ,
rtdwData , 0 , 20 , sizeof ( rtDW . ie2l444zba ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . fr2fpc1qxz ) ,
rtdwData , 0 , 21 , sizeof ( rtDW . fr2fpc1qxz ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . iiyniqtsbl ) ,
rtdwData , 0 , 22 , sizeof ( rtDW . iiyniqtsbl ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . pqowklbvyf ) ,
rtdwData , 0 , 23 , sizeof ( rtDW . pqowklbvyf ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . j2jiqbkm41 ) ,
rtdwData , 0 , 24 , sizeof ( rtDW . j2jiqbkm41 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . kz1ulbsboy ) ,
rtdwData , 0 , 25 , sizeof ( rtDW . kz1ulbsboy ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . onfzjh24jl ) ,
rtdwData , 0 , 26 , sizeof ( rtDW . onfzjh24jl ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . gefwlenpf3 ) ,
rtdwData , 0 , 27 , sizeof ( rtDW . gefwlenpf3 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . dwirzopvhn ) ,
rtdwData , 0 , 28 , sizeof ( rtDW . dwirzopvhn ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . lkiqlh4rt5 ) ,
rtdwData , 0 , 29 , sizeof ( rtDW . lkiqlh4rt5 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . h21bdoedky ) ,
rtdwData , 0 , 30 , sizeof ( rtDW . h21bdoedky ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . f2sqih31gq ) ,
rtdwData , 0 , 31 , sizeof ( rtDW . f2sqih31gq ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ewnwvk30kq ) ,
rtdwData , 0 , 32 , sizeof ( rtDW . ewnwvk30kq ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . nevgeggqm5 ) ,
rtdwData , 0 , 33 , sizeof ( rtDW . nevgeggqm5 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . lq4e3tdaf4 ) ,
rtdwData , 0 , 34 , sizeof ( rtDW . lq4e3tdaf4 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . g5vbnuh5ul ) ,
rtdwData , 0 , 35 , sizeof ( rtDW . g5vbnuh5ul ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . bgxy0tbgby ) ,
rtdwData , 0 , 36 , sizeof ( rtDW . bgxy0tbgby ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . iinforci3b ) ,
rtdwData , 0 , 37 , sizeof ( rtDW . iinforci3b ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . onpp1osnf1 ) ,
rtdwData , 0 , 38 , sizeof ( rtDW . onpp1osnf1 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . knywr3cygt ) ,
rtdwData , 0 , 39 , sizeof ( rtDW . knywr3cygt ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . bxxehqrfhk ) ,
rtdwData , 0 , 40 , sizeof ( rtDW . bxxehqrfhk ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . lybiwzq15a ) ,
rtdwData , 0 , 41 , sizeof ( rtDW . lybiwzq15a ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . hhpqcwloh0 ) ,
rtdwData , 0 , 42 , sizeof ( rtDW . hhpqcwloh0 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . hxdxaozqh1 ) ,
rtdwData , 0 , 43 , sizeof ( rtDW . hxdxaozqh1 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . fknte5kkos ) ,
rtdwData , 0 , 44 , sizeof ( rtDW . fknte5kkos ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . mnfw2imvdw ) ,
rtdwData , 0 , 45 , sizeof ( rtDW . mnfw2imvdw ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . felqedgyx1 ) ,
rtdwData , 0 , 46 , sizeof ( rtDW . felqedgyx1 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . knvjdfedfb ) ,
rtdwData , 0 , 47 , sizeof ( rtDW . knvjdfedfb ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . apjnubwssp ) ,
rtdwData , 0 , 48 , sizeof ( rtDW . apjnubwssp ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ptu3l2ehpk ) ,
rtdwData , 0 , 49 , sizeof ( rtDW . ptu3l2ehpk ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ebmg2d0djd ) ,
rtdwData , 0 , 50 , sizeof ( rtDW . ebmg2d0djd ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . nmrn1j5ohh ) ,
rtdwData , 0 , 51 , sizeof ( rtDW . nmrn1j5ohh ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . hl5ux0u3e5 ) ,
rtdwData , 0 , 52 , sizeof ( rtDW . hl5ux0u3e5 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . kywikzuq0z ) ,
rtdwData , 0 , 53 , sizeof ( rtDW . kywikzuq0z ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . op4s5nmfn0 ) ,
rtdwData , 0 , 54 , sizeof ( rtDW . op4s5nmfn0 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . p3qcu4kyf3 ) ,
rtdwData , 0 , 55 , sizeof ( rtDW . p3qcu4kyf3 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . d1rjlxqbuf ) ,
rtdwData , 0 , 56 , sizeof ( rtDW . d1rjlxqbuf ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . g130c2x32o ) ,
rtdwData , 0 , 57 , sizeof ( rtDW . g130c2x32o ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . dssqgth4gt ) ,
rtdwData , 0 , 58 , sizeof ( rtDW . dssqgth4gt ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . erz4us2nfk ) ,
rtdwData , 0 , 59 , sizeof ( rtDW . erz4us2nfk ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . fyjcynthf1 ) ,
rtdwData , 0 , 60 , sizeof ( rtDW . fyjcynthf1 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . acn3fu00s1 ) ,
rtdwData , 0 , 61 , sizeof ( rtDW . acn3fu00s1 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . itcccsf0ct ) ,
rtdwData , 0 , 62 , sizeof ( rtDW . itcccsf0ct ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . lipbrcbfzk ) ,
rtdwData , 0 , 63 , sizeof ( rtDW . lipbrcbfzk ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . md1fsm3br3 ) ,
rtdwData , 0 , 64 , sizeof ( rtDW . md1fsm3br3 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . be05daasmg ) ,
rtdwData , 0 , 65 , sizeof ( rtDW . be05daasmg ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . nq0rryljq1 ) ,
rtdwData , 0 , 66 , sizeof ( rtDW . nq0rryljq1 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ddr4l0n5i3 ) ,
rtdwData , 0 , 67 , sizeof ( rtDW . ddr4l0n5i3 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . by2jasgm4o ) ,
rtdwData , 0 , 68 , sizeof ( rtDW . by2jasgm4o ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . d2orna0nbx ) ,
rtdwData , 0 , 69 , sizeof ( rtDW . d2orna0nbx ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ltawfyrv1z ) ,
rtdwData , 0 , 70 , sizeof ( rtDW . ltawfyrv1z ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . k3eoy0kyly ) ,
rtdwData , 0 , 71 , sizeof ( rtDW . k3eoy0kyly ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . fwx2o3iy55 ) ,
rtdwData , 0 , 72 , sizeof ( rtDW . fwx2o3iy55 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . payo3ow3lc ) ,
rtdwData , 0 , 73 , sizeof ( rtDW . payo3ow3lc ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . dtoycisapu ) ,
rtdwData , 0 , 74 , sizeof ( rtDW . dtoycisapu ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . drfz5czaqt ) ,
rtdwData , 0 , 75 , sizeof ( rtDW . drfz5czaqt ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . bghenoofp3 ) ,
rtdwData , 0 , 76 , sizeof ( rtDW . bghenoofp3 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . efelnchztt ) ,
rtdwData , 0 , 77 , sizeof ( rtDW . efelnchztt ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . mmlvnrnkd5 ) ,
rtdwData , 0 , 78 , sizeof ( rtDW . mmlvnrnkd5 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . pyico4tskx ) ,
rtdwData , 0 , 79 , sizeof ( rtDW . pyico4tskx ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . d1chukr5qk ) ,
rtdwData , 0 , 80 , sizeof ( rtDW . d1chukr5qk ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . a114jaowoa ) ,
rtdwData , 0 , 81 , sizeof ( rtDW . a114jaowoa ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . fmnuqfwd2y ) ,
rtdwData , 0 , 82 , sizeof ( rtDW . fmnuqfwd2y ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . kxbke0l40t ) ,
rtdwData , 0 , 83 , sizeof ( rtDW . kxbke0l40t ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . cn3pwtmbrz ) ,
rtdwData , 0 , 84 , sizeof ( rtDW . cn3pwtmbrz ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . afbj2p43u0 ) ,
rtdwData , 0 , 85 , sizeof ( rtDW . afbj2p43u0 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . orlfhdhe1j ) ,
rtdwData , 0 , 86 , sizeof ( rtDW . orlfhdhe1j ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . gid5guyvyn ) ,
rtdwData , 0 , 87 , sizeof ( rtDW . gid5guyvyn ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . cicwclszwg ) ,
rtdwData , 0 , 88 , sizeof ( rtDW . cicwclszwg ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . mrk1ckqhf2 ) ,
rtdwData , 0 , 89 , sizeof ( rtDW . mrk1ckqhf2 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . bozrvqxxg2 ) ,
rtdwData , 0 , 90 , sizeof ( rtDW . bozrvqxxg2 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ifrmin0vwy ) ,
rtdwData , 0 , 91 , sizeof ( rtDW . ifrmin0vwy ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . mh4tfkaouk ) ,
rtdwData , 0 , 92 , sizeof ( rtDW . mh4tfkaouk ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . jek4mbk1vx ) ,
rtdwData , 0 , 93 , sizeof ( rtDW . jek4mbk1vx ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . olk2wajvjn ) ,
rtdwData , 0 , 94 , sizeof ( rtDW . olk2wajvjn ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . dj4sdqer2s ) ,
rtdwData , 0 , 95 , sizeof ( rtDW . dj4sdqer2s ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . cnggkfwmtg ) ,
rtdwData , 0 , 96 , sizeof ( rtDW . cnggkfwmtg ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . gywplgfgo2 ) ,
rtdwData , 0 , 97 , sizeof ( rtDW . gywplgfgo2 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ejpzs4ilay ) ,
rtdwData , 0 , 98 , sizeof ( rtDW . ejpzs4ilay ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . can5ffl1pr ) ,
rtdwData , 0 , 99 , sizeof ( rtDW . can5ffl1pr ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . hxzrjsvd30 ) ,
rtdwData , 0 , 100 , sizeof ( rtDW . hxzrjsvd30 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . e3iqk0pnev ) ,
rtdwData , 0 , 101 , sizeof ( rtDW . e3iqk0pnev ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . dt01p1zmsc ) ,
rtdwData , 0 , 102 , sizeof ( rtDW . dt01p1zmsc ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . gjocb1fbkw ) ,
rtdwData , 0 , 103 , sizeof ( rtDW . gjocb1fbkw ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . b3cbqcpv1h ) ,
rtdwData , 0 , 104 , sizeof ( rtDW . b3cbqcpv1h ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . gzdase1ucw ) ,
rtdwData , 0 , 105 , sizeof ( rtDW . gzdase1ucw ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . l2x1n13zrt ) ,
rtdwData , 0 , 106 , sizeof ( rtDW . l2x1n13zrt ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . nsylsr0oax ) ,
rtdwData , 0 , 107 , sizeof ( rtDW . nsylsr0oax ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . nqbfiajmmx ) ,
rtdwData , 0 , 108 , sizeof ( rtDW . nqbfiajmmx ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . dxzhrvzosm ) ,
rtdwData , 0 , 109 , sizeof ( rtDW . dxzhrvzosm ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . f3x1iuxbls ) ,
rtdwData , 0 , 110 , sizeof ( rtDW . f3x1iuxbls ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ew3v0ngbur ) ,
rtdwData , 0 , 111 , sizeof ( rtDW . ew3v0ngbur ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . cauppzu2z3 ) ,
rtdwData , 0 , 112 , sizeof ( rtDW . cauppzu2z3 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . lbnvio5iis ) ,
rtdwData , 0 , 113 , sizeof ( rtDW . lbnvio5iis ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . l0y0sibjp0 ) ,
rtdwData , 0 , 114 , sizeof ( rtDW . l0y0sibjp0 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . kd2av241hc ) ,
rtdwData , 0 , 115 , sizeof ( rtDW . kd2av241hc ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . lznod44who ) ,
rtdwData , 0 , 116 , sizeof ( rtDW . lznod44who ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . d5s5scu00d ) ,
rtdwData , 0 , 117 , sizeof ( rtDW . d5s5scu00d ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ne2n02ii3u ) ,
rtdwData , 0 , 118 , sizeof ( rtDW . ne2n02ii3u ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . fzyukbgm1g ) ,
rtdwData , 0 , 119 , sizeof ( rtDW . fzyukbgm1g ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . eism1mkbhp ) ,
rtdwData , 0 , 120 , sizeof ( rtDW . eism1mkbhp ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . cy0fp04shv ) ,
rtdwData , 0 , 121 , sizeof ( rtDW . cy0fp04shv ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ibavnqjmbw ) ,
rtdwData , 0 , 122 , sizeof ( rtDW . ibavnqjmbw ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . lekr1dkbkg ) ,
rtdwData , 0 , 123 , sizeof ( rtDW . lekr1dkbkg ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . dbvpgm1eii ) ,
rtdwData , 0 , 124 , sizeof ( rtDW . dbvpgm1eii ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . iysyxlklep ) ,
rtdwData , 0 , 125 , sizeof ( rtDW . iysyxlklep ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . hrfauuwygv ) ,
rtdwData , 0 , 126 , sizeof ( rtDW . hrfauuwygv ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . dxyyfd5j1h ) ,
rtdwData , 0 , 127 , sizeof ( rtDW . dxyyfd5j1h ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . cbvbkjurbn ) ,
rtdwData , 0 , 128 , sizeof ( rtDW . cbvbkjurbn ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . bv303cgicw ) ,
rtdwData , 0 , 129 , sizeof ( rtDW . bv303cgicw ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . grbvdxyxvz ) ,
rtdwData , 0 , 130 , sizeof ( rtDW . grbvdxyxvz ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . hlwi0mkbiu ) ,
rtdwData , 0 , 131 , sizeof ( rtDW . hlwi0mkbiu ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . jirkxxvdzn ) ,
rtdwData , 0 , 132 , sizeof ( rtDW . jirkxxvdzn ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ibhybetp43 ) ,
rtdwData , 0 , 133 , sizeof ( rtDW . ibhybetp43 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . gubxapj1vp ) ,
rtdwData , 0 , 134 , sizeof ( rtDW . gubxapj1vp ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . mfhxczbxqh ) ,
rtdwData , 0 , 135 , sizeof ( rtDW . mfhxczbxqh ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ksgrrkn4aj ) ,
rtdwData , 0 , 136 , sizeof ( rtDW . ksgrrkn4aj ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . pbrsinov1u ) ,
rtdwData , 0 , 137 , sizeof ( rtDW . pbrsinov1u ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ptwmh3h1zm ) ,
rtdwData , 0 , 138 , sizeof ( rtDW . ptwmh3h1zm ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . jezsbtdj5i ) ,
rtdwData , 0 , 139 , sizeof ( rtDW . jezsbtdj5i ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . kovsesfevn ) ,
rtdwData , 0 , 140 , sizeof ( rtDW . kovsesfevn ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . jqygi5hjmr ) ,
rtdwData , 0 , 141 , sizeof ( rtDW . jqygi5hjmr ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . fka3wa5y1h ) ,
rtdwData , 0 , 142 , sizeof ( rtDW . fka3wa5y1h ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . bo1nef12b5 ) ,
rtdwData , 0 , 143 , sizeof ( rtDW . bo1nef12b5 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . efbu502mmx ) ,
rtdwData , 0 , 144 , sizeof ( rtDW . efbu502mmx ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . d32hdtpoan ) ,
rtdwData , 0 , 145 , sizeof ( rtDW . d32hdtpoan ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . bzfig0ujyt ) ,
rtdwData , 0 , 146 , sizeof ( rtDW . bzfig0ujyt ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . pl4kkbhqoo ) ,
rtdwData , 0 , 147 , sizeof ( rtDW . pl4kkbhqoo ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . pzrjkskwao ) ,
rtdwData , 0 , 148 , sizeof ( rtDW . pzrjkskwao ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . gdy3zxhcjf ) ,
rtdwData , 0 , 149 , sizeof ( rtDW . gdy3zxhcjf ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . npr5ivvwap ) ,
rtdwData , 0 , 150 , sizeof ( rtDW . npr5ivvwap ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . no5lpmbbav ) ,
rtdwData , 0 , 151 , sizeof ( rtDW . no5lpmbbav ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . fjvix5f1rz ) ,
rtdwData , 0 , 152 , sizeof ( rtDW . fjvix5f1rz ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ajomfxtqpu ) ,
rtdwData , 0 , 153 , sizeof ( rtDW . ajomfxtqpu ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ebgkmc055j ) ,
rtdwData , 0 , 154 , sizeof ( rtDW . ebgkmc055j ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . jt5c1vowbk ) ,
rtdwData , 0 , 155 , sizeof ( rtDW . jt5c1vowbk ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . etlbk5pudp ) ,
rtdwData , 0 , 156 , sizeof ( rtDW . etlbk5pudp ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . lwhsegjgjj ) ,
rtdwData , 0 , 157 , sizeof ( rtDW . lwhsegjgjj ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . jdaeny0wrl ) ,
rtdwData , 0 , 158 , sizeof ( rtDW . jdaeny0wrl ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . hcj4r1mhfj ) ,
rtdwData , 0 , 159 , sizeof ( rtDW . hcj4r1mhfj ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . jixe3naiuk ) ,
rtdwData , 0 , 160 , sizeof ( rtDW . jixe3naiuk ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . i5csyk2orb ) ,
rtdwData , 0 , 161 , sizeof ( rtDW . i5csyk2orb ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . g4ci4vpjq5 ) ,
rtdwData , 0 , 162 , sizeof ( rtDW . g4ci4vpjq5 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ilvem33lp3 ) ,
rtdwData , 0 , 163 , sizeof ( rtDW . ilvem33lp3 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . f5phmbs2tn ) ,
rtdwData , 0 , 164 , sizeof ( rtDW . f5phmbs2tn ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . jkkslszvco ) ,
rtdwData , 0 , 165 , sizeof ( rtDW . jkkslszvco ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . g32aqgov41 ) ,
rtdwData , 0 , 166 , sizeof ( rtDW . g32aqgov41 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . cqa40zcbre ) ,
rtdwData , 0 , 167 , sizeof ( rtDW . cqa40zcbre ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . fscf4o21tu ) ,
rtdwData , 0 , 168 , sizeof ( rtDW . fscf4o21tu ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ijffkakodk ) ,
rtdwData , 0 , 169 , sizeof ( rtDW . ijffkakodk ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . lic05r3aek ) ,
rtdwData , 0 , 170 , sizeof ( rtDW . lic05r3aek ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . onbuk53hje ) ,
rtdwData , 0 , 171 , sizeof ( rtDW . onbuk53hje ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . e5hj5xeuwo ) ,
rtdwData , 0 , 172 , sizeof ( rtDW . e5hj5xeuwo ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . oznafgtnf4 ) ,
rtdwData , 0 , 173 , sizeof ( rtDW . oznafgtnf4 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . kziglxgcas ) ,
rtdwData , 0 , 174 , sizeof ( rtDW . kziglxgcas ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . dwguyo0lfa ) ,
rtdwData , 0 , 175 , sizeof ( rtDW . dwguyo0lfa ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . gvlplkt5zq ) ,
rtdwData , 0 , 176 , sizeof ( rtDW . gvlplkt5zq ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . kooonezqli ) ,
rtdwData , 0 , 177 , sizeof ( rtDW . kooonezqli ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . evhyqcpton ) ,
rtdwData , 0 , 178 , sizeof ( rtDW . evhyqcpton ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . nab3mylhfe ) ,
rtdwData , 0 , 179 , sizeof ( rtDW . nab3mylhfe ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . i5342xzqyj ) ,
rtdwData , 0 , 180 , sizeof ( rtDW . i5342xzqyj ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . mxv2hnd5hy ) ,
rtdwData , 0 , 181 , sizeof ( rtDW . mxv2hnd5hy ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . cyzymhco2p ) ,
rtdwData , 0 , 182 , sizeof ( rtDW . cyzymhco2p ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . cbx2viebna ) ,
rtdwData , 0 , 183 , sizeof ( rtDW . cbx2viebna ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . crhnfogbxa ) ,
rtdwData , 0 , 184 , sizeof ( rtDW . crhnfogbxa ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ksofld5bxu ) ,
rtdwData , 0 , 185 , sizeof ( rtDW . ksofld5bxu ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . nalp0vjrpv ) ,
rtdwData , 0 , 186 , sizeof ( rtDW . nalp0vjrpv ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . gjcgz4hrbp ) ,
rtdwData , 0 , 187 , sizeof ( rtDW . gjcgz4hrbp ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . jzpbje250b ) ,
rtdwData , 0 , 188 , sizeof ( rtDW . jzpbje250b ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . adcrsey4fl ) ,
rtdwData , 0 , 189 , sizeof ( rtDW . adcrsey4fl ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . pym1a1c4u4 ) ,
rtdwData , 0 , 190 , sizeof ( rtDW . pym1a1c4u4 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . jpzkj2zafj ) ,
rtdwData , 0 , 191 , sizeof ( rtDW . jpzkj2zafj ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . axjl1de1kg ) ,
rtdwData , 0 , 192 , sizeof ( rtDW . axjl1de1kg ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . pn4ledpxlb ) ,
rtdwData , 0 , 193 , sizeof ( rtDW . pn4ledpxlb ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . buhdzc4orn ) ,
rtdwData , 0 , 194 , sizeof ( rtDW . buhdzc4orn ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . a2szru3bcs ) ,
rtdwData , 0 , 195 , sizeof ( rtDW . a2szru3bcs ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . jp0ljiil3a ) ,
rtdwData , 0 , 196 , sizeof ( rtDW . jp0ljiil3a ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ii3syi53bn ) ,
rtdwData , 0 , 197 , sizeof ( rtDW . ii3syi53bn ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . daljbq5gtz ) ,
rtdwData , 0 , 198 , sizeof ( rtDW . daljbq5gtz ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . l1l2gip32s ) ,
rtdwData , 0 , 199 , sizeof ( rtDW . l1l2gip32s ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . lynamxwk0r ) ,
rtdwData , 0 , 200 , sizeof ( rtDW . lynamxwk0r ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . nt5ueu32fc ) ,
rtdwData , 0 , 201 , sizeof ( rtDW . nt5ueu32fc ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . cfvgbkovvu ) ,
rtdwData , 0 , 202 , sizeof ( rtDW . cfvgbkovvu ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . anhm4dpp2l ) ,
rtdwData , 0 , 203 , sizeof ( rtDW . anhm4dpp2l ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . iw455stvt1 ) ,
rtdwData , 0 , 204 , sizeof ( rtDW . iw455stvt1 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . l4pkohbzxl ) ,
rtdwData , 0 , 205 , sizeof ( rtDW . l4pkohbzxl ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ixmz3u3uqw ) ,
rtdwData , 0 , 206 , sizeof ( rtDW . ixmz3u3uqw ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ae5y3r3gcn ) ,
rtdwData , 0 , 207 , sizeof ( rtDW . ae5y3r3gcn ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ail2sagdmg ) ,
rtdwData , 0 , 208 , sizeof ( rtDW . ail2sagdmg ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . fshwisxlge ) ,
rtdwData , 0 , 209 , sizeof ( rtDW . fshwisxlge ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . mnnmbnljys ) ,
rtdwData , 0 , 210 , sizeof ( rtDW . mnnmbnljys ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . kielu0c1kf ) ,
rtdwData , 0 , 211 , sizeof ( rtDW . kielu0c1kf ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . cg1cpca1ek ) ,
rtdwData , 0 , 212 , sizeof ( rtDW . cg1cpca1ek ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . h2raxdlt4g ) ,
rtdwData , 0 , 213 , sizeof ( rtDW . h2raxdlt4g ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . dkewog43cc ) ,
rtdwData , 0 , 214 , sizeof ( rtDW . dkewog43cc ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . hvrukley13 ) ,
rtdwData , 0 , 215 , sizeof ( rtDW . hvrukley13 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . bwa1fip2ky ) ,
rtdwData , 0 , 216 , sizeof ( rtDW . bwa1fip2ky ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . j1mia3rzbj ) ,
rtdwData , 0 , 217 , sizeof ( rtDW . j1mia3rzbj ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . onvtpfrqwn .
epzfbulv32 ) , rtdwData , 0 , 218 , sizeof ( rtDW . onvtpfrqwn . epzfbulv32 )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . onvtpfrqwn .
ikkalmwo4a ) , rtdwData , 0 , 219 , sizeof ( rtDW . onvtpfrqwn . ikkalmwo4a )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . f2z2t5yyw1 .
p2xendpa3t ) , rtdwData , 0 , 220 , sizeof ( rtDW . f2z2t5yyw1 . p2xendpa3t )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . f2z2t5yyw1 .
jjqjeeukne ) , rtdwData , 0 , 221 , sizeof ( rtDW . f2z2t5yyw1 . jjqjeeukne )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . c3nx5ahmxh .
nzkcuadowp ) , rtdwData , 0 , 222 , sizeof ( rtDW . c3nx5ahmxh . nzkcuadowp )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . c3nx5ahmxh .
ncgtkhktc1 ) , rtdwData , 0 , 223 , sizeof ( rtDW . c3nx5ahmxh . ncgtkhktc1 )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . kq23drdvrd .
n5askzs1gj ) , rtdwData , 0 , 224 , sizeof ( rtDW . kq23drdvrd . n5askzs1gj )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . kq23drdvrd .
eihhgub2fg ) , rtdwData , 0 , 225 , sizeof ( rtDW . kq23drdvrd . eihhgub2fg )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . nbnysw2wtu .
oppfisosoh ) , rtdwData , 0 , 226 , sizeof ( rtDW . nbnysw2wtu . oppfisosoh )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . nbnysw2wtu .
kh3r3fv0yw ) , rtdwData , 0 , 227 , sizeof ( rtDW . nbnysw2wtu . kh3r3fv0yw )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . nbnysw2wtu .
o33bpxl4on ) , rtdwData , 0 , 228 , sizeof ( rtDW . nbnysw2wtu . o33bpxl4on )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . nbnysw2wtu .
mjyyj4engg . cfq0b3accy ) , rtdwData , 0 , 229 , sizeof ( rtDW . nbnysw2wtu .
mjyyj4engg . cfq0b3accy ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * )
& ( rtDW . i02x2fl5fr . g1l24xvjvk ) , rtdwData , 0 , 230 , sizeof ( rtDW .
i02x2fl5fr . g1l24xvjvk ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * )
& ( rtDW . i02x2fl5fr . gkzhayocy3 ) , rtdwData , 0 , 231 , sizeof ( rtDW .
i02x2fl5fr . gkzhayocy3 ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * )
& ( rtDW . i02x2fl5fr . ik1h4vnwti ) , rtdwData , 0 , 232 , sizeof ( rtDW .
i02x2fl5fr . ik1h4vnwti ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * )
& ( rtDW . i02x2fl5fr . fn2ws0qfrh0 . cfq0b3accy ) , rtdwData , 0 , 233 ,
sizeof ( rtDW . i02x2fl5fr . fn2ws0qfrh0 . cfq0b3accy ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . pw2pn5yxj3 .
e1ojz4whx1 ) , rtdwData , 0 , 234 , sizeof ( rtDW . pw2pn5yxj3 . e1ojz4whx1 )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . pw2pn5yxj3 .
bb4awxjtrl ) , rtdwData , 0 , 235 , sizeof ( rtDW . pw2pn5yxj3 . bb4awxjtrl )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . pw2pn5yxj3 .
gpjpxfvvnp ) , rtdwData , 0 , 236 , sizeof ( rtDW . pw2pn5yxj3 . gpjpxfvvnp )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . pw2pn5yxj3 .
avztlaubnav . epzfbulv32 ) , rtdwData , 0 , 237 , sizeof ( rtDW . pw2pn5yxj3
. avztlaubnav . epzfbulv32 ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void *
) & ( rtDW . pw2pn5yxj3 . avztlaubnav . ikkalmwo4a ) , rtdwData , 0 , 238 ,
sizeof ( rtDW . pw2pn5yxj3 . avztlaubnav . ikkalmwo4a ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . pw2pn5yxj3 .
dhyklihgewe . p2xendpa3t ) , rtdwData , 0 , 239 , sizeof ( rtDW . pw2pn5yxj3
. dhyklihgewe . p2xendpa3t ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void *
) & ( rtDW . pw2pn5yxj3 . dhyklihgewe . jjqjeeukne ) , rtdwData , 0 , 240 ,
sizeof ( rtDW . pw2pn5yxj3 . dhyklihgewe . jjqjeeukne ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . pw2pn5yxj3 .
iyuu340oslz . nzkcuadowp ) , rtdwData , 0 , 241 , sizeof ( rtDW . pw2pn5yxj3
. iyuu340oslz . nzkcuadowp ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void *
) & ( rtDW . pw2pn5yxj3 . iyuu340oslz . ncgtkhktc1 ) , rtdwData , 0 , 242 ,
sizeof ( rtDW . pw2pn5yxj3 . iyuu340oslz . ncgtkhktc1 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . pw2pn5yxj3 .
dzsm3cj0kly . n5askzs1gj ) , rtdwData , 0 , 243 , sizeof ( rtDW . pw2pn5yxj3
. dzsm3cj0kly . n5askzs1gj ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void *
) & ( rtDW . pw2pn5yxj3 . dzsm3cj0kly . eihhgub2fg ) , rtdwData , 0 , 244 ,
sizeof ( rtDW . pw2pn5yxj3 . dzsm3cj0kly . eihhgub2fg ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . knjlllhond .
oppfisosoh ) , rtdwData , 0 , 245 , sizeof ( rtDW . knjlllhond . oppfisosoh )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . knjlllhond .
kh3r3fv0yw ) , rtdwData , 0 , 246 , sizeof ( rtDW . knjlllhond . kh3r3fv0yw )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . knjlllhond .
o33bpxl4on ) , rtdwData , 0 , 247 , sizeof ( rtDW . knjlllhond . o33bpxl4on )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . knjlllhond .
mjyyj4engg . cfq0b3accy ) , rtdwData , 0 , 248 , sizeof ( rtDW . knjlllhond .
mjyyj4engg . cfq0b3accy ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * )
& ( rtDW . hga0x4lkqb . g1l24xvjvk ) , rtdwData , 0 , 249 , sizeof ( rtDW .
hga0x4lkqb . g1l24xvjvk ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * )
& ( rtDW . hga0x4lkqb . gkzhayocy3 ) , rtdwData , 0 , 250 , sizeof ( rtDW .
hga0x4lkqb . gkzhayocy3 ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * )
& ( rtDW . hga0x4lkqb . ik1h4vnwti ) , rtdwData , 0 , 251 , sizeof ( rtDW .
hga0x4lkqb . ik1h4vnwti ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * )
& ( rtDW . hga0x4lkqb . fn2ws0qfrh0 . cfq0b3accy ) , rtdwData , 0 , 252 ,
sizeof ( rtDW . hga0x4lkqb . fn2ws0qfrh0 . cfq0b3accy ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . f1rxuufunp .
e1ojz4whx1 ) , rtdwData , 0 , 253 , sizeof ( rtDW . f1rxuufunp . e1ojz4whx1 )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . f1rxuufunp .
bb4awxjtrl ) , rtdwData , 0 , 254 , sizeof ( rtDW . f1rxuufunp . bb4awxjtrl )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . f1rxuufunp .
gpjpxfvvnp ) , rtdwData , 0 , 255 , sizeof ( rtDW . f1rxuufunp . gpjpxfvvnp )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . f1rxuufunp .
avztlaubnav . epzfbulv32 ) , rtdwData , 0 , 256 , sizeof ( rtDW . f1rxuufunp
. avztlaubnav . epzfbulv32 ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void *
) & ( rtDW . f1rxuufunp . avztlaubnav . ikkalmwo4a ) , rtdwData , 0 , 257 ,
sizeof ( rtDW . f1rxuufunp . avztlaubnav . ikkalmwo4a ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . f1rxuufunp .
dhyklihgewe . p2xendpa3t ) , rtdwData , 0 , 258 , sizeof ( rtDW . f1rxuufunp
. dhyklihgewe . p2xendpa3t ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void *
) & ( rtDW . f1rxuufunp . dhyklihgewe . jjqjeeukne ) , rtdwData , 0 , 259 ,
sizeof ( rtDW . f1rxuufunp . dhyklihgewe . jjqjeeukne ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . f1rxuufunp .
iyuu340oslz . nzkcuadowp ) , rtdwData , 0 , 260 , sizeof ( rtDW . f1rxuufunp
. iyuu340oslz . nzkcuadowp ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void *
) & ( rtDW . f1rxuufunp . iyuu340oslz . ncgtkhktc1 ) , rtdwData , 0 , 261 ,
sizeof ( rtDW . f1rxuufunp . iyuu340oslz . ncgtkhktc1 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . f1rxuufunp .
dzsm3cj0kly . n5askzs1gj ) , rtdwData , 0 , 262 , sizeof ( rtDW . f1rxuufunp
. dzsm3cj0kly . n5askzs1gj ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void *
) & ( rtDW . f1rxuufunp . dzsm3cj0kly . eihhgub2fg ) , rtdwData , 0 , 263 ,
sizeof ( rtDW . f1rxuufunp . dzsm3cj0kly . eihhgub2fg ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . gr5ouy33uc .
oppfisosoh ) , rtdwData , 0 , 264 , sizeof ( rtDW . gr5ouy33uc . oppfisosoh )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . gr5ouy33uc .
kh3r3fv0yw ) , rtdwData , 0 , 265 , sizeof ( rtDW . gr5ouy33uc . kh3r3fv0yw )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . gr5ouy33uc .
o33bpxl4on ) , rtdwData , 0 , 266 , sizeof ( rtDW . gr5ouy33uc . o33bpxl4on )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . gr5ouy33uc .
mjyyj4engg . cfq0b3accy ) , rtdwData , 0 , 267 , sizeof ( rtDW . gr5ouy33uc .
mjyyj4engg . cfq0b3accy ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * )
& ( rtDW . o021qo2kqg . g1l24xvjvk ) , rtdwData , 0 , 268 , sizeof ( rtDW .
o021qo2kqg . g1l24xvjvk ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * )
& ( rtDW . o021qo2kqg . gkzhayocy3 ) , rtdwData , 0 , 269 , sizeof ( rtDW .
o021qo2kqg . gkzhayocy3 ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * )
& ( rtDW . o021qo2kqg . ik1h4vnwti ) , rtdwData , 0 , 270 , sizeof ( rtDW .
o021qo2kqg . ik1h4vnwti ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * )
& ( rtDW . o021qo2kqg . fn2ws0qfrh0 . cfq0b3accy ) , rtdwData , 0 , 271 ,
sizeof ( rtDW . o021qo2kqg . fn2ws0qfrh0 . cfq0b3accy ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ctbmhlk4scc .
e1ojz4whx1 ) , rtdwData , 0 , 272 , sizeof ( rtDW . ctbmhlk4scc . e1ojz4whx1
) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ctbmhlk4scc .
bb4awxjtrl ) , rtdwData , 0 , 273 , sizeof ( rtDW . ctbmhlk4scc . bb4awxjtrl
) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ctbmhlk4scc .
gpjpxfvvnp ) , rtdwData , 0 , 274 , sizeof ( rtDW . ctbmhlk4scc . gpjpxfvvnp
) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ctbmhlk4scc .
avztlaubnav . epzfbulv32 ) , rtdwData , 0 , 275 , sizeof ( rtDW . ctbmhlk4scc
. avztlaubnav . epzfbulv32 ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void *
) & ( rtDW . ctbmhlk4scc . avztlaubnav . ikkalmwo4a ) , rtdwData , 0 , 276 ,
sizeof ( rtDW . ctbmhlk4scc . avztlaubnav . ikkalmwo4a ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ctbmhlk4scc .
dhyklihgewe . p2xendpa3t ) , rtdwData , 0 , 277 , sizeof ( rtDW . ctbmhlk4scc
. dhyklihgewe . p2xendpa3t ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void *
) & ( rtDW . ctbmhlk4scc . dhyklihgewe . jjqjeeukne ) , rtdwData , 0 , 278 ,
sizeof ( rtDW . ctbmhlk4scc . dhyklihgewe . jjqjeeukne ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ctbmhlk4scc .
iyuu340oslz . nzkcuadowp ) , rtdwData , 0 , 279 , sizeof ( rtDW . ctbmhlk4scc
. iyuu340oslz . nzkcuadowp ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void *
) & ( rtDW . ctbmhlk4scc . iyuu340oslz . ncgtkhktc1 ) , rtdwData , 0 , 280 ,
sizeof ( rtDW . ctbmhlk4scc . iyuu340oslz . ncgtkhktc1 ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . ctbmhlk4scc .
dzsm3cj0kly . n5askzs1gj ) , rtdwData , 0 , 281 , sizeof ( rtDW . ctbmhlk4scc
. dzsm3cj0kly . n5askzs1gj ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void *
) & ( rtDW . ctbmhlk4scc . dzsm3cj0kly . eihhgub2fg ) , rtdwData , 0 , 282 ,
sizeof ( rtDW . ctbmhlk4scc . dzsm3cj0kly . eihhgub2fg ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . biiojft2vbl .
oppfisosoh ) , rtdwData , 0 , 283 , sizeof ( rtDW . biiojft2vbl . oppfisosoh
) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . biiojft2vbl .
kh3r3fv0yw ) , rtdwData , 0 , 284 , sizeof ( rtDW . biiojft2vbl . kh3r3fv0yw
) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . biiojft2vbl .
o33bpxl4on ) , rtdwData , 0 , 285 , sizeof ( rtDW . biiojft2vbl . o33bpxl4on
) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . biiojft2vbl .
mjyyj4engg . cfq0b3accy ) , rtdwData , 0 , 286 , sizeof ( rtDW . biiojft2vbl
. mjyyj4engg . cfq0b3accy ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void *
) & ( rtDW . cm0yj40hhfp . g1l24xvjvk ) , rtdwData , 0 , 287 , sizeof ( rtDW
. cm0yj40hhfp . g1l24xvjvk ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void *
) & ( rtDW . cm0yj40hhfp . gkzhayocy3 ) , rtdwData , 0 , 288 , sizeof ( rtDW
. cm0yj40hhfp . gkzhayocy3 ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void *
) & ( rtDW . cm0yj40hhfp . ik1h4vnwti ) , rtdwData , 0 , 289 , sizeof ( rtDW
. cm0yj40hhfp . ik1h4vnwti ) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void *
) & ( rtDW . cm0yj40hhfp . fn2ws0qfrh0 . cfq0b3accy ) , rtdwData , 0 , 290 ,
sizeof ( rtDW . cm0yj40hhfp . fn2ws0qfrh0 . cfq0b3accy ) ) ;
mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . lld2mvqphv .
mn1t1xifkc ) , rtdwData , 0 , 291 , sizeof ( rtDW . lld2mvqphv . mn1t1xifkc )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . lld2mvqphv .
pswhghvaxh ) , rtdwData , 0 , 292 , sizeof ( rtDW . lld2mvqphv . pswhghvaxh )
) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . cz2051lnszn .
mn1t1xifkc ) , rtdwData , 0 , 293 , sizeof ( rtDW . cz2051lnszn . mn1t1xifkc
) ) ; mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & ( rtDW . cz2051lnszn .
pswhghvaxh ) , rtdwData , 0 , 294 , sizeof ( rtDW . cz2051lnszn . pswhghvaxh
) ) ; for ( k0 = 0 ; k0 < 12 ; ++ k0 ) { const mwIndex offset0 = k0 ;
mr_UNIFIER_restoreDataFromMxArrayWithOffset ( & ( rtDW . icuuav0qej [ k0 ] .
i3lxxvdwzm ) , rtdwData , 0 , 295 , offset0 , sizeof ( rtDW . icuuav0qej [ 0
] . i3lxxvdwzm ) ) ; mr_UNIFIER_restoreDataFromMxArrayWithOffset ( & ( rtDW .
icuuav0qej [ k0 ] . mv3vvw3b42 ) , rtdwData , 0 , 296 , offset0 , sizeof (
rtDW . icuuav0qej [ 0 ] . mv3vvw3b42 ) ) ;
mr_UNIFIER_restoreDataFromMxArrayWithOffset ( & ( rtDW . icuuav0qej [ k0 ] .
acsdmeuss0 ) , rtdwData , 0 , 297 , offset0 , sizeof ( rtDW . icuuav0qej [ 0
] . acsdmeuss0 ) ) ; } for ( k0 = 0 ; k0 < 12 ; ++ k0 ) { const mwIndex
offset0 = k0 ; mr_UNIFIER_restoreDataFromMxArrayWithOffset ( & ( rtDW .
l20xgpl0hh [ k0 ] . mk5iyqhcsl ) , rtdwData , 0 , 298 , offset0 , sizeof (
rtDW . l20xgpl0hh [ 0 ] . mk5iyqhcsl ) ) ;
mr_UNIFIER_restoreDataFromMxArrayWithOffset ( & ( rtDW . l20xgpl0hh [ k0 ] .
f2w5jzpw5v ) , rtdwData , 0 , 299 , offset0 , sizeof ( rtDW . l20xgpl0hh [ 0
] . f2w5jzpw5v ) ) ; mr_UNIFIER_restoreDataFromMxArrayWithOffset ( & ( rtDW .
l20xgpl0hh [ k0 ] . nlhryvabyo ) , rtdwData , 0 , 300 , offset0 , sizeof (
rtDW . l20xgpl0hh [ 0 ] . nlhryvabyo ) ) ; } for ( k0 = 0 ; k0 < 12 ; ++ k0 )
{ const mwIndex offset0 = k0 ; mr_UNIFIER_restoreDataFromMxArrayWithOffset (
& ( rtDW . lokicy2luy [ k0 ] . e4gu33l0io ) , rtdwData , 0 , 301 , offset0 ,
sizeof ( rtDW . lokicy2luy [ 0 ] . e4gu33l0io ) ) ;
mr_UNIFIER_restoreDataFromMxArrayWithOffset ( & ( rtDW . lokicy2luy [ k0 ] .
caw3xhb43b ) , rtdwData , 0 , 302 , offset0 , sizeof ( rtDW . lokicy2luy [ 0
] . caw3xhb43b ) ) ; mr_UNIFIER_restoreDataFromMxArrayWithOffset ( & ( rtDW .
lokicy2luy [ k0 ] . pn1zggpnnk ) , rtdwData , 0 , 303 , offset0 , sizeof (
rtDW . lokicy2luy [ 0 ] . pn1zggpnnk ) ) ; } for ( k0 = 0 ; k0 < 12 ; ++ k0 )
{ const mwIndex offset0 = k0 ; mr_UNIFIER_restoreDataFromMxArrayWithOffset (
& ( rtDW . hfrmr3oqrf [ k0 ] . mi4ckqsald ) , rtdwData , 0 , 304 , offset0 ,
sizeof ( rtDW . hfrmr3oqrf [ 0 ] . mi4ckqsald ) ) ;
mr_UNIFIER_restoreDataFromMxArrayWithOffset ( & ( rtDW . hfrmr3oqrf [ k0 ] .
n40fumdhgw ) , rtdwData , 0 , 305 , offset0 , sizeof ( rtDW . hfrmr3oqrf [ 0
] . n40fumdhgw ) ) ; mr_UNIFIER_restoreDataFromMxArrayWithOffset ( & ( rtDW .
hfrmr3oqrf [ k0 ] . oeej20g4lc ) , rtdwData , 0 , 306 , offset0 , sizeof (
rtDW . hfrmr3oqrf [ 0 ] . oeej20g4lc ) ) ; } for ( k0 = 0 ; k0 < 12 ; ++ k0 )
{ const mwIndex offset0 = k0 ; mr_UNIFIER_restoreDataFromMxArrayWithOffset (
& ( rtDW . adqmzv0sx0 [ k0 ] . adrjjytrwd ) , rtdwData , 0 , 307 , offset0 ,
sizeof ( rtDW . adqmzv0sx0 [ 0 ] . adrjjytrwd ) ) ;
mr_UNIFIER_restoreDataFromMxArrayWithOffset ( & ( rtDW . adqmzv0sx0 [ k0 ] .
mirazmrnvl ) , rtdwData , 0 , 308 , offset0 , sizeof ( rtDW . adqmzv0sx0 [ 0
] . mirazmrnvl ) ) ; mr_UNIFIER_restoreDataFromMxArrayWithOffset ( & ( rtDW .
adqmzv0sx0 [ k0 ] . mczobgpj2t ) , rtdwData , 0 , 309 , offset0 , sizeof (
rtDW . adqmzv0sx0 [ 0 ] . mczobgpj2t ) ) ;
mr_UNIFIER_restoreDataFromMxArrayWithOffset ( & ( rtDW . adqmzv0sx0 [ k0 ] .
kd3fwxo3ke ) , rtdwData , 0 , 310 , offset0 , sizeof ( rtDW . adqmzv0sx0 [ 0
] . kd3fwxo3ke ) ) ; } } mr_UNIFIER_restoreDataFromMxArray ( ( void * ) & (
rtPrevZCX ) , ssDW , 0 , 2 , sizeof ( rtPrevZCX ) ) ; } mxArray *
mr_UNIFIER_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 10 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char * blockType [ 10 ] = { "Scope" , "Scope" , "Scope" , "Scope" , "Scope" ,
"Scope" , "Scope" , "Scope" , "Scope" , "Scope" , } ; static const char *
blockPath [ 10 ] = { "UNIFIER/X_PLANE_VISUALS/DEPSpinning/Scope" ,
"UNIFIER/X_PLANE_VISUALS/PusherSpinning/Scope" ,
"UNIFIER/C7A_HARW/Scopes/pqr_dot" , "UNIFIER/C7A_HARW/Scopes/uvw_dot" ,
"UNIFIER/C7A_HARW/Scopes/pqr" , "UNIFIER/C7A_HARW/Scopes/uvw" ,
"UNIFIER/C7A_HARW/Scopes/phithetapsi" , "UNIFIER/C7A_HARW/Scopes/xyz" ,
"UNIFIER/C7A_HARW/Scopes/Vrw_mag" , "UNIFIER/C7A_HARW/Scopes/alphabeta" , } ;
static const int reason [ 10 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , }
; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 10 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] =
0 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } }
return data ; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS ,
41 ) ; ssSetNumPeriodicContStates ( rtS , 3 ) ; ssSetNumY ( rtS , 0 ) ;
ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 3 ) ; ssSetNumBlocks ( rtS , 4308 ) ;
ssSetNumBlockIO ( rtS , 407 ) ; ssSetNumBlockParams ( rtS , 4317 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.002 ) ; ssSetSampleTime ( rtS , 2 , 0.01 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 0.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 1744200860U ) ; ssSetChecksumVal ( rtS , 1 ,
2505757144U ) ; ssSetChecksumVal ( rtS , 2 , 102911214U ) ; ssSetChecksumVal
( rtS , 3 , 2151857254U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; ( void ) memset ( ( char * ) rtS , 0 ,
sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0 , sizeof
( struct _ssMdlInfo ) ) ; ssSetMdlInfoPtr ( rtS , & mdlInfo ) ;
ssSetExecutionInfo ( rtS , executionInfo ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { static DataTypeTransInfo dtInfo ; ( void ) memset (
( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS
, & dtInfo ) ; dtInfo . numDataTypes = 37 ; dtInfo . dataTypeSizes = &
rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = & rtDataTypeNames [ 0 ] ;
dtInfo . BTransTable = & rtBTransTable ; dtInfo . PTransTable = &
rtPTransTable ; dtInfo . dataTypeInfoTable = rtDataTypeInfoTable ; }
UNIFIER_InitializeDataMapInfo ( ) ; ssSetIsRapidAcceleratorActive ( rtS ,
true ) ; ssSetRootSS ( rtS , rtS ) ; ssSetVersion ( rtS ,
SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS , "UNIFIER" ) ; ssSetPath (
rtS , "UNIFIER" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 600.0 ) ;
ssSetStepSize ( rtS , 0.002 ) ; ssSetFixedStepSize ( rtS , 0.002 ) ; { static
RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL
) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 3 , 3 , 3 , 3 , 2 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 3 , 20 , 5 , 4 , 1 , 3 , 3 , 3000 , 12 , 15 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T
rt_LoggedStateDimensions [ ] = { 3 , 3 , 3 , 3 , 2 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 3 , 20 , 5 , 4 , 1 , 3 , 3 , 3000 , 12 , 15 } ; static
boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE } ; static int_T
rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) } ; static const char_T * rt_LoggedStateLabels
[ ] = { "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"states" , "states" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "states" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" } ; static const char_T
* rt_LoggedStateBlockNames [ ] = {
"UNIFIER/C7A_HARW/EOMandEnviroment/EOM: 6DOF (Euler Angles)/xe,ye,ze" ,
 "UNIFIER/C7A_HARW/EOMandEnviroment/EOM: 6DOF (Euler Angles)/Calculate DCM &\nEuler Angles/phi\ntheta\npsi"
, "UNIFIER/C7A_HARW/EOMandEnviroment/EOM: 6DOF (Euler Angles)/ub,vb,wb" ,
"UNIFIER/C7A_HARW/EOMandEnviroment/EOM: 6DOF (Euler Angles)/p,q,r " ,
 "UNIFIER/C7A_HARW/Subsystems/HTU/PropAndMotor/Linear Second-Order Actuator/Integrator,\nSecond-Order"
,
 "UNIFIER/C7A_HARW/EOMandEnviroment/Enviroment/Wind model/Discrete Wind Gust Model1/Distance into\ngust (z)/Distance into\nGust (x)\n(Limited to gust length d)\n"
,
 "UNIFIER/C7A_HARW/EOMandEnviroment/Enviroment/Wind model/Discrete Wind Gust Model1/Distance into\ngust (y)/Distance into\nGust (x)\n(Limited to gust length d)\n"
,
 "UNIFIER/C7A_HARW/EOMandEnviroment/Enviroment/Wind model/Discrete Wind Gust Model1/Distance into\ngust (x)/Distance into\nGust (x)\n(Limited to gust length d)"
,
 "UNIFIER/PACER/soft real time subsystem/get elapsed wall-clock time/triggered capture & hold/."
, "UNIFIER/PACER/Output to Console/S-Function" ,
"UNIFIER/FCC/SIDESTICK PROCESSING/Subsystem3/Discrete-Time\nIntegrator1" ,
 "UNIFIER/FCC/SIDESTICK PROCESSING/Subsystem1/DynamicSaturationIntegrator/Discrete-Time\nIntegrator"
, "UNIFIER/FCC/SIDESTICK PROCESSING/Subsystem/Discrete-Time\nIntegrator" ,
"UNIFIER/FCC/SIDESTICK PROCESSING/Subsystem1/Discrete\nTransfer Fcn" ,
"UNIFIER/FCC/SIDESTICK PROCESSING/Subsystem/Discrete\nTransfer Fcn" ,
 "UNIFIER/FCC/CLAW/Flight Path Loop/DesiredDynamics/Desired Dynamics/Discrete-Time\nIntegrator"
, "UNIFIER/FCC/Delay1" , "UNIFIER/FCC/CLAW/Flight Path Loop/Delay" ,
"UNIFIER/FCC/CLAW/Rate Loop/Delay" ,
"UNIFIER/FCC/SIDESTICK PROCESSING/Subsystem2/Discrete\nTransfer Fcn1" ,
"UNIFIER/FCC/CLAW/Attitude Loop/DesiredDynamics/Discrete-Time\nIntegrator" ,
"UNIFIER/FCC/CLAW/Rate Loop/Desired Dynamics/Discrete-Time\nIntegrator" ,
 "UNIFIER/FCC/INPUT PROCESSING/ActuatorLimits/AssignDEPLimit/DEP_state/ramp/Delay One Step"
, "UNIFIER/FCC/CLAW/Rate Loop/OBMComputation/Delay One Step" ,
 "UNIFIER/FCC/CLAW/Flight Path Loop/PreProcessing/B_pathComputation/Delay One Step"
} ; static const char_T * rt_LoggedStateNames [ ] = { "" , "" , "" , "" , ""
, "" , "" , "" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" ,
"states" , "states" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "states" ,
"DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" , "DSTATE" } ; static boolean_T
rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 0 , 1 , 2 , 3 , 4 , 7 , 8 , 9 , 0 , 1 , 2 , 3 ,
4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 25 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 25 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . cqs5hdvfch [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . cqtafeeuey [ 0 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . lowr4jkjer [ 0 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . jwtmx1crsn [ 0 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . oqemwaxlko [ 0 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . lld2mvqphv . f33fpdq10k ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . cz2051lnszn . f33fpdq10k
; rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . a5x0ow51a0 ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtDW . nwwie5t5of ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtDW . keywsrry0q ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtDW . dlxximuhuf ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtDW . khpyhk0eyn ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtDW . jbwstjuywp ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtDW . oiqpesodi3 ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtDW . fd5b54bou3 ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) rtDW . bwoaafu1ol ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) rtDW . elfrsuzvuo ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) rtDW . fzijynxjqu ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) rtDW . etatrxd5ju ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtDW . agukinkt3v ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) rtDW . fy4szg1x5i ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) rtDW . l4ppeudfek ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) rtDW . h0chx3glnf ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) rtDW . cg3pqhuaqw ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) rtDW . hrv12n540b ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ;
ssSetPeriodicContStateIndices ( rtS , rtPeriodicIndX ) ; ( void ) memset ( (
void * ) rtPeriodicIndX , 0 , 3 * sizeof ( int_T ) ) ;
ssSetPeriodicContStateRanges ( rtS , rtPeriodicRngX ) ; ( void ) memset ( (
void * ) rtPeriodicRngX , 0 , 6 * sizeof ( real_T ) ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static boolean_T contStatesDisabled [ 41 ] ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "ode1" ) ;
ssSetVariableStepSolver ( rtS , 0 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 0 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; ssSetSolverStateProjection ( rtS ,
0 ) ; ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 0 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 0 ) ; ssSetModelOutputs ( rtS , MdlOutputs
) ; ssSetModelLogData ( rtS , rt_UpdateTXYLogVars ) ;
ssSetModelLogDataIfInInterval ( rtS , rt_UpdateTXXFYLogVars ) ;
ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives ( rtS ,
MdlDerivatives ) ; ssSetTNextTid ( rtS , INT_MIN ) ; ssSetTNext ( rtS ,
rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ; ssSetNumNonsampledZCs ( rtS ,
0 ) ; ssSetContStateDisabled ( rtS , contStatesDisabled ) ; } { ZCSigState *
zc = ( ZCSigState * ) & rtPrevZCX ; ssSetPrevZCSigState ( rtS , zc ) ; } { }
ssSetChecksumVal ( rtS , 0 , 1744200860U ) ; ssSetChecksumVal ( rtS , 1 ,
2505757144U ) ; ssSetChecksumVal ( rtS , 2 , 102911214U ) ; ssSetChecksumVal
( rtS , 3 , 2151857254U ) ; { static const sysRanDType rtAlwaysEnabled =
SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo rt_ExtModeInfo ; static const
sysRanDType * systemRan [ 222 ] ; gblRTWExtModeInfo = & rt_ExtModeInfo ;
ssSetRTWExtModeInfo ( rtS , & rt_ExtModeInfo ) ;
rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo , systemRan ) ;
systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = & rtAlwaysEnabled ;
systemRan [ 2 ] = & rtAlwaysEnabled ; systemRan [ 3 ] = & rtAlwaysEnabled ;
systemRan [ 4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = & rtAlwaysEnabled ;
systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7 ] = & rtAlwaysEnabled ;
systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ] = & rtAlwaysEnabled ;
systemRan [ 10 ] = & rtAlwaysEnabled ; systemRan [ 11 ] = & rtAlwaysEnabled ;
systemRan [ 12 ] = & rtAlwaysEnabled ; systemRan [ 13 ] = & rtAlwaysEnabled ;
systemRan [ 14 ] = & rtAlwaysEnabled ; systemRan [ 15 ] = ( sysRanDType * ) &
rtDW . ail2sagdmg ; systemRan [ 16 ] = ( sysRanDType * ) & rtDW . cz2051lnszn
. mn1t1xifkc ; systemRan [ 17 ] = ( sysRanDType * ) & rtDW . lld2mvqphv .
mn1t1xifkc ; systemRan [ 18 ] = & rtAlwaysEnabled ; systemRan [ 19 ] = &
rtAlwaysEnabled ; systemRan [ 20 ] = & rtAlwaysEnabled ; systemRan [ 21 ] = &
rtAlwaysEnabled ; systemRan [ 22 ] = & rtAlwaysEnabled ; systemRan [ 23 ] = &
rtAlwaysEnabled ; systemRan [ 24 ] = & rtAlwaysEnabled ; systemRan [ 25 ] = &
rtAlwaysEnabled ; systemRan [ 26 ] = & rtAlwaysEnabled ; systemRan [ 27 ] = &
rtAlwaysEnabled ; systemRan [ 28 ] = & rtAlwaysEnabled ; systemRan [ 29 ] = &
rtAlwaysEnabled ; systemRan [ 30 ] = & rtAlwaysEnabled ; systemRan [ 31 ] = &
rtAlwaysEnabled ; systemRan [ 32 ] = & rtAlwaysEnabled ; systemRan [ 33 ] = &
rtAlwaysEnabled ; systemRan [ 34 ] = & rtAlwaysEnabled ; systemRan [ 35 ] = &
rtAlwaysEnabled ; systemRan [ 36 ] = & rtAlwaysEnabled ; systemRan [ 37 ] = &
rtAlwaysEnabled ; systemRan [ 38 ] = & rtAlwaysEnabled ; systemRan [ 39 ] = &
rtAlwaysEnabled ; systemRan [ 40 ] = & rtAlwaysEnabled ; systemRan [ 41 ] = &
rtAlwaysEnabled ; systemRan [ 42 ] = & rtAlwaysEnabled ; systemRan [ 43 ] = &
rtAlwaysEnabled ; systemRan [ 44 ] = & rtAlwaysEnabled ; systemRan [ 45 ] = &
rtAlwaysEnabled ; systemRan [ 46 ] = & rtAlwaysEnabled ; systemRan [ 47 ] = &
rtAlwaysEnabled ; systemRan [ 48 ] = & rtAlwaysEnabled ; systemRan [ 49 ] = &
rtAlwaysEnabled ; systemRan [ 50 ] = & rtAlwaysEnabled ; systemRan [ 51 ] = &
rtAlwaysEnabled ; systemRan [ 52 ] = & rtAlwaysEnabled ; systemRan [ 53 ] = &
rtAlwaysEnabled ; systemRan [ 54 ] = & rtAlwaysEnabled ; systemRan [ 55 ] = &
rtAlwaysEnabled ; systemRan [ 56 ] = & rtAlwaysEnabled ; systemRan [ 57 ] = &
rtAlwaysEnabled ; systemRan [ 58 ] = & rtAlwaysEnabled ; systemRan [ 59 ] = &
rtAlwaysEnabled ; systemRan [ 60 ] = & rtAlwaysEnabled ; systemRan [ 61 ] = &
rtAlwaysEnabled ; systemRan [ 62 ] = & rtAlwaysEnabled ; systemRan [ 63 ] = &
rtAlwaysEnabled ; systemRan [ 64 ] = & rtAlwaysEnabled ; systemRan [ 65 ] = &
rtAlwaysEnabled ; systemRan [ 66 ] = ( sysRanDType * ) & rtDW . biiojft2vbl .
o33bpxl4on ; systemRan [ 67 ] = ( sysRanDType * ) & rtDW . biiojft2vbl .
kh3r3fv0yw ; systemRan [ 68 ] = ( sysRanDType * ) & rtDW . biiojft2vbl .
mjyyj4engg . cfq0b3accy ; systemRan [ 69 ] = ( sysRanDType * ) & rtDW .
biiojft2vbl . oppfisosoh ; systemRan [ 70 ] = ( sysRanDType * ) & rtDW .
cm0yj40hhfp . ik1h4vnwti ; systemRan [ 71 ] = ( sysRanDType * ) & rtDW .
cm0yj40hhfp . gkzhayocy3 ; systemRan [ 72 ] = ( sysRanDType * ) & rtDW .
cm0yj40hhfp . fn2ws0qfrh0 . cfq0b3accy ; systemRan [ 73 ] = ( sysRanDType * )
& rtDW . cm0yj40hhfp . g1l24xvjvk ; systemRan [ 74 ] = ( sysRanDType * ) &
rtDW . ctbmhlk4scc . avztlaubnav . ikkalmwo4a ; systemRan [ 75 ] = (
sysRanDType * ) & rtDW . ctbmhlk4scc . dhyklihgewe . jjqjeeukne ; systemRan [
76 ] = ( sysRanDType * ) & rtDW . ctbmhlk4scc . bb4awxjtrl ; systemRan [ 77 ]
= ( sysRanDType * ) & rtDW . ctbmhlk4scc . iyuu340oslz . ncgtkhktc1 ;
systemRan [ 78 ] = ( sysRanDType * ) & rtDW . ctbmhlk4scc . dzsm3cj0kly .
eihhgub2fg ; systemRan [ 79 ] = ( sysRanDType * ) & rtDW . ctbmhlk4scc .
gpjpxfvvnp ; systemRan [ 80 ] = ( sysRanDType * ) & rtDW . ctbmhlk4scc .
e1ojz4whx1 ; systemRan [ 81 ] = & rtAlwaysEnabled ; systemRan [ 82 ] = &
rtAlwaysEnabled ; systemRan [ 83 ] = & rtAlwaysEnabled ; systemRan [ 84 ] = &
rtAlwaysEnabled ; systemRan [ 85 ] = & rtAlwaysEnabled ; systemRan [ 86 ] = &
rtAlwaysEnabled ; systemRan [ 87 ] = & rtAlwaysEnabled ; systemRan [ 88 ] = &
rtAlwaysEnabled ; systemRan [ 89 ] = & rtAlwaysEnabled ; systemRan [ 90 ] = &
rtAlwaysEnabled ; systemRan [ 91 ] = & rtAlwaysEnabled ; systemRan [ 92 ] = &
rtAlwaysEnabled ; systemRan [ 93 ] = & rtAlwaysEnabled ; systemRan [ 94 ] = &
rtAlwaysEnabled ; systemRan [ 95 ] = & rtAlwaysEnabled ; systemRan [ 96 ] = &
rtAlwaysEnabled ; systemRan [ 97 ] = & rtAlwaysEnabled ; systemRan [ 98 ] = &
rtAlwaysEnabled ; systemRan [ 99 ] = ( sysRanDType * ) & rtDW . gr5ouy33uc .
o33bpxl4on ; systemRan [ 100 ] = ( sysRanDType * ) & rtDW . gr5ouy33uc .
kh3r3fv0yw ; systemRan [ 101 ] = ( sysRanDType * ) & rtDW . gr5ouy33uc .
mjyyj4engg . cfq0b3accy ; systemRan [ 102 ] = ( sysRanDType * ) & rtDW .
gr5ouy33uc . oppfisosoh ; systemRan [ 103 ] = ( sysRanDType * ) & rtDW .
o021qo2kqg . ik1h4vnwti ; systemRan [ 104 ] = ( sysRanDType * ) & rtDW .
o021qo2kqg . gkzhayocy3 ; systemRan [ 105 ] = ( sysRanDType * ) & rtDW .
o021qo2kqg . fn2ws0qfrh0 . cfq0b3accy ; systemRan [ 106 ] = ( sysRanDType * )
& rtDW . o021qo2kqg . g1l24xvjvk ; systemRan [ 107 ] = ( sysRanDType * ) &
rtDW . f1rxuufunp . avztlaubnav . ikkalmwo4a ; systemRan [ 108 ] = (
sysRanDType * ) & rtDW . f1rxuufunp . dhyklihgewe . jjqjeeukne ; systemRan [
109 ] = ( sysRanDType * ) & rtDW . f1rxuufunp . bb4awxjtrl ; systemRan [ 110
] = ( sysRanDType * ) & rtDW . f1rxuufunp . iyuu340oslz . ncgtkhktc1 ;
systemRan [ 111 ] = ( sysRanDType * ) & rtDW . f1rxuufunp . dzsm3cj0kly .
eihhgub2fg ; systemRan [ 112 ] = ( sysRanDType * ) & rtDW . f1rxuufunp .
gpjpxfvvnp ; systemRan [ 113 ] = ( sysRanDType * ) & rtDW . f1rxuufunp .
e1ojz4whx1 ; systemRan [ 114 ] = ( sysRanDType * ) & rtDW . knjlllhond .
o33bpxl4on ; systemRan [ 115 ] = ( sysRanDType * ) & rtDW . knjlllhond .
kh3r3fv0yw ; systemRan [ 116 ] = ( sysRanDType * ) & rtDW . knjlllhond .
mjyyj4engg . cfq0b3accy ; systemRan [ 117 ] = ( sysRanDType * ) & rtDW .
knjlllhond . oppfisosoh ; systemRan [ 118 ] = ( sysRanDType * ) & rtDW .
hga0x4lkqb . ik1h4vnwti ; systemRan [ 119 ] = ( sysRanDType * ) & rtDW .
hga0x4lkqb . gkzhayocy3 ; systemRan [ 120 ] = ( sysRanDType * ) & rtDW .
hga0x4lkqb . fn2ws0qfrh0 . cfq0b3accy ; systemRan [ 121 ] = ( sysRanDType * )
& rtDW . hga0x4lkqb . g1l24xvjvk ; systemRan [ 122 ] = ( sysRanDType * ) &
rtDW . pw2pn5yxj3 . avztlaubnav . ikkalmwo4a ; systemRan [ 123 ] = (
sysRanDType * ) & rtDW . pw2pn5yxj3 . dhyklihgewe . jjqjeeukne ; systemRan [
124 ] = ( sysRanDType * ) & rtDW . pw2pn5yxj3 . bb4awxjtrl ; systemRan [ 125
] = ( sysRanDType * ) & rtDW . pw2pn5yxj3 . iyuu340oslz . ncgtkhktc1 ;
systemRan [ 126 ] = ( sysRanDType * ) & rtDW . pw2pn5yxj3 . dzsm3cj0kly .
eihhgub2fg ; systemRan [ 127 ] = ( sysRanDType * ) & rtDW . pw2pn5yxj3 .
gpjpxfvvnp ; systemRan [ 128 ] = ( sysRanDType * ) & rtDW . pw2pn5yxj3 .
e1ojz4whx1 ; systemRan [ 129 ] = & rtAlwaysEnabled ; systemRan [ 130 ] = &
rtAlwaysEnabled ; systemRan [ 131 ] = & rtAlwaysEnabled ; systemRan [ 132 ] =
& rtAlwaysEnabled ; systemRan [ 133 ] = & rtAlwaysEnabled ; systemRan [ 134 ]
= & rtAlwaysEnabled ; systemRan [ 135 ] = & rtAlwaysEnabled ; systemRan [ 136
] = & rtAlwaysEnabled ; systemRan [ 137 ] = & rtAlwaysEnabled ; systemRan [
138 ] = & rtAlwaysEnabled ; systemRan [ 139 ] = & rtAlwaysEnabled ; systemRan
[ 140 ] = & rtAlwaysEnabled ; systemRan [ 141 ] = & rtAlwaysEnabled ;
systemRan [ 142 ] = & rtAlwaysEnabled ; systemRan [ 143 ] = & rtAlwaysEnabled
; systemRan [ 144 ] = & rtAlwaysEnabled ; systemRan [ 145 ] = &
rtAlwaysEnabled ; systemRan [ 146 ] = & rtAlwaysEnabled ; systemRan [ 147 ] =
& rtAlwaysEnabled ; systemRan [ 148 ] = & rtAlwaysEnabled ; systemRan [ 149 ]
= & rtAlwaysEnabled ; systemRan [ 150 ] = & rtAlwaysEnabled ; systemRan [ 151
] = & rtAlwaysEnabled ; systemRan [ 152 ] = & rtAlwaysEnabled ; systemRan [
153 ] = & rtAlwaysEnabled ; systemRan [ 154 ] = & rtAlwaysEnabled ; systemRan
[ 155 ] = & rtAlwaysEnabled ; systemRan [ 156 ] = & rtAlwaysEnabled ;
systemRan [ 157 ] = & rtAlwaysEnabled ; systemRan [ 158 ] = & rtAlwaysEnabled
; systemRan [ 159 ] = & rtAlwaysEnabled ; systemRan [ 160 ] = &
rtAlwaysEnabled ; systemRan [ 161 ] = & rtAlwaysEnabled ; systemRan [ 162 ] =
& rtAlwaysEnabled ; systemRan [ 163 ] = & rtAlwaysEnabled ; systemRan [ 164 ]
= & rtAlwaysEnabled ; systemRan [ 165 ] = & rtAlwaysEnabled ; systemRan [ 166
] = & rtAlwaysEnabled ; systemRan [ 167 ] = & rtAlwaysEnabled ; systemRan [
168 ] = & rtAlwaysEnabled ; systemRan [ 169 ] = & rtAlwaysEnabled ; systemRan
[ 170 ] = & rtAlwaysEnabled ; systemRan [ 171 ] = & rtAlwaysEnabled ;
systemRan [ 172 ] = & rtAlwaysEnabled ; systemRan [ 173 ] = & rtAlwaysEnabled
; systemRan [ 174 ] = & rtAlwaysEnabled ; systemRan [ 175 ] = &
rtAlwaysEnabled ; systemRan [ 176 ] = & rtAlwaysEnabled ; systemRan [ 177 ] =
( sysRanDType * ) & rtDW . nbnysw2wtu . o33bpxl4on ; systemRan [ 178 ] = (
sysRanDType * ) & rtDW . nbnysw2wtu . kh3r3fv0yw ; systemRan [ 179 ] = (
sysRanDType * ) & rtDW . nbnysw2wtu . mjyyj4engg . cfq0b3accy ; systemRan [
180 ] = ( sysRanDType * ) & rtDW . nbnysw2wtu . oppfisosoh ; systemRan [ 181
] = ( sysRanDType * ) & rtDW . i02x2fl5fr . ik1h4vnwti ; systemRan [ 182 ] =
( sysRanDType * ) & rtDW . i02x2fl5fr . gkzhayocy3 ; systemRan [ 183 ] = (
sysRanDType * ) & rtDW . i02x2fl5fr . fn2ws0qfrh0 . cfq0b3accy ; systemRan [
184 ] = ( sysRanDType * ) & rtDW . i02x2fl5fr . g1l24xvjvk ; systemRan [ 185
] = ( sysRanDType * ) & rtDW . onvtpfrqwn . ikkalmwo4a ; systemRan [ 186 ] =
( sysRanDType * ) & rtDW . f2z2t5yyw1 . jjqjeeukne ; systemRan [ 187 ] = (
sysRanDType * ) & rtDW . ixmz3u3uqw ; systemRan [ 188 ] = ( sysRanDType * ) &
rtDW . c3nx5ahmxh . ncgtkhktc1 ; systemRan [ 189 ] = ( sysRanDType * ) & rtDW
. kq23drdvrd . eihhgub2fg ; systemRan [ 190 ] = ( sysRanDType * ) & rtDW .
ae5y3r3gcn ; systemRan [ 191 ] = ( sysRanDType * ) & rtDW . l4pkohbzxl ;
systemRan [ 192 ] = & rtAlwaysEnabled ; systemRan [ 193 ] = & rtAlwaysEnabled
; systemRan [ 194 ] = & rtAlwaysEnabled ; systemRan [ 195 ] = &
rtAlwaysEnabled ; systemRan [ 196 ] = & rtAlwaysEnabled ; systemRan [ 197 ] =
& rtAlwaysEnabled ; systemRan [ 198 ] = & rtAlwaysEnabled ; systemRan [ 199 ]
= & rtAlwaysEnabled ; systemRan [ 200 ] = & rtAlwaysEnabled ; systemRan [ 201
] = ( sysRanDType * ) & rtDW . iw455stvt1 ; systemRan [ 202 ] = &
rtAlwaysEnabled ; systemRan [ 203 ] = & rtAlwaysEnabled ; systemRan [ 204 ] =
& rtAlwaysEnabled ; systemRan [ 205 ] = & rtAlwaysEnabled ; systemRan [ 206 ]
= & rtAlwaysEnabled ; systemRan [ 207 ] = & rtAlwaysEnabled ; systemRan [ 208
] = & rtAlwaysEnabled ; systemRan [ 209 ] = & rtAlwaysEnabled ; systemRan [
210 ] = & rtAlwaysEnabled ; systemRan [ 211 ] = & rtAlwaysEnabled ; systemRan
[ 212 ] = & rtAlwaysEnabled ; systemRan [ 213 ] = & rtAlwaysEnabled ;
systemRan [ 214 ] = & rtAlwaysEnabled ; systemRan [ 215 ] = & rtAlwaysEnabled
; systemRan [ 216 ] = & rtAlwaysEnabled ; systemRan [ 217 ] = &
rtAlwaysEnabled ; systemRan [ 218 ] = ( sysRanDType * ) & rtDW . anhm4dpp2l ;
systemRan [ 219 ] = ( sysRanDType * ) & rtDW . anhm4dpp2l ; systemRan [ 220 ]
= ( sysRanDType * ) & rtDW . cfvgbkovvu ; systemRan [ 221 ] = ( sysRanDType *
) & rtDW . cfvgbkovvu ; rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo (
rtS ) , & ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr (
ssGetRTWExtModeInfo ( rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr (
ssGetRTWExtModeInfo ( rtS ) , ssGetTPtr ( rtS ) ) ; }
slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_UNIFIER_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP ( rtS
, mr_UNIFIER_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_UNIFIER_SetDWork ) ; rtP . Saturation1_LowerSat_fjfihtgctt = rtMinusInf ;
rtP . Saturation_LowerSat_ckp25ja5tp = rtMinusInf ; rtP .
Saturation1_LowerSat_ifds41vj3d = rtMinusInf ; rtP .
Saturation_LowerSat_egflfzvuqx = rtMinusInf ; rtP .
Saturation1_LowerSat_mtmmhddwjb = rtMinusInf ; rtP .
Saturation_LowerSat_ihlfa0mqdb = rtMinusInf ; rtP .
Saturation_UpperSat_b2a52laupk = rtInfF ; rtP . icuuav0qej .
Saturation_UpperSat = rtInf ; rtP . icuuav0qej .
Saturation_UpperSat_pioa3d5seg = rtInf ; rtP . icuuav0qej .
Saturation1_UpperSat_aot1dalvsr = rtInf ; rtP . l20xgpl0hh .
Saturation_UpperSat = rtInf ; rtP . l20xgpl0hh .
Saturation_UpperSat_jq0x0qurh0 = rtInf ; rtP . l20xgpl0hh .
Saturation1_UpperSat_ajd4wcytz4 = rtInf ; rtP . lokicy2luy .
Saturation_UpperSat = rtInf ; rtP . lokicy2luy .
Saturation_UpperSat_dxdpfm51ks = rtInf ; rtP . lokicy2luy .
Saturation1_UpperSat_g4qayk3ybh = rtInf ; rtP . hfrmr3oqrf .
Saturation_UpperSat = rtInf ; rtP . hfrmr3oqrf .
Saturation_UpperSat_jufdboaki3 = rtInf ; rtP . hfrmr3oqrf .
Saturation1_UpperSat_bgi5uatw11 = rtInf ; rtP . adqmzv0sx0 .
Saturation_UpperSat = rtInf ; rtP . adqmzv0sx0 .
Saturation_UpperSat_ollczcryiu = rtInf ; rtP . adqmzv0sx0 .
Saturation1_UpperSat_e5noinhxx3 = rtInf ; rt_RapidReadMatFileAndUpdateParams
( rtS ) ; if ( ssGetErrorStatus ( rtS ) ) { return rtS ; } ssSetNumSFunctions
( rtS , 4 ) ; { static SimStruct childSFunctions [ 4 ] ; static SimStruct *
childSFunctionPtrs [ 4 ] ; ( void ) memset ( ( void * ) & childSFunctions [ 0
] , 0 , sizeof ( childSFunctions ) ) ; ssSetSFunctions ( rtS , &
childSFunctionPtrs [ 0 ] ) ; ssSetSFunction ( rtS , 0 , & childSFunctions [ 0
] ) ; ssSetSFunction ( rtS , 1 , & childSFunctions [ 1 ] ) ; ssSetSFunction (
rtS , 2 , & childSFunctions [ 2 ] ) ; ssSetSFunction ( rtS , 3 , &
childSFunctions [ 3 ] ) ; { SimStruct * rts = ssGetSFunction ( rtS , 0 ) ;
static time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static
int_T sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof
( time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; { static struct _ssBlkInfo2 _blkInfo2 ; struct
_ssBlkInfo2 * blkInfo2 = & _blkInfo2 ; ssSetBlkInfo2Ptr ( rts , blkInfo2 ) ;
} { static struct _ssPortInfo2 _portInfo2 ; struct _ssPortInfo2 * portInfo2 =
& _portInfo2 ; _ssSetBlkInfo2PortInfo2Ptr ( rts , portInfo2 ) ; }
ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; { static struct
_ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , & methods2 ) ; } {
static struct _ssSFcnModelMethods3 methods3 ; ssSetModelMethods3 ( rts , &
methods3 ) ; } { static struct _ssSFcnModelMethods4 methods4 ;
ssSetModelMethods4 ( rts , & methods4 ) ; } { static struct _ssStatesInfo2
statesInfo2 ; static ssPeriodicStatesInfo periodicStatesInfo ; static
ssJacobianPerturbationBounds jacPerturbationBounds ; ssSetStatesInfo2 ( rts ,
& statesInfo2 ) ; ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ;
ssSetJacobianPerturbationBounds ( rts , & jacPerturbationBounds ) ; } {
static struct _ssPortInputs inputPortInfo [ 2 ] ; _ssSetNumInputPorts ( rts ,
2 ) ; ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static
struct _ssInPortUnit inputPortUnits [ 2 ] ; _ssSetPortInfo2ForInputUnits (
rts , & inputPortUnits [ 0 ] ) ; } ssSetInputPortUnit ( rts , 0 , 0 ) ;
ssSetInputPortUnit ( rts , 1 , 0 ) ; { static struct _ssInPortCoSimAttribute
inputPortCoSimAttribute [ 2 ] ; _ssSetPortInfo2ForInputCoSimAttribute ( rts ,
& inputPortCoSimAttribute [ 0 ] ) ; } ssSetInputPortIsContinuousQuantity (
rts , 0 , 0 ) ; ssSetInputPortIsContinuousQuantity ( rts , 1 , 0 ) ; {
ssSetInputPortRequiredContiguous ( rts , 0 , 1 ) ; ssSetInputPortSignal ( rts
, 0 , & rtB . lbzmmcd5bg ) ; _ssSetInputPortNumDimensions ( rts , 0 , 1 ) ;
ssSetInputPortWidth ( rts , 0 , 1 ) ; } { ssSetInputPortRequiredContiguous (
rts , 1 , 1 ) ; ssSetInputPortSignal ( rts , 1 , rtB . btiigxjvj2 ) ;
_ssSetInputPortNumDimensions ( rts , 1 , 1 ) ; ssSetInputPortWidth ( rts , 1
, 3 ) ; } } ssSetDiscStates ( rts , ( real_T * ) & rtDW . keywsrry0q ) ;
ssSetModelName ( rts , "sfun_output_to_console" ) ; ssSetPath ( rts ,
"UNIFIER/PACER/Output to Console/S-Function" ) ; if ( ssGetRTModel ( rtS ) ==
( NULL ) ) { ssSetParentSS ( rts , rtS ) ; ssSetRootSS ( rts , ssGetRootSS (
rtS ) ) ; } else { ssSetRTModel ( rts , ssGetRTModel ( rtS ) ) ;
ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts , rts ) ; } ssSetVersion
( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static mxArray * sfcnParams [ 1 ] ;
ssSetSFcnParamsCount ( rts , 1 ) ; ssSetSFcnParamsPtr ( rts , & sfcnParams [
0 ] ) ; ssSetSFcnParam ( rts , 0 , ( mxArray * ) rtP . SFunction_P1_Size ) ;
} { static struct _ssDWorkRecord dWorkRecord [ 1 ] ; static struct
_ssDWorkAuxRecord dWorkAuxRecord [ 1 ] ; ssSetSFcnDWork ( rts , dWorkRecord )
; ssSetSFcnDWorkAux ( rts , dWorkAuxRecord ) ; _ssSetNumDWork ( rts , 1 ) ;
ssSetDWorkWidth ( rts , 0 , 1 ) ; ssSetDWorkDataType ( rts , 0 , SS_DOUBLE )
; ssSetDWorkComplexSignal ( rts , 0 , 0 ) ; ssSetDWorkUsedAsDState ( rts , 0
, 1 ) ; ssSetDWork ( rts , 0 , & rtDW . keywsrry0q ) ; } {
raccelLoadSFcnMexFile ( "sfun_output_to_console" , "UNIFIER:8414" , rts , 0 )
; if ( ssGetErrorStatus ( rtS ) ) { return rtS ; } }
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 0 ; ssSetInputPortWidth
( rts , 1 , 3 ) ; ssSetInputPortDataType ( rts , 1 , SS_DOUBLE ) ;
ssSetInputPortComplexSignal ( rts , 1 , 0 ) ; ssSetInputPortFrameData ( rts ,
1 , 0 ) ; ssSetInputPortUnit ( rts , 1 , 0 ) ;
ssSetInputPortIsContinuousQuantity ( rts , 1 , 0 ) ; ssSetNumNonsampledZCs (
rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 ) ;
_ssSetInputPortConnected ( rts , 1 , 1 ) ; ssSetInputPortBufferDstPort ( rts
, 0 , - 1 ) ; ssSetInputPortBufferDstPort ( rts , 1 , - 1 ) ; } { SimStruct *
rts = ssGetSFunction ( rtS , 1 ) ; static time_T sfcnPeriod [ 1 ] ; static
time_T sfcnOffset [ 1 ] ; static int_T sfcnTsMap [ 1 ] ; ( void ) memset ( (
void * ) sfcnPeriod , 0 , sizeof ( time_T ) * 1 ) ; ( void ) memset ( ( void
* ) sfcnOffset , 0 , sizeof ( time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , &
sfcnPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rts , sfcnTsMap ) ; { static struct _ssBlkInfo2
_blkInfo2 ; struct _ssBlkInfo2 * blkInfo2 = & _blkInfo2 ; ssSetBlkInfo2Ptr (
rts , blkInfo2 ) ; } { static struct _ssPortInfo2 _portInfo2 ; struct
_ssPortInfo2 * portInfo2 = & _portInfo2 ; _ssSetBlkInfo2PortInfo2Ptr ( rts ,
portInfo2 ) ; } ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; { static
struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , & methods2
) ; } { static struct _ssSFcnModelMethods3 methods3 ; ssSetModelMethods3 (
rts , & methods3 ) ; } { static struct _ssSFcnModelMethods4 methods4 ;
ssSetModelMethods4 ( rts , & methods4 ) ; } { static struct _ssStatesInfo2
statesInfo2 ; static ssPeriodicStatesInfo periodicStatesInfo ; static
ssJacobianPerturbationBounds jacPerturbationBounds ; ssSetStatesInfo2 ( rts ,
& statesInfo2 ) ; ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ;
ssSetJacobianPerturbationBounds ( rts , & jacPerturbationBounds ) ; } {
static struct _ssPortInputs inputPortInfo [ 1 ] ; _ssSetNumInputPorts ( rts ,
1 ) ; ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static
struct _ssInPortUnit inputPortUnits [ 1 ] ; _ssSetPortInfo2ForInputUnits (
rts , & inputPortUnits [ 0 ] ) ; } ssSetInputPortUnit ( rts , 0 , 0 ) ; {
static struct _ssInPortCoSimAttribute inputPortCoSimAttribute [ 1 ] ;
_ssSetPortInfo2ForInputCoSimAttribute ( rts , & inputPortCoSimAttribute [ 0 ]
) ; } ssSetInputPortIsContinuousQuantity ( rts , 0 , 0 ) ; {
ssSetInputPortRequiredContiguous ( rts , 0 , 1 ) ; ssSetInputPortSignal ( rts
, 0 , & rtB . pr1zzcknox ) ; _ssSetInputPortNumDimensions ( rts , 0 , 1 ) ;
ssSetInputPortWidth ( rts , 0 , 1 ) ; } } { static struct _ssPortOutputs
outputPortInfo [ 1 ] ; ssSetPortInfoForOutputs ( rts , & outputPortInfo [ 0 ]
) ; _ssSetNumOutputPorts ( rts , 1 ) ; { static struct _ssOutPortUnit
outputPortUnits [ 1 ] ; _ssSetPortInfo2ForOutputUnits ( rts , &
outputPortUnits [ 0 ] ) ; } ssSetOutputPortUnit ( rts , 0 , 0 ) ; { static
struct _ssOutPortCoSimAttribute outputPortCoSimAttribute [ 1 ] ;
_ssSetPortInfo2ForOutputCoSimAttribute ( rts , & outputPortCoSimAttribute [ 0
] ) ; } ssSetOutputPortIsContinuousQuantity ( rts , 0 , 0 ) ; {
_ssSetOutputPortNumDimensions ( rts , 0 , 1 ) ; ssSetOutputPortWidth ( rts ,
0 , 16 ) ; ssSetOutputPortSignal ( rts , 0 , ( ( real_T * ) rtB . j3t4wyjy41
) ) ; } } ssSetModelName ( rts , "sfun_joyinfoex" ) ; ssSetPath ( rts ,
"UNIFIER/STICK_INPUT/S-Function" ) ; if ( ssGetRTModel ( rtS ) == ( NULL ) )
{ ssSetParentSS ( rts , rtS ) ; ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; }
else { ssSetRTModel ( rts , ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , (
NULL ) ) ; ssSetRootSS ( rts , rts ) ; } ssSetVersion ( rts ,
SIMSTRUCT_VERSION_LEVEL2 ) ; { raccelLoadSFcnMexFile ( "sfun_joyinfoex" ,
"UNIFIER:31022" , rts , 1 ) ; if ( ssGetErrorStatus ( rtS ) ) { return rtS ;
} } sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.002 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 1 ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetInputPortConnected ( rts , 0 , 1 )
; _ssSetOutputPortConnected ( rts , 0 , 1 ) ; _ssSetOutputPortBeingMerged (
rts , 0 , 0 ) ; ssSetInputPortBufferDstPort ( rts , 0 , - 1 ) ; } { SimStruct
* rts = ssGetSFunction ( rtS , 2 ) ; static time_T sfcnPeriod [ 1 ] ; static
time_T sfcnOffset [ 1 ] ; static int_T sfcnTsMap [ 1 ] ; ( void ) memset ( (
void * ) sfcnPeriod , 0 , sizeof ( time_T ) * 1 ) ; ( void ) memset ( ( void
* ) sfcnOffset , 0 , sizeof ( time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , &
sfcnPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rts , sfcnTsMap ) ; { static struct _ssBlkInfo2
_blkInfo2 ; struct _ssBlkInfo2 * blkInfo2 = & _blkInfo2 ; ssSetBlkInfo2Ptr (
rts , blkInfo2 ) ; } { static struct _ssPortInfo2 _portInfo2 ; struct
_ssPortInfo2 * portInfo2 = & _portInfo2 ; _ssSetBlkInfo2PortInfo2Ptr ( rts ,
portInfo2 ) ; } ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; { static
struct _ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , & methods2
) ; } { static struct _ssSFcnModelMethods3 methods3 ; ssSetModelMethods3 (
rts , & methods3 ) ; } { static struct _ssSFcnModelMethods4 methods4 ;
ssSetModelMethods4 ( rts , & methods4 ) ; } { static struct _ssStatesInfo2
statesInfo2 ; static ssPeriodicStatesInfo periodicStatesInfo ; static
ssJacobianPerturbationBounds jacPerturbationBounds ; ssSetStatesInfo2 ( rts ,
& statesInfo2 ) ; ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ;
ssSetJacobianPerturbationBounds ( rts , & jacPerturbationBounds ) ; } {
static struct _ssPortOutputs outputPortInfo [ 3 ] ; ssSetPortInfoForOutputs (
rts , & outputPortInfo [ 0 ] ) ; _ssSetNumOutputPorts ( rts , 3 ) ; { static
struct _ssOutPortUnit outputPortUnits [ 3 ] ; _ssSetPortInfo2ForOutputUnits (
rts , & outputPortUnits [ 0 ] ) ; } ssSetOutputPortUnit ( rts , 0 , 0 ) ;
ssSetOutputPortUnit ( rts , 1 , 0 ) ; ssSetOutputPortUnit ( rts , 2 , 0 ) ; {
static struct _ssOutPortCoSimAttribute outputPortCoSimAttribute [ 3 ] ;
_ssSetPortInfo2ForOutputCoSimAttribute ( rts , & outputPortCoSimAttribute [ 0
] ) ; } ssSetOutputPortIsContinuousQuantity ( rts , 0 , 0 ) ;
ssSetOutputPortIsContinuousQuantity ( rts , 1 , 0 ) ;
ssSetOutputPortIsContinuousQuantity ( rts , 2 , 0 ) ; {
_ssSetOutputPortNumDimensions ( rts , 0 , 1 ) ; ssSetOutputPortWidth ( rts ,
0 , 1 ) ; ssSetOutputPortSignal ( rts , 0 , ( ( real_T * ) & rtB . nci1mnnllt
) ) ; } { _ssSetOutputPortNumDimensions ( rts , 1 , 1 ) ;
ssSetOutputPortWidth ( rts , 1 , 1 ) ; ssSetOutputPortSignal ( rts , 1 , ( (
real_T * ) & rtB . elv40zm3eo ) ) ; } { _ssSetOutputPortNumDimensions ( rts ,
2 , 1 ) ; ssSetOutputPortWidth ( rts , 2 , 1 ) ; ssSetOutputPortSignal ( rts
, 2 , ( ( real_T * ) & rtB . jopjoprq0c ) ) ; } } ssSetModelName ( rts ,
"sfun_getSystemClockTimeval" ) ; ssSetPath ( rts ,
"UNIFIER/PACER/soft real time subsystem/get elapsed wall-clock time/S-Function"
) ; if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; {
raccelLoadSFcnMexFile ( "sfun_getSystemClockTimeval" , "UNIFIER:8429" , rts ,
2 ) ; if ( ssGetErrorStatus ( rtS ) ) { return rtS ; } }
sfcnInitializeSampleTimes ( rts ) ; ssSetSampleTime ( rts , 0 , 0.0 ) ;
ssSetOffsetTime ( rts , 0 , 0.0 ) ; sfcnTsMap [ 0 ] = 0 ;
ssSetNumNonsampledZCs ( rts , 0 ) ; _ssSetOutputPortConnected ( rts , 0 , 1 )
; _ssSetOutputPortConnected ( rts , 1 , 1 ) ; _ssSetOutputPortConnected ( rts
, 2 , 1 ) ; _ssSetOutputPortBeingMerged ( rts , 0 , 0 ) ;
_ssSetOutputPortBeingMerged ( rts , 1 , 0 ) ; _ssSetOutputPortBeingMerged (
rts , 2 , 0 ) ; } { SimStruct * rts = ssGetSFunction ( rtS , 3 ) ; static
time_T sfcnPeriod [ 1 ] ; static time_T sfcnOffset [ 1 ] ; static int_T
sfcnTsMap [ 1 ] ; ( void ) memset ( ( void * ) sfcnPeriod , 0 , sizeof (
time_T ) * 1 ) ; ( void ) memset ( ( void * ) sfcnOffset , 0 , sizeof (
time_T ) * 1 ) ; ssSetSampleTimePtr ( rts , & sfcnPeriod [ 0 ] ) ;
ssSetOffsetTimePtr ( rts , & sfcnOffset [ 0 ] ) ; ssSetSampleTimeTaskIDPtr (
rts , sfcnTsMap ) ; { static struct _ssBlkInfo2 _blkInfo2 ; struct
_ssBlkInfo2 * blkInfo2 = & _blkInfo2 ; ssSetBlkInfo2Ptr ( rts , blkInfo2 ) ;
} { static struct _ssPortInfo2 _portInfo2 ; struct _ssPortInfo2 * portInfo2 =
& _portInfo2 ; _ssSetBlkInfo2PortInfo2Ptr ( rts , portInfo2 ) ; }
ssSetMdlInfoPtr ( rts , ssGetMdlInfoPtr ( rtS ) ) ; { static struct
_ssSFcnModelMethods2 methods2 ; ssSetModelMethods2 ( rts , & methods2 ) ; } {
static struct _ssSFcnModelMethods3 methods3 ; ssSetModelMethods3 ( rts , &
methods3 ) ; } { static struct _ssSFcnModelMethods4 methods4 ;
ssSetModelMethods4 ( rts , & methods4 ) ; } { static struct _ssStatesInfo2
statesInfo2 ; static ssPeriodicStatesInfo periodicStatesInfo ; static
ssJacobianPerturbationBounds jacPerturbationBounds ; ssSetStatesInfo2 ( rts ,
& statesInfo2 ) ; ssSetPeriodicStatesInfo ( rts , & periodicStatesInfo ) ;
ssSetJacobianPerturbationBounds ( rts , & jacPerturbationBounds ) ; } {
static struct _ssPortInputs inputPortInfo [ 1 ] ; _ssSetNumInputPorts ( rts ,
1 ) ; ssSetPortInfoForInputs ( rts , & inputPortInfo [ 0 ] ) ; { static
struct _ssInPortUnit inputPortUnits [ 1 ] ; _ssSetPortInfo2ForInputUnits (
rts , & inputPortUnits [ 0 ] ) ; } ssSetInputPortUnit ( rts , 0 , 0 ) ; {
static struct _ssInPortCoSimAttribute inputPortCoSimAttribute [ 1 ] ;
_ssSetPortInfo2ForInputCoSimAttribute ( rts , & inputPortCoSimAttribute [ 0 ]
) ; } ssSetInputPortIsContinuousQuantity ( rts , 0 , 0 ) ; {
ssSetInputPortRequiredContiguous ( rts , 0 , 1 ) ; ssSetInputPortSignal ( rts
, 0 , & rtB . hwhq5yb2fg ) ; _ssSetInputPortNumDimensions ( rts , 0 , 1 ) ;
ssSetInputPortWidth ( rts , 0 , 1 ) ; } } ssSetModelName ( rts , "sfun_sleep"
) ; ssSetPath ( rts , "UNIFIER/PACER/soft real time subsystem/S-Function" ) ;
if ( ssGetRTModel ( rtS ) == ( NULL ) ) { ssSetParentSS ( rts , rtS ) ;
ssSetRootSS ( rts , ssGetRootSS ( rtS ) ) ; } else { ssSetRTModel ( rts ,
ssGetRTModel ( rtS ) ) ; ssSetParentSS ( rts , ( NULL ) ) ; ssSetRootSS ( rts
, rts ) ; } ssSetVersion ( rts , SIMSTRUCT_VERSION_LEVEL2 ) ; { static
mxArray * sfcnParams [ 1 ] ; ssSetSFcnParamsCount ( rts , 1 ) ;
ssSetSFcnParamsPtr ( rts , & sfcnParams [ 0 ] ) ; ssSetSFcnParam ( rts , 0 ,
( mxArray * ) rtP . SFunction_P1_Size_msgrnckvzs ) ; } {
raccelLoadSFcnMexFile ( "sfun_sleep" , "UNIFIER:8424" , rts , 3 ) ; if (
ssGetErrorStatus ( rtS ) ) { return rtS ; } } sfcnInitializeSampleTimes ( rts
) ; ssSetSampleTime ( rts , 0 , 0.01 ) ; ssSetOffsetTime ( rts , 0 , 0.0 ) ;
sfcnTsMap [ 0 ] = 2 ; ssSetNumNonsampledZCs ( rts , 0 ) ;
_ssSetInputPortConnected ( rts , 0 , 1 ) ; ssSetInputPortBufferDstPort ( rts
, 0 , - 1 ) ; } } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 3 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID3 ( tid ) ; }
