#include "rt_zcfcn.h"
ZCEventType rt_ZCFcn ( ZCDirection zcDir , ZCSigState * prevZc , real_T
currValue ) { slZcEventType zcsDir ; slZcEventType tempEv ; ZCEventType
zcEvent = NO_ZCEVENT ; static const slZcEventType eventMatrix [ 4 ] [ 4 ] = {
{ SL_ZCS_EVENT_NUL , SL_ZCS_EVENT_Z2P , SL_ZCS_EVENT_Z2N , SL_ZCS_EVENT_NUL }
, { SL_ZCS_EVENT_P2Z , SL_ZCS_EVENT_NUL , SL_ZCS_EVENT_P2N , SL_ZCS_EVENT_NUL
} , { SL_ZCS_EVENT_N2Z , SL_ZCS_EVENT_N2P , SL_ZCS_EVENT_NUL ,
SL_ZCS_EVENT_NUL } , { SL_ZCS_EVENT_NUL , SL_ZCS_EVENT_NUL , SL_ZCS_EVENT_NUL
, SL_ZCS_EVENT_NUL } } ; slZcEventType prevEv = ( slZcEventType ) ( ( (
uint8_T ) ( * prevZc ) ) >> 2 ) ; slZcSignalSignType prevSign = (
slZcSignalSignType ) ( ( ( uint8_T ) ( * prevZc ) ) & ( uint8_T ) 0x03 ) ;
slZcSignalSignType currSign = ( slZcSignalSignType ) ( ( currValue ) > 0.0 ?
SL_ZCS_SIGN_POS : ( ( currValue ) < 0.0 ? SL_ZCS_SIGN_NEG : SL_ZCS_SIGN_ZERO
) ) ; slZcEventType currEv = eventMatrix [ prevSign ] [ currSign ] ; switch (
zcDir ) { case ANY_ZERO_CROSSING : zcsDir = SL_ZCS_EVENT_ALL ; break ; case
FALLING_ZERO_CROSSING : zcsDir = SL_ZCS_EVENT_ALL_DN ; break ; case
RISING_ZERO_CROSSING : zcsDir = SL_ZCS_EVENT_ALL_UP ; break ; default :
zcsDir = SL_ZCS_EVENT_NUL ; break ; } if ( slZcHadEvent ( currEv , zcsDir ) )
{ currEv = ( slZcEventType ) ( slZcUnAliasEvents ( prevEv , currEv ) ) ; }
else { currEv = SL_ZCS_EVENT_NUL ; } tempEv = ( slZcEventType ) ( currEv << 2
) ; * prevZc = ( ZCSigState ) ( ( currSign ) | ( tempEv ) ) ; if ( ( currEv &
SL_ZCS_EVENT_ALL_DN ) != 0 ) { zcEvent = FALLING_ZCEVENT ; } else if ( (
currEv & SL_ZCS_EVENT_ALL_UP ) != 0 ) { zcEvent = RISING_ZCEVENT ; } else {
zcEvent = NO_ZCEVENT ; } return zcEvent ; }
