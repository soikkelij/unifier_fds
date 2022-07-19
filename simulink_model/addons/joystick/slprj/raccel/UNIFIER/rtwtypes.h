#ifndef RTWTYPES_H
#define RTWTYPES_H
#include "tmwtypes.h"
#ifndef POINTER_T
#define POINTER_T
typedef void * pointer_T ;
#endif
#if (!defined(__cplusplus))
#ifndef false
#define false                          (0U)
#endif
#ifndef true
#define true                           (1U)
#endif
#endif
#ifndef INT64_T
#define INT64_T
typedef long long int64_T ;
#define MAX_int64_T                    ((int64_T)(9223372036854775807LL))
#define MIN_int64_T                    ((int64_T)(-9223372036854775807LL-1LL))
#endif
#ifndef UINT64_T
#define UINT64_T
typedef unsigned long long uint64_T ;
#define MAX_uint64_T                   ((uint64_T)(0xFFFFFFFFFFFFFFFFULL))
#endif
#ifndef CINT64_T
#define CINT64_T
typedef struct { int64_T re ; int64_T im ; } cint64_T ;
#endif
#ifndef CUINT64_T
#define CUINT64_T
typedef struct { uint64_T re ; uint64_T im ; } cuint64_T ;
#endif
#endif
