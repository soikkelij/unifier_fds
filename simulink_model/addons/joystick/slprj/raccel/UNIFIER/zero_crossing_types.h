#ifndef ZERO_CROSSING_TYPES_H
#define ZERO_CROSSING_TYPES_H
#include "rtwtypes.h"
typedef enum { FALLING_ZERO_CROSSING = - 1 , ANY_ZERO_CROSSING = 0 ,
RISING_ZERO_CROSSING = 1 } ZCDirection ; typedef uint8_T ZCSigState ;
#define UNINITIALIZED_ZCSIG            0x03U
#define NEG_ZCSIG                      0x02U
#define POS_ZCSIG                      0x01U
#define ZERO_ZCSIG                     0x00U
typedef enum { FALLING_ZCEVENT = - 1 , NO_ZCEVENT = 0 , RISING_ZCEVENT = 1 }
ZCEventType ;
#endif
