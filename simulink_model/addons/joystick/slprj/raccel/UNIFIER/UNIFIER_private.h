#ifndef RTW_HEADER_UNIFIER_private_h_
#define RTW_HEADER_UNIFIER_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "UNIFIER.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
    ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
    }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((ptr));\
    (ptr) = (NULL);\
    }
#else
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((void *)(ptr));\
    (ptr) = (NULL);\
    }
#endif
#endif
#ifndef __RTW_UTFREE__
extern void * utMalloc ( size_t ) ; extern void utFree ( void * ) ;
#endif
extern void rt_mrdivide_U1d1x3_U2d3x3_Yd1x3_snf ( const real_T u0 [ 3 ] ,
const real_T u1 [ 9 ] , real_T y [ 3 ] ) ; void * rt_TDelayCreateBuf ( int_T
numBuffer , int_T bufSz , int_T elemSz ) ; boolean_T
rt_TDelayUpdateTailOrGrowBuf ( int_T * bufSzPtr , int_T * tailPtr , int_T *
headPtr , int_T * lastPtr , real_T tMinusDelay , real_T * * uBufPtr ,
boolean_T isfixedbuf , boolean_T istransportdelay , int_T * maxNewBufSzPtr )
; real_T rt_TDelayInterpolate ( real_T tMinusDelay , real_T tStart , real_T *
uBuf , int_T bufSz , int_T * lastIdx , int_T oldestIdx , int_T newIdx ,
real_T initOutput , boolean_T discrete , boolean_T
minorStepAndTAtLastMajorOutput ) ; extern real_T look1_plinlcapw ( real_T u0
, const real_T bp0 [ ] , const real_T table [ ] , uint32_T prevIndex [ ] ,
uint32_T maxIndex ) ; extern real_T look2_plinlcpw ( real_T u0 , real_T u1 ,
const real_T bp0 [ ] , const real_T bp1 [ ] , const real_T table [ ] ,
uint32_T prevIndex [ ] , const uint32_T maxIndex [ ] , uint32_T stride ) ;
extern uint32_T linsearch_u32d ( real_T u , const real_T bp [ ] , uint32_T
startIndex ) ; extern uint32_T plook_u32ff_lincpa ( real32_T u , const
real32_T bp [ ] , uint32_T maxIndex , real32_T * fraction , uint32_T *
prevIndex ) ; extern uint32_T plook_u32ff_linxp ( real32_T u , const real32_T
bp [ ] , uint32_T maxIndex , real32_T * fraction , uint32_T * prevIndex ) ;
extern real32_T intrp2d_fu32fl_pw ( const uint32_T bpIndex [ ] , const
real32_T frac [ ] , const real32_T table [ ] , const uint32_T stride ) ;
extern real_T look2_plinlxpw ( real_T u0 , real_T u1 , const real_T bp0 [ ] ,
const real_T bp1 [ ] , const real_T table [ ] , uint32_T prevIndex [ ] ,
const uint32_T maxIndex [ ] , uint32_T stride ) ; extern real_T
look1_plinlcpw ( real_T u0 , const real_T bp0 [ ] , const real_T table [ ] ,
uint32_T prevIndex [ ] , uint32_T maxIndex ) ; extern real_T look1_plinlxpw (
real_T u0 , const real_T bp0 [ ] , const real_T table [ ] , uint32_T
prevIndex [ ] , uint32_T maxIndex ) ; extern real32_T intrp4d_fu32fla_pw (
const uint32_T bpIndex [ ] , const real32_T frac [ ] , const real32_T table [
] , const uint32_T stride [ ] , const uint32_T maxIndex [ ] ) ; extern
uint32_T plook_linxp ( real_T u , const real_T bp [ ] , uint32_T maxIndex ,
real_T * fraction , uint32_T * prevIndex ) ; extern real32_T
look1_iflf_pbinlcpw ( real32_T u0 , const real32_T bp0 [ ] , const real32_T
table [ ] , uint32_T prevIndex [ ] , uint32_T maxIndex ) ; extern uint32_T
plook_u32ff_lincp ( real32_T u , const real32_T bp [ ] , uint32_T maxIndex ,
real32_T * fraction , uint32_T * prevIndex ) ; extern real32_T intrp4d_fl_pw
( const uint32_T bpIndex [ ] , const real_T frac [ ] , const real32_T table [
] , const uint32_T stride [ ] ) ; extern real32_T intrp3d_fl_pw ( const
uint32_T bpIndex [ ] , const real_T frac [ ] , const real32_T table [ ] ,
const uint32_T stride [ ] ) ; extern uint32_T linsearch_u32f ( real32_T u ,
const real32_T bp [ ] , uint32_T startIndex ) ; extern void
sfun_output_to_console ( SimStruct * rts ) ; extern void sfun_joyinfoex (
SimStruct * rts ) ; extern void sfun_getSystemClockTimeval ( SimStruct * rts
) ; extern void sfun_sleep ( SimStruct * rts ) ; void rt_TDelayFreeBuf ( void
* buf ) ; extern void ox2le0kgnd ( jipjhipnyt * localB , jyuzl13vhf * localP
, bqurd3rojz * localX ) ; extern void hq4sl52upq ( jyuzl13vhf * localP ,
bqurd3rojz * localX ) ; extern void lw2f0ybkpo ( SimStruct * rtS_p ,
gnqopqlfcy * localDW ) ; extern void nuri42chkg ( real_T ku14hiphkz , real_T
rtp_d_m , gnqopqlfcy * localDW , jyuzl13vhf * localP , bqurd3rojz * localX ,
mhtibmack1 * localXdot ) ; extern void htjfqgjeis ( gnqopqlfcy * localDW ) ;
extern void cz2051lnsz ( SimStruct * rtS_i , boolean_T lcpumqlhld , real_T
rtp_d_m , jipjhipnyt * localB , gnqopqlfcy * localDW , jyuzl13vhf * localP ,
bqurd3rojz * localX ) ; extern void pm13c03kzl ( const real_T oj5oksea0w [ 3
] , boolean_T nvpbnzaf1k , np24g4gdau * localB ) ; extern void i5nfd4afyg (
real_T hxpylb4lh0 , real_T oonhadulgs , real_T a3fpxv10so , real_T nmdy3bug12
, real_T jbzlh1jroc , real_T ozerumep55 , real_T j5otdaiiix , real_T
dh5l25vrf3 , pinnhnaiew * localB ) ; extern void fn2ws0qfrh ( real_T
m0safyvoxv , real_T * gdwoerwoep ) ; extern void cm0yj40hhf ( const real_T
h4emru2t0x [ 7 ] , real_T aghwm2hpkg [ 3 ] , pnudx1mtob * localDW ,
fdcovmotmw * localP ) ; extern void biiojft2vb ( const real_T fu43kwbssd [ 7
] , real_T lenyod4yd0 [ 3 ] , mdby2hi4om * localDW , l3yzcch5v1 * localP ) ;
extern void d0idgyu5pk ( ciyews10cv * localDW ) ; extern void dzsm3cj0kl (
SimStruct * rtS_p , real_T ay5g1lwkfe , ciyews10cv * localDW ) ; extern void
j0kpvzuldr ( albhcg1zih * localDW ) ; extern void iyuu340osl ( SimStruct *
rtS_f , real_T nhudoztxmk , albhcg1zih * localDW ) ; extern void dxykukmlj3 (
b0evmqbjvs * localDW ) ; extern void dhyklihgew ( SimStruct * rtS_g , real_T
fxkk0va3bb , b0evmqbjvs * localDW ) ; extern void fed3ofjdbn ( ggcfv2g5xi *
localDW ) ; extern void avztlaubna ( SimStruct * rtS_n , real_T meeqhyp4gt ,
ggcfv2g5xi * localDW ) ; extern void akjxpklgdz ( kklqz5j5hc * localDW ) ;
extern void ctbmhlk4sc ( SimStruct * rtS_l , const real_T gy4fhi10cj [ 9 ] ,
real_T rtp_action , real_T rtp_tolerance , kklqz5j5hc * localDW , ilxhyihvcy
* localP ) ; extern void pxudjjmfpa ( real_T d2n5udblwn , real_T omoqupcoad ,
pszllhqplt * localB ) ; extern void bezhj2arkr ( const uint8_T lgciwm45fa [
39 ] , real32_T pggtavs035 , fskif30kch * localB ) ; extern void bhtkyxb11t (
const uint8_T ellmm2bjow [ 40 ] , real32_T kxhf0arinc , p3ecnoeui5 * localB )
; extern void f3054a4w15 ( const uint8_T na5etytz23 [ 37 ] , real32_T
emewi5swva , dt1fegwimr * localB ) ; extern void kgud4px1j0 ( const uint8_T
nhadz0vqhl [ 51 ] , real32_T eifjvvxpgu , lkm4qo0z2m * localB ) ; extern void
pv5uhtasoj ( void ) ; extern void ggl0rm1hau ( int32_T g3vkebdqap ) ; extern
void ggl0rm1hauTID3 ( int32_T g3vkebdqap ) ; extern void f5orepjga5 ( void )
; extern void ppqwruko3j ( int32_T jbk4x2dzbh ) ; extern void ppqwruko3jTID3
( int32_T jbk4x2dzbh ) ; extern void fhcttf5uve ( void ) ; extern void
femu5gktcp ( int32_T bu4vq0ye4b ) ; extern void femu5gktcpTID3 ( int32_T
bu4vq0ye4b ) ; extern void kyeab3bcz3 ( void ) ; extern void ozenep403f (
int32_T peigugf4ug ) ; extern void ozenep403fTID3 ( int32_T peigugf4ug ) ;
extern void nonjggp2zg ( int32_T jagyoxt1fz ) ; extern void nonjggp2zgTID3 (
int32_T jagyoxt1fz ) ; extern void gpbjdtigub ( void ) ; extern void
jiwpvcutff ( int32_T nbulfcirnz ) ; extern void jiwpvcutffTID3 ( int32_T
nbulfcirnz ) ; extern void jpp5owoa3n ( int32_T agcfuo5anh ) ; extern void
jpp5owoa3nTID3 ( int32_T agcfuo5anh ) ; extern void fzffryaiii ( void ) ;
extern void pi0mmsuhtl ( int32_T mnasfprcad ) ; extern void pi0mmsuhtlTID3 (
int32_T mnasfprcad ) ; extern void hs25t3rzkd ( void ) ; extern void
i0h2b0hhep ( int32_T pn21hsf1nt ) ; extern void i0h2b0hhepTID3 ( int32_T
pn21hsf1nt ) ; extern void mi1xg034nq ( void ) ; extern void pd4mrqlmyf (
int32_T ozemgz40q5 ) ; extern void pd4mrqlmyfTID3 ( int32_T ozemgz40q5 ) ;
extern void dlenkfj0qn ( void ) ; extern void dufjikm3ah ( int32_T hkyz3tdamy
) ; extern void dufjikm3ahTID3 ( int32_T hkyz3tdamy ) ; extern void
j53etjiqle ( int32_T npneggn0zt ) ; extern void j53etjiqleTID3 ( int32_T
npneggn0zt ) ; extern void l4blg1j0ys ( void ) ; extern void hxpjklhlk1 (
int32_T gs5dmybnc3 ) ; extern void hxpjklhlk1TID3 ( int32_T gs5dmybnc3 ) ;
extern void l13lfpb0of ( int32_T ks0xzpbkcs ) ; extern void l13lfpb0ofTID3 (
int32_T ks0xzpbkcs ) ; extern void dmjspgs0na ( void ) ; extern void
o2j1dr3sk2 ( int32_T dolvnvicly ) ; extern void o2j1dr3sk2TID3 ( int32_T
dolvnvicly ) ; extern void detis300xd ( void ) ; extern void mtrxzbtg4o (
int32_T obd2pbammo ) ; extern void mtrxzbtg4oTID3 ( int32_T obd2pbammo ) ;
extern void oza4gbpsob ( void ) ; extern void e3uu0qv2yt ( int32_T hpkwusiilh
) ; extern void e3uu0qv2ytTID3 ( int32_T hpkwusiilh ) ; extern void
iepuwumnrn ( void ) ; extern void hircojder3 ( int32_T gk52j5ybqz ) ; extern
void hircojder3TID3 ( int32_T gk52j5ybqz ) ; extern void oje4kmdodo ( void )
; extern void fxo32xx45w ( int32_T hd0skx540u ) ; extern void fxo32xx45wTID3
( int32_T hd0skx540u ) ; extern void lkoepecx5g ( int32_T kge5bjv5mb ) ;
extern void lkoepecx5gTID3 ( int32_T kge5bjv5mb ) ; extern void d3x2zb3bdo (
void ) ; extern void fpg3s0wb2o ( int32_T etxrqgcgbg ) ; extern void
fpg3s0wb2oTID3 ( int32_T etxrqgcgbg ) ; extern void gur2dlo22c ( int32_T
nltn40tmoq ) ; extern void gur2dlo22cTID3 ( int32_T nltn40tmoq ) ; extern
void f3fjaipn5f ( void ) ; extern void otzd1cms4c ( int32_T kazjt0ajc5 ) ;
extern void otzd1cms4cTID3 ( int32_T kazjt0ajc5 ) ; extern void cysit5kmlr (
void ) ; extern void fpyiqjkxe4 ( int32_T dhbnwu32ri ) ; extern void
fpyiqjkxe4TID3 ( int32_T dhbnwu32ri ) ; extern void n5333o35g0 ( void ) ;
extern void gq0vzmvbii ( int32_T f5u0dk5jdf ) ; extern void gq0vzmvbiiTID3 (
int32_T f5u0dk5jdf ) ; extern void mbx5mzfv5k ( void ) ; extern void
lrwp4abblu ( int32_T bgaamib02m ) ; extern void lrwp4abbluTID3 ( int32_T
bgaamib02m ) ; extern void at3ek3k55r ( void ) ; extern void edz33uvfnq (
int32_T cut0v5g3yi ) ; extern void edz33uvfnqTID3 ( int32_T cut0v5g3yi ) ;
extern void o1qccxjyb0 ( int32_T d3uoiznip0 ) ; extern void o1qccxjyb0TID3 (
int32_T d3uoiznip0 ) ; extern void iy3uud2hdf ( void ) ; extern void
c1bqh5nyuc ( int32_T dvs4im5o1g ) ; extern void c1bqh5nyucTID3 ( int32_T
dvs4im5o1g ) ; extern void nthclqxgfx ( int32_T hknizctevp ) ; extern void
nthclqxgfxTID3 ( int32_T hknizctevp ) ; extern void lkfq4h3l25 ( void ) ;
extern void fs2jlt5vxt ( int32_T cuoujoaix3 ) ; extern void fs2jlt5vxtTID3 (
int32_T cuoujoaix3 ) ; extern void pyrdagnyo4 ( void ) ; extern void
bvcrkjfwjy ( int32_T cz32khoqjf ) ; extern void bvcrkjfwjyTID3 ( int32_T
cz32khoqjf ) ; extern void fzq5puknp1 ( void ) ; extern void bo1p4zvpzl (
int32_T ocipuayho4 ) ; extern void bo1p4zvpzlTID3 ( int32_T ocipuayho4 ) ;
extern void m2y4xzql5g ( void ) ; extern void npienbht1r ( int32_T jswqvylipj
) ; extern void npienbht1rTID3 ( int32_T jswqvylipj ) ; extern void
ca44jyxscj ( void ) ; extern void avd00xkr3e ( int32_T ei4vnnuv1y ) ; extern
void avd00xkr3eTID3 ( int32_T ei4vnnuv1y ) ; extern void fmrsksrnzz ( int32_T
irgnejkoh4 ) ; extern void fmrsksrnzzTID3 ( int32_T irgnejkoh4 ) ; extern
void fjn4uebnlm ( void ) ; extern void eezkdrz3yw ( int32_T iw4jh3lfnt ) ;
extern void eezkdrz3ywTID3 ( int32_T iw4jh3lfnt ) ; extern void hkavxjjm4m (
int32_T gyebqgbftr ) ; extern void hkavxjjm4mTID3 ( int32_T gyebqgbftr ) ;
extern void mlcjwu0myw ( void ) ; extern void j4wzsijapu ( int32_T ancmdcdnjw
) ; extern void j4wzsijapuTID3 ( int32_T ancmdcdnjw ) ;
#if defined(MULTITASKING)
#error Model (UNIFIER) was built in \SingleTasking solver mode, however the MULTITASKING define is \present. If you have multitasking (e.g. -DMT or -DMULTITASKING) \defined on the Code Generation page of Simulation parameter dialog, please \remove it and on the Solver page, select solver mode \MultiTasking. If the Simulation parameter dialog is configured \correctly, please verify that your template makefile is \configured correctly.
#endif
#endif
