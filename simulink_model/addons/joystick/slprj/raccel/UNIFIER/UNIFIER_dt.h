#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"struct_bNRJ7ulZEuVpyVfYNMoQAH" , 15 , 1872 } , {
"struct_ledTFd3zOA1QjIJZGqbRtH" , 16 , 4928 } , {
"struct_X4VfLKyPh2o5xFDym0ZDqD" , 17 , 224352 } , {
"struct_jutHZYEwOoNeidUZKCLQ8B" , 18 , 449600 } , {
"struct_IzJ4J0FtAuhnGd5tRgSyHE" , 19 , 210216 } , {
"struct_yWIZFWBbymsS8L1W0LWVH" , 20 , 117792 } , {
"struct_fnuCCPniuRknyr94YhzxZ" , 21 , 32376 } , {
"struct_e4KmvBjsHkMILSnyqn1SNH" , 22 , 304 } , {
"struct_nC6b04CeB5t4pOaoQVXKo" , 23 , 33784 } , {
"struct_jgnmaTiP1kwpD95SOjXYyE" , 24 , 176 } , {
"struct_OvGmMrPqfNtzpqofYdArSB" , 25 , 9136 } , {
"struct_AWjdOOrOVrHaHkEufNPoWF" , 26 , 784 } , {
"struct_hSuglyLOliAF2HOUfYjwBD" , 27 , 784 } , {
"struct_hCD9G64fUiNnUsGQUWNn0G" , 28 , 1568 } , {
"struct_U6BKECjzpgmRY5G9tTT4KC" , 29 , 304 } , {
"struct_EYUqauGHXgjOjuxNtNhwLD" , 30 , 3536 } , {
"struct_obZYFZwieS6TQdXw0ncnSH" , 31 , 3840 } , { "uint64_T" , 32 , 8 } , {
"int64_T" , 33 , 8 } , { "char_T" , 34 , 8 } , { "uchar_T" , 35 , 8 } , {
"time_T" , 36 , 8 } } ; static uint_T rtDataTypeSizes [ ] = { sizeof ( real_T
) , sizeof ( real32_T ) , sizeof ( int8_T ) , sizeof ( uint8_T ) , sizeof (
int16_T ) , sizeof ( uint16_T ) , sizeof ( int32_T ) , sizeof ( uint32_T ) ,
sizeof ( boolean_T ) , sizeof ( fcn_call_T ) , sizeof ( int_T ) , sizeof (
pointer_T ) , sizeof ( action_T ) , 2 * sizeof ( uint32_T ) , sizeof (
int32_T ) , sizeof ( struct_bNRJ7ulZEuVpyVfYNMoQAH ) , sizeof (
struct_ledTFd3zOA1QjIJZGqbRtH ) , sizeof ( struct_X4VfLKyPh2o5xFDym0ZDqD ) ,
sizeof ( struct_jutHZYEwOoNeidUZKCLQ8B ) , sizeof (
struct_IzJ4J0FtAuhnGd5tRgSyHE ) , sizeof ( struct_yWIZFWBbymsS8L1W0LWVH ) ,
sizeof ( struct_fnuCCPniuRknyr94YhzxZ ) , sizeof (
struct_e4KmvBjsHkMILSnyqn1SNH ) , sizeof ( struct_nC6b04CeB5t4pOaoQVXKo ) ,
sizeof ( struct_jgnmaTiP1kwpD95SOjXYyE ) , sizeof (
struct_OvGmMrPqfNtzpqofYdArSB ) , sizeof ( struct_AWjdOOrOVrHaHkEufNPoWF ) ,
sizeof ( struct_hSuglyLOliAF2HOUfYjwBD ) , sizeof (
struct_hCD9G64fUiNnUsGQUWNn0G ) , sizeof ( struct_U6BKECjzpgmRY5G9tTT4KC ) ,
sizeof ( struct_EYUqauGHXgjOjuxNtNhwLD ) , sizeof (
struct_obZYFZwieS6TQdXw0ncnSH ) , sizeof ( uint64_T ) , sizeof ( int64_T ) ,
sizeof ( char_T ) , sizeof ( uchar_T ) , sizeof ( time_T ) } ; static const
char_T * rtDataTypeNames [ ] = { "real_T" , "real32_T" , "int8_T" , "uint8_T"
, "int16_T" , "uint16_T" , "int32_T" , "uint32_T" , "boolean_T" ,
"fcn_call_T" , "int_T" , "pointer_T" , "action_T" , "timer_uint32_pair_T" ,
"physical_connection" , "struct_bNRJ7ulZEuVpyVfYNMoQAH" ,
"struct_ledTFd3zOA1QjIJZGqbRtH" , "struct_X4VfLKyPh2o5xFDym0ZDqD" ,
"struct_jutHZYEwOoNeidUZKCLQ8B" , "struct_IzJ4J0FtAuhnGd5tRgSyHE" ,
"struct_yWIZFWBbymsS8L1W0LWVH" , "struct_fnuCCPniuRknyr94YhzxZ" ,
"struct_e4KmvBjsHkMILSnyqn1SNH" , "struct_nC6b04CeB5t4pOaoQVXKo" ,
"struct_jgnmaTiP1kwpD95SOjXYyE" , "struct_OvGmMrPqfNtzpqofYdArSB" ,
"struct_AWjdOOrOVrHaHkEufNPoWF" , "struct_hSuglyLOliAF2HOUfYjwBD" ,
"struct_hCD9G64fUiNnUsGQUWNn0G" , "struct_U6BKECjzpgmRY5G9tTT4KC" ,
"struct_EYUqauGHXgjOjuxNtNhwLD" , "struct_obZYFZwieS6TQdXw0ncnSH" ,
"uint64_T" , "int64_T" , "char_T" , "uchar_T" , "time_T" } ; static
DataTypeTransition rtBTransitions [ ] = { { ( char_T * ) ( & rtB . evtlmv3rtj
[ 0 ] ) , 0 , 0 , 1038 } , { ( char_T * ) ( & rtB . pgacreyak0 ) , 7 , 0 , 36
} , { ( char_T * ) ( & rtB . lhopa3gq4f ) , 1 , 0 , 1631 } , { ( char_T * ) (
& rtB . pvabiume5j [ 0 ] ) , 3 , 0 , 2590 } , { ( char_T * ) ( & rtB .
pqpmugtclc ) , 8 , 0 , 5 } , { ( char_T * ) ( & rtB . hztlwupntw . dw4z4lzsfl
[ 0 ] ) , 3 , 0 , 509 } , { ( char_T * ) ( & rtB . n1ybyykngv . dw4z4lzsfl [
0 ] ) , 3 , 0 , 509 } , { ( char_T * ) ( & rtB . jek5zaxern . iopntl53ab [ 0
] ) , 3 , 0 , 509 } , { ( char_T * ) ( & rtB . nikuyjvr0y . iopntl53ab [ 0 ]
) , 3 , 0 , 509 } , { ( char_T * ) ( & rtB . enohy5yaap . iopntl53ab [ 0 ] )
, 3 , 0 , 509 } , { ( char_T * ) ( & rtB . pookhwl2ri . n1ioem5ozp [ 0 ] ) ,
3 , 0 , 509 } , { ( char_T * ) ( & rtB . hl5ibqcu3w . n1ioem5ozp [ 0 ] ) , 3
, 0 , 509 } , { ( char_T * ) ( & rtB . dffuptpbcz . fx012r44nt [ 0 ] ) , 3 ,
0 , 509 } , { ( char_T * ) ( & rtB . bd32gk0ocy . fx012r44nt [ 0 ] ) , 3 , 0
, 509 } , { ( char_T * ) ( & rtB . icuuav0qej [ 11 ] . al1dnkku34 [ 0 ] ) , 0
, 0 , 9 } , { ( char_T * ) ( & rtB . icuuav0qej [ 11 ] . hkt3c3tre5 [ 0 ] ) ,
1 , 0 , 3 } , { ( char_T * ) ( & rtB . b3o13eajmv2jkwp [ 6 ] . gypygly00a [ 0
] ) , 1 , 0 , 3 } , { ( char_T * ) ( & rtB . b3o13eajmv2jk [ 6 ] . oytk0qojnl
[ 0 ] ) , 1 , 0 , 3 } , { ( char_T * ) ( & rtB . b3o13eajmv2j [ 15 ] .
eubb12v5l3 [ 0 ] ) , 1 , 0 , 3 } , { ( char_T * ) ( & rtB . b3o13eajmv2 [ 13
] . mobubeje4r [ 0 ] ) , 1 , 0 , 3 } , { ( char_T * ) ( & rtB . b3o13eajmv [
15 ] . blncbuv1mz [ 0 ] ) , 1 , 0 , 3 } , { ( char_T * ) ( & rtB . l20xgpl0hh
[ 11 ] . g1fza1o1yy [ 0 ] ) , 0 , 0 , 9 } , { ( char_T * ) ( & rtB .
l20xgpl0hh [ 11 ] . pkurrodiqe [ 0 ] ) , 1 , 0 , 3 } , { ( char_T * ) ( & rtB
. d3madptqecyudsg [ 6 ] . mwgj2hwbdl [ 0 ] ) , 1 , 0 , 3 } , { ( char_T * ) (
& rtB . d3madptqecyud [ 6 ] . c1vqtg0iad [ 0 ] ) , 1 , 0 , 3 } , { ( char_T *
) ( & rtB . d3madptqecyu [ 15 ] . d1jfmv2yxc [ 0 ] ) , 1 , 0 , 3 } , { (
char_T * ) ( & rtB . d3madptqecy [ 13 ] . jixypnlmxe [ 0 ] ) , 1 , 0 , 3 } ,
{ ( char_T * ) ( & rtB . d3madptqec [ 15 ] . l3babjdbh1 [ 0 ] ) , 1 , 0 , 3 }
, { ( char_T * ) ( & rtB . hymp14tjep . lxe0n2dnxv [ 0 ] ) , 0 , 0 , 12 } , {
( char_T * ) ( & rtB . iam05r1gwg . lxe0n2dnxv [ 0 ] ) , 0 , 0 , 12 } , { (
char_T * ) ( & rtB . lhvqmcwxnc . lxe0n2dnxv [ 0 ] ) , 0 , 0 , 12 } , { (
char_T * ) ( & rtB . m2glog0cwe . lxe0n2dnxv [ 0 ] ) , 0 , 0 , 12 } , { (
char_T * ) ( & rtB . lokicy2luy [ 11 ] . bvp5jvbdpx [ 0 ] ) , 0 , 0 , 9 } , {
( char_T * ) ( & rtB . lokicy2luy [ 11 ] . id154pizyj [ 0 ] ) , 1 , 0 , 3 } ,
{ ( char_T * ) ( & rtB . jqcuts4d2xyljzh [ 6 ] . antpsulesa [ 0 ] ) , 1 , 0 ,
3 } , { ( char_T * ) ( & rtB . jqcuts4d2xylj [ 6 ] . as01vfxfsq [ 0 ] ) , 1 ,
0 , 3 } , { ( char_T * ) ( & rtB . jqcuts4d2xyl [ 15 ] . itqwefcr4f [ 0 ] ) ,
1 , 0 , 3 } , { ( char_T * ) ( & rtB . jqcuts4d2xy [ 13 ] . cx2jbj4gyj [ 0 ]
) , 1 , 0 , 3 } , { ( char_T * ) ( & rtB . jqcuts4d2x [ 15 ] . ndw5fpgtzy [ 0
] ) , 1 , 0 , 3 } , { ( char_T * ) ( & rtB . hfrmr3oqrf [ 11 ] . escyram4xi [
0 ] ) , 0 , 0 , 9 } , { ( char_T * ) ( & rtB . hfrmr3oqrf [ 11 ] . n0a2pawvav
[ 0 ] ) , 1 , 0 , 3 } , { ( char_T * ) ( & rtB . gtyk4yjlscwhmj4 [ 6 ] .
bvclst2czt [ 0 ] ) , 1 , 0 , 3 } , { ( char_T * ) ( & rtB . gtyk4yjlscwhm [ 6
] . fqucfn4ckm [ 0 ] ) , 1 , 0 , 3 } , { ( char_T * ) ( & rtB . gtyk4yjlscwh
[ 15 ] . fng31hisqq [ 0 ] ) , 1 , 0 , 3 } , { ( char_T * ) ( & rtB .
gtyk4yjlscw [ 13 ] . c051fzqj5s [ 0 ] ) , 1 , 0 , 3 } , { ( char_T * ) ( &
rtB . gtyk4yjlsc [ 15 ] . pqsxg0gsoe [ 0 ] ) , 1 , 0 , 3 } , { ( char_T * ) (
& rtB . hcyzeqbkyr . irdqb2psgr ) , 0 , 0 , 3 } , { ( char_T * ) ( & rtB .
euncnp30uc . irdqb2psgr ) , 0 , 0 , 3 } , { ( char_T * ) ( & rtB . leuhdrxpbe
. mydm0s4bv0 [ 0 ] ) , 0 , 0 , 6 } , { ( char_T * ) ( & rtB . csf3emrtxr .
mydm0s4bv0 [ 0 ] ) , 0 , 0 , 6 } , { ( char_T * ) ( & rtB . jvaexa3o5a .
mydm0s4bv0 [ 0 ] ) , 0 , 0 , 6 } , { ( char_T * ) ( & rtB . adqmzv0sx0 [ 11 ]
. ibnqksi5kc ) , 0 , 0 , 16 } , { ( char_T * ) ( & rtB . adqmzv0sx0 [ 11 ] .
aox0khugvh [ 0 ] ) , 1 , 0 , 3 } , { ( char_T * ) ( & rtB . adqmzv0sx0 [ 11 ]
. cgxtlo5ezj ) , 8 , 0 , 2 } , { ( char_T * ) ( & rtB . lld2mvqphv .
p1ejoedsxt ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtB . cz2051lnszn .
p1ejoedsxt ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtB . nyqetrz43uqkkpi [ 6 ] .
jqzydkhuci [ 0 ] ) , 1 , 0 , 6 } , { ( char_T * ) ( & rtB . nyqetrz43uqkk [ 6
] . d2kygac014 [ 0 ] ) , 1 , 0 , 6 } , { ( char_T * ) ( & rtB . nyqetrz43uqk
[ 15 ] . f5l1thfo3b [ 0 ] ) , 1 , 0 , 6 } , { ( char_T * ) ( & rtB .
nyqetrz43uq [ 13 ] . g2bz2muoaw [ 0 ] ) , 1 , 0 , 6 } , { ( char_T * ) ( &
rtB . nyqetrz43u [ 15 ] . kl452g3br4 [ 0 ] ) , 1 , 0 , 6 } , { ( char_T * ) (
& rtDW . nwwie5t5of ) , 0 , 0 , 5176 } , { ( char_T * ) ( & rtDW . c4dytoevnt
. LoggedData ) , 11 , 0 , 190 } , { ( char_T * ) ( & rtDW . g5vbnuh5ul ) , 6
, 0 , 2 } , { ( char_T * ) ( & rtDW . iinforci3b [ 0 ] ) , 7 , 0 , 1066 } , {
( char_T * ) ( & rtDW . l1l2gip32s . Tail [ 0 ] ) , 10 , 0 , 131 } , { (
char_T * ) ( & rtDW . cfvgbkovvu ) , 2 , 0 , 7 } , { ( char_T * ) ( & rtDW .
fshwisxlge ) , 3 , 0 , 3 } , { ( char_T * ) ( & rtDW . cg1cpca1ek ) , 8 , 0 ,
6 } , { ( char_T * ) ( & rtDW . onvtpfrqwn . epzfbulv32 ) , 6 , 0 , 1 } , { (
char_T * ) ( & rtDW . onvtpfrqwn . ikkalmwo4a ) , 2 , 0 , 1 } , { ( char_T *
) ( & rtDW . f2z2t5yyw1 . p2xendpa3t ) , 6 , 0 , 1 } , { ( char_T * ) ( &
rtDW . f2z2t5yyw1 . jjqjeeukne ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
c3nx5ahmxh . nzkcuadowp ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW .
c3nx5ahmxh . ncgtkhktc1 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
kq23drdvrd . n5askzs1gj ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW .
kq23drdvrd . eihhgub2fg ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
nbnysw2wtu . oppfisosoh ) , 2 , 0 , 3 } , { ( char_T * ) ( & rtDW .
nbnysw2wtu . mjyyj4engg . cfq0b3accy ) , 2 , 0 , 1 } , { ( char_T * ) ( &
rtDW . i02x2fl5fr . g1l24xvjvk ) , 2 , 0 , 3 } , { ( char_T * ) ( & rtDW .
i02x2fl5fr . fn2ws0qfrh0 . cfq0b3accy ) , 2 , 0 , 1 } , { ( char_T * ) ( &
rtDW . icuuav0qej [ 11 ] . i3lxxvdwzm ) , 7 , 0 , 4 } , { ( char_T * ) ( &
rtDW . l20xgpl0hh [ 11 ] . mk5iyqhcsl ) , 7 , 0 , 4 } , { ( char_T * ) ( &
rtDW . pw2pn5yxj3 . e1ojz4whx1 ) , 2 , 0 , 3 } , { ( char_T * ) ( & rtDW .
pw2pn5yxj3 . avztlaubnav . epzfbulv32 ) , 6 , 0 , 1 } , { ( char_T * ) ( &
rtDW . pw2pn5yxj3 . avztlaubnav . ikkalmwo4a ) , 2 , 0 , 1 } , { ( char_T * )
( & rtDW . pw2pn5yxj3 . dhyklihgewe . p2xendpa3t ) , 6 , 0 , 1 } , { ( char_T
* ) ( & rtDW . pw2pn5yxj3 . dhyklihgewe . jjqjeeukne ) , 2 , 0 , 1 } , { (
char_T * ) ( & rtDW . pw2pn5yxj3 . iyuu340oslz . nzkcuadowp ) , 6 , 0 , 1 } ,
{ ( char_T * ) ( & rtDW . pw2pn5yxj3 . iyuu340oslz . ncgtkhktc1 ) , 2 , 0 , 1
} , { ( char_T * ) ( & rtDW . pw2pn5yxj3 . dzsm3cj0kly . n5askzs1gj ) , 6 , 0
, 1 } , { ( char_T * ) ( & rtDW . pw2pn5yxj3 . dzsm3cj0kly . eihhgub2fg ) , 2
, 0 , 1 } , { ( char_T * ) ( & rtDW . knjlllhond . oppfisosoh ) , 2 , 0 , 3 }
, { ( char_T * ) ( & rtDW . knjlllhond . mjyyj4engg . cfq0b3accy ) , 2 , 0 ,
1 } , { ( char_T * ) ( & rtDW . hga0x4lkqb . g1l24xvjvk ) , 2 , 0 , 3 } , { (
char_T * ) ( & rtDW . hga0x4lkqb . fn2ws0qfrh0 . cfq0b3accy ) , 2 , 0 , 1 } ,
{ ( char_T * ) ( & rtDW . f1rxuufunp . e1ojz4whx1 ) , 2 , 0 , 3 } , { (
char_T * ) ( & rtDW . f1rxuufunp . avztlaubnav . epzfbulv32 ) , 6 , 0 , 1 } ,
{ ( char_T * ) ( & rtDW . f1rxuufunp . avztlaubnav . ikkalmwo4a ) , 2 , 0 , 1
} , { ( char_T * ) ( & rtDW . f1rxuufunp . dhyklihgewe . p2xendpa3t ) , 6 , 0
, 1 } , { ( char_T * ) ( & rtDW . f1rxuufunp . dhyklihgewe . jjqjeeukne ) , 2
, 0 , 1 } , { ( char_T * ) ( & rtDW . f1rxuufunp . iyuu340oslz . nzkcuadowp )
, 6 , 0 , 1 } , { ( char_T * ) ( & rtDW . f1rxuufunp . iyuu340oslz .
ncgtkhktc1 ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW . f1rxuufunp .
dzsm3cj0kly . n5askzs1gj ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW .
f1rxuufunp . dzsm3cj0kly . eihhgub2fg ) , 2 , 0 , 1 } , { ( char_T * ) ( &
rtDW . gr5ouy33uc . oppfisosoh ) , 2 , 0 , 3 } , { ( char_T * ) ( & rtDW .
gr5ouy33uc . mjyyj4engg . cfq0b3accy ) , 2 , 0 , 1 } , { ( char_T * ) ( &
rtDW . o021qo2kqg . g1l24xvjvk ) , 2 , 0 , 3 } , { ( char_T * ) ( & rtDW .
o021qo2kqg . fn2ws0qfrh0 . cfq0b3accy ) , 2 , 0 , 1 } , { ( char_T * ) ( &
rtDW . lokicy2luy [ 11 ] . e4gu33l0io ) , 7 , 0 , 4 } , { ( char_T * ) ( &
rtDW . ctbmhlk4scc . e1ojz4whx1 ) , 2 , 0 , 3 } , { ( char_T * ) ( & rtDW .
ctbmhlk4scc . avztlaubnav . epzfbulv32 ) , 6 , 0 , 1 } , { ( char_T * ) ( &
rtDW . ctbmhlk4scc . avztlaubnav . ikkalmwo4a ) , 2 , 0 , 1 } , { ( char_T *
) ( & rtDW . ctbmhlk4scc . dhyklihgewe . p2xendpa3t ) , 6 , 0 , 1 } , { (
char_T * ) ( & rtDW . ctbmhlk4scc . dhyklihgewe . jjqjeeukne ) , 2 , 0 , 1 }
, { ( char_T * ) ( & rtDW . ctbmhlk4scc . iyuu340oslz . nzkcuadowp ) , 6 , 0
, 1 } , { ( char_T * ) ( & rtDW . ctbmhlk4scc . iyuu340oslz . ncgtkhktc1 ) ,
2 , 0 , 1 } , { ( char_T * ) ( & rtDW . ctbmhlk4scc . dzsm3cj0kly .
n5askzs1gj ) , 6 , 0 , 1 } , { ( char_T * ) ( & rtDW . ctbmhlk4scc .
dzsm3cj0kly . eihhgub2fg ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
biiojft2vbl . oppfisosoh ) , 2 , 0 , 3 } , { ( char_T * ) ( & rtDW .
biiojft2vbl . mjyyj4engg . cfq0b3accy ) , 2 , 0 , 1 } , { ( char_T * ) ( &
rtDW . cm0yj40hhfp . g1l24xvjvk ) , 2 , 0 , 3 } , { ( char_T * ) ( & rtDW .
cm0yj40hhfp . fn2ws0qfrh0 . cfq0b3accy ) , 2 , 0 , 1 } , { ( char_T * ) ( &
rtDW . hfrmr3oqrf [ 11 ] . mi4ckqsald ) , 7 , 0 , 4 } , { ( char_T * ) ( &
rtDW . adqmzv0sx0 [ 11 ] . adrjjytrwd ) , 7 , 0 , 4 } , { ( char_T * ) ( &
rtDW . adqmzv0sx0 [ 11 ] . kd3fwxo3ke ) , 8 , 0 , 1 } , { ( char_T * ) ( &
rtDW . lld2mvqphv . mn1t1xifkc ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
lld2mvqphv . pswhghvaxh ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtDW .
cz2051lnszn . mn1t1xifkc ) , 2 , 0 , 1 } , { ( char_T * ) ( & rtDW .
cz2051lnszn . pswhghvaxh ) , 8 , 0 , 1 } } ; static DataTypeTransitionTable
rtBTransTable = { 130U , rtBTransitions } ; static DataTypeTransition
rtPTransitions [ ] = { { ( char_T * ) ( & rtP . dp_VTAIL ) , 18 , 0 , 1 } , {
( char_T * ) ( & rtP . dp_VTAIL_INDUCED ) , 17 , 0 , 1 } , { ( char_T * ) ( &
rtP . dp_WING_root ) , 19 , 0 , 1 } , { ( char_T * ) ( & rtP . dp_WING_tip )
, 20 , 0 , 1 } , { ( char_T * ) ( & rtP . dp_DEP ) , 23 , 0 , 1 } , { (
char_T * ) ( & rtP . dp_HTU ) , 25 , 0 , 1 } , { ( char_T * ) ( & rtP .
dp_FUSE_FIN ) , 16 , 0 , 1 } , { ( char_T * ) ( & rtP . dp_LIMITS ) , 31 , 0
, 1 } , { ( char_T * ) ( & rtP . fcc ) , 15 , 0 , 1 } , { ( char_T * ) ( &
rtP . dp_PREF ) , 28 , 0 , 1 } , { ( char_T * ) ( & rtP . DEP_INTEG_IC ) , 0
, 0 , 87 } , { ( char_T * ) ( & rtP . vtail_dist_to_wing ) , 1 , 0 , 91 } , {
( char_T * ) ( & rtP . DiscreteWindGustModel1_Gx ) , 0 , 0 , 32 } , { (
char_T * ) ( & rtP . UDPSend1_remotePort ) , 6 , 0 , 15 } , { ( char_T * ) (
& rtP . x_Y0 ) , 0 , 0 , 1373 } , { ( char_T * ) ( & rtP .
Gain_Gain_nohmayotbr ) , 1 , 0 , 825 } , { ( char_T * ) ( & rtP .
InterpolationUsingPrelookup1_dimSize [ 0 ] ) , 7 , 0 , 1092 } , { ( char_T *
) ( & rtP . Constant_Value_l3yr2jaxah ) , 8 , 0 , 6 } , { ( char_T * ) ( &
rtP . Constant_Value_ecr3ukwupu [ 0 ] ) , 3 , 0 , 555 } , { ( char_T * ) ( &
rtP . nbnysw2wtu . Constant_Value ) , 0 , 0 , 2 } , { ( char_T * ) ( & rtP .
i02x2fl5fr . Constant_Value ) , 0 , 0 , 2 } , { ( char_T * ) ( & rtP .
icuuav0qej . actf2T_Gain ) , 0 , 0 , 25 } , { ( char_T * ) ( & rtP .
icuuav0qej . T2rpm_maxIndex [ 0 ] ) , 7 , 0 , 2 } , { ( char_T * ) ( & rtP .
eo5c0y54mx . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
eo5c0y54mx . Constant_Value_a2ee3cola1 ) , 1 , 0 , 1 } , { ( char_T * ) ( &
rtP . b3o13eajmv2jkw . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP . b3o13eajmv2jkw . Constant_Value_p3qxudol4i ) , 1 , 0 , 1 } , { ( char_T
* ) ( & rtP . b3o13eajmv2 . Constant1_Value ) , 1 , 0 , 1 } , { ( char_T * )
( & rtP . b3o13eajmv . Constant1_Value ) , 1 , 0 , 1 } , { ( char_T * ) ( &
rtP . l20xgpl0hh . actf2T_Gain ) , 0 , 0 , 25 } , { ( char_T * ) ( & rtP .
l20xgpl0hh . T2rpm_maxIndex [ 0 ] ) , 7 , 0 , 2 } , { ( char_T * ) ( & rtP .
fd2m0yuoxm . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
fd2m0yuoxm . Constant_Value_loajhuaqbn ) , 1 , 0 , 1 } , { ( char_T * ) ( &
rtP . d3madptqecyuds . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP . d3madptqecyuds . Constant_Value_flaudnvzdb ) , 1 , 0 , 1 } , { ( char_T
* ) ( & rtP . d3madptqecy . Constant1_Value ) , 1 , 0 , 1 } , { ( char_T * )
( & rtP . d3madptqec . Constant1_Value ) , 1 , 0 , 1 } , { ( char_T * ) ( &
rtP . pw2pn5yxj3 . Constant1_Value ) , 0 , 0 , 12 } , { ( char_T * ) ( & rtP
. knjlllhond . Constant_Value ) , 0 , 0 , 2 } , { ( char_T * ) ( & rtP .
hga0x4lkqb . Constant_Value ) , 0 , 0 , 2 } , { ( char_T * ) ( & rtP .
f1rxuufunp . Constant1_Value ) , 0 , 0 , 12 } , { ( char_T * ) ( & rtP .
gr5ouy33uc . Constant_Value ) , 0 , 0 , 2 } , { ( char_T * ) ( & rtP .
o021qo2kqg . Constant_Value ) , 0 , 0 , 2 } , { ( char_T * ) ( & rtP .
lokicy2luy . actf2T_Gain ) , 0 , 0 , 25 } , { ( char_T * ) ( & rtP .
lokicy2luy . T2rpm_maxIndex [ 0 ] ) , 7 , 0 , 2 } , { ( char_T * ) ( & rtP .
ibfd55b20f . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
ibfd55b20f . Constant_Value_kcc3xurybq ) , 1 , 0 , 1 } , { ( char_T * ) ( &
rtP . jqcuts4d2xyljz . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP . jqcuts4d2xyljz . Constant_Value_oise4xk0eu ) , 1 , 0 , 1 } , { ( char_T
* ) ( & rtP . jqcuts4d2xy . Constant1_Value ) , 1 , 0 , 1 } , { ( char_T * )
( & rtP . jqcuts4d2x . Constant1_Value ) , 1 , 0 , 1 } , { ( char_T * ) ( &
rtP . ctbmhlk4scc . Constant1_Value ) , 0 , 0 , 12 } , { ( char_T * ) ( & rtP
. biiojft2vbl . Constant_Value ) , 0 , 0 , 2 } , { ( char_T * ) ( & rtP .
cm0yj40hhfp . Constant_Value ) , 0 , 0 , 2 } , { ( char_T * ) ( & rtP .
hfrmr3oqrf . actf2T_Gain ) , 0 , 0 , 25 } , { ( char_T * ) ( & rtP .
hfrmr3oqrf . T2rpm_maxIndex [ 0 ] ) , 7 , 0 , 2 } , { ( char_T * ) ( & rtP .
gz3uih4qsj . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
gz3uih4qsj . Constant_Value_cfiqsl0uw4 ) , 1 , 0 , 1 } , { ( char_T * ) ( &
rtP . gtyk4yjlscwhmj . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP . gtyk4yjlscwhmj . Constant_Value_pww4042kpl ) , 1 , 0 , 1 } , { ( char_T
* ) ( & rtP . gtyk4yjlscw . Constant1_Value ) , 1 , 0 , 1 } , { ( char_T * )
( & rtP . gtyk4yjlsc . Constant1_Value ) , 1 , 0 , 1 } , { ( char_T * ) ( &
rtP . adqmzv0sx0 . EM_I ) , 0 , 0 , 32 } , { ( char_T * ) ( & rtP .
adqmzv0sx0 . T2rpm_maxIndex [ 0 ] ) , 7 , 0 , 2 } , { ( char_T * ) ( & rtP .
adqmzv0sx0 . Memory_InitialCondition ) , 8 , 0 , 1 } , { ( char_T * ) ( & rtP
. lld2mvqphv . x_Y0 ) , 0 , 0 , 3 } , { ( char_T * ) ( & rtP . cz2051lnszn .
x_Y0 ) , 0 , 0 , 3 } , { ( char_T * ) ( & rtP . fchchnbmez . Constant_Value )
, 0 , 0 , 1 } , { ( char_T * ) ( & rtP . fchchnbmez .
Constant_Value_nflcmvsqzo ) , 1 , 0 , 1 } , { ( char_T * ) ( & rtP .
nyqetrz43uqkkp . Constant_Value ) , 0 , 0 , 1 } , { ( char_T * ) ( & rtP .
nyqetrz43uqkkp . Constant_Value_dl1cryfboe ) , 1 , 0 , 1 } , { ( char_T * ) (
& rtP . nyqetrz43uq . Constant1_Value ) , 1 , 0 , 1 } , { ( char_T * ) ( &
rtP . nyqetrz43u . Constant1_Value ) , 1 , 0 , 1 } } ; static
DataTypeTransitionTable rtPTransTable = { 73U , rtPTransitions } ;
