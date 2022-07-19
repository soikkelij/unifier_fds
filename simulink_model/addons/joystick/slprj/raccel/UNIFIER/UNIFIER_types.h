#ifndef RTW_HEADER_UNIFIER_types_h_
#define RTW_HEADER_UNIFIER_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#ifndef DEFINED_TYPEDEF_FOR_struct_bNRJ7ulZEuVpyVfYNMoQAH_
#define DEFINED_TYPEDEF_FOR_struct_bNRJ7ulZEuVpyVfYNMoQAH_
typedef struct { real_T use_joystick ; real_T dt ; real_T x_NED_idx [ 3 ] ;
real_T x_uvw_kb_idx [ 3 ] ; real_T x_phithepsi_idx [ 3 ] ; real_T x_pqr_idx [
3 ] ; real_T path_u_pert [ 25 ] ; real_T path_num_u ; real_T path_kb [ 3 ] ;
real_T path_kf ; real_T path_kc ; real_T path_ki ; real_T path_ka ; real_T
path_int0_from_command [ 3 ] ; real_T path_y_ref_dot_llim [ 3 ] ; real_T
path_y_ref_dot_ulim [ 3 ] ; real_T path_int0 [ 3 ] ; real_T path_u_llim [ 5 ]
; real_T path_u_ulim [ 5 ] ; real_T path_u_dot_llim [ 5 ] ; real_T
path_u_dot_ulim [ 5 ] ; real_T path_W_pref [ 25 ] ; real_T path_W_des [ 9 ] ;
real_T path_Bmat_IC [ 15 ] ; real_T att_kb [ 3 ] ; real_T att_kf ; real_T
att_kc ; real_T att_ki ; real_T att_ka ; real_T att_y_ref_dot_llim [ 3 ] ;
real_T att_y_ref_dot_ulim [ 3 ] ; real_T att_int0 ; real_T
att_int0_from_command ; real_T rate_y_dot_idx [ 3 ] ; real_T k_DEP_slope ;
real_T rate_u_pert [ 16 ] ; real_T rate_num_u ; real_T rate_kb ; real_T
rate_kf ; real_T rate_kc ; real_T rate_ki ; real_T rate_ka ; real_T
rate_y_ref_dot_llim [ 3 ] ; real_T rate_y_ref_dot_ulim [ 3 ] ; real_T
rate_int0 ; real_T rate_int0_from_command ; real_T rate_u_llim [ 4 ] ; real_T
rate_u_ulim [ 4 ] ; real_T rate_u_dot_llim [ 4 ] ; real_T rate_u_dot_ulim [ 4
] ; real_T rate_u_pref [ 4 ] ; real_T rate_W_pref [ 16 ] ; real_T rate_W_des
[ 9 ] ; real_T rate_Bmat_IC [ 12 ] ; } struct_bNRJ7ulZEuVpyVfYNMoQAH ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_ledTFd3zOA1QjIJZGqbRtH_
#define DEFINED_TYPEDEF_FOR_struct_ledTFd3zOA1QjIJZGqbRtH_
typedef struct { real_T beta [ 13 ] ; real_T aoa [ 15 ] ; real_T ref_CG [ 3 ]
; real32_T CD [ 195 ] ; real32_T CS [ 195 ] ; real32_T CL [ 195 ] ; real32_T
CMx [ 195 ] ; real32_T CMy [ 195 ] ; real32_T CMz [ 195 ] ; }
struct_ledTFd3zOA1QjIJZGqbRtH ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_X4VfLKyPh2o5xFDym0ZDqD_
#define DEFINED_TYPEDEF_FOR_struct_X4VfLKyPh2o5xFDym0ZDqD_
typedef struct { real32_T flap_defl [ 5 ] ; real32_T alphas [ 25 ] ; real32_T
V_infs [ 2 ] ; real32_T DEP_J [ 7 ] ; real32_T alpha_induced [ 28000 ] ;
real32_T V_induced [ 28000 ] ; real32_T Xs_LE [ 16 ] ; real32_T Ys_LE [ 16 ]
; real32_T Zs_LE [ 16 ] ; uint8_T sl_padding0 [ 4 ] ; }
struct_X4VfLKyPh2o5xFDym0ZDqD ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_jutHZYEwOoNeidUZKCLQ8B_
#define DEFINED_TYPEDEF_FOR_struct_jutHZYEwOoNeidUZKCLQ8B_
typedef struct { real32_T rude_defl [ 10 ] ; real32_T alphas [ 13 ] ;
real32_T betas [ 9 ] ; real32_T CFx [ 18720 ] ; real32_T CFy [ 18720 ] ;
real32_T CFz [ 18720 ] ; real32_T CMx [ 18720 ] ; real32_T CMy [ 18720 ] ;
real32_T CMz [ 18720 ] ; real32_T Xs_LE [ 16 ] ; real32_T Ys_LE [ 16 ] ;
real32_T Zs_LE [ 16 ] ; } struct_jutHZYEwOoNeidUZKCLQ8B ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_IzJ4J0FtAuhnGd5tRgSyHE_
#define DEFINED_TYPEDEF_FOR_struct_IzJ4J0FtAuhnGd5tRgSyHE_
typedef struct { real32_T flap_defl [ 5 ] ; real32_T alphas [ 25 ] ; real32_T
V [ 2 ] ; real32_T DEP_J [ 7 ] ; real32_T CD [ 8750 ] ; real32_T CS [ 8750 ]
; real32_T CL [ 8750 ] ; real32_T CMx [ 8750 ] ; real32_T CMy [ 8750 ] ;
real32_T CMz [ 8750 ] ; real32_T LE_Xs [ 5 ] ; real32_T LE_Ys [ 5 ] ;
real32_T LE_Zs [ 5 ] ; } struct_IzJ4J0FtAuhnGd5tRgSyHE ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_yWIZFWBbymsS8L1W0LWVH_
#define DEFINED_TYPEDEF_FOR_struct_yWIZFWBbymsS8L1W0LWVH_
typedef struct { real32_T ail_defl [ 7 ] ; real32_T alphas [ 25 ] ; real32_T
V [ 2 ] ; real32_T DEP_J [ 7 ] ; real32_T CD [ 4900 ] ; real32_T CS [ 4900 ]
; real32_T CL [ 4900 ] ; real32_T CMx [ 4900 ] ; real32_T CMy [ 4900 ] ;
real32_T CMz [ 4900 ] ; real32_T LE_Xs [ 2 ] ; real32_T LE_Ys [ 2 ] ;
real32_T LE_Zs [ 2 ] ; uint8_T sl_padding0 [ 4 ] ; }
struct_yWIZFWBbymsS8L1W0LWVH ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_fnuCCPniuRknyr94YhzxZ_
#define DEFINED_TYPEDEF_FOR_struct_fnuCCPniuRknyr94YhzxZ_
typedef struct { real_T V_vec [ 43 ] ; real_T T_vec [ 91 ] ; real_T rpm_gird
[ 3913 ] ; } struct_fnuCCPniuRknyr94YhzxZ ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_e4KmvBjsHkMILSnyqn1SNH_
#define DEFINED_TYPEDEF_FOR_struct_e4KmvBjsHkMILSnyqn1SNH_
typedef struct { real_T V [ 19 ] ; real_T actf [ 19 ] ; }
struct_e4KmvBjsHkMILSnyqn1SNH ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_nC6b04CeB5t4pOaoQVXKo_
#define DEFINED_TYPEDEF_FOR_struct_nC6b04CeB5t4pOaoQVXKo_
typedef struct { real_T J [ 46 ] ; real_T C_T [ 46 ] ; real_T C_Q [ 46 ] ;
struct_fnuCCPniuRknyr94YhzxZ rpm_lookup ; struct_e4KmvBjsHkMILSnyqn1SNH
limits ; } struct_nC6b04CeB5t4pOaoQVXKo ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_jgnmaTiP1kwpD95SOjXYyE_
#define DEFINED_TYPEDEF_FOR_struct_jgnmaTiP1kwpD95SOjXYyE_
typedef struct { real_T V_low_lim [ 6 ] ; real_T T_low_lim [ 6 ] ; real_T
V_up_lim [ 5 ] ; real_T T_up_lim [ 5 ] ; } struct_jgnmaTiP1kwpD95SOjXYyE ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_OvGmMrPqfNtzpqofYdArSB_
#define DEFINED_TYPEDEF_FOR_struct_OvGmMrPqfNtzpqofYdArSB_
typedef struct { struct_jgnmaTiP1kwpD95SOjXYyE limits ; real_T V_vec [ 13 ] ;
real_T T_vec [ 41 ] ; real_T Q_grid [ 533 ] ; real_T P_grid [ 533 ] ; }
struct_OvGmMrPqfNtzpqofYdArSB ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_AWjdOOrOVrHaHkEufNPoWF_
#define DEFINED_TYPEDEF_FOR_struct_AWjdOOrOVrHaHkEufNPoWF_
typedef struct { real_T V [ 49 ] ; real_T actf [ 49 ] ; }
struct_AWjdOOrOVrHaHkEufNPoWF ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_hSuglyLOliAF2HOUfYjwBD_
#define DEFINED_TYPEDEF_FOR_struct_hSuglyLOliAF2HOUfYjwBD_
typedef struct { real_T V [ 49 ] ; real_T flap [ 49 ] ; }
struct_hSuglyLOliAF2HOUfYjwBD ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_hCD9G64fUiNnUsGQUWNn0G_
#define DEFINED_TYPEDEF_FOR_struct_hCD9G64fUiNnUsGQUWNn0G_
typedef struct { struct_AWjdOOrOVrHaHkEufNPoWF DEP_PREF ;
struct_hSuglyLOliAF2HOUfYjwBD FLAP_PREF ; } struct_hCD9G64fUiNnUsGQUWNn0G ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_U6BKECjzpgmRY5G9tTT4KC_
#define DEFINED_TYPEDEF_FOR_struct_U6BKECjzpgmRY5G9tTT4KC_
typedef struct { real_T gamma [ 19 ] ; real_T V [ 19 ] ; }
struct_U6BKECjzpgmRY5G9tTT4KC ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_EYUqauGHXgjOjuxNtNhwLD_
#define DEFINED_TYPEDEF_FOR_struct_EYUqauGHXgjOjuxNtNhwLD_
typedef struct { real_T V [ 221 ] ; real_T gamma_min [ 221 ] ; }
struct_EYUqauGHXgjOjuxNtNhwLD ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_obZYFZwieS6TQdXw0ncnSH_
#define DEFINED_TYPEDEF_FOR_struct_obZYFZwieS6TQdXw0ncnSH_
typedef struct { struct_U6BKECjzpgmRY5G9tTT4KC VREF ;
struct_EYUqauGHXgjOjuxNtNhwLD gamma ; } struct_obZYFZwieS6TQdXw0ncnSH ;
#endif
typedef struct jwys52rryd_ jwys52rryd ; typedef struct jwys52rrydz_
jwys52rrydz ; typedef struct jwys52rrydzh00_ jwys52rrydzh00 ; typedef struct
kkuqadxzh5_ kkuqadxzh5 ; typedef struct jyuzl13vhf_ jyuzl13vhf ; typedef
struct n5t5fi0dwr_ n5t5fi0dwr ; typedef struct inxc3sss43_ inxc3sss43 ;
typedef struct inxc3sss43q_ inxc3sss43q ; typedef struct inxc3sss43qcs0_
inxc3sss43qcs0 ; typedef struct df5stcclz2_ df5stcclz2 ; typedef struct
a4tl4xkoh2_ a4tl4xkoh2 ; typedef struct fdcovmotmw_ fdcovmotmw ; typedef
struct l3yzcch5v1_ l3yzcch5v1 ; typedef struct ilxhyihvcy_ ilxhyihvcy ;
typedef struct c4juknm2yd_ c4juknm2yd ; typedef struct c4juknm2ydf_
c4juknm2ydf ; typedef struct c4juknm2ydf234_ c4juknm2ydf234 ; typedef struct
jqrvweendy_ jqrvweendy ; typedef struct ay2sb2ajbc_ ay2sb2ajbc ; typedef
struct gmfgpegzl3_ gmfgpegzl3 ; typedef struct gmfgpegzl3i_ gmfgpegzl3i ;
typedef struct gmfgpegzl3ilij_ gmfgpegzl3ilij ; typedef struct dw3gsv0hxq_
dw3gsv0hxq ; typedef struct hckuyds2qa_ hckuyds2qa ; typedef struct
d5nfa1flje_ d5nfa1flje ; typedef struct d5nfa1fljeu_ d5nfa1fljeu ; typedef
struct d5nfa1fljeumzc_ d5nfa1fljeumzc ; typedef struct ekp4usydk3_ ekp4usydk3
; typedef struct dpyl5cqobf_ dpyl5cqobf ; typedef struct P_ P ;
#endif
