#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 147 "/usr/lib/gcc/avr/4.8.2/include/stddef.h" 3
typedef int ptrdiff_t;
#line 212
typedef unsigned int size_t;
#line 324
typedef int wchar_t;
# 8 "/usr/lib/x86_64-linux-gnu/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 121 "/usr/lib/gcc/avr/4.8.2/../../../avr/include/stdint.h" 3
typedef signed int int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int uint8_t __attribute((__mode__(__QI__))) ;
typedef signed int int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int uint16_t __attribute((__mode__(__HI__))) ;
typedef signed int int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int uint32_t __attribute((__mode__(__SI__))) ;

typedef signed int int64_t __attribute((__mode__(__DI__))) ;
typedef unsigned int uint64_t __attribute((__mode__(__DI__))) ;
#line 142
typedef int16_t intptr_t;




typedef uint16_t uintptr_t;
#line 159
typedef int8_t int_least8_t;




typedef uint8_t uint_least8_t;




typedef int16_t int_least16_t;




typedef uint16_t uint_least16_t;




typedef int32_t int_least32_t;




typedef uint32_t uint_least32_t;







typedef int64_t int_least64_t;






typedef uint64_t uint_least64_t;
#line 213
typedef int8_t int_fast8_t;




typedef uint8_t uint_fast8_t;




typedef int16_t int_fast16_t;




typedef uint16_t uint_fast16_t;




typedef int32_t int_fast32_t;




typedef uint32_t uint_fast32_t;







typedef int64_t int_fast64_t;






typedef uint64_t uint_fast64_t;
#line 273
typedef int64_t intmax_t;




typedef uint64_t uintmax_t;
# 77 "/usr/lib/gcc/avr/4.8.2/../../../avr/include/inttypes.h" 3
typedef int32_t int_farptr_t;



typedef uint32_t uint_farptr_t;
# 281 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;
static inline void __nesc_bfle_encode8(uint8_t *msg, unsigned offset, uint8_t length, uint8_t x)  ;
#line 304
static __inline uint8_t __nesc_htonbf_leuint8(void *target, unsigned offset, uint8_t length, uint8_t value)  ;
#line 322
static __inline uint16_t __nesc_ntoh_leuint16(const void * source)  ;




static __inline uint16_t __nesc_hton_leuint16(void * target, uint16_t value)  ;
#line 340
static __inline uint32_t __nesc_ntoh_uint32(const void * source)  ;






static __inline uint32_t __nesc_hton_uint32(void * target, uint32_t value)  ;








static __inline uint32_t __nesc_ntoh_leuint32(const void * source)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 117 "/usr/lib/gcc/avr/4.8.2/../../../avr/include/string.h" 3
extern void *memcpy(void *arg_0x2ab71cda71f0, const void *arg_0x2ab71cda74c8, size_t arg_0x2ab71cda7770);



extern void *memset(void *arg_0x2ab71cdaa020, int arg_0x2ab71cdaa288, size_t arg_0x2ab71cdaa530);
# 71 "/usr/lib/gcc/avr/4.8.2/../../../avr/include/stdlib.h" 3
#line 68
typedef struct __nesc_unnamed4242 {
  int quot;
  int rem;
} div_t;





#line 74
typedef struct __nesc_unnamed4243 {
  long quot;
  long rem;
} ldiv_t;


typedef int (*__compar_fn_t)(const void *arg_0x2ab71cdd1838, const void *arg_0x2ab71cdd1b10);
# 25 "/usr/src/tinyos/tos/system/tos.h"
typedef uint8_t bool;
enum __nesc_unnamed4244 {
#line 26
  FALSE = 0, TRUE = 1
};
typedef nx_int8_t nx_bool;
uint16_t TOS_NODE_ID = 1;






struct __nesc_attr_atmostonce {
};
#line 37
struct __nesc_attr_atleastonce {
};
#line 38
struct __nesc_attr_exactlyonce {
};
# 51 "/usr/src/tinyos/tos/types/TinyError.h"
enum __nesc_unnamed4245 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ELAST = 11
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 244 "/usr/lib/gcc/avr/4.8.2/../../../avr/include/avr/fuse.h" 3
#line 239
typedef struct __nesc_unnamed4246 {

  unsigned char low;
  unsigned char high;
  unsigned char extended;
} __fuse_t;
# 25 "/usr/src/tinyos/tos/chips/atm128/atm128const.h"
typedef uint8_t const_uint8_t __attribute((__progmem__)) ;
typedef uint16_t const_uint16_t __attribute((__progmem__)) ;
typedef uint32_t const_uint32_t __attribute((__progmem__)) ;
typedef int8_t const_int8_t __attribute((__progmem__)) ;
typedef int16_t const_int16_t __attribute((__progmem__)) ;
typedef int32_t const_int32_t __attribute((__progmem__)) ;
# 88 "/usr/src/tinyos/tos/chips/atm128/atm128hardware.h"
static __inline void __nesc_enable_interrupt()  ;



static __inline void __nesc_disable_interrupt()  ;




typedef uint8_t __nesc_atomic_t;
__nesc_atomic_t __nesc_atomic_start(void );
void __nesc_atomic_end(__nesc_atomic_t original_SREG);









#line 108
__inline __nesc_atomic_t 
__nesc_atomic_start(void )   ;









#line 118
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)   ;







typedef uint8_t mcu_power_t  ;


enum __nesc_unnamed4247 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};


static inline mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)  ;









typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_float;typedef float __nesc_nxbase_nx_float  ;
# 43 "/usr/src/tinyos/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4248 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4249 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4250 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 94
typedef struct __nesc_unnamed4251 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4252 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4253 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4254 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4255 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4256 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4257 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 150
typedef struct __nesc_unnamed4258 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 41 "/usr/src/tinyos/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4259 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4260 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4261 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4262 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 52 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4263 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4264 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4265 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4266 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4267 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 108
#line 98
typedef union __nesc_unnamed4268 {

  uint8_t flat;
  struct __nesc_unnamed4269 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 130
#line 120
typedef union __nesc_unnamed4270 {

  uint8_t flat;
  struct __nesc_unnamed4271 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 146
#line 133
typedef union __nesc_unnamed4272 {

  uint8_t flat;
  struct __nesc_unnamed4273 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 163
#line 150
typedef union __nesc_unnamed4274 {

  uint8_t flat;
  struct __nesc_unnamed4275 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 178
#line 167
typedef union __nesc_unnamed4276 {

  uint8_t flat;
  struct __nesc_unnamed4277 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4278 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 202
#line 193
typedef union __nesc_unnamed4279 {

  uint8_t flat;
  struct __nesc_unnamed4280 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4281 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 241
#line 231
typedef union __nesc_unnamed4282 {

  uint8_t flat;
  struct __nesc_unnamed4283 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 259
#line 250
typedef union __nesc_unnamed4284 {

  uint8_t flat;
  struct __nesc_unnamed4285 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 309
#line 297
typedef union __nesc_unnamed4286 {

  uint8_t flat;
  struct __nesc_unnamed4287 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 324
#line 312
typedef union __nesc_unnamed4288 {

  uint8_t flat;
  struct __nesc_unnamed4289 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
# 51 "/usr/src/tinyos/tos/platforms/mica/MicaTimer.h"
typedef struct __nesc_unnamed4290 {
} 
#line 51
T64khz;
typedef struct __nesc_unnamed4291 {
} 
#line 52
T128khz;
typedef struct __nesc_unnamed4292 {
} 
#line 53
T2mhz;
typedef struct __nesc_unnamed4293 {
} 
#line 54
T4mhz;
#line 107
typedef T32khz TOne;
typedef TMicro TThree;
typedef uint16_t counter_one_overflow_t;
typedef uint16_t counter_three_overflow_t;

enum __nesc_unnamed4294 {
  MICA_PRESCALER_ONE = ATM128_CLK16_DIVIDE_256, 
  MICA_DIVIDE_ONE_FOR_32KHZ_LOG2 = 0, 
  MICA_PRESCALER_THREE = ATM128_CLK16_DIVIDE_8, 
  MICA_DIVIDE_THREE_FOR_MICRO_LOG2 = 0, 
  EXT_STANDBY_T0_THRESHOLD = 12
};





enum __nesc_unnamed4295 {
  PLATFORM_MHZ = 8
};
# 62 "/usr/src/tinyos/tos/platforms/micaz/hardware.h"
enum __nesc_unnamed4296 {
  TOS_SLEEP_NONE = ATM128_POWER_IDLE
};


enum __nesc_unnamed4297 {
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1
};


enum __nesc_unnamed4298 {
  PLATFORM_BAUDRATE = 57600L
};
# 43 "/usr/src/tinyos/tos/types/Leds.h"
enum __nesc_unnamed4299 {
  LEDS_LED0 = 1 << 0, 
  LEDS_LED1 = 1 << 1, 
  LEDS_LED2 = 1 << 2, 
  LEDS_LED3 = 1 << 3, 
  LEDS_LED4 = 1 << 4, 
  LEDS_LED5 = 1 << 5, 
  LEDS_LED6 = 1 << 6, 
  LEDS_LED7 = 1 << 7
};
# 82 "/usr/src/tinyos/tos/lib/mac/tkn154/TKN154.h"
#line 43
typedef enum ieee154_status {

  IEEE154_SUCCESS = 0x00, 
  IEEE154_BEACON_LOSS = 0xE0, 
  IEEE154_CHANNEL_ACCESS_FAILURE = 0xE1, 
  IEEE154_COUNTER_ERROR = 0xDB, 
  IEEE154_DENIED = 0xE2, 
  IEEE154_DISABLE_TRX_FAILURE = 0xE3, 
  IEEE154_FRAME_TOO_LONG = 0xE5, 
  IEEE154_IMPROPER_KEY_TYPE = 0xDC, 
  IEEE154_IMPROPER_SECURITY_LEVEL = 0xDD, 
  IEEE154_INVALID_ADDRESS = 0xF5, 
  IEEE154_INVALID_GTS = 0xE6, 
  IEEE154_INVALID_HANDLE = 0xE7, 
  IEEE154_INVALID_INDEX = 0xF9, 
  IEEE154_INVALID_PARAMETER = 0xE8, 
  IEEE154_LIMIT_REACHED = 0xFA, 
  IEEE154_NO_ACK = 0xE9, 
  IEEE154_NO_BEACON = 0xEA, 
  IEEE154_NO_DATA = 0xEB, 
  IEEE154_NO_SHORT_ADDRESS = 0xEC, 
  IEEE154_ON_TIME_TOO_LONG = 0xF6, 
  IEEE154_OUT_OF_CAP = 0xED, 
  IEEE154_PAN_ID_CONFLICT = 0xEE, 
  IEEE154_PAST_TIME = 0xF7, 
  IEEE154_READ_ONLY = 0xFB, 
  IEEE154_REALIGNMENT = 0xEF, 
  IEEE154_SCAN_IN_PROGRESS = 0xFC, 
  IEEE154_SECURITY_ERROR = 0xE4, 
  IEEE154_SUPERFRAME_OVERLAP = 0xFD, 
  IEEE154_TRACKING_OFF = 0xF8, 
  IEEE154_TRANSACTION_EXPIRED = 0xF0, 
  IEEE154_TRANSACTION_OVERFLOW = 0xF1, 
  IEEE154_TX_ACTIVE = 0xF2, 
  IEEE154_UNAVAILABLE_KEY = 0xF3, 
  IEEE154_UNSUPPORTED_ATTRIBUTE = 0xF4, 
  IEEE154_UNSUPPORTED_LEGACY = 0xDE, 
  IEEE154_UNSUPPORTED_SECURITY = 0xDF, 
  IEEE154_PURGED = 0xDA
} ieee154_status_t;






#line 84
typedef enum ieee154_association_status {

  IEEE154_ASSOCIATION_SUCCESSFUL = 0x00, 
  IEEE154_PAN_AT_CAPACITY = 0x01, 
  IEEE154_ACCESS_DENIED = 0x02
} ieee154_association_status_t;





#line 91
typedef enum ieee154_disassociation_reason {

  IEEE154_COORDINATOR_WISHES_DEVICE_TO_LEAVE = 0x01, 
  IEEE154_DEVICE_WISHES_TO_LEAVE = 0x02
} ieee154_disassociation_reason_t;






#line 97
typedef union ieee154_address {


  uint16_t shortAddress;
  uint64_t extendedAddress;
} ieee154_address_t;








#line 104
typedef struct ieee154_security {


  uint8_t SecurityLevel;
  uint8_t KeyIdMode;
  uint8_t KeySource[8];
  uint8_t KeyIndex;
} ieee154_security_t;










#line 113
typedef nx_struct __nesc_unnamed4300 {
  unsigned char __nesc_filler0[1];
} __attribute__((packed)) 






ieee154_CapabilityInformation_t;










#line 124
typedef nx_struct __nesc_unnamed4301 {
  unsigned char __nesc_filler1[2];
} __attribute__((packed)) 






ieee154_SuperframeSpec_t;
#line 150
#line 135
typedef struct ieee154_PANDescriptor {
  uint8_t CoordAddrMode;
  uint16_t CoordPANId;
  ieee154_address_t CoordAddress;
  uint8_t LogicalChannel;
  uint8_t ChannelPage;
  ieee154_SuperframeSpec_t SuperframeSpec;
  bool GTSPermit;
  uint8_t LinkQuality;
  uint32_t TimeStamp;
  ieee154_status_t SecurityFailure;
  uint8_t SecurityLevel;
  uint8_t KeyIdMode;
  uint64_t KeySource;
  uint8_t KeyIndex;
} ieee154_PANDescriptor_t;

enum __nesc_unnamed4302 {

  BEACON_ENABLED_PAN, 
  NONBEACON_ENABLED_PAN, 


  TX_OPTIONS_ACK = 0x01, 
  TX_OPTIONS_GTS = 0x02, 
  TX_OPTIONS_INDIRECT = 0x04, 


  ADDR_MODE_NOT_PRESENT = 0x00, 
  ADDR_MODE_RESERVED = 0x01, 
  ADDR_MODE_SHORT_ADDRESS = 0x02, 
  ADDR_MODE_EXTENDED_ADDRESS = 0x03, 


  ENERGY_DETECTION_SCAN = 0x00, 
  ACTIVE_SCAN = 0x01, 
  PASSIVE_SCAN = 0x02, 
  ORPHAN_SCAN = 0x03, 


  FRAMETYPE_BEACON = 0x00, 
  FRAMETYPE_DATA = 0x01, 
  FRAMETYPE_ACK = 0x02, 
  FRAMETYPE_CMD = 0x03
};





typedef uint8_t ieee154_phyCurrentChannel_t;
typedef uint32_t ieee154_phyChannelsSupported_t;
typedef uint8_t ieee154_phyTransmitPower_t;
typedef uint8_t ieee154_phyCCAMode_t;
typedef uint8_t ieee154_phyCurrentPage_t;
typedef uint16_t ieee154_phyMaxFrameDuration_t;
typedef uint8_t ieee154_phySHRDuration_t;
typedef uint8_t ieee154_phySymbolsPerOctet_t;

typedef uint8_t ieee154_macAckWaitDuration_t;
typedef bool ieee154_macAssociatedPANCoord_t;
typedef bool ieee154_macAssociationPermit_t;
typedef bool ieee154_macAutoRequest_t;
typedef bool ieee154_macBattLifeExt_t;
typedef uint8_t ieee154_macBattLifeExtPeriods_t;
typedef uint8_t *ieee154_macBeaconPayload_t;
typedef uint8_t ieee154_macBeaconPayloadLength_t;
typedef uint8_t ieee154_macBeaconOrder_t;
typedef uint32_t ieee154_macBeaconTxTime_t;
typedef uint8_t ieee154_macBSN_t;
typedef uint64_t ieee154_macCoordExtendedAddress_t;
typedef uint16_t ieee154_macCoordShortAddress_t;
typedef uint8_t ieee154_macDSN_t;
typedef bool ieee154_macGTSPermit_t;
typedef uint8_t ieee154_macMaxBE_t;
typedef uint8_t ieee154_macMaxCSMABackoffs_t;
typedef uint32_t ieee154_macMaxFrameTotalWaitTime_t;
typedef uint8_t ieee154_macMaxFrameRetries_t;
typedef uint8_t ieee154_macMinBE_t;
typedef uint8_t ieee154_macMinLIFSPeriod_t;
typedef uint8_t ieee154_macMinSIFSPeriod_t;
typedef uint16_t ieee154_macPANId_t;
typedef bool ieee154_macPromiscuousMode_t;
typedef uint8_t ieee154_macResponseWaitTime_t;
typedef bool ieee154_macRxOnWhenIdle_t;
typedef bool ieee154_macSecurityEnabled_t;
typedef uint16_t ieee154_macShortAddress_t;
typedef uint8_t ieee154_macSuperframeOrder_t;
typedef uint16_t ieee154_macSyncSymbolOffset_t;
typedef bool ieee154_macTimestampSupported_t;
typedef uint16_t ieee154_macTransactionPersistenceTime_t;


typedef bool ieee154_macPanCoordinator_t;
#line 315
enum __nesc_unnamed4303 {

  IEEE154_aMaxPHYPacketSize = 127
};
# 6 "/usr/src/tinyos/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4304 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4305 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 83 "/usr/src/tinyos/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4306 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4307 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4308 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 42 "/usr/src/tinyos/tos/chips/cc2420_tkn154/TKN154_PHY.h"
enum __nesc_unnamed4309 {

  IEEE154_SUPPORTED_CHANNELS = 0x07FFF800, 
  IEEE154_SYMBOLS_PER_OCTET = 2, 
  IEEE154_TXPOWER_TOLERANCE = 0x80, 
  IEEE154_SHR_DURATION = 5 * IEEE154_SYMBOLS_PER_OCTET, 
  IEEE154_MAX_FRAME_DURATION = IEEE154_SHR_DURATION + (IEEE154_aMaxPHYPacketSize + 1) * IEEE154_SYMBOLS_PER_OCTET, 
  IEEE154_PREAMBLE_LENGTH = 4 * IEEE154_SYMBOLS_PER_OCTET, 
  IEEE154_SYNC_SYMBOL_OFFSET = 1 * IEEE154_SYMBOLS_PER_OCTET, 
  IEEE154_MIN_LIFS_PERIOD = 40, 
  IEEE154_MIN_SIFS_PERIOD = 12, 
  IEEE154_ACK_WAIT_DURATION = 20 + 12 + IEEE154_SHR_DURATION + 6 * IEEE154_SYMBOLS_PER_OCTET, 
  IEEE154_TIMESTAMP_SUPPORTED = TRUE
};
# 4 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Timer62500hz.h"
typedef struct __nesc_unnamed4310 {
} 
#line 4
T62500hz;
# 44 "/usr/src/tinyos/tos/platforms/micaz/mac/tkn154/TKN154_platform.h"
enum __nesc_unnamed4311 {


  IEEE154_RADIO_TX_DELAY = 400, 



  IEEE154_RADIO_RX_DELAY = 400, 




  BEACON_PAYLOAD_UPDATE_INTERVAL = 2500
};
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/TKN154_MAC.h"
enum __nesc_unnamed4312 {

  IEEE154_phyCurrentChannel = 0x00, 
  IEEE154_phyChannelsSupported = 0x01, 
  IEEE154_phyTransmitPower = 0x02, 
  IEEE154_phyCCAMode = 0x03, 
  IEEE154_phyCurrentPage = 0x04, 
  IEEE154_phyMaxFrameDuration = 0x05, 
  IEEE154_phySHRDuration = 0x06, 
  IEEE154_phySymbolsPerOctet = 0x07, 


  IEEE154_macAckWaitDuration = 0x40, 
  IEEE154_macAssociatedPANCoord = 0x56, 
  IEEE154_macAssociationPermit = 0x41, 
  IEEE154_macAutoRequest = 0x42, 
  IEEE154_macBattLifeExt = 0x43, 
  IEEE154_macBattLifeExtPeriods = 0x44, 
  IEEE154_macBeaconPayload = 0x45, 
  IEEE154_macBeaconPayloadLength = 0x46, 
  IEEE154_macBeaconOrder = 0x47, 
  IEEE154_macBeaconTxTime = 0x48, 
  IEEE154_macBSN = 0x49, 
  IEEE154_macCoordExtendedAddress = 0x4A, 
  IEEE154_macCoordShortAddress = 0x4B, 
  IEEE154_macDSN = 0x4C, 
  IEEE154_macGTSPermit = 0x4D, 
  IEEE154_macMaxBE = 0x57, 
  IEEE154_macMaxCSMABackoffs = 0x4E, 
  IEEE154_macMaxFrameTotalWaitTime = 0x58, 
  IEEE154_macMaxFrameRetries = 0x59, 
  IEEE154_macMinBE = 0x4F, 
  IEEE154_macMinLIFSPeriod = 0xA0, 
  IEEE154_macMinSIFSPeriod = 0xA1, 
  IEEE154_macPANId = 0x50, 
  IEEE154_macPromiscuousMode = 0x51, 
  IEEE154_macResponseWaitTime = 0x5A, 
  IEEE154_macRxOnWhenIdle = 0x52, 
  IEEE154_macSecurityEnabled = 0x5D, 
  IEEE154_macShortAddress = 0x53, 
  IEEE154_macSuperframeOrder = 0x54, 
  IEEE154_macSyncSymbolOffset = 0x5B, 
  IEEE154_macTimestampSupported = 0x5C, 
  IEEE154_macTransactionPersistenceTime = 0x55, 


  IEEE154_macPanCoordinator = 0xF0
};

enum __nesc_unnamed4313 {

  MHR_INDEX_FC1 = 0, 
  MHR_INDEX_FC2 = 1, 
  MHR_INDEX_SEQNO = 2, 
  MHR_INDEX_ADDRESS = 3, 
  MHR_MAX_LEN = 23, 


  FC1_FRAMETYPE_BEACON = 0x00, 
  FC1_FRAMETYPE_DATA = 0x01, 
  FC1_FRAMETYPE_ACK = 0x02, 
  FC1_FRAMETYPE_CMD = 0x03, 
  FC1_FRAMETYPE_MASK = 0x07, 

  FC1_SECURITY_ENABLED = 0x08, 
  FC1_FRAME_PENDING = 0x10, 
  FC1_ACK_REQUEST = 0x20, 
  FC1_PAN_ID_COMPRESSION = 0x40, 

  FC2_DEST_MODE_SHORT = 0x08, 
  FC2_DEST_MODE_EXTENDED = 0x0c, 
  FC2_DEST_MODE_MASK = 0x0c, 
  FC2_DEST_MODE_OFFSET = 2, 

  FC2_SRC_MODE_SHORT = 0x80, 
  FC2_SRC_MODE_EXTENDED = 0xc0, 
  FC2_SRC_MODE_MASK = 0xc0, 
  FC2_SRC_MODE_OFFSET = 6, 

  FC2_FRAME_VERSION_1 = 0x10, 
  FC2_FRAME_VERSION_2 = 0x20, 
  FC2_FRAME_VERSION_MASK = 0x30
};








enum __nesc_unnamed4314 {





  RADIO_CLIENT_SCAN = 0U, 
  RADIO_CLIENT_PIB = 1U, 
  RADIO_CLIENT_PROMISCUOUSMODE = 2U, 

  RADIO_CLIENT_BEACONTRANSMIT = 3U, 
  RADIO_CLIENT_COORDBROADCAST = 4U, 
  RADIO_CLIENT_COORDCAP = 5U, 
  RADIO_CLIENT_COORDCFP = 6U, 
  RADIO_CLIENT_COORD_INACTIVE_PERIOD = 7U, 

  RADIO_CLIENT_BEACONSYNCHRONIZE = 8U, 
  RADIO_CLIENT_DEVICECAP = 9U, 
  RADIO_CLIENT_DEVICECFP = 10U, 
  RADIO_CLIENT_DEVICE_INACTIVE_PERIOD = 11U
};

enum __nesc_unnamed4315 {

  OUTGOING_SUPERFRAME, 
  INCOMING_SUPERFRAME
};
#line 205
#line 183
typedef struct __nesc_unnamed4316 {

  uint8_t length;
  uint8_t mhr[MHR_MAX_LEN];
#line 198
  uint8_t network;



  uint8_t type;
} 

ieee154_header_t;





#line 207
typedef nx_struct __nesc_unnamed4317 {
  nx_uint32_t timestamp;
  nx_int8_t rssi;
  nx_uint8_t linkQuality;
} __attribute__((packed)) ieee154_metadata_t;










#line 213
typedef struct __nesc_unnamed4318 {

  ieee154_header_t *header;
  uint8_t *payload;
  ieee154_metadata_t *metadata;
  uint8_t headerLen;
  uint8_t payloadLen;
  uint8_t client;
  uint8_t handle;
} ieee154_txframe_t;





#line 224
typedef struct __nesc_unnamed4319 {

  ieee154_header_t header;
  ieee154_metadata_t metadata;
} ieee154_txcontrol_t;






#line 230
typedef struct ieee154_csma {
  uint8_t BE;
  uint8_t macMaxBE;
  uint8_t macMaxCsmaBackoffs;
  uint8_t NB;
} ieee154_csma_t;





#line 237
typedef struct __nesc_unnamed4320 {
  uint32_t transactionTime;
  ieee154_txframe_t *frame;
  ieee154_csma_t csma;
} ieee154_cap_frame_backup_t;




enum __nesc_unnamed4321 {
  CMD_FRAME_ASSOCIATION_REQUEST = 1, 
  CMD_FRAME_ASSOCIATION_RESPONSE = 2, 
  CMD_FRAME_DISASSOCIATION_NOTIFICATION = 3, 
  CMD_FRAME_DATA_REQUEST = 4, 
  CMD_FRAME_PAN_ID_CONFLICT_NOTIFICATION = 5, 
  CMD_FRAME_ORPHAN_NOTIFICATION = 6, 
  CMD_FRAME_BEACON_REQUEST = 7, 
  CMD_FRAME_COORDINATOR_REALIGNMENT = 8, 
  CMD_FRAME_GTS_REQUEST = 9
};

enum __nesc_unnamed4322 {

  BEACON_INDEX_SF_SPEC1 = 0, 
  BEACON_INDEX_SF_SPEC2 = 1, 
  BEACON_INDEX_GTS_SPEC = 2, 

  SF_SPEC1_BO_MASK = 0x0F, 
  SF_SPEC1_BO_OFFSET = 0, 
  SF_SPEC1_SO_MASK = 0xF0, 
  SF_SPEC1_SO_OFFSET = 4, 

  SF_SPEC2_FINAL_CAPSLOT_MASK = 0x0F, 
  SF_SPEC2_FINAL_CAPSLOT_OFFSET = 0, 
  SF_SPEC2_BATT_LIFE_EXT = 0x10, 
  SF_SPEC2_PAN_COORD = 0x40, 
  SF_SPEC2_ASSOCIATION_PERMIT = 0x80, 

  GTS_DESCRIPTOR_COUNT_MASK = 0x07, 
  GTS_DESCRIPTOR_COUNT_OFFSET = 0, 
  GTS_LENGTH_MASK = 0xF0, 
  GTS_LENGTH_OFFSET = 4, 
  GTS_SPEC_PERMIT = 0x80, 

  PENDING_ADDRESS_SHORT_MASK = 0x07, 
  PENDING_ADDRESS_EXT_MASK = 0x70
};

enum __nesc_unnamed4323 {

  IEEE154_aTurnaroundTime = 12, 

  FRAMECTL_LENGTH_MASK = 0x7F, 
  FRAMECTL_PROMISCUOUS = 0x80
};


enum __nesc_unnamed4324 {

  IEEE154_aNumSuperframeSlots = 16, 
  IEEE154_aMaxMPDUUnsecuredOverhead = 25, 
  IEEE154_aMinMPDUOverhead = 9, 
  IEEE154_aBaseSlotDuration = 60, 
  IEEE154_aBaseSuperframeDuration = IEEE154_aBaseSlotDuration * IEEE154_aNumSuperframeSlots, 
  IEEE154_aGTSDescPersistenceTime = 4, 
  IEEE154_aMaxBeaconOverhead = 75, 
  IEEE154_aMaxBeaconPayloadLength = IEEE154_aMaxPHYPacketSize - IEEE154_aMaxBeaconOverhead, 
  IEEE154_aMaxLostBeacons = 4, 
  IEEE154_aMaxMACSafePayloadSize = IEEE154_aMaxPHYPacketSize - IEEE154_aMaxMPDUUnsecuredOverhead, 
  IEEE154_aMaxMACPayloadSize = IEEE154_aMaxPHYPacketSize - IEEE154_aMinMPDUOverhead, 
  IEEE154_aMaxSIFSFrameSize = 18, 
  IEEE154_aMinCAPLength = 440, 
  IEEE154_aUnitBackoffPeriod = 20
};


typedef bool token_requested_t  ;
static inline token_requested_t rcombine(token_requested_t r1, token_requested_t r2);
# 20 "/usr/src/tinyos/tos/platforms/micaz/mac/tkn154/platform_message.h"
#line 17
typedef union message_header {
  ieee154_header_t ieee154;
  serial_header_t serial;
} message_header_t;


#line 22
typedef union TOSRadioFooter {
} message_footer_t;



#line 25
typedef union TOSRadioMetadata {
  ieee154_metadata_t ieee154;
} message_metadata_t;
# 19 "/usr/src/tinyos/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[118];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 40 "/usr/src/tinyos/tos/types/IeeeEui64.h"
enum __nesc_unnamed4325 {
#line 40
  IEEE_EUI64_LENGTH = 8
};


#line 42
typedef struct ieee_eui64 {
  uint8_t data[IEEE_EUI64_LENGTH];
} ieee_eui64_t;
# 47 "/usr/src/tinyos/tos/types/Ieee154.h"
typedef uint16_t ieee154_panid_t;
typedef uint16_t ieee154_saddr_t;
typedef ieee_eui64_t ieee154_laddr_t;







#line 51
typedef struct __nesc_unnamed4326 {
  uint8_t ieee_mode : 2;
  union __nesc_unnamed4327 {
    ieee154_saddr_t saddr;
    ieee154_laddr_t laddr;
  } ieee_addr;
} ieee154_addr_t;



enum __nesc_unnamed4328 {
  IEEE154_BROADCAST_ADDR = 0xffff, 
  IEEE154_LINK_MTU = 127
};

struct ieee154_frame_addr {
  ieee154_addr_t ieee_src;
  ieee154_addr_t ieee_dst;
  ieee154_panid_t ieee_dstpan;
};

enum __nesc_unnamed4329 {
  IEEE154_MIN_HDR_SZ = 6
};
#line 86
enum ieee154_fcf_enums {
  IEEE154_FCF_FRAME_TYPE = 0, 
  IEEE154_FCF_SECURITY_ENABLED = 3, 
  IEEE154_FCF_FRAME_PENDING = 4, 
  IEEE154_FCF_ACK_REQ = 5, 
  IEEE154_FCF_INTRAPAN = 6, 
  IEEE154_FCF_DEST_ADDR_MODE = 10, 
  IEEE154_FCF_SRC_ADDR_MODE = 14
};

enum ieee154_fcf_type_enums {
  IEEE154_TYPE_BEACON = 0, 
  IEEE154_TYPE_DATA = 1, 
  IEEE154_TYPE_ACK = 2, 
  IEEE154_TYPE_MAC_CMD = 3, 
  IEEE154_TYPE_MASK = 7
};

enum ieee154_fcf_addr_mode_enums {
  IEEE154_ADDR_NONE = 0, 
  IEEE154_ADDR_SHORT = 2, 
  IEEE154_ADDR_EXT = 3, 
  IEEE154_ADDR_MASK = 3
};
# 118 "/usr/src/tinyos/tos/lib/mac/tkn154/TKN154_PIB.h"
#line 44
typedef struct ieee154_PIB {




  ieee154_macAssociationPermit_t macAssociationPermit;

  ieee154_macAutoRequest_t macAutoRequest;

  ieee154_macBattLifeExt_t macBattLifeExt;

  ieee154_macGTSPermit_t macGTSPermit;

  ieee154_macPromiscuousMode_t macPromiscuousMode;

  ieee154_macRxOnWhenIdle_t macRxOnWhenIdle;

  ieee154_macAssociatedPANCoord_t macAssociatedPANCoord;

  ieee154_macSecurityEnabled_t macSecurityEnabled;

  ieee154_macPanCoordinator_t macPanCoordinator;




  ieee154_phyCurrentChannel_t phyCurrentChannel;

  ieee154_phyTransmitPower_t phyTransmitPower;

  ieee154_phyCCAMode_t phyCCAMode;

  ieee154_phyCurrentPage_t phyCurrentPage;

  ieee154_macBattLifeExtPeriods_t macBattLifeExtPeriods;

  ieee154_macBeaconPayloadLength_t macBeaconPayloadLength;

  ieee154_macBeaconOrder_t macBeaconOrder;

  ieee154_macBSN_t macBSN;

  ieee154_macDSN_t macDSN;

  ieee154_macMaxCSMABackoffs_t macMaxCSMABackoffs;

  ieee154_macMinBE_t macMinBE;

  ieee154_macSuperframeOrder_t macSuperframeOrder;

  ieee154_macMaxBE_t macMaxBE;

  ieee154_macMaxFrameRetries_t macMaxFrameRetries;

  ieee154_macResponseWaitTime_t macResponseWaitTime;




  ieee154_macCoordShortAddress_t macCoordShortAddress;

  ieee154_macPANId_t macPANId;

  ieee154_macShortAddress_t macShortAddress;

  ieee154_macTransactionPersistenceTime_t macTransactionPersistenceTime;


  ieee154_macMaxFrameTotalWaitTime_t macMaxFrameTotalWaitTime;

  ieee154_macBeaconTxTime_t macBeaconTxTime;

  ieee154_macCoordExtendedAddress_t macCoordExtendedAddress;
} 
ieee154_PIB_t;
# 33 "/usr/src/tinyos/tos/types/Resource.h"
typedef uint8_t resource_client_id_t;
# 39 "/usr/src/tinyos/tos/chips/cc2420/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 93
#line 87
typedef nx_struct security_header_t {
  unsigned char __nesc_filler2[1];


  nx_uint32_t frameCounter;
  nx_uint8_t keyID[1];
} __attribute__((packed)) security_header_t;
#line 113
#line 95
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;







  nxle_uint8_t network;


  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;





#line 118
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 143
#line 128
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_bool crc;
  nx_bool ack;
  nx_bool timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 





cc2420_metadata_t;





#line 146
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 179
enum __nesc_unnamed4330 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 118 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum cc2420_security_enums {
  CC2420_NO_SEC = 0, 
  CC2420_CBC_MAC = 1, 
  CC2420_CTR = 2, 
  CC2420_CCM = 3, 
  NO_SEC = 0, 
  CBC_MAC_4 = 1, 
  CBC_MAC_8 = 2, 
  CBC_MAC_16 = 3, 
  CTR = 4, 
  CCM_4 = 5, 
  CCM_8 = 6, 
  CCM_16 = 7
};


enum __nesc_unnamed4331 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 41 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128Spi.h"
enum __nesc_unnamed4332 {
  ATM128_SPI_CLK_DIVIDE_4 = 0, 
  ATM128_SPI_CLK_DIVIDE_16 = 1, 
  ATM128_SPI_CLK_DIVIDE_64 = 2, 
  ATM128_SPI_CLK_DIVIDE_128 = 3
};
#line 58
#line 49
typedef struct __nesc_unnamed4333 {
  uint8_t spie : 1;
  uint8_t spe : 1;
  uint8_t dord : 1;
  uint8_t mstr : 1;
  uint8_t cpol : 1;
  uint8_t cpha : 1;
  uint8_t spr : 2;
} 
Atm128SPIControl_s;



#line 59
typedef union __nesc_unnamed4334 {
  uint8_t flat;
  Atm128SPIControl_s bits;
} Atm128SPIControl_t;

typedef Atm128SPIControl_t Atm128_SPCR_t;








#line 67
typedef struct __nesc_unnamed4335 {
  uint8_t spif : 1;
  uint8_t wcol : 1;
  uint8_t rsvd : 5;
  uint8_t spi2x : 1;
} 
Atm128SPIStatus_s;



#line 74
typedef union __nesc_unnamed4336 {
  uint8_t flat;
  Atm128SPIStatus_s bits;
} Atm128SPIStatus_t;

typedef Atm128SPIStatus_t Atm128_SPSR_t;

typedef uint8_t Atm128_SPDR_t;
# 39 "/home/weber/bolsa/hello/tinyos-main/apps/tests/tkn154/beacon-enabled/TestAssociate/device/../app_profile.h"
enum __nesc_unnamed4337 {
  RADIO_CHANNEL = 26, 
  PAN_ID = 0x1238, 
  COORDINATOR_ADDRESS = 0x9182, 
  BEACON_ORDER = 6, 
  SUPERFRAME_ORDER = 6
};
typedef ieee154_txframe_t DataP__TxFramePool__t;
typedef uint64_t DataP__LocalExtendedAddress__val_t;
typedef ieee154_macSuperframeOrder_t PibP__SetMacSuperframeOrder__val_t;
typedef T62500hz PibP__LocalTime__precision_tag;
typedef ieee154_macPanCoordinator_t PibP__SetMacPanCoordinator__val_t;
typedef bool PibP__PromiscuousModeGet__val_t;
typedef uint64_t PibP__GetLocalExtendedAddress__val_t;
typedef ieee154_macBeaconTxTime_t PibP__SetMacBeaconTxTime__val_t;
typedef token_requested_t PibP__IsRadioTokenRequested__data_type;
typedef const void *PibP__PIBUpdate__val_t;
typedef bool RadioControlImplP__RadioPromiscuousMode__val_t;
typedef T62500hz IndirectTxP__IndirectTxTimeout__precision_tag;
typedef ieee154_txframe_t *IndirectTxP__GetIndirectTxFrame__val_t;
typedef bool IndirectTxP__PendingAddrSpecUpdated__val_t;
typedef ieee154_txframe_t PollP__TxFramePool__t;
typedef ieee154_txcontrol_t PollP__TxControlPool__t;
typedef uint64_t PollP__LocalExtendedAddress__val_t;
typedef ieee154_txframe_t ScanP__TxFramePool__t;
typedef T62500hz ScanP__ScanTimer__precision_tag;
typedef ieee154_txcontrol_t ScanP__TxControlPool__t;
typedef token_requested_t ScanP__IsRadioTokenRequested__data_type;
typedef ieee154_txframe_t AssociateP__TxFramePool__t;
typedef ieee154_txcontrol_t AssociateP__TxControlPool__t;
typedef uint64_t AssociateP__LocalExtendedAddress__val_t;
typedef T62500hz AssociateP__ResponseTimeout__precision_tag;
typedef ieee154_txframe_t DisassociateP__TxFramePool__t;
typedef ieee154_txcontrol_t DisassociateP__TxControlPool__t;
typedef uint64_t DisassociateP__LocalExtendedAddress__val_t;
typedef T62500hz BeaconSynchronizeP__TrackAlarm__precision_tag;
typedef uint32_t BeaconSynchronizeP__TrackAlarm__size_type;
typedef bool BeaconSynchronizeP__IsTrackingBeacons__data_type;
typedef ieee154_txframe_t */*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__t;
typedef T62500hz /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxWaitAlarm__precision_tag;
typedef uint32_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxWaitAlarm__size_type;
typedef T62500hz /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BLEAlarm__precision_tag;
typedef uint32_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BLEAlarm__size_type;
typedef bool /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__IsTrackingBeacons__data_type;
typedef bool /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__WasRxEnabled__val_t;
typedef ieee154_cap_frame_backup_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameBackup__data_type;
typedef T62500hz /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__CapEndAlarm__precision_tag;
typedef uint32_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__CapEndAlarm__size_type;
typedef ieee154_txframe_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__GetIndirectTxFrame__val_t;
typedef bool /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxEnableStateChange__val_t;
typedef ieee154_cap_frame_backup_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameRestore__data_type;
typedef token_requested_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__IsRadioTokenRequested__data_type;
typedef const void */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__PIBUpdateMacRxOnWhenIdle__val_t;
typedef bool /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__IsRxEnableActive__data_type;
typedef bool NoBeaconTransmitP__IsBroadcastReady__data_type;
typedef ieee154_macSuperframeOrder_t NoBeaconTransmitP__SetMacSuperframeOrder__val_t;
typedef bool NoBeaconTransmitP__GtsSpecUpdated__val_t;
typedef T62500hz NoBeaconTransmitP__BeaconPayloadUpdateTimer__precision_tag;
typedef bool NoBeaconTransmitP__IsTrackingBeacons__data_type;
typedef ieee154_macPanCoordinator_t NoBeaconTransmitP__SetMacPanCoordinator__val_t;
typedef bool NoBeaconTransmitP__PendingAddrSpecUpdated__val_t;
typedef ieee154_macBeaconTxTime_t NoBeaconTransmitP__SetMacBeaconTxTime__val_t;
typedef const void *NoBeaconTransmitP__PIBUpdate__val_t;
typedef T62500hz NoBeaconTransmitP__BeaconSendAlarm__precision_tag;
typedef uint32_t NoBeaconTransmitP__BeaconSendAlarm__size_type;
typedef ieee154_txframe_t *NoBeaconTransmitP__GetSetRealignmentFrame__val_t;
typedef bool NoBeaconTransmitP__IsSendingBeacons__data_type;
typedef ieee154_txframe_t */*TKN154BeaconEnabledP.CoordCapQueue*/NoDispatchQueueP__0__Queue__t;
typedef T62500hz /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RxWaitAlarm__precision_tag;
typedef uint32_t /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RxWaitAlarm__size_type;
typedef T62500hz /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__BLEAlarm__precision_tag;
typedef uint32_t /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__BLEAlarm__size_type;
typedef bool /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__IsTrackingBeacons__data_type;
typedef bool /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__WasRxEnabled__val_t;
typedef ieee154_cap_frame_backup_t */*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__FrameBackup__data_type;
typedef T62500hz /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__CapEndAlarm__precision_tag;
typedef uint32_t /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__CapEndAlarm__size_type;
typedef ieee154_txframe_t */*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__GetIndirectTxFrame__val_t;
typedef bool /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RxEnableStateChange__val_t;
typedef ieee154_cap_frame_backup_t */*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__FrameRestore__data_type;
typedef token_requested_t /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__IsRadioTokenRequested__data_type;
typedef const void */*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__PIBUpdateMacRxOnWhenIdle__val_t;
typedef bool /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__IsRxEnableActive__data_type;
typedef bool /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__IsEmbedded__data_type;
typedef T62500hz /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__Alarm__precision_tag;
typedef uint32_t /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__Alarm__size_type;
typedef bool /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__IsEmbedded__data_type;
typedef T62500hz /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__Alarm__precision_tag;
typedef uint32_t /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__Alarm__size_type;
typedef ieee154_macPanCoordinator_t RxEnableP__IsMacPanCoordinator__val_t;
typedef bool RxEnableP__IsSendingBeacons__data_type;
typedef bool RxEnableP__IsTrackingBeacons__data_type;
typedef bool RxEnableP__WasRxEnabled__val_t;
typedef bool RxEnableP__RxEnableStateChange__val_t;
typedef T62500hz RxEnableP__RxEnableTimer__precision_tag;
typedef bool RxEnableP__IsRxEnableActive__data_type;
typedef bool PromiscuousModeP__PromiscuousModeGet__val_t;
typedef token_requested_t PromiscuousModeP__IsRadioTokenRequested__data_type;
typedef bool PromiscuousModeP__RadioPromiscuousMode__val_t;
typedef uint64_t CoordRealignmentP__LocalExtendedAddress__val_t;
typedef ieee154_txframe_t CoordRealignmentP__TxFramePool__t;
typedef ieee154_txcontrol_t CoordRealignmentP__TxControlPool__t;
typedef ieee154_txframe_t *CoordRealignmentP__GetSetRealignmentFrame__val_t;
typedef bool CoordBroadcastP__IsBroadcastReady__data_type;
typedef ieee154_txframe_t *CoordBroadcastP__Queue__t;
typedef bool NoCoordCfpP__GtsSpecUpdated__val_t;
typedef T62500hz NoCoordCfpP__CfpSlotAlarm__precision_tag;
typedef uint32_t NoCoordCfpP__CfpSlotAlarm__size_type;
typedef T62500hz NoCoordCfpP__CfpEndAlarm__precision_tag;
typedef uint32_t NoCoordCfpP__CfpEndAlarm__size_type;
typedef ieee154_txframe_t NoDeviceCfpP__TxFramePool__t;
typedef T62500hz NoDeviceCfpP__CfpSlotAlarm__precision_tag;
typedef uint32_t NoDeviceCfpP__CfpSlotAlarm__size_type;
typedef T62500hz NoDeviceCfpP__CfpEndAlarm__precision_tag;
typedef uint32_t NoDeviceCfpP__CfpEndAlarm__size_type;
typedef ieee154_txcontrol_t NoDeviceCfpP__TxControlPool__t;
typedef ieee154_txframe_t /*TKN154BeaconEnabledP.TxFramePoolP*/PoolC__0__pool_t;
typedef /*TKN154BeaconEnabledP.TxFramePoolP*/PoolC__0__pool_t /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t;
typedef /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__t;
typedef ieee154_txcontrol_t /*TKN154BeaconEnabledP.TxControlPoolP*/PoolC__1__pool_t;
typedef /*TKN154BeaconEnabledP.TxControlPoolP*/PoolC__1__pool_t /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t;
typedef /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__t;
typedef ieee154_txframe_t */*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__queue_t;
typedef /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__queue_t /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__t;
typedef ieee154_txframe_t */*TKN154BeaconEnabledP.CoordCapQueueC*/QueueC__1__queue_t;
typedef /*TKN154BeaconEnabledP.CoordCapQueueC*/QueueC__1__queue_t /*TKN154BeaconEnabledP.CoordCapQueueC*/QueueC__1__Queue__t;
typedef ieee154_txframe_t */*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__queue_t;
typedef /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__queue_t /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__t;
typedef ieee154_cap_frame_backup_t /*TKN154BeaconEnabledP.BackupP*/BackupP__0__backup_t;
typedef /*TKN154BeaconEnabledP.BackupP*/BackupP__0__backup_t */*TKN154BeaconEnabledP.BackupP*/BackupP__0__Store__data_type;
typedef /*TKN154BeaconEnabledP.BackupP*/BackupP__0__backup_t */*TKN154BeaconEnabledP.BackupP*/BackupP__0__Retrieve__data_type;
typedef T62500hz CC2420TKN154P__LocalTime__precision_tag;
typedef bool CC2420TKN154P__CCA__data_type;
typedef bool CC2420TKN154P__RadioPromiscuousMode__val_t;
typedef const void *CC2420TKN154P__PIBUpdate__val_t;
typedef T62500hz CC2420ControlP__StartupAlarm__precision_tag;
typedef uint32_t CC2420ControlP__StartupAlarm__size_type;
typedef uint16_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__size_type;
typedef uint8_t HplAtm128Timer0AsyncP__Compare__size_type;
typedef uint8_t HplAtm128Timer0AsyncP__Timer__timer_size;
typedef uint16_t HplAtm128Timer1P__CompareA__size_type;
typedef uint16_t HplAtm128Timer1P__Capture__size_type;
typedef uint16_t HplAtm128Timer1P__CompareB__size_type;
typedef uint16_t HplAtm128Timer1P__CompareC__size_type;
typedef uint16_t HplAtm128Timer1P__Timer__timer_size;
enum /*CC2420ControlTransmitC.Spi*/CC2420SpiC__0____nesc_unnamed4338 {
  CC2420SpiC__0__CLIENT_ID = 0U
};
typedef T62500hz CC2420TransmitP__BackoffAlarm__precision_tag;
typedef uint32_t CC2420TransmitP__BackoffAlarm__size_type;
enum /*CC2420ReceiveC.Spi*/CC2420SpiC__1____nesc_unnamed4339 {
  CC2420SpiC__1__CLIENT_ID = 1U
};
typedef uint16_t /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size;
typedef /*InitOneP.InitOne*/Atm128TimerInitC__0__timer_size /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size;
typedef TOne /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__frequency_tag;
typedef uint16_t /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size;
typedef /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__frequency_tag /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__precision_tag;
typedef /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__size_type;
typedef /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type;
typedef /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size;
enum /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16*/AlarmOne16C__0____nesc_unnamed4340 {
  AlarmOne16C__0__COMPARE_ID = 0U
};
typedef TOne /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag;
typedef uint16_t /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__frequency_tag /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__precision_tag;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type;
typedef /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size;
typedef T32khz /*Counter32khz32C.Transform32*/TransformCounterC__0__to_precision_tag;
typedef uint32_t /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type;
typedef TOne /*Counter32khz32C.Transform32*/TransformCounterC__0__from_precision_tag;
typedef uint16_t /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type;
typedef counter_one_overflow_t /*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__from_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__to_precision_tag /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__precision_tag;
typedef /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__size_type;
typedef T32khz /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_precision_tag;
typedef uint32_t /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type;
typedef TOne /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_precision_tag;
typedef uint16_t /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type;
typedef /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_precision_tag /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__precision_tag;
typedef /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type;
typedef /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_precision_tag /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__precision_tag;
typedef /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type;
typedef /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_precision_tag /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__precision_tag;
typedef /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__size_type;
typedef T62500hz /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__precision_tag;
typedef uint32_t /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__size_type;
typedef T32khz /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__precision_tag;
typedef uint32_t /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__size_type;
typedef T62500hz Alarm32khzTo62500hzTransformC__Alarm__precision_tag;
typedef uint32_t Alarm32khzTo62500hzTransformC__Alarm__size_type;
typedef T32khz Alarm32khzTo62500hzTransformC__AlarmFrom__precision_tag;
typedef uint32_t Alarm32khzTo62500hzTransformC__AlarmFrom__size_type;
typedef TOne /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__frequency_tag;
typedef uint16_t /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__timer_size;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__frequency_tag /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__Alarm__precision_tag;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__timer_size /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__Alarm__size_type;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__timer_size /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__size_type;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__timer_size /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__timer_size;
enum /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16*/AlarmOne16C__1____nesc_unnamed4341 {
  AlarmOne16C__1__COMPARE_ID = 1U
};
typedef T32khz /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__to_precision_tag;
typedef uint32_t /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__to_size_type;
typedef TOne /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__from_precision_tag;
typedef uint16_t /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__from_size_type;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__to_precision_tag /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Alarm__precision_tag;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__to_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Alarm__size_type;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__from_precision_tag /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__AlarmFrom__precision_tag;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__from_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__AlarmFrom__size_type;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__to_precision_tag /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Counter__precision_tag;
typedef /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__to_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Counter__size_type;
typedef T32khz /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__precision_tag;
typedef uint32_t /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type;
typedef /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__precision_tag /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__precision_tag;
typedef /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type;
typedef /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__precision_tag /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__precision_tag;
typedef /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type;
enum /*Ieee802154BeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0____nesc_unnamed4342 {
  Alarm62500hz32VirtualizedC__0__CLIENT_ID = 0U
};
typedef TOne /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__frequency_tag;
typedef uint16_t /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__timer_size;
typedef /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__frequency_tag /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__Alarm__precision_tag;
typedef /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__timer_size /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__Alarm__size_type;
typedef /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__timer_size /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Compare__size_type;
typedef /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__timer_size /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Timer__timer_size;
enum /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16*/AlarmOne16C__2____nesc_unnamed4343 {
  AlarmOne16C__2__COMPARE_ID = 2U
};
typedef T32khz /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_precision_tag;
typedef uint32_t /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_size_type;
typedef TOne /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__from_precision_tag;
typedef uint16_t /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__from_size_type;
typedef /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_precision_tag /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__precision_tag;
typedef /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_size_type /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__size_type;
typedef /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__from_precision_tag /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__AlarmFrom__precision_tag;
typedef /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__from_size_type /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__AlarmFrom__size_type;
typedef /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_precision_tag /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Counter__precision_tag;
typedef /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_size_type /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Counter__size_type;
typedef T62500hz /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__precision_tag;
typedef uint32_t /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__size_type;
typedef T32khz /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__precision_tag;
typedef uint32_t /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__size_type;
enum /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1____nesc_unnamed4344 {
  Alarm62500hz32VirtualizedC__1__CLIENT_ID = 1U
};
typedef T62500hz LocalTime62500hzP__LocalTime__precision_tag;
typedef T62500hz LocalTime62500hzP__Alarm__precision_tag;
typedef uint32_t LocalTime62500hzP__Alarm__size_type;
typedef bool TKN154TimingP__CCA__data_type;
typedef T62500hz TKN154TimingP__SymbolAlarm__precision_tag;
typedef uint32_t TKN154TimingP__SymbolAlarm__size_type;
enum /*Ieee802154BeaconEnabledC.MACAlarm1*/Alarm62500hz32VirtualizedC__2____nesc_unnamed4345 {
  Alarm62500hz32VirtualizedC__2__CLIENT_ID = 2U
};
enum /*Ieee802154BeaconEnabledC.MACAlarm2*/Alarm62500hz32VirtualizedC__3____nesc_unnamed4346 {
  Alarm62500hz32VirtualizedC__3__CLIENT_ID = 3U
};
enum /*Ieee802154BeaconEnabledC.MACAlarm3*/Alarm62500hz32VirtualizedC__4____nesc_unnamed4347 {
  Alarm62500hz32VirtualizedC__4__CLIENT_ID = 4U
};
enum /*Ieee802154BeaconEnabledC.MACAlarm4*/Alarm62500hz32VirtualizedC__5____nesc_unnamed4348 {
  Alarm62500hz32VirtualizedC__5__CLIENT_ID = 5U
};
enum /*Ieee802154BeaconEnabledC.MACAlarm5*/Alarm62500hz32VirtualizedC__6____nesc_unnamed4349 {
  Alarm62500hz32VirtualizedC__6__CLIENT_ID = 6U
};
enum /*Ieee802154BeaconEnabledC.MACAlarm6*/Alarm62500hz32VirtualizedC__7____nesc_unnamed4350 {
  Alarm62500hz32VirtualizedC__7__CLIENT_ID = 7U
};
enum /*Ieee802154BeaconEnabledC.MACAlarm7*/Alarm62500hz32VirtualizedC__8____nesc_unnamed4351 {
  Alarm62500hz32VirtualizedC__8__CLIENT_ID = 8U
};
enum /*Ieee802154BeaconEnabledC.MACAlarm8*/Alarm62500hz32VirtualizedC__9____nesc_unnamed4352 {
  Alarm62500hz32VirtualizedC__9__CLIENT_ID = 9U
};
enum /*Ieee802154BeaconEnabledC.MACAlarm9*/Alarm62500hz32VirtualizedC__10____nesc_unnamed4353 {
  Alarm62500hz32VirtualizedC__10__CLIENT_ID = 10U
};
enum /*Ieee802154BeaconEnabledC.MACAlarm10*/Alarm62500hz32VirtualizedC__11____nesc_unnamed4354 {
  Alarm62500hz32VirtualizedC__11__CLIENT_ID = 11U
};
enum /*Ieee802154BeaconEnabledC.MACAlarm11*/Alarm62500hz32VirtualizedC__12____nesc_unnamed4355 {
  Alarm62500hz32VirtualizedC__12__CLIENT_ID = 12U
};
enum /*Ieee802154BeaconEnabledC.MACAlarm12*/Alarm62500hz32VirtualizedC__13____nesc_unnamed4356 {
  Alarm62500hz32VirtualizedC__13__CLIENT_ID = 13U
};
enum /*Ieee802154BeaconEnabledC.MACAlarm13*/Alarm62500hz32VirtualizedC__14____nesc_unnamed4357 {
  Alarm62500hz32VirtualizedC__14__CLIENT_ID = 14U
};
enum /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__15____nesc_unnamed4358 {
  Alarm62500hz32VirtualizedC__15__CLIENT_ID = 15U
};
typedef T62500hz /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef T62500hz /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef uint16_t RandomMlcgC__SeedInit__parameter;
typedef T62500hz TestDeviceC__DisassociateTimer__precision_tag;
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t PlatformP__Init__init(void );
#line 62
static error_t MotePlatformP__PlatformInit__init(void );
# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );





static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );



static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 41
static void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 40
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 46
static void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 44
static void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get(void );
static void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__get(void );
static void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get(void );
#line 43
static bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__get(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t MeasureClockC__Init__init(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(
# 56 "/usr/src/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2ab71cf0bab0);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__default__runTask(
# 56 "/usr/src/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2ab71cf0bab0);
# 57 "/usr/src/tinyos/tos/interfaces/Scheduler.nc"
static void SchedulerBasicP__Scheduler__init(void );
#line 72
static void SchedulerBasicP__Scheduler__taskLoop(void );
#line 65
static bool SchedulerBasicP__Scheduler__runNextTask(void );
# 76 "/usr/src/tinyos/tos/interfaces/McuSleep.nc"
static void McuSleepC__McuSleep__sleep(void );
# 52 "/usr/src/tinyos/tos/interfaces/McuPowerState.nc"
static void McuSleepC__McuPowerState__update(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t LedsP__Init__init(void );
# 72 "/usr/src/tinyos/tos/interfaces/Leds.nc"
static void LedsP__Leds__led1On(void );




static void LedsP__Leds__led1Off(void );
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void DataP__DeviceCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *DataP__DeviceCfpRx__received(message_t *frame);
#line 43
static message_t *DataP__CoordCfpRx__received(message_t *frame);
#line 43
static message_t *DataP__DeviceCapRx__received(message_t *frame);
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void DataP__IndirectTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 91 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MCPS/MCPS_DATA.nc"
static void DataP__MCPS_DATA__default__confirm(
message_t *frame, 
uint8_t msduHandle, 
ieee154_status_t status, 
uint32_t Timestamp);









static message_t *DataP__MCPS_DATA__default__indication(message_t *frame);
# 37 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/Purge.nc"
static void DataP__PurgeDirect__purgeDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void DataP__BroadcastTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 152 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
static void *PibP__Frame__getPayload(message_t *frame);
#line 181
static bool PibP__Frame__isTimestampValid(message_t *frame);
#line 69
static error_t PibP__Frame__getSrcAddr(message_t *frame, ieee154_address_t *address);
#line 55
static uint8_t PibP__Frame__getSrcAddrMode(message_t *frame);
#line 174
static uint32_t PibP__Frame__getTimestamp(message_t *frame);
#line 160
static uint8_t PibP__Frame__getPayloadLength(message_t *frame);
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
static bool PibP__TimeCalc__hasExpired(uint32_t t0, uint32_t dt);
#line 40
static uint32_t PibP__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t PibP__LocalInit__init(void );
# 117 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_macMinBE_t PibP__MLME_GET__macMinBE(void );
#line 150
static ieee154_macResponseWaitTime_t PibP__MLME_GET__macResponseWaitTime(void );
#line 93
static ieee154_macBeaconOrder_t PibP__MLME_GET__macBeaconOrder(void );
#line 147
static ieee154_macMaxFrameRetries_t PibP__MLME_GET__macMaxFrameRetries(void );
#line 87
static ieee154_macBattLifeExtPeriods_t PibP__MLME_GET__macBattLifeExtPeriods(void );
#line 63
static ieee154_phyCurrentPage_t PibP__MLME_GET__phyCurrentPage(void );
#line 84
static ieee154_macBattLifeExt_t PibP__MLME_GET__macBattLifeExt(void );
#line 120
static ieee154_macPANId_t PibP__MLME_GET__macPANId(void );
#line 51
static ieee154_phyCurrentChannel_t PibP__MLME_GET__phyCurrentChannel(void );
#line 66
static ieee154_phyMaxFrameDuration_t PibP__MLME_GET__phyMaxFrameDuration(void );
#line 144
static ieee154_macMaxFrameTotalWaitTime_t PibP__MLME_GET__macMaxFrameTotalWaitTime(void );
#line 135
static ieee154_macTransactionPersistenceTime_t PibP__MLME_GET__macTransactionPersistenceTime(void );
#line 165
static ieee154_macMinSIFSPeriod_t PibP__MLME_GET__macMinSIFSPeriod(void );
#line 129
static ieee154_macShortAddress_t PibP__MLME_GET__macShortAddress(void );
#line 141
static ieee154_macMaxBE_t PibP__MLME_GET__macMaxBE(void );
#line 114
static ieee154_macMaxCSMABackoffs_t PibP__MLME_GET__macMaxCSMABackoffs(void );
#line 81
static ieee154_macAutoRequest_t PibP__MLME_GET__macAutoRequest(void );
#line 54
static ieee154_phyChannelsSupported_t PibP__MLME_GET__phyChannelsSupported(void );
#line 162
static ieee154_macMinLIFSPeriod_t PibP__MLME_GET__macMinLIFSPeriod(void );
#line 105
static ieee154_macCoordShortAddress_t PibP__MLME_GET__macCoordShortAddress(void );
#line 102
static ieee154_macCoordExtendedAddress_t PibP__MLME_GET__macCoordExtendedAddress(void );





static ieee154_macDSN_t PibP__MLME_GET__macDSN(void );
# 106 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154BeaconFrame.nc"
static error_t PibP__BeaconFrame__parsePANDescriptor(message_t *frame, uint8_t LogicalChannel, 
uint8_t ChannelPage, ieee154_PANDescriptor_t *pdescriptor);
#line 119
static void *PibP__BeaconFrame__getBeaconPayload(message_t *frame);
#line 88
static uint8_t PibP__BeaconFrame__isLocalAddrPending(message_t *frame);
#line 132
static uint8_t PibP__BeaconFrame__getBeaconPayloadLength(message_t *frame);
# 113 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
static void PibP__RadioControl__startDone(error_t error);
#line 138
static void PibP__RadioControl__stopDone(error_t error);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void PibP__resetSpinTask__runTask(void );
# 119 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void PibP__RadioToken__transferredFrom(uint8_t srcClient);
#line 98
static void PibP__RadioToken__granted(void );
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
static PibP__GetLocalExtendedAddress__val_t PibP__GetLocalExtendedAddress__get(void );
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void PibP__RadioOff__offDone(void );
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
static PibP__IsRadioTokenRequested__data_type PibP__IsRadioTokenRequested__getNow(void );
# 138 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
static ieee154_status_t PibP__MLME_SET__macPANId(ieee154_macPANId_t value);
#line 54
static ieee154_status_t PibP__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value);
#line 151
static ieee154_status_t PibP__MLME_SET__macShortAddress(ieee154_macShortAddress_t value);









static ieee154_status_t PibP__MLME_SET__macAssociatedPANCoord(ieee154_macAssociatedPANCoord_t value);
#line 80
static ieee154_status_t PibP__MLME_SET__macAutoRequest(ieee154_macAutoRequest_t value);
#line 113
static ieee154_status_t PibP__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value);
#line 108
static ieee154_status_t PibP__MLME_SET__macCoordExtendedAddress(ieee154_macCoordExtendedAddress_t value);









static ieee154_status_t PibP__MLME_SET__macDSN(ieee154_macDSN_t value);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void PibP__radioControlStopTask__runTask(void );
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void PibP__PIBUpdate__default__notify(
# 59 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
uint8_t arg_0x2ab71d3bed98, 
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
PibP__PIBUpdate__val_t val);
# 37 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
static uint8_t PibP__FrameUtility__writeHeader(
uint8_t *mhr, 
uint8_t DstAddrMode, 
uint16_t DstPANId, 
ieee154_address_t *DstAddr, 
uint8_t SrcAddrMode, 
uint16_t SrcPANId, 
const ieee154_address_t *SrcAddr, 
bool PANIDCompression);


static error_t PibP__FrameUtility__getMHRLength(uint8_t fcf1, uint8_t fcf2, uint8_t *len);
#line 64
static void PibP__FrameUtility__convertToNative(uint64_t *destNative, const uint8_t *srcLE);
#line 55
static void PibP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE);


static void PibP__FrameUtility__copyCoordExtendedAddressLE(uint8_t *destLE);


static void PibP__FrameUtility__convertToLE(uint8_t *destLE, const uint64_t *srcNative);
#line 52
static bool PibP__FrameUtility__isBeaconFromCoord(message_t *frame);
# 69 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RESET.nc"
static ieee154_status_t PibP__MLME_RESET__request(
bool SetDefaultPIB);
# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static error_t RadioControlImplP__MacTx__transmit(
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x2ab71d5a1e80, 
# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
ieee154_txframe_t *frame, uint32_t t0, uint32_t dt);
#line 83
static void RadioControlImplP__MacTx__default__transmitDone(
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x2ab71d5a1e80, 
# 83 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
ieee154_txframe_t *frame, error_t result);
# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
static error_t RadioControlImplP__SlottedCsmaCa__transmit(
# 44 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x2ab71d5a0c30, 
# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
ieee154_txframe_t *frame, ieee154_csma_t *csma, 
uint32_t slot0Time, uint32_t dtMax, bool resume, uint16_t remainingBackoff);
#line 115
static void RadioControlImplP__SlottedCsmaCa__default__transmitDone(
# 44 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x2ab71d5a0c30, 
# 115 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result);
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static error_t RadioControlImplP__MacRx__enableRx(
# 42 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x2ab71d5a4d58, 
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
uint32_t t0, uint32_t dt);








static void RadioControlImplP__MacRx__default__enableRxDone(
# 42 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x2ab71d5a4d58);
# 73 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static bool RadioControlImplP__MacRx__isReceiving(
# 42 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x2ab71d5a4d58);
# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static message_t *RadioControlImplP__MacRx__default__received(
# 42 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x2ab71d5a4d58, 
# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
message_t *frame);
# 83 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static void RadioControlImplP__PhyTx__transmitDone(ieee154_txframe_t *frame, error_t result);
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void RadioControlImplP__PhyRadioOff__offDone(void );
#line 53
static void RadioControlImplP__MacRadioOff__default__offDone(
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x2ab71d5c6868);
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t RadioControlImplP__MacRadioOff__off(
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x2ab71d5c6868);
# 60 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static bool RadioControlImplP__MacRadioOff__isOff(
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x2ab71d5c6868);
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void RadioControlImplP__PhyRx__enableRxDone(void );
#line 84
static message_t *RadioControlImplP__PhyRx__received(message_t *frame);
# 115 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
static void RadioControlImplP__PhySlottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__Init__init(void );
# 79 "/usr/src/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
# 53 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__default__requested(
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x2ab71d624020);
# 65 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__unconfigure(
# 57 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x2ab71d622538);
# 59 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__configure(
# 57 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x2ab71d622538);
# 98 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__default__granted(
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x2ab71d626ad8);
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x2ab71d626ad8);
# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__transferTo(
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x2ab71d626ad8, 
# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
uint8_t dstClient);
#line 145
static bool /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__isOwner(
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x2ab71d626ad8);
# 119 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__default__transferredFrom(
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x2ab71d626ad8, 
# 119 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
uint8_t srcClient);
#line 84
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__request(
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x2ab71d626ad8);
# 98 "/usr/src/tinyos/tos/interfaces/ArbiterInfo.nc"
static uint8_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ArbiterInfo__userId(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__runTask(void );
# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void IndirectTxP__IndirectTxTimeout__fired(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t IndirectTxP__FrameTx__transmit(
# 42 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
uint8_t arg_0x2ab71d6636a0, 
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
ieee154_txframe_t *txFrame);







static void IndirectTxP__FrameTx__default__transmitDone(
# 42 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
uint8_t arg_0x2ab71d6636a0, 
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
ieee154_txframe_t *txFrame, ieee154_status_t status);
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
static IndirectTxP__GetIndirectTxFrame__val_t IndirectTxP__GetIndirectTxFrame__get(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void IndirectTxP__tryCoordCapTxTask__runTask(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t IndirectTxP__Reset__init(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
static message_t *PollP__DataExtracted__received(message_t *rxFrame, ieee154_txframe_t *txFrame);
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
static ieee154_status_t PollP__DataRequest__poll(
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
uint8_t arg_0x2ab71d6f9af0, 
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
uint8_t CoordAddrMode, uint16_t CoordPANId, uint8_t *CoordAddressLE, uint8_t SrcAddrMode);





static void PollP__DataRequest__default__pollDone(
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
uint8_t arg_0x2ab71d6f9af0);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t PollP__Init__init(void );
# 73 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_POLL.nc"
static void PollP__MLME_POLL__default__confirm(
ieee154_status_t status);
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void PollP__PollTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 83 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static void ScanP__RadioTx__transmitDone(ieee154_txframe_t *frame, error_t result);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void ScanP__continueScanRequestTask__runTask(void );
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void ScanP__RadioRx__enableRxDone(void );
#line 84
static message_t *ScanP__RadioRx__received(message_t *frame);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void ScanP__startTimerTask__runTask(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t ScanP__Init__init(void );
# 119 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void ScanP__RadioToken__transferredFrom(uint8_t srcClient);
#line 98
static void ScanP__RadioToken__granted(void );
# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void ScanP__ScanTimer__fired(void );
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void ScanP__RadioOff__offDone(void );
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
static ScanP__IsRadioTokenRequested__data_type ScanP__IsRadioTokenRequested__getNow(void );
# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/EnergyDetection.nc"
static void ScanP__EnergyDetection__done(error_t status, int8_t EnergyLevel);
# 87 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SCAN.nc"
static ieee154_status_t ScanP__MLME_SCAN__request(
uint8_t ScanType, 
uint32_t ScanChannels, 
uint8_t ScanDuration, 
uint8_t ChannelPage, 
uint8_t EnergyDetectListNumEntries, 
int8_t *EnergyDetectList, 
uint8_t PANDescriptorListNumEntries, 
ieee154_PANDescriptor_t *PANDescriptorList, 
ieee154_security_t *security);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void ScanP__nextIterationTask__runTask(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
static message_t *AssociateP__AssociationResponseExtracted__received(message_t *rxFrame, ieee154_txframe_t *txFrame);
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
static void AssociateP__DataRequest__pollDone(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t AssociateP__Init__init(void );
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_ASSOCIATE.nc"
static ieee154_status_t AssociateP__MLME_ASSOCIATE__request(
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
uint8_t CoordAddrMode, 
uint16_t CoordPANID, 
ieee154_address_t CoordAddress, 
ieee154_CapabilityInformation_t CapabilityInformation, 
ieee154_security_t *security);
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void AssociateP__AssociationResponseTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void AssociateP__ResponseTimeout__fired(void );
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void AssociateP__AssociationRequestTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 51
static void DisassociateP__DisassociationToCoord__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 51
static void DisassociateP__DisassociationDirectTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 64 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_DISASSOCIATE.nc"
static ieee154_status_t DisassociateP__MLME_DISASSOCIATE__request(
uint8_t DeviceAddrMode, 
uint16_t DevicePANID, 
ieee154_address_t DeviceAddress, 
ieee154_disassociation_reason_t DisassociateReason, 
bool TxIndirect, 
ieee154_security_t *security);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *DisassociateP__DisassociationDirectRxFromCoord__received(message_t *frame);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t DisassociateP__Init__init(void );
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void DisassociateP__DisassociationIndirectTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
static message_t *DisassociateP__DisassociationExtractedFromCoord__received(message_t *rxFrame, ieee154_txframe_t *txFrame);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void BeaconSynchronizeP__processBeaconTask__runTask(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void BeaconSynchronizeP__TrackAlarm__fired(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void BeaconSynchronizeP__signalGrantedTask__runTask(void );
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
static BeaconSynchronizeP__IsTrackingBeacons__data_type BeaconSynchronizeP__IsTrackingBeacons__getNow(void );
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
static void BeaconSynchronizeP__DataRequest__pollDone(void );
# 119 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void BeaconSynchronizeP__RadioToken__transferredFrom(uint8_t srcClient);
#line 98
static void BeaconSynchronizeP__RadioToken__granted(void );
# 104 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
static error_t BeaconSynchronizeP__TrackSingleBeacon__start(void );
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void BeaconSynchronizeP__RadioOff__offDone(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t BeaconSynchronizeP__Reset__init(void );
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SuperframeStructure.nc"
static uint32_t BeaconSynchronizeP__IncomingSF__sfStartTime(void );







static uint32_t BeaconSynchronizeP__IncomingSF__sfSlotDuration(void );
#line 83
static uint16_t BeaconSynchronizeP__IncomingSF__battLifeExtDuration(void );
#line 108
static bool BeaconSynchronizeP__IncomingSF__isBroadcastPending(void );
#line 100
static uint16_t BeaconSynchronizeP__IncomingSF__guardTime(void );
#line 67
static uint8_t BeaconSynchronizeP__IncomingSF__numCapSlots(void );
# 62 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SYNC.nc"
static ieee154_status_t BeaconSynchronizeP__MLME_SYNC__request(
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
bool TrackBeacon);
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void BeaconSynchronizeP__BeaconRx__enableRxDone(void );
#line 84
static message_t *BeaconSynchronizeP__BeaconRx__received(message_t *frame);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *BeaconSynchronizeP__CoordRealignmentRx__received(message_t *frame);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTx__transmit(
# 40 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
uint8_t arg_0x2ab71d974c68, 
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
ieee154_txframe_t *txFrame);







static void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTx__default__transmitDone(
# 40 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
uint8_t arg_0x2ab71d974c68, 
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
ieee154_txframe_t *txFrame, ieee154_status_t status);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__txTask__runTask(void );
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTxCsma__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Reset__init(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxWaitAlarm__fired(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameTx__transmit(ieee154_txframe_t *txFrame);
# 115 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SlottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
static message_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameExtracted__default__received(
# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
uint8_t arg_0x2ab71d9d4c50, 
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
message_t *rxFrame, ieee154_txframe_t *txFrame);
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BLEAlarm__fired(void );
# 53 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioTokenRequested__requested(void );
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioRx__enableRxDone(void );
#line 84
static message_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioRx__received(message_t *frame);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameRx__default__received(
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
uint8_t arg_0x2ab71d9d4020, 
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
message_t *frame);
# 53 "/usr/src/tinyos/tos/interfaces/SetNow.nc"
static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameBackup__default__setNow(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameBackup__data_type val);
# 59 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SYNC_LOSS.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_SYNC_LOSS__indication(
ieee154_status_t lossReason, 
uint16_t PANId, 
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
ieee154_security_t *security);
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__CapEndAlarm__fired(void );
# 98 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioToken__granted(void );
#line 119
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioToken__transferredFrom(uint8_t srcClient);
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxEnableStateChange__notify(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxEnableStateChange__val_t val);
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
static /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameRestore__data_type /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameRestore__default__getNow(void );
# 113 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__TrackSingleBeacon__startDone(error_t error);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__wasRxEnabledTask__runTask(void );
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioOff__offDone(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__setupTxBroadcastTask__runTask(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__Reset__init(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__signalTxDoneTask__runTask(void );
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTxNow.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BroadcastTx__default__transmitNowDone(ieee154_txframe_t *frame, ieee154_status_t status);
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__PIBUpdateMacRxOnWhenIdle__notify(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__PIBUpdateMacRxOnWhenIdle__val_t val);
# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void NoBeaconTransmitP__BeaconPayloadUpdateTimer__fired(void );
# 83 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static void NoBeaconTransmitP__BeaconTx__transmitDone(ieee154_txframe_t *frame, error_t result);
# 108 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SuperframeStructure.nc"
static bool NoBeaconTransmitP__OutgoingSF__isBroadcastPending(void );
# 119 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void NoBeaconTransmitP__RadioToken__transferredFrom(uint8_t srcClient);
#line 98
static void NoBeaconTransmitP__RadioToken__granted(void );
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void NoBeaconTransmitP__RealignmentBeaconEnabledTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void NoBeaconTransmitP__PendingAddrSpecUpdated__notify(NoBeaconTransmitP__PendingAddrSpecUpdated__val_t val);
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void NoBeaconTransmitP__RadioOff__offDone(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t NoBeaconTransmitP__Reset__init(void );
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void NoBeaconTransmitP__PIBUpdate__notify(
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoBeaconTransmitP.nc"
uint8_t arg_0x2ab71db1e3c0, 
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
NoBeaconTransmitP__PIBUpdate__val_t val);
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void NoBeaconTransmitP__BeaconSendAlarm__fired(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t /*TKN154BeaconEnabledP.CoordCapQueue*/NoDispatchQueueP__0__FrameTx__transmit(
# 45 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDispatchQueueP.nc"
uint8_t arg_0x2ab71db77478, 
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
ieee154_txframe_t *txFrame);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t /*TKN154BeaconEnabledP.CoordCapQueue*/NoDispatchQueueP__0__Reset__init(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__FrameTx__transmit(ieee154_txframe_t *txFrame);
# 115 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
static void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__SlottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result);
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__BLEAlarm__fired(void );
# 53 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioTokenRequested__requested(void );
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioRx__enableRxDone(void );
#line 84
static message_t */*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioRx__received(message_t *frame);
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__CapEndAlarm__fired(void );
# 98 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioToken__granted(void );
#line 119
static void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioToken__transferredFrom(uint8_t srcClient);
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RxEnableStateChange__notify(/*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RxEnableStateChange__val_t val);
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioOff__offDone(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__Reset__init(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTxNow.nc"
static ieee154_status_t /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__BroadcastTx__transmitNow(ieee154_txframe_t *frame);
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__PIBUpdateMacRxOnWhenIdle__notify(/*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__PIBUpdateMacRxOnWhenIdle__val_t val);
# 113 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
static void /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioControl__startDone(error_t error);
#line 138
static void /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioControl__stopDone(error_t error);
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__Alarm__fired(void );
# 98 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioToken__granted(void );
#line 119
static void /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioToken__transferredFrom(uint8_t srcClient);
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioOff__offDone(void );
# 113 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
static void /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioControl__startDone(error_t error);
#line 138
static void /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioControl__stopDone(error_t error);
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__Alarm__fired(void );
# 98 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioToken__granted(void );
#line 119
static void /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioToken__transferredFrom(uint8_t srcClient);
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioOff__offDone(void );
# 75 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RX_ENABLE.nc"
static void RxEnableP__MLME_RX_ENABLE__default__confirm(
ieee154_status_t status);
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void RxEnableP__WasRxEnabled__notify(RxEnableP__WasRxEnabled__val_t val);
# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void RxEnableP__RxEnableTimer__fired(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t RxEnableP__Reset__init(void );
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
static RxEnableP__IsRxEnableActive__data_type RxEnableP__IsRxEnableActive__getNow(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void PromiscuousModeP__signalStartDoneTask__runTask(void );
# 113 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
static void PromiscuousModeP__PromiscuousMode__default__startDone(error_t error);
#line 138
static void PromiscuousModeP__PromiscuousMode__default__stopDone(error_t error);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t PromiscuousModeP__Init__init(void );
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
static PromiscuousModeP__PromiscuousModeGet__val_t PromiscuousModeP__PromiscuousModeGet__get(void );
# 119 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void PromiscuousModeP__RadioToken__transferredFrom(uint8_t srcClient);
#line 98
static void PromiscuousModeP__RadioToken__granted(void );
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void PromiscuousModeP__RadioOff__offDone(void );
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
static PromiscuousModeP__IsRadioTokenRequested__data_type PromiscuousModeP__IsRadioTokenRequested__getNow(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void PromiscuousModeP__continueStopTask__runTask(void );
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void PromiscuousModeP__PromiscuousRx__enableRxDone(void );
#line 84
static message_t *PromiscuousModeP__PromiscuousRx__received(message_t *frame);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t CoordRealignmentP__Init__init(void );
# 119 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void CoordBroadcastP__RadioToken__transferredFrom(uint8_t srcClient);
#line 98
static void CoordBroadcastP__RadioToken__granted(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t CoordBroadcastP__Reset__init(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void CoordBroadcastP__transmitNowDoneTask__runTask(void );
# 83 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static void NoCoordCfpP__RadioTx__transmitDone(ieee154_txframe_t *frame, error_t result);
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void NoCoordCfpP__CfpSlotAlarm__fired(void );
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void NoCoordCfpP__RadioRx__enableRxDone(void );
#line 84
static message_t *NoCoordCfpP__RadioRx__received(message_t *frame);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t NoCoordCfpP__Init__init(void );
# 119 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void NoCoordCfpP__RadioToken__transferredFrom(uint8_t srcClient);
#line 98
static void NoCoordCfpP__RadioToken__granted(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void NoCoordCfpP__CfpEndAlarm__fired(void );
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void NoCoordCfpP__RadioOff__offDone(void );
# 83 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static void NoDeviceCfpP__RadioTx__transmitDone(ieee154_txframe_t *frame, error_t result);
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void NoDeviceCfpP__CfpSlotAlarm__fired(void );
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void NoDeviceCfpP__RadioRx__enableRxDone(void );
#line 84
static message_t *NoDeviceCfpP__RadioRx__received(message_t *frame);
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void NoDeviceCfpP__GTSrequestTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t NoDeviceCfpP__Init__init(void );
# 119 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void NoDeviceCfpP__RadioToken__transferredFrom(uint8_t srcClient);
#line 98
static void NoDeviceCfpP__RadioToken__granted(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void NoDeviceCfpP__CfpEndAlarm__fired(void );
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void NoDeviceCfpP__RadioOff__offDone(void );
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static 
#line 94
/*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__t * 


/*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__get(void );
#line 89
static error_t /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(
#line 85
/*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__t * newVal);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Init__init(void );
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static 
#line 94
/*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__t * 


/*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__get(void );
#line 89
static error_t /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__put(
#line 85
/*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__t * newVal);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Init__init(void );
# 73 "/usr/src/tinyos/tos/interfaces/Queue.nc"
static 
#line 71
/*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__t  

/*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__head(void );
#line 90
static error_t /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__enqueue(
#line 86
/*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__t  newVal);
#line 65
static uint8_t /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__maxSize(void );
#line 81
static 
#line 79
/*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__t  

/*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__dequeue(void );
#line 50
static bool /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__empty(void );







static uint8_t /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__size(void );
#line 73
static 
#line 71
/*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__t  

/*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__head(void );







static 
#line 79
/*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__t  

/*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__dequeue(void );
#line 50
static bool /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__empty(void );







static uint8_t /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__size(void );
# 104 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
static error_t CC2420TKN154P__SplitControl__start(void );
#line 130
static error_t CC2420TKN154P__SplitControl__stop(void );
# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static error_t CC2420TKN154P__RadioTx__transmit(ieee154_txframe_t *frame, uint32_t t0, uint32_t dt);
# 36 "/usr/src/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
static void CC2420TKN154P__ReliableWait__waitRxDone(void );



static void CC2420TKN154P__ReliableWait__waitBackoffDone(void );
#line 38
static void CC2420TKN154P__ReliableWait__waitTxDone(void );
# 45 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Rx.nc"
static message_t *CC2420TKN154P__CC2420Rx__received(message_t *data);
# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
static error_t CC2420TKN154P__SlottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
uint32_t slot0Time, uint32_t dtMax, bool resume, uint16_t remainingBackoff);
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static error_t CC2420TKN154P__RadioRx__enableRx(uint32_t t0, uint32_t dt);
#line 73
static bool CC2420TKN154P__RadioRx__isReceiving(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void CC2420TKN154P__configSyncTask__runTask(void );
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void CC2420TKN154P__SpiResource__granted(void );
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
static CC2420TKN154P__CCA__data_type CC2420TKN154P__CCA__getNow(void );
# 49 "/usr/src/tinyos/tos/chips/cc2420_tkn154/Timestamp.nc"
static void CC2420TKN154P__Timestamp__default__transmissionStarted(uint8_t frameType, uint8_t msduHandle, uint8_t *payload, uint8_t token);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void CC2420TKN154P__energyDetectionTask__runTask(void );
# 41 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
static void CC2420TKN154P__CC2420Tx__loadTXFIFODone(ieee154_txframe_t *data, error_t error);


static void CC2420TKN154P__CC2420Tx__sendDone(ieee154_txframe_t *frame, bool ackPendingFlag, error_t error);





static void CC2420TKN154P__CC2420Tx__transmissionStarted(ieee154_txframe_t *data);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void CC2420TKN154P__startDoneTask__runTask(void );
#line 75
static void CC2420TKN154P__rxControlStopDoneTask__runTask(void );
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t CC2420TKN154P__RadioOff__off(void );
#line 60
static bool CC2420TKN154P__RadioOff__isOff(void );
# 89 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
static void CC2420TKN154P__UnslottedCsmaCa__default__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result);
# 77 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
static void CC2420TKN154P__CC2420Power__startOscillatorDone(void );
#line 57
static void CC2420TKN154P__CC2420Power__startVRegDone(void );
# 49 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/EnergyDetection.nc"
static error_t CC2420TKN154P__EnergyDetection__start(uint32_t duration);
# 55 "/usr/src/tinyos/tos/interfaces/Set.nc"
static void CC2420TKN154P__RadioPromiscuousMode__set(CC2420TKN154P__RadioPromiscuousMode__val_t val);
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void CC2420TKN154P__PIBUpdate__notify(
# 57 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
uint8_t arg_0x2ab71dfe0dd8, 
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
CC2420TKN154P__PIBUpdate__val_t val);
# 132 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
static void CC2420TKN154P__RxControl__stopDone(error_t error);
# 72 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
static void CC2420ControlP__CC2420Config__setShortAddr(uint16_t address);
#line 66
static void CC2420ControlP__CC2420Config__setChannel(uint8_t channel);
#line 89
static void CC2420ControlP__CC2420Config__setPromiscuousMode(bool on);
#line 78
static void CC2420ControlP__CC2420Config__setPanAddr(uint16_t address);
#line 90
static bool CC2420ControlP__CC2420Config__isPromiscuousModeEnabled(void );





static void CC2420ControlP__CC2420Config__setCCAMode(uint8_t mode);
#line 53
static error_t CC2420ControlP__CC2420Config__sync(void );
#line 65
static uint8_t CC2420ControlP__CC2420Config__getChannel(void );
#line 84
static void CC2420ControlP__CC2420Config__setPanCoordinator(bool pcoord);
#line 102
static void CC2420ControlP__CC2420Config__setTxPower(uint8_t txPower);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t CC2420ControlP__Init__init(void );
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void CC2420ControlP__SpiResource__granted(void );
# 72 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
static error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 98
static error_t CC2420ControlP__CC2420Power__rfOff(void );
#line 112
static error_t CC2420ControlP__CC2420Power__flushRxFifo(void );
#line 91
static error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 52
static error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 64
static error_t CC2420ControlP__CC2420Power__stopVReg(void );
#line 84
static error_t CC2420ControlP__CC2420Power__stopOscillator(void );
#line 104
static error_t CC2420ControlP__CC2420Power__rssi(int8_t *rssi);
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__Resource__release(void );
#line 97
static error_t CC2420ControlP__Resource__immediateRequest(void );
#line 88
static error_t CC2420ControlP__Resource__request(void );
#line 128
static bool CC2420ControlP__Resource__isOwner(void );
# 68 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
static void CC2420ControlP__InterruptCCA__fired(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupAlarm__fired(void );
# 54 "/usr/src/tinyos/tos/interfaces/GpioCapture.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureFallingEdge(void );
#line 66
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__disable(void );
#line 53
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureRisingEdge(void );
# 60 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__captured(/*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__size_type t);
# 53 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void );
# 62 "/usr/src/tinyos/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void );
# 58 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP__Compare__default__fired(void );
# 70 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP__Timer__default__overflow(void );
# 50 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128TimerCtrl16.nc"
static void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128TimerCtrlCapture_t control);
#line 46
static Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void );
# 62 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareA__reset(void );
#line 54
static void HplAtm128Timer1P__CompareA__set(HplAtm128Timer1P__CompareA__size_type t);










static void HplAtm128Timer1P__CompareA__start(void );


static void HplAtm128Timer1P__CompareA__stop(void );
# 88 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer1P__Capture__setEdge(bool up);
#line 47
static HplAtm128Timer1P__Capture__size_type HplAtm128Timer1P__Capture__get(void );
#line 64
static void HplAtm128Timer1P__Capture__reset(void );


static void HplAtm128Timer1P__Capture__start(void );


static void HplAtm128Timer1P__Capture__stop(void );
# 62 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareB__reset(void );
#line 54
static void HplAtm128Timer1P__CompareB__set(HplAtm128Timer1P__CompareB__size_type t);










static void HplAtm128Timer1P__CompareB__start(void );


static void HplAtm128Timer1P__CompareB__stop(void );
#line 62
static void HplAtm128Timer1P__CompareC__reset(void );
#line 54
static void HplAtm128Timer1P__CompareC__set(HplAtm128Timer1P__CompareC__size_type t);










static void HplAtm128Timer1P__CompareC__start(void );


static void HplAtm128Timer1P__CompareC__stop(void );
# 87 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool HplAtm128Timer1P__Timer__test(void );
#line 61
static HplAtm128Timer1P__Timer__timer_size HplAtm128Timer1P__Timer__get(void );
#line 104
static void HplAtm128Timer1P__Timer__setScale(uint8_t scale);
#line 67
static void HplAtm128Timer1P__Timer__set(HplAtm128Timer1P__Timer__timer_size t);










static void HplAtm128Timer1P__Timer__start(void );
# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void );
# 61 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__disable(void );
#line 54
static error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge(void );
# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired(void );
# 48 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void );
# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired(void );
# 48 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void );
# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired(void );
# 48 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void );
# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired(void );
# 48 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired(void );
# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__default__fired(void );
# 48 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired(void );
# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__default__fired(void );
# 48 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired(void );
# 56 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__clear(void );
#line 51
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__disable(void );
#line 70
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__edge(bool low_to_high);
#line 46
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__enable(void );
# 48 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired(void );
# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__default__fired(void );
# 48 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired(void );
# 61 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
static error_t HplCC2420InterruptsP__CCA__disable(void );
#line 53
static error_t HplCC2420InterruptsP__CCA__enableRisingEdge(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void HplCC2420InterruptsP__CCATask__runTask(void );
# 82 "/usr/src/tinyos/tos/interfaces/SpiPacket.nc"
static void CC2420SpiP__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 62 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420SpiP__Fifo__continueRead(
# 46 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2ab71e3eaca8, 
# 62 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 91
static void CC2420SpiP__Fifo__default__writeDone(
# 46 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2ab71e3eaca8, 
# 91 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 82
static cc2420_status_t CC2420SpiP__Fifo__write(
# 46 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2ab71e3eaca8, 
# 82 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420SpiP__Fifo__beginRead(
# 46 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2ab71e3eaca8, 
# 51 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length);
#line 71
static void CC2420SpiP__Fifo__default__readDone(
# 46 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2ab71e3eaca8, 
# 71 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 31 "/usr/src/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__abortRelease(void );







static error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void CC2420SpiP__SpiResource__granted(void );
# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420SpiP__Ram__write(
# 47 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint16_t arg_0x2ab71e3e9e68, 
# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Ram.nc"
uint8_t offset, uint8_t * data, uint8_t length);
# 55 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420SpiP__Reg__read(
# 48 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2ab71e3e8b98, 
# 55 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t *data);







static cc2420_status_t CC2420SpiP__Reg__write(
# 48 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2ab71e3e8b98, 
# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
uint16_t data);
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__release(
# 45 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2ab71e3eba68);
# 97 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__immediateRequest(
# 45 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2ab71e3eba68);
# 88 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__Resource__request(
# 45 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2ab71e3eba68);
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void CC2420SpiP__Resource__default__granted(
# 45 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2ab71e3eba68);
# 128 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static bool CC2420SpiP__Resource__isOwner(
# 45 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2ab71e3eba68);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void CC2420SpiP__grant__runTask(void );
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420SpiP__Strobe__strobe(
# 49 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2ab71e3e68f0);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t StateImplP__Init__init(void );
# 56 "/usr/src/tinyos/tos/interfaces/State.nc"
static void StateImplP__State__toIdle(
# 67 "/usr/src/tinyos/tos/system/StateImplP.nc"
uint8_t arg_0x2ab71e497d50);
# 66 "/usr/src/tinyos/tos/interfaces/State.nc"
static bool StateImplP__State__isState(
# 67 "/usr/src/tinyos/tos/system/StateImplP.nc"
uint8_t arg_0x2ab71e497d50, 
# 66 "/usr/src/tinyos/tos/interfaces/State.nc"
uint8_t myState);
#line 61
static bool StateImplP__State__isIdle(
# 67 "/usr/src/tinyos/tos/system/StateImplP.nc"
uint8_t arg_0x2ab71e497d50);
# 45 "/usr/src/tinyos/tos/interfaces/State.nc"
static error_t StateImplP__State__requestState(
# 67 "/usr/src/tinyos/tos/system/StateImplP.nc"
uint8_t arg_0x2ab71e497d50, 
# 45 "/usr/src/tinyos/tos/interfaces/State.nc"
uint8_t reqState);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void Atm128SpiP__zeroTask__runTask(void );
# 70 "/usr/src/tinyos/tos/interfaces/SpiPacket.nc"
static error_t Atm128SpiP__SpiPacket__send(
#line 59
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void Atm128SpiP__ResourceArbiter__granted(
# 99 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2ab71e4b4060);
# 45 "/usr/src/tinyos/tos/interfaces/SpiByte.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
# 109 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__dataReady(uint8_t data);
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__release(
# 95 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2ab71e4d1ae0);
# 97 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__immediateRequest(
# 95 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2ab71e4d1ae0);
# 88 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__Resource__request(
# 95 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2ab71e4d1ae0);
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void Atm128SpiP__Resource__default__granted(
# 95 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2ab71e4d1ae0);
# 128 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static bool Atm128SpiP__Resource__isOwner(
# 95 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2ab71e4d1ae0);
# 89 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__sleep(void );
#line 83
static void HplAtm128SpiP__SPI__initMaster(void );
#line 122
static void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 113
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 97
static uint8_t HplAtm128SpiP__SPI__read(void );
#line 141
static void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
#line 131
static void HplAtm128SpiP__SPI__setClock(uint8_t speed);




static bool HplAtm128SpiP__SPI__isInterruptPending(void );
#line 125
static void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 103
static void HplAtm128SpiP__SPI__write(uint8_t data);
#line 116
static void HplAtm128SpiP__SPI__enableSpi(bool busOn);
#line 128
static void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void );
# 79 "/usr/src/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );








static bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);







static resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
# 53 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(
# 52 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ab71e586408);
# 61 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(
# 52 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ab71e586408);
# 65 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(
# 56 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ab71e584920);
# 59 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(
# 56 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ab71e584920);
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(
# 51 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ab71e587258);
# 97 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(
# 51 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ab71e587258);
# 88 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(
# 51 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ab71e587258);
# 128 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(
# 51 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ab71e587258);
# 90 "/usr/src/tinyos/tos/interfaces/ArbiterInfo.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t HplCC2420SpiP__Resource__release(void );
#line 97
static error_t HplCC2420SpiP__Resource__immediateRequest(void );
#line 88
static error_t HplCC2420SpiP__Resource__request(void );
#line 128
static bool HplCC2420SpiP__Resource__isOwner(void );
#line 102
static void HplCC2420SpiP__SubResource__granted(void );
# 61 "/usr/src/tinyos/tos/interfaces/GpioCapture.nc"
static void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t * message);
# 24 "/usr/src/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__releasing(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t CC2420TransmitP__Init__init(void );
# 40 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
static error_t CC2420TransmitP__CC2420Tx__loadTXFIFO(ieee154_txframe_t *data);


static error_t CC2420TransmitP__CC2420Tx__send(bool cca);



static void CC2420TransmitP__CC2420Tx__lockChipSpi(void );
#line 46
static bool CC2420TransmitP__CC2420Tx__cca(void );

static void CC2420TransmitP__CC2420Tx__unlockChipSpi(void );
# 95 "/usr/src/tinyos/tos/interfaces/AsyncStdControl.nc"
static error_t CC2420TransmitP__AsyncStdControl__start(void );









static error_t CC2420TransmitP__AsyncStdControl__stop(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void CC2420TransmitP__BackoffAlarm__fired(void );
# 91 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420TransmitP__TXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420TransmitP__TXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void CC2420ReceiveP__receiveDone_task__runTask(void );
#line 75
static void CC2420ReceiveP__stopContinueTask__runTask(void );
# 55 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);
# 113 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
static error_t CC2420ReceiveP__AsyncSplitControl__start(void );









static error_t CC2420ReceiveP__AsyncSplitControl__stop(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t CC2420ReceiveP__Init__init(void );
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void CC2420ReceiveP__SpiResource__granted(void );
# 91 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420ReceiveP__RXFIFO__writeDone(uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420ReceiveP__RXFIFO__readDone(uint8_t * data, uint8_t length, error_t error);
# 68 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
static void CC2420ReceiveP__InterruptFIFOP__fired(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );
# 70 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__size_type t0, /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__size_type dt);
#line 73
static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop(void );
# 58 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );
# 70 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 64 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__size_type /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );






static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );
# 70 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 82 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
static void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
#line 64
static /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void );
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(void );
#line 103
static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type t0, /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type dt);
#line 66
static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__size_type dt);






static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop(void );




static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired(void );
# 82 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow(void );
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__start(/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__size_type dt);






static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__stop(void );




static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__fired(void );
#line 109
static Alarm32khzTo62500hzTransformC__Alarm__size_type Alarm32khzTo62500hzTransformC__Alarm__getNow(
# 38 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x2ab71e87e448);
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__Alarm__default__fired(
# 38 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x2ab71e87e448);
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__Alarm__startAt(
# 38 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x2ab71e87e448, 
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
Alarm32khzTo62500hzTransformC__Alarm__size_type t0, Alarm32khzTo62500hzTransformC__Alarm__size_type dt);
#line 88
static bool Alarm32khzTo62500hzTransformC__Alarm__isRunning(
# 38 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x2ab71e87e448);
# 116 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static Alarm32khzTo62500hzTransformC__Alarm__size_type Alarm32khzTo62500hzTransformC__Alarm__getAlarm(
# 38 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x2ab71e87e448);
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__Alarm__start(
# 38 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x2ab71e87e448, 
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
Alarm32khzTo62500hzTransformC__Alarm__size_type dt);






static void Alarm32khzTo62500hzTransformC__Alarm__stop(
# 38 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x2ab71e87e448);
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static Alarm32khzTo62500hzTransformC__AlarmFrom__size_type Alarm32khzTo62500hzTransformC__AlarmFrom__default__getNow(
# 39 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x2ab71e87ac38);
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__AlarmFrom__fired(
# 39 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x2ab71e87ac38);
# 88 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static bool Alarm32khzTo62500hzTransformC__AlarmFrom__default__isRunning(
# 39 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x2ab71e87ac38);
# 116 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static Alarm32khzTo62500hzTransformC__AlarmFrom__size_type Alarm32khzTo62500hzTransformC__AlarmFrom__default__getAlarm(
# 39 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x2ab71e87ac38);
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__AlarmFrom__default__start(
# 39 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x2ab71e87ac38, 
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
Alarm32khzTo62500hzTransformC__AlarmFrom__size_type dt);






static void Alarm32khzTo62500hzTransformC__AlarmFrom__default__stop(
# 39 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x2ab71e87ac38);
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__Alarm__startAt(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__Alarm__size_type t0, /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__Alarm__size_type dt);
#line 73
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__Alarm__stop(void );
# 58 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__fired(void );
# 70 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__overflow(void );
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Alarm__size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Alarm__getNow(void );
#line 103
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Alarm__startAt(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Alarm__size_type t0, /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Alarm__size_type dt);
#line 73
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Alarm__stop(void );




static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__AlarmFrom__fired(void );
# 82 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Counter__overflow(void );
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(
# 49 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x2ab71e8b71a0);
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(
# 49 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x2ab71e8b71a0);
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(
# 49 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x2ab71e8b71a0, 
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type t0, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type dt);
#line 88
static bool /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__isRunning(
# 49 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x2ab71e8b71a0);
# 116 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(
# 49 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x2ab71e8b71a0);
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(
# 49 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x2ab71e8b71a0, 
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__size_type dt);






static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(
# 49 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x2ab71e8b71a0);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Init__init(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__fired(void );
#line 103
static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__Alarm__startAt(/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__Alarm__size_type t0, /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__Alarm__size_type dt);
# 58 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Compare__fired(void );
# 70 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Timer__overflow(void );
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__size_type /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__getNow(void );
#line 103
static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__startAt(/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__size_type t0, /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__size_type dt);
#line 66
static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__start(/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__size_type dt);
#line 78
static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__AlarmFrom__fired(void );
# 82 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Counter__overflow(void );
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__size_type /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__getNow(void );
#line 103
static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__startAt(/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__size_type t0, /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__size_type dt);
#line 66
static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__start(/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__size_type dt);
#line 78
static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__fired(void );
# 61 "/usr/src/tinyos/tos/lib/timer/LocalTime.nc"
static uint32_t LocalTime62500hzP__LocalTime__get(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void LocalTime62500hzP__Alarm__fired(void );
# 35 "/usr/src/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
static void TKN154TimingP__ReliableWait__waitRx(uint32_t t0, uint32_t dt);





static bool TKN154TimingP__ReliableWait__ccaOnBackoffBoundary(uint32_t slot0);
#line 37
static void TKN154TimingP__ReliableWait__waitTx(uint32_t t0, uint32_t dt);

static void TKN154TimingP__ReliableWait__waitBackoff(uint32_t dt);
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void TKN154TimingP__SymbolAlarm__fired(void );
# 47 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CaptureTime.nc"
static uint32_t TKN154TimingP__CaptureTime__getTimestamp(uint16_t SFDCaptureTime);








static uint16_t TKN154TimingP__CaptureTime__getSFDUptime(uint16_t SFDCaptureTime, uint16_t EFDCaptureTime);
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 136
static uint32_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(
# 48 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2ab71e9ec2f8);
# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2ab71e9ec2f8);
# 92 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static bool /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(
# 48 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2ab71e9ec2f8);
# 129 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShotAt(
# 48 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2ab71e9ec2f8, 
# 129 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
uint32_t t0, uint32_t dt);
#line 73
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2ab71e9ec2f8, 
# 73 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2ab71e9ec2f8);
# 52 "/usr/src/tinyos/tos/interfaces/Random.nc"
static uint16_t RandomMlcgC__Random__rand16(void );
#line 46
static uint32_t RandomMlcgC__Random__rand32(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t RandomMlcgC__Init__init(void );
# 60 "/usr/src/tinyos/tos/interfaces/Boot.nc"
static void TestDeviceC__Boot__booted(void );
# 101 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_DISASSOCIATE.nc"
static void TestDeviceC__MLME_DISASSOCIATE__confirm(
ieee154_status_t status, 
uint8_t DeviceAddrMode, 
uint16_t DevicePANID, 
ieee154_address_t DeviceAddress);
#line 81
static void TestDeviceC__MLME_DISASSOCIATE__indication(
uint64_t DeviceAddress, 
ieee154_disassociation_reason_t DisassociateReason, 
ieee154_security_t *security);
# 59 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SYNC_LOSS.nc"
static void TestDeviceC__MLME_SYNC_LOSS__indication(
ieee154_status_t lossReason, 
uint16_t PANId, 
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
ieee154_security_t *security);
# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void TestDeviceC__DisassociateTimer__fired(void );
# 121 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_ASSOCIATE.nc"
static void TestDeviceC__MLME_ASSOCIATE__confirm(
uint16_t AssocShortAddress, 
uint8_t status, 
ieee154_security_t *security);
# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_COMM_STATUS.nc"
static void TestDeviceC__MLME_COMM_STATUS__indication(
uint16_t PANId, 
uint8_t SrcAddrMode, 
ieee154_address_t SrcAddr, 
uint8_t DstAddrMode, 
ieee154_address_t DstAddr, 
ieee154_status_t status, 
ieee154_security_t *security);
# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_BEACON_NOTIFY.nc"
static message_t *TestDeviceC__MLME_BEACON_NOTIFY__indication(message_t *beaconFrame);
# 118 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SCAN.nc"
static void TestDeviceC__MLME_SCAN__confirm(
ieee154_status_t status, 
uint8_t ScanType, 
uint8_t ChannelPage, 
uint32_t UnscannedChannels, 
uint8_t EnergyDetectNumResults, 
int8_t *EnergyDetectList, 
uint8_t PANDescriptorListNumResults, 
ieee154_PANDescriptor_t *PANDescriptorList);
# 78 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RESET.nc"
static void TestDeviceC__MLME_RESET__confirm(
ieee154_status_t status);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t PlatformP__MoteInit__init(void );
#line 62
static error_t PlatformP__MeasureClock__init(void );
# 51 "/usr/src/tinyos/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t MotePlatformP__SubInit__init(void );
# 44 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void MotePlatformP__SerialIdPin__makeInput(void );
#line 41
static void MotePlatformP__SerialIdPin__clr(void );
# 49 "/usr/src/tinyos/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void );
# 55 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void );





static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void );
#line 56
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void );


static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void );
#line 55
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void );
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void );




static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void );
#line 61
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void );
#line 61
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void );
#line 59
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__get(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get(void );




static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void );
#line 54
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__get(void );
# 33 "/usr/src/tinyos/tos/platforms/mica/MeasureClockC.nc"
enum MeasureClockC____nesc_unnamed4359 {


  MeasureClockC__MAGIC = 488 / (16 / PLATFORM_MHZ)
};

uint16_t MeasureClockC__cycles;

static inline error_t MeasureClockC__Init__init(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t RealMainP__SoftwareInit__init(void );
# 60 "/usr/src/tinyos/tos/interfaces/Boot.nc"
static void RealMainP__Boot__booted(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t RealMainP__PlatformInit__init(void );
# 57 "/usr/src/tinyos/tos/interfaces/Scheduler.nc"
static void RealMainP__Scheduler__init(void );
#line 72
static void RealMainP__Scheduler__taskLoop(void );
#line 65
static bool RealMainP__Scheduler__runNextTask(void );
# 63 "/usr/src/tinyos/tos/system/RealMainP.nc"
int main(void )   ;
# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(
# 56 "/usr/src/tinyos/tos/system/SchedulerBasicP.nc"
uint8_t arg_0x2ab71cf0bab0);
# 76 "/usr/src/tinyos/tos/interfaces/McuSleep.nc"
static void SchedulerBasicP__McuSleep__sleep(void );
# 61 "/usr/src/tinyos/tos/system/SchedulerBasicP.nc"
enum SchedulerBasicP____nesc_unnamed4360 {

  SchedulerBasicP__NUM_TASKS = 28U, 
  SchedulerBasicP__NO_TASK = 255
};

uint8_t SchedulerBasicP__m_head;
uint8_t SchedulerBasicP__m_tail;
uint8_t SchedulerBasicP__m_next[SchedulerBasicP__NUM_TASKS];








static __inline uint8_t SchedulerBasicP__popTask(void );
#line 97
static inline bool SchedulerBasicP__isWaiting(uint8_t id);




static inline bool SchedulerBasicP__pushTask(uint8_t id);
#line 124
static inline void SchedulerBasicP__Scheduler__init(void );









static bool SchedulerBasicP__Scheduler__runNextTask(void );
#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void );
#line 170
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id);




static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 62 "/usr/src/tinyos/tos/interfaces/McuPowerOverride.nc"
static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void );
# 66 "/usr/src/tinyos/tos/chips/atm128/McuSleepC.nc"
const const_uint8_t McuSleepC__atm128PowerBits[ATM128_POWER_DOWN + 1] = { 
0, 
1 << 3, ((
1 << 2) | (1 << 4)) | (1 << 3), (
1 << 4) | (1 << 3), (
1 << 2) | (1 << 4), 
1 << 4 };

static inline mcu_power_t McuSleepC__getPowerState(void );
#line 105
static inline void McuSleepC__McuSleep__sleep(void );
#line 120
static inline void McuSleepC__McuPowerState__update(void );
# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void LedsP__Led0__makeOutput(void );
#line 40
static void LedsP__Led0__set(void );





static void LedsP__Led1__makeOutput(void );
#line 40
static void LedsP__Led1__set(void );
static void LedsP__Led1__clr(void );




static void LedsP__Led2__makeOutput(void );
#line 40
static void LedsP__Led2__set(void );
# 56 "/usr/src/tinyos/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void );
#line 89
static inline void LedsP__Leds__led1On(void );




static inline void LedsP__Leds__led1Off(void );
# 89 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static error_t DataP__TxFramePool__put(
#line 85
DataP__TxFramePool__t * newVal);
# 91 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MCPS/MCPS_DATA.nc"
static void DataP__MCPS_DATA__confirm(
message_t *frame, 
uint8_t msduHandle, 
ieee154_status_t status, 
uint32_t Timestamp);









static message_t *DataP__MCPS_DATA__indication(message_t *frame);
# 70 "/usr/src/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline message_t *DataP__dataReceived(message_t *frame);
static void DataP__finishTxTransaction(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 180
static inline void DataP__PurgeDirect__purgeDone(ieee154_txframe_t *data, ieee154_status_t status);
#line 200
static inline message_t *DataP__CoordCfpRx__received(message_t *frame);




static inline message_t *DataP__DeviceCfpRx__received(message_t *frame);









static inline message_t *DataP__DeviceCapRx__received(message_t *frame);




static inline message_t *DataP__dataReceived(message_t *frame);




static void DataP__finishTxTransaction(ieee154_txframe_t *txFrame, ieee154_status_t status);









static inline void DataP__BroadcastTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);




static inline void DataP__DeviceCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 261
static inline void DataP__IndirectTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);




static inline void DataP__MCPS_DATA__default__confirm(
message_t *msg, 
uint8_t msduHandle, 
ieee154_status_t status, 
uint32_t Timestamp);

static inline message_t *DataP__MCPS_DATA__default__indication(message_t *frame);
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t PibP__MacReset__init(void );
# 61 "/usr/src/tinyos/tos/lib/timer/LocalTime.nc"
static uint32_t PibP__LocalTime__get(void );
# 52 "/usr/src/tinyos/tos/interfaces/Random.nc"
static uint16_t PibP__Random__rand16(void );
#line 46
static uint32_t PibP__Random__rand32(void );
# 104 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
static error_t PibP__RadioControl__start(void );
#line 130
static error_t PibP__RadioControl__stop(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t PibP__DispatchReset__init(void );
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
static PibP__PromiscuousModeGet__val_t PibP__PromiscuousModeGet__get(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t PibP__resetSpinTask__postTask(void );
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t PibP__RadioToken__release(void );







static bool PibP__RadioToken__isOwner(void );
#line 84
static error_t PibP__RadioToken__request(void );
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t PibP__RadioOff__off(void );
# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
static error_t PibP__DispatchQueueReset__init(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t PibP__radioControlStopTask__postTask(void );
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void PibP__PIBUpdate__notify(
# 59 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
uint8_t arg_0x2ab71d3bed98, 
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
PibP__PIBUpdate__val_t val);
# 78 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RESET.nc"
static void PibP__MLME_RESET__confirm(
ieee154_status_t status);
# 88 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
enum PibP____nesc_unnamed4361 {
#line 88
  PibP__radioControlStopTask = 0U
};
#line 88
typedef int PibP____nesc_sillytask_radioControlStopTask[PibP__radioControlStopTask];





enum PibP____nesc_unnamed4362 {
#line 94
  PibP__resetSpinTask = 1U
};
#line 94
typedef int PibP____nesc_sillytask_resetSpinTask[PibP__resetSpinTask];
#line 78
ieee154_PIB_t PibP__m_pib;

bool PibP__m_setDefaultPIB;
uint8_t PibP__m_resetSpin;




uint64_t PibP__m_aExtendedAddressLE;


static inline void PibP__updateMacMaxFrameTotalWaitTime(void );
static void PibP__resetAttributesToDefault(void );
static inline bool PibP__isLocalExtendedAddress(uint8_t *addrLE);
static inline bool PibP__isCoordExtendedAddress(uint8_t *addrLE);
static uint8_t PibP__getPendAddrSpecOffset(uint8_t *macPayloadField);


static inline error_t PibP__LocalInit__init(void );








static void PibP__resetAttributesToDefault(void );
#line 140
static inline void PibP__updateMacMaxFrameTotalWaitTime(void );
#line 164
static inline ieee154_status_t PibP__MLME_RESET__request(bool SetDefaultPIB);
#line 187
static inline void PibP__RadioToken__granted(void );





static inline void PibP__RadioOff__offDone(void );




static inline void PibP__radioControlStopTask__runTask(void );








static void PibP__RadioControl__stopDone(error_t result);
#line 222
static inline void PibP__resetSpinTask__runTask(void );









static inline token_requested_t PibP__IsRadioTokenRequested__getNow(void );

static inline void PibP__RadioControl__startDone(error_t error);
#line 256
static inline ieee154_phyCurrentChannel_t PibP__MLME_GET__phyCurrentChannel(void );

static inline ieee154_phyChannelsSupported_t PibP__MLME_GET__phyChannelsSupported(void );





static inline ieee154_phyCurrentPage_t PibP__MLME_GET__phyCurrentPage(void );

static inline ieee154_phyMaxFrameDuration_t PibP__MLME_GET__phyMaxFrameDuration(void );









static inline ieee154_macAutoRequest_t PibP__MLME_GET__macAutoRequest(void );

static inline ieee154_macBattLifeExt_t PibP__MLME_GET__macBattLifeExt(void );

static inline ieee154_macBattLifeExtPeriods_t PibP__MLME_GET__macBattLifeExtPeriods(void );

static inline ieee154_macBeaconOrder_t PibP__MLME_GET__macBeaconOrder(void );





static inline ieee154_macCoordExtendedAddress_t PibP__MLME_GET__macCoordExtendedAddress(void );

static inline ieee154_macCoordShortAddress_t PibP__MLME_GET__macCoordShortAddress(void );

static inline ieee154_macDSN_t PibP__MLME_GET__macDSN(void );



static inline ieee154_macMaxCSMABackoffs_t PibP__MLME_GET__macMaxCSMABackoffs(void );

static inline ieee154_macMinBE_t PibP__MLME_GET__macMinBE(void );

static inline ieee154_macPANId_t PibP__MLME_GET__macPANId(void );





static inline ieee154_macShortAddress_t PibP__MLME_GET__macShortAddress(void );



static inline ieee154_macTransactionPersistenceTime_t PibP__MLME_GET__macTransactionPersistenceTime(void );



static inline ieee154_macMaxBE_t PibP__MLME_GET__macMaxBE(void );

static inline ieee154_macMaxFrameTotalWaitTime_t PibP__MLME_GET__macMaxFrameTotalWaitTime(void );

static inline ieee154_macMaxFrameRetries_t PibP__MLME_GET__macMaxFrameRetries(void );

static inline ieee154_macResponseWaitTime_t PibP__MLME_GET__macResponseWaitTime(void );







static inline ieee154_macMinLIFSPeriod_t PibP__MLME_GET__macMinLIFSPeriod(void );

static inline ieee154_macMinSIFSPeriod_t PibP__MLME_GET__macMinSIFSPeriod(void );





static ieee154_status_t PibP__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value);
#line 378
static inline ieee154_status_t PibP__MLME_SET__macAutoRequest(ieee154_macAutoRequest_t value);
#line 412
static ieee154_status_t PibP__MLME_SET__macCoordExtendedAddress(ieee154_macCoordExtendedAddress_t value);





static ieee154_status_t PibP__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value);





static ieee154_status_t PibP__MLME_SET__macDSN(ieee154_macDSN_t value);
#line 454
static ieee154_status_t PibP__MLME_SET__macPANId(ieee154_macPANId_t value);
#line 466
static ieee154_status_t PibP__MLME_SET__macShortAddress(ieee154_macShortAddress_t value);
#line 478
static inline ieee154_status_t PibP__MLME_SET__macAssociatedPANCoord(ieee154_macAssociatedPANCoord_t value);
#line 540
static uint32_t PibP__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1);








static bool PibP__TimeCalc__hasExpired(uint32_t t0, uint32_t dt);
#line 591
static uint8_t PibP__FrameUtility__writeHeader(
uint8_t *mhr, 
uint8_t DstAddrMode, 
uint16_t DstPANId, 
ieee154_address_t *DstAddr, 
uint8_t SrcAddrMode, 
uint16_t SrcPANId, 
const ieee154_address_t *SrcAddr, 
bool PANIDCompression);
#line 629
static inline bool PibP__FrameUtility__isBeaconFromCoord(message_t *frame);
#line 653
static inline error_t PibP__FrameUtility__getMHRLength(uint8_t fcf1, uint8_t fcf2, uint8_t *len);
#line 736
static inline void *PibP__Frame__getPayload(message_t *frame);





static inline uint8_t PibP__Frame__getPayloadLength(message_t *frame);





static inline uint32_t PibP__Frame__getTimestamp(message_t *frame);





static inline bool PibP__Frame__isTimestampValid(message_t *frame);
#line 781
static inline uint8_t PibP__Frame__getSrcAddrMode(message_t *frame);





static inline error_t PibP__Frame__getSrcAddr(message_t *frame, ieee154_address_t *address);
#line 876
static uint8_t PibP__getPendAddrSpecOffset(uint8_t *macPayloadField);
#line 918
static inline uint8_t PibP__BeaconFrame__isLocalAddrPending(message_t *frame);
#line 937
static inline void *PibP__BeaconFrame__getBeaconPayload(message_t *frame);
#line 953
static uint8_t PibP__BeaconFrame__getBeaconPayloadLength(message_t *frame);
#line 969
static error_t PibP__BeaconFrame__parsePANDescriptor(
message_t *frame, 
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
ieee154_PANDescriptor_t *pdescriptor);
#line 1015
static inline uint64_t PibP__GetLocalExtendedAddress__get(void );




static void PibP__FrameUtility__convertToLE(uint8_t *destLE, const uint64_t *src);









static void PibP__FrameUtility__convertToNative(uint64_t *dest, const uint8_t *srcLE);








static inline void PibP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE);




static inline void PibP__FrameUtility__copyCoordExtendedAddressLE(uint8_t *destLE);




static inline bool PibP__isLocalExtendedAddress(uint8_t *addrLE);






static inline bool PibP__isCoordExtendedAddress(uint8_t *addrLE);






static void PibP__PIBUpdate__default__notify(uint8_t PIBAttributeID, const void *PIBAttributeValue);


static inline void PibP__RadioToken__transferredFrom(uint8_t fromClient);
# 83 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static void RadioControlImplP__MacTx__transmitDone(
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x2ab71d5a1e80, 
# 83 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
ieee154_txframe_t *frame, error_t result);
# 115 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
static void RadioControlImplP__SlottedCsmaCa__transmitDone(
# 44 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x2ab71d5a0c30, 
# 115 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result);
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void RadioControlImplP__MacRx__enableRxDone(
# 42 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x2ab71d5a4d58);
# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static message_t *RadioControlImplP__MacRx__received(
# 42 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x2ab71d5a4d58, 
# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
message_t *frame);
# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static error_t RadioControlImplP__PhyTx__transmit(ieee154_txframe_t *frame, uint32_t t0, uint32_t dt);
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t RadioControlImplP__PhyRadioOff__off(void );
#line 60
static bool RadioControlImplP__PhyRadioOff__isOff(void );
#line 53
static void RadioControlImplP__MacRadioOff__offDone(
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
uint8_t arg_0x2ab71d5c6868);
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
static RadioControlImplP__RadioPromiscuousMode__val_t RadioControlImplP__RadioPromiscuousMode__get(void );
# 98 "/usr/src/tinyos/tos/interfaces/ArbiterInfo.nc"
static uint8_t RadioControlImplP__ArbiterInfo__userId(void );
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static error_t RadioControlImplP__PhyRx__enableRx(uint32_t t0, uint32_t dt);
#line 73
static bool RadioControlImplP__PhyRx__isReceiving(void );
# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
static error_t RadioControlImplP__PhySlottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
uint32_t slot0Time, uint32_t dtMax, bool resume, uint16_t remainingBackoff);
# 63 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static error_t RadioControlImplP__MacRx__enableRx(uint8_t client, uint32_t t0, uint32_t dt);









static inline void RadioControlImplP__PhyRx__enableRxDone(void );




static inline message_t *RadioControlImplP__PhyRx__received(message_t *msg);
#line 97
static inline bool RadioControlImplP__MacRx__isReceiving(uint8_t client);









static inline void RadioControlImplP__MacRx__default__enableRxDone(uint8_t client);

static inline message_t *RadioControlImplP__MacRx__default__received(uint8_t client, message_t *frame);







static inline error_t RadioControlImplP__MacTx__transmit(uint8_t client, ieee154_txframe_t *frame, uint32_t t0, uint32_t dt);









static inline void RadioControlImplP__PhyTx__transmitDone(ieee154_txframe_t *frame, error_t result);




static inline void RadioControlImplP__MacTx__default__transmitDone(uint8_t client, ieee154_txframe_t *frame, error_t result);
#line 163
static inline error_t RadioControlImplP__SlottedCsmaCa__transmit(uint8_t client, ieee154_txframe_t *frame, ieee154_csma_t *csma, 
uint32_t slot0Time, uint32_t dtMax, bool resume, uint16_t remainingBackoff);









static inline void RadioControlImplP__PhySlottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result);





static inline void RadioControlImplP__SlottedCsmaCa__default__transmitDone(uint8_t client, 
ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result);






static error_t RadioControlImplP__MacRadioOff__off(uint8_t client);









static inline void RadioControlImplP__PhyRadioOff__offDone(void );





static bool RadioControlImplP__MacRadioOff__isOff(uint8_t client);







static inline void RadioControlImplP__MacRadioOff__default__offDone(uint8_t client);
# 49 "/usr/src/tinyos/tos/system/RoundRobinResourceQueueC.nc"
enum /*RadioControlP.Queue*/RoundRobinResourceQueueC__0____nesc_unnamed4363 {
  RoundRobinResourceQueueC__0__NO_ENTRY = 0xFF, 
  RoundRobinResourceQueueC__0__SIZE = 12U ? (12U - 1) / 8 + 1 : 0
};

uint8_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ[/*RadioControlP.Queue*/RoundRobinResourceQueueC__0__SIZE];
uint8_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__last = 0;

static inline void /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id);



static inline error_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__Init__init(void );




static inline bool /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void );








static bool /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void );
#line 97
static inline error_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id);
# 53 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__requested(
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x2ab71d624020);
# 65 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__unconfigure(
# 57 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x2ab71d622538);
# 59 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__configure(
# 57 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x2ab71d622538);
# 79 "/usr/src/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__dequeue(void );
# 98 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__granted(
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x2ab71d626ad8);
# 119 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__transferredFrom(
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
uint8_t arg_0x2ab71d626ad8, 
# 119 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
uint8_t srcClient);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__postTask(void );
# 70 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
enum /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0____nesc_unnamed4364 {
#line 70
  SimpleTransferArbiterP__0__grantedTask = 2U
};
#line 70
typedef int /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0____nesc_sillytask_grantedTask[/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask];
#line 63
enum /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0____nesc_unnamed4365 {
#line 63
  SimpleTransferArbiterP__0__RES_IDLE = 0, SimpleTransferArbiterP__0__RES_GRANTING = 1, SimpleTransferArbiterP__0__RES_BUSY = 2
};
#line 64
enum /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0____nesc_unnamed4366 {
#line 64
  SimpleTransferArbiterP__0__NO_RES = 0xFF
};
uint8_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_IDLE;
uint8_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__NO_RES;
uint8_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__reqResId;



static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__request(uint8_t id);
#line 98
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(uint8_t id);
#line 121
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__transferTo(uint8_t fromID, uint8_t toID);
#line 151
static uint8_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ArbiterInfo__userId(void );










static bool /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__isOwner(uint8_t id);






static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__runTask(void );









static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__default__granted(uint8_t id);

static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__default__requested(uint8_t id);



static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);

static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__default__transferredFrom(uint8_t id, uint8_t c);
# 136 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static uint32_t IndirectTxP__IndirectTxTimeout__getNow(void );
#line 92
static bool IndirectTxP__IndirectTxTimeout__isRunning(void );
#line 73
static void IndirectTxP__IndirectTxTimeout__startOneShot(uint32_t dt);




static void IndirectTxP__IndirectTxTimeout__stop(void );
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void IndirectTxP__FrameTx__transmitDone(
# 42 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
uint8_t arg_0x2ab71d6636a0, 
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
ieee154_txframe_t *txFrame, ieee154_status_t status);
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
static bool IndirectTxP__TimeCalc__hasExpired(uint32_t t0, uint32_t dt);
#line 40
static uint32_t IndirectTxP__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1);
# 93 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_macBeaconOrder_t IndirectTxP__MLME_GET__macBeaconOrder(void );
#line 135
static ieee154_macTransactionPersistenceTime_t IndirectTxP__MLME_GET__macTransactionPersistenceTime(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t IndirectTxP__tryCoordCapTxTask__postTask(void );
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void IndirectTxP__PendingAddrSpecUpdated__notify(IndirectTxP__PendingAddrSpecUpdated__val_t val);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t IndirectTxP__CoordCapTx__transmit(ieee154_txframe_t *txFrame);
# 76 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
enum IndirectTxP____nesc_unnamed4367 {
#line 76
  IndirectTxP__tryCoordCapTxTask = 3U
};
#line 76
typedef int IndirectTxP____nesc_sillytask_tryCoordCapTxTask[IndirectTxP__tryCoordCapTxTask];
#line 61
enum IndirectTxP____nesc_unnamed4368 {
  IndirectTxP__SEND_THIS_FRAME = 0x80, 
  IndirectTxP__NUM_MAX_PENDING = 7
};

ieee154_txframe_t *IndirectTxP__m_txFrameTable[IndirectTxP__NUM_MAX_PENDING];
ieee154_txframe_t *IndirectTxP__m_pendingTxFrame;
uint8_t IndirectTxP__m_client;
uint8_t IndirectTxP__m_numTableEntries;
uint8_t IndirectTxP__m_numShortPending;
uint8_t IndirectTxP__m_numExtPending;
ieee154_txframe_t IndirectTxP__m_emptyDataFrame;
ieee154_metadata_t IndirectTxP__m_emptyDataFrameMetadata;
ieee154_header_t IndirectTxP__m_emptyDataFrameHeader;


static inline void IndirectTxP__tryCoordCapTx(void );


static inline error_t IndirectTxP__Reset__init(void );
#line 104
static uint32_t IndirectTxP__getPersistenceTimeSymbols(void );
#line 189
static inline ieee154_status_t IndirectTxP__FrameTx__transmit(uint8_t client, ieee154_txframe_t *txFrame);
#line 296
static inline void IndirectTxP__tryCoordCapTx(void );
#line 317
static inline void IndirectTxP__tryCoordCapTxTask__runTask(void );




static inline void IndirectTxP__IndirectTxTimeout__fired(void );
#line 381
static inline ieee154_txframe_t *IndirectTxP__GetIndirectTxFrame__get(void );



static inline void IndirectTxP__FrameTx__default__transmitDone(uint8_t client, ieee154_txframe_t *txFrame, ieee154_status_t status);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *PollP__DataRx__received(message_t *frame);
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static 
#line 94
PollP__TxFramePool__t * 


PollP__TxFramePool__get(void );
#line 89
static error_t PollP__TxFramePool__put(
#line 85
PollP__TxFramePool__t * newVal);
# 120 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_macPANId_t PollP__MLME_GET__macPANId(void );








static ieee154_macShortAddress_t PollP__MLME_GET__macShortAddress(void );
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
static void PollP__DataRequest__pollDone(
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
uint8_t arg_0x2ab71d6f9af0);
# 73 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_POLL.nc"
static void PollP__MLME_POLL__confirm(
ieee154_status_t status);
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static 
#line 94
PollP__TxControlPool__t * 


PollP__TxControlPool__get(void );
#line 89
static error_t PollP__TxControlPool__put(
#line 85
PollP__TxControlPool__t * newVal);
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
static PollP__LocalExtendedAddress__val_t PollP__LocalExtendedAddress__get(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t PollP__PollTx__transmit(ieee154_txframe_t *txFrame);
# 37 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
static uint8_t PollP__FrameUtility__writeHeader(
uint8_t *mhr, 
uint8_t DstAddrMode, 
uint16_t DstPANId, 
ieee154_address_t *DstAddr, 
uint8_t SrcAddrMode, 
uint16_t SrcPANId, 
const ieee154_address_t *SrcAddr, 
bool PANIDCompression);
# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
enum PollP____nesc_unnamed4369 {
  PollP__HANDLE_MLME_POLL_REQUEST = 0xFF, 
  PollP__HANDLE_MLME_POLL_SUCCESS = 0xFE
};
int PollP__m_numPending;
uint8_t PollP__m_dataRequestCmdID = CMD_FRAME_DATA_REQUEST;
static inline void PollP__assembleDataRequestFrame(uint8_t destAddrMode, uint16_t destPANId, 
uint8_t *DstAddr, uint8_t srcAddrMode, ieee154_txframe_t *txFrame);

static inline error_t PollP__Init__init(void );
#line 122
static ieee154_status_t PollP__DataRequest__poll(uint8_t client, uint8_t CoordAddrMode, 
uint16_t CoordPANId, uint8_t *CoordAddressLE, uint8_t srcAddrMode);
#line 157
static inline void PollP__assembleDataRequestFrame(uint8_t destAddrMode, uint16_t destPANId, 
uint8_t *destAddrPtrLE, uint8_t srcAddrMode, ieee154_txframe_t *txFrame);
#line 191
static inline message_t *PollP__DataExtracted__received(message_t *frame, ieee154_txframe_t *txFrame);
#line 207
static inline void PollP__PollTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 223
static inline void PollP__MLME_POLL__default__confirm(ieee154_status_t status);
static inline void PollP__DataRequest__default__pollDone(uint8_t client);
# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static error_t ScanP__RadioTx__transmit(ieee154_txframe_t *frame, uint32_t t0, uint32_t dt);
# 152 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
static void *ScanP__Frame__getPayload(message_t *frame);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t ScanP__continueScanRequestTask__postTask(void );
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static 
#line 94
ScanP__TxFramePool__t * 


ScanP__TxFramePool__get(void );
#line 89
static error_t ScanP__TxFramePool__put(
#line 85
ScanP__TxFramePool__t * newVal);
# 150 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_macResponseWaitTime_t ScanP__MLME_GET__macResponseWaitTime(void );
#line 120
static ieee154_macPANId_t ScanP__MLME_GET__macPANId(void );
#line 81
static ieee154_macAutoRequest_t ScanP__MLME_GET__macAutoRequest(void );
#line 54
static ieee154_phyChannelsSupported_t ScanP__MLME_GET__phyChannelsSupported(void );
#line 108
static ieee154_macDSN_t ScanP__MLME_GET__macDSN(void );
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static error_t ScanP__RadioRx__enableRx(uint32_t t0, uint32_t dt);
# 106 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154BeaconFrame.nc"
static error_t ScanP__BeaconFrame__parsePANDescriptor(message_t *frame, uint8_t LogicalChannel, 
uint8_t ChannelPage, ieee154_PANDescriptor_t *pdescriptor);
#line 132
static uint8_t ScanP__BeaconFrame__getBeaconPayloadLength(message_t *frame);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t ScanP__startTimerTask__postTask(void );
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t ScanP__RadioToken__release(void );







static bool ScanP__RadioToken__isOwner(void );
#line 84
static error_t ScanP__RadioToken__request(void );
# 73 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void ScanP__ScanTimer__startOneShot(uint32_t dt);




static void ScanP__ScanTimer__stop(void );
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t ScanP__RadioOff__off(void );
#line 60
static bool ScanP__RadioOff__isOff(void );
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static 
#line 94
ScanP__TxControlPool__t * 


ScanP__TxControlPool__get(void );
#line 89
static error_t ScanP__TxControlPool__put(
#line 85
ScanP__TxControlPool__t * newVal);
# 138 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
static ieee154_status_t ScanP__MLME_SET__macPANId(ieee154_macPANId_t value);
#line 54
static ieee154_status_t ScanP__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value);
#line 151
static ieee154_status_t ScanP__MLME_SET__macShortAddress(ieee154_macShortAddress_t value);
#line 113
static ieee154_status_t ScanP__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value);




static ieee154_status_t ScanP__MLME_SET__macDSN(ieee154_macDSN_t value);
# 49 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/EnergyDetection.nc"
static error_t ScanP__EnergyDetection__start(uint32_t duration);
# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_BEACON_NOTIFY.nc"
static message_t *ScanP__MLME_BEACON_NOTIFY__indication(message_t *beaconFrame);
# 118 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SCAN.nc"
static void ScanP__MLME_SCAN__confirm(
ieee154_status_t status, 
uint8_t ScanType, 
uint8_t ChannelPage, 
uint32_t UnscannedChannels, 
uint8_t EnergyDetectNumResults, 
int8_t *EnergyDetectList, 
uint8_t PANDescriptorListNumResults, 
ieee154_PANDescriptor_t *PANDescriptorList);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t ScanP__nextIterationTask__postTask(void );
# 55 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
static void ScanP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE);
# 91 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
enum ScanP____nesc_unnamed4370 {
#line 91
  ScanP__startTimerTask = 4U
};
#line 91
typedef int ScanP____nesc_sillytask_startTimerTask[ScanP__startTimerTask];
enum ScanP____nesc_unnamed4371 {
#line 92
  ScanP__nextIterationTask = 5U
};
#line 92
typedef int ScanP____nesc_sillytask_nextIterationTask[ScanP__nextIterationTask];
#line 191
enum ScanP____nesc_unnamed4372 {
#line 191
  ScanP__continueScanRequestTask = 6U
};
#line 191
typedef int ScanP____nesc_sillytask_continueScanRequestTask[ScanP__continueScanRequestTask];
#line 70
enum ScanP____nesc_unnamed4373 {
  ScanP__MAX_PAYLOAD_SIZE = 1, 
  ScanP__LAST_CHANNEL = 26
};


ieee154_txframe_t *ScanP__m_txFrame = (void *)0;
uint8_t ScanP__m_payload[ScanP__MAX_PAYLOAD_SIZE];
uint8_t ScanP__m_scanType;
uint32_t ScanP__m_scanChannels;
uint8_t ScanP__m_currentChannelNum;
bool ScanP__m_terminateScan;
void *ScanP__m_resultList;
uint8_t ScanP__m_resultListNumEntries;
uint8_t ScanP__m_resultIndex;
ieee154_macPANId_t ScanP__m_PANID;
uint32_t ScanP__m_scanDuration;
bool ScanP__m_busy = FALSE;

static void ScanP__nextIteration(void );
static void ScanP__continueScanRequest(void );



static inline error_t ScanP__Init__init(void );
#line 115
static inline ieee154_status_t ScanP__MLME_SCAN__request(
uint8_t ScanType, 
uint32_t ScanChannels, 
uint8_t ScanDuration, 
uint8_t ChannelPage, 
uint8_t EnergyDetectListNumEntries, 
int8_t *EnergyDetectList, 
uint8_t PANDescriptorListNumEntries, 
ieee154_PANDescriptor_t *PANDescriptorList, 
ieee154_security_t *security);
#line 180
static inline void ScanP__RadioToken__granted(void );










static inline void ScanP__continueScanRequestTask__runTask(void );




static void ScanP__continueScanRequest(void );
#line 240
static void ScanP__nextIteration(void );
#line 320
static inline void ScanP__RadioRx__enableRxDone(void );






static inline void ScanP__EnergyDetection__done(error_t status, int8_t EnergyLevel);
#line 339
static inline void ScanP__RadioTx__transmitDone(ieee154_txframe_t *frame, error_t result);







static inline message_t *ScanP__RadioRx__received(message_t *frame);
#line 419
static inline void ScanP__startTimerTask__runTask(void );




static inline void ScanP__ScanTimer__fired(void );





static void ScanP__RadioOff__offDone(void );









static inline void ScanP__nextIterationTask__runTask(void );




static inline token_requested_t ScanP__IsRadioTokenRequested__getNow(void );
static inline void ScanP__RadioToken__transferredFrom(uint8_t id);
# 69 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
static error_t AssociateP__Frame__getSrcAddr(message_t *frame, ieee154_address_t *address);
#line 55
static uint8_t AssociateP__Frame__getSrcAddrMode(message_t *frame);
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static 
#line 94
AssociateP__TxFramePool__t * 


AssociateP__TxFramePool__get(void );
#line 89
static error_t AssociateP__TxFramePool__put(
#line 85
AssociateP__TxFramePool__t * newVal);
# 150 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_macResponseWaitTime_t AssociateP__MLME_GET__macResponseWaitTime(void );
#line 120
static ieee154_macPANId_t AssociateP__MLME_GET__macPANId(void );








static ieee154_macShortAddress_t AssociateP__MLME_GET__macShortAddress(void );
#line 105
static ieee154_macCoordShortAddress_t AssociateP__MLME_GET__macCoordShortAddress(void );
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
static ieee154_status_t AssociateP__DataRequest__poll(uint8_t CoordAddrMode, uint16_t CoordPANId, uint8_t *CoordAddressLE, uint8_t SrcAddrMode);
# 121 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_ASSOCIATE.nc"
static void AssociateP__MLME_ASSOCIATE__confirm(
uint16_t AssocShortAddress, 
uint8_t status, 
ieee154_security_t *security);
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static 
#line 94
AssociateP__TxControlPool__t * 


AssociateP__TxControlPool__get(void );
#line 89
static error_t AssociateP__TxControlPool__put(
#line 85
AssociateP__TxControlPool__t * newVal);
# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_COMM_STATUS.nc"
static void AssociateP__MLME_COMM_STATUS__indication(
uint16_t PANId, 
uint8_t SrcAddrMode, 
ieee154_address_t SrcAddr, 
uint8_t DstAddrMode, 
ieee154_address_t DstAddr, 
ieee154_status_t status, 
ieee154_security_t *security);
# 138 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
static ieee154_status_t AssociateP__MLME_SET__macPANId(ieee154_macPANId_t value);
#line 54
static ieee154_status_t AssociateP__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value);
#line 151
static ieee154_status_t AssociateP__MLME_SET__macShortAddress(ieee154_macShortAddress_t value);
#line 113
static ieee154_status_t AssociateP__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value);
#line 108
static ieee154_status_t AssociateP__MLME_SET__macCoordExtendedAddress(ieee154_macCoordExtendedAddress_t value);
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
static AssociateP__LocalExtendedAddress__val_t AssociateP__LocalExtendedAddress__get(void );
# 73 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void AssociateP__ResponseTimeout__startOneShot(uint32_t dt);




static void AssociateP__ResponseTimeout__stop(void );
# 37 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
static uint8_t AssociateP__FrameUtility__writeHeader(
uint8_t *mhr, 
uint8_t DstAddrMode, 
uint16_t DstPANId, 
ieee154_address_t *DstAddr, 
uint8_t SrcAddrMode, 
uint16_t SrcPANId, 
const ieee154_address_t *SrcAddr, 
bool PANIDCompression);
#line 64
static void AssociateP__FrameUtility__convertToNative(uint64_t *destNative, const uint8_t *srcLE);
#line 58
static void AssociateP__FrameUtility__copyCoordExtendedAddressLE(uint8_t *destLE);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t AssociateP__AssociationRequestTx__transmit(ieee154_txframe_t *txFrame);
# 67 "/usr/src/tinyos/tos/lib/mac/tkn154/AssociateP.nc"
enum AssociateP____nesc_unnamed4374 {
  AssociateP__S_IDLE = 0xFF
};
uint8_t AssociateP__m_payloadAssocRequest[2];
uint8_t AssociateP__m_payloadAssocResponse[7][4];
uint8_t AssociateP__m_coordAddrMode;
uint8_t AssociateP__m_assocRespStatus;
uint16_t AssociateP__m_shortAddress;
bool AssociateP__m_associationOngoing;

static inline error_t AssociateP__Init__init(void );
#line 91
static ieee154_status_t AssociateP__MLME_ASSOCIATE__request(
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
uint8_t CoordAddrMode, 
uint16_t CoordPANID, 
ieee154_address_t CoordAddress, 
ieee154_CapabilityInformation_t CapabilityInformation, 
ieee154_security_t *security);
#line 157
static inline void AssociateP__AssociationRequestTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 173
static inline message_t *AssociateP__AssociationResponseExtracted__received(message_t *frame, ieee154_txframe_t *txFrame);
#line 199
static inline void AssociateP__ResponseTimeout__fired(void );
#line 222
static void AssociateP__DataRequest__pollDone(void );
#line 298
static void AssociateP__AssociationResponseTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t DisassociateP__DisassociationToCoord__transmit(ieee154_txframe_t *txFrame);
#line 43
static ieee154_status_t DisassociateP__DisassociationDirectTx__transmit(ieee154_txframe_t *txFrame);
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static 
#line 94
DisassociateP__TxFramePool__t * 


DisassociateP__TxFramePool__get(void );
#line 89
static error_t DisassociateP__TxFramePool__put(
#line 85
DisassociateP__TxFramePool__t * newVal);
# 120 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_macPANId_t DisassociateP__MLME_GET__macPANId(void );
#line 105
static ieee154_macCoordShortAddress_t DisassociateP__MLME_GET__macCoordShortAddress(void );
#line 102
static ieee154_macCoordExtendedAddress_t DisassociateP__MLME_GET__macCoordExtendedAddress(void );
# 101 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_DISASSOCIATE.nc"
static void DisassociateP__MLME_DISASSOCIATE__confirm(
ieee154_status_t status, 
uint8_t DeviceAddrMode, 
uint16_t DevicePANID, 
ieee154_address_t DeviceAddress);
#line 81
static void DisassociateP__MLME_DISASSOCIATE__indication(
uint64_t DeviceAddress, 
ieee154_disassociation_reason_t DisassociateReason, 
ieee154_security_t *security);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t DisassociateP__DisassociationIndirectTx__transmit(ieee154_txframe_t *txFrame);
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
static 
#line 94
DisassociateP__TxControlPool__t * 


DisassociateP__TxControlPool__get(void );
#line 89
static error_t DisassociateP__TxControlPool__put(
#line 85
DisassociateP__TxControlPool__t * newVal);
# 138 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
static ieee154_status_t DisassociateP__MLME_SET__macPANId(ieee154_macPANId_t value);
#line 151
static ieee154_status_t DisassociateP__MLME_SET__macShortAddress(ieee154_macShortAddress_t value);









static ieee154_status_t DisassociateP__MLME_SET__macAssociatedPANCoord(ieee154_macAssociatedPANCoord_t value);
#line 113
static ieee154_status_t DisassociateP__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value);
#line 108
static ieee154_status_t DisassociateP__MLME_SET__macCoordExtendedAddress(ieee154_macCoordExtendedAddress_t value);
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
static DisassociateP__LocalExtendedAddress__val_t DisassociateP__LocalExtendedAddress__get(void );
# 37 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
static uint8_t DisassociateP__FrameUtility__writeHeader(
uint8_t *mhr, 
uint8_t DstAddrMode, 
uint16_t DstPANId, 
ieee154_address_t *DstAddr, 
uint8_t SrcAddrMode, 
uint16_t SrcPANId, 
const ieee154_address_t *SrcAddr, 
bool PANIDCompression);
#line 64
static void DisassociateP__FrameUtility__convertToNative(uint64_t *destNative, const uint8_t *srcLE);
# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/DisassociateP.nc"
enum DisassociateP____nesc_unnamed4375 {
  DisassociateP__S_IDLE = 0xFF
};
uint8_t DisassociateP__m_payloadDisassocRequest[2];
uint8_t DisassociateP__m_coordAddrMode;
bool DisassociateP__m_disAssociationOngoing;
static void DisassociateP__resetPanValuesInPib(void );

static inline error_t DisassociateP__Init__init(void );









static inline ieee154_status_t DisassociateP__MLME_DISASSOCIATE__request(
uint8_t DeviceAddrMode, 
uint16_t DevicePANID, 
ieee154_address_t DeviceAddress, 
ieee154_disassociation_reason_t DisassociateReason, 
bool TxIndirect, 
ieee154_security_t *security);
#line 149
static inline void DisassociateP__DisassociationToCoord__transmitDone(ieee154_txframe_t *data, ieee154_status_t status);
#line 172
static inline void DisassociateP__DisassociationIndirectTx__transmitDone(ieee154_txframe_t *data, ieee154_status_t status);




static void DisassociateP__DisassociationDirectTx__transmitDone(ieee154_txframe_t *data, ieee154_status_t status);
#line 200
static message_t *DisassociateP__DisassociationDirectRxFromCoord__received(message_t *frame);









static inline message_t *DisassociateP__DisassociationExtractedFromCoord__received(message_t *frame, ieee154_txframe_t *txFrame);
#line 228
static void DisassociateP__resetPanValuesInPib(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t BeaconSynchronizeP__processBeaconTask__postTask(void );
# 152 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
static void *BeaconSynchronizeP__Frame__getPayload(message_t *frame);
#line 181
static bool BeaconSynchronizeP__Frame__isTimestampValid(message_t *frame);
#line 174
static uint32_t BeaconSynchronizeP__Frame__getTimestamp(message_t *frame);
#line 160
static uint8_t BeaconSynchronizeP__Frame__getPayloadLength(message_t *frame);
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void BeaconSynchronizeP__TrackAlarm__startAt(BeaconSynchronizeP__TrackAlarm__size_type t0, BeaconSynchronizeP__TrackAlarm__size_type dt);
#line 66
static void BeaconSynchronizeP__TrackAlarm__start(BeaconSynchronizeP__TrackAlarm__size_type dt);






static void BeaconSynchronizeP__TrackAlarm__stop(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t BeaconSynchronizeP__signalGrantedTask__postTask(void );
# 93 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_macBeaconOrder_t BeaconSynchronizeP__MLME_GET__macBeaconOrder(void );
#line 87
static ieee154_macBattLifeExtPeriods_t BeaconSynchronizeP__MLME_GET__macBattLifeExtPeriods(void );
#line 63
static ieee154_phyCurrentPage_t BeaconSynchronizeP__MLME_GET__phyCurrentPage(void );
#line 120
static ieee154_macPANId_t BeaconSynchronizeP__MLME_GET__macPANId(void );
#line 51
static ieee154_phyCurrentChannel_t BeaconSynchronizeP__MLME_GET__phyCurrentChannel(void );
#line 165
static ieee154_macMinSIFSPeriod_t BeaconSynchronizeP__MLME_GET__macMinSIFSPeriod(void );
#line 81
static ieee154_macAutoRequest_t BeaconSynchronizeP__MLME_GET__macAutoRequest(void );
#line 162
static ieee154_macMinLIFSPeriod_t BeaconSynchronizeP__MLME_GET__macMinLIFSPeriod(void );
# 88 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154BeaconFrame.nc"
static uint8_t BeaconSynchronizeP__BeaconFrame__isLocalAddrPending(message_t *frame);
#line 132
static uint8_t BeaconSynchronizeP__BeaconFrame__getBeaconPayloadLength(message_t *frame);
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
static ieee154_status_t BeaconSynchronizeP__DataRequest__poll(uint8_t CoordAddrMode, uint16_t CoordPANId, uint8_t *CoordAddressLE, uint8_t SrcAddrMode);
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
static bool BeaconSynchronizeP__TimeCalc__hasExpired(uint32_t t0, uint32_t dt);
# 59 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SYNC_LOSS.nc"
static void BeaconSynchronizeP__MLME_SYNC_LOSS__indication(
ieee154_status_t lossReason, 
uint16_t PANId, 
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
ieee154_security_t *security);
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t BeaconSynchronizeP__RadioToken__release(void );
#line 111
static error_t BeaconSynchronizeP__RadioToken__transferTo(uint8_t dstClient);
#line 84
static error_t BeaconSynchronizeP__RadioToken__request(void );
# 113 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
static void BeaconSynchronizeP__TrackSingleBeacon__startDone(error_t error);
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t BeaconSynchronizeP__RadioOff__off(void );
#line 60
static bool BeaconSynchronizeP__RadioOff__isOff(void );
# 54 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
static ieee154_status_t BeaconSynchronizeP__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value);
# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_BEACON_NOTIFY.nc"
static message_t *BeaconSynchronizeP__MLME_BEACON_NOTIFY__indication(message_t *beaconFrame);
# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
static bool BeaconSynchronizeP__FrameUtility__isBeaconFromCoord(message_t *frame);
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static error_t BeaconSynchronizeP__BeaconRx__enableRx(uint32_t t0, uint32_t dt);
# 118 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
enum BeaconSynchronizeP____nesc_unnamed4376 {
#line 118
  BeaconSynchronizeP__processBeaconTask = 7U
};
#line 118
typedef int BeaconSynchronizeP____nesc_sillytask_processBeaconTask[BeaconSynchronizeP__processBeaconTask];
enum BeaconSynchronizeP____nesc_unnamed4377 {
#line 119
  BeaconSynchronizeP__signalGrantedTask = 8U
};
#line 119
typedef int BeaconSynchronizeP____nesc_sillytask_signalGrantedTask[BeaconSynchronizeP__signalGrantedTask];
#line 75
uint8_t BeaconSynchronizeP__m_state;
uint8_t BeaconSynchronizeP__m_numBeaconsMissed;


uint8_t BeaconSynchronizeP__m_updateLogicalChannel;
bool BeaconSynchronizeP__m_updateTrackBeacon;


ieee154_macBeaconOrder_t BeaconSynchronizeP__m_beaconOrder;
uint32_t BeaconSynchronizeP__m_dt;
uint32_t BeaconSynchronizeP__m_lastBeaconRxTime;
message_t BeaconSynchronizeP__m_beacon;
message_t *BeaconSynchronizeP__m_beaconPtr = &BeaconSynchronizeP__m_beacon;


uint32_t BeaconSynchronizeP__m_sfSlotDuration;
bool BeaconSynchronizeP__m_framePendingBit;
uint8_t BeaconSynchronizeP__m_numCapSlots;
uint8_t BeaconSynchronizeP__m_numGtsSlots;
uint16_t BeaconSynchronizeP__m_battLifeExtDuration;
uint8_t BeaconSynchronizeP__m_gtsField[1 + 1 + 3 * 7];

enum BeaconSynchronizeP____nesc_unnamed4378 {
  BeaconSynchronizeP__RX_PREPARE = 0x00, 
  BeaconSynchronizeP__RX_RECEIVING = 0x01, 
  BeaconSynchronizeP__RX_RADIO_OFF = 0x02, 
  BeaconSynchronizeP__RX_FIRST_SCAN = 0x03, 
  BeaconSynchronizeP__RX_MASK = 0x03, 

  BeaconSynchronizeP__MODE_INACTIVE = 0x00, 
  BeaconSynchronizeP__MODE_TRACK_SINGLE = 0x04, 
  BeaconSynchronizeP__MODE_TRACK_CONTINUOUS = 0x08, 
  BeaconSynchronizeP__MODE_MASK = 0x0C, 

  BeaconSynchronizeP__BEACON_RECEIVED = 0x10, 
  BeaconSynchronizeP__UPDATE_PENDING = 0x20, 
  BeaconSynchronizeP__INTERNAL_REQUEST = 0x40, 
  BeaconSynchronizeP__EXTERNAL_REQUEST = 0x80
};


static void BeaconSynchronizeP__trackNextBeacon(void );
static uint32_t BeaconSynchronizeP__getBeaconInterval(ieee154_macBeaconOrder_t BO);




static inline void BeaconSynchronizeP__setBeaconReceived(void );
static inline void BeaconSynchronizeP__resetBeaconReceived(void );
static inline bool BeaconSynchronizeP__wasBeaconReceived(void );
static inline void BeaconSynchronizeP__setUpdatePending(void );
static inline void BeaconSynchronizeP__resetUpdatePending(void );
static inline bool BeaconSynchronizeP__isUpdatePending(void );
static inline void BeaconSynchronizeP__setInternalRequest(void );
static inline void BeaconSynchronizeP__resetInternalRequest(void );
static inline bool BeaconSynchronizeP__isInternalRequest(void );
static inline void BeaconSynchronizeP__setExternalRequest(void );
static inline void BeaconSynchronizeP__resetExternalRequest(void );
static inline bool BeaconSynchronizeP__isExternalRequest(void );
static inline uint8_t BeaconSynchronizeP__getMode(void );
static inline void BeaconSynchronizeP__setMode(uint8_t mode);
static inline uint8_t BeaconSynchronizeP__getRxState(void );
static inline void BeaconSynchronizeP__setRxState(uint8_t state);

static inline error_t BeaconSynchronizeP__Reset__init(void );
#line 164
static inline ieee154_status_t BeaconSynchronizeP__MLME_SYNC__request(
uint8_t logicalChannel, 
uint8_t channelPage, 
bool trackBeacon);
#line 189
static void BeaconSynchronizeP__RadioToken__granted(void );
#line 207
static inline void BeaconSynchronizeP__RadioToken__transferredFrom(uint8_t clientFrom);








static inline void BeaconSynchronizeP__signalGrantedTask__runTask(void );




static void BeaconSynchronizeP__trackNextBeacon(void );
#line 269
static void BeaconSynchronizeP__RadioOff__offDone(void );
#line 286
static inline void BeaconSynchronizeP__BeaconRx__enableRxDone(void );
#line 319
static void BeaconSynchronizeP__TrackAlarm__fired(void );
#line 332
static inline message_t *BeaconSynchronizeP__BeaconRx__received(message_t *frame);
#line 356
static inline void BeaconSynchronizeP__processBeaconTask__runTask(void );
#line 476
static inline error_t BeaconSynchronizeP__TrackSingleBeacon__start(void );
#line 498
static inline uint32_t BeaconSynchronizeP__IncomingSF__sfStartTime(void );




static inline uint32_t BeaconSynchronizeP__IncomingSF__sfSlotDuration(void );




static inline uint8_t BeaconSynchronizeP__IncomingSF__numCapSlots(void );









static inline uint16_t BeaconSynchronizeP__IncomingSF__battLifeExtDuration(void );









static inline uint16_t BeaconSynchronizeP__IncomingSF__guardTime(void );




static inline bool BeaconSynchronizeP__IncomingSF__isBroadcastPending(void );









static inline bool BeaconSynchronizeP__IsTrackingBeacons__getNow(void );




static uint32_t BeaconSynchronizeP__getBeaconInterval(ieee154_macBeaconOrder_t BO);






static inline void BeaconSynchronizeP__DataRequest__pollDone(void );









static inline message_t *BeaconSynchronizeP__CoordRealignmentRx__received(message_t *frame);
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTx__transmitDone(
# 40 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
uint8_t arg_0x2ab71d974c68, 
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
ieee154_txframe_t *txFrame, ieee154_status_t status);
# 37 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/Purge.nc"
static void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Purge__purgeDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 73 "/usr/src/tinyos/tos/interfaces/Queue.nc"
static 
#line 71
/*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__t  

/*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__head(void );
#line 90
static error_t /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__enqueue(
#line 86
/*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__t  newVal);
#line 81
static 
#line 79
/*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__t  

/*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__dequeue(void );
#line 58
static uint8_t /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__size(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__txTask__postTask(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTxCsma__transmit(ieee154_txframe_t *txFrame);
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
enum /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0____nesc_unnamed4379 {
#line 51
  DispatchQueueP__0__txTask = 9U
};
#line 51
typedef int /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0____nesc_sillytask_txTask[/*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__txTask];
bool /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__m_state;
uint8_t /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__m_client;

enum /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0____nesc_unnamed4380 {
  DispatchQueueP__0__TX_DONE_PENDING = 0x01, 
  DispatchQueueP__0__RESET_PENDING = 0x02
};

static inline bool /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__isTxDonePending(void );
static inline void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__setTxDonePending(void );
static inline void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__resetTxDonePending(void );

static inline bool /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__isResetPending(void );
static inline void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__setResetPending(void );
static inline void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__resetResetPending(void );

static inline error_t /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Reset__init(void );










static ieee154_status_t /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTx__transmit(uint8_t client, ieee154_txframe_t *txFrame);










static inline void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__txTask__runTask(void );
#line 107
static void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTxCsma__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
#line 132
static void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTx__default__transmitDone(uint8_t client, ieee154_txframe_t *txFrame, ieee154_status_t status);
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxWaitAlarm__start(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxWaitAlarm__size_type dt);






static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxWaitAlarm__stop(void );
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SlottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
uint32_t slot0Time, uint32_t dtMax, bool resume, uint16_t remainingBackoff);
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
static bool /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__TimeCalc__hasExpired(uint32_t t0, uint32_t dt);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
static message_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameExtracted__received(
# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
uint8_t arg_0x2ab71d9d4c50, 
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
message_t *rxFrame, ieee154_txframe_t *txFrame);
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BLEAlarm__startAt(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BLEAlarm__size_type t0, /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BLEAlarm__size_type dt);
#line 73
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BLEAlarm__stop(void );
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
static /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__IsTrackingBeacons__data_type /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__IsTrackingBeacons__getNow(void );
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioRx__enableRx(uint32_t t0, uint32_t dt);
#line 73
static bool /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioRx__isReceiving(void );
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__WasRxEnabled__notify(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__WasRxEnabled__val_t val);
# 117 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_macMinBE_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macMinBE(void );
#line 147
static ieee154_macMaxFrameRetries_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macMaxFrameRetries(void );
#line 84
static ieee154_macBattLifeExt_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macBattLifeExt(void );
#line 144
static ieee154_macMaxFrameTotalWaitTime_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macMaxFrameTotalWaitTime(void );
#line 141
static ieee154_macMaxBE_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macMaxBE(void );
#line 114
static ieee154_macMaxCSMABackoffs_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macMaxCSMABackoffs(void );
#line 108
static ieee154_macDSN_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macDSN(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameRx__received(
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
uint8_t arg_0x2ab71d9d4020, 
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
message_t *frame);
# 53 "/usr/src/tinyos/tos/interfaces/SetNow.nc"
static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameBackup__setNow(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameBackup__data_type val);
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__CapEndAlarm__startAt(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__CapEndAlarm__size_type t0, /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__CapEndAlarm__size_type dt);
#line 88
static bool /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__CapEndAlarm__isRunning(void );
#line 73
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__CapEndAlarm__stop(void );
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
static /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__GetIndirectTxFrame__val_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__GetIndirectTxFrame__get(void );
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioToken__release(void );
#line 111
static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioToken__transferTo(uint8_t dstClient);
#line 145
static bool /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioToken__isOwner(void );
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
static /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameRestore__data_type /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameRestore__getNow(void );
# 104 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__TrackSingleBeacon__start(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__wasRxEnabledTask__postTask(void );
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioOff__off(void );
#line 60
static bool /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioOff__isOff(void );
# 67 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SuperframeStructure.nc"
static uint8_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__numCapSlots(void );
#line 60
static uint32_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__sfSlotDuration(void );
#line 83
static uint16_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__battLifeExtDuration(void );
#line 108
static bool /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__isBroadcastPending(void );
#line 100
static uint16_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__guardTime(void );
#line 52
static uint32_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__sfStartTime(void );
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
static /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__IsRadioTokenRequested__data_type /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__IsRadioTokenRequested__getNow(void );
# 118 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
static ieee154_status_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_SET__macDSN(ieee154_macDSN_t value);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__setupTxBroadcastTask__postTask(void );
#line 67
static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__signalTxDoneTask__postTask(void );
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTxNow.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BroadcastTx__transmitNowDone(ieee154_txframe_t *frame, ieee154_status_t status);
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
static /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__IsRxEnableActive__data_type /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__IsRxEnableActive__getNow(void );
# 150 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
enum /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0____nesc_unnamed4381 {
#line 150
  DispatchSlottedCsmaP__0__signalTxDoneTask = 10U
};
#line 150
typedef int /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0____nesc_sillytask_signalTxDoneTask[/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__signalTxDoneTask];
enum /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0____nesc_unnamed4382 {
#line 151
  DispatchSlottedCsmaP__0__setupTxBroadcastTask = 11U
};
#line 151
typedef int /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0____nesc_sillytask_setupTxBroadcastTask[/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__setupTxBroadcastTask];
enum /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0____nesc_unnamed4383 {
#line 152
  DispatchSlottedCsmaP__0__wasRxEnabledTask = 12U
};
#line 152
typedef int /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0____nesc_sillytask_wasRxEnabledTask[/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__wasRxEnabledTask];
#line 105
#line 100
typedef enum /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0____nesc_unnamed4384 {
  DispatchSlottedCsmaP__0__SWITCH_OFF, 
  DispatchSlottedCsmaP__0__WAIT_FOR_RXDONE, 
  DispatchSlottedCsmaP__0__WAIT_FOR_TXDONE, 
  DispatchSlottedCsmaP__0__DO_NOTHING
} /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__next_state_t;





#line 107
typedef enum /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0____nesc_unnamed4385 {
  DispatchSlottedCsmaP__0__INDIRECT_TX_ALARM, 
  DispatchSlottedCsmaP__0__BROADCAST_ALARM, 
  DispatchSlottedCsmaP__0__NO_ALARM
} /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__rx_alarm_t;

enum /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0____nesc_unnamed4386 {
  DispatchSlottedCsmaP__0__COORD_ROLE = 1 == OUTGOING_SUPERFRAME, 
  DispatchSlottedCsmaP__0__DEVICE_ROLE = !/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__COORD_ROLE, 
  DispatchSlottedCsmaP__0__RADIO_CLIENT_CFP = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__COORD_ROLE ? RADIO_CLIENT_COORDCFP : RADIO_CLIENT_DEVICECFP
};


bool /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lock;
bool /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_resume;
ieee154_txframe_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_currentFrame;
ieee154_txframe_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_bcastFrame;
ieee154_txframe_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lastFrame;
uint16_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_remainingBackoff;
ieee154_macRxOnWhenIdle_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__macRxOnWhenIdle;


ieee154_csma_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_csma;
ieee154_macMaxBE_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_BE;
ieee154_macMaxCSMABackoffs_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_macMaxCSMABackoffs;
ieee154_macMaxBE_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_macMaxBE;
ieee154_macMaxFrameRetries_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_macMaxFrameRetries;
ieee154_status_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_txStatus;
uint32_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_transactionTime;
bool /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_indirectTxPending = FALSE;
bool /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_broadcastRxPending;
ieee154_macMaxFrameTotalWaitTime_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_macMaxFrameTotalWaitTime;


static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__stopAllAlarms(void );
static /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__next_state_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__tryReceive(void );
static /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__next_state_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__tryTransmit(void );
static /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__next_state_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__trySwitchOff(void );
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__backupCurrentFrame(void );
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__restoreFrameFromBackup(void );
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__updateState(void );
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__setCurrentFrame(ieee154_txframe_t *frame);
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__signalTxBroadcastDone(ieee154_txframe_t *frame, ieee154_status_t error);
#line 176
static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__reset(error_t error);
#line 192
static inline error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__Reset__init(void );




static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_SYNC_LOSS__indication(
ieee154_status_t lossReason, 
uint16_t PANId, 
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
ieee154_security_t *security);






static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioToken__transferredFrom(uint8_t fromClient);
#line 249
static inline ieee154_status_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameTx__transmit(ieee154_txframe_t *frame);
#line 270
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__TrackSingleBeacon__startDone(error_t error);






static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__setupTxBroadcastTask__runTask(void );
#line 304
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__setCurrentFrame(ieee154_txframe_t *frame);
#line 333
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__stopAllAlarms(void );
#line 353
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__updateState(void );
#line 471
static /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__next_state_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__tryTransmit(void );
#line 505
static /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__next_state_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__tryReceive(void );
#line 519
static /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__next_state_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__trySwitchOff(void );









static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioOff__offDone(void );





static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioRx__enableRxDone(void );







static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__CapEndAlarm__fired(void );



static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BLEAlarm__fired(void );
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxEnableStateChange__notify(bool whatever);
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__PIBUpdateMacRxOnWhenIdle__notify(const void *val);




static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxWaitAlarm__fired(void );
#line 568
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SlottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result);
#line 651
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__signalTxDoneTask__runTask(void );
#line 665
static inline message_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioRx__received(message_t *frame);
#line 698
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__backupCurrentFrame(void );





static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__restoreFrameFromBackup(void );
#line 731
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__signalTxBroadcastDone(ieee154_txframe_t *frame, ieee154_status_t error);




static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__wasRxEnabledTask__runTask(void );




static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioToken__granted(void );





static message_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameRx__default__received(uint8_t client, message_t *data);







static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BroadcastTx__default__transmitNowDone(ieee154_txframe_t *frame, ieee154_status_t status);
static inline message_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameExtracted__default__received(uint8_t client, message_t *msg, ieee154_txframe_t *txFrame);
static inline error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameBackup__default__setNow(ieee154_cap_frame_backup_t *val);
static inline ieee154_cap_frame_backup_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameRestore__default__getNow(void );





static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioTokenRequested__requested(void );
# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t NoBeaconTransmitP__RadioToken__transferTo(uint8_t dstClient);
# 80 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoBeaconTransmitP.nc"
static inline error_t NoBeaconTransmitP__Reset__init(void );
#line 98
static inline void NoBeaconTransmitP__RadioToken__granted(void );

static inline void NoBeaconTransmitP__RadioToken__transferredFrom(uint8_t from);

static inline void NoBeaconTransmitP__RadioOff__offDone(void );

static inline void NoBeaconTransmitP__BeaconSendAlarm__fired(void );

static inline void NoBeaconTransmitP__BeaconTx__transmitDone(ieee154_txframe_t *frame, error_t result);
#line 119
static inline void NoBeaconTransmitP__PIBUpdate__notify(uint8_t attributeID, const void *attributeValue);



static inline void NoBeaconTransmitP__PendingAddrSpecUpdated__notify(bool val);







static inline void NoBeaconTransmitP__BeaconPayloadUpdateTimer__fired(void );



static inline void NoBeaconTransmitP__RealignmentBeaconEnabledTx__transmitDone(ieee154_txframe_t *frame, ieee154_status_t status);
#line 162
static inline bool NoBeaconTransmitP__OutgoingSF__isBroadcastPending(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static ieee154_status_t /*TKN154BeaconEnabledP.CoordCapQueue*/NoDispatchQueueP__0__FrameTxCsma__transmit(ieee154_txframe_t *txFrame);
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDispatchQueueP.nc"
uint8_t /*TKN154BeaconEnabledP.CoordCapQueue*/NoDispatchQueueP__0__m_client;

static inline error_t /*TKN154BeaconEnabledP.CoordCapQueue*/NoDispatchQueueP__0__Reset__init(void );

static ieee154_status_t /*TKN154BeaconEnabledP.CoordCapQueue*/NoDispatchQueueP__0__FrameTx__transmit(uint8_t client, ieee154_txframe_t *txFrame);
# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioToken__transferTo(uint8_t dstClient);
# 82 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDispatchSlottedCsmaP.nc"
enum /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0____nesc_unnamed4387 {
  NoDispatchSlottedCsmaP__0__COORD_ROLE = 0 == OUTGOING_SUPERFRAME, 
  NoDispatchSlottedCsmaP__0__DEVICE_ROLE = !/*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__COORD_ROLE, 
  NoDispatchSlottedCsmaP__0__RADIO_CLIENT_CFP = /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__COORD_ROLE ? RADIO_CLIENT_COORDCFP : RADIO_CLIENT_DEVICECFP
};

static inline error_t /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__Reset__init(void );

static inline void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioToken__transferredFrom(uint8_t c);

static inline ieee154_status_t /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__FrameTx__transmit(ieee154_txframe_t *frame);

static inline void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioOff__offDone(void );

static inline void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioRx__enableRxDone(void );

static inline void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__CapEndAlarm__fired(void );

static inline void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__BLEAlarm__fired(void );

static inline void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RxEnableStateChange__notify(bool whatever);



static inline void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__SlottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result);

static inline message_t */*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioRx__received(message_t *frame);

static inline ieee154_status_t /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__BroadcastTx__transmitNow(ieee154_txframe_t *frame);

static inline void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioToken__granted(void );



static inline void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__PIBUpdateMacRxOnWhenIdle__notify(const void *val);
static inline void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioTokenRequested__requested(void );
# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioToken__transferTo(uint8_t dstClient);
# 63 "/usr/src/tinyos/tos/lib/mac/tkn154/InactivePeriodP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioToken__transferredFrom(uint8_t fromClient);









static inline void /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioOff__offDone(void );
static inline void /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioControl__stopDone(error_t result);
static inline void /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioControl__startDone(error_t result);
static inline void /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__Alarm__fired(void );
static inline void /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioToken__granted(void );
# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioToken__transferTo(uint8_t dstClient);
# 63 "/usr/src/tinyos/tos/lib/mac/tkn154/InactivePeriodP.nc"
static inline void /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioToken__transferredFrom(uint8_t fromClient);









static inline void /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioOff__offDone(void );
static inline void /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioControl__stopDone(error_t result);
static inline void /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioControl__startDone(error_t result);
static inline void /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__Alarm__fired(void );
static inline void /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioToken__granted(void );
# 75 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RX_ENABLE.nc"
static void RxEnableP__MLME_RX_ENABLE__confirm(
ieee154_status_t status);
# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void RxEnableP__RxEnableStateChange__notify(RxEnableP__RxEnableStateChange__val_t val);
# 129 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void RxEnableP__RxEnableTimer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void RxEnableP__RxEnableTimer__stop(void );
# 62 "/usr/src/tinyos/tos/lib/mac/tkn154/RxEnableP.nc"
uint32_t RxEnableP__m_rxOnDuration;
uint32_t RxEnableP__m_rxOnOffset;
uint32_t RxEnableP__m_rxOnAnchor;
bool RxEnableP__m_isRxEnabled;
bool RxEnableP__m_confirmPending;

static inline error_t RxEnableP__Reset__init(void );
#line 139
static inline void RxEnableP__RxEnableTimer__fired(void );
#line 159
static inline bool RxEnableP__IsRxEnableActive__getNow(void );




static inline void RxEnableP__WasRxEnabled__notify(bool val);
#line 176
static inline void RxEnableP__MLME_RX_ENABLE__default__confirm(ieee154_status_t status);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t PromiscuousModeP__signalStartDoneTask__postTask(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *PromiscuousModeP__FrameRx__received(message_t *frame);
# 113 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
static void PromiscuousModeP__PromiscuousMode__startDone(error_t error);
#line 138
static void PromiscuousModeP__PromiscuousMode__stopDone(error_t error);
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t PromiscuousModeP__RadioToken__release(void );
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static error_t PromiscuousModeP__RadioOff__off(void );
#line 60
static bool PromiscuousModeP__RadioOff__isOff(void );
# 55 "/usr/src/tinyos/tos/interfaces/Set.nc"
static void PromiscuousModeP__RadioPromiscuousMode__set(PromiscuousModeP__RadioPromiscuousMode__val_t val);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t PromiscuousModeP__continueStopTask__postTask(void );
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static error_t PromiscuousModeP__PromiscuousRx__enableRx(uint32_t t0, uint32_t dt);
# 96 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
enum PromiscuousModeP____nesc_unnamed4388 {
#line 96
  PromiscuousModeP__signalStartDoneTask = 13U
};
#line 96
typedef int PromiscuousModeP____nesc_sillytask_signalStartDoneTask[PromiscuousModeP__signalStartDoneTask];
#line 129
enum PromiscuousModeP____nesc_unnamed4389 {
#line 129
  PromiscuousModeP__continueStopTask = 14U
};
#line 129
typedef int PromiscuousModeP____nesc_sillytask_continueStopTask[PromiscuousModeP__continueStopTask];
#line 60
#line 55
enum PromiscuousModeP__promiscuous_state {
  PromiscuousModeP__S_STOPPING, 
  PromiscuousModeP__S_STOPPED, 
  PromiscuousModeP__S_STARTING, 
  PromiscuousModeP__S_STARTED
} PromiscuousModeP__m_state;

static inline error_t PromiscuousModeP__Init__init(void );







static inline bool PromiscuousModeP__PromiscuousModeGet__get(void );
#line 87
static inline void PromiscuousModeP__RadioToken__granted(void );








static inline void PromiscuousModeP__signalStartDoneTask__runTask(void );






static inline void PromiscuousModeP__PromiscuousRx__enableRxDone(void );




static inline message_t *PromiscuousModeP__PromiscuousRx__received(message_t *frame);
#line 129
static inline void PromiscuousModeP__continueStopTask__runTask(void );








static void PromiscuousModeP__RadioOff__offDone(void );







static inline token_requested_t PromiscuousModeP__IsRadioTokenRequested__getNow(void );
static inline void PromiscuousModeP__PromiscuousMode__default__startDone(error_t error);
static inline void PromiscuousModeP__PromiscuousMode__default__stopDone(error_t error);
static inline void PromiscuousModeP__RadioToken__transferredFrom(uint8_t clientFrom);
# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/CoordRealignmentP.nc"
enum CoordRealignmentP____nesc_unnamed4390 {
  CoordRealignmentP__ORPHAN_RESPONSE, 
  CoordRealignmentP__BEACON_REALIGNMENT
};






static inline error_t CoordRealignmentP__Init__init(void );
# 73 "/usr/src/tinyos/tos/interfaces/Queue.nc"
static 
#line 71
CoordBroadcastP__Queue__t  

CoordBroadcastP__Queue__head(void );







static 
#line 79
CoordBroadcastP__Queue__t  

CoordBroadcastP__Queue__dequeue(void );
#line 50
static bool CoordBroadcastP__Queue__empty(void );







static uint8_t CoordBroadcastP__Queue__size(void );
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void CoordBroadcastP__RealignmentTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t CoordBroadcastP__RadioToken__transferTo(uint8_t dstClient);
# 108 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SuperframeStructure.nc"
static bool CoordBroadcastP__OutgoingSF__isBroadcastPending(void );
# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void CoordBroadcastP__BroadcastDataFrame__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTxNow.nc"
static ieee154_status_t CoordBroadcastP__CapTransmitNow__transmitNow(ieee154_txframe_t *frame);
# 64 "/usr/src/tinyos/tos/lib/mac/tkn154/CoordBroadcastP.nc"
enum CoordBroadcastP____nesc_unnamed4391 {
#line 64
  CoordBroadcastP__transmitNowDoneTask = 15U
};
#line 64
typedef int CoordBroadcastP____nesc_sillytask_transmitNowDoneTask[CoordBroadcastP__transmitNowDoneTask];
#line 58
bool CoordBroadcastP__m_lock;
ieee154_txframe_t *CoordBroadcastP__m_realignmentFrame;
ieee154_txframe_t *CoordBroadcastP__m_queueHead;
ieee154_txframe_t *CoordBroadcastP__m_transmittedFrame;
ieee154_status_t CoordBroadcastP__m_status;



static inline error_t CoordBroadcastP__Reset__init(void );
#line 107
static inline void CoordBroadcastP__RadioToken__transferredFrom(uint8_t fromClient);
#line 128
static inline void CoordBroadcastP__transmitNowDoneTask__runTask(void );
#line 146
static inline void CoordBroadcastP__RadioToken__granted(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *NoCoordCfpP__FrameRx__received(message_t *frame);
# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t NoCoordCfpP__RadioToken__transferTo(uint8_t dstClient);
# 110 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoCoordCfpP.nc"
static inline error_t NoCoordCfpP__Init__init(void );
#line 126
static inline void NoCoordCfpP__RadioToken__transferredFrom(uint8_t fromClient);








static inline void NoCoordCfpP__CfpEndAlarm__fired(void );


static inline void NoCoordCfpP__CfpSlotAlarm__fired(void );


static inline void NoCoordCfpP__RadioOff__offDone(void );
#line 159
static inline void NoCoordCfpP__RadioTx__transmitDone(
ieee154_txframe_t *frame, error_t result);


static inline void NoCoordCfpP__RadioRx__enableRxDone(void );

static inline message_t *NoCoordCfpP__RadioRx__received(message_t *frame);




static inline void NoCoordCfpP__RadioToken__granted(void );
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t *NoDeviceCfpP__FrameRx__received(message_t *frame);
# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
static error_t NoDeviceCfpP__RadioToken__transferTo(uint8_t dstClient);
# 108 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDeviceCfpP.nc"
static inline error_t NoDeviceCfpP__Init__init(void );
#line 140
static inline void NoDeviceCfpP__RadioToken__transferredFrom(uint8_t fromClient);








static inline void NoDeviceCfpP__CfpEndAlarm__fired(void );

static inline void NoDeviceCfpP__CfpSlotAlarm__fired(void );

static inline void NoDeviceCfpP__RadioOff__offDone(void );

static inline void NoDeviceCfpP__RadioTx__transmitDone(
ieee154_txframe_t *frame, error_t result);


static inline void NoDeviceCfpP__RadioRx__enableRxDone(void );

static inline message_t *NoDeviceCfpP__RadioRx__received(message_t *frame);




static inline void NoDeviceCfpP__RadioToken__granted(void );




static inline void NoDeviceCfpP__GTSrequestTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status);
# 60 "/usr/src/tinyos/tos/system/PoolP.nc"
uint8_t /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__free;
uint8_t /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__index;
/*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t * /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__queue[4];
/*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool[4];

static inline error_t /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Init__init(void );
#line 88
static /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t */*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__get(void );
#line 103
static error_t /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(/*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t *newVal);
#line 60
uint8_t /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__free;
uint8_t /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__index;
/*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t * /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__queue[3];
/*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool[3];

static inline error_t /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Init__init(void );
#line 88
static /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t */*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__get(void );
#line 103
static error_t /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__put(/*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t *newVal);
# 48 "/usr/src/tinyos/tos/system/QueueC.nc"
/*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__queue_t  /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__queue[4];
uint8_t /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__head = 0;
uint8_t /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__tail = 0;
uint8_t /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__size = 0;

static inline bool /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__empty(void );



static inline uint8_t /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__size(void );



static inline uint8_t /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__maxSize(void );



static inline /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__queue_t /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__head(void );



static inline void /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__printQueue(void );
#line 85
static /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__queue_t /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__dequeue(void );
#line 97
static inline error_t /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__enqueue(/*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__queue_t newVal);
#line 48
/*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__queue_t  /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__queue[4];
uint8_t /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__head = 0;

uint8_t /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__size = 0;

static inline bool /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__empty(void );



static inline uint8_t /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__size(void );







static inline /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__queue_t /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__head(void );



static inline void /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__printQueue(void );
#line 85
static /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__queue_t /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__dequeue(void );
# 72 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
static void CC2420TKN154P__CC2420Config__setShortAddr(uint16_t address);
#line 66
static void CC2420TKN154P__CC2420Config__setChannel(uint8_t channel);
#line 89
static void CC2420TKN154P__CC2420Config__setPromiscuousMode(bool on);
#line 78
static void CC2420TKN154P__CC2420Config__setPanAddr(uint16_t address);
#line 96
static void CC2420TKN154P__CC2420Config__setCCAMode(uint8_t mode);
#line 53
static error_t CC2420TKN154P__CC2420Config__sync(void );
#line 65
static uint8_t CC2420TKN154P__CC2420Config__getChannel(void );
#line 84
static void CC2420TKN154P__CC2420Config__setPanCoordinator(bool pcoord);
#line 102
static void CC2420TKN154P__CC2420Config__setTxPower(uint8_t txPower);
# 113 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
static void CC2420TKN154P__SplitControl__startDone(error_t error);
#line 138
static void CC2420TKN154P__SplitControl__stopDone(error_t error);
# 83 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
static void CC2420TKN154P__RadioTx__transmitDone(ieee154_txframe_t *frame, error_t result);
# 35 "/usr/src/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
static void CC2420TKN154P__ReliableWait__waitRx(uint32_t t0, uint32_t dt);





static bool CC2420TKN154P__ReliableWait__ccaOnBackoffBoundary(uint32_t slot0);
#line 37
static void CC2420TKN154P__ReliableWait__waitTx(uint32_t t0, uint32_t dt);

static void CC2420TKN154P__ReliableWait__waitBackoff(uint32_t dt);
# 115 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
static void CC2420TKN154P__SlottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result);
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
static bool CC2420TKN154P__TimeCalc__hasExpired(uint32_t t0, uint32_t dt);
#line 40
static uint32_t CC2420TKN154P__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1);
# 61 "/usr/src/tinyos/tos/lib/timer/LocalTime.nc"
static uint32_t CC2420TKN154P__LocalTime__get(void );
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
static void CC2420TKN154P__RadioRx__enableRxDone(void );
#line 84
static message_t *CC2420TKN154P__RadioRx__received(message_t *frame);
# 95 "/usr/src/tinyos/tos/interfaces/AsyncStdControl.nc"
static error_t CC2420TKN154P__TxControl__start(void );









static error_t CC2420TKN154P__TxControl__stop(void );
# 52 "/usr/src/tinyos/tos/interfaces/Random.nc"
static uint16_t CC2420TKN154P__Random__rand16(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t CC2420TKN154P__configSyncTask__postTask(void );
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420TKN154P__SpiResource__release(void );
#line 97
static error_t CC2420TKN154P__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420TKN154P__SpiResource__request(void );
#line 128
static bool CC2420TKN154P__SpiResource__isOwner(void );
# 49 "/usr/src/tinyos/tos/chips/cc2420_tkn154/Timestamp.nc"
static void CC2420TKN154P__Timestamp__transmissionStarted(uint8_t frameType, uint8_t msduHandle, uint8_t *payload, uint8_t token);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t CC2420TKN154P__energyDetectionTask__postTask(void );
# 40 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
static error_t CC2420TKN154P__CC2420Tx__loadTXFIFO(ieee154_txframe_t *data);


static error_t CC2420TKN154P__CC2420Tx__send(bool cca);



static void CC2420TKN154P__CC2420Tx__lockChipSpi(void );
#line 46
static bool CC2420TKN154P__CC2420Tx__cca(void );

static void CC2420TKN154P__CC2420Tx__unlockChipSpi(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t CC2420TKN154P__startDoneTask__postTask(void );
#line 67
static error_t CC2420TKN154P__rxControlStopDoneTask__postTask(void );
# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
static void CC2420TKN154P__RadioOff__offDone(void );
# 89 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
static void CC2420TKN154P__UnslottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result);
# 72 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
static error_t CC2420TKN154P__CC2420Power__startOscillator(void );
#line 98
static error_t CC2420TKN154P__CC2420Power__rfOff(void );
#line 112
static error_t CC2420TKN154P__CC2420Power__flushRxFifo(void );
#line 91
static error_t CC2420TKN154P__CC2420Power__rxOn(void );
#line 52
static error_t CC2420TKN154P__CC2420Power__startVReg(void );
#line 64
static error_t CC2420TKN154P__CC2420Power__stopVReg(void );
#line 84
static error_t CC2420TKN154P__CC2420Power__stopOscillator(void );
#line 104
static error_t CC2420TKN154P__CC2420Power__rssi(int8_t *rssi);
# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/EnergyDetection.nc"
static void CC2420TKN154P__EnergyDetection__done(error_t status, int8_t EnergyLevel);
# 113 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
static error_t CC2420TKN154P__RxControl__start(void );









static error_t CC2420TKN154P__RxControl__stop(void );
# 117 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
enum CC2420TKN154P____nesc_unnamed4392 {
#line 117
  CC2420TKN154P__energyDetectionTask = 16U
};
#line 117
typedef int CC2420TKN154P____nesc_sillytask_energyDetectionTask[CC2420TKN154P__energyDetectionTask];
enum CC2420TKN154P____nesc_unnamed4393 {
#line 118
  CC2420TKN154P__startDoneTask = 17U
};
#line 118
typedef int CC2420TKN154P____nesc_sillytask_startDoneTask[CC2420TKN154P__startDoneTask];
enum CC2420TKN154P____nesc_unnamed4394 {
#line 119
  CC2420TKN154P__rxControlStopDoneTask = 18U
};
#line 119
typedef int CC2420TKN154P____nesc_sillytask_rxControlStopDoneTask[CC2420TKN154P__rxControlStopDoneTask];
enum CC2420TKN154P____nesc_unnamed4395 {
#line 120
  CC2420TKN154P__configSyncTask = 19U
};
#line 120
typedef int CC2420TKN154P____nesc_sillytask_configSyncTask[CC2420TKN154P__configSyncTask];
#line 95
#line 74
typedef enum CC2420TKN154P____nesc_unnamed4396 {
  CC2420TKN154P__S_STOPPED, 
  CC2420TKN154P__S_STOPPING, 
  CC2420TKN154P__S_STARTING, 
  CC2420TKN154P__S_ED, 
  CC2420TKN154P__S_RADIO_OFF, 

  CC2420TKN154P__S_RESERVE_RX_SPI, 
  CC2420TKN154P__S_RX_PENDING, 
  CC2420TKN154P__S_RECEIVING, 
  CC2420TKN154P__S_OFF_PENDING, 

  CC2420TKN154P__S_LOAD_TXFIFO_NO_CSMA, 
  CC2420TKN154P__S_LOAD_TXFIFO_UNSLOTTED, 
  CC2420TKN154P__S_LOAD_TXFIFO_SLOTTED, 
  CC2420TKN154P__S_TX_PENDING, 
  CC2420TKN154P__S_TX_BACKOFF_UNSLOTTED, 
  CC2420TKN154P__S_TX_BACKOFF_SLOTTED, 
  CC2420TKN154P__S_TX_ACTIVE_NO_CSMA, 
  CC2420TKN154P__S_TX_ACTIVE_UNSLOTTED_CSMA, 
  CC2420TKN154P__S_TX_ACTIVE_SLOTTED_CSMA
} CC2420TKN154P__m_state_t;

CC2420TKN154P__m_state_t CC2420TKN154P__m_state = CC2420TKN154P__S_STOPPED;
ieee154_txframe_t *CC2420TKN154P__m_txframe;
error_t CC2420TKN154P__m_txResult;
bool CC2420TKN154P__m_ackFramePending;
uint16_t CC2420TKN154P__m_remainingBackoff;
bool CC2420TKN154P__m_resume;
ieee154_csma_t *CC2420TKN154P__m_csma;



uint32_t CC2420TKN154P__m_dt;
uint32_t CC2420TKN154P__m_t0;



int8_t CC2420TKN154P__m_maxEnergy;
uint32_t CC2420TKN154P__m_edDuration;
uint32_t CC2420TKN154P__m_edStartTime;








static inline uint8_t CC2420TKN154P__dBmToPA_LEVEL(int dbm);
static inline void CC2420TKN154P__txDoneRxControlStopped(void );
static void CC2420TKN154P__rxSpiReserved(void );
static void CC2420TKN154P__txSpiReserved(void );
static void CC2420TKN154P__sendDoneSpiReserved(void );
static void CC2420TKN154P__offSpiReserved(void );
static inline void CC2420TKN154P__offStopRxDone(void );
static uint16_t CC2420TKN154P__getRandomBackoff(uint8_t BE);
static void CC2420TKN154P__loadTxFrame(ieee154_txframe_t *frame);
static void CC2420TKN154P__checkEnableRxForACK(void );



static inline error_t CC2420TKN154P__SplitControl__start(void );
#line 149
static inline void CC2420TKN154P__startSpiReserved(void );





static inline void CC2420TKN154P__CC2420Power__startVRegDone(void );




static inline void CC2420TKN154P__CC2420Power__startOscillatorDone(void );







static inline void CC2420TKN154P__startDoneTask__runTask(void );
#line 180
static inline error_t CC2420TKN154P__SplitControl__stop(void );
#line 193
static inline void CC2420TKN154P__stopSpiReserved(void );
#line 210
static uint16_t CC2420TKN154P__getRandomBackoff(uint8_t BE);










static inline uint8_t CC2420TKN154P__dBmToPA_LEVEL(int dBm);
#line 244
static void CC2420TKN154P__PIBUpdate__notify(uint8_t PIBAttribute, const void *PIBAttributeValue);
#line 276
static inline void CC2420TKN154P__configSyncTask__runTask(void );
#line 290
static inline void CC2420TKN154P__RadioPromiscuousMode__set(bool val);






static inline error_t CC2420TKN154P__EnergyDetection__start(uint32_t duration);
#line 312
static inline void CC2420TKN154P__edReserved(void );







static inline void CC2420TKN154P__energyDetectionTask__runTask(void );
#line 342
static inline error_t CC2420TKN154P__RadioOff__off(void );
#line 357
static inline void CC2420TKN154P__offStopRxDone(void );







static void CC2420TKN154P__offSpiReserved(void );










static inline bool CC2420TKN154P__RadioOff__isOff(void );






static inline error_t CC2420TKN154P__RadioRx__enableRx(uint32_t t0, uint32_t dt);
#line 403
static void CC2420TKN154P__rxSpiReserved(void );
#line 417
static void CC2420TKN154P__ReliableWait__waitRxDone(void );
#line 430
static inline message_t *CC2420TKN154P__CC2420Rx__received(message_t *frame);







static inline bool CC2420TKN154P__RadioRx__isReceiving(void );






static inline error_t CC2420TKN154P__RadioTx__transmit(ieee154_txframe_t *frame, uint32_t t0, uint32_t dt);
#line 464
static inline void CC2420TKN154P__loadDoneRadioTx(void );
#line 476
static void CC2420TKN154P__ReliableWait__waitTxDone(void );
#line 488
static __inline void CC2420TKN154P__txDoneRadioTx(ieee154_txframe_t *frame, error_t result);
#line 513
static void CC2420TKN154P__nextIterationUnslottedCsma(void );







static inline void CC2420TKN154P__waitBackoffDoneUnslottedCsma(void );
#line 572
static __inline void CC2420TKN154P__txDoneUnslottedCsma(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result);
#line 585
static inline error_t CC2420TKN154P__SlottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
uint32_t slot0Time, uint32_t dtMax, bool resume, uint16_t remainingBackoff);
#line 607
static void CC2420TKN154P__nextIterationSlottedCsma(void );
#line 644
static inline void CC2420TKN154P__waitBackoffDoneSlottedCsma(void );
#line 713
static __inline void CC2420TKN154P__txDoneSlottedCsmaCa(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result);







static void CC2420TKN154P__loadTxFrame(ieee154_txframe_t *frame);







static void CC2420TKN154P__txSpiReserved(void );








static inline void CC2420TKN154P__CC2420Tx__loadTXFIFODone(ieee154_txframe_t *data, error_t error);
#line 752
static void CC2420TKN154P__checkEnableRxForACK(void );
#line 768
static void CC2420TKN154P__CC2420Tx__sendDone(ieee154_txframe_t *frame, bool ackPendingFlag, error_t result);
#line 782
static inline void CC2420TKN154P__txDoneRxControlStopped(void );








static void CC2420TKN154P__sendDoneSpiReserved(void );
#line 815
static inline void CC2420TKN154P__CC2420Tx__transmissionStarted(ieee154_txframe_t *frame);
#line 837
static inline void CC2420TKN154P__ReliableWait__waitBackoffDone(void );
#line 849
static inline void CC2420TKN154P__RxControl__stopDone(error_t error);




static inline void CC2420TKN154P__rxControlStopDoneTask__runTask(void );
#line 868
static inline void CC2420TKN154P__SpiResource__granted(void );
#line 887
static inline bool CC2420TKN154P__CCA__getNow(void );







static inline void CC2420TKN154P__UnslottedCsmaCa__default__transmitDone(ieee154_txframe_t *frame, 
ieee154_csma_t *csma, bool ackPendingFlag, error_t result);



static inline void CC2420TKN154P__Timestamp__default__transmissionStarted(uint8_t frameType, uint8_t msduHandle, uint8_t *msdu, uint8_t token);
# 43 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static bool CC2420ControlP__FIFO__get(void );
# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data);
# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__RSTN__makeOutput(void );
#line 40
static void CC2420ControlP__RSTN__set(void );
static void CC2420ControlP__RSTN__clr(void );
# 55 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data);







static cc2420_status_t CC2420ControlP__TXCTRL__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data);
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SACKPEND__strobe(void );
# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__CSN__makeOutput(void );
#line 40
static void CC2420ControlP__CSN__set(void );
static void CC2420ControlP__CSN__clr(void );
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SXOSCOFF__strobe(void );
# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void CC2420ControlP__VREN__makeOutput(void );
#line 40
static void CC2420ControlP__VREN__set(void );
static void CC2420ControlP__VREN__clr(void );
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void );
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420ControlP__SpiResource__release(void );
#line 97
static error_t CC2420ControlP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420ControlP__SpiResource__request(void );
#line 128
static bool CC2420ControlP__SpiResource__isOwner(void );
# 77 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
static void CC2420ControlP__CC2420Power__startOscillatorDone(void );
#line 57
static void CC2420ControlP__CC2420Power__startVRegDone(void );
# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data);
#line 63
static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data);
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRXON__strobe(void );
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void CC2420ControlP__Resource__granted(void );
# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Ram.nc"
static cc2420_status_t CC2420ControlP__IEEEADR__write(uint8_t offset, uint8_t * data, uint8_t length);
# 61 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ControlP__InterruptCCA__disable(void );
#line 53
static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void );
# 55 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
static cc2420_status_t CC2420ControlP__RXFIFO_REGISTER__read(uint16_t *data);
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SFLUSHRX__strobe(void );
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void CC2420ControlP__StartupAlarm__start(CC2420ControlP__StartupAlarm__size_type dt);
# 55 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
static void CC2420ControlP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE);
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void );
# 88 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
#line 82
typedef enum CC2420ControlP____nesc_unnamed4397 {
  CC2420ControlP__S_VREG_STOPPED, 
  CC2420ControlP__S_VREG_STARTING, 
  CC2420ControlP__S_VREG_STARTED, 
  CC2420ControlP__S_XOSC_STARTING, 
  CC2420ControlP__S_XOSC_STARTED
} CC2420ControlP__cc2420_control_state_t;

uint8_t CC2420ControlP__m_channel;
uint16_t CC2420ControlP__m_pan;
uint16_t CC2420ControlP__m_short_addr;
bool CC2420ControlP__autoAckEnabled;
bool CC2420ControlP__hwAutoAckDefault;
bool CC2420ControlP__addressRecognition;
bool CC2420ControlP__acceptReservedFrames;
bool CC2420ControlP__m_isPanCoord;
uint8_t CC2420ControlP__m_CCAMode;
uint8_t CC2420ControlP__m_txPower;

bool CC2420ControlP__m_needsSync;

CC2420ControlP__cc2420_control_state_t CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;



static void CC2420ControlP__writeFsctrl(void );
static void CC2420ControlP__writeMdmctrl0(void );
static void CC2420ControlP__writeId(void );
static inline void CC2420ControlP__writeTxPower(void );


static inline error_t CC2420ControlP__Init__init(void );
#line 145
static error_t CC2420ControlP__Resource__immediateRequest(void );







static inline error_t CC2420ControlP__Resource__request(void );



static inline bool CC2420ControlP__Resource__isOwner(void );



static error_t CC2420ControlP__Resource__release(void );






static inline void CC2420ControlP__SpiResource__granted(void );





static inline error_t CC2420ControlP__CC2420Power__startVReg(void );
#line 186
static inline error_t CC2420ControlP__CC2420Power__stopVReg(void );







static inline error_t CC2420ControlP__CC2420Power__startOscillator(void );
#line 228
static inline error_t CC2420ControlP__CC2420Power__stopOscillator(void );
#line 242
static error_t CC2420ControlP__CC2420Power__rxOn(void );
#line 255
static error_t CC2420ControlP__CC2420Power__rfOff(void );
#line 267
static error_t CC2420ControlP__CC2420Power__flushRxFifo(void );
#line 292
static inline uint8_t CC2420ControlP__CC2420Config__getChannel(void );



static void CC2420ControlP__CC2420Config__setChannel(uint8_t channel);










static inline void CC2420ControlP__CC2420Config__setShortAddr(uint16_t addr);










static inline void CC2420ControlP__CC2420Config__setPanAddr(uint16_t pan);










static inline void CC2420ControlP__CC2420Config__setPanCoordinator(bool pCoord);






static void CC2420ControlP__CC2420Config__setPromiscuousMode(bool on);
#line 352
static inline bool CC2420ControlP__CC2420Config__isPromiscuousModeEnabled(void );









static inline void CC2420ControlP__CC2420Config__setCCAMode(uint8_t mode);
#line 375
static inline void CC2420ControlP__CC2420Config__setTxPower(uint8_t txPower);
#line 392
static error_t CC2420ControlP__CC2420Config__sync(void );
#line 417
static error_t CC2420ControlP__CC2420Power__rssi(int8_t *rssi);
#line 436
static inline void CC2420ControlP__StartupAlarm__fired(void );









static inline void CC2420ControlP__InterruptCCA__fired(void );
#line 461
static void CC2420ControlP__writeFsctrl(void );
#line 475
static void CC2420ControlP__writeMdmctrl0(void );
#line 498
static void CC2420ControlP__writeId(void );
#line 518
static inline void CC2420ControlP__writeTxPower(void );
# 61 "/usr/src/tinyos/tos/interfaces/GpioCapture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captured(uint16_t time);
# 88 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__setEdge(bool up);
#line 64
static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__reset(void );


static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__start(void );


static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__stop(void );
# 49 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__enableCapture(uint8_t mode);









static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureRisingEdge(void );



static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureFallingEdge(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__disable(void );



static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__captured(uint16_t time);
# 58 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP__Compare__fired(void );
# 70 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP__Timer__overflow(void );
# 103 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void );
#line 149
static __inline void HplAtm128Timer0AsyncP__stabiliseTimer0(void );
#line 164
static inline mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void );
#line 186
static inline void HplAtm128Timer0AsyncP__Compare__default__fired(void );
void __vector_15(void ) __attribute((signal))   ;




static inline void HplAtm128Timer0AsyncP__Timer__default__overflow(void );
void __vector_16(void ) __attribute((signal))   ;
# 53 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag(void );
# 58 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareA__fired(void );
# 60 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Capture.nc"
static void HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Capture__size_type t);
# 58 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer1P__CompareB__fired(void );
#line 58
static void HplAtm128Timer1P__CompareC__fired(void );
# 70 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer1P__Timer__overflow(void );
# 58 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__Timer__get(void );


static inline void HplAtm128Timer1P__Timer__set(uint16_t t);








static inline void HplAtm128Timer1P__Timer__setScale(uint8_t s);









static inline Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void );









static inline uint16_t HplAtm128Timer1P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x);






static inline void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128_TCCR1B_t x);
#line 131
static inline void HplAtm128Timer1P__Capture__setEdge(bool up);



static inline void HplAtm128Timer1P__Capture__reset(void );
static inline void HplAtm128Timer1P__CompareA__reset(void );
static inline void HplAtm128Timer1P__CompareB__reset(void );
static inline void HplAtm128Timer1P__CompareC__reset(void );

static inline void HplAtm128Timer1P__Timer__start(void );
static inline void HplAtm128Timer1P__Capture__start(void );
static inline void HplAtm128Timer1P__CompareA__start(void );
static inline void HplAtm128Timer1P__CompareB__start(void );
static inline void HplAtm128Timer1P__CompareC__start(void );


static inline void HplAtm128Timer1P__Capture__stop(void );
static inline void HplAtm128Timer1P__CompareA__stop(void );
static inline void HplAtm128Timer1P__CompareB__stop(void );
static inline void HplAtm128Timer1P__CompareC__stop(void );


static inline bool HplAtm128Timer1P__Timer__test(void );
#line 192
static inline void HplAtm128Timer1P__CompareA__set(uint16_t t);
static inline void HplAtm128Timer1P__CompareB__set(uint16_t t);
static inline void HplAtm128Timer1P__CompareC__set(uint16_t t);


static inline uint16_t HplAtm128Timer1P__Capture__get(void );






void __vector_12(void ) __attribute((interrupt))   ;



void __vector_13(void ) __attribute((interrupt))   ;



void __vector_24(void ) __attribute((interrupt))   ;



void __vector_11(void ) __attribute((interrupt))   ;



void __vector_14(void ) __attribute((interrupt))   ;
# 56 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__clear(void );
#line 51
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable(void );
#line 70
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__edge(bool low_to_high);
#line 46
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__enable(void );
# 68 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__fired(void );
# 15 "/usr/src/tinyos/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__enable(bool rising);
#line 29
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge(void );



static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__disable(void );




static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void );
# 48 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
static void HplAtm128InterruptSigP__IntSig6__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig1__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig4__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig7__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig2__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig5__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig0__fired(void );
#line 48
static void HplAtm128InterruptSigP__IntSig3__fired(void );
# 55 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
void __vector_1(void ) __attribute((signal))   ;




void __vector_2(void ) __attribute((signal))   ;




void __vector_3(void ) __attribute((signal))   ;




void __vector_4(void ) __attribute((signal))   ;




void __vector_5(void ) __attribute((signal))   ;




void __vector_6(void ) __attribute((signal))   ;




void __vector_7(void ) __attribute((signal))   ;




void __vector_8(void ) __attribute((signal))   ;
# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired(void );
# 70 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired(void );
# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired(void );
# 70 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired(void );
# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired(void );
# 70 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired(void );
# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__fired(void );
# 70 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired(void );
# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__fired(void );
# 70 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__default__fired(void );
# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__fired(void );
# 70 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__default__fired(void );
# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__fired(void );
# 50 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__clear(void );
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__enable(void );
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__disable(void );



static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__edge(bool low_to_high);
#line 70
static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired(void );
# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__fired(void );
# 70 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired(void );

static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__default__fired(void );
# 43 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static bool HplCC2420InterruptsP__CC_CCA__get(void );
# 68 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
static void HplCC2420InterruptsP__CCA__fired(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t HplCC2420InterruptsP__CCATask__postTask(void );
# 69 "/usr/src/tinyos/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
enum HplCC2420InterruptsP____nesc_unnamed4398 {
#line 69
  HplCC2420InterruptsP__CCATask = 20U
};
#line 69
typedef int HplCC2420InterruptsP____nesc_sillytask_CCATask[HplCC2420InterruptsP__CCATask];
#line 56
uint8_t HplCC2420InterruptsP__ccaWaitForState;

uint8_t HplCC2420InterruptsP__ccaLastState;

bool HplCC2420InterruptsP__ccaCheckDisabled = FALSE;








static inline void HplCC2420InterruptsP__CCATask__runTask(void );
#line 89
static inline error_t HplCC2420InterruptsP__CCA__enableRisingEdge(void );
#line 105
static inline error_t HplCC2420InterruptsP__CCA__disable(void );
# 70 "/usr/src/tinyos/tos/interfaces/SpiPacket.nc"
static error_t CC2420SpiP__SpiPacket__send(
#line 59
uint8_t * txBuf, 

uint8_t * rxBuf, 








uint16_t len);
# 91 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static void CC2420SpiP__Fifo__writeDone(
# 46 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2ab71e3eaca8, 
# 91 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
#line 71
static void CC2420SpiP__Fifo__readDone(
# 46 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2ab71e3eaca8, 
# 71 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
uint8_t * data, uint8_t length, error_t error);
# 24 "/usr/src/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420SpiP__ChipSpiResource__releasing(void );
# 45 "/usr/src/tinyos/tos/interfaces/SpiByte.nc"
static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx);
# 56 "/usr/src/tinyos/tos/interfaces/State.nc"
static void CC2420SpiP__WorkingState__toIdle(void );




static bool CC2420SpiP__WorkingState__isIdle(void );
#line 45
static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState);
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420SpiP__SpiResource__release(void );
#line 97
static error_t CC2420SpiP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420SpiP__SpiResource__request(void );
#line 128
static bool CC2420SpiP__SpiResource__isOwner(void );
#line 102
static void CC2420SpiP__Resource__granted(
# 45 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
uint8_t arg_0x2ab71e3eba68);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t CC2420SpiP__grant__postTask(void );
# 88 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
enum CC2420SpiP____nesc_unnamed4399 {
#line 88
  CC2420SpiP__grant = 21U
};
#line 88
typedef int CC2420SpiP____nesc_sillytask_grant[CC2420SpiP__grant];
#line 63
enum CC2420SpiP____nesc_unnamed4400 {
  CC2420SpiP__RESOURCE_COUNT = 2U, 
  CC2420SpiP__NO_HOLDER = 0xFF
};


enum CC2420SpiP____nesc_unnamed4401 {
  CC2420SpiP__S_IDLE, 
  CC2420SpiP__S_BUSY
};


uint16_t CC2420SpiP__m_addr;


uint8_t CC2420SpiP__m_requests = 0;


uint8_t CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;


bool CC2420SpiP__release;


static error_t CC2420SpiP__attemptRelease(void );







static inline void CC2420SpiP__ChipSpiResource__abortRelease(void );






static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void );




static error_t CC2420SpiP__Resource__request(uint8_t id);
#line 126
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id);
#line 149
static error_t CC2420SpiP__Resource__release(uint8_t id);
#line 178
static bool CC2420SpiP__Resource__isOwner(uint8_t id);





static inline void CC2420SpiP__SpiResource__granted(void );




static inline cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 209
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len);



static cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len);
#line 260
static inline cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len);
#line 287
static cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data);
#line 305
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data);
#line 318
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr);










static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error);








static error_t CC2420SpiP__attemptRelease(void );
#line 358
static inline void CC2420SpiP__grant__runTask(void );








static inline void CC2420SpiP__Resource__default__granted(uint8_t id);


static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error);


static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error);
# 74 "/usr/src/tinyos/tos/system/StateImplP.nc"
uint8_t StateImplP__state[1U];

enum StateImplP____nesc_unnamed4402 {
  StateImplP__S_IDLE = 0
};


static inline error_t StateImplP__Init__init(void );
#line 96
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState);
#line 118
static inline void StateImplP__State__toIdle(uint8_t id);







static inline bool StateImplP__State__isIdle(uint8_t id);






static inline bool StateImplP__State__isState(uint8_t id, uint8_t myState);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t Atm128SpiP__zeroTask__postTask(void );
# 82 "/usr/src/tinyos/tos/interfaces/SpiPacket.nc"
static void Atm128SpiP__SpiPacket__sendDone(
#line 75
uint8_t * txBuf, 
uint8_t * rxBuf, 





uint16_t len, 
error_t error);
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__release(
# 99 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2ab71e4b4060);
# 97 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__immediateRequest(
# 99 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2ab71e4b4060);
# 88 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t Atm128SpiP__ResourceArbiter__request(
# 99 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2ab71e4b4060);
# 128 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static bool Atm128SpiP__ResourceArbiter__isOwner(
# 99 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2ab71e4b4060);
# 89 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
static void Atm128SpiP__Spi__sleep(void );
#line 83
static void Atm128SpiP__Spi__initMaster(void );
#line 113
static void Atm128SpiP__Spi__enableInterrupt(bool enabled);
#line 97
static uint8_t Atm128SpiP__Spi__read(void );
#line 141
static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on);
#line 131
static void Atm128SpiP__Spi__setClock(uint8_t speed);




static bool Atm128SpiP__Spi__isInterruptPending(void );
#line 125
static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle);
#line 103
static void Atm128SpiP__Spi__write(uint8_t data);
#line 116
static void Atm128SpiP__Spi__enableSpi(bool busOn);
#line 128
static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing);
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void Atm128SpiP__Resource__granted(
# 95 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
uint8_t arg_0x2ab71e4d1ae0);
# 90 "/usr/src/tinyos/tos/interfaces/ArbiterInfo.nc"
static bool Atm128SpiP__ArbiterInfo__inUse(void );
# 52 "/usr/src/tinyos/tos/interfaces/McuPowerState.nc"
static void Atm128SpiP__McuPowerState__update(void );
# 296 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
enum Atm128SpiP____nesc_unnamed4403 {
#line 296
  Atm128SpiP__zeroTask = 22U
};
#line 296
typedef int Atm128SpiP____nesc_sillytask_zeroTask[Atm128SpiP__zeroTask];
#line 105
uint16_t Atm128SpiP__len;
uint8_t * Atm128SpiP__txBuffer;
uint8_t * Atm128SpiP__rxBuffer;
uint16_t Atm128SpiP__pos;

enum Atm128SpiP____nesc_unnamed4404 {
  Atm128SpiP__SPI_IDLE, 
  Atm128SpiP__SPI_BUSY, 
  Atm128SpiP__SPI_ATOMIC_SIZE = 10
};
#line 126
enum Atm128SpiP____nesc_unnamed4405 {
  Atm128SpiP__PLATFORM_MHZ = 8
};


static void Atm128SpiP__startSpi(void );
#line 167
static inline void Atm128SpiP__stopSpi(void );







static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx);
#line 251
static error_t Atm128SpiP__sendNextPart(void );
#line 296
static inline void Atm128SpiP__zeroTask__runTask(void );
#line 330
static error_t Atm128SpiP__SpiPacket__send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen);
#line 354
static inline void Atm128SpiP__Spi__dataReady(uint8_t data);
#line 394
static inline error_t Atm128SpiP__Resource__immediateRequest(uint8_t id);







static inline error_t Atm128SpiP__Resource__request(uint8_t id);








static inline error_t Atm128SpiP__Resource__release(uint8_t id);









static inline bool Atm128SpiP__Resource__isOwner(uint8_t id);



static inline void Atm128SpiP__ResourceArbiter__granted(uint8_t id);



static inline void Atm128SpiP__Resource__default__granted(uint8_t id);
# 44 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MISO__makeInput(void );

static void HplAtm128SpiP__SCK__makeOutput(void );
#line 46
static void HplAtm128SpiP__SS__makeOutput(void );
# 52 "/usr/src/tinyos/tos/interfaces/McuPowerState.nc"
static void HplAtm128SpiP__Mcu__update(void );
# 109 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
static void HplAtm128SpiP__SPI__dataReady(uint8_t data);
# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void HplAtm128SpiP__MOSI__makeOutput(void );
# 96 "/usr/src/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void );
#line 112
static inline void HplAtm128SpiP__SPI__sleep(void );


static inline uint8_t HplAtm128SpiP__SPI__read(void );
static inline void HplAtm128SpiP__SPI__write(uint8_t d);


void __vector_17(void ) __attribute((signal))   ;




static inline bool HplAtm128SpiP__SPI__isInterruptPending(void );







static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled);
#line 147
static void HplAtm128SpiP__SPI__enableSpi(bool enabled);
#line 173
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster);
#line 186
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle);
#line 200
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing);
#line 217
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v);
#line 230
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on);
# 49 "/usr/src/tinyos/tos/system/FcfsResourceQueueC.nc"
enum /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0____nesc_unnamed4406 {
#line 49
  FcfsResourceQueueC__0__NO_ENTRY = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[1U];
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
uint8_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void );




static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void );



static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id);



static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void );
#line 82
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id);
# 53 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(
# 52 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ab71e586408);
# 61 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(
# 52 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ab71e586408);
# 65 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(
# 56 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ab71e584920);
# 59 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(
# 56 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ab71e584920);
# 79 "/usr/src/tinyos/tos/interfaces/ResourceQueue.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id);
#line 53
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void );
#line 70
static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void );
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(
# 51 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
uint8_t arg_0x2ab71e587258);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void );
# 69 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4407 {
#line 69
  SimpleArbiterP__0__grantedTask = 23U
};
#line 69
typedef int /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_sillytask_grantedTask[/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask];
#line 62
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4408 {
#line 62
  SimpleArbiterP__0__RES_IDLE = 0, SimpleArbiterP__0__RES_GRANTING = 1, SimpleArbiterP__0__RES_BUSY = 2
};
#line 63
enum /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0____nesc_unnamed4409 {
#line 63
  SimpleArbiterP__0__NO_RES = 0xFF
};
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
uint8_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId;



static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id);
#line 84
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id);
#line 97
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id);
#line 124
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void );
#line 148
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(uint8_t id);






static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void );
#line 167
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id);

static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id);
# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void HplCC2420SpiP__SS__makeOutput(void );
#line 40
static void HplCC2420SpiP__SS__set(void );
static void HplCC2420SpiP__SS__clr(void );
# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static void HplCC2420SpiP__Resource__granted(void );
#line 120
static error_t HplCC2420SpiP__SubResource__release(void );
#line 97
static error_t HplCC2420SpiP__SubResource__immediateRequest(void );
#line 88
static error_t HplCC2420SpiP__SubResource__request(void );
#line 128
static bool HplCC2420SpiP__SubResource__isOwner(void );
# 51 "/usr/src/tinyos/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP__Resource__request(void );




static inline error_t HplCC2420SpiP__Resource__immediateRequest(void );










static inline void HplCC2420SpiP__SubResource__granted(void );







static inline error_t HplCC2420SpiP__Resource__release(void );







static inline bool HplCC2420SpiP__Resource__isOwner(void );
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void );
# 54 "/usr/src/tinyos/tos/interfaces/GpioCapture.nc"
static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void );
#line 66
static void CC2420TransmitP__CaptureSFD__disable(void );
#line 53
static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void );
# 55 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420TransmitP__CC2420Receive__sfd_dropped(void );
#line 49
static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time);
# 31 "/usr/src/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
static void CC2420TransmitP__ChipSpiResource__abortRelease(void );







static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void );
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void );
# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__CSN__makeOutput(void );
#line 40
static void CC2420TransmitP__CSN__set(void );
static void CC2420TransmitP__CSN__clr(void );


static void CC2420TransmitP__CCA__makeInput(void );
#line 43
static bool CC2420TransmitP__CCA__get(void );
# 41 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
static void CC2420TransmitP__CC2420Tx__loadTXFIFODone(ieee154_txframe_t *data, error_t error);


static void CC2420TransmitP__CC2420Tx__sendDone(ieee154_txframe_t *frame, bool ackPendingFlag, error_t error);





static void CC2420TransmitP__CC2420Tx__transmissionStarted(ieee154_txframe_t *data);
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__SNOP__strobe(void );
# 44 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void CC2420TransmitP__SFD__makeInput(void );
#line 43
static bool CC2420TransmitP__SFD__get(void );
# 47 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CaptureTime.nc"
static uint32_t CC2420TransmitP__CaptureTime__getTimestamp(uint16_t SFDCaptureTime);








static uint16_t CC2420TransmitP__CaptureTime__getSFDUptime(uint16_t SFDCaptureTime, uint16_t EFDCaptureTime);
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void CC2420TransmitP__BackoffAlarm__start(CC2420TransmitP__BackoffAlarm__size_type dt);






static void CC2420TransmitP__BackoffAlarm__stop(void );
# 82 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length);
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420TransmitP__STXON__strobe(void );
# 94 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
#line 86
typedef enum CC2420TransmitP____nesc_unnamed4410 {
  CC2420TransmitP__S_STOPPED, 
  CC2420TransmitP__S_STARTED, 
  CC2420TransmitP__S_LOAD, 
  CC2420TransmitP__S_READY_TX, 
  CC2420TransmitP__S_SFD, 
  CC2420TransmitP__S_EFD, 
  CC2420TransmitP__S_ACK_WAIT
} CC2420TransmitP__cc2420_transmit_state_t;





enum CC2420TransmitP____nesc_unnamed4411 {
  CC2420TransmitP__CC2420_ABORT_PERIOD = 320 * 3
};

ieee154_txframe_t *CC2420TransmitP__m_frame;

CC2420TransmitP__cc2420_transmit_state_t CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;

bool CC2420TransmitP__m_receiving = FALSE;

uint16_t CC2420TransmitP__m_prev_time;


bool CC2420TransmitP__sfdHigh;


bool CC2420TransmitP__abortSpiRelease;


static inline void CC2420TransmitP__signalDone(bool ackFramePending, error_t err);


static inline error_t CC2420TransmitP__Init__init(void );







static error_t CC2420TransmitP__AsyncStdControl__start(void );










static error_t CC2420TransmitP__AsyncStdControl__stop(void );
#line 154
static inline error_t CC2420TransmitP__CC2420Tx__loadTXFIFO(ieee154_txframe_t *data);
#line 172
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);
#line 190
static error_t CC2420TransmitP__CC2420Tx__send(bool cca);
#line 245
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time);
#line 327
static inline bool CC2420TransmitP__CC2420Tx__cca(void );
#line 341
static inline void CC2420TransmitP__CC2420Tx__lockChipSpi(void );




static inline void CC2420TransmitP__CC2420Tx__unlockChipSpi(void );




static inline void CC2420TransmitP__ChipSpiResource__releasing(void );
#line 363
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ackFrame);
#line 375
static inline void CC2420TransmitP__BackoffAlarm__fired(void );
#line 410
static inline void CC2420TransmitP__signalDone(bool ackFramePending, error_t err);





static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error);
# 43 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFO__get(void );
# 90 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
static bool CC2420ReceiveP__CC2420Config__isPromiscuousModeEnabled(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t CC2420ReceiveP__receiveDone_task__postTask(void );
# 43 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static bool CC2420ReceiveP__FIFOP__get(void );
# 45 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Rx.nc"
static message_t *CC2420ReceiveP__CC2420Rx__received(message_t *data);
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t CC2420ReceiveP__stopContinueTask__postTask(void );
# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message);
# 132 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
static void CC2420ReceiveP__AsyncSplitControl__stopDone(error_t error);
# 40 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
static void CC2420ReceiveP__CSN__set(void );
static void CC2420ReceiveP__CSN__clr(void );
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
static error_t CC2420ReceiveP__SpiResource__release(void );
#line 97
static error_t CC2420ReceiveP__SpiResource__immediateRequest(void );
#line 88
static error_t CC2420ReceiveP__SpiResource__request(void );
#line 128
static bool CC2420ReceiveP__SpiResource__isOwner(void );
# 62 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length);
#line 51
static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length);
# 61 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
static error_t CC2420ReceiveP__InterruptFIFOP__disable(void );
#line 54
static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void );
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void );
# 48 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
static error_t CC2420ReceiveP__FrameUtility__getMHRLength(uint8_t fcf1, uint8_t fcf2, uint8_t *len);
# 121 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
enum CC2420ReceiveP____nesc_unnamed4412 {
#line 121
  CC2420ReceiveP__stopContinueTask = 24U
};
#line 121
typedef int CC2420ReceiveP____nesc_sillytask_stopContinueTask[CC2420ReceiveP__stopContinueTask];

enum CC2420ReceiveP____nesc_unnamed4413 {
#line 123
  CC2420ReceiveP__receiveDone_task = 25U
};
#line 123
typedef int CC2420ReceiveP____nesc_sillytask_receiveDone_task[CC2420ReceiveP__receiveDone_task];
#line 73
#line 65
typedef enum CC2420ReceiveP____nesc_unnamed4414 {
  CC2420ReceiveP__S_STOPPED, 
  CC2420ReceiveP__S_STARTING, 
  CC2420ReceiveP__S_STARTED, 
  CC2420ReceiveP__S_RX_LENGTH, 
  CC2420ReceiveP__S_RX_FCF, 
  CC2420ReceiveP__S_RX_HEADER, 
  CC2420ReceiveP__S_RX_PAYLOAD
} CC2420ReceiveP__cc2420_receive_state_t;

enum CC2420ReceiveP____nesc_unnamed4415 {
  CC2420ReceiveP__RXFIFO_SIZE = 128, 
  CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE = 8, 

  CC2420ReceiveP__SACK_HEADER_LENGTH = 3
};

uint32_t CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE];
uint8_t CC2420ReceiveP__m_timestamp_head;

uint8_t CC2420ReceiveP__m_timestamp_size;


uint8_t CC2420ReceiveP__m_missed_packets;


bool CC2420ReceiveP__receivingPacket;


uint8_t CC2420ReceiveP__rxFrameLength;

uint8_t CC2420ReceiveP__m_bytes_left;





CC2420ReceiveP__cc2420_receive_state_t CC2420ReceiveP__m_state;


message_t CC2420ReceiveP__m_frame;
message_t *CC2420ReceiveP__m_rxFramePtr;
uint8_t CC2420ReceiveP__m_mhrLen;

bool CC2420ReceiveP__m_stop;


static void CC2420ReceiveP__reset_state(void );
static void CC2420ReceiveP__beginReceive(void );
static void CC2420ReceiveP__receive(void );
static void CC2420ReceiveP__waitForNextPacket(void );
static void CC2420ReceiveP__flush(void );



static void CC2420ReceiveP__continueStop(void );





static inline error_t CC2420ReceiveP__Init__init(void );
#line 143
static error_t CC2420ReceiveP__AsyncSplitControl__start(void );
#line 172
static error_t CC2420ReceiveP__AsyncSplitControl__stop(void );
#line 189
static void CC2420ReceiveP__continueStop(void );
#line 201
static inline void CC2420ReceiveP__stopContinueTask__runTask(void );
#line 214
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time);









static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void );








static inline void CC2420ReceiveP__InterruptFIFOP__fired(void );
#line 246
static inline void CC2420ReceiveP__SpiResource__granted(void );
#line 261
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error);
#line 391
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error);







static inline void CC2420ReceiveP__receiveDone_task__runTask(void );
#line 430
static void CC2420ReceiveP__beginReceive(void );
#line 453
static void CC2420ReceiveP__flush(void );
#line 470
static void CC2420ReceiveP__receive(void );
#line 482
static void CC2420ReceiveP__waitForNextPacket(void );
#line 514
static void CC2420ReceiveP__reset_state(void );
# 104 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale);
#line 67
static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t);










static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void );
# 51 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void );








static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__fired(void );
# 62 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void );
#line 54
static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t);










static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void );


static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void );
# 61 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void );
# 74 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop(void );








static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size t0, /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size dt);
#line 119
static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void );






static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void );
# 82 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void );
# 87 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void );
#line 61
static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void );
# 50 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void );




static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void );









static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void );
# 64 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get(void );






static bool /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending(void );










static void /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow(void );
# 67 "/usr/src/tinyos/tos/lib/timer/TransformCounterC.nc"
/*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper;

enum /*Counter32khz32C.Transform32*/TransformCounterC__0____nesc_unnamed4416 {

  TransformCounterC__0__LOW_SHIFT_RIGHT = 0, 
  TransformCounterC__0__HIGH_SHIFT_LEFT = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type ) - /*Counter32khz32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT, 
  TransformCounterC__0__NUM_UPPER_BITS = 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type ) - 8 * sizeof(/*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type ) + 0, 



  TransformCounterC__0__OVERFLOW_MASK = /*Counter32khz32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS ? ((/*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type )2 << (/*Counter32khz32C.Transform32*/TransformCounterC__0__NUM_UPPER_BITS - 1)) - 1 : 0
};

static /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void );
#line 133
static inline void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__fired(void );
#line 103
static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__startAt(/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type t0, /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__stop(void );
# 64 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
static /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__size_type /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get(void );
# 77 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0;
/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt;

enum /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0____nesc_unnamed4417 {

  TransformAlarmC__0__MAX_DELAY_LOG2 = 8 * sizeof(/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type ) - 1 - 0, 
  TransformAlarmC__0__MAX_DELAY = (/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type )1 << /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY_LOG2
};

static inline /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(void );
#line 102
static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop(void );




static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm(void );
#line 147
static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type t0, /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt);









static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt);




static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired(void );
#line 177
static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__fired(void );
#line 66
static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__start(/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__size_type dt);






static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__stop(void );
# 52 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__start(uint32_t dt);
static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__stop(void );
static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__fired(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__Alarm__fired(
# 38 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x2ab71e87e448);
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static Alarm32khzTo62500hzTransformC__AlarmFrom__size_type Alarm32khzTo62500hzTransformC__AlarmFrom__getNow(
# 39 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x2ab71e87ac38);
# 88 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static bool Alarm32khzTo62500hzTransformC__AlarmFrom__isRunning(
# 39 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x2ab71e87ac38);
# 116 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static Alarm32khzTo62500hzTransformC__AlarmFrom__size_type Alarm32khzTo62500hzTransformC__AlarmFrom__getAlarm(
# 39 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x2ab71e87ac38);
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__AlarmFrom__start(
# 39 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x2ab71e87ac38, 
# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
Alarm32khzTo62500hzTransformC__AlarmFrom__size_type dt);






static void Alarm32khzTo62500hzTransformC__AlarmFrom__stop(
# 39 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
uint8_t arg_0x2ab71e87ac38);
#line 55
static inline void Alarm32khzTo62500hzTransformC__Alarm__start(uint8_t num, uint32_t dt);
static inline void Alarm32khzTo62500hzTransformC__Alarm__stop(uint8_t num);
static inline void Alarm32khzTo62500hzTransformC__AlarmFrom__fired(uint8_t num);
static inline bool Alarm32khzTo62500hzTransformC__Alarm__isRunning(uint8_t num);
static inline uint32_t Alarm32khzTo62500hzTransformC__Alarm__getAlarm(uint8_t num);

static inline uint32_t Alarm32khzTo62500hzTransformC__Alarm__getNow(uint8_t num);





static void Alarm32khzTo62500hzTransformC__Alarm__startAt(uint8_t num, uint32_t t0, uint32_t dt);
#line 84
static void Alarm32khzTo62500hzTransformC__AlarmFrom__default__start(uint8_t num, uint32_t dt);
static void Alarm32khzTo62500hzTransformC__AlarmFrom__default__stop(uint8_t num);
static bool Alarm32khzTo62500hzTransformC__AlarmFrom__default__isRunning(uint8_t num);
static void Alarm32khzTo62500hzTransformC__Alarm__default__fired(uint8_t num);

static uint32_t Alarm32khzTo62500hzTransformC__AlarmFrom__default__getNow(uint8_t num);
static inline uint32_t Alarm32khzTo62500hzTransformC__AlarmFrom__default__getAlarm(uint8_t num);
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__Alarm__fired(void );
# 62 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__reset(void );
#line 54
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__set(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__size_type t);










static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__start(void );


static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__stop(void );
# 61 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__timer_size /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__get(void );
# 74 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__Alarm__stop(void );








static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__Alarm__startAt(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__timer_size t0, /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__timer_size dt);
#line 119
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__fired(void );






static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__overflow(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Alarm__fired(void );
#line 103
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__AlarmFrom__startAt(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__AlarmFrom__size_type t0, /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__AlarmFrom__size_type dt);
#line 73
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__AlarmFrom__stop(void );
# 64 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
static /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Counter__size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Counter__get(void );
# 77 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__to_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__m_t0;
/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__to_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__m_dt;

enum /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1____nesc_unnamed4418 {

  TransformAlarmC__1__MAX_DELAY_LOG2 = 8 * sizeof(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__from_size_type ) - 1 - 0, 
  TransformAlarmC__1__MAX_DELAY = (/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__to_size_type )1 << /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__MAX_DELAY_LOG2
};

static inline /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__to_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Alarm__getNow(void );
#line 102
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Alarm__stop(void );




static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__set_alarm(void );
#line 147
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Alarm__startAt(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__to_size_type t0, /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__to_size_type dt);
#line 162
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__AlarmFrom__fired(void );
#line 177
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Counter__overflow(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__fired(
# 49 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
uint8_t arg_0x2ab71e8b71a0);
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow(void );
#line 103
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__startAt(/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type t0, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type dt);
#line 73
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__stop(void );
# 54 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
enum /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0____nesc_unnamed4419 {
  VirtualizeAlarmC__0__NUM_ALARMS = 16U
};




#line 58
typedef struct /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0____nesc_unnamed4420 {
  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type t0;
  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt;
} /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__alarm_t;
#line 80
#line 76
struct /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0____nesc_unnamed4421 {
  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__alarm_t alarm[/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__NUM_ALARMS];
  bool isset[/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__NUM_ALARMS];
  bool is_signaling;
} /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m;

static inline error_t /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Init__init(void );




static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__setNextAlarm(void );
#line 139
static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__signalAlarms(void );
#line 162
static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(uint8_t id, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt);



static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(uint8_t id);



static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__fired(void );








static bool /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__isRunning(uint8_t id);



static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(uint8_t id, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type t0, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt);








static inline /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(uint8_t id);



static /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(uint8_t id);



static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(uint8_t id);
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__Alarm__fired(void );
# 62 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Compare__reset(void );
#line 54
static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Compare__set(/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Compare__size_type t);










static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Compare__start(void );


static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Compare__stop(void );
# 61 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Timer__timer_size /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Timer__get(void );
# 83 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__Alarm__startAt(/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__timer_size t0, /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__timer_size dt);
#line 119
static inline void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Compare__fired(void );






static inline void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Timer__overflow(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__fired(void );
#line 103
static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__AlarmFrom__startAt(/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__AlarmFrom__size_type t0, /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__AlarmFrom__size_type dt);
# 64 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
static /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Counter__size_type /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Counter__get(void );
# 77 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_size_type /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__m_t0;
/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_size_type /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__m_dt;

enum /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2____nesc_unnamed4422 {

  TransformAlarmC__2__MAX_DELAY_LOG2 = 8 * sizeof(/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__from_size_type ) - 1 - 0, 
  TransformAlarmC__2__MAX_DELAY = (/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_size_type )1 << /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__MAX_DELAY_LOG2
};

static inline /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_size_type /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__getNow(void );
#line 107
static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__set_alarm(void );
#line 147
static inline void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__startAt(/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_size_type t0, /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_size_type dt);









static inline void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__start(/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_size_type dt);




static inline void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__AlarmFrom__fired(void );
#line 177
static inline void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Counter__overflow(void );
# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__fired(void );
#line 109
static /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__size_type /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__getNow(void );
#line 66
static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__start(/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__size_type dt);
# 52 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__start(uint32_t dt);

static inline void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__fired(void );



static inline uint32_t /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__getNow(void );





static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__startAt(uint32_t t0, uint32_t dt);
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static LocalTime62500hzP__Alarm__size_type LocalTime62500hzP__Alarm__getNow(void );
# 9 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/LocalTime62500hzP.nc"
static inline uint32_t LocalTime62500hzP__LocalTime__get(void );



static inline void LocalTime62500hzP__Alarm__fired(void );
# 36 "/usr/src/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
static void TKN154TimingP__ReliableWait__waitRxDone(void );



static void TKN154TimingP__ReliableWait__waitBackoffDone(void );
#line 38
static void TKN154TimingP__ReliableWait__waitTxDone(void );
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
static TKN154TimingP__CCA__data_type TKN154TimingP__CCA__getNow(void );
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static TKN154TimingP__SymbolAlarm__size_type TKN154TimingP__SymbolAlarm__getNow(void );
#line 103
static void TKN154TimingP__SymbolAlarm__startAt(TKN154TimingP__SymbolAlarm__size_type t0, TKN154TimingP__SymbolAlarm__size_type dt);
#line 66
static void TKN154TimingP__SymbolAlarm__start(TKN154TimingP__SymbolAlarm__size_type dt);
# 58 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
enum TKN154TimingP____nesc_unnamed4423 {
  TKN154TimingP__S_WAIT_OFF, 
  TKN154TimingP__S_WAIT_RX, 
  TKN154TimingP__S_WAIT_TX, 
  TKN154TimingP__S_WAIT_BACKOFF
};
uint8_t TKN154TimingP__m_state = TKN154TimingP__S_WAIT_OFF;


static inline uint32_t TKN154TimingP__CaptureTime__getTimestamp(uint16_t captured_time);










static inline uint16_t TKN154TimingP__CaptureTime__getSFDUptime(uint16_t SFDCaptureTime, uint16_t EFDCaptureTime);





static inline bool TKN154TimingP__ReliableWait__ccaOnBackoffBoundary(uint32_t slot0);





static inline void TKN154TimingP__ReliableWait__waitRx(uint32_t t0, uint32_t dt);









static inline void TKN154TimingP__ReliableWait__waitTx(uint32_t t0, uint32_t dt);









static void TKN154TimingP__ReliableWait__waitBackoff(uint32_t dt);









static inline void TKN154TimingP__SymbolAlarm__fired(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/usr/src/tinyos/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4424 {
#line 74
  AlarmToTimerC__0__fired = 26U
};
#line 74
typedef int /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__m_dt;
bool /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot;

static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x2ab71e9ec2f8);
#line 71
enum /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4425 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 27U
};
#line 71
typedef int /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4426 {

  VirtualizeTimerC__0__NUM_TIMERS = 6U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4427 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);
#line 159
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);




static inline bool /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num);
#line 184
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShotAt(uint8_t num, uint32_t t0, uint32_t dt);




static uint32_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num);
#line 204
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 52 "/usr/src/tinyos/tos/system/RandomMlcgC.nc"
uint32_t RandomMlcgC__seed;


static inline error_t RandomMlcgC__Init__init(void );
#line 69
static uint32_t RandomMlcgC__Random__rand32(void );
#line 89
static inline uint16_t RandomMlcgC__Random__rand16(void );
# 63 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
static ieee154_phyCurrentPage_t TestDeviceC__MLME_GET__phyCurrentPage(void );
# 64 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_DISASSOCIATE.nc"
static ieee154_status_t TestDeviceC__MLME_DISASSOCIATE__request(
uint8_t DeviceAddrMode, 
uint16_t DevicePANID, 
ieee154_address_t DeviceAddress, 
ieee154_disassociation_reason_t DisassociateReason, 
bool TxIndirect, 
ieee154_security_t *security);
# 106 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154BeaconFrame.nc"
static error_t TestDeviceC__BeaconFrame__parsePANDescriptor(message_t *frame, uint8_t LogicalChannel, 
uint8_t ChannelPage, ieee154_PANDescriptor_t *pdescriptor);
# 73 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
static void TestDeviceC__DisassociateTimer__startOneShot(uint32_t dt);
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_ASSOCIATE.nc"
static ieee154_status_t TestDeviceC__MLME_ASSOCIATE__request(
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
uint8_t CoordAddrMode, 
uint16_t CoordPANID, 
ieee154_address_t CoordAddress, 
ieee154_CapabilityInformation_t CapabilityInformation, 
ieee154_security_t *security);
# 72 "/usr/src/tinyos/tos/interfaces/Leds.nc"
static void TestDeviceC__Leds__led1On(void );




static void TestDeviceC__Leds__led1Off(void );
# 138 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
static ieee154_status_t TestDeviceC__MLME_SET__macPANId(ieee154_macPANId_t value);
#line 80
static ieee154_status_t TestDeviceC__MLME_SET__macAutoRequest(ieee154_macAutoRequest_t value);
#line 113
static ieee154_status_t TestDeviceC__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value);
# 87 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SCAN.nc"
static ieee154_status_t TestDeviceC__MLME_SCAN__request(
uint8_t ScanType, 
uint32_t ScanChannels, 
uint8_t ScanDuration, 
uint8_t ChannelPage, 
uint8_t EnergyDetectListNumEntries, 
int8_t *EnergyDetectList, 
uint8_t PANDescriptorListNumEntries, 
ieee154_PANDescriptor_t *PANDescriptorList, 
ieee154_security_t *security);
# 62 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SYNC.nc"
static ieee154_status_t TestDeviceC__MLME_SYNC__request(
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
bool TrackBeacon);
# 69 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RESET.nc"
static ieee154_status_t TestDeviceC__MLME_RESET__request(
bool SetDefaultPIB);
# 57 "TestDeviceC.nc"
ieee154_CapabilityInformation_t TestDeviceC__m_capabilityInformation;
ieee154_PANDescriptor_t TestDeviceC__m_PANDescriptor;
bool TestDeviceC__m_wasScanSuccessful;
static void TestDeviceC__startApp(void );

static inline void TestDeviceC__Boot__booted(void );










static inline void TestDeviceC__MLME_RESET__confirm(ieee154_status_t status);





static void TestDeviceC__startApp(void );
#line 105
static message_t *TestDeviceC__MLME_BEACON_NOTIFY__indication(message_t *frame);
#line 126
static inline void TestDeviceC__MLME_SCAN__confirm(
ieee154_status_t status, 
uint8_t ScanType, 
uint8_t ChannelPage, 
uint32_t UnscannedChannels, 
uint8_t EnergyDetectListNumEntries, 
int8_t *EnergyDetectList, 
uint8_t PANDescriptorListNumEntries, 
ieee154_PANDescriptor_t *PANDescriptorList);
#line 154
static void TestDeviceC__MLME_ASSOCIATE__confirm(
uint16_t AssocShortAddress, 
uint8_t status, 
ieee154_security_t *security);
#line 177
static inline void TestDeviceC__DisassociateTimer__fired(void );
#line 190
static inline void TestDeviceC__MLME_DISASSOCIATE__confirm(
ieee154_status_t status, 
uint8_t DeviceAddrMode, 
uint16_t DevicePANID, 
ieee154_address_t DeviceAddress);
#line 210
static inline void TestDeviceC__MLME_SYNC_LOSS__indication(
ieee154_status_t lossReason, 
uint16_t PANId, 
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
ieee154_security_t *security);




static inline void TestDeviceC__MLME_DISASSOCIATE__indication(
uint64_t DeviceAddress, 
ieee154_disassociation_reason_t DisassociateReason, 
ieee154_security_t *security);



static inline void TestDeviceC__MLME_COMM_STATUS__indication(
uint16_t PANId, 
uint8_t SrcAddrMode, 
ieee154_address_t SrcAddr, 
uint8_t DstAddrMode, 
ieee154_address_t DstAddr, 
ieee154_status_t status, 
ieee154_security_t *security);
# 92 "/usr/src/tinyos/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_disable_interrupt()
#line 92
{
   __asm volatile ("cli" :  :  : "memory");}

#line 109
#line 108
__inline   __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)(0x3F + 0x20);

#line 112
  __nesc_disable_interrupt();
   __asm volatile ("" :  :  : "memory");
  return result;
}



#line 118
__inline   void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
   __asm volatile ("" :  :  : "memory");
  * (volatile uint8_t *)(0x3F + 0x20) = original_SREG;
}

# 124 "/usr/src/tinyos/tos/system/SchedulerBasicP.nc"
static inline void SchedulerBasicP__Scheduler__init(void )
{
  /* atomic removed: atomic calls only */
  {
    memset((void *)SchedulerBasicP__m_next, SchedulerBasicP__NO_TASK, sizeof SchedulerBasicP__m_next);
    SchedulerBasicP__m_head = SchedulerBasicP__NO_TASK;
    SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
  }
}

# 57 "/usr/src/tinyos/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__init(void ){
#line 57
  SchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 69 "/usr/src/tinyos/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 90 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__TimerCtrlCapture2int(Atm128TimerCtrlCapture_t x)
#line 90
{
#line 90
  union __nesc_unnamed4428 {
#line 90
    Atm128TimerCtrlCapture_t f;
#line 90
    uint16_t t;
  } 
#line 90
  c = { .f = x };

#line 90
  return c.t;
}





static inline void HplAtm128Timer1P__TimerCtrl__setCtrlCapture(Atm128_TCCR1B_t x)
#line 97
{
  * (volatile uint8_t *)(0x2E + 0x20) = HplAtm128Timer1P__TimerCtrlCapture2int(x);
}

#line 80
static inline Atm128TimerCtrlCapture_t HplAtm128Timer1P__TimerCtrl__getCtrlCapture(void )
#line 80
{
  return * (Atm128TimerCtrlCapture_t * )& * (volatile uint8_t *)(0x2E + 0x20);
}

#line 70
static inline void HplAtm128Timer1P__Timer__setScale(uint8_t s)
#line 70
{
  Atm128TimerCtrlCapture_t x = HplAtm128Timer1P__TimerCtrl__getCtrlCapture();

#line 72
  x.bits.cs = s;
  HplAtm128Timer1P__TimerCtrl__setCtrlCapture(x);
}

# 104 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(uint8_t scale){
#line 104
  HplAtm128Timer1P__Timer__setScale(scale);
#line 104
}
#line 104
# 140 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Timer__start(void )
#line 140
{
#line 140
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 2;
}

# 78 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start(void ){
#line 78
  HplAtm128Timer1P__Timer__start();
#line 78
}
#line 78
# 61 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Timer__set(uint16_t t)
#line 61
{
#line 61
  * (volatile uint16_t *)(0x2C + 0x20) = t;
}

# 67 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(/*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__timer_size t){
#line 67
  HplAtm128Timer1P__Timer__set(t);
#line 67
}
#line 67
# 51 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline error_t /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init(void )
#line 51
{
  /* atomic removed: atomic calls only */
#line 52
  {
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__set(0);
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__start();
    /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__setScale(4);
  }
  return SUCCESS;
}

# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
inline static error_t MotePlatformP__SubInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*InitOneP.InitOne*/Atm128TimerInitC__0__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 56 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 4);
}

# 41 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__clr();
#line 41
}
#line 41
# 59 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )58U &= ~(1 << 4);
}

# 44 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void MotePlatformP__SerialIdPin__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortA.Bit4*/HplAtm128GeneralIOPinP__4__IO__makeInput();
#line 44
}
#line 44
# 49 "/usr/src/tinyos/tos/platforms/micaz/MotePlatformP.nc"
static inline error_t MotePlatformP__PlatformInit__init(void )
#line 49
{

  * (volatile uint8_t *)(0x15 + 0x20) = 0;
  * (volatile uint8_t *)(0x14 + 0x20) = 0xff;


  MotePlatformP__SerialIdPin__makeInput();
  MotePlatformP__SerialIdPin__clr();

  return MotePlatformP__SubInit__init();
}

# 55 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 0;
}

# 40 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__set();
#line 40
}
#line 40
# 55 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 1;
}

# 40 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__set();
#line 40
}
#line 40
# 55 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 2;
}

# 40 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__set();
#line 40
}
#line 40
# 61 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 0;
}

# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led2__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit0*/HplAtm128GeneralIOPinP__0__IO__makeOutput();
#line 46
}
#line 46
# 61 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 1;
}

# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__makeOutput();
#line 46
}
#line 46
# 61 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 2;
}

# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led0__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit2*/HplAtm128GeneralIOPinP__2__IO__makeOutput();
#line 46
}
#line 46
# 56 "/usr/src/tinyos/tos/system/LedsP.nc"
static inline error_t LedsP__Init__init(void )
#line 56
{
  /* atomic removed: atomic calls only */
#line 57
  {
    ;
    LedsP__Led0__makeOutput();
    LedsP__Led1__makeOutput();
    LedsP__Led2__makeOutput();
    LedsP__Led0__set();
    LedsP__Led1__set();
    LedsP__Led2__set();
  }
  return SUCCESS;
}

# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
inline static error_t PlatformP__MoteInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = LedsP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, MotePlatformP__PlatformInit__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 41 "/usr/src/tinyos/tos/platforms/mica/MeasureClockC.nc"
static inline error_t MeasureClockC__Init__init(void )
#line 41
{
  /* atomic removed: atomic calls only */



  {
    uint8_t now;
#line 47
    uint8_t wraps;
    uint16_t start;


    * (volatile uint8_t *)(0x2E + 0x20) = 1 << 0;
    * (volatile uint8_t *)(0x30 + 0x20) = 1 << 3;
    * (volatile uint8_t *)(0x33 + 0x20) = (1 << 1) | (1 << 0);




    start = * (volatile uint16_t *)(0x2C + 0x20);
    for (wraps = MeasureClockC__MAGIC / 2; wraps; ) 
      {
        uint16_t next = * (volatile uint16_t *)(0x2C + 0x20);

        if (next < start) {
          wraps--;
          }
#line 65
        start = next;
      }


    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;


    start = * (volatile uint16_t *)(0x2C + 0x20);
    now = * (volatile uint8_t *)(0x32 + 0x20);
    while (* (volatile uint8_t *)(0x32 + 0x20) == now) ;
    MeasureClockC__cycles = * (volatile uint16_t *)(0x2C + 0x20);

    MeasureClockC__cycles = (MeasureClockC__cycles - start + 16) >> 5;


    * (volatile uint8_t *)(0x30 + 0x20) = * (volatile uint8_t *)(0x2E + 0x20) = * (volatile uint8_t *)(0x33 + 0x20) = 0;
    * (volatile uint8_t *)(0x32 + 0x20) = 0;
    * (volatile uint16_t *)(0x2C + 0x20) = 0;
    * (volatile uint8_t *)0x7C = * (volatile uint8_t *)(0x36 + 0x20) = 0xff;
    while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
      ;
  }
  return SUCCESS;
}

# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
inline static error_t PlatformP__MeasureClock__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = MeasureClockC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 51 "/usr/src/tinyos/tos/platforms/mica/PlatformP.nc"
static inline error_t PlatformP__Init__init(void )
{
  error_t ok;


  ok = PlatformP__MeasureClock__init();
  ok = ecombine(ok, PlatformP__MoteInit__init());

  return ok;
}

# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
inline static error_t RealMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformP__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/usr/src/tinyos/tos/interfaces/Scheduler.nc"
inline static bool RealMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  Alarm32khzTo62500hzTransformC__Alarm__startAt(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__15__CLIENT_ID, t0, dt);
#line 103
}
#line 103
# 58 "/usr/src/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__m_dt = dt;
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot = oneshot;
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}

#line 93
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 56 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline void Alarm32khzTo62500hzTransformC__Alarm__stop(uint8_t num)
#line 56
{
#line 56
  Alarm32khzTo62500hzTransformC__AlarmFrom__stop(num);
}

# 73 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  Alarm32khzTo62500hzTransformC__Alarm__stop(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__15__CLIENT_ID);
#line 73
}
#line 73
# 71 "/usr/src/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 61 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline uint32_t Alarm32khzTo62500hzTransformC__Alarm__getNow(uint8_t num)
#line 61
{


  return Alarm32khzTo62500hzTransformC__AlarmFrom__getNow(num) << 1;
}

# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = Alarm32khzTo62500hzTransformC__Alarm__getNow(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__15__CLIENT_ID);
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/usr/src/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 100 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 64 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
inline static /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Counter__size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__to_size_type /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Alarm__getNow(void )
{
  return /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Counter__get();
}

# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 192 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static inline /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(uint8_t id)
#line 192
{
  return /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow();
}

# 58 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__Timer__get(void )
#line 58
{
#line 58
  return * (volatile uint16_t *)(0x2C + 0x20);
}

# 61 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get(void ){
#line 61
  unsigned short __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer1P__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 50 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline /*CounterOne16C.NCounter*/Atm128CounterC__0__timer_size /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__get();
}

# 64 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
inline static /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get(void ){
#line 64
  unsigned short __nesc_result;
#line 64

#line 64
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 103 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline Atm128_TIFR_t HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag(void )
#line 103
{
  return * (Atm128_TIFR_t *)& * (volatile uint8_t *)(0x36 + 0x20);
}

# 53 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag(void ){
#line 53
  union __nesc_unnamed4274 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128Timer0AsyncP__TimerCtrl__getInterruptFlag();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 153 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline bool HplAtm128Timer1P__Timer__test(void )
#line 153
{
  return HplAtm128Timer1P__Timer0Ctrl__getInterruptFlag().bits.tov1;
}

# 87 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = HplAtm128Timer1P__Timer__test();
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 55 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline bool /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending(void )
{
  return /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__test();
}

# 71 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
inline static bool /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending(void ){
#line 71
  unsigned char __nesc_result;
#line 71

#line 71
  __nesc_result = /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__isOverflowPending();
#line 71

#line 71
  return __nesc_result;
#line 71
}
#line 71
# 166 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(uint8_t id)
#line 166
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 167
    /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id] = FALSE;
#line 167
    __nesc_atomic_end(__nesc_atomic); }
}

# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static error_t ScanP__RadioOff__off(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = RadioControlImplP__MacRadioOff__off(0);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 145 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static bool ScanP__RadioToken__isOwner(void ){
#line 145
  unsigned char __nesc_result;
#line 145

#line 145
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__isOwner(0);
#line 145

#line 145
  return __nesc_result;
#line 145
}
#line 145
# 424 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline void ScanP__ScanTimer__fired(void )
{
  if (ScanP__RadioToken__isOwner()) {
    ScanP__RadioOff__off();
    }
}

# 131 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoBeaconTransmitP.nc"
static inline void NoBeaconTransmitP__BeaconPayloadUpdateTimer__fired(void )
{
}

# 327 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_leuint16(void * target, uint16_t value)
#line 327
{
  uint8_t *base = target;

#line 329
  base[0] = value;
  base[1] = value >> 8;
  return value;
}

# 300 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macPANId_t PibP__MLME_GET__macPANId(void )
#line 300
{
#line 300
  return PibP__m_pib.macPANId;
}

# 120 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macPANId_t AssociateP__MLME_GET__macPANId(void ){
#line 120
  unsigned short __nesc_result;
#line 120

#line 120
  __nesc_result = PibP__MLME_GET__macPANId();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
inline static ieee154_status_t AssociateP__DataRequest__poll(uint8_t CoordAddrMode, uint16_t CoordPANId, uint8_t *CoordAddressLE, uint8_t SrcAddrMode){
#line 46
  enum ieee154_status __nesc_result;
#line 46

#line 46
  __nesc_result = PollP__DataRequest__poll(1U, CoordAddrMode, CoordPANId, CoordAddressLE, SrcAddrMode);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 1044 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__FrameUtility__copyCoordExtendedAddressLE(uint8_t *destLE)
{
  PibP__FrameUtility__convertToLE(destLE, & PibP__m_pib.macCoordExtendedAddress);
}

# 58 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static void AssociateP__FrameUtility__copyCoordExtendedAddressLE(uint8_t *destLE){
#line 58
  PibP__FrameUtility__copyCoordExtendedAddressLE(destLE);
#line 58
}
#line 58
# 290 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macCoordShortAddress_t PibP__MLME_GET__macCoordShortAddress(void )
#line 290
{
#line 290
  return PibP__m_pib.macCoordShortAddress;
}

# 105 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macCoordShortAddress_t AssociateP__MLME_GET__macCoordShortAddress(void ){
#line 105
  unsigned short __nesc_result;
#line 105

#line 105
  __nesc_result = PibP__MLME_GET__macCoordShortAddress();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 199 "/usr/src/tinyos/tos/lib/mac/tkn154/AssociateP.nc"
static inline void AssociateP__ResponseTimeout__fired(void )
{
  uint8_t coordAddress[8];
  nxle_uint16_t *shortAddress = (nxle_uint16_t *)coordAddress;

  if (!AssociateP__m_associationOngoing) {
    return;
    }


  ;
  if (AssociateP__m_coordAddrMode == ADDR_MODE_SHORT_ADDRESS) {
    __nesc_hton_leuint16((*shortAddress).nxdata, AssociateP__MLME_GET__macCoordShortAddress());
    }
  else {
#line 213
    AssociateP__FrameUtility__copyCoordExtendedAddressLE(coordAddress);
    }

  if (
#line 215
  AssociateP__DataRequest__poll(AssociateP__m_coordAddrMode, AssociateP__MLME_GET__macPANId(), 
  coordAddress, ADDR_MODE_EXTENDED_ADDRESS) != IEEE154_SUCCESS) {
      AssociateP__DataRequest__pollDone();
      ;
    }
}

# 340 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_uint32(const void * source)
#line 340
{
  const uint8_t *base = source;

#line 342
  return ((((uint32_t )base[0] << 24) | (
  (uint32_t )base[1] << 16)) | (
  (uint32_t )base[2] << 8)) | base[3];
}

# 73 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void IndirectTxP__IndirectTxTimeout__startOneShot(uint32_t dt){
#line 73
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(3U, dt);
#line 73
}
#line 73
# 40 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
inline static uint32_t IndirectTxP__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = PibP__TimeCalc__timeElapsed(t0, t1);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 123 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoBeaconTransmitP.nc"
static inline void NoBeaconTransmitP__PendingAddrSpecUpdated__notify(bool val)
{
}

# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
inline static void IndirectTxP__PendingAddrSpecUpdated__notify(IndirectTxP__PendingAddrSpecUpdated__val_t val){
#line 74
  NoBeaconTransmitP__PendingAddrSpecUpdated__notify(val);
#line 74
}
#line 74
# 261 "/usr/src/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline void DataP__IndirectTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  DataP__finishTxTransaction(txFrame, status);
}

# 172 "/usr/src/tinyos/tos/lib/mac/tkn154/DisassociateP.nc"
static inline void DisassociateP__DisassociationIndirectTx__transmitDone(ieee154_txframe_t *data, ieee154_status_t status)
{
  DisassociateP__DisassociationDirectTx__transmitDone(data, status);
}

# 385 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline void IndirectTxP__FrameTx__default__transmitDone(uint8_t client, ieee154_txframe_t *txFrame, ieee154_status_t status)
#line 385
{
}

# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static void IndirectTxP__FrameTx__transmitDone(uint8_t arg_0x2ab71d6636a0, ieee154_txframe_t *txFrame, ieee154_status_t status){
#line 51
  switch (arg_0x2ab71d6636a0) {
#line 51
    case 0U:
#line 51
      AssociateP__AssociationResponseTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 1U:
#line 51
      DisassociateP__DisassociationIndirectTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 2U:
#line 51
      DataP__IndirectTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    default:
#line 51
      IndirectTxP__FrameTx__default__transmitDone(arg_0x2ab71d6636a0, txFrame, status);
#line 51
      break;
#line 51
    }
#line 51
}
#line 51
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
inline static bool IndirectTxP__TimeCalc__hasExpired(uint32_t t0, uint32_t dt){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = PibP__TimeCalc__hasExpired(t0, dt);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 136 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static uint32_t IndirectTxP__IndirectTxTimeout__getNow(void ){
#line 136
  unsigned long __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(3U);
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 322 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline void IndirectTxP__IndirectTxTimeout__fired(void )
{

  uint32_t now = IndirectTxP__IndirectTxTimeout__getNow();
#line 325
  uint32_t dt = 0;
  uint32_t persistenceTime = IndirectTxP__getPersistenceTimeSymbols();
  uint8_t i;

  for (i = 0; i < IndirectTxP__NUM_MAX_PENDING; i++) 
    if (IndirectTxP__m_txFrameTable[i] && IndirectTxP__m_txFrameTable[i] != IndirectTxP__m_pendingTxFrame) {
        if (IndirectTxP__TimeCalc__hasExpired(__nesc_ntoh_uint32(IndirectTxP__m_txFrameTable[i]->metadata->timestamp.nxdata), persistenceTime)) {
            ieee154_txframe_t *txFrame = IndirectTxP__m_txFrameTable[i];

#line 333
            txFrame->client &= ~IndirectTxP__SEND_THIS_FRAME;
            IndirectTxP__m_txFrameTable[i] = (void *)0;
            IndirectTxP__m_numTableEntries -= 1;
            if ((txFrame->header->mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) == FC2_DEST_MODE_SHORT) {
              IndirectTxP__m_numShortPending--;
              }
            else {
#line 338
              if ((txFrame->header->mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) == FC2_DEST_MODE_EXTENDED) {
                IndirectTxP__m_numExtPending--;
                }
              }
#line 340
            IndirectTxP__FrameTx__transmitDone(txFrame->client, txFrame, IEEE154_TRANSACTION_EXPIRED);
            IndirectTxP__PendingAddrSpecUpdated__notify(TRUE);
          }
        else {
#line 342
          if (IndirectTxP__TimeCalc__timeElapsed(__nesc_ntoh_uint32(IndirectTxP__m_txFrameTable[i]->metadata->timestamp.nxdata), now) > dt) {
              dt = IndirectTxP__TimeCalc__timeElapsed(__nesc_ntoh_uint32(IndirectTxP__m_txFrameTable[i]->metadata->timestamp.nxdata), now);
            }
          }
      }
#line 346
  if (dt != 0) {
      if (dt > persistenceTime) {
        dt = persistenceTime;
        }
#line 349
      IndirectTxP__IndirectTxTimeout__startOneShot(persistenceTime - dt);
    }
}

# 102 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RxEnableStateChange__notify(bool whatever)
#line 102
{
}

# 548 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxEnableStateChange__notify(bool whatever)
#line 548
{
#line 548
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__updateState();
}

# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
inline static void RxEnableP__RxEnableStateChange__notify(RxEnableP__RxEnableStateChange__val_t val){
#line 74
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxEnableStateChange__notify(val);
#line 74
  /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RxEnableStateChange__notify(val);
#line 74
}
#line 74
# 176 "/usr/src/tinyos/tos/lib/mac/tkn154/RxEnableP.nc"
static inline void RxEnableP__MLME_RX_ENABLE__default__confirm(ieee154_status_t status)
#line 176
{
}

# 75 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RX_ENABLE.nc"
inline static void RxEnableP__MLME_RX_ENABLE__confirm(ieee154_status_t status){
#line 75
  RxEnableP__MLME_RX_ENABLE__default__confirm(status);
#line 75
}
#line 75
# 184 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShotAt(uint8_t num, uint32_t t0, uint32_t dt)
{
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, t0, dt, TRUE);
}

# 129 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void RxEnableP__RxEnableTimer__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShotAt(4U, t0, dt);
#line 129
}
#line 129
# 139 "/usr/src/tinyos/tos/lib/mac/tkn154/RxEnableP.nc"
static inline void RxEnableP__RxEnableTimer__fired(void )
{
  if (!RxEnableP__m_isRxEnabled) {
      RxEnableP__m_isRxEnabled = TRUE;
      RxEnableP__RxEnableTimer__startOneShotAt(RxEnableP__m_rxOnAnchor, RxEnableP__m_rxOnOffset + RxEnableP__m_rxOnDuration);
    }
  else 
#line 144
    {
      RxEnableP__m_isRxEnabled = FALSE;
      if (RxEnableP__m_confirmPending) {



          RxEnableP__m_confirmPending = FALSE;
          ;
          RxEnableP__MLME_RX_ENABLE__confirm(IEEE154_SUCCESS);
        }
    }
  RxEnableP__RxEnableStateChange__notify(TRUE);
  ;
}

# 73 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void TestDeviceC__DisassociateTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(5U, dt);
#line 73
}
#line 73
# 89 "/usr/src/tinyos/tos/interfaces/Pool.nc"
inline static error_t DisassociateP__TxControlPool__put(DisassociateP__TxControlPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
inline static error_t DisassociateP__TxFramePool__put(DisassociateP__TxFramePool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static ieee154_status_t DisassociateP__DisassociationDirectTx__transmit(ieee154_txframe_t *txFrame){
#line 43
  enum ieee154_status __nesc_result;
#line 43

#line 43
  __nesc_result = /*TKN154BeaconEnabledP.CoordCapQueue*/NoDispatchQueueP__0__FrameTx__transmit(2U, txFrame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 347 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_hton_uint32(void * target, uint32_t value)
#line 347
{
  uint8_t *base = target;

#line 349
  base[3] = value;
  base[2] = value >> 8;
  base[1] = value >> 16;
  base[0] = value >> 24;
  return value;
}

# 169 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline bool /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(uint8_t num)
{
  return /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning;
}

# 92 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static bool IndirectTxP__IndirectTxTimeout__isRunning(void ){
#line 92
  unsigned char __nesc_result;
#line 92

#line 92
  __nesc_result = /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__isRunning(3U);
#line 92

#line 92
  return __nesc_result;
#line 92
}
#line 92
# 189 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline ieee154_status_t IndirectTxP__FrameTx__transmit(uint8_t client, ieee154_txframe_t *txFrame)
{

  uint8_t i;

#line 193
  if (IndirectTxP__m_numTableEntries >= IndirectTxP__NUM_MAX_PENDING) {
      ;
      return IEEE154_TRANSACTION_OVERFLOW;
    }
  txFrame->client = client;
  __nesc_hton_uint32(txFrame->metadata->timestamp.nxdata, IndirectTxP__IndirectTxTimeout__getNow());
  for (i = 0; i < IndirectTxP__NUM_MAX_PENDING; i++) 
    if (!IndirectTxP__m_txFrameTable[i]) {
      break;
      }
#line 202
  IndirectTxP__m_txFrameTable[i] = txFrame;
  IndirectTxP__m_numTableEntries += 1;
  if ((txFrame->header->mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) == FC2_DEST_MODE_SHORT) {
    IndirectTxP__m_numShortPending++;
    }
  else {
#line 206
    if ((txFrame->header->mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) == FC2_DEST_MODE_EXTENDED) {
      IndirectTxP__m_numExtPending++;
      }
    }
#line 208
  if (!IndirectTxP__IndirectTxTimeout__isRunning()) {
    IndirectTxP__IndirectTxTimeout__startOneShot(IndirectTxP__getPersistenceTimeSymbols());
    }
#line 210
  ;
  IndirectTxP__PendingAddrSpecUpdated__notify(TRUE);
  return IEEE154_SUCCESS;
}

# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static ieee154_status_t DisassociateP__DisassociationIndirectTx__transmit(ieee154_txframe_t *txFrame){
#line 43
  enum ieee154_status __nesc_result;
#line 43

#line 43
  __nesc_result = IndirectTxP__FrameTx__transmit(1U, txFrame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
inline static ieee154_status_t DisassociateP__DisassociationToCoord__transmit(ieee154_txframe_t *txFrame){
#line 43
  enum ieee154_status __nesc_result;
#line 43

#line 43
  __nesc_result = /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTx__transmit(3U, txFrame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 288 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macCoordExtendedAddress_t PibP__MLME_GET__macCoordExtendedAddress(void )
#line 288
{
#line 288
  return PibP__m_pib.macCoordExtendedAddress;
}

# 102 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macCoordExtendedAddress_t DisassociateP__MLME_GET__macCoordExtendedAddress(void ){
#line 102
  unsigned long long __nesc_result;
#line 102

#line 102
  __nesc_result = PibP__MLME_GET__macCoordExtendedAddress();
#line 102

#line 102
  return __nesc_result;
#line 102
}
#line 102



inline static ieee154_macCoordShortAddress_t DisassociateP__MLME_GET__macCoordShortAddress(void ){
#line 105
  unsigned short __nesc_result;
#line 105

#line 105
  __nesc_result = PibP__MLME_GET__macCoordShortAddress();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
#line 120
inline static ieee154_macPANId_t DisassociateP__MLME_GET__macPANId(void ){
#line 120
  unsigned short __nesc_result;
#line 120

#line 120
  __nesc_result = PibP__MLME_GET__macPANId();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 37 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static uint8_t DisassociateP__FrameUtility__writeHeader(uint8_t *mhr, uint8_t DstAddrMode, uint16_t DstPANId, ieee154_address_t *DstAddr, uint8_t SrcAddrMode, uint16_t SrcPANId, const ieee154_address_t *SrcAddr, bool PANIDCompression){
#line 37
  unsigned char __nesc_result;
#line 37

#line 37
  __nesc_result = PibP__FrameUtility__writeHeader(mhr, DstAddrMode, DstPANId, DstAddr, SrcAddrMode, SrcPANId, SrcAddr, PANIDCompression);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 1015 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline uint64_t PibP__GetLocalExtendedAddress__get(void )
{
  return PibP__m_aExtendedAddressLE;
}

# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
inline static DisassociateP__LocalExtendedAddress__val_t DisassociateP__LocalExtendedAddress__get(void ){
#line 55
  unsigned long long __nesc_result;
#line 55

#line 55
  __nesc_result = PibP__GetLocalExtendedAddress__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
inline static DisassociateP__TxControlPool__t * DisassociateP__TxControlPool__get(void ){
#line 97
  struct __nesc_unnamed4319 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
inline static DisassociateP__TxFramePool__t * DisassociateP__TxFramePool__get(void ){
#line 97
  struct __nesc_unnamed4318 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/DisassociateP.nc"
static inline ieee154_status_t DisassociateP__MLME_DISASSOCIATE__request(
uint8_t DeviceAddrMode, 
uint16_t DevicePANID, 
ieee154_address_t DeviceAddress, 
ieee154_disassociation_reason_t DisassociateReason, 
bool TxIndirect, 
ieee154_security_t *security)
{
  ieee154_status_t status = IEEE154_SUCCESS;
  ieee154_txframe_t *txFrame = 0;
  ieee154_txcontrol_t *txControl = 0;
  ieee154_address_t srcAddress;

  if (security && security->SecurityLevel) {
    status = IEEE154_UNSUPPORTED_SECURITY;
    }
  else {
#line 99
    if (DisassociateP__MLME_GET__macPANId() != DevicePANID || (
    DeviceAddrMode != ADDR_MODE_SHORT_ADDRESS && DeviceAddrMode != ADDR_MODE_EXTENDED_ADDRESS)) {
      status = IEEE154_INVALID_PARAMETER;
      }
    else {
#line 102
      if (DisassociateP__m_disAssociationOngoing || !(txFrame = DisassociateP__TxFramePool__get())) {
        status = IEEE154_TRANSACTION_OVERFLOW;
        }
      else {
#line 104
        if (!(txControl = DisassociateP__TxControlPool__get())) {
            DisassociateP__TxFramePool__put(txFrame);
            status = IEEE154_TRANSACTION_OVERFLOW;
          }
        }
      }
    }
#line 108
  if (status == IEEE154_SUCCESS) {
      txFrame->header = & txControl->header;
      txFrame->metadata = & txControl->metadata;
      srcAddress.extendedAddress = DisassociateP__LocalExtendedAddress__get();
      txFrame->headerLen = DisassociateP__FrameUtility__writeHeader(
      txFrame->header->mhr, 
      DeviceAddrMode, 
      DisassociateP__MLME_GET__macPANId(), 
      &DeviceAddress, 
      ADDR_MODE_EXTENDED_ADDRESS, 
      DisassociateP__MLME_GET__macPANId(), 
      &srcAddress, 
      TRUE);
      txFrame->header->mhr[MHR_INDEX_FC1] = (FC1_ACK_REQUEST | FC1_FRAMETYPE_CMD) | FC1_PAN_ID_COMPRESSION;
      txFrame->header->mhr[MHR_INDEX_FC2] = FC2_SRC_MODE_EXTENDED | (
      DeviceAddrMode == ADDR_MODE_SHORT_ADDRESS ? FC2_DEST_MODE_SHORT : FC2_DEST_MODE_EXTENDED);
      DisassociateP__m_payloadDisassocRequest[0] = CMD_FRAME_DISASSOCIATION_NOTIFICATION;
      DisassociateP__m_payloadDisassocRequest[1] = DisassociateReason;
      txFrame->payload = DisassociateP__m_payloadDisassocRequest;
      txFrame->payloadLen = 2;
      DisassociateP__m_disAssociationOngoing = TRUE;

      if ((
#line 129
      DeviceAddrMode == ADDR_MODE_SHORT_ADDRESS && 
      DeviceAddress.shortAddress == DisassociateP__MLME_GET__macCoordShortAddress()) || (
      DeviceAddrMode == ADDR_MODE_EXTENDED_ADDRESS && 
      DeviceAddress.extendedAddress == DisassociateP__MLME_GET__macCoordExtendedAddress())) {
          status = DisassociateP__DisassociationToCoord__transmit(txFrame);
        }
      else {
#line 134
        if (TxIndirect) {
            status = DisassociateP__DisassociationIndirectTx__transmit(txFrame);
          }
        else 
#line 136
          {
            status = DisassociateP__DisassociationDirectTx__transmit(txFrame);
          }
        }
#line 139
      if (status != IEEE154_SUCCESS) {
          DisassociateP__m_disAssociationOngoing = FALSE;
          DisassociateP__TxFramePool__put(txFrame);
          DisassociateP__TxControlPool__put(txControl);
        }
    }
  ;
  return status;
}

# 64 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_DISASSOCIATE.nc"
inline static ieee154_status_t TestDeviceC__MLME_DISASSOCIATE__request(uint8_t DeviceAddrMode, uint16_t DevicePANID, ieee154_address_t DeviceAddress, ieee154_disassociation_reason_t DisassociateReason, bool TxIndirect, ieee154_security_t *security){
#line 64
  enum ieee154_status __nesc_result;
#line 64

#line 64
  __nesc_result = DisassociateP__MLME_DISASSOCIATE__request(DeviceAddrMode, DevicePANID, DeviceAddress, DisassociateReason, TxIndirect, security);
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 177 "TestDeviceC.nc"
static inline void TestDeviceC__DisassociateTimer__fired(void )
{







  if (
#line 179
  TestDeviceC__MLME_DISASSOCIATE__request(
  TestDeviceC__m_PANDescriptor.CoordAddrMode, 
  TestDeviceC__m_PANDescriptor.CoordPANId, 
  TestDeviceC__m_PANDescriptor.CoordAddress, 
  IEEE154_DEVICE_WISHES_TO_LEAVE, 
  FALSE, 
  (void *)0)
   != IEEE154_SUCCESS) {
    TestDeviceC__DisassociateTimer__startOneShot(312500U);
    }
}

# 204 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x2ab71e9ec2f8){
#line 83
  switch (arg_0x2ab71e9ec2f8) {
#line 83
    case 0U:
#line 83
      ScanP__ScanTimer__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      NoBeaconTransmitP__BeaconPayloadUpdateTimer__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      AssociateP__ResponseTimeout__fired();
#line 83
      break;
#line 83
    case 3U:
#line 83
      IndirectTxP__IndirectTxTimeout__fired();
#line 83
      break;
#line 83
    case 4U:
#line 83
      RxEnableP__RxEnableTimer__fired();
#line 83
      break;
#line 83
    case 5U:
#line 83
      TestDeviceC__DisassociateTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x2ab71e9ec2f8);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 64 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static inline bool /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__isResetPending(void )
#line 64
{
#line 64
  return /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__m_state & /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__RESET_PENDING ? TRUE : FALSE;
}

# 69 "/usr/src/tinyos/tos/system/QueueC.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__printQueue(void )
#line 69
{
}

#line 61
static inline uint8_t /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__maxSize(void )
#line 61
{
  return 4;
}

#line 57
static inline uint8_t /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__size(void )
#line 57
{
  return /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__size;
}

#line 97
static inline error_t /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__enqueue(/*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__queue_t newVal)
#line 97
{
  if (/*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__size() < /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__maxSize()) {
      ;
      /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__queue[/*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__tail] = newVal;
      /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__tail++;
      if (/*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__tail == 4) {
#line 102
        /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__tail = 0;
        }
#line 103
      /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__size++;
      /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__printQueue();
      return SUCCESS;
    }
  else {
      return FAIL;
    }
}

# 90 "/usr/src/tinyos/tos/interfaces/Queue.nc"
inline static error_t /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__enqueue(/*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__t  newVal){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__enqueue(newVal);
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 97 "/usr/src/tinyos/tos/system/SchedulerBasicP.nc"
static inline bool SchedulerBasicP__isWaiting(uint8_t id)
{
  return SchedulerBasicP__m_next[id] != SchedulerBasicP__NO_TASK || SchedulerBasicP__m_tail == id;
}

static inline bool SchedulerBasicP__pushTask(uint8_t id)
{
  if (!SchedulerBasicP__isWaiting(id)) 
    {
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_head = id;
          SchedulerBasicP__m_tail = id;
        }
      else 
        {
          SchedulerBasicP__m_next[SchedulerBasicP__m_tail] = id;
          SchedulerBasicP__m_tail = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 282 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macBeaconOrder_t PibP__MLME_GET__macBeaconOrder(void )
#line 282
{
#line 282
  return PibP__m_pib.macBeaconOrder;
}

# 93 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macBeaconOrder_t IndirectTxP__MLME_GET__macBeaconOrder(void ){
#line 93
  unsigned char __nesc_result;
#line 93

#line 93
  __nesc_result = PibP__MLME_GET__macBeaconOrder();
#line 93

#line 93
  return __nesc_result;
#line 93
}
#line 93
# 310 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macTransactionPersistenceTime_t PibP__MLME_GET__macTransactionPersistenceTime(void )
#line 310
{
#line 310
  return PibP__m_pib.macTransactionPersistenceTime;
}

# 135 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macTransactionPersistenceTime_t IndirectTxP__MLME_GET__macTransactionPersistenceTime(void ){
#line 135
  unsigned short __nesc_result;
#line 135

#line 135
  __nesc_result = PibP__MLME_GET__macTransactionPersistenceTime();
#line 135

#line 135
  return __nesc_result;
#line 135
}
#line 135
# 92 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDispatchSlottedCsmaP.nc"
static inline ieee154_status_t /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__FrameTx__transmit(ieee154_txframe_t *frame)
#line 92
{
#line 92
  return IEEE154_TRANSACTION_OVERFLOW;
}

# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static ieee154_status_t /*TKN154BeaconEnabledP.CoordCapQueue*/NoDispatchQueueP__0__FrameTxCsma__transmit(ieee154_txframe_t *txFrame){
#line 43
  enum ieee154_status __nesc_result;
#line 43

#line 43
  __nesc_result = /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__FrameTx__transmit(txFrame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 145 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static bool /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioToken__isOwner(void ){
#line 145
  unsigned char __nesc_result;
#line 145

#line 145
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__isOwner(9);
#line 145

#line 145
  return __nesc_result;
#line 145
}
#line 145
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
inline static bool /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__TimeCalc__hasExpired(uint32_t t0, uint32_t dt){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = PibP__TimeCalc__hasExpired(t0, dt);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static LocalTime62500hzP__Alarm__size_type LocalTime62500hzP__Alarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = Alarm32khzTo62500hzTransformC__Alarm__getNow(/*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID);
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 9 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/LocalTime62500hzP.nc"
static inline uint32_t LocalTime62500hzP__LocalTime__get(void )
{
  return LocalTime62500hzP__Alarm__getNow();
}

# 61 "/usr/src/tinyos/tos/lib/timer/LocalTime.nc"
inline static uint32_t PibP__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = LocalTime62500hzP__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 58 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline bool Alarm32khzTo62500hzTransformC__Alarm__isRunning(uint8_t num)
#line 58
{
#line 58
  return Alarm32khzTo62500hzTransformC__AlarmFrom__isRunning(num);
}

# 88 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static bool /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__CapEndAlarm__isRunning(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = Alarm32khzTo62500hzTransformC__Alarm__isRunning(/*Ieee802154BeaconEnabledC.MACAlarm3*/Alarm62500hz32VirtualizedC__4__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 60 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static bool /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioOff__isOff(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = RadioControlImplP__MacRadioOff__isOff(9);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 376 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline bool CC2420TKN154P__RadioOff__isOff(void )
{
  return CC2420TKN154P__m_state == CC2420TKN154P__S_RADIO_OFF;
}

# 60 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static bool RadioControlImplP__PhyRadioOff__isOff(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = CC2420TKN154P__RadioOff__isOff();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 73 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BLEAlarm__stop(void ){
#line 73
  Alarm32khzTo62500hzTransformC__Alarm__stop(/*Ieee802154BeaconEnabledC.MACAlarm4*/Alarm62500hz32VirtualizedC__5__CLIENT_ID);
#line 73
}
#line 73
inline static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxWaitAlarm__stop(void ){
#line 73
  Alarm32khzTo62500hzTransformC__Alarm__stop(/*Ieee802154BeaconEnabledC.MACAlarm5*/Alarm62500hz32VirtualizedC__6__CLIENT_ID);
#line 73
}
#line 73
inline static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__CapEndAlarm__stop(void ){
#line 73
  Alarm32khzTo62500hzTransformC__Alarm__stop(/*Ieee802154BeaconEnabledC.MACAlarm3*/Alarm62500hz32VirtualizedC__4__CLIENT_ID);
#line 73
}
#line 73
# 333 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__stopAllAlarms(void )
{
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__CapEndAlarm__stop();
  if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__DEVICE_ROLE) {
    /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxWaitAlarm__stop();
    }
#line 338
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BLEAlarm__stop();
}

# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__signalTxDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__signalTxDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 758 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline ieee154_cap_frame_backup_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameRestore__default__getNow(void )
#line 758
{
#line 758
  return (void *)0;
}

# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
inline static /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameRestore__data_type /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameRestore__getNow(void ){
#line 51
  struct __nesc_unnamed4320 *__nesc_result;
#line 51

#line 51
  __nesc_result = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameRestore__default__getNow();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 755 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BroadcastTx__default__transmitNowDone(ieee154_txframe_t *frame, ieee154_status_t status)
#line 755
{
}

# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTxNow.nc"
inline static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BroadcastTx__transmitNowDone(ieee154_txframe_t *frame, ieee154_status_t status){
#line 53
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BroadcastTx__default__transmitNowDone(frame, status);
#line 53
}
#line 53
# 731 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__signalTxBroadcastDone(ieee154_txframe_t *frame, ieee154_status_t error)
{
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BroadcastTx__transmitNowDone(frame, error);
}

# 187 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 187
{
}

# 65 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x2ab71d622538){
#line 65
    /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x2ab71d622538);
#line 65
}
#line 65
# 446 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline void ScanP__RadioToken__transferredFrom(uint8_t id)
#line 446
{
#line 446
  while (!0) {
#line 446
      break;
    }
#line 446
  ;
}

# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t NoBeaconTransmitP__RadioToken__transferTo(uint8_t dstClient){
#line 111
  unsigned char __nesc_result;
#line 111

#line 111
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__transferTo(3, dstClient);
#line 111

#line 111
  return __nesc_result;
#line 111
}
#line 111
# 100 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoBeaconTransmitP.nc"
static inline void NoBeaconTransmitP__RadioToken__transferredFrom(uint8_t from)
#line 100
{
#line 100
  NoBeaconTransmitP__RadioToken__transferTo(RADIO_CLIENT_BEACONSYNCHRONIZE);
}

# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t BeaconSynchronizeP__signalGrantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BeaconSynchronizeP__signalGrantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 127 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static inline bool BeaconSynchronizeP__isUpdatePending(void )
#line 127
{
#line 127
  return BeaconSynchronizeP__m_state & BeaconSynchronizeP__UPDATE_PENDING ? TRUE : FALSE;
}

#line 207
static inline void BeaconSynchronizeP__RadioToken__transferredFrom(uint8_t clientFrom)
{
  ;
  if (BeaconSynchronizeP__isUpdatePending()) {
    BeaconSynchronizeP__signalGrantedTask__postTask();
    }
  else {
#line 213
    BeaconSynchronizeP__trackNextBeacon();
    }
}

# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t CoordBroadcastP__RadioToken__transferTo(uint8_t dstClient){
#line 111
  unsigned char __nesc_result;
#line 111

#line 111
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__transferTo(4, dstClient);
#line 111

#line 111
  return __nesc_result;
#line 111
}
#line 111
# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDispatchSlottedCsmaP.nc"
static inline ieee154_status_t /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__BroadcastTx__transmitNow(ieee154_txframe_t *frame)
#line 111
{
#line 111
  return IEEE154_TRANSACTION_OVERFLOW;
}

# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTxNow.nc"
inline static ieee154_status_t CoordBroadcastP__CapTransmitNow__transmitNow(ieee154_txframe_t *frame){
#line 43
  enum ieee154_status __nesc_result;
#line 43

#line 43
  __nesc_result = /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__BroadcastTx__transmitNow(frame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 162 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoBeaconTransmitP.nc"
static inline bool NoBeaconTransmitP__OutgoingSF__isBroadcastPending(void )
#line 162
{
#line 162
  return FALSE;
}

# 108 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SuperframeStructure.nc"
inline static bool CoordBroadcastP__OutgoingSF__isBroadcastPending(void ){
#line 108
  unsigned char __nesc_result;
#line 108

#line 108
  __nesc_result = NoBeaconTransmitP__OutgoingSF__isBroadcastPending();
#line 108

#line 108
  return __nesc_result;
#line 108
}
#line 108
# 107 "/usr/src/tinyos/tos/lib/mac/tkn154/CoordBroadcastP.nc"
static inline void CoordBroadcastP__RadioToken__transferredFrom(uint8_t fromClient)
{

  if (CoordBroadcastP__OutgoingSF__isBroadcastPending()) {
      ieee154_txframe_t *broadcastFrame = CoordBroadcastP__m_realignmentFrame;

#line 112
      if (broadcastFrame == (void *)0) {
        broadcastFrame = CoordBroadcastP__m_queueHead;
        }
#line 114
      while (!(broadcastFrame != (void *)0)) {
#line 114
          break;
        }
#line 114
      ;
      CoordBroadcastP__m_lock = TRUE;
      CoordBroadcastP__CapTransmitNow__transmitNow(broadcastFrame);
    }
  CoordBroadcastP__RadioToken__transferTo(RADIO_CLIENT_COORDCAP);
}

# 518 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static inline uint16_t BeaconSynchronizeP__IncomingSF__battLifeExtDuration(void )
{
  return BeaconSynchronizeP__m_battLifeExtDuration;
}

# 83 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SuperframeStructure.nc"
inline static uint16_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__battLifeExtDuration(void ){
#line 83
  unsigned short __nesc_result;
#line 83

#line 83
  __nesc_result = BeaconSynchronizeP__IncomingSF__battLifeExtDuration();
#line 83

#line 83
  return __nesc_result;
#line 83
}
#line 83
# 498 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static inline uint32_t BeaconSynchronizeP__IncomingSF__sfStartTime(void )
{
  return BeaconSynchronizeP__m_lastBeaconRxTime;
}

# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SuperframeStructure.nc"
inline static uint32_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__sfStartTime(void ){
#line 52
  unsigned long __nesc_result;
#line 52

#line 52
  __nesc_result = BeaconSynchronizeP__IncomingSF__sfStartTime();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BLEAlarm__startAt(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BLEAlarm__size_type t0, /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BLEAlarm__size_type dt){
#line 103
  Alarm32khzTo62500hzTransformC__Alarm__startAt(/*Ieee802154BeaconEnabledC.MACAlarm4*/Alarm62500hz32VirtualizedC__5__CLIENT_ID, t0, dt);
#line 103
}
#line 103
inline static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__CapEndAlarm__startAt(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__CapEndAlarm__size_type t0, /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__CapEndAlarm__size_type dt){
#line 103
  Alarm32khzTo62500hzTransformC__Alarm__startAt(/*Ieee802154BeaconEnabledC.MACAlarm3*/Alarm62500hz32VirtualizedC__4__CLIENT_ID, t0, dt);
#line 103
}
#line 103
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__setupTxBroadcastTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__setupTxBroadcastTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 533 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static inline bool BeaconSynchronizeP__IncomingSF__isBroadcastPending(void )
{
  return BeaconSynchronizeP__m_framePendingBit;
}

# 108 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SuperframeStructure.nc"
inline static bool /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__isBroadcastPending(void ){
#line 108
  unsigned char __nesc_result;
#line 108

#line 108
  __nesc_result = BeaconSynchronizeP__IncomingSF__isBroadcastPending();
#line 108

#line 108
  return __nesc_result;
#line 108
}
#line 108
# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioToken__transferTo(uint8_t dstClient){
#line 111
  unsigned char __nesc_result;
#line 111

#line 111
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__transferTo(9, dstClient);
#line 111

#line 111
  return __nesc_result;
#line 111
}
#line 111
# 528 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static inline uint16_t BeaconSynchronizeP__IncomingSF__guardTime(void )
{
  return 20 + IEEE154_RADIO_RX_DELAY;
}

# 100 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SuperframeStructure.nc"
inline static uint16_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__guardTime(void ){
#line 100
  unsigned short __nesc_result;
#line 100

#line 100
  __nesc_result = BeaconSynchronizeP__IncomingSF__guardTime();
#line 100

#line 100
  return __nesc_result;
#line 100
}
#line 100
# 503 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static inline uint32_t BeaconSynchronizeP__IncomingSF__sfSlotDuration(void )
{
  return BeaconSynchronizeP__m_sfSlotDuration;
}

# 60 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SuperframeStructure.nc"
inline static uint32_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__sfSlotDuration(void ){
#line 60
  unsigned long __nesc_result;
#line 60

#line 60
  __nesc_result = BeaconSynchronizeP__IncomingSF__sfSlotDuration();
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 508 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static inline uint8_t BeaconSynchronizeP__IncomingSF__numCapSlots(void )
{
  return BeaconSynchronizeP__m_numCapSlots;
}

# 67 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SuperframeStructure.nc"
inline static uint8_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__numCapSlots(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = BeaconSynchronizeP__IncomingSF__numCapSlots();
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 209 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioToken__transferredFrom(uint8_t fromClient)
{

  uint32_t capDuration = (uint32_t )/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__numCapSlots() * 
  (uint32_t )/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__sfSlotDuration();
  uint16_t guardTime = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__guardTime();

  ;


  if (capDuration < guardTime) {

      ;
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioToken__transferTo(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RADIO_CLIENT_CFP);
      return;
    }
  else 
#line 224
    {
      capDuration -= guardTime;
      if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__DEVICE_ROLE) {
        /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_broadcastRxPending = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__isBroadcastPending();
        }
      else 
#line 228
        {

          if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_bcastFrame != (void *)0) {




              /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lock = TRUE;
              /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__setupTxBroadcastTask__postTask();
              ;
            }
        }
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__CapEndAlarm__startAt(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__sfStartTime(), capDuration);
      if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__battLifeExtDuration() > 0) {
          ;
          /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BLEAlarm__startAt(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__sfStartTime(), /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__battLifeExtDuration());
        }
    }
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__updateState();
}

# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioToken__transferTo(uint8_t dstClient){
#line 111
  unsigned char __nesc_result;
#line 111

#line 111
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__transferTo(5, dstClient);
#line 111

#line 111
  return __nesc_result;
#line 111
}
#line 111
# 90 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioToken__transferredFrom(uint8_t c)
#line 90
{
#line 90
  /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioToken__transferTo(/*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RADIO_CLIENT_CFP);
}

# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t NoDeviceCfpP__RadioToken__transferTo(uint8_t dstClient){
#line 111
  unsigned char __nesc_result;
#line 111

#line 111
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__transferTo(10, dstClient);
#line 111

#line 111
  return __nesc_result;
#line 111
}
#line 111
# 140 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDeviceCfpP.nc"
static inline void NoDeviceCfpP__RadioToken__transferredFrom(uint8_t fromClient)
{



  NoDeviceCfpP__RadioToken__transferTo(RADIO_CLIENT_BEACONSYNCHRONIZE);
}

# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t NoCoordCfpP__RadioToken__transferTo(uint8_t dstClient){
#line 111
  unsigned char __nesc_result;
#line 111

#line 111
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__transferTo(6, dstClient);
#line 111

#line 111
  return __nesc_result;
#line 111
}
#line 111
# 126 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoCoordCfpP.nc"
static inline void NoCoordCfpP__RadioToken__transferredFrom(uint8_t fromClient)
{

  NoCoordCfpP__RadioToken__transferTo(RADIO_CLIENT_BEACONSYNCHRONIZE);
}

# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioToken__transferTo(uint8_t dstClient){
#line 111
  unsigned char __nesc_result;
#line 111

#line 111
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__transferTo(11, dstClient);
#line 111

#line 111
  return __nesc_result;
#line 111
}
#line 111
# 63 "/usr/src/tinyos/tos/lib/mac/tkn154/InactivePeriodP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioToken__transferredFrom(uint8_t fromClient)
{
  ;
  if (1 == OUTGOING_SUPERFRAME) {
      /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioToken__transferTo(RADIO_CLIENT_BEACONSYNCHRONIZE);
    }
  else 
#line 68
    {
      /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioToken__transferTo(RADIO_CLIENT_BEACONTRANSMIT);
    }
}

# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioToken__transferTo(uint8_t dstClient){
#line 111
  unsigned char __nesc_result;
#line 111

#line 111
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__transferTo(7, dstClient);
#line 111

#line 111
  return __nesc_result;
#line 111
}
#line 111
# 63 "/usr/src/tinyos/tos/lib/mac/tkn154/InactivePeriodP.nc"
static inline void /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioToken__transferredFrom(uint8_t fromClient)
{
  ;
  if (0 == OUTGOING_SUPERFRAME) {
      /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioToken__transferTo(RADIO_CLIENT_BEACONSYNCHRONIZE);
    }
  else 
#line 68
    {
      /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioToken__transferTo(RADIO_CLIENT_BEACONTRANSMIT);
    }
}

# 149 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline void PromiscuousModeP__RadioToken__transferredFrom(uint8_t clientFrom)
#line 149
{
#line 149
  while (!0) {
#line 149
      break;
    }
#line 149
  ;
}

# 1066 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__RadioToken__transferredFrom(uint8_t fromClient)
#line 1066
{
#line 1066
  while (!0) {
#line 1066
      break;
    }
#line 1066
  ;
}

# 189 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__default__transferredFrom(uint8_t id, uint8_t c)
#line 189
{
}

# 119 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__transferredFrom(uint8_t arg_0x2ab71d626ad8, uint8_t srcClient){
#line 119
  switch (arg_0x2ab71d626ad8) {
#line 119
    case 0:
#line 119
      ScanP__RadioToken__transferredFrom(srcClient);
#line 119
      break;
#line 119
    case 1:
#line 119
      PibP__RadioToken__transferredFrom(srcClient);
#line 119
      break;
#line 119
    case 2:
#line 119
      PromiscuousModeP__RadioToken__transferredFrom(srcClient);
#line 119
      break;
#line 119
    case 3:
#line 119
      NoBeaconTransmitP__RadioToken__transferredFrom(srcClient);
#line 119
      break;
#line 119
    case 4:
#line 119
      CoordBroadcastP__RadioToken__transferredFrom(srcClient);
#line 119
      break;
#line 119
    case 5:
#line 119
      /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioToken__transferredFrom(srcClient);
#line 119
      break;
#line 119
    case 6:
#line 119
      NoCoordCfpP__RadioToken__transferredFrom(srcClient);
#line 119
      break;
#line 119
    case 7:
#line 119
      /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioToken__transferredFrom(srcClient);
#line 119
      break;
#line 119
    case 8:
#line 119
      BeaconSynchronizeP__RadioToken__transferredFrom(srcClient);
#line 119
      break;
#line 119
    case 9:
#line 119
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioToken__transferredFrom(srcClient);
#line 119
      break;
#line 119
    case 10:
#line 119
      NoDeviceCfpP__RadioToken__transferredFrom(srcClient);
#line 119
      break;
#line 119
    case 11:
#line 119
      /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioToken__transferredFrom(srcClient);
#line 119
      break;
#line 119
    default:
#line 119
      /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__default__transferredFrom(arg_0x2ab71d626ad8, srcClient);
#line 119
      break;
#line 119
    }
#line 119
}
#line 119
# 162 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(uint8_t id, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt)
#line 162
{
  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(id, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow(), dt);
}

# 147 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Alarm__startAt(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__to_size_type t0, /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__to_size_type dt)
{
  /* atomic removed: atomic calls only */
  {
    /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__m_t0 = t0;
    /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__m_dt = dt;
    /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__set_alarm();
  }
}

# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__startAt(/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type t0, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 143 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareB__start(void )
#line 143
{
#line 143
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 3;
}

# 65 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__start(void ){
#line 65
  HplAtm128Timer1P__CompareB__start();
#line 65
}
#line 65
# 137 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareB__reset(void )
#line 137
{
#line 137
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 3;
}

# 62 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__reset(void ){
#line 62
  HplAtm128Timer1P__CompareB__reset();
#line 62
}
#line 62
# 193 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareB__set(uint16_t t)
#line 193
{
#line 193
  * (volatile uint16_t *)(0x28 + 0x20) = t;
}

# 54 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__set(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__size_type t){
#line 54
  HplAtm128Timer1P__CompareB__set(t);
#line 54
}
#line 54
# 61 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__timer_size /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__get(void ){
#line 61
  unsigned short __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer1P__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 83 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__Alarm__startAt(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__timer_size t0, /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__timer_size dt)
#line 83
{
  /* atomic removed: atomic calls only */






  {
    /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__timer_size now;
#line 92
    /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__timer_size elapsed;
#line 92
    /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__timer_size expires;

    ;


    now = /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__get();
    elapsed = now + 3 - t0;
    if (elapsed >= dt) {
      expires = now + 3;
      }
    else {
#line 102
      expires = t0 + dt;
      }



    if (expires == 0) {
      expires = 1;
      }



    /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__set(expires - 1);
    /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__reset();
    /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__start();
  }
}

# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__AlarmFrom__startAt(/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__AlarmFrom__size_type t0, /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__AlarmFrom__size_type dt){
#line 103
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 149 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareB__stop(void )
#line 149
{
#line 149
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 3);
}

# 68 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__stop(void ){
#line 68
  HplAtm128Timer1P__CompareB__stop();
#line 68
}
#line 68
# 74 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__Alarm__stop(void )
#line 74
{
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__stop();
}

# 73 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__AlarmFrom__stop(void ){
#line 73
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__Alarm__stop();
#line 73
}
#line 73
# 102 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Alarm__stop(void )
{
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__AlarmFrom__stop();
}

# 73 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Alarm__stop();
#line 73
}
#line 73
# 66 "/usr/src/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static inline bool /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty(void )
#line 66
{
  int i;

  /* atomic removed: atomic calls only */
#line 68
  {
    for (i = 0; i < sizeof /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ; i++) 
      if (/*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ[i] > 0) {
          unsigned char __nesc_temp = 
#line 70
          FALSE;

#line 70
          return __nesc_temp;
        }
#line 71
    {
      unsigned char __nesc_temp = 
#line 71
      TRUE;

#line 71
      return __nesc_temp;
    }
  }
}

# 53 "/usr/src/tinyos/tos/interfaces/ResourceQueue.nc"
inline static bool /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 57 "/usr/src/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static inline void /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__clearEntry(uint8_t id)
#line 57
{
  /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] &= ~(1 << id % 8);
}

#line 79
static inline resource_client_id_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue(void )
#line 79
{
  int i;

  /* atomic removed: atomic calls only */
#line 81
  {
    for (i = /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__last + 1; ; i++) {
        if (i == 12U) {
          i = 0;
          }
#line 85
        if (/*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(i)) {
            /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__clearEntry(i);
            /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__last = i;
            {
              unsigned char __nesc_temp = 
#line 88
              i;

#line 88
              return __nesc_temp;
            }
          }
#line 90
        if (i == /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__last) {
          break;
          }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__NO_ENTRY;

#line 93
      return __nesc_temp;
    }
  }
}

# 70 "/usr/src/tinyos/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
inline static bool BeaconSynchronizeP__TimeCalc__hasExpired(uint32_t t0, uint32_t dt){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = PibP__TimeCalc__hasExpired(t0, dt);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t BeaconSynchronizeP__processBeaconTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(BeaconSynchronizeP__processBeaconTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 764 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioTokenRequested__requested(void )
#line 764
{
#line 764
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__updateState();
}

# 118 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioTokenRequested__requested(void )
#line 118
{
}

# 181 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 181
{
}

# 53 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
inline static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__requested(uint8_t arg_0x2ab71d624020){
#line 53
  switch (arg_0x2ab71d624020) {
#line 53
    case 5:
#line 53
      /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioTokenRequested__requested();
#line 53
      break;
#line 53
    case 9:
#line 53
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioTokenRequested__requested();
#line 53
      break;
#line 53
    default:
#line 53
      /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__default__requested(arg_0x2ab71d624020);
#line 53
      break;
#line 53
    }
#line 53
}
#line 53
# 97 "/usr/src/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(resource_client_id_t id)
#line 97
{
  /* atomic removed: atomic calls only */
#line 98
  {
    if (!/*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(id)) {
        /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] |= 1 << id % 8;
        {
          unsigned char __nesc_temp = 
#line 101
          SUCCESS;

#line 101
          return __nesc_temp;
        }
      }
#line 103
    {
      unsigned char __nesc_temp = 
#line 103
      EBUSY;

#line 103
      return __nesc_temp;
    }
  }
}

# 79 "/usr/src/tinyos/tos/interfaces/ResourceQueue.nc"
inline static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 60 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static bool BeaconSynchronizeP__RadioOff__isOff(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = RadioControlImplP__MacRadioOff__isOff(8);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static error_t BeaconSynchronizeP__BeaconRx__enableRx(uint32_t t0, uint32_t dt){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = RadioControlImplP__MacRx__enableRx(8, t0, dt);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 88 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ControlTransmitC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 153 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Resource__request(void )
#line 153
{
  return CC2420ControlP__SpiResource__request();
}

# 88 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420TKN154P__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420ControlP__Resource__request();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88









inline static error_t CC2420TKN154P__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420ControlP__Resource__immediateRequest();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 113 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
inline static error_t CC2420TKN154P__RxControl__start(void ){
#line 113
  unsigned char __nesc_result;
#line 113

#line 113
  __nesc_result = CC2420ReceiveP__AsyncSplitControl__start();
#line 113

#line 113
  return __nesc_result;
#line 113
}
#line 113
# 383 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline error_t CC2420TKN154P__RadioRx__enableRx(uint32_t t0, uint32_t dt)
{
  error_t result;

#line 386
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 386
    {
      if (CC2420TKN154P__m_state != CC2420TKN154P__S_RADIO_OFF) 
        {
          unsigned char __nesc_temp = 
#line 388
          FAIL;

          {
#line 388
            __nesc_atomic_end(__nesc_atomic); 
#line 388
            return __nesc_temp;
          }
        }
#line 389
      CC2420TKN154P__m_state = CC2420TKN154P__S_RESERVE_RX_SPI;
    }
#line 390
    __nesc_atomic_end(__nesc_atomic); }
  CC2420TKN154P__m_t0 = t0;
  CC2420TKN154P__m_dt = dt;
  result = CC2420TKN154P__RxControl__start();
  while (!(result == SUCCESS)) {
#line 394
      break;
    }
#line 394
  ;
  if (result == SUCCESS) {
    if (CC2420TKN154P__SpiResource__immediateRequest() == SUCCESS) {
      CC2420TKN154P__rxSpiReserved();
      }
    else {
#line 399
      CC2420TKN154P__SpiResource__request();
      }
    }
#line 400
  return result;
}

# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static error_t RadioControlImplP__PhyRx__enableRx(uint32_t t0, uint32_t dt){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = CC2420TKN154P__RadioRx__enableRx(t0, dt);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 51 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__enable(void )
#line 51
{
#line 51
  * (volatile uint8_t *)(0x39 + 0x20) |= 1 << 6;
}

# 46 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__enable(void ){
#line 46
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__enable();
#line 46
}
#line 46
# 56 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__edge(bool low_to_high)
#line 56
{
  * (volatile uint8_t * )90U |= 1 << 5;

  if (low_to_high) {
    * (volatile uint8_t * )90U |= 1 << 4;
    }
  else {
#line 62
    * (volatile uint8_t * )90U &= ~(1 << 4);
    }
}

# 70 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__edge(bool low_to_high){
#line 70
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__edge(low_to_high);
#line 70
}
#line 70
# 50 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__clear(void )
#line 50
{
#line 50
  * (volatile uint8_t *)(0x38 + 0x20) = 1 << 6;
}

# 56 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__clear(void ){
#line 56
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__clear();
#line 56
}
#line 56
# 52 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static __inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__disable(void )
#line 52
{
#line 52
  * (volatile uint8_t *)(0x39 + 0x20) &= ~(1 << 6);
}

# 51 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable(void ){
#line 51
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__disable();
#line 51
}
#line 51
# 15 "/usr/src/tinyos/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__enable(bool rising)
#line 15
{
  /* atomic removed: atomic calls only */
#line 16
  {
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__clear();
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__edge(rising);
    /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__enable();
  }
  return SUCCESS;
}





static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge(void )
#line 29
{
  return /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__enable(FALSE);
}

# 54 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__enableFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__enableFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 97 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420ControlTransmitC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 45 "/usr/src/tinyos/tos/interfaces/State.nc"
inline static error_t CC2420SpiP__WorkingState__requestState(uint8_t reqState){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = StateImplP__State__requestState(0U, reqState);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 128 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static bool Atm128SpiP__ResourceArbiter__isOwner(uint8_t arg_0x2ab71e4b4060){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(arg_0x2ab71e4b4060);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 421 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline bool Atm128SpiP__Resource__isOwner(uint8_t id)
#line 421
{
  return Atm128SpiP__ResourceArbiter__isOwner(id);
}

# 128 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static bool HplCC2420SpiP__SubResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = Atm128SpiP__Resource__isOwner(0U);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 83 "/usr/src/tinyos/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline bool HplCC2420SpiP__Resource__isOwner(void )
{
  return HplCC2420SpiP__SubResource__isOwner();
}

# 128 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static bool CC2420SpiP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = HplCC2420SpiP__Resource__isOwner();
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 56 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )56U &= ~(1 << 0);
}

# 41 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP__SS__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 41
}
#line 41
# 61 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )55U |= 1 << 0;
}

# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP__SS__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 171 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 171
{
}

# 59 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x2ab71e584920){
#line 59
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__configure(arg_0x2ab71e584920);
#line 59
}
#line 59
# 169 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(uint8_t id)
#line 169
{
}

# 61 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(uint8_t arg_0x2ab71e586408){
#line 61
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__immediateRequested(arg_0x2ab71e586408);
#line 61
}
#line 61
# 84 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(uint8_t id)
#line 84
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__immediateRequested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 86
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
        {
          unsigned char __nesc_temp = 
#line 91
          SUCCESS;

#line 91
          return __nesc_temp;
        }
      }
#line 93
    {
      unsigned char __nesc_temp = 
#line 93
      FAIL;

#line 93
      return __nesc_temp;
    }
  }
}

# 97 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__immediateRequest(uint8_t arg_0x2ab71e4b4060){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__immediateRequest(arg_0x2ab71e4b4060);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 394 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__Resource__immediateRequest(uint8_t id)
#line 394
{
  error_t result = Atm128SpiP__ResourceArbiter__immediateRequest(id);

#line 396
  if (result == SUCCESS) {
      Atm128SpiP__startSpi();
    }
  return result;
}

# 97 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP__SubResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = Atm128SpiP__Resource__immediateRequest(0U);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 56 "/usr/src/tinyos/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP__Resource__immediateRequest(void )
{
  error_t error = HplCC2420SpiP__SubResource__immediateRequest();

#line 59
  if (error == SUCCESS) 
    {
      HplCC2420SpiP__SS__makeOutput();
      HplCC2420SpiP__SS__clr();
    }
  return error;
}

# 97 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = HplCC2420SpiP__Resource__immediateRequest();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 120 "/usr/src/tinyos/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuPowerState__update(void )
#line 120
{
}

# 52 "/usr/src/tinyos/tos/interfaces/McuPowerState.nc"
inline static void HplAtm128SpiP__Mcu__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 173 "/usr/src/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterBit(bool isMaster)
#line 173
{
  if (isMaster) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 4;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 4);
    }
}

# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SS__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 61 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )55U |= 1 << 1;
}

# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__SCK__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit1*/HplAtm128GeneralIOPinP__9__IO__makeOutput();
#line 46
}
#line 46
# 59 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )55U &= ~(1 << 3);
}

# 44 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MISO__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortB.Bit3*/HplAtm128GeneralIOPinP__11__IO__makeInput();
#line 44
}
#line 44
# 61 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )55U |= 1 << 2;
}

# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void HplAtm128SpiP__MOSI__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit2*/HplAtm128GeneralIOPinP__10__IO__makeOutput();
#line 46
}
#line 46
# 96 "/usr/src/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__initMaster(void )
#line 96
{
  HplAtm128SpiP__MOSI__makeOutput();
  HplAtm128SpiP__MISO__makeInput();
  HplAtm128SpiP__SCK__makeOutput();
  HplAtm128SpiP__SS__makeOutput();
  HplAtm128SpiP__SPI__setMasterBit(TRUE);
}

# 83 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__initMaster(void ){
#line 83
  HplAtm128SpiP__SPI__initMaster();
#line 83
}
#line 83
# 186 "/usr/src/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPolarity(bool highWhenIdle)
#line 186
{
  if (highWhenIdle) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 3;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 3);
    }
}

# 125 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPolarity(bool highWhenIdle){
#line 125
  HplAtm128SpiP__SPI__setClockPolarity(highWhenIdle);
#line 125
}
#line 125
# 200 "/usr/src/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClockPhase(bool sampleOnTrailing)
#line 200
{
  if (sampleOnTrailing) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 2;
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 2);
    }
}

# 128 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClockPhase(bool sampleOnTrailing){
#line 128
  HplAtm128SpiP__SPI__setClockPhase(sampleOnTrailing);
#line 128
}
#line 128
# 230 "/usr/src/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setMasterDoubleSpeed(bool on)
#line 230
{
  if (on) {
      * (volatile uint8_t *)(0x0E + 0x20) |= 1 << 0;
    }
  else {
      * (volatile uint8_t *)(0x0E + 0x20) &= ~(1 << 0);
    }
}

# 141 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setMasterDoubleSpeed(bool on){
#line 141
  HplAtm128SpiP__SPI__setMasterDoubleSpeed(on);
#line 141
}
#line 141
# 217 "/usr/src/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__setClock(uint8_t v)
#line 217
{
  v &= (1 << 1) | (1 << 0);
  * (volatile uint8_t *)(0x0D + 0x20) = (* (volatile uint8_t *)(0x0D + 0x20) & ~((1 << 1) | (1 << 0))) | v;
}

# 131 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__setClock(uint8_t speed){
#line 131
  HplAtm128SpiP__SPI__setClock(speed);
#line 131
}
#line 131
# 118 "/usr/src/tinyos/tos/system/StateImplP.nc"
static inline void StateImplP__State__toIdle(uint8_t id)
#line 118
{
  /* atomic removed: atomic calls only */
#line 119
  StateImplP__state[id] = StateImplP__S_IDLE;
}

# 56 "/usr/src/tinyos/tos/interfaces/State.nc"
inline static void CC2420SpiP__WorkingState__toIdle(void ){
#line 56
  StateImplP__State__toIdle(0U);
#line 56
}
#line 56
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SRFOFF__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRFOFF);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 116 "/usr/src/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__write(uint8_t d)
#line 116
{
#line 116
  * (volatile uint8_t *)(0x0F + 0x20) = d;
}

# 103 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__write(uint8_t data){
#line 103
  HplAtm128SpiP__SPI__write(data);
#line 103
}
#line 103
# 124 "/usr/src/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline bool HplAtm128SpiP__SPI__isInterruptPending(void )
#line 124
{
  return (* (volatile uint8_t *)(0x0E + 0x20) & (1 << 7)) != 0;
}

# 136 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
inline static bool Atm128SpiP__Spi__isInterruptPending(void ){
#line 136
  unsigned char __nesc_result;
#line 136

#line 136
  __nesc_result = HplAtm128SpiP__SPI__isInterruptPending();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__FSCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_FSCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__MDMCTRL0__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_MDMCTRL0, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__TXCTRL__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_TXCTRL, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 518 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__writeTxPower(void )
#line 518
{
  CC2420ControlP__TXCTRL__write((((
  2 << CC2420_TXCTRL_TXMIXBUF_CUR) | (
  3 << CC2420_TXCTRL_PA_CURRENT)) | (
  1 << CC2420_TXCTRL_RESERVED)) | ((
  CC2420ControlP__m_txPower & 0x1F) << CC2420_TXCTRL_PA_LEVEL));
}

# 1039 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE)
{
  PibP__FrameUtility__convertToLE(destLE, &PibP__m_aExtendedAddressLE);
}

# 55 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static void CC2420ControlP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE){
#line 55
  PibP__FrameUtility__copyLocalExtendedAddressLE(destLE);
#line 55
}
#line 55
# 45 "/usr/src/tinyos/tos/interfaces/SpiByte.nc"
inline static uint8_t CC2420SpiP__SpiByte__write(uint8_t tx){
#line 45
  unsigned char __nesc_result;
#line 45

#line 45
  __nesc_result = Atm128SpiP__SpiByte__write(tx);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 133 "/usr/src/tinyos/tos/system/StateImplP.nc"
static inline bool StateImplP__State__isState(uint8_t id, uint8_t myState)
#line 133
{
  bool isState;

  /* atomic removed: atomic calls only */
#line 135
  isState = StateImplP__state[id] == myState;
  return isState;
}

#line 126
static inline bool StateImplP__State__isIdle(uint8_t id)
#line 126
{
  return StateImplP__State__isState(id, StateImplP__S_IDLE);
}

# 61 "/usr/src/tinyos/tos/interfaces/State.nc"
inline static bool CC2420SpiP__WorkingState__isIdle(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = StateImplP__State__isIdle(0U);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 260 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline cc2420_status_t CC2420SpiP__Ram__write(uint16_t addr, uint8_t offset, 
uint8_t *data, 
uint8_t len)
#line 262
{

  cc2420_status_t status = 0;
  uint8_t tmpLen = len;
  uint8_t * tmpData = (uint8_t * )data;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 268
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 270
            status;

            {
#line 270
              __nesc_atomic_end(__nesc_atomic); 
#line 270
              return __nesc_temp;
            }
          }
        }
    }
#line 274
    __nesc_atomic_end(__nesc_atomic); }
#line 274
  addr += offset;

  status = CC2420SpiP__SpiByte__write(addr | 0x80);
  CC2420SpiP__SpiByte__write((addr >> 1) & 0xc0);
  for (; len; len--) {
      CC2420SpiP__SpiByte__write(tmpData[tmpLen - len]);
    }

  return status;
}

# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Ram.nc"
inline static cc2420_status_t CC2420ControlP__IEEEADR__write(uint8_t offset, uint8_t * data, uint8_t length){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Ram__write(CC2420_RAM_IEEEADR, offset, data, length);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 147 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__stop(void )
#line 147
{
#line 147
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 5);
}

# 70 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__stop(void ){
#line 70
  HplAtm128Timer1P__Capture__stop();
#line 70
}
#line 70
# 67 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__disable(void )
#line 67
{
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__stop();
}

# 66 "/usr/src/tinyos/tos/interfaces/GpioCapture.nc"
inline static void CC2420TransmitP__CaptureSFD__disable(void ){
#line 66
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__disable();
#line 66
}
#line 66
# 95 "/usr/src/tinyos/tos/interfaces/AsyncStdControl.nc"
inline static error_t CC2420TKN154P__TxControl__start(void ){
#line 95
  unsigned char __nesc_result;
#line 95

#line 95
  __nesc_result = CC2420TransmitP__AsyncStdControl__start();
#line 95

#line 95
  return __nesc_result;
#line 95
}
#line 95
# 135 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__reset(void )
#line 135
{
#line 135
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 5;
}

# 64 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__reset(void ){
#line 64
  HplAtm128Timer1P__Capture__reset();
#line 64
}
#line 64
# 131 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__setEdge(bool up)
#line 131
{
#line 131
  if (up) {
#line 131
    * (volatile uint8_t *)(0x2E + 0x20) |= 1 << 6;
    }
  else {
#line 131
    * (volatile uint8_t *)(0x2E + 0x20) &= ~(1 << 6);
    }
}

# 88 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__setEdge(bool up){
#line 88
  HplAtm128Timer1P__Capture__setEdge(up);
#line 88
}
#line 88
# 141 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__Capture__start(void )
#line 141
{
#line 141
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 5;
}

# 67 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__start(void ){
#line 67
  HplAtm128Timer1P__Capture__start();
#line 67
}
#line 67
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SRXON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SRXON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420ControlP__SACKPEND__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SACKPEND);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 341 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CC2420Tx__lockChipSpi(void )
{
  CC2420TransmitP__abortSpiRelease = TRUE;
}

# 47 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static void CC2420TKN154P__CC2420Tx__lockChipSpi(void ){
#line 47
  CC2420TransmitP__CC2420Tx__lockChipSpi();
#line 47
}
#line 47
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420ControlP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ControlTransmitC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 95 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__ChipSpiResource__abortRelease(void )
#line 95
{
  /* atomic removed: atomic calls only */
#line 96
  CC2420SpiP__release = FALSE;
}

# 31 "/usr/src/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420TransmitP__ChipSpiResource__abortRelease(void ){
#line 31
  CC2420SpiP__ChipSpiResource__abortRelease();
#line 31
}
#line 31
# 351 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__ChipSpiResource__releasing(void )
#line 351
{
  if (CC2420TransmitP__abortSpiRelease) {
      CC2420TransmitP__ChipSpiResource__abortRelease();
    }
}

# 24 "/usr/src/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static void CC2420SpiP__ChipSpiResource__releasing(void ){
#line 24
  CC2420TransmitP__ChipSpiResource__releasing();
#line 24
}
#line 24
# 52 "/usr/src/tinyos/tos/interfaces/McuPowerState.nc"
inline static void Atm128SpiP__McuPowerState__update(void ){
#line 52
  McuSleepC__McuPowerState__update();
#line 52
}
#line 52
# 112 "/usr/src/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline void HplAtm128SpiP__SPI__sleep(void )
#line 112
{
}

# 89 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void Atm128SpiP__Spi__sleep(void ){
#line 89
  HplAtm128SpiP__SPI__sleep();
#line 89
}
#line 89
#line 116
inline static void Atm128SpiP__Spi__enableSpi(bool busOn){
#line 116
  HplAtm128SpiP__SPI__enableSpi(busOn);
#line 116
}
#line 116
# 167 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__stopSpi(void )
#line 167
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 169
  {
    Atm128SpiP__Spi__sleep();
  }
  Atm128SpiP__McuPowerState__update();
}

# 90 "/usr/src/tinyos/tos/interfaces/ArbiterInfo.nc"
inline static bool Atm128SpiP__ArbiterInfo__inUse(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 173 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(uint8_t id)
#line 173
{
}

# 65 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(uint8_t arg_0x2ab71e584920){
#line 65
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__default__unconfigure(arg_0x2ab71e584920);
#line 65
}
#line 65
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 68 "/usr/src/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline resource_client_id_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue(void )
#line 68
{
  /* atomic removed: atomic calls only */
#line 69
  {
    if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
        uint8_t id = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead;

#line 72
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead];
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
          }
#line 75
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[id] = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;
        {
          unsigned char __nesc_temp = 
#line 76
          id;

#line 76
          return __nesc_temp;
        }
      }
#line 78
    {
      unsigned char __nesc_temp = 
#line 78
      /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 78
      return __nesc_temp;
    }
  }
}

# 70 "/usr/src/tinyos/tos/interfaces/ResourceQueue.nc"
inline static resource_client_id_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue(void ){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__dequeue();
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 60 "/usr/src/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty(void )
#line 60
{
  /* atomic removed: atomic calls only */
#line 61
  {
    unsigned char __nesc_temp = 
#line 61
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY;

#line 61
    return __nesc_temp;
  }
}

# 53 "/usr/src/tinyos/tos/interfaces/ResourceQueue.nc"
inline static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEmpty();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 97 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(uint8_t id)
#line 97
{
  bool released = FALSE;

  /* atomic removed: atomic calls only */
#line 99
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId == id) {
        if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__isEmpty() == FALSE) {
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__dequeue();
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
          }
        else {
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__NO_RES;
            /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE;
          }
        released = TRUE;
      }
  }
  if (released == TRUE) {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__release(uint8_t arg_0x2ab71e4b4060){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__release(arg_0x2ab71e4b4060);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 411 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__Resource__release(uint8_t id)
#line 411
{
  error_t error = Atm128SpiP__ResourceArbiter__release(id);

  /* atomic removed: atomic calls only */
#line 413
  {
    if (!Atm128SpiP__ArbiterInfo__inUse()) {
        Atm128SpiP__stopSpi();
      }
  }
  return error;
}

# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP__SubResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = Atm128SpiP__Resource__release(0U);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 55 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )56U |= 1 << 0;
}

# 40 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void HplCC2420SpiP__SS__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 40
}
#line 40
# 75 "/usr/src/tinyos/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP__Resource__release(void )
{
  if (HplCC2420SpiP__SubResource__isOwner()) {
    HplCC2420SpiP__SS__set();
    }
  return HplCC2420SpiP__SubResource__release();
}

# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = HplCC2420SpiP__Resource__release();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 98 "/usr/src/tinyos/tos/interfaces/ArbiterInfo.nc"
inline static uint8_t RadioControlImplP__ArbiterInfo__userId(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ArbiterInfo__userId();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t ScanP__startTimerTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(ScanP__startTimerTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 320 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline void ScanP__RadioRx__enableRxDone(void )
{
  ScanP__startTimerTask__postTask();
}

# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void BeaconSynchronizeP__TrackAlarm__startAt(BeaconSynchronizeP__TrackAlarm__size_type t0, BeaconSynchronizeP__TrackAlarm__size_type dt){
#line 103
  Alarm32khzTo62500hzTransformC__Alarm__startAt(/*Ieee802154BeaconEnabledC.MACAlarm2*/Alarm62500hz32VirtualizedC__3__CLIENT_ID, t0, dt);
#line 103
}
#line 103
# 55 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline void Alarm32khzTo62500hzTransformC__Alarm__start(uint8_t num, uint32_t dt)
#line 55
{
#line 55
  Alarm32khzTo62500hzTransformC__AlarmFrom__start(num, dt >> 1);
}

# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void BeaconSynchronizeP__TrackAlarm__start(BeaconSynchronizeP__TrackAlarm__size_type dt){
#line 66
  Alarm32khzTo62500hzTransformC__Alarm__start(/*Ieee802154BeaconEnabledC.MACAlarm2*/Alarm62500hz32VirtualizedC__3__CLIENT_ID, dt);
#line 66
}
#line 66
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static inline void BeaconSynchronizeP__setRxState(uint8_t state)
#line 137
{
#line 137
  BeaconSynchronizeP__m_state &= ~BeaconSynchronizeP__RX_MASK;
#line 137
  BeaconSynchronizeP__m_state |= state & BeaconSynchronizeP__RX_MASK;
}

#line 136
static inline uint8_t BeaconSynchronizeP__getRxState(void )
#line 136
{
#line 136
  return BeaconSynchronizeP__m_state & BeaconSynchronizeP__RX_MASK;
}

#line 286
static inline void BeaconSynchronizeP__BeaconRx__enableRxDone(void )
{
  uint32_t dt;
  uint8_t previousState = BeaconSynchronizeP__getRxState();

  BeaconSynchronizeP__setRxState(BeaconSynchronizeP__RX_RECEIVING);

  switch (previousState) 
    {
      case BeaconSynchronizeP__RX_FIRST_SCAN: 





        dt = (((uint32_t )1 << BeaconSynchronizeP__m_beaconOrder) + (uint32_t )1) * 
        (uint32_t )IEEE154_aBaseSuperframeDuration * 
        (uint32_t )IEEE154_aMaxLostBeacons;
      BeaconSynchronizeP__TrackAlarm__start(dt);
      ;
      break;
      case BeaconSynchronizeP__RX_PREPARE: 
        dt = BeaconSynchronizeP__m_dt + (128 * IEEE154_SYMBOLS_PER_OCTET + 20);
      BeaconSynchronizeP__TrackAlarm__startAt(BeaconSynchronizeP__m_lastBeaconRxTime, dt);
      ;

      break;
      default: 
        while (!0) {
#line 314
            break;
          }
#line 314
      ;
      break;
    }
}

# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxWaitAlarm__start(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxWaitAlarm__size_type dt){
#line 66
  Alarm32khzTo62500hzTransformC__Alarm__start(/*Ieee802154BeaconEnabledC.MACAlarm5*/Alarm62500hz32VirtualizedC__6__CLIENT_ID, dt);
#line 66
}
#line 66
# 535 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioRx__enableRxDone(void )
{
  if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__DEVICE_ROLE && (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_indirectTxPending || /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_broadcastRxPending)) {
    /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxWaitAlarm__start(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_macMaxFrameTotalWaitTime);
    }
#line 539
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lock = FALSE;
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__updateState();
}

# 96 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioRx__enableRxDone(void )
#line 96
{
}

# 159 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDeviceCfpP.nc"
static inline void NoDeviceCfpP__RadioRx__enableRxDone(void )
#line 159
{
}

# 163 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoCoordCfpP.nc"
static inline void NoCoordCfpP__RadioRx__enableRxDone(void )
#line 163
{
}

# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t PromiscuousModeP__signalStartDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PromiscuousModeP__signalStartDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 103 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline void PromiscuousModeP__PromiscuousRx__enableRxDone(void )
{
  PromiscuousModeP__signalStartDoneTask__postTask();
}

# 107 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__MacRx__default__enableRxDone(uint8_t client)
#line 107
{
#line 107
  while (!0) {
#line 107
      break;
    }
#line 107
  ;
}

# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static void RadioControlImplP__MacRx__enableRxDone(uint8_t arg_0x2ab71d5a4d58){
#line 65
  switch (arg_0x2ab71d5a4d58) {
#line 65
    case 0:
#line 65
      ScanP__RadioRx__enableRxDone();
#line 65
      break;
#line 65
    case 2:
#line 65
      PromiscuousModeP__PromiscuousRx__enableRxDone();
#line 65
      break;
#line 65
    case 5:
#line 65
      /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioRx__enableRxDone();
#line 65
      break;
#line 65
    case 6:
#line 65
      NoCoordCfpP__RadioRx__enableRxDone();
#line 65
      break;
#line 65
    case 8:
#line 65
      BeaconSynchronizeP__BeaconRx__enableRxDone();
#line 65
      break;
#line 65
    case 9:
#line 65
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioRx__enableRxDone();
#line 65
      break;
#line 65
    case 10:
#line 65
      NoDeviceCfpP__RadioRx__enableRxDone();
#line 65
      break;
#line 65
    default:
#line 65
      RadioControlImplP__MacRx__default__enableRxDone(arg_0x2ab71d5a4d58);
#line 65
      break;
#line 65
    }
#line 65
}
#line 65
# 73 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__PhyRx__enableRxDone(void )
{
  RadioControlImplP__MacRx__enableRxDone(RadioControlImplP__ArbiterInfo__userId());
}

# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static void CC2420TKN154P__RadioRx__enableRxDone(void ){
#line 65
  RadioControlImplP__PhyRx__enableRxDone();
#line 65
}
#line 65
# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void TKN154TimingP__SymbolAlarm__startAt(TKN154TimingP__SymbolAlarm__size_type t0, TKN154TimingP__SymbolAlarm__size_type dt){
#line 103
  /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 90 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static inline void TKN154TimingP__ReliableWait__waitRx(uint32_t t0, uint32_t dt)
{
  if (TKN154TimingP__m_state != TKN154TimingP__S_WAIT_OFF) {
      while (!0) {
#line 93
          break;
        }
#line 93
      ;
      return;
    }
  TKN154TimingP__m_state = TKN154TimingP__S_WAIT_RX;
  TKN154TimingP__SymbolAlarm__startAt(t0 - 16, dt);
}

# 35 "/usr/src/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
inline static void CC2420TKN154P__ReliableWait__waitRx(uint32_t t0, uint32_t dt){
#line 35
  TKN154TimingP__ReliableWait__waitRx(t0, dt);
#line 35
}
#line 35
# 144 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareC__start(void )
#line 144
{
#line 144
  * (volatile uint8_t *)0x7D |= 1 << 0;
}

# 65 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Compare__start(void ){
#line 65
  HplAtm128Timer1P__CompareC__start();
#line 65
}
#line 65
# 138 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareC__reset(void )
#line 138
{
#line 138
  * (volatile uint8_t *)0x7C = 1 << 0;
}

# 62 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Compare__reset(void ){
#line 62
  HplAtm128Timer1P__CompareC__reset();
#line 62
}
#line 62
# 194 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareC__set(uint16_t t)
#line 194
{
#line 194
  * (volatile uint16_t *)0x78 = t;
}

# 54 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Compare__set(/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Compare__size_type t){
#line 54
  HplAtm128Timer1P__CompareC__set(t);
#line 54
}
#line 54
# 61 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Timer__timer_size /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Timer__get(void ){
#line 61
  unsigned short __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer1P__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 83 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__Alarm__startAt(/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__timer_size t0, /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__timer_size dt)
#line 83
{
  /* atomic removed: atomic calls only */






  {
    /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__timer_size now;
#line 92
    /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__timer_size elapsed;
#line 92
    /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__timer_size expires;

    ;


    now = /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Timer__get();
    elapsed = now + 3 - t0;
    if (elapsed >= dt) {
      expires = now + 3;
      }
    else {
#line 102
      expires = t0 + dt;
      }



    if (expires == 0) {
      expires = 1;
      }



    /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Compare__set(expires - 1);
    /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Compare__reset();
    /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Compare__start();
  }
}

# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__AlarmFrom__startAt(/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__AlarmFrom__size_type t0, /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__AlarmFrom__size_type dt){
#line 103
  /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 64 "/usr/src/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline bool /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(resource_client_id_t id)
#line 64
{
  /* atomic removed: atomic calls only */
#line 65
  {
    unsigned char __nesc_temp = 
#line 65
    /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[id] != /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY || /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail == id;

#line 65
    return __nesc_temp;
  }
}

#line 82
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(resource_client_id_t id)
#line 82
{
  /* atomic removed: atomic calls only */
#line 83
  {
    if (!/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__isEnqueued(id)) {
        if (/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead == /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY) {
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qHead = id;
          }
        else {
#line 88
          /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ[/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail] = id;
          }
#line 89
        /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__qTail = id;
        {
          unsigned char __nesc_temp = 
#line 90
          SUCCESS;

#line 90
          return __nesc_temp;
        }
      }
#line 92
    {
      unsigned char __nesc_temp = 
#line 92
      EBUSY;

#line 92
      return __nesc_temp;
    }
  }
}

# 79 "/usr/src/tinyos/tos/interfaces/ResourceQueue.nc"
inline static error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(resource_client_id_t id){
#line 79
  unsigned char __nesc_result;
#line 79

#line 79
  __nesc_result = /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__FcfsQueue__enqueue(id);
#line 79

#line 79
  return __nesc_result;
#line 79
}
#line 79
# 167 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(uint8_t id)
#line 167
{
}

# 53 "/usr/src/tinyos/tos/interfaces/ResourceRequested.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(uint8_t arg_0x2ab71e586408){
#line 53
    /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__default__requested(arg_0x2ab71e586408);
#line 53
}
#line 53
# 71 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
static inline error_t /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(uint8_t id)
#line 71
{
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceRequested__requested(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /* atomic removed: atomic calls only */
#line 73
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) {
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_GRANTING;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId = id;
        /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__postTask();
        {
          unsigned char __nesc_temp = 
#line 78
          SUCCESS;

#line 78
          return __nesc_temp;
        }
      }
#line 80
    {
      unsigned char __nesc_temp = 
#line 80
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Queue__enqueue(id);

#line 80
      return __nesc_temp;
    }
  }
}

# 88 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t Atm128SpiP__ResourceArbiter__request(uint8_t arg_0x2ab71e4b4060){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__request(arg_0x2ab71e4b4060);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 402 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline error_t Atm128SpiP__Resource__request(uint8_t id)
#line 402
{
  /* atomic removed: atomic calls only */
#line 403
  {
    if (!Atm128SpiP__ArbiterInfo__inUse()) {
        Atm128SpiP__startSpi();
      }
  }
  return Atm128SpiP__ResourceArbiter__request(id);
}

# 88 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t HplCC2420SpiP__SubResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = Atm128SpiP__Resource__request(0U);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 51 "/usr/src/tinyos/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline error_t HplCC2420SpiP__Resource__request(void )
{
  return HplCC2420SpiP__SubResource__request();
}

# 88 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420SpiP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = HplCC2420SpiP__Resource__request();
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 123 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
inline static error_t CC2420TKN154P__RxControl__stop(void ){
#line 123
  unsigned char __nesc_result;
#line 123

#line 123
  __nesc_result = CC2420ReceiveP__AsyncSplitControl__stop();
#line 123

#line 123
  return __nesc_result;
#line 123
}
#line 123
# 342 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline error_t CC2420TKN154P__RadioOff__off(void )
{
  error_t result;

#line 345
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 345
    {
      if (CC2420TKN154P__m_state == CC2420TKN154P__S_RADIO_OFF) 
        {
          unsigned char __nesc_temp = 
#line 347
          EALREADY;

          {
#line 347
            __nesc_atomic_end(__nesc_atomic); 
#line 347
            return __nesc_temp;
          }
        }
      else {
#line 348
        if (CC2420TKN154P__m_state != CC2420TKN154P__S_RECEIVING) 
          {
            unsigned char __nesc_temp = 
#line 349
            FAIL;

            {
#line 349
              __nesc_atomic_end(__nesc_atomic); 
#line 349
              return __nesc_temp;
            }
          }
        }
#line 350
      CC2420TKN154P__m_state = CC2420TKN154P__S_OFF_PENDING;
    }
#line 351
    __nesc_atomic_end(__nesc_atomic); }
  result = CC2420TKN154P__RxControl__stop();
  while (!(result == SUCCESS)) {
#line 353
      break;
    }
#line 353
  ;
  return result;
}

# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static error_t RadioControlImplP__PhyRadioOff__off(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = CC2420TKN154P__RadioOff__off();
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 33 "/usr/src/tinyos/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline error_t /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__disable(void )
#line 33
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__disable();
  return SUCCESS;
}

# 61 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ReceiveP__InterruptFIFOP__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ReceiveP__stopContinueTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ReceiveP__stopContinueTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 438 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline bool CC2420TKN154P__RadioRx__isReceiving(void )
{
  return CC2420TKN154P__m_state == CC2420TKN154P__S_RECEIVING;
}

# 73 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static bool RadioControlImplP__PhyRx__isReceiving(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = CC2420TKN154P__RadioRx__isReceiving();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 97 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline bool RadioControlImplP__MacRx__isReceiving(uint8_t client)
{
  if (client == RadioControlImplP__ArbiterInfo__userId()) {
    return RadioControlImplP__PhyRx__isReceiving();
    }
  else 
#line 101
    {
      while (!0) {
#line 102
          break;
        }
#line 102
      ;
      return FAIL;
    }
}

# 73 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static bool /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioRx__isReceiving(void ){
#line 73
  unsigned char __nesc_result;
#line 73

#line 73
  __nesc_result = RadioControlImplP__MacRx__isReceiving(9);
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
#line 56
inline static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioRx__enableRx(uint32_t t0, uint32_t dt){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = RadioControlImplP__MacRx__enableRx(9, t0, dt);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 585 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline error_t CC2420TKN154P__SlottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
uint32_t slot0Time, uint32_t dtMax, bool resume, uint16_t remainingBackoff)
{

  if ((((
#line 588
  frame == (void *)0 || frame->header == (void *)0) || (
  frame->payload == (void *)0 && frame->payloadLen != 0)) || frame->metadata == (void *)0) || 
  frame->headerLen + frame->payloadLen + 2 > IEEE154_aMaxPHYPacketSize) {
    return EINVAL;
    }
#line 592
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 592
    {
      if (CC2420TKN154P__m_state != CC2420TKN154P__S_RADIO_OFF) 
        {
          unsigned char __nesc_temp = 
#line 594
          FAIL;

          {
#line 594
            __nesc_atomic_end(__nesc_atomic); 
#line 594
            return __nesc_temp;
          }
        }
#line 595
      CC2420TKN154P__m_state = CC2420TKN154P__S_LOAD_TXFIFO_SLOTTED;
    }
#line 596
    __nesc_atomic_end(__nesc_atomic); }
  CC2420TKN154P__m_txframe = frame;
  CC2420TKN154P__m_csma = csma;
  CC2420TKN154P__m_t0 = slot0Time;
  CC2420TKN154P__m_dt = dtMax;
  CC2420TKN154P__m_resume = resume;
  CC2420TKN154P__m_remainingBackoff = remainingBackoff;
  CC2420TKN154P__loadTxFrame(frame);
  return SUCCESS;
}

# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
inline static error_t RadioControlImplP__PhySlottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma, uint32_t slot0Time, uint32_t dtMax, bool resume, uint16_t remainingBackoff){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = CC2420TKN154P__SlottedCsmaCa__transmit(frame, csma, slot0Time, dtMax, resume, remainingBackoff);
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 163 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline error_t RadioControlImplP__SlottedCsmaCa__transmit(uint8_t client, ieee154_txframe_t *frame, ieee154_csma_t *csma, 
uint32_t slot0Time, uint32_t dtMax, bool resume, uint16_t remainingBackoff)
{
  if (client == RadioControlImplP__ArbiterInfo__userId()) {
    return RadioControlImplP__PhySlottedCsmaCa__transmit(frame, csma, slot0Time, dtMax, resume, remainingBackoff);
    }
  else 
#line 168
    {
      while (!0) {
#line 169
          break;
        }
#line 169
      ;
      return IEEE154_TRANSACTION_OVERFLOW;
    }
}

# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
inline static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SlottedCsmaCa__transmit(ieee154_txframe_t *frame, ieee154_csma_t *csma, uint32_t slot0Time, uint32_t dtMax, bool resume, uint16_t remainingBackoff){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = RadioControlImplP__SlottedCsmaCa__transmit(9, frame, csma, slot0Time, dtMax, resume, remainingBackoff);
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 82 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static cc2420_status_t CC2420TransmitP__TXFIFO__write(uint8_t * data, uint8_t length){
#line 82
  unsigned char __nesc_result;
#line 82

#line 82
  __nesc_result = CC2420SpiP__Fifo__write(CC2420_TXFIFO, data, length);
#line 82

#line 82
  return __nesc_result;
#line 82
}
#line 82
# 41 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CSN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 41
}
#line 41
#line 40
inline static void CC2420TransmitP__CSN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 40
}
#line 40
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__SFLUSHTX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHTX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 154 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__CC2420Tx__loadTXFIFO(ieee154_txframe_t *data)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      if (CC2420TransmitP__m_state != CC2420TransmitP__S_STARTED) 
        {
          unsigned char __nesc_temp = 
#line 158
          FAIL;

          {
#line 158
            __nesc_atomic_end(__nesc_atomic); 
#line 158
            return __nesc_temp;
          }
        }
#line 159
      CC2420TransmitP__m_state = CC2420TransmitP__S_LOAD;
      CC2420TransmitP__m_frame = data;
      CC2420TransmitP__m_frame->header->length = CC2420TransmitP__m_frame->headerLen + CC2420TransmitP__m_frame->payloadLen + 2;
      CC2420TransmitP__CSN__set();
      CC2420TransmitP__CSN__clr();
      CC2420TransmitP__SFLUSHTX__strobe();
      CC2420TransmitP__CSN__set();
      CC2420TransmitP__CSN__clr();
      CC2420TransmitP__TXFIFO__write(& CC2420TransmitP__m_frame->header->length, 1);
    }
#line 168
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 40 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static error_t CC2420TKN154P__CC2420Tx__loadTXFIFO(ieee154_txframe_t *data){
#line 40
  unsigned char __nesc_result;
#line 40

#line 40
  __nesc_result = CC2420TransmitP__CC2420Tx__loadTXFIFO(data);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t Atm128SpiP__zeroTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(Atm128SpiP__zeroTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 314 "/usr/src/tinyos/tos/lib/mac/tkn154/TKN154_MAC.h"
static inline token_requested_t rcombine(token_requested_t r1, token_requested_t r2)
{
  return r1 || r2;
}

# 445 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline token_requested_t ScanP__IsRadioTokenRequested__getNow(void )
#line 445
{
#line 445
  return ScanP__m_busy;
}

# 146 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline token_requested_t PromiscuousModeP__IsRadioTokenRequested__getNow(void )
#line 146
{
#line 146
  return PromiscuousModeP__m_state == PromiscuousModeP__S_STARTING;
}

# 232 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline token_requested_t PibP__IsRadioTokenRequested__getNow(void )
#line 232
{
#line 232
  return PibP__m_resetSpin != 0;
}

# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
inline static /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__IsRadioTokenRequested__data_type /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__IsRadioTokenRequested__getNow(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = PibP__IsRadioTokenRequested__getNow();
#line 51
  __nesc_result = rcombine(__nesc_result, PromiscuousModeP__IsRadioTokenRequested__getNow());
#line 51
  __nesc_result = rcombine(__nesc_result, ScanP__IsRadioTokenRequested__getNow());
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioToken__release(void ){
#line 137
  unsigned char __nesc_result;
#line 137

#line 137
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(9);
#line 137

#line 137
  return __nesc_result;
#line 137
}
#line 137
# 159 "/usr/src/tinyos/tos/lib/mac/tkn154/RxEnableP.nc"
static inline bool RxEnableP__IsRxEnableActive__getNow(void )
{
  return RxEnableP__m_isRxEnabled;
}

# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
inline static /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__IsRxEnableActive__data_type /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__IsRxEnableActive__getNow(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = RxEnableP__IsRxEnableActive__getNow();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__wasRxEnabledTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__wasRxEnabledTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioOff__off(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = RadioControlImplP__MacRadioOff__off(9);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
inline static AssociateP__LocalExtendedAddress__val_t AssociateP__LocalExtendedAddress__get(void ){
#line 55
  unsigned long long __nesc_result;
#line 55

#line 55
  __nesc_result = PibP__GetLocalExtendedAddress__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 64 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static void AssociateP__FrameUtility__convertToNative(uint64_t *destNative, const uint8_t *srcLE){
#line 64
  PibP__FrameUtility__convertToNative(destNative, srcLE);
#line 64
}
#line 64
# 356 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint32_t __nesc_ntoh_leuint32(const void * source)
#line 356
{
  const uint8_t *base = source;

#line 358
  return ((((uint32_t )base[3] << 24) | (
  (uint32_t )base[2] << 16)) | (
  (uint32_t )base[1] << 8)) | base[0];
}

# 227 "TestDeviceC.nc"
static inline void TestDeviceC__MLME_COMM_STATUS__indication(
uint16_t PANId, 
uint8_t SrcAddrMode, 
ieee154_address_t SrcAddr, 
uint8_t DstAddrMode, 
ieee154_address_t DstAddr, 
ieee154_status_t status, 
ieee154_security_t *security)

{
}

# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_COMM_STATUS.nc"
inline static void AssociateP__MLME_COMM_STATUS__indication(uint16_t PANId, uint8_t SrcAddrMode, ieee154_address_t SrcAddr, uint8_t DstAddrMode, ieee154_address_t DstAddr, ieee154_status_t status, ieee154_security_t *security){
#line 61
  TestDeviceC__MLME_COMM_STATUS__indication(PANId, SrcAddrMode, SrcAddr, DstAddrMode, DstAddr, status, security);
#line 61
}
#line 61
# 138 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t DisassociateP__MLME_SET__macPANId(ieee154_macPANId_t value){
#line 138
  enum ieee154_status __nesc_result;
#line 138

#line 138
  __nesc_result = PibP__MLME_SET__macPANId(value);
#line 138

#line 138
  return __nesc_result;
#line 138
}
#line 138
# 119 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoBeaconTransmitP.nc"
static inline void NoBeaconTransmitP__PIBUpdate__notify(uint8_t attributeID, const void *attributeValue)
{
}

# 549 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__PIBUpdateMacRxOnWhenIdle__notify(const void *val)
#line 549
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 550
    /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__macRxOnWhenIdle = * (ieee154_macRxOnWhenIdle_t *)val;
#line 550
    __nesc_atomic_end(__nesc_atomic); }
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__updateState();
}

# 117 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__PIBUpdateMacRxOnWhenIdle__notify(const void *val)
#line 117
{
}

# 307 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__CC2420Config__setShortAddr(uint16_t addr)
#line 307
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 308
    {
      CC2420ControlP__m_needsSync = TRUE;
      CC2420ControlP__m_short_addr = addr;
    }
#line 311
    __nesc_atomic_end(__nesc_atomic); }
}

# 72 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static void CC2420TKN154P__CC2420Config__setShortAddr(uint16_t address){
#line 72
  CC2420ControlP__CC2420Config__setShortAddr(address);
#line 72
}
#line 72
# 318 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__CC2420Config__setPanAddr(uint16_t pan)
#line 318
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 319
    {
      CC2420ControlP__m_needsSync = TRUE;
      CC2420ControlP__m_pan = pan;
    }
#line 322
    __nesc_atomic_end(__nesc_atomic); }
}

# 78 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static void CC2420TKN154P__CC2420Config__setPanAddr(uint16_t address){
#line 78
  CC2420ControlP__CC2420Config__setPanAddr(address);
#line 78
}
#line 78
# 329 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__CC2420Config__setPanCoordinator(bool pCoord)
#line 329
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 330
    {
      CC2420ControlP__m_needsSync = TRUE;
      CC2420ControlP__m_isPanCoord = pCoord;
    }
#line 333
    __nesc_atomic_end(__nesc_atomic); }
}

# 84 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static void CC2420TKN154P__CC2420Config__setPanCoordinator(bool pcoord){
#line 84
  CC2420ControlP__CC2420Config__setPanCoordinator(pcoord);
#line 84
}
#line 84
# 375 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__CC2420Config__setTxPower(uint8_t txPower)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 377
    {
      CC2420ControlP__m_needsSync = TRUE;
      CC2420ControlP__m_txPower = txPower;
    }
#line 380
    __nesc_atomic_end(__nesc_atomic); }
}

# 102 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static void CC2420TKN154P__CC2420Config__setTxPower(uint8_t txPower){
#line 102
  CC2420ControlP__CC2420Config__setTxPower(txPower);
#line 102
}
#line 102
# 221 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline uint8_t CC2420TKN154P__dBmToPA_LEVEL(int dBm)
{
  uint8_t result;

  if (dBm >= 0) {
    result = 31;
    }
  else {
#line 227
    if (dBm > -2) {
      result = 27;
      }
    else {
#line 229
      if (dBm > -4) {
        result = 23;
        }
      else {
#line 231
        if (dBm > -6) {
          result = 19;
          }
        else {
#line 233
          if (dBm > -9) {
            result = 15;
            }
          else {
#line 235
            if (dBm > -13) {
              result = 11;
              }
            else {
#line 237
              if (dBm > -20) {
                result = 7;
                }
              else {
#line 240
                result = 3;
                }
              }
            }
          }
        }
      }
    }
#line 241
  return result;
}

# 362 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__CC2420Config__setCCAMode(uint8_t mode)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 364
    {
      CC2420ControlP__m_needsSync = TRUE;
      CC2420ControlP__m_CCAMode = mode;
    }
#line 367
    __nesc_atomic_end(__nesc_atomic); }
}

# 96 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static void CC2420TKN154P__CC2420Config__setCCAMode(uint8_t mode){
#line 96
  CC2420ControlP__CC2420Config__setCCAMode(mode);
#line 96
}
#line 96
# 151 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t DisassociateP__MLME_SET__macShortAddress(ieee154_macShortAddress_t value){
#line 151
  enum ieee154_status __nesc_result;
#line 151

#line 151
  __nesc_result = PibP__MLME_SET__macShortAddress(value);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
# 478 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_status_t PibP__MLME_SET__macAssociatedPANCoord(ieee154_macAssociatedPANCoord_t value)
#line 478
{
  PibP__m_pib.macAssociatedPANCoord = value;
  PibP__PIBUpdate__notify(IEEE154_macAssociatedPANCoord, & PibP__m_pib.macAssociatedPANCoord);
  return IEEE154_SUCCESS;
}

# 161 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t DisassociateP__MLME_SET__macAssociatedPANCoord(ieee154_macAssociatedPANCoord_t value){
#line 161
  enum ieee154_status __nesc_result;
#line 161

#line 161
  __nesc_result = PibP__MLME_SET__macAssociatedPANCoord(value);
#line 161

#line 161
  return __nesc_result;
#line 161
}
#line 161
#line 113
inline static ieee154_status_t DisassociateP__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value){
#line 113
  enum ieee154_status __nesc_result;
#line 113

#line 113
  __nesc_result = PibP__MLME_SET__macCoordShortAddress(value);
#line 113

#line 113
  return __nesc_result;
#line 113
}
#line 113
#line 108
inline static ieee154_status_t DisassociateP__MLME_SET__macCoordExtendedAddress(ieee154_macCoordExtendedAddress_t value){
#line 108
  enum ieee154_status __nesc_result;
#line 108

#line 108
  __nesc_result = PibP__MLME_SET__macCoordExtendedAddress(value);
#line 108

#line 108
  return __nesc_result;
#line 108
}
#line 108
# 89 "/usr/src/tinyos/tos/interfaces/Pool.nc"
inline static error_t DataP__TxFramePool__put(DataP__TxFramePool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 266 "/usr/src/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline void DataP__MCPS_DATA__default__confirm(
message_t *msg, 
uint8_t msduHandle, 
ieee154_status_t status, 
uint32_t Timestamp)
#line 270
{
}

# 91 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MCPS/MCPS_DATA.nc"
inline static void DataP__MCPS_DATA__confirm(message_t *frame, uint8_t msduHandle, ieee154_status_t status, uint32_t Timestamp){
#line 91
  DataP__MCPS_DATA__default__confirm(frame, msduHandle, status, Timestamp);
#line 91
}
#line 91
# 56 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 1);
}

# 41 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void LedsP__Led1__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit1*/HplAtm128GeneralIOPinP__1__IO__clr();
#line 41
}
#line 41
# 89 "/usr/src/tinyos/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1On(void )
#line 89
{
  LedsP__Led1__clr();
  ;
#line 91
  ;
}

# 72 "/usr/src/tinyos/tos/interfaces/Leds.nc"
inline static void TestDeviceC__Leds__led1On(void ){
#line 72
  LedsP__Leds__led1On();
#line 72
}
#line 72
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
inline static AssociateP__TxFramePool__t * AssociateP__TxFramePool__get(void ){
#line 97
  struct __nesc_unnamed4318 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
inline static AssociateP__TxControlPool__t * AssociateP__TxControlPool__get(void ){
#line 97
  struct __nesc_unnamed4319 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 54 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t AssociateP__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value){
#line 54
  enum ieee154_status __nesc_result;
#line 54

#line 54
  __nesc_result = PibP__MLME_SET__phyCurrentChannel(value);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
#line 113
inline static ieee154_status_t AssociateP__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value){
#line 113
  enum ieee154_status __nesc_result;
#line 113

#line 113
  __nesc_result = PibP__MLME_SET__macCoordShortAddress(value);
#line 113

#line 113
  return __nesc_result;
#line 113
}
#line 113
# 37 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static uint8_t AssociateP__FrameUtility__writeHeader(uint8_t *mhr, uint8_t DstAddrMode, uint16_t DstPANId, ieee154_address_t *DstAddr, uint8_t SrcAddrMode, uint16_t SrcPANId, const ieee154_address_t *SrcAddr, bool PANIDCompression){
#line 37
  unsigned char __nesc_result;
#line 37

#line 37
  __nesc_result = PibP__FrameUtility__writeHeader(mhr, DstAddrMode, DstPANId, DstAddr, SrcAddrMode, SrcPANId, SrcAddr, PANIDCompression);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static ieee154_status_t AssociateP__AssociationRequestTx__transmit(ieee154_txframe_t *txFrame){
#line 43
  enum ieee154_status __nesc_result;
#line 43

#line 43
  __nesc_result = /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTx__transmit(1U, txFrame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 97 "/usr/src/tinyos/tos/interfaces/Pool.nc"
inline static PollP__TxFramePool__t * PollP__TxFramePool__get(void ){
#line 97
  struct __nesc_unnamed4318 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
inline static PollP__TxControlPool__t * PollP__TxControlPool__get(void ){
#line 97
  struct __nesc_unnamed4319 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 37 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static uint8_t PollP__FrameUtility__writeHeader(uint8_t *mhr, uint8_t DstAddrMode, uint16_t DstPANId, ieee154_address_t *DstAddr, uint8_t SrcAddrMode, uint16_t SrcPANId, const ieee154_address_t *SrcAddr, bool PANIDCompression){
#line 37
  unsigned char __nesc_result;
#line 37

#line 37
  __nesc_result = PibP__FrameUtility__writeHeader(mhr, DstAddrMode, DstPANId, DstAddr, SrcAddrMode, SrcPANId, SrcAddr, PANIDCompression);
#line 37

#line 37
  return __nesc_result;
#line 37
}
#line 37
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
inline static PollP__LocalExtendedAddress__val_t PollP__LocalExtendedAddress__get(void ){
#line 55
  unsigned long long __nesc_result;
#line 55

#line 55
  __nesc_result = PibP__GetLocalExtendedAddress__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 306 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macShortAddress_t PibP__MLME_GET__macShortAddress(void )
#line 306
{
#line 306
  return PibP__m_pib.macShortAddress;
}

# 129 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macShortAddress_t PollP__MLME_GET__macShortAddress(void ){
#line 129
  unsigned short __nesc_result;
#line 129

#line 129
  __nesc_result = PibP__MLME_GET__macShortAddress();
#line 129

#line 129
  return __nesc_result;
#line 129
}
#line 129
#line 120
inline static ieee154_macPANId_t PollP__MLME_GET__macPANId(void ){
#line 120
  unsigned short __nesc_result;
#line 120

#line 120
  __nesc_result = PibP__MLME_GET__macPANId();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 157 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
static inline void PollP__assembleDataRequestFrame(uint8_t destAddrMode, uint16_t destPANId, 
uint8_t *destAddrPtrLE, uint8_t srcAddrMode, ieee154_txframe_t *txFrame)
{

  ieee154_address_t srcAddress;
  uint8_t *mhr;
  uint16_t srcPANId;
  ieee154_address_t DstAddr;

#line 165
  srcPANId = PollP__MLME_GET__macPANId();

  memcpy(&DstAddr, destAddrPtrLE, destAddrMode == 2 ? 2 : 8);
  mhr = txFrame->header->mhr;
  mhr[MHR_INDEX_FC1] = FC1_FRAMETYPE_CMD | FC1_ACK_REQUEST;
  if (destAddrMode >= 2 && srcAddrMode >= 2 && destPANId == srcPANId) {
    mhr[MHR_INDEX_FC1] |= FC1_PAN_ID_COMPRESSION;
    }
#line 172
  mhr[MHR_INDEX_FC2] = destAddrMode << FC2_DEST_MODE_OFFSET;
  mhr[MHR_INDEX_FC2] |= srcAddrMode << FC2_SRC_MODE_OFFSET;
  if (srcAddrMode == 2) {
    srcAddress.shortAddress = PollP__MLME_GET__macShortAddress();
    }
  else {
#line 177
    srcAddress.extendedAddress = PollP__LocalExtendedAddress__get();
    }
#line 178
  txFrame->headerLen = PollP__FrameUtility__writeHeader(
  txFrame->header->mhr, 
  destAddrMode, 
  destPANId, 
  &DstAddr, 
  srcAddrMode, 
  srcPANId, 
  &srcAddress, 
  mhr[MHR_INDEX_FC1] & FC1_PAN_ID_COMPRESSION ? TRUE : FALSE);
  txFrame->payload = &PollP__m_dataRequestCmdID;
  txFrame->payloadLen = 1;
}

# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static ieee154_status_t PollP__PollTx__transmit(ieee154_txframe_t *txFrame){
#line 43
  enum ieee154_status __nesc_result;
#line 43

#line 43
  __nesc_result = /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTx__transmit(6U, txFrame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 139 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 90 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline uint32_t Alarm32khzTo62500hzTransformC__AlarmFrom__default__getAlarm(uint8_t num)
#line 90
{
#line 90
  return 0;
}

# 116 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static Alarm32khzTo62500hzTransformC__AlarmFrom__size_type Alarm32khzTo62500hzTransformC__AlarmFrom__getAlarm(uint8_t arg_0x2ab71e87ac38){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  switch (arg_0x2ab71e87ac38) {
#line 116
    case /*Ieee802154BeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*Ieee802154BeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID);
#line 116
      break;
#line 116
    case /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID);
#line 116
      break;
#line 116
    case /*Ieee802154BeaconEnabledC.MACAlarm1*/Alarm62500hz32VirtualizedC__2__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*Ieee802154BeaconEnabledC.MACAlarm1*/Alarm62500hz32VirtualizedC__2__CLIENT_ID);
#line 116
      break;
#line 116
    case /*Ieee802154BeaconEnabledC.MACAlarm2*/Alarm62500hz32VirtualizedC__3__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*Ieee802154BeaconEnabledC.MACAlarm2*/Alarm62500hz32VirtualizedC__3__CLIENT_ID);
#line 116
      break;
#line 116
    case /*Ieee802154BeaconEnabledC.MACAlarm3*/Alarm62500hz32VirtualizedC__4__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*Ieee802154BeaconEnabledC.MACAlarm3*/Alarm62500hz32VirtualizedC__4__CLIENT_ID);
#line 116
      break;
#line 116
    case /*Ieee802154BeaconEnabledC.MACAlarm4*/Alarm62500hz32VirtualizedC__5__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*Ieee802154BeaconEnabledC.MACAlarm4*/Alarm62500hz32VirtualizedC__5__CLIENT_ID);
#line 116
      break;
#line 116
    case /*Ieee802154BeaconEnabledC.MACAlarm5*/Alarm62500hz32VirtualizedC__6__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*Ieee802154BeaconEnabledC.MACAlarm5*/Alarm62500hz32VirtualizedC__6__CLIENT_ID);
#line 116
      break;
#line 116
    case /*Ieee802154BeaconEnabledC.MACAlarm6*/Alarm62500hz32VirtualizedC__7__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*Ieee802154BeaconEnabledC.MACAlarm6*/Alarm62500hz32VirtualizedC__7__CLIENT_ID);
#line 116
      break;
#line 116
    case /*Ieee802154BeaconEnabledC.MACAlarm7*/Alarm62500hz32VirtualizedC__8__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*Ieee802154BeaconEnabledC.MACAlarm7*/Alarm62500hz32VirtualizedC__8__CLIENT_ID);
#line 116
      break;
#line 116
    case /*Ieee802154BeaconEnabledC.MACAlarm8*/Alarm62500hz32VirtualizedC__9__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*Ieee802154BeaconEnabledC.MACAlarm8*/Alarm62500hz32VirtualizedC__9__CLIENT_ID);
#line 116
      break;
#line 116
    case /*Ieee802154BeaconEnabledC.MACAlarm9*/Alarm62500hz32VirtualizedC__10__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*Ieee802154BeaconEnabledC.MACAlarm9*/Alarm62500hz32VirtualizedC__10__CLIENT_ID);
#line 116
      break;
#line 116
    case /*Ieee802154BeaconEnabledC.MACAlarm10*/Alarm62500hz32VirtualizedC__11__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*Ieee802154BeaconEnabledC.MACAlarm10*/Alarm62500hz32VirtualizedC__11__CLIENT_ID);
#line 116
      break;
#line 116
    case /*Ieee802154BeaconEnabledC.MACAlarm11*/Alarm62500hz32VirtualizedC__12__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*Ieee802154BeaconEnabledC.MACAlarm11*/Alarm62500hz32VirtualizedC__12__CLIENT_ID);
#line 116
      break;
#line 116
    case /*Ieee802154BeaconEnabledC.MACAlarm12*/Alarm62500hz32VirtualizedC__13__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*Ieee802154BeaconEnabledC.MACAlarm12*/Alarm62500hz32VirtualizedC__13__CLIENT_ID);
#line 116
      break;
#line 116
    case /*Ieee802154BeaconEnabledC.MACAlarm13*/Alarm62500hz32VirtualizedC__14__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*Ieee802154BeaconEnabledC.MACAlarm13*/Alarm62500hz32VirtualizedC__14__CLIENT_ID);
#line 116
      break;
#line 116
    case /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__15__CLIENT_ID:
#line 116
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__15__CLIENT_ID);
#line 116
      break;
#line 116
    default:
#line 116
      __nesc_result = Alarm32khzTo62500hzTransformC__AlarmFrom__default__getAlarm(arg_0x2ab71e87ac38);
#line 116
      break;
#line 116
    }
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 59 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline uint32_t Alarm32khzTo62500hzTransformC__Alarm__getAlarm(uint8_t num)
#line 59
{
#line 59
  return Alarm32khzTo62500hzTransformC__AlarmFrom__getAlarm(num) << 1;
}

# 116 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned long __nesc_result;
#line 116

#line 116
  __nesc_result = Alarm32khzTo62500hzTransformC__Alarm__getAlarm(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__15__CLIENT_ID);
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
# 74 "/usr/src/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot == FALSE) {
    /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__m_dt, FALSE);
    }
#line 78
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

# 286 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 281
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

#line 303
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

#line 322
static __inline  uint16_t __nesc_ntoh_leuint16(const void * source)
#line 322
{
  const uint8_t *base = source;

#line 324
  return ((uint16_t )base[1] << 8) | base[0];
}

# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_BEACON_NOTIFY.nc"
inline static message_t *ScanP__MLME_BEACON_NOTIFY__indication(message_t *beaconFrame){
#line 61
  nx_struct message_t *__nesc_result;
#line 61

#line 61
  __nesc_result = TestDeviceC__MLME_BEACON_NOTIFY__indication(beaconFrame);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 132 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154BeaconFrame.nc"
inline static uint8_t ScanP__BeaconFrame__getBeaconPayloadLength(message_t *frame){
#line 132
  unsigned char __nesc_result;
#line 132

#line 132
  __nesc_result = PibP__BeaconFrame__getBeaconPayloadLength(frame);
#line 132

#line 132
  return __nesc_result;
#line 132
}
#line 132
#line 106
inline static error_t ScanP__BeaconFrame__parsePANDescriptor(message_t *frame, uint8_t LogicalChannel, uint8_t ChannelPage, ieee154_PANDescriptor_t *pdescriptor){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = PibP__BeaconFrame__parsePANDescriptor(frame, LogicalChannel, ChannelPage, pdescriptor);
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 164 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num].isrunning = FALSE;
}

# 78 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void ScanP__ScanTimer__stop(void ){
#line 78
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(0U);
#line 78
}
#line 78
# 276 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macAutoRequest_t PibP__MLME_GET__macAutoRequest(void )
#line 276
{
#line 276
  return PibP__m_pib.macAutoRequest;
}

# 81 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macAutoRequest_t ScanP__MLME_GET__macAutoRequest(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = PibP__MLME_GET__macAutoRequest();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 151 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t ScanP__MLME_SET__macShortAddress(ieee154_macShortAddress_t value){
#line 151
  enum ieee154_status __nesc_result;
#line 151

#line 151
  __nesc_result = PibP__MLME_SET__macShortAddress(value);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
#line 54
inline static ieee154_status_t ScanP__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value){
#line 54
  enum ieee154_status __nesc_result;
#line 54

#line 54
  __nesc_result = PibP__MLME_SET__phyCurrentChannel(value);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
#line 113
inline static ieee154_status_t ScanP__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value){
#line 113
  enum ieee154_status __nesc_result;
#line 113

#line 113
  __nesc_result = PibP__MLME_SET__macCoordShortAddress(value);
#line 113

#line 113
  return __nesc_result;
#line 113
}
#line 113
#line 138
inline static ieee154_status_t ScanP__MLME_SET__macPANId(ieee154_macPANId_t value){
#line 138
  enum ieee154_status __nesc_result;
#line 138

#line 138
  __nesc_result = PibP__MLME_SET__macPANId(value);
#line 138

#line 138
  return __nesc_result;
#line 138
}
#line 138
# 736 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void *PibP__Frame__getPayload(message_t *frame)
{
  uint8_t *payload = (uint8_t *)frame->data;

#line 739
  return payload;
}

# 152 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static void *ScanP__Frame__getPayload(message_t *frame){
#line 152
  void *__nesc_result;
#line 152

#line 152
  __nesc_result = PibP__Frame__getPayload(frame);
#line 152

#line 152
  return __nesc_result;
#line 152
}
#line 152
# 347 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline message_t *ScanP__RadioRx__received(message_t *frame)
{
  if (!ScanP__m_busy) {
    return frame;
    }
  if (ScanP__m_scanType == ORPHAN_SCAN) {
      uint8_t *payload = ScanP__Frame__getPayload(frame);

#line 354
      if (!ScanP__m_resultIndex) {
        if ((((ieee154_header_t *)frame->header)->mhr[0] & FC1_FRAMETYPE_MASK) == FC1_FRAMETYPE_CMD && 
        payload[0] == CMD_FRAME_COORDINATOR_REALIGNMENT) {




            ScanP__MLME_SET__macPANId(__nesc_ntoh_leuint16((* (nxle_uint16_t *)&payload[1]).nxdata));
            ScanP__MLME_SET__macCoordShortAddress(__nesc_ntoh_leuint16((* (nxle_uint16_t *)&payload[3]).nxdata));
            ScanP__MLME_SET__phyCurrentChannel(__nesc_ntoh_leuint16((* (nxle_uint16_t *)&payload[5]).nxdata));
            ScanP__MLME_SET__macShortAddress(__nesc_ntoh_leuint16((* (nxle_uint16_t *)&payload[6]).nxdata));
            ScanP__m_resultIndex++;
            ;
            ScanP__m_terminateScan = TRUE;
            ScanP__ScanTimer__stop();
            ScanP__RadioOff__off();
          }
        }
    }
  else {
#line 371
    if ((((ieee154_header_t *)frame->header)->mhr[0] & FC1_FRAMETYPE_MASK) == FC1_FRAMETYPE_BEACON) {







        if (!ScanP__MLME_GET__macAutoRequest()) {
          return ScanP__MLME_BEACON_NOTIFY__indication(frame);
          }
        else {
#line 381
          if (ScanP__m_resultIndex >= ScanP__m_resultListNumEntries) {
              ScanP__m_terminateScan = TRUE;
              ScanP__ScanTimer__stop();
              ScanP__RadioOff__off();
            }
          else {


            if (
#line 385
            ScanP__BeaconFrame__parsePANDescriptor(
            frame, 
            ScanP__m_currentChannelNum, 
            IEEE154_SUPPORTED_CHANNELS >> 27, 
            &((ieee154_PANDescriptor_t *)ScanP__m_resultList)[ScanP__m_resultIndex]) == SUCCESS) {



                uint8_t i;
                ieee154_PANDescriptor_t *descriptor = (ieee154_PANDescriptor_t *)ScanP__m_resultList;

                ;

                for (i = 0; i < ScanP__m_resultIndex; i++) 
                  if (descriptor[i].CoordPANId == descriptor[ScanP__m_resultIndex].CoordPANId && 
                  descriptor[i].CoordAddrMode == descriptor[ScanP__m_resultIndex].CoordAddrMode) {


                    if ((
#line 401
                    descriptor[i].CoordAddrMode == ADDR_MODE_SHORT_ADDRESS && 
                    descriptor[i].CoordAddress.shortAddress == 
                    descriptor[ScanP__m_resultIndex].CoordAddress.shortAddress) || (
                    descriptor[i].CoordAddrMode == ADDR_MODE_EXTENDED_ADDRESS && 
                    descriptor[i].CoordAddress.extendedAddress == 
                    descriptor[ScanP__m_resultIndex].CoordAddress.extendedAddress)) {
                      break;
                      }
                    }
#line 408
                if (i == ScanP__m_resultIndex) {
                  ScanP__m_resultIndex++;
                  }
              }
            }
          }
#line 411
        if (ScanP__BeaconFrame__getBeaconPayloadLength(frame) > 0) {
          return ScanP__MLME_BEACON_NOTIFY__indication(frame);
          }
      }
    }
#line 414
  return frame;
}

# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static error_t BeaconSynchronizeP__RadioOff__off(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = RadioControlImplP__MacRadioOff__off(8);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 73 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void BeaconSynchronizeP__TrackAlarm__stop(void ){
#line 73
  Alarm32khzTo62500hzTransformC__Alarm__stop(/*Ieee802154BeaconEnabledC.MACAlarm2*/Alarm62500hz32VirtualizedC__3__CLIENT_ID);
#line 73
}
#line 73
# 122 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static inline void BeaconSynchronizeP__setBeaconReceived(void )
#line 122
{
#line 122
  BeaconSynchronizeP__m_state |= BeaconSynchronizeP__BEACON_RECEIVED;
}

# 1056 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline bool PibP__isCoordExtendedAddress(uint8_t *addrLE)
{
  uint64_t dest;

#line 1059
  PibP__FrameUtility__convertToNative(&dest, addrLE);
  return dest == PibP__m_pib.macCoordExtendedAddress;
}

#line 629
static inline bool PibP__FrameUtility__isBeaconFromCoord(message_t *frame)
{
  uint8_t offset = MHR_INDEX_ADDRESS;
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;

  if ((mhr[MHR_INDEX_FC1] & FC1_FRAMETYPE_MASK) != FC1_FRAMETYPE_BEACON) {
    return FALSE;
    }
#line 636
  if (!(mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK)) {
    return FALSE;
    }
#line 638
  if (mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) {
    return FALSE;
    }
#line 640
  if (__nesc_ntoh_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata) != PibP__m_pib.macPANId) {
    return FALSE;
    }
#line 642
  offset += 2;
  if ((mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) == FC2_SRC_MODE_SHORT) {
      if (__nesc_ntoh_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata) != PibP__m_pib.macCoordShortAddress) {
        return FALSE;
        }
    }
  else {
#line 646
    if ((mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) == FC2_SRC_MODE_EXTENDED) {
        if (!PibP__isCoordExtendedAddress(mhr + offset)) {
          return FALSE;
          }
      }
    }
#line 650
  return TRUE;
}

# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static bool BeaconSynchronizeP__FrameUtility__isBeaconFromCoord(message_t *frame){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = PibP__FrameUtility__isBeaconFromCoord(frame);
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 124 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static inline bool BeaconSynchronizeP__wasBeaconReceived(void )
#line 124
{
#line 124
  return BeaconSynchronizeP__m_state & BeaconSynchronizeP__BEACON_RECEIVED ? TRUE : FALSE;
}

#line 332
static inline message_t *BeaconSynchronizeP__BeaconRx__received(message_t *frame)
{
  if (BeaconSynchronizeP__wasBeaconReceived()) {
      ;
      return frame;
    }
  else {
#line 337
    if (!BeaconSynchronizeP__FrameUtility__isBeaconFromCoord(frame)) {
        ;
        return frame;
      }
    else 
#line 340
      {
        message_t *tmp = BeaconSynchronizeP__m_beaconPtr;

#line 342
        BeaconSynchronizeP__setBeaconReceived();
        BeaconSynchronizeP__m_beaconPtr = frame;
        ;

        if (BeaconSynchronizeP__getRxState() == BeaconSynchronizeP__RX_RECEIVING) {
            BeaconSynchronizeP__TrackAlarm__stop();
            BeaconSynchronizeP__RadioOff__off();
          }
        return tmp;
      }
    }
}

# 272 "/usr/src/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline message_t *DataP__MCPS_DATA__default__indication(message_t *frame)
#line 272
{
#line 272
  return frame;
}

# 105 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MCPS/MCPS_DATA.nc"
inline static message_t *DataP__MCPS_DATA__indication(message_t *frame){
#line 105
  nx_struct message_t *__nesc_result;
#line 105

#line 105
  __nesc_result = DataP__MCPS_DATA__default__indication(frame);
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 220 "/usr/src/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline message_t *DataP__dataReceived(message_t *frame)
{
  return DataP__MCPS_DATA__indication(frame);
}

#line 215
static inline message_t *DataP__DeviceCapRx__received(message_t *frame)
{
  return DataP__dataReceived(frame);
}

# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
inline static message_t *PollP__DataRx__received(message_t *frame){
#line 43
  nx_struct message_t *__nesc_result;
#line 43

#line 43
  __nesc_result = DataP__DeviceCapRx__received(frame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 555 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static inline void BeaconSynchronizeP__DataRequest__pollDone(void )
#line 555
{
}

# 224 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
static inline void PollP__DataRequest__default__pollDone(uint8_t client)
#line 224
{
}

# 52 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
inline static void PollP__DataRequest__pollDone(uint8_t arg_0x2ab71d6f9af0){
#line 52
  switch (arg_0x2ab71d6f9af0) {
#line 52
    case 0U:
#line 52
      BeaconSynchronizeP__DataRequest__pollDone();
#line 52
      break;
#line 52
    case 1U:
#line 52
      AssociateP__DataRequest__pollDone();
#line 52
      break;
#line 52
    default:
#line 52
      PollP__DataRequest__default__pollDone(arg_0x2ab71d6f9af0);
#line 52
      break;
#line 52
    }
#line 52
}
#line 52
# 223 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
static inline void PollP__MLME_POLL__default__confirm(ieee154_status_t status)
#line 223
{
}

# 73 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_POLL.nc"
inline static void PollP__MLME_POLL__confirm(ieee154_status_t status){
#line 73
  PollP__MLME_POLL__default__confirm(status);
#line 73
}
#line 73
# 191 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
static inline message_t *PollP__DataExtracted__received(message_t *frame, ieee154_txframe_t *txFrame)
{
  if (!txFrame) {
      ;
      return frame;
    }
  else {
#line 197
    ;
    }
#line 198
  if (txFrame->handle == PollP__HANDLE_MLME_POLL_REQUEST) {
    PollP__MLME_POLL__confirm(IEEE154_SUCCESS);
    }
  else {
#line 201
    PollP__DataRequest__pollDone(txFrame->handle);
    }
#line 202
  txFrame->handle = PollP__HANDLE_MLME_POLL_SUCCESS;

  return PollP__DataRx__received(frame);
}

# 210 "/usr/src/tinyos/tos/lib/mac/tkn154/DisassociateP.nc"
static inline message_t *DisassociateP__DisassociationExtractedFromCoord__received(message_t *frame, ieee154_txframe_t *txFrame)
{

  return DisassociateP__DisassociationDirectRxFromCoord__received(frame);
}

# 129 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macShortAddress_t AssociateP__MLME_GET__macShortAddress(void ){
#line 129
  unsigned short __nesc_result;
#line 129

#line 129
  __nesc_result = PibP__MLME_GET__macShortAddress();
#line 129

#line 129
  return __nesc_result;
#line 129
}
#line 129
# 121 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_ASSOCIATE.nc"
inline static void AssociateP__MLME_ASSOCIATE__confirm(uint16_t AssocShortAddress, uint8_t status, ieee154_security_t *security){
#line 121
  TestDeviceC__MLME_ASSOCIATE__confirm(AssocShortAddress, status, security);
#line 121
}
#line 121
# 138 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t AssociateP__MLME_SET__macPANId(ieee154_macPANId_t value){
#line 138
  enum ieee154_status __nesc_result;
#line 138

#line 138
  __nesc_result = PibP__MLME_SET__macPANId(value);
#line 138

#line 138
  return __nesc_result;
#line 138
}
#line 138
#line 108
inline static ieee154_status_t AssociateP__MLME_SET__macCoordExtendedAddress(ieee154_macCoordExtendedAddress_t value){
#line 108
  enum ieee154_status __nesc_result;
#line 108

#line 108
  __nesc_result = PibP__MLME_SET__macCoordExtendedAddress(value);
#line 108

#line 108
  return __nesc_result;
#line 108
}
#line 108
# 787 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline error_t PibP__Frame__getSrcAddr(message_t *frame, ieee154_address_t *address)
{
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;
  uint8_t offset = MHR_INDEX_ADDRESS;
  uint8_t destMode = mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK;

#line 792
  if (!(mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_SHORT)) {
    return FAIL;
    }
#line 794
  if (destMode == FC2_DEST_MODE_SHORT) {
    offset += 4;
    }
  else {
#line 796
    if (destMode == FC2_DEST_MODE_EXTENDED) {
      offset += 10;
      }
    }
#line 798
  if (!(mhr[MHR_INDEX_FC1] & FC1_PAN_ID_COMPRESSION && mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_SHORT)) {
    offset += 2;
    }
#line 800
  if ((mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) == FC2_SRC_MODE_SHORT) {
    address->shortAddress = __nesc_ntoh_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata);
    }
  else {
#line 803
    PibP__FrameUtility__convertToNative(& address->extendedAddress, &mhr[offset]);
    }
#line 804
  return SUCCESS;
}

# 69 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static error_t AssociateP__Frame__getSrcAddr(message_t *frame, ieee154_address_t *address){
#line 69
  unsigned char __nesc_result;
#line 69

#line 69
  __nesc_result = PibP__Frame__getSrcAddr(frame, address);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 781 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline uint8_t PibP__Frame__getSrcAddrMode(message_t *frame)
{
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;

#line 784
  return (mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) >> FC2_SRC_MODE_OFFSET;
}

# 55 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static uint8_t AssociateP__Frame__getSrcAddrMode(message_t *frame){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = PibP__Frame__getSrcAddrMode(frame);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 151 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t AssociateP__MLME_SET__macShortAddress(ieee154_macShortAddress_t value){
#line 151
  enum ieee154_status __nesc_result;
#line 151

#line 151
  __nesc_result = PibP__MLME_SET__macShortAddress(value);
#line 151

#line 151
  return __nesc_result;
#line 151
}
#line 151
# 78 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void AssociateP__ResponseTimeout__stop(void ){
#line 78
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(2U);
#line 78
}
#line 78
# 173 "/usr/src/tinyos/tos/lib/mac/tkn154/AssociateP.nc"
static inline message_t *AssociateP__AssociationResponseExtracted__received(message_t *frame, ieee154_txframe_t *txFrame)
{
  uint8_t *payload = (uint8_t *)& frame->data;
  ieee154_macShortAddress_t shortAddress = __nesc_ntoh_leuint16((* (nxle_uint16_t *)(payload + 1)).nxdata);
  ieee154_association_status_t assocRespStatus = *(payload + 3);

  if (AssociateP__m_associationOngoing) {
      AssociateP__ResponseTimeout__stop();
      AssociateP__m_associationOngoing = FALSE;
      if (assocRespStatus == IEEE154_ASSOCIATION_SUCCESSFUL) {
          AssociateP__MLME_SET__macShortAddress(shortAddress);
          if (AssociateP__MLME_GET__macCoordShortAddress() != 0xFFFF && 
          AssociateP__Frame__getSrcAddrMode(frame) == ADDR_MODE_EXTENDED_ADDRESS) {
              ieee154_address_t coordExtendedAddress;

#line 187
              AssociateP__Frame__getSrcAddr(frame, &coordExtendedAddress);
              AssociateP__MLME_SET__macCoordExtendedAddress(coordExtendedAddress.extendedAddress);
            }
        }
      else {
#line 191
        AssociateP__MLME_SET__macPANId(0xFFFF);
        }
#line 192
      AssociateP__MLME_ASSOCIATE__confirm(AssociateP__MLME_GET__macShortAddress(), assocRespStatus, (void *)0);
      ;
    }

  return frame;
}

# 756 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline message_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameExtracted__default__received(uint8_t client, message_t *msg, ieee154_txframe_t *txFrame)
#line 756
{
#line 756
  return msg;
}

# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameExtracted.nc"
inline static message_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameExtracted__received(uint8_t arg_0x2ab71d9d4c50, message_t *rxFrame, ieee154_txframe_t *txFrame){
#line 43
  nx_struct message_t *__nesc_result;
#line 43

#line 43
  switch (arg_0x2ab71d9d4c50) {
#line 43
    case FC1_FRAMETYPE_DATA:
#line 43
      __nesc_result = PollP__DataExtracted__received(rxFrame, txFrame);
#line 43
      break;
#line 43
    case FC1_FRAMETYPE_CMD + CMD_FRAME_ASSOCIATION_RESPONSE:
#line 43
      __nesc_result = AssociateP__AssociationResponseExtracted__received(rxFrame, txFrame);
#line 43
      break;
#line 43
    case FC1_FRAMETYPE_CMD + CMD_FRAME_DISASSOCIATION_NOTIFICATION:
#line 43
      __nesc_result = DisassociateP__DisassociationExtractedFromCoord__received(rxFrame, txFrame);
#line 43
      break;
#line 43
    default:
#line 43
      __nesc_result = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameExtracted__default__received(arg_0x2ab71d9d4c50, rxFrame, txFrame);
#line 43
      break;
#line 43
    }
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 665 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline message_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioRx__received(message_t *frame)
{


  uint8_t *payload = (uint8_t *)frame->data;
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;
  uint8_t frameType = mhr[MHR_INDEX_FC1] & FC1_FRAMETYPE_MASK;

  if (frameType == FC1_FRAMETYPE_CMD) {
    frameType += payload[0];
    }
#line 675
  ;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 677
    {
      if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__DEVICE_ROLE && (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_indirectTxPending || /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_broadcastRxPending)) {
          message_t *frameBuf;

#line 680
          /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxWaitAlarm__stop();





          /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_txStatus = IEEE154_SUCCESS;
          if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_indirectTxPending) {
            frameBuf = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameExtracted__received(frameType, frame, /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lastFrame);
            }
          else {
#line 690
            frameBuf = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameRx__received(frameType, frame);
            }
#line 691
          /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxWaitAlarm__fired();
          {
            nx_struct message_t *__nesc_temp = 
#line 692
            frameBuf;

            {
#line 692
              __nesc_atomic_end(__nesc_atomic); 
#line 692
              return __nesc_temp;
            }
          }
        }
      else 
#line 694
        {
          nx_struct message_t *__nesc_temp = 
#line 694
          /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameRx__received(frameType, frame);

          {
#line 694
            __nesc_atomic_end(__nesc_atomic); 
#line 694
            return __nesc_temp;
          }
        }
    }
#line 697
    __nesc_atomic_end(__nesc_atomic); }
}

# 109 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDispatchSlottedCsmaP.nc"
static inline message_t */*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioRx__received(message_t *frame)
#line 109
{
#line 109
  return frame;
}

# 205 "/usr/src/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline message_t *DataP__DeviceCfpRx__received(message_t *frame)
{
  return DataP__dataReceived(frame);
}

# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
inline static message_t *NoDeviceCfpP__FrameRx__received(message_t *frame){
#line 43
  nx_struct message_t *__nesc_result;
#line 43

#line 43
  __nesc_result = DataP__DeviceCfpRx__received(frame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 161 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDeviceCfpP.nc"
static inline message_t *NoDeviceCfpP__RadioRx__received(message_t *frame)
{
  return NoDeviceCfpP__FrameRx__received(frame);
}

# 200 "/usr/src/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline message_t *DataP__CoordCfpRx__received(message_t *frame)
{
  return DataP__dataReceived(frame);
}

# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
inline static message_t *NoCoordCfpP__FrameRx__received(message_t *frame){
#line 43
  nx_struct message_t *__nesc_result;
#line 43

#line 43
  __nesc_result = DataP__CoordCfpRx__received(frame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 165 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoCoordCfpP.nc"
static inline message_t *NoCoordCfpP__RadioRx__received(message_t *frame)
{
  return NoCoordCfpP__FrameRx__received(frame);
}

# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
inline static message_t *PromiscuousModeP__FrameRx__received(message_t *frame){
#line 43
  nx_struct message_t *__nesc_result;
#line 43

#line 43
  __nesc_result = DataP__DeviceCapRx__received(frame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 108 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline message_t *PromiscuousModeP__PromiscuousRx__received(message_t *frame)
{
  if (PromiscuousModeP__m_state == PromiscuousModeP__S_STARTED) {
      ((ieee154_header_t *)frame->header)->length |= FRAMECTL_PROMISCUOUS;
      return PromiscuousModeP__FrameRx__received(frame);
    }
  else {
#line 114
    return frame;
    }
}

# 109 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline message_t *RadioControlImplP__MacRx__default__received(uint8_t client, message_t *frame)
{
  while (!0) {
#line 111
      break;
    }
#line 111
  ;
  return frame;
}

# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static message_t *RadioControlImplP__MacRx__received(uint8_t arg_0x2ab71d5a4d58, message_t *frame){
#line 84
  nx_struct message_t *__nesc_result;
#line 84

#line 84
  switch (arg_0x2ab71d5a4d58) {
#line 84
    case 0:
#line 84
      __nesc_result = ScanP__RadioRx__received(frame);
#line 84
      break;
#line 84
    case 2:
#line 84
      __nesc_result = PromiscuousModeP__PromiscuousRx__received(frame);
#line 84
      break;
#line 84
    case 5:
#line 84
      __nesc_result = /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioRx__received(frame);
#line 84
      break;
#line 84
    case 6:
#line 84
      __nesc_result = NoCoordCfpP__RadioRx__received(frame);
#line 84
      break;
#line 84
    case 8:
#line 84
      __nesc_result = BeaconSynchronizeP__BeaconRx__received(frame);
#line 84
      break;
#line 84
    case 9:
#line 84
      __nesc_result = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioRx__received(frame);
#line 84
      break;
#line 84
    case 10:
#line 84
      __nesc_result = NoDeviceCfpP__RadioRx__received(frame);
#line 84
      break;
#line 84
    default:
#line 84
      __nesc_result = RadioControlImplP__MacRx__default__received(arg_0x2ab71d5a4d58, frame);
#line 84
      break;
#line 84
    }
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 70 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline bool PromiscuousModeP__PromiscuousModeGet__get(void )
{
  return PromiscuousModeP__m_state == PromiscuousModeP__S_STARTED;
}

# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
inline static RadioControlImplP__RadioPromiscuousMode__val_t RadioControlImplP__RadioPromiscuousMode__get(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = PromiscuousModeP__PromiscuousModeGet__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 78 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline message_t *RadioControlImplP__PhyRx__received(message_t *msg)
{
  uint8_t *mhr = ((ieee154_header_t *)msg->header)->mhr;

  ;



  if ((
#line 85
  mhr[1] & FC2_FRAME_VERSION_MASK) > FC2_FRAME_VERSION_1
   && !RadioControlImplP__RadioPromiscuousMode__get()) {
    return msg;
    }


  if (
#line 90
  mhr[0] & FC1_SECURITY_ENABLED
   && !RadioControlImplP__RadioPromiscuousMode__get()) {
    return msg;
    }
  return RadioControlImplP__MacRx__received(RadioControlImplP__ArbiterInfo__userId(), msg);
}

# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static message_t *CC2420TKN154P__RadioRx__received(message_t *frame){
#line 84
  nx_struct message_t *__nesc_result;
#line 84

#line 84
  __nesc_result = RadioControlImplP__PhyRx__received(frame);
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 430 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline message_t *CC2420TKN154P__CC2420Rx__received(message_t *frame)
{
  if (CC2420TKN154P__m_state == CC2420TKN154P__S_RECEIVING) {
    return CC2420TKN154P__RadioRx__received(frame);
    }
  else {
#line 435
    return frame;
    }
}

# 45 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Rx.nc"
inline static message_t *CC2420ReceiveP__CC2420Rx__received(message_t *data){
#line 45
  nx_struct message_t *__nesc_result;
#line 45

#line 45
  __nesc_result = CC2420TKN154P__CC2420Rx__received(data);
#line 45

#line 45
  return __nesc_result;
#line 45
}
#line 45
# 399 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__receiveDone_task__runTask(void )
#line 399
{
  uint8_t payloadLen = ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length - CC2420ReceiveP__m_mhrLen - 2;
  ieee154_metadata_t *metadata = (ieee154_metadata_t *)CC2420ReceiveP__m_rxFramePtr->metadata;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 403
    while (!(CC2420ReceiveP__m_state != CC2420ReceiveP__S_STOPPED)) {
#line 403
        break;
      }
#line 404
    __nesc_atomic_end(__nesc_atomic); }
#line 403
  ;
  ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length = __nesc_ntoh_uint8(CC2420ReceiveP__m_rxFramePtr->data[payloadLen + 1].nxdata) & 0x7f;
  __nesc_hton_int8(metadata->rssi.nxdata, __nesc_ntoh_uint8(CC2420ReceiveP__m_rxFramePtr->data[payloadLen].nxdata));
  __nesc_hton_uint8(metadata->linkQuality.nxdata, ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length);
  ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length = payloadLen;
  CC2420ReceiveP__m_rxFramePtr = CC2420ReceiveP__CC2420Rx__received(CC2420ReceiveP__m_rxFramePtr);
#line 421
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 421
    CC2420ReceiveP__receivingPacket = FALSE;
#line 421
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP__waitForNextPacket();
}

# 220 "TestDeviceC.nc"
static inline void TestDeviceC__MLME_DISASSOCIATE__indication(
uint64_t DeviceAddress, 
ieee154_disassociation_reason_t DisassociateReason, 
ieee154_security_t *security)
{
}

# 81 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_DISASSOCIATE.nc"
inline static void DisassociateP__MLME_DISASSOCIATE__indication(uint64_t DeviceAddress, ieee154_disassociation_reason_t DisassociateReason, ieee154_security_t *security){
#line 81
  TestDeviceC__MLME_DISASSOCIATE__indication(DeviceAddress, DisassociateReason, security);
#line 81
}
#line 81
# 264 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_phyCurrentPage_t PibP__MLME_GET__phyCurrentPage(void )
#line 264
{
#line 264
  return PibP__m_pib.phyCurrentPage;
}

# 63 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_phyCurrentPage_t BeaconSynchronizeP__MLME_GET__phyCurrentPage(void ){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = PibP__MLME_GET__phyCurrentPage();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 742 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline uint8_t PibP__Frame__getPayloadLength(message_t *frame)
{
  uint8_t len = ((ieee154_header_t *)frame->header)->length & FRAMECTL_LENGTH_MASK;

#line 745
  return len;
}

# 160 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static uint8_t BeaconSynchronizeP__Frame__getPayloadLength(message_t *frame){
#line 160
  unsigned char __nesc_result;
#line 160

#line 160
  __nesc_result = PibP__Frame__getPayloadLength(frame);
#line 160

#line 160
  return __nesc_result;
#line 160
}
#line 160
# 197 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_SYNC_LOSS__indication(
ieee154_status_t lossReason, 
uint16_t PANId, 
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
ieee154_security_t *security)

{

  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__reset(IEEE154_NO_BEACON);
}

# 210 "TestDeviceC.nc"
static inline void TestDeviceC__MLME_SYNC_LOSS__indication(
ieee154_status_t lossReason, 
uint16_t PANId, 
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
ieee154_security_t *security)
{
  TestDeviceC__startApp();
}

# 59 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SYNC_LOSS.nc"
inline static void BeaconSynchronizeP__MLME_SYNC_LOSS__indication(ieee154_status_t lossReason, uint16_t PANId, uint8_t LogicalChannel, uint8_t ChannelPage, ieee154_security_t *security){
#line 59
  TestDeviceC__MLME_SYNC_LOSS__indication(lossReason, PANId, LogicalChannel, ChannelPage, security);
#line 59
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_SYNC_LOSS__indication(lossReason, PANId, LogicalChannel, ChannelPage, security);
#line 59
}
#line 59
# 120 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macPANId_t BeaconSynchronizeP__MLME_GET__macPANId(void ){
#line 120
  unsigned short __nesc_result;
#line 120

#line 120
  __nesc_result = PibP__MLME_GET__macPANId();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 152 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static void *BeaconSynchronizeP__Frame__getPayload(message_t *frame){
#line 152
  void *__nesc_result;
#line 152

#line 152
  __nesc_result = PibP__Frame__getPayload(frame);
#line 152

#line 152
  return __nesc_result;
#line 152
}
#line 152
# 565 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static inline message_t *BeaconSynchronizeP__CoordRealignmentRx__received(message_t *frame)
{
  uint8_t *payload = BeaconSynchronizeP__Frame__getPayload(frame);
  ieee154_macPANId_t panID = __nesc_ntoh_leuint16((* (nxle_uint16_t *)&payload[1]).nxdata);

#line 569
  if (panID == BeaconSynchronizeP__MLME_GET__macPANId()) {
    BeaconSynchronizeP__MLME_SYNC_LOSS__indication(
    IEEE154_REALIGNMENT, 
    panID, 
    payload[5], 
    BeaconSynchronizeP__Frame__getPayloadLength(frame) == 9 ? payload[8] : BeaconSynchronizeP__MLME_GET__phyCurrentPage(), 
    (void *)0);
    }
#line 576
  return frame;
}

# 378 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_status_t PibP__MLME_SET__macAutoRequest(ieee154_macAutoRequest_t value)
#line 378
{
  PibP__m_pib.macAutoRequest = value;
  PibP__PIBUpdate__notify(IEEE154_macAutoRequest, & PibP__m_pib.macAutoRequest);
  return IEEE154_SUCCESS;
}

# 80 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t TestDeviceC__MLME_SET__macAutoRequest(ieee154_macAutoRequest_t value){
#line 80
  enum ieee154_status __nesc_result;
#line 80

#line 80
  __nesc_result = PibP__MLME_SET__macAutoRequest(value);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t ScanP__RadioToken__request(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__request(0);
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 120 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macPANId_t ScanP__MLME_GET__macPANId(void ){
#line 120
  unsigned short __nesc_result;
#line 120

#line 120
  __nesc_result = PibP__MLME_GET__macPANId();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 89 "/usr/src/tinyos/tos/interfaces/Pool.nc"
inline static error_t ScanP__TxFramePool__put(ScanP__TxFramePool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89








inline static ScanP__TxControlPool__t * ScanP__TxControlPool__get(void ){
#line 97
  struct __nesc_unnamed4319 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
inline static ScanP__TxFramePool__t * ScanP__TxFramePool__get(void ){
#line 97
  struct __nesc_unnamed4318 *__nesc_result;
#line 97

#line 97
  __nesc_result = /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__get();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
# 258 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_phyChannelsSupported_t PibP__MLME_GET__phyChannelsSupported(void )
#line 258
{
#line 258
  return IEEE154_SUPPORTED_CHANNELS;
}

# 54 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_phyChannelsSupported_t ScanP__MLME_GET__phyChannelsSupported(void ){
#line 54
  unsigned long __nesc_result;
#line 54

#line 54
  __nesc_result = PibP__MLME_GET__phyChannelsSupported();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 115 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline ieee154_status_t ScanP__MLME_SCAN__request(
uint8_t ScanType, 
uint32_t ScanChannels, 
uint8_t ScanDuration, 
uint8_t ChannelPage, 
uint8_t EnergyDetectListNumEntries, 
int8_t *EnergyDetectList, 
uint8_t PANDescriptorListNumEntries, 
ieee154_PANDescriptor_t *PANDescriptorList, 
ieee154_security_t *security)
{
  ieee154_status_t status = IEEE154_SUCCESS;
  ieee154_phyChannelsSupported_t supportedChannels = ScanP__MLME_GET__phyChannelsSupported();
  ieee154_txcontrol_t *txControl = (void *)0;

  if (ScanP__m_busy) {
      status = IEEE154_SCAN_IN_PROGRESS;
    }
  else {
#line 132
    if (security && security->SecurityLevel) {
        status = IEEE154_UNSUPPORTED_SECURITY;
      }
    }
  if ((((
#line 134
  ScanType > 3 || (ScanType < 3 && ScanDuration > 14)) || 
  ChannelPage != (IEEE154_SUPPORTED_CHANNELS >> 27)) || 
  !(supportedChannels & ScanChannels)) || (
  ScanType != ORPHAN_SCAN && ((((
  EnergyDetectListNumEntries && PANDescriptorListNumEntries) || (
  EnergyDetectList != (void *)0 && PANDescriptorList != (void *)0)) || (
  EnergyDetectListNumEntries && EnergyDetectList == (void *)0)) || (
  PANDescriptorListNumEntries && PANDescriptorList == (void *)0)))) {
      status = IEEE154_INVALID_PARAMETER;
    }
  else {
#line 143
    if ((ScanType == ACTIVE_SCAN || ScanType == ORPHAN_SCAN) && (
    ScanP__m_txFrame = ScanP__TxFramePool__get()) == (void *)0) {
        status = IEEE154_TRANSACTION_OVERFLOW;
      }
    else {
#line 146
      if ((ScanType == ACTIVE_SCAN || ScanType == ORPHAN_SCAN) && (
      txControl = ScanP__TxControlPool__get()) == (void *)0) {
          ScanP__TxFramePool__put(ScanP__m_txFrame);
          ScanP__m_txFrame = (void *)0;
          status = IEEE154_TRANSACTION_OVERFLOW;
        }
      else 
#line 151
        {
          if (ScanP__m_txFrame != (void *)0) {
              ScanP__m_txFrame->header = & txControl->header;
              ScanP__m_txFrame->payload = ScanP__m_payload;
              ScanP__m_txFrame->metadata = & txControl->metadata;
            }
          ScanP__m_busy = TRUE;
          ScanP__m_scanType = ScanType;
          ScanP__m_scanChannels = ScanChannels;
          ScanP__m_scanDuration = (((uint32_t )1 << ScanDuration) + 1) * IEEE154_aBaseSuperframeDuration;
          ScanP__m_PANID = ScanP__MLME_GET__macPANId();
          ScanP__m_currentChannelNum = 0;
          ScanP__m_terminateScan = FALSE;
          ScanP__m_resultIndex = 0;
          if (ScanType == ENERGY_DETECTION_SCAN) {
              ScanP__m_resultList = EnergyDetectList;
              ScanP__m_resultListNumEntries = EnergyDetectListNumEntries;
            }
          else 
#line 168
            {
              ScanP__m_resultList = PANDescriptorList;
              ScanP__m_resultListNumEntries = PANDescriptorListNumEntries;
            }
          if (ScanP__m_resultList == (void *)0) {
            ScanP__m_resultListNumEntries = 0;
            }
#line 174
          ScanP__RadioToken__request();
        }
      }
    }
#line 176
  ;
  return status;
}

# 87 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SCAN.nc"
inline static ieee154_status_t TestDeviceC__MLME_SCAN__request(uint8_t ScanType, uint32_t ScanChannels, uint8_t ScanDuration, uint8_t ChannelPage, uint8_t EnergyDetectListNumEntries, int8_t *EnergyDetectList, uint8_t PANDescriptorListNumEntries, ieee154_PANDescriptor_t *PANDescriptorList, ieee154_security_t *security){
#line 87
  enum ieee154_status __nesc_result;
#line 87

#line 87
  __nesc_result = ScanP__MLME_SCAN__request(ScanType, ScanChannels, ScanDuration, ChannelPage, EnergyDetectListNumEntries, EnergyDetectList, PANDescriptorListNumEntries, PANDescriptorList, security);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 53 "/usr/src/tinyos/tos/system/QueueC.nc"
static inline bool /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__empty(void )
#line 53
{
  return /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__size == 0;
}

# 320 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macResponseWaitTime_t PibP__MLME_GET__macResponseWaitTime(void )
#line 320
{
#line 320
  return PibP__m_pib.macResponseWaitTime;
}

# 150 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macResponseWaitTime_t AssociateP__MLME_GET__macResponseWaitTime(void ){
#line 150
  unsigned char __nesc_result;
#line 150

#line 150
  __nesc_result = PibP__MLME_GET__macResponseWaitTime();
#line 150

#line 150
  return __nesc_result;
#line 150
}
#line 150
# 73 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void AssociateP__ResponseTimeout__startOneShot(uint32_t dt){
#line 73
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(2U, dt);
#line 73
}
#line 73
# 89 "/usr/src/tinyos/tos/interfaces/Pool.nc"
inline static error_t AssociateP__TxFramePool__put(AssociateP__TxFramePool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
inline static error_t AssociateP__TxControlPool__put(AssociateP__TxControlPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 157 "/usr/src/tinyos/tos/lib/mac/tkn154/AssociateP.nc"
static inline void AssociateP__AssociationRequestTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  AssociateP__TxControlPool__put((ieee154_txcontrol_t *)((uint8_t *)txFrame->header - (unsigned short )& ((ieee154_txcontrol_t *)0)->header));
  AssociateP__TxFramePool__put(txFrame);
  if (status != IEEE154_SUCCESS) {
      ;
      AssociateP__m_associationOngoing = FALSE;
      AssociateP__MLME_ASSOCIATE__confirm(0xFFFF, status, 0);
    }
  else 
#line 165
    {

      AssociateP__ResponseTimeout__startOneShot(AssociateP__MLME_GET__macResponseWaitTime() * IEEE154_aBaseSuperframeDuration);
      ;
    }
}

# 94 "/usr/src/tinyos/tos/system/LedsP.nc"
static inline void LedsP__Leds__led1Off(void )
#line 94
{
  LedsP__Led1__set();
  ;
#line 96
  ;
}

# 77 "/usr/src/tinyos/tos/interfaces/Leds.nc"
inline static void TestDeviceC__Leds__led1Off(void ){
#line 77
  LedsP__Leds__led1Off();
#line 77
}
#line 77
# 190 "TestDeviceC.nc"
static inline void TestDeviceC__MLME_DISASSOCIATE__confirm(
ieee154_status_t status, 
uint8_t DeviceAddrMode, 
uint16_t DevicePANID, 
ieee154_address_t DeviceAddress)

{
  if (status == IEEE154_SUCCESS) {
      TestDeviceC__Leds__led1Off();
    }
  else 
#line 199
    {
      TestDeviceC__DisassociateTimer__startOneShot(312500U);
    }
}

# 101 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_DISASSOCIATE.nc"
inline static void DisassociateP__MLME_DISASSOCIATE__confirm(ieee154_status_t status, uint8_t DeviceAddrMode, uint16_t DevicePANID, ieee154_address_t DeviceAddress){
#line 101
  TestDeviceC__MLME_DISASSOCIATE__confirm(status, DeviceAddrMode, DevicePANID, DeviceAddress);
#line 101
}
#line 101
# 64 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static void DisassociateP__FrameUtility__convertToNative(uint64_t *destNative, const uint8_t *srcLE){
#line 64
  PibP__FrameUtility__convertToNative(destNative, srcLE);
#line 64
}
#line 64
# 149 "/usr/src/tinyos/tos/lib/mac/tkn154/DisassociateP.nc"
static inline void DisassociateP__DisassociationToCoord__transmitDone(ieee154_txframe_t *data, ieee154_status_t status)
{

  uint8_t *mhr = ((ieee154_header_t *)data->header)->mhr;
#line 152
  uint8_t srcAddrOffset = 7;
  uint8_t DeviceAddrMode = (mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) >> FC2_SRC_MODE_OFFSET;
  uint16_t DevicePANID = __nesc_ntoh_leuint16((* (nxle_uint16_t *)&mhr[MHR_INDEX_ADDRESS]).nxdata);
  ieee154_address_t DeviceAddress;

  if ((mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) == FC2_DEST_MODE_EXTENDED) {
    srcAddrOffset += 6;
    }
#line 159
  DisassociateP__FrameUtility__convertToNative(& DeviceAddress.extendedAddress, &mhr[srcAddrOffset]);
  DisassociateP__TxControlPool__put((ieee154_txcontrol_t *)((uint8_t *)data->header - (unsigned short )& ((ieee154_txcontrol_t *)0)->header));
  DisassociateP__TxFramePool__put(data);
  ;
  DisassociateP__m_disAssociationOngoing = FALSE;



  if (status == IEEE154_SUCCESS || status == IEEE154_NO_ACK) {
    DisassociateP__resetPanValuesInPib();
    }
#line 169
  DisassociateP__MLME_DISASSOCIATE__confirm(status, DeviceAddrMode, DevicePANID, DeviceAddress);
}

# 240 "/usr/src/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline void DataP__DeviceCapTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  DataP__finishTxTransaction(txFrame, status);
}

# 89 "/usr/src/tinyos/tos/interfaces/Pool.nc"
inline static error_t PollP__TxFramePool__put(PollP__TxFramePool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
inline static error_t PollP__TxControlPool__put(PollP__TxControlPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 207 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
static inline void PollP__PollTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  ;
  PollP__m_numPending--;
  if (txFrame->handle != PollP__HANDLE_MLME_POLL_SUCCESS) {

      if (status == IEEE154_SUCCESS) {
        status = IEEE154_NO_DATA;
        }
#line 215
      if (txFrame->handle == PollP__HANDLE_MLME_POLL_REQUEST) {
        PollP__MLME_POLL__confirm(status);
        }
      else {
#line 218
        PollP__DataRequest__pollDone(txFrame->handle);
        }
    }
#line 220
  PollP__TxControlPool__put((ieee154_txcontrol_t *)((uint8_t *)txFrame->header - (unsigned short )& ((ieee154_txcontrol_t *)0)->header));
  PollP__TxFramePool__put(txFrame);
}

# 171 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDeviceCfpP.nc"
static inline void NoDeviceCfpP__GTSrequestTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
}

# 316 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macMaxFrameTotalWaitTime_t PibP__MLME_GET__macMaxFrameTotalWaitTime(void )
#line 316
{
#line 316
  return PibP__m_pib.macMaxFrameTotalWaitTime;
}

# 144 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macMaxFrameTotalWaitTime_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macMaxFrameTotalWaitTime(void ){
#line 144
  unsigned long __nesc_result;
#line 144

#line 144
  __nesc_result = PibP__MLME_GET__macMaxFrameTotalWaitTime();
#line 144

#line 144
  return __nesc_result;
#line 144
}
#line 144
#line 63
inline static ieee154_phyCurrentPage_t TestDeviceC__MLME_GET__phyCurrentPage(void ){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = PibP__MLME_GET__phyCurrentPage();
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 106 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154BeaconFrame.nc"
inline static error_t TestDeviceC__BeaconFrame__parsePANDescriptor(message_t *frame, uint8_t LogicalChannel, uint8_t ChannelPage, ieee154_PANDescriptor_t *pdescriptor){
#line 106
  unsigned char __nesc_result;
#line 106

#line 106
  __nesc_result = PibP__BeaconFrame__parsePANDescriptor(frame, LogicalChannel, ChannelPage, pdescriptor);
#line 106

#line 106
  return __nesc_result;
#line 106
}
#line 106
# 937 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void *PibP__BeaconFrame__getBeaconPayload(message_t *frame)
{
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;
  uint8_t *payload = (uint8_t *)frame->data;

#line 941
  if ((mhr[MHR_INDEX_FC1] & FC1_FRAMETYPE_MASK) == FC1_FRAMETYPE_BEACON) {
      uint8_t pendAddrSpecOffset = PibP__getPendAddrSpecOffset(payload);
      uint8_t pendAddrSpec = payload[pendAddrSpecOffset];

#line 944
      payload += pendAddrSpecOffset + 1;
      if (pendAddrSpec & PENDING_ADDRESS_SHORT_MASK) {
        payload += (pendAddrSpec & PENDING_ADDRESS_SHORT_MASK) * 2;
        }
#line 947
      if (pendAddrSpec & PENDING_ADDRESS_EXT_MASK) {
        payload += ((pendAddrSpec & PENDING_ADDRESS_EXT_MASK) >> 4) * 8;
        }
    }
#line 950
  return payload;
}

# 128 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static bool CC2420ReceiveP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = CC2420SpiP__Resource__isOwner(/*CC2420ReceiveC.Spi*/CC2420SpiC__1__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 41 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 41
}
#line 41
# 70 "/usr/src/tinyos/tos/interfaces/SpiPacket.nc"
inline static error_t CC2420SpiP__SpiPacket__send(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len){
#line 70
  unsigned char __nesc_result;
#line 70

#line 70
  __nesc_result = Atm128SpiP__SpiPacket__send(txBuf, rxBuf, len);
#line 70

#line 70
  return __nesc_result;
#line 70
}
#line 70
# 209 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__Fifo__continueRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 210
{
  return CC2420SpiP__SpiPacket__send((void *)0, data, len);
}

#line 189
static inline cc2420_status_t CC2420SpiP__Fifo__beginRead(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 190
{

  cc2420_status_t status = 0;

  /* atomic removed: atomic calls only */
#line 194
  {
    if (CC2420SpiP__WorkingState__isIdle()) {
        {
          unsigned char __nesc_temp = 
#line 196
          status;

#line 196
          return __nesc_temp;
        }
      }
  }
  CC2420SpiP__m_addr = addr | 0x40;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__Fifo__continueRead(addr, data, len);

  return status;
}

# 51 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static cc2420_status_t CC2420ReceiveP__RXFIFO__beginRead(uint8_t * data, uint8_t length){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420SpiP__Fifo__beginRead(CC2420_RXFIFO, data, length);
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 97 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420ReceiveP__SpiResource__immediateRequest(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = CC2420SpiP__Resource__immediateRequest(/*CC2420ReceiveC.Spi*/CC2420SpiC__1__CLIENT_ID);
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 88
inline static error_t CC2420ReceiveP__SpiResource__request(void ){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = CC2420SpiP__Resource__request(/*CC2420ReceiveC.Spi*/CC2420SpiC__1__CLIENT_ID);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420TKN154P__rxControlStopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420TKN154P__rxControlStopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 849 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__RxControl__stopDone(error_t error)
{
  CC2420TKN154P__rxControlStopDoneTask__postTask();
}

# 132 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420AsyncSplitControl.nc"
inline static void CC2420ReceiveP__AsyncSplitControl__stopDone(error_t error){
#line 132
  CC2420TKN154P__RxControl__stopDone(error);
#line 132
}
#line 132
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420ReceiveP__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420SpiP__Resource__release(/*CC2420ReceiveC.Spi*/CC2420SpiC__1__CLIENT_ID);
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 201 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__stopContinueTask__runTask(void )
{
  while (!(CC2420ReceiveP__receivingPacket != TRUE)) {
#line 203
      break;
    }
#line 203
  ;
  CC2420ReceiveP__SpiResource__release();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    CC2420ReceiveP__m_state = CC2420ReceiveP__S_STOPPED;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ReceiveP__AsyncSplitControl__stopDone(SUCCESS);
}

# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420SpiP__grant__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420SpiP__grant);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 184 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__SpiResource__granted(void )
#line 184
{
  CC2420SpiP__grant__postTask();
}

# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static void HplCC2420SpiP__Resource__granted(void ){
#line 102
  CC2420SpiP__SpiResource__granted();
#line 102
}
#line 102
# 67 "/usr/src/tinyos/tos/platforms/micaz/chips/cc2420/HplCC2420SpiP.nc"
static inline void HplCC2420SpiP__SubResource__granted(void )
{
  HplCC2420SpiP__SS__makeOutput();
  HplCC2420SpiP__SS__clr();

  HplCC2420SpiP__Resource__granted();
}

# 429 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__Resource__default__granted(uint8_t id)
#line 429
{
}

# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static void Atm128SpiP__Resource__granted(uint8_t arg_0x2ab71e4d1ae0){
#line 102
  switch (arg_0x2ab71e4d1ae0) {
#line 102
    case 0U:
#line 102
      HplCC2420SpiP__SubResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      Atm128SpiP__Resource__default__granted(arg_0x2ab71e4d1ae0);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 425 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__ResourceArbiter__granted(uint8_t id)
#line 425
{
  Atm128SpiP__Resource__granted(id);
}

# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(uint8_t arg_0x2ab71e587258){
#line 102
  Atm128SpiP__ResourceArbiter__granted(arg_0x2ab71e587258);
#line 102
}
#line 102
# 155 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
static inline void /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask(void )
#line 155
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 156
    {
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__reqResId;
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state = /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY;
    }
#line 159
    __nesc_atomic_end(__nesc_atomic); }
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ResourceConfigure__configure(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
  /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__granted(/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId);
}

# 82 "/usr/src/tinyos/tos/interfaces/SpiPacket.nc"
inline static void Atm128SpiP__SpiPacket__sendDone(uint8_t * txBuf, uint8_t * rxBuf, uint16_t len, error_t error){
#line 82
  CC2420SpiP__SpiPacket__sendDone(txBuf, rxBuf, len, error);
#line 82
}
#line 82
# 296 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__zeroTask__runTask(void )
#line 296
{
  uint16_t myLen;
  uint8_t * rx;
  uint8_t * tx;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 301
    {
      myLen = Atm128SpiP__len;
      rx = Atm128SpiP__rxBuffer;
      tx = Atm128SpiP__txBuffer;
      Atm128SpiP__rxBuffer = (void *)0;
      Atm128SpiP__txBuffer = (void *)0;
      Atm128SpiP__len = 0;
      Atm128SpiP__pos = 0;
      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
#line 310
    __nesc_atomic_end(__nesc_atomic); }
}

# 416 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__readDone(uint8_t *tx_buf, uint8_t tx_len, 
error_t error)
#line 417
{
}

# 40 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ReceiveP__CSN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 40
}
#line 40
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420ReceiveP__receiveDone_task__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420ReceiveP__receiveDone_task);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 352 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline bool CC2420ControlP__CC2420Config__isPromiscuousModeEnabled(void )
{
  return CC2420ControlP__acceptReservedFrames;
}

# 90 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static bool CC2420ReceiveP__CC2420Config__isPromiscuousModeEnabled(void ){
#line 90
  unsigned char __nesc_result;
#line 90

#line 90
  __nesc_result = CC2420ControlP__CC2420Config__isPromiscuousModeEnabled();
#line 90

#line 90
  return __nesc_result;
#line 90
}
#line 90
# 102 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline error_t CC2420SpiP__ChipSpiResource__attemptRelease(void )
#line 102
{
  return CC2420SpiP__attemptRelease();
}

# 39 "/usr/src/tinyos/tos/chips/cc2420/interfaces/ChipSpiResource.nc"
inline static error_t CC2420TransmitP__ChipSpiResource__attemptRelease(void ){
#line 39
  unsigned char __nesc_result;
#line 39

#line 39
  __nesc_result = CC2420SpiP__ChipSpiResource__attemptRelease();
#line 39

#line 39
  return __nesc_result;
#line 39
}
#line 39
# 44 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static void CC2420TransmitP__CC2420Tx__sendDone(ieee154_txframe_t *frame, bool ackPendingFlag, error_t error){
#line 44
  CC2420TKN154P__CC2420Tx__sendDone(frame, ackPendingFlag, error);
#line 44
}
#line 44
# 410 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__signalDone(bool ackFramePending, error_t err)
#line 410
{
  /* atomic removed: atomic calls only */
#line 411
  CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
  CC2420TransmitP__CC2420Tx__sendDone(CC2420TransmitP__m_frame, ackFramePending, err);
  CC2420TransmitP__ChipSpiResource__attemptRelease();
}

# 148 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__stop(void )
#line 148
{
#line 148
  * (volatile uint8_t *)(0x37 + 0x20) &= ~(1 << 4);
}

# 68 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop(void ){
#line 68
  HplAtm128Timer1P__CompareA__stop();
#line 68
}
#line 68
# 74 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop(void )
#line 74
{
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop();
}

# 73 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__stop(void ){
#line 73
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 102 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop(void )
{
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__stop();
}

# 73 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__stop(void ){
#line 73
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__stop();
#line 73
}
#line 73
# 53 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__stop(void )
#line 53
{
#line 53
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__stop();
}

# 73 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP__BackoffAlarm__stop(void ){
#line 73
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__stop();
#line 73
}
#line 73
# 363 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CC2420Receive__receive(uint8_t type, message_t *ackFrame)
#line 363
{
  /* atomic removed: atomic calls only */
#line 364
  {
    if (type == IEEE154_TYPE_ACK) {
        if (CC2420TransmitP__m_state == CC2420TransmitP__S_ACK_WAIT && 
        CC2420TransmitP__m_frame->header->mhr[2] == ((ieee154_header_t *)ackFrame->header)->mhr[2]) {
            CC2420TransmitP__BackoffAlarm__stop();
            CC2420TransmitP__signalDone(((ieee154_header_t *)ackFrame->header)->mhr[0] & 0x10 ? TRUE : FALSE, SUCCESS);
          }
      }
  }
}

# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420ReceiveP__CC2420Receive__receive(uint8_t type, message_t * message){
#line 63
  CC2420TransmitP__CC2420Receive__receive(type, message);
#line 63
}
#line 63
# 62 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static error_t CC2420ReceiveP__RXFIFO__continueRead(uint8_t * data, uint8_t length){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = CC2420SpiP__Fifo__continueRead(CC2420_RXFIFO, data, length);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 653 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline error_t PibP__FrameUtility__getMHRLength(uint8_t fcf1, uint8_t fcf2, uint8_t *len)
{
  uint8_t idCompression;
  uint8_t offset = MHR_INDEX_ADDRESS;

  if (fcf1 & FC1_SECURITY_ENABLED) {
    return FAIL;
    }
#line 660
  idCompression = fcf1 & FC1_PAN_ID_COMPRESSION;
  if (fcf2 & 0x08) {
      offset += 4;
      if (fcf2 & 0x04) {
        offset += 6;
        }
    }
#line 666
  if (fcf2 & 0x80) {
      offset += 2;
      if (!idCompression) {
        offset += 2;
        }
#line 670
      if (fcf2 & 0x40) {
        offset += 6;
        }
    }
#line 673
  *len = offset;
  return SUCCESS;
}

# 48 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static error_t CC2420ReceiveP__FrameUtility__getMHRLength(uint8_t fcf1, uint8_t fcf2, uint8_t *len){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = PibP__FrameUtility__getMHRLength(fcf1, fcf2, len);
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 54 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )33U & (1 << 6)) != 0;
}

# 43 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFOP__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortE.Bit6*/HplAtm128GeneralIOPinP__38__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 54 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )54U & (1 << 7)) != 0;
}

# 43 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ReceiveP__FIFO__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 261 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__readDone(uint8_t *rx_buf, uint8_t rx_len, 
error_t error)
#line 262
{
  uint8_t *buf;

  /* atomic removed: atomic calls only */
#line 265
  {
    buf = (uint8_t *)& ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length;
    CC2420ReceiveP__rxFrameLength = ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length;

    switch (CC2420ReceiveP__m_state) {

        case CC2420ReceiveP__S_RX_LENGTH: 
          CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_FCF;
        if (CC2420ReceiveP__rxFrameLength + 1 > CC2420ReceiveP__m_bytes_left) {

            CC2420ReceiveP__flush();
          }
        else {
            if (!CC2420ReceiveP__FIFO__get() && !CC2420ReceiveP__FIFOP__get()) {

                CC2420ReceiveP__flush();
              }


            if (CC2420ReceiveP__rxFrameLength <= sizeof(ieee154_header_t ) - 1 + 118 + 2) {
                if (CC2420ReceiveP__rxFrameLength > 0) {
                    if (CC2420ReceiveP__rxFrameLength > CC2420ReceiveP__SACK_HEADER_LENGTH) {

                        CC2420ReceiveP__RXFIFO__continueRead(buf + 1, CC2420ReceiveP__SACK_HEADER_LENGTH);
                      }
                    else {

                        CC2420ReceiveP__flush();
                      }
                  }
                else 

                  {

                    CC2420ReceiveP__flush();
                  }
              }
            else 



              {

                CC2420ReceiveP__flush();
              }
          }
        break;

        case CC2420ReceiveP__S_RX_FCF: 
          if (CC2420ReceiveP__FrameUtility__getMHRLength(buf[1], buf[2], &CC2420ReceiveP__m_mhrLen) != SUCCESS || 
          CC2420ReceiveP__m_mhrLen > CC2420ReceiveP__rxFrameLength - 2) {

              CC2420ReceiveP__flush();
              break;
            }
          else {
#line 319
            if (CC2420ReceiveP__m_mhrLen > CC2420ReceiveP__SACK_HEADER_LENGTH) {
                CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_HEADER;
                CC2420ReceiveP__RXFIFO__continueRead(buf + 1 + CC2420ReceiveP__SACK_HEADER_LENGTH, 
                CC2420ReceiveP__m_mhrLen - CC2420ReceiveP__SACK_HEADER_LENGTH);
                break;
              }
            else 
#line 324
              {
              }
            }


        case CC2420ReceiveP__S_RX_HEADER: 



          if (CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__m_mhrLen - 2 > 118) {
            CC2420ReceiveP__flush();
            }
          else 
#line 335
            {
              CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_PAYLOAD;
              CC2420ReceiveP__RXFIFO__continueRead((uint8_t *)CC2420ReceiveP__m_rxFramePtr->data, CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__m_mhrLen);
            }
        break;

        case CC2420ReceiveP__S_RX_PAYLOAD: 
          CC2420ReceiveP__CSN__set();

        if (!CC2420ReceiveP__m_missed_packets) {

            CC2420ReceiveP__SpiResource__release();
          }

        if (CC2420ReceiveP__m_timestamp_size) {
            if (CC2420ReceiveP__rxFrameLength > 4) {
                __nesc_hton_uint32(((ieee154_metadata_t *)CC2420ReceiveP__m_rxFramePtr->metadata)->timestamp.nxdata, CC2420ReceiveP__m_timestamp_queue[CC2420ReceiveP__m_timestamp_head]);
                CC2420ReceiveP__m_timestamp_head = (CC2420ReceiveP__m_timestamp_head + 1) % CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;
                CC2420ReceiveP__m_timestamp_size--;
              }
          }
        else 
#line 355
          {
            __nesc_hton_uint32(((ieee154_metadata_t *)CC2420ReceiveP__m_rxFramePtr->metadata)->timestamp.nxdata, 0xffffffff);
          }



        if (__nesc_ntoh_uint8(CC2420ReceiveP__m_rxFramePtr->data[CC2420ReceiveP__rxFrameLength - CC2420ReceiveP__m_mhrLen - 1].nxdata) >> 7 && rx_buf) {
            uint8_t type = ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->mhr[0] & 0x07;

            CC2420ReceiveP__CC2420Receive__receive(type, CC2420ReceiveP__m_rxFramePtr);


            if ((
#line 366
            type != IEEE154_TYPE_ACK || CC2420ReceiveP__CC2420Config__isPromiscuousModeEnabled())
             && !CC2420ReceiveP__m_stop) {
                CC2420ReceiveP__receiveDone_task__postTask();
                return;
              }
          }

        CC2420ReceiveP__waitForNextPacket();
        break;

        default: 
          CC2420ReceiveP__receivingPacket = FALSE;
        CC2420ReceiveP__CSN__set();
        CC2420ReceiveP__SpiResource__release();
        if (CC2420ReceiveP__m_stop) {
            CC2420ReceiveP__continueStop();
            return;
          }
        break;
      }
  }
}

# 370 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__readDone(uint8_t addr, uint8_t *rx_buf, uint8_t rx_len, error_t error)
#line 370
{
}

# 71 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__readDone(uint8_t arg_0x2ab71e3eaca8, uint8_t * data, uint8_t length, error_t error){
#line 71
  switch (arg_0x2ab71e3eaca8) {
#line 71
    case CC2420_TXFIFO:
#line 71
      CC2420TransmitP__TXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    case CC2420_RXFIFO:
#line 71
      CC2420ReceiveP__RXFIFO__readDone(data, length, error);
#line 71
      break;
#line 71
    default:
#line 71
      CC2420SpiP__Fifo__default__readDone(arg_0x2ab71e3eaca8, data, length, error);
#line 71
      break;
#line 71
    }
#line 71
}
#line 71
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ReceiveP__SFLUSHRX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHRX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 43 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static bool CC2420ControlP__FIFO__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortB.Bit7*/HplAtm128GeneralIOPinP__15__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 55 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RXFIFO_REGISTER__read(uint16_t *data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP__Reg__read(CC2420_RXFIFO, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SFLUSHRX__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SFLUSHRX);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static error_t ScanP__RadioRx__enableRx(uint32_t t0, uint32_t dt){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = RadioControlImplP__MacRx__enableRx(0, t0, dt);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 339 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline void ScanP__RadioTx__transmitDone(ieee154_txframe_t *frame, error_t result)
{
  error_t e = ScanP__RadioRx__enableRx(0, 0);

#line 342
  while (!(e == SUCCESS)) {
#line 342
      break;
    }
#line 342
  ;
}

# 106 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoBeaconTransmitP.nc"
static inline void NoBeaconTransmitP__BeaconTx__transmitDone(ieee154_txframe_t *frame, error_t result)
#line 106
{
}

# 155 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDeviceCfpP.nc"
static inline void NoDeviceCfpP__RadioTx__transmitDone(
ieee154_txframe_t *frame, error_t result)
{
}

# 159 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoCoordCfpP.nc"
static inline void NoCoordCfpP__RadioTx__transmitDone(
ieee154_txframe_t *frame, error_t result)
{
}

# 132 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__MacTx__default__transmitDone(uint8_t client, ieee154_txframe_t *frame, error_t result)
{
  while (!0) {
#line 134
      break;
    }
#line 134
  ;
}

# 83 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
inline static void RadioControlImplP__MacTx__transmitDone(uint8_t arg_0x2ab71d5a1e80, ieee154_txframe_t *frame, error_t result){
#line 83
  switch (arg_0x2ab71d5a1e80) {
#line 83
    case 0:
#line 83
      ScanP__RadioTx__transmitDone(frame, result);
#line 83
      break;
#line 83
    case 3:
#line 83
      NoBeaconTransmitP__BeaconTx__transmitDone(frame, result);
#line 83
      break;
#line 83
    case 6:
#line 83
      NoCoordCfpP__RadioTx__transmitDone(frame, result);
#line 83
      break;
#line 83
    case 10:
#line 83
      NoDeviceCfpP__RadioTx__transmitDone(frame, result);
#line 83
      break;
#line 83
    default:
#line 83
      RadioControlImplP__MacTx__default__transmitDone(arg_0x2ab71d5a1e80, frame, result);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 127 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__PhyTx__transmitDone(ieee154_txframe_t *frame, error_t result)
{
  RadioControlImplP__MacTx__transmitDone(RadioControlImplP__ArbiterInfo__userId(), frame, result);
}

# 83 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
inline static void CC2420TKN154P__RadioTx__transmitDone(ieee154_txframe_t *frame, error_t result){
#line 83
  RadioControlImplP__PhyTx__transmitDone(frame, result);
#line 83
}
#line 83
# 488 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static __inline void CC2420TKN154P__txDoneRadioTx(ieee154_txframe_t *frame, error_t result)
{

  CC2420TKN154P__RadioTx__transmitDone(frame, result);
}

#line 895
static inline void CC2420TKN154P__UnslottedCsmaCa__default__transmitDone(ieee154_txframe_t *frame, 
ieee154_csma_t *csma, bool ackPendingFlag, error_t result)
#line 896
{
}

# 89 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/UnslottedCsmaCa.nc"
inline static void CC2420TKN154P__UnslottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result){
#line 89
  CC2420TKN154P__UnslottedCsmaCa__default__transmitDone(frame, csma, ackPendingFlag, result);
#line 89
}
#line 89
# 572 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static __inline void CC2420TKN154P__txDoneUnslottedCsma(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, error_t result)
{

  CC2420TKN154P__UnslottedCsmaCa__transmitDone(frame, csma, ackPendingFlag, result);
}

# 106 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__SlottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result)
#line 107
{
}

# 181 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__SlottedCsmaCa__default__transmitDone(uint8_t client, 
ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result)
{
  while (!0) {
#line 185
      break;
    }
#line 185
  ;
}

# 115 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
inline static void RadioControlImplP__SlottedCsmaCa__transmitDone(uint8_t arg_0x2ab71d5a0c30, ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, uint16_t remainingBackoff, error_t result){
#line 115
  switch (arg_0x2ab71d5a0c30) {
#line 115
    case 5:
#line 115
      /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__SlottedCsmaCa__transmitDone(frame, csma, ackPendingFlag, remainingBackoff, result);
#line 115
      break;
#line 115
    case 9:
#line 115
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SlottedCsmaCa__transmitDone(frame, csma, ackPendingFlag, remainingBackoff, result);
#line 115
      break;
#line 115
    default:
#line 115
      RadioControlImplP__SlottedCsmaCa__default__transmitDone(arg_0x2ab71d5a0c30, frame, csma, ackPendingFlag, remainingBackoff, result);
#line 115
      break;
#line 115
    }
#line 115
}
#line 115
# 174 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__PhySlottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result)
{
  RadioControlImplP__SlottedCsmaCa__transmitDone(RadioControlImplP__ArbiterInfo__userId(), 
  frame, csma, ackPendingFlag, remainingBackoff, result);
}

# 115 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/SlottedCsmaCa.nc"
inline static void CC2420TKN154P__SlottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, bool ackPendingFlag, uint16_t remainingBackoff, error_t result){
#line 115
  RadioControlImplP__PhySlottedCsmaCa__transmitDone(frame, csma, ackPendingFlag, remainingBackoff, result);
#line 115
}
#line 115
# 713 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static __inline void CC2420TKN154P__txDoneSlottedCsmaCa(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result)
{

  CC2420TKN154P__SlottedCsmaCa__transmitDone(frame, csma, ackPendingFlag, remainingBackoff, result);
}

# 100 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static inline void TKN154TimingP__ReliableWait__waitTx(uint32_t t0, uint32_t dt)
{
  if (TKN154TimingP__m_state != TKN154TimingP__S_WAIT_OFF) {
      while (!0) {
#line 103
          break;
        }
#line 103
      ;
      return;
    }
  TKN154TimingP__m_state = TKN154TimingP__S_WAIT_TX;
  TKN154TimingP__SymbolAlarm__startAt(t0 - 16, dt);
}

# 37 "/usr/src/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
inline static void CC2420TKN154P__ReliableWait__waitTx(uint32_t t0, uint32_t dt){
#line 37
  TKN154TimingP__ReliableWait__waitTx(t0, dt);
#line 37
}
#line 37
# 464 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__loadDoneRadioTx(void )
{
  /* atomic removed: atomic calls only */
  {
    CC2420TKN154P__m_state = CC2420TKN154P__S_TX_PENDING;
    if (CC2420TKN154P__m_dt == 0) {
      CC2420TKN154P__ReliableWait__waitTxDone();
      }
    else {
#line 472
      CC2420TKN154P__ReliableWait__waitTx(CC2420TKN154P__m_t0, CC2420TKN154P__m_dt);
      }
  }
}

#line 739
static inline void CC2420TKN154P__CC2420Tx__loadTXFIFODone(ieee154_txframe_t *data, error_t error)
{
  /* atomic removed: atomic calls only */
#line 741
  {
    switch (CC2420TKN154P__m_state) 
      {
        case CC2420TKN154P__S_LOAD_TXFIFO_NO_CSMA: CC2420TKN154P__loadDoneRadioTx();
#line 744
        break;
        case CC2420TKN154P__S_LOAD_TXFIFO_UNSLOTTED: CC2420TKN154P__nextIterationUnslottedCsma();
#line 745
        break;
        case CC2420TKN154P__S_LOAD_TXFIFO_SLOTTED: CC2420TKN154P__nextIterationSlottedCsma();
#line 746
        break;
        default: while (!0) {
#line 747
              break;
            }
#line 747
        ;
#line 747
        break;
      }
  }
}

# 41 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static void CC2420TransmitP__CC2420Tx__loadTXFIFODone(ieee154_txframe_t *data, error_t error){
#line 41
  CC2420TKN154P__CC2420Tx__loadTXFIFODone(data, error);
#line 41
}
#line 41
# 172 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__TXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
{
  /* atomic removed: atomic calls only */
#line 174
  {
    CC2420TransmitP__CSN__set();
    if (tx_buf == & CC2420TransmitP__m_frame->header->length) {
        CC2420TransmitP__CSN__clr();
        CC2420TransmitP__TXFIFO__write(CC2420TransmitP__m_frame->header->mhr, CC2420TransmitP__m_frame->headerLen);
        return;
      }
    else {
#line 180
      if (tx_buf == CC2420TransmitP__m_frame->header->mhr) {
          CC2420TransmitP__CSN__clr();
          CC2420TransmitP__TXFIFO__write(CC2420TransmitP__m_frame->payload, CC2420TransmitP__m_frame->payloadLen);
          return;
        }
      }
  }
#line 186
  CC2420TransmitP__m_state = CC2420TransmitP__S_READY_TX;
  CC2420TransmitP__CC2420Tx__loadTXFIFODone(CC2420TransmitP__m_frame, error);
}

# 391 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__RXFIFO__writeDone(uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 391
{
}

# 373 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Fifo__default__writeDone(uint8_t addr, uint8_t *tx_buf, uint8_t tx_len, error_t error)
#line 373
{
}

# 91 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Fifo.nc"
inline static void CC2420SpiP__Fifo__writeDone(uint8_t arg_0x2ab71e3eaca8, uint8_t * data, uint8_t length, error_t error){
#line 91
  switch (arg_0x2ab71e3eaca8) {
#line 91
    case CC2420_TXFIFO:
#line 91
      CC2420TransmitP__TXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    case CC2420_RXFIFO:
#line 91
      CC2420ReceiveP__RXFIFO__writeDone(data, length, error);
#line 91
      break;
#line 91
    default:
#line 91
      CC2420SpiP__Fifo__default__writeDone(arg_0x2ab71e3eaca8, data, length, error);
#line 91
      break;
#line 91
    }
#line 91
}
#line 91
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420TransmitP__STXONCCA__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXONCCA);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420TransmitP__STXON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_STXON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
inline static cc2420_status_t CC2420TransmitP__SNOP__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SNOP);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 142 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__start(void )
#line 142
{
#line 142
  * (volatile uint8_t *)(0x37 + 0x20) |= 1 << 4;
}

# 65 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start(void ){
#line 65
  HplAtm128Timer1P__CompareA__start();
#line 65
}
#line 65
# 136 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__reset(void )
#line 136
{
#line 136
  * (volatile uint8_t *)(0x36 + 0x20) = 1 << 4;
}

# 62 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset(void ){
#line 62
  HplAtm128Timer1P__CompareA__reset();
#line 62
}
#line 62
# 192 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareA__set(uint16_t t)
#line 192
{
#line 192
  * (volatile uint16_t *)(0x2A + 0x20) = t;
}

# 54 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__size_type t){
#line 54
  HplAtm128Timer1P__CompareA__set(t);
#line 54
}
#line 54
# 61 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__timer_size /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get(void ){
#line 61
  unsigned short __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer1P__Timer__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 83 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size t0, /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size dt)
#line 83
{
  /* atomic removed: atomic calls only */






  {
    /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size now;
#line 92
    /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size elapsed;
#line 92
    /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__timer_size expires;

    ;


    now = /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__get();
    elapsed = now + 3 - t0;
    if (elapsed >= dt) {
      expires = now + 3;
      }
    else {
#line 102
      expires = t0 + dt;
      }



    if (expires == 0) {
      expires = 1;
      }



    /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__set(expires - 1);
    /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__reset();
    /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__start();
  }
}

# 103 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__startAt(/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type t0, /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__size_type dt){
#line 103
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 89 "/usr/src/tinyos/tos/system/RandomMlcgC.nc"
static inline uint16_t RandomMlcgC__Random__rand16(void )
#line 89
{
  return (uint16_t )RandomMlcgC__Random__rand32();
}

# 52 "/usr/src/tinyos/tos/interfaces/Random.nc"
inline static uint16_t CC2420TKN154P__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 39 "/usr/src/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
inline static void CC2420TKN154P__ReliableWait__waitBackoff(uint32_t dt){
#line 39
  TKN154TimingP__ReliableWait__waitBackoff(dt);
#line 39
}
#line 39
# 64 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
inline static /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Counter__size_type /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_size_type /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__getNow(void )
{
  return /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Counter__get();
}

#line 147
static inline void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__startAt(/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_size_type t0, /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_size_type dt)
{
  /* atomic removed: atomic calls only */
  {
    /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__m_t0 = t0;
    /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__m_dt = dt;
    /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__set_alarm();
  }
}

static inline void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__start(/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_size_type dt)
{
  /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__startAt(/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__getNow(), dt);
}

# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__start(/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__size_type dt){
#line 66
  /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__start(dt);
#line 66
}
#line 66
# 52 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__start(uint32_t dt)
#line 52
{
#line 52
  /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__start(dt >> 1);
}

# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void TKN154TimingP__SymbolAlarm__start(TKN154TimingP__SymbolAlarm__size_type dt){
#line 66
  /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__start(dt);
#line 66
}
#line 66
# 40 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
inline static uint32_t CC2420TKN154P__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1){
#line 40
  unsigned long __nesc_result;
#line 40

#line 40
  __nesc_result = PibP__TimeCalc__timeElapsed(t0, t1);
#line 40

#line 40
  return __nesc_result;
#line 40
}
#line 40
# 74 "/usr/src/tinyos/tos/lib/mac/tkn154/InactivePeriodP.nc"
static inline void /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioControl__stopDone(error_t result)
#line 74
{
}

#line 74
static inline void /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioControl__stopDone(error_t result)
#line 74
{
}

# 138 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
inline static void CC2420TKN154P__SplitControl__stopDone(error_t error){
#line 138
  /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioControl__stopDone(error);
#line 138
  /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioControl__stopDone(error);
#line 138
  PibP__RadioControl__stopDone(error);
#line 138
}
#line 138
# 120 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static error_t CC2420TKN154P__SpiResource__release(void ){
#line 120
  unsigned char __nesc_result;
#line 120

#line 120
  __nesc_result = CC2420ControlP__Resource__release();
#line 120

#line 120
  return __nesc_result;
#line 120
}
#line 120
# 346 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CC2420Tx__unlockChipSpi(void )
{
  CC2420TransmitP__abortSpiRelease = FALSE;
}

# 48 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static void CC2420TKN154P__CC2420Tx__unlockChipSpi(void ){
#line 48
  CC2420TransmitP__CC2420Tx__unlockChipSpi();
#line 48
}
#line 48
# 55 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 6;
}

# 40 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__set();
#line 40
}
#line 40
# 56 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 5);
}

# 41 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__clr();
#line 41
}
#line 41
# 56 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr(void )
#line 56
{
#line 56
  * (volatile uint8_t * )59U &= ~(1 << 6);
}

# 41 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__clr();
#line 41
}
#line 41
# 186 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__stopVReg(void )
#line 186
{
  CC2420ControlP__m_state = CC2420ControlP__S_VREG_STOPPED;
  CC2420ControlP__RSTN__clr();
  CC2420ControlP__VREN__clr();
  CC2420ControlP__RSTN__set();
  return SUCCESS;
}

# 64 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static error_t CC2420TKN154P__CC2420Power__stopVReg(void ){
#line 64
  unsigned char __nesc_result;
#line 64

#line 64
  __nesc_result = CC2420ControlP__CC2420Power__stopVReg();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 40 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__set();
#line 40
}
#line 40
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SXOSCOFF__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SXOSCOFF);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 41 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__CSN__clr(void ){
#line 41
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__clr();
#line 41
}
#line 41
# 228 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__stopOscillator(void )
#line 228
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 229
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_XOSC_STARTED) {
          {
            unsigned char __nesc_temp = 
#line 231
            FAIL;

            {
#line 231
              __nesc_atomic_end(__nesc_atomic); 
#line 231
              return __nesc_temp;
            }
          }
        }
#line 233
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTED;
      CC2420ControlP__CSN__set();
      CC2420ControlP__CSN__clr();
      CC2420ControlP__SXOSCOFF__strobe();
      CC2420ControlP__CSN__set();
    }
#line 238
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 84 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static error_t CC2420TKN154P__CC2420Power__stopOscillator(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = CC2420ControlP__CC2420Power__stopOscillator();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
#line 112
inline static error_t CC2420TKN154P__CC2420Power__flushRxFifo(void ){
#line 112
  unsigned char __nesc_result;
#line 112

#line 112
  __nesc_result = CC2420ControlP__CC2420Power__flushRxFifo();
#line 112

#line 112
  return __nesc_result;
#line 112
}
#line 112
#line 98
inline static error_t CC2420TKN154P__CC2420Power__rfOff(void ){
#line 98
  unsigned char __nesc_result;
#line 98

#line 98
  __nesc_result = CC2420ControlP__CC2420Power__rfOff();
#line 98

#line 98
  return __nesc_result;
#line 98
}
#line 98
# 193 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__stopSpiReserved(void )
{

  CC2420TKN154P__CC2420Power__rfOff();
  CC2420TKN154P__CC2420Power__flushRxFifo();
  CC2420TKN154P__CC2420Power__stopOscillator();
  CC2420TKN154P__CC2420Power__stopVReg();
  CC2420TKN154P__CC2420Tx__unlockChipSpi();
  CC2420TKN154P__SpiResource__release();
  CC2420TKN154P__m_state = CC2420TKN154P__S_STOPPED;
  CC2420TKN154P__SplitControl__stopDone(SUCCESS);
}

# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420TKN154P__energyDetectionTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420TKN154P__energyDetectionTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 91 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static error_t CC2420TKN154P__CC2420Power__rxOn(void ){
#line 91
  unsigned char __nesc_result;
#line 91

#line 91
  __nesc_result = CC2420ControlP__CC2420Power__rxOn();
#line 91

#line 91
  return __nesc_result;
#line 91
}
#line 91
# 53 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static error_t CC2420TKN154P__CC2420Config__sync(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420ControlP__CC2420Config__sync();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 312 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__edReserved(void )
{
  CC2420TKN154P__CC2420Config__sync();
  CC2420TKN154P__CC2420Power__rxOn();
  CC2420TKN154P__m_edStartTime = CC2420TKN154P__LocalTime__get();
  CC2420TKN154P__energyDetectionTask__postTask();
}

# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void CC2420ControlP__StartupAlarm__start(CC2420ControlP__StartupAlarm__size_type dt){
#line 66
  Alarm32khzTo62500hzTransformC__Alarm__start(/*Ieee802154BeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID, dt);
#line 66
}
#line 66
# 55 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__set(void )
#line 55
{
#line 55
  * (volatile uint8_t * )59U |= 1 << 5;
}

# 40 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__set(void ){
#line 40
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__set();
#line 40
}
#line 40
# 174 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startVReg(void )
#line 174
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 175
    {
      if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STOPPED) {
          {
            unsigned char __nesc_temp = 
#line 177
            FAIL;

            {
#line 177
              __nesc_atomic_end(__nesc_atomic); 
#line 177
              return __nesc_temp;
            }
          }
        }
#line 179
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTING;
    }
#line 180
    __nesc_atomic_end(__nesc_atomic); }
  CC2420ControlP__VREN__set();
  CC2420ControlP__StartupAlarm__start(CC2420_TIME_VREN * 2);
  return SUCCESS;
}

# 52 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static error_t CC2420TKN154P__CC2420Power__startVReg(void ){
#line 52
  unsigned char __nesc_result;
#line 52

#line 52
  __nesc_result = CC2420ControlP__CC2420Power__startVReg();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 149 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__startSpiReserved(void )
{

  CC2420TKN154P__CC2420Power__startVReg();
}

#line 868
static inline void CC2420TKN154P__SpiResource__granted(void )
{
  switch (CC2420TKN154P__m_state) 
    {
      case CC2420TKN154P__S_STARTING: CC2420TKN154P__startSpiReserved();
#line 872
      break;
      case CC2420TKN154P__S_ED: CC2420TKN154P__edReserved();
#line 873
      break;
      case CC2420TKN154P__S_RESERVE_RX_SPI: CC2420TKN154P__rxSpiReserved();
#line 874
      break;
      case CC2420TKN154P__S_LOAD_TXFIFO_NO_CSMA: 
        case CC2420TKN154P__S_LOAD_TXFIFO_UNSLOTTED: 
          case CC2420TKN154P__S_LOAD_TXFIFO_SLOTTED: CC2420TKN154P__txSpiReserved();
#line 877
      break;
      case CC2420TKN154P__S_TX_ACTIVE_NO_CSMA: 
        case CC2420TKN154P__S_TX_ACTIVE_UNSLOTTED_CSMA: 
          case CC2420TKN154P__S_TX_ACTIVE_SLOTTED_CSMA: CC2420TKN154P__sendDoneSpiReserved();
#line 880
      break;
      case CC2420TKN154P__S_STOPPING: CC2420TKN154P__stopSpiReserved();
#line 881
      break;
      case CC2420TKN154P__S_OFF_PENDING: CC2420TKN154P__offSpiReserved();
#line 882
      break;
      default: while (!0) {
#line 883
            break;
          }
#line 883
      ;
#line 883
      break;
    }
}

# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static void CC2420ControlP__Resource__granted(void ){
#line 102
  CC2420TKN154P__SpiResource__granted();
#line 102
}
#line 102
# 168 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__SpiResource__granted(void )
#line 168
{

  CC2420ControlP__Resource__granted();
}

# 246 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__SpiResource__granted(void )
#line 246
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 247
    {
      switch (CC2420ReceiveP__m_state) 
        {
          case CC2420ReceiveP__S_STOPPED: while (!0) {
#line 250
                break;
              }
#line 250
          ;
#line 250
          break;
          default: CC2420ReceiveP__receive();
        }
    }
#line 253
    __nesc_atomic_end(__nesc_atomic); }
}

# 367 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__Resource__default__granted(uint8_t id)
#line 367
{
}

# 102 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static void CC2420SpiP__Resource__granted(uint8_t arg_0x2ab71e3eba68){
#line 102
  switch (arg_0x2ab71e3eba68) {
#line 102
    case /*CC2420ControlTransmitC.Spi*/CC2420SpiC__0__CLIENT_ID:
#line 102
      CC2420ControlP__SpiResource__granted();
#line 102
      break;
#line 102
    case /*CC2420ReceiveC.Spi*/CC2420SpiC__1__CLIENT_ID:
#line 102
      CC2420ReceiveP__SpiResource__granted();
#line 102
      break;
#line 102
    default:
#line 102
      CC2420SpiP__Resource__default__granted(arg_0x2ab71e3eba68);
#line 102
      break;
#line 102
    }
#line 102
}
#line 102
# 358 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static inline void CC2420SpiP__grant__runTask(void )
#line 358
{
  uint8_t holder;

#line 360
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 360
    {
      holder = CC2420SpiP__m_holder;
    }
#line 362
    __nesc_atomic_end(__nesc_atomic); }
  CC2420SpiP__Resource__granted(holder);
}

# 88 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDispatchSlottedCsmaP.nc"
static inline error_t /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__Reset__init(void )
#line 88
{
#line 88
  return SUCCESS;
}

# 192 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__Reset__init(void )
{
  return /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__reset(IEEE154_TRANSACTION_OVERFLOW);
}

# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
inline static error_t PibP__DispatchReset__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__Reset__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__Reset__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 58 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDispatchQueueP.nc"
static inline error_t /*TKN154BeaconEnabledP.CoordCapQueue*/NoDispatchQueueP__0__Reset__init(void )
#line 58
{
#line 58
  return SUCCESS;
}

# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__resetResetPending(void )
#line 66
{
#line 66
  /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__m_state &= ~/*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__RESET_PENDING;
}

# 81 "/usr/src/tinyos/tos/interfaces/Queue.nc"
inline static /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__t  /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__dequeue(void ){
#line 81
  struct __nesc_unnamed4318 *__nesc_result;
#line 81

#line 81
  __nesc_result = /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
#line 58
inline static uint8_t /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__setResetPending(void )
#line 65
{
#line 65
  /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__m_state |= /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__RESET_PENDING;
}

static inline error_t /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Reset__init(void )
{
  /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__setResetPending();
  while (/*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__size()) {
      ieee154_txframe_t *txFrame = /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__dequeue();

#line 73
      /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTx__transmitDone(txFrame->client, txFrame, IEEE154_TRANSACTION_OVERFLOW);
    }
  /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__resetResetPending();
  return SUCCESS;
}

# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
inline static error_t PibP__DispatchQueueReset__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Reset__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*TKN154BeaconEnabledP.CoordCapQueue*/NoDispatchQueueP__0__Reset__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 78 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void RxEnableP__RxEnableTimer__stop(void ){
#line 78
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(4U);
#line 78
}
#line 78
# 68 "/usr/src/tinyos/tos/lib/mac/tkn154/RxEnableP.nc"
static inline error_t RxEnableP__Reset__init(void )
{
  if (RxEnableP__m_confirmPending) {
      RxEnableP__m_confirmPending = FALSE;
      RxEnableP__MLME_RX_ENABLE__confirm(IEEE154_SUCCESS);
    }
  RxEnableP__m_isRxEnabled = FALSE;
  RxEnableP__RxEnableTimer__stop();
  return SUCCESS;
}

# 62 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline error_t PromiscuousModeP__Init__init(void )
{
  PromiscuousModeP__m_state = PromiscuousModeP__S_STOPPED;
  return SUCCESS;
}

# 110 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoCoordCfpP.nc"
static inline error_t NoCoordCfpP__Init__init(void )
{
  return SUCCESS;
}

# 108 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDeviceCfpP.nc"
static inline error_t NoDeviceCfpP__Init__init(void )
{
  return SUCCESS;
}

# 135 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoBeaconTransmitP.nc"
static inline void NoBeaconTransmitP__RealignmentBeaconEnabledTx__transmitDone(ieee154_txframe_t *frame, ieee154_status_t status)
{
}

# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static void CoordBroadcastP__RealignmentTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status){
#line 51
  NoBeaconTransmitP__RealignmentBeaconEnabledTx__transmitDone(txFrame, status);
#line 51
}
#line 51
# 81 "/usr/src/tinyos/tos/interfaces/Queue.nc"
inline static CoordBroadcastP__Queue__t  CoordBroadcastP__Queue__dequeue(void ){
#line 81
  struct __nesc_unnamed4318 *__nesc_result;
#line 81

#line 81
  __nesc_result = /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__dequeue();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 235 "/usr/src/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline void DataP__BroadcastTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  DataP__finishTxTransaction(txFrame, status);
}

# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static void CoordBroadcastP__BroadcastDataFrame__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status){
#line 51
  DataP__BroadcastTx__transmitDone(txFrame, status);
#line 51
}
#line 51
# 57 "/usr/src/tinyos/tos/system/QueueC.nc"
static inline uint8_t /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__size(void )
#line 57
{
  return /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__size;
}

# 58 "/usr/src/tinyos/tos/interfaces/Queue.nc"
inline static uint8_t CoordBroadcastP__Queue__size(void ){
#line 58
  unsigned char __nesc_result;
#line 58

#line 58
  __nesc_result = /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__size();
#line 58

#line 58
  return __nesc_result;
#line 58
}
#line 58
# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/CoordBroadcastP.nc"
static inline error_t CoordBroadcastP__Reset__init(void )
{
  while (CoordBroadcastP__Queue__size()) 
    CoordBroadcastP__BroadcastDataFrame__transmitDone(CoordBroadcastP__Queue__dequeue(), IEEE154_TRANSACTION_OVERFLOW);
  if (CoordBroadcastP__m_realignmentFrame) {
    CoordBroadcastP__RealignmentTx__transmitDone(CoordBroadcastP__m_realignmentFrame, IEEE154_TRANSACTION_OVERFLOW);
    }
#line 72
  CoordBroadcastP__m_realignmentFrame = CoordBroadcastP__m_queueHead = CoordBroadcastP__m_transmittedFrame = (void *)0;
  CoordBroadcastP__m_lock = FALSE;
  return SUCCESS;
}

# 76 "/usr/src/tinyos/tos/lib/mac/tkn154/CoordRealignmentP.nc"
static inline error_t CoordRealignmentP__Init__init(void )
{
  return SUCCESS;
}

# 78 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void IndirectTxP__IndirectTxTimeout__stop(void ){
#line 78
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(3U);
#line 78
}
#line 78
# 80 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline error_t IndirectTxP__Reset__init(void )
{
  uint8_t i;


  IndirectTxP__IndirectTxTimeout__stop();
  for (i = 0; i < IndirectTxP__NUM_MAX_PENDING; i++) 
    if (IndirectTxP__m_txFrameTable[i] != (void *)0) {
      IndirectTxP__FrameTx__transmitDone(IndirectTxP__m_txFrameTable[i]->client, IndirectTxP__m_txFrameTable[i], IEEE154_TRANSACTION_OVERFLOW);
      }
#line 89
  for (i = 0; i < IndirectTxP__NUM_MAX_PENDING; i++) 
    IndirectTxP__m_txFrameTable[i] = (void *)0;
  IndirectTxP__m_pendingTxFrame = (void *)0;
  IndirectTxP__m_numTableEntries = 0;
  IndirectTxP__m_numShortPending = 0;
  IndirectTxP__m_numExtPending = 0;

  IndirectTxP__m_emptyDataFrame.header = &IndirectTxP__m_emptyDataFrameHeader;
  IndirectTxP__m_emptyDataFrame.metadata = &IndirectTxP__m_emptyDataFrameMetadata;
  IndirectTxP__m_emptyDataFrame.payload = &IndirectTxP__m_numExtPending;
  IndirectTxP__m_emptyDataFrame.payloadLen = 0;
  IndirectTxP__m_emptyDataFrame.client = 0;
  return SUCCESS;
}

# 70 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
static inline error_t PollP__Init__init(void )
{
  PollP__m_numPending = 0;
  return SUCCESS;
}

# 74 "/usr/src/tinyos/tos/lib/mac/tkn154/DisassociateP.nc"
static inline error_t DisassociateP__Init__init(void )
{
  DisassociateP__m_payloadDisassocRequest[0] = DisassociateP__S_IDLE;
  DisassociateP__m_coordAddrMode = 0;
  DisassociateP__m_disAssociationOngoing = FALSE;
  return SUCCESS;
}

# 77 "/usr/src/tinyos/tos/lib/mac/tkn154/AssociateP.nc"
static inline error_t AssociateP__Init__init(void )
{
  uint8_t i;

#line 80
  AssociateP__ResponseTimeout__stop();
  AssociateP__m_payloadAssocRequest[0] = AssociateP__S_IDLE;
  AssociateP__m_coordAddrMode = 0;
  AssociateP__m_associationOngoing = FALSE;
  for (i = 0; i < 7; i++) 
    AssociateP__m_payloadAssocResponse[i][0] = AssociateP__S_IDLE;
  return SUCCESS;
}

# 135 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static inline void BeaconSynchronizeP__setMode(uint8_t mode)
#line 135
{
#line 135
  BeaconSynchronizeP__m_state &= ~BeaconSynchronizeP__MODE_MASK;
#line 135
  BeaconSynchronizeP__m_state |= mode & BeaconSynchronizeP__MODE_MASK;
}

#line 132
static inline void BeaconSynchronizeP__resetExternalRequest(void )
#line 132
{
#line 132
  BeaconSynchronizeP__m_state &= ~BeaconSynchronizeP__EXTERNAL_REQUEST;
}

#line 129
static inline void BeaconSynchronizeP__resetInternalRequest(void )
#line 129
{
#line 129
  BeaconSynchronizeP__m_state &= ~BeaconSynchronizeP__INTERNAL_REQUEST;
}

#line 126
static inline void BeaconSynchronizeP__resetUpdatePending(void )
#line 126
{
#line 126
  BeaconSynchronizeP__m_state &= ~BeaconSynchronizeP__UPDATE_PENDING;
}

# 270 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__TrackSingleBeacon__startDone(error_t error)
{
  if (error != SUCCESS) {
    /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__reset(IEEE154_NO_BEACON);
    }
}

# 113 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
inline static void BeaconSynchronizeP__TrackSingleBeacon__startDone(error_t error){
#line 113
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__TrackSingleBeacon__startDone(error);
#line 113
}
#line 113
# 130 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static inline bool BeaconSynchronizeP__isInternalRequest(void )
#line 130
{
#line 130
  return BeaconSynchronizeP__m_state & BeaconSynchronizeP__INTERNAL_REQUEST ? TRUE : FALSE;
}

# 256 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_phyCurrentChannel_t PibP__MLME_GET__phyCurrentChannel(void )
#line 256
{
#line 256
  return PibP__m_pib.phyCurrentChannel;
}

# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_phyCurrentChannel_t BeaconSynchronizeP__MLME_GET__phyCurrentChannel(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = PibP__MLME_GET__phyCurrentChannel();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 133 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static inline bool BeaconSynchronizeP__isExternalRequest(void )
#line 133
{
#line 133
  return BeaconSynchronizeP__m_state & BeaconSynchronizeP__EXTERNAL_REQUEST ? TRUE : FALSE;
}

#line 134
static inline uint8_t BeaconSynchronizeP__getMode(void )
#line 134
{
#line 134
  return BeaconSynchronizeP__m_state & BeaconSynchronizeP__MODE_MASK;
}

#line 543
static inline bool BeaconSynchronizeP__IsTrackingBeacons__getNow(void )
{
  return BeaconSynchronizeP__getMode() == BeaconSynchronizeP__MODE_TRACK_CONTINUOUS;
}

#line 139
static inline error_t BeaconSynchronizeP__Reset__init(void )
{

  if (BeaconSynchronizeP__IsTrackingBeacons__getNow() || (
  BeaconSynchronizeP__isUpdatePending() && BeaconSynchronizeP__isExternalRequest() && BeaconSynchronizeP__m_updateTrackBeacon)) {
    BeaconSynchronizeP__MLME_SYNC_LOSS__indication(
    IEEE154_BEACON_LOSS, 
    BeaconSynchronizeP__MLME_GET__macPANId(), 
    BeaconSynchronizeP__MLME_GET__phyCurrentChannel(), 
    BeaconSynchronizeP__MLME_GET__phyCurrentPage(), 
    (void *)0);
    }
#line 150
  if (BeaconSynchronizeP__isInternalRequest()) {
    BeaconSynchronizeP__TrackSingleBeacon__startDone(FAIL);
    }
#line 152
  BeaconSynchronizeP__resetUpdatePending();
  BeaconSynchronizeP__resetInternalRequest();
  BeaconSynchronizeP__resetExternalRequest();
  BeaconSynchronizeP__setMode(BeaconSynchronizeP__MODE_INACTIVE);
  return SUCCESS;
}

# 80 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoBeaconTransmitP.nc"
static inline error_t NoBeaconTransmitP__Reset__init(void )
#line 80
{
#line 80
  return SUCCESS;
}

# 94 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline error_t ScanP__Init__init(void )
{




  if (ScanP__m_busy) {
      ScanP__m_terminateScan = TRUE;
      ScanP__nextIteration();
    }
  return SUCCESS;
}

# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
inline static error_t PibP__MacReset__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = ScanP__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, NoBeaconTransmitP__Reset__init());
#line 62
  __nesc_result = ecombine(__nesc_result, BeaconSynchronizeP__Reset__init());
#line 62
  __nesc_result = ecombine(__nesc_result, AssociateP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, DisassociateP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PollP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, IndirectTxP__Reset__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CoordRealignmentP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CoordBroadcastP__Reset__init());
#line 62
  __nesc_result = ecombine(__nesc_result, NoDeviceCfpP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, NoCoordCfpP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PromiscuousModeP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, RxEnableP__Reset__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 445 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline error_t CC2420TKN154P__RadioTx__transmit(ieee154_txframe_t *frame, uint32_t t0, uint32_t dt)
{

  if ((((
#line 447
  frame == (void *)0 || frame->header == (void *)0) || (
  frame->payload == (void *)0 && frame->payloadLen != 0)) || frame->metadata == (void *)0) || 
  frame->headerLen + frame->payloadLen + 2 > IEEE154_aMaxPHYPacketSize) {
    return EINVAL;
    }
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 452
    {
      if (CC2420TKN154P__m_state != CC2420TKN154P__S_RADIO_OFF) 
        {
          unsigned char __nesc_temp = 
#line 454
          FAIL;

          {
#line 454
            __nesc_atomic_end(__nesc_atomic); 
#line 454
            return __nesc_temp;
          }
        }
#line 455
      CC2420TKN154P__m_state = CC2420TKN154P__S_LOAD_TXFIFO_NO_CSMA;
    }
#line 456
    __nesc_atomic_end(__nesc_atomic); }
  CC2420TKN154P__m_txframe = frame;
  CC2420TKN154P__m_t0 = t0;
  CC2420TKN154P__m_dt = dt;
  CC2420TKN154P__loadTxFrame(frame);
  return SUCCESS;
}

# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
inline static error_t RadioControlImplP__PhyTx__transmit(ieee154_txframe_t *frame, uint32_t t0, uint32_t dt){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = CC2420TKN154P__RadioTx__transmit(frame, t0, dt);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 117 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline error_t RadioControlImplP__MacTx__transmit(uint8_t client, ieee154_txframe_t *frame, uint32_t t0, uint32_t dt)
{
  if (client == RadioControlImplP__ArbiterInfo__userId()) {
    return RadioControlImplP__PhyTx__transmit(frame, t0, dt);
    }
  else 
#line 121
    {
      while (!0) {
#line 122
          break;
        }
#line 122
      ;
      return IEEE154_TRANSACTION_OVERFLOW;
    }
}

# 66 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioTx.nc"
inline static error_t ScanP__RadioTx__transmit(ieee154_txframe_t *frame, uint32_t t0, uint32_t dt){
#line 66
  unsigned char __nesc_result;
#line 66

#line 66
  __nesc_result = RadioControlImplP__MacTx__transmit(0, frame, t0, dt);
#line 66

#line 66
  return __nesc_result;
#line 66
}
#line 66
# 297 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline error_t CC2420TKN154P__EnergyDetection__start(uint32_t duration)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 299
    {
      if (CC2420TKN154P__m_state == CC2420TKN154P__S_ED) 
        {
          unsigned char __nesc_temp = 
#line 301
          EALREADY;

          {
#line 301
            __nesc_atomic_end(__nesc_atomic); 
#line 301
            return __nesc_temp;
          }
        }
      else {
#line 302
        if (CC2420TKN154P__m_state != CC2420TKN154P__S_RADIO_OFF) 
          {
            unsigned char __nesc_temp = 
#line 303
            FAIL;

            {
#line 303
              __nesc_atomic_end(__nesc_atomic); 
#line 303
              return __nesc_temp;
            }
          }
        }
#line 304
      CC2420TKN154P__m_state = CC2420TKN154P__S_ED;
    }
#line 305
    __nesc_atomic_end(__nesc_atomic); }
  CC2420TKN154P__m_edDuration = duration;
  CC2420TKN154P__m_maxEnergy = -128 + 45;
  CC2420TKN154P__SpiResource__request();
  return SUCCESS;
}

# 49 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/EnergyDetection.nc"
inline static error_t ScanP__EnergyDetection__start(uint32_t duration){
#line 49
  unsigned char __nesc_result;
#line 49

#line 49
  __nesc_result = CC2420TKN154P__EnergyDetection__start(duration);
#line 49

#line 49
  return __nesc_result;
#line 49
}
#line 49
# 89 "/usr/src/tinyos/tos/interfaces/Pool.nc"
inline static error_t ScanP__TxControlPool__put(ScanP__TxControlPool__t * newVal){
#line 89
  unsigned char __nesc_result;
#line 89

#line 89
  __nesc_result = /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__put(newVal);
#line 89

#line 89
  return __nesc_result;
#line 89
}
#line 89
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t ScanP__RadioToken__release(void ){
#line 137
  unsigned char __nesc_result;
#line 137

#line 137
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(0);
#line 137

#line 137
  return __nesc_result;
#line 137
}
#line 137
# 65 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_ASSOCIATE.nc"
inline static ieee154_status_t TestDeviceC__MLME_ASSOCIATE__request(uint8_t LogicalChannel, uint8_t ChannelPage, uint8_t CoordAddrMode, uint16_t CoordPANID, ieee154_address_t CoordAddress, ieee154_CapabilityInformation_t CapabilityInformation, ieee154_security_t *security){
#line 65
  enum ieee154_status __nesc_result;
#line 65

#line 65
  __nesc_result = AssociateP__MLME_ASSOCIATE__request(LogicalChannel, ChannelPage, CoordAddrMode, CoordPANID, CoordAddress, CapabilityInformation, security);
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t BeaconSynchronizeP__RadioToken__request(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__request(8);
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 125 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static inline void BeaconSynchronizeP__setUpdatePending(void )
#line 125
{
#line 125
  BeaconSynchronizeP__m_state |= BeaconSynchronizeP__UPDATE_PENDING;
}




static inline void BeaconSynchronizeP__setExternalRequest(void )
#line 131
{
#line 131
  BeaconSynchronizeP__m_state |= BeaconSynchronizeP__EXTERNAL_REQUEST;
}

#line 164
static inline ieee154_status_t BeaconSynchronizeP__MLME_SYNC__request(
uint8_t logicalChannel, 
uint8_t channelPage, 
bool trackBeacon)
{
  error_t status = IEEE154_SUCCESS;
  uint32_t supportedChannels = IEEE154_SUPPORTED_CHANNELS;
  uint32_t currentChannelBit = 1;

  currentChannelBit <<= logicalChannel;

  if (((
#line 174
  !(currentChannelBit & supportedChannels) || BeaconSynchronizeP__MLME_GET__macPANId() == 0xFFFF) || 
  channelPage != (IEEE154_SUPPORTED_CHANNELS >> 27)) || !TRUE) {
    status = IEEE154_INVALID_PARAMETER;
    }
  else 
#line 177
    {
      BeaconSynchronizeP__m_updateTrackBeacon = trackBeacon;
      BeaconSynchronizeP__m_updateLogicalChannel = logicalChannel;
      BeaconSynchronizeP__setExternalRequest();
      BeaconSynchronizeP__setUpdatePending();
      BeaconSynchronizeP__RadioToken__request();
    }

  ;
  return status;
}

# 62 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SYNC.nc"
inline static ieee154_status_t TestDeviceC__MLME_SYNC__request(uint8_t LogicalChannel, uint8_t ChannelPage, bool TrackBeacon){
#line 62
  enum ieee154_status __nesc_result;
#line 62

#line 62
  __nesc_result = BeaconSynchronizeP__MLME_SYNC__request(LogicalChannel, ChannelPage, TrackBeacon);
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 113 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t TestDeviceC__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value){
#line 113
  enum ieee154_status __nesc_result;
#line 113

#line 113
  __nesc_result = PibP__MLME_SET__macCoordShortAddress(value);
#line 113

#line 113
  return __nesc_result;
#line 113
}
#line 113
#line 138
inline static ieee154_status_t TestDeviceC__MLME_SET__macPANId(ieee154_macPANId_t value){
#line 138
  enum ieee154_status __nesc_result;
#line 138

#line 138
  __nesc_result = PibP__MLME_SET__macPANId(value);
#line 138

#line 138
  return __nesc_result;
#line 138
}
#line 138
# 126 "TestDeviceC.nc"
static inline void TestDeviceC__MLME_SCAN__confirm(
ieee154_status_t status, 
uint8_t ScanType, 
uint8_t ChannelPage, 
uint32_t UnscannedChannels, 
uint8_t EnergyDetectListNumEntries, 
int8_t *EnergyDetectList, 
uint8_t PANDescriptorListNumEntries, 
ieee154_PANDescriptor_t *PANDescriptorList)

{
  if (TestDeviceC__m_wasScanSuccessful) {
      TestDeviceC__MLME_SET__macPANId(TestDeviceC__m_PANDescriptor.CoordPANId);
      TestDeviceC__MLME_SET__macCoordShortAddress(TestDeviceC__m_PANDescriptor.CoordAddress.shortAddress);
      TestDeviceC__MLME_SYNC__request(TestDeviceC__m_PANDescriptor.LogicalChannel, TestDeviceC__m_PANDescriptor.ChannelPage, TRUE);
      TestDeviceC__MLME_ASSOCIATE__request(
      TestDeviceC__m_PANDescriptor.LogicalChannel, 
      TestDeviceC__m_PANDescriptor.ChannelPage, 
      TestDeviceC__m_PANDescriptor.CoordAddrMode, 
      TestDeviceC__m_PANDescriptor.CoordPANId, 
      TestDeviceC__m_PANDescriptor.CoordAddress, 
      TestDeviceC__m_capabilityInformation, 
      (void *)0);
    }
  else {
    TestDeviceC__startApp();
    }
}

# 118 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SCAN.nc"
inline static void ScanP__MLME_SCAN__confirm(ieee154_status_t status, uint8_t ScanType, uint8_t ChannelPage, uint32_t UnscannedChannels, uint8_t EnergyDetectNumResults, int8_t *EnergyDetectList, uint8_t PANDescriptorListNumResults, ieee154_PANDescriptor_t *PANDescriptorList){
#line 118
  TestDeviceC__MLME_SCAN__confirm(status, ScanType, ChannelPage, UnscannedChannels, EnergyDetectNumResults, EnergyDetectList, PANDescriptorListNumResults, PANDescriptorList);
#line 118
}
#line 118
# 69 "/usr/src/tinyos/tos/system/QueueC.nc"
static inline void /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__printQueue(void )
#line 69
{
}

# 102 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoBeaconTransmitP.nc"
static inline void NoBeaconTransmitP__RadioOff__offDone(void )
#line 102
{
}

# 529 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioOff__offDone(void )
{
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lock = FALSE;
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__updateState();
}

# 94 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioOff__offDone(void )
#line 94
{
}

# 153 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDeviceCfpP.nc"
static inline void NoDeviceCfpP__RadioOff__offDone(void )
#line 153
{
}

# 141 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoCoordCfpP.nc"
static inline void NoCoordCfpP__RadioOff__offDone(void )
{
}

# 73 "/usr/src/tinyos/tos/lib/mac/tkn154/InactivePeriodP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioOff__offDone(void )
#line 73
{
#line 73
  while (!0) {
#line 73
      break;
    }
#line 73
  ;
}

#line 73
static inline void /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioOff__offDone(void )
#line 73
{
#line 73
  while (!0) {
#line 73
      break;
    }
#line 73
  ;
}

# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t PibP__radioControlStopTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PibP__radioControlStopTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 193 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__RadioOff__offDone(void )
{
  PibP__radioControlStopTask__postTask();
}

# 214 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__MacRadioOff__default__offDone(uint8_t client)
{
  while (!0) {
#line 216
      break;
    }
#line 216
  ;
}

# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static void RadioControlImplP__MacRadioOff__offDone(uint8_t arg_0x2ab71d5c6868){
#line 53
  switch (arg_0x2ab71d5c6868) {
#line 53
    case 0:
#line 53
      ScanP__RadioOff__offDone();
#line 53
      break;
#line 53
    case 1:
#line 53
      PibP__RadioOff__offDone();
#line 53
      break;
#line 53
    case 2:
#line 53
      PromiscuousModeP__RadioOff__offDone();
#line 53
      break;
#line 53
    case 3:
#line 53
      NoBeaconTransmitP__RadioOff__offDone();
#line 53
      break;
#line 53
    case 5:
#line 53
      /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioOff__offDone();
#line 53
      break;
#line 53
    case 6:
#line 53
      NoCoordCfpP__RadioOff__offDone();
#line 53
      break;
#line 53
    case 7:
#line 53
      /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioOff__offDone();
#line 53
      break;
#line 53
    case 8:
#line 53
      BeaconSynchronizeP__RadioOff__offDone();
#line 53
      break;
#line 53
    case 9:
#line 53
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioOff__offDone();
#line 53
      break;
#line 53
    case 10:
#line 53
      NoDeviceCfpP__RadioOff__offDone();
#line 53
      break;
#line 53
    case 11:
#line 53
      /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioOff__offDone();
#line 53
      break;
#line 53
    default:
#line 53
      RadioControlImplP__MacRadioOff__default__offDone(arg_0x2ab71d5c6868);
#line 53
      break;
#line 53
    }
#line 53
}
#line 53
# 200 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static inline void RadioControlImplP__PhyRadioOff__offDone(void )
{
  RadioControlImplP__MacRadioOff__offDone(RadioControlImplP__ArbiterInfo__userId());
}

# 53 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static void CC2420TKN154P__RadioOff__offDone(void ){
#line 53
  RadioControlImplP__PhyRadioOff__offDone();
#line 53
}
#line 53
# 56 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioRx.nc"
inline static error_t PromiscuousModeP__PromiscuousRx__enableRx(uint32_t t0, uint32_t dt){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = RadioControlImplP__MacRx__enableRx(2, t0, dt);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t PromiscuousModeP__continueStopTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PromiscuousModeP__continueStopTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t ScanP__continueScanRequestTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(ScanP__continueScanRequestTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t ScanP__nextIterationTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(ScanP__nextIterationTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t HplCC2420InterruptsP__CCATask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(HplCC2420InterruptsP__CCATask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
inline static error_t CC2420TKN154P__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420TKN154P__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 160 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__CC2420Power__startOscillatorDone(void )
{
  CC2420TKN154P__CC2420Power__rfOff();
  CC2420TKN154P__CC2420Power__flushRxFifo();
  CC2420TKN154P__CC2420Tx__unlockChipSpi();
  CC2420TKN154P__startDoneTask__postTask();
}

# 77 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startOscillatorDone(void ){
#line 77
  CC2420TKN154P__CC2420Power__startOscillatorDone();
#line 77
}
#line 77
# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__IOCFG1__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG1, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 105 "/usr/src/tinyos/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline error_t HplCC2420InterruptsP__CCA__disable(void )
#line 105
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 106
    HplCC2420InterruptsP__ccaCheckDisabled = TRUE;
#line 106
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 61 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__disable(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplCC2420InterruptsP__CCA__disable();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 446 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__InterruptCCA__fired(void )
#line 446
{
  CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTED;
  CC2420ControlP__InterruptCCA__disable();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CSN__clr();
  CC2420ControlP__IOCFG1__write(0);
  CC2420ControlP__writeId();
  CC2420ControlP__CSN__set();
  CC2420ControlP__CC2420Power__startOscillatorDone();
}

# 68 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
inline static void HplCC2420InterruptsP__CCA__fired(void ){
#line 68
  CC2420ControlP__InterruptCCA__fired();
#line 68
}
#line 68
# 54 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )48U & (1 << 6)) != 0;
}

# 43 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static bool HplCC2420InterruptsP__CC_CCA__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 69 "/usr/src/tinyos/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline void HplCC2420InterruptsP__CCATask__runTask(void )
#line 69
{
  uint8_t CCAState;

#line 71
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 71
    {
      if (HplCC2420InterruptsP__ccaCheckDisabled) {
          {
#line 73
            __nesc_atomic_end(__nesc_atomic); 
#line 73
            return;
          }
        }
    }
#line 76
    __nesc_atomic_end(__nesc_atomic); }

  CCAState = HplCC2420InterruptsP__CC_CCA__get();
  if (HplCC2420InterruptsP__ccaLastState != HplCC2420InterruptsP__ccaWaitForState && CCAState == HplCC2420InterruptsP__ccaWaitForState) {
      HplCC2420InterruptsP__CCA__fired();
    }



  HplCC2420InterruptsP__ccaLastState = CCAState;
  HplCC2420InterruptsP__CCATask__postTask();
}

# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t CC2420TKN154P__configSyncTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(CC2420TKN154P__configSyncTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 276 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__configSyncTask__runTask(void )
{
  if (CC2420TKN154P__SpiResource__immediateRequest() == SUCCESS) {
      CC2420TKN154P__CC2420Config__sync();
      if (CC2420TKN154P__m_state == CC2420TKN154P__S_RECEIVING) {

          CC2420TKN154P__CC2420Power__rfOff();
          CC2420TKN154P__CC2420Power__rxOn();
        }
      CC2420TKN154P__SpiResource__release();
    }
  else {
#line 287
    CC2420TKN154P__configSyncTask__postTask();
    }
}

# 128 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static bool CC2420ControlP__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = CC2420SpiP__Resource__isOwner(/*CC2420ControlTransmitC.Spi*/CC2420SpiC__0__CLIENT_ID);
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 157 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline bool CC2420ControlP__Resource__isOwner(void )
#line 157
{
  return CC2420ControlP__SpiResource__isOwner();
}

# 128 "/usr/src/tinyos/tos/interfaces/Resource.nc"
inline static bool CC2420TKN154P__SpiResource__isOwner(void ){
#line 128
  unsigned char __nesc_result;
#line 128

#line 128
  __nesc_result = CC2420ControlP__Resource__isOwner();
#line 128

#line 128
  return __nesc_result;
#line 128
}
#line 128
# 782 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__txDoneRxControlStopped(void )
{

  if (CC2420TKN154P__SpiResource__isOwner() || CC2420TKN154P__SpiResource__immediateRequest() == SUCCESS) {
    CC2420TKN154P__sendDoneSpiReserved();
    }
  else {
#line 788
    CC2420TKN154P__SpiResource__request();
    }
}

#line 357
static inline void CC2420TKN154P__offStopRxDone(void )
{
  if (CC2420TKN154P__SpiResource__immediateRequest() == SUCCESS) {
    CC2420TKN154P__offSpiReserved();
    }
  else {
#line 362
    CC2420TKN154P__SpiResource__request();
    }
}

#line 854
static inline void CC2420TKN154P__rxControlStopDoneTask__runTask(void )
{
  switch (CC2420TKN154P__m_state) 
    {
      case CC2420TKN154P__S_OFF_PENDING: CC2420TKN154P__offStopRxDone();
#line 858
      break;
      case CC2420TKN154P__S_TX_ACTIVE_NO_CSMA: 
        case CC2420TKN154P__S_TX_ACTIVE_UNSLOTTED_CSMA: 
          case CC2420TKN154P__S_TX_ACTIVE_SLOTTED_CSMA: CC2420TKN154P__txDoneRxControlStopped();
#line 861
      break;
      default: while (!0) {
#line 862
            break;
          }
#line 862
      ;
#line 862
      break;
    }
}

# 73 "TestDeviceC.nc"
static inline void TestDeviceC__MLME_RESET__confirm(ieee154_status_t status)
{
  if (status == IEEE154_SUCCESS) {
    TestDeviceC__startApp();
    }
}

# 78 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RESET.nc"
inline static void PibP__MLME_RESET__confirm(ieee154_status_t status){
#line 78
  TestDeviceC__MLME_RESET__confirm(status);
#line 78
}
#line 78
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t PibP__RadioToken__release(void ){
#line 137
  unsigned char __nesc_result;
#line 137

#line 137
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(1);
#line 137

#line 137
  return __nesc_result;
#line 137
}
#line 137








inline static bool PibP__RadioToken__isOwner(void ){
#line 145
  unsigned char __nesc_result;
#line 145

#line 145
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__isOwner(1);
#line 145

#line 145
  return __nesc_result;
#line 145
}
#line 145
# 234 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__RadioControl__startDone(error_t error)
{

  if (PibP__RadioToken__isOwner()) {
      if (PibP__m_setDefaultPIB) {
        PibP__resetAttributesToDefault();
        }
      PibP__PIBUpdate__notify(IEEE154_phyCurrentChannel, & PibP__m_pib.phyCurrentChannel);
      PibP__PIBUpdate__notify(IEEE154_macShortAddress, & PibP__m_pib.macShortAddress);
      PibP__PIBUpdate__notify(IEEE154_macPANId, & PibP__m_pib.macPANId);
      PibP__PIBUpdate__notify(IEEE154_phyCCAMode, & PibP__m_pib.phyCCAMode);
      PibP__PIBUpdate__notify(IEEE154_phyTransmitPower, & PibP__m_pib.phyTransmitPower);
      PibP__PIBUpdate__notify(IEEE154_phyCurrentPage, & PibP__m_pib.phyCurrentPage);
      PibP__PIBUpdate__notify(IEEE154_macPanCoordinator, & PibP__m_pib.macPanCoordinator);

      PibP__RadioToken__release();
      PibP__MLME_RESET__confirm(IEEE154_SUCCESS);
    }
}

# 75 "/usr/src/tinyos/tos/lib/mac/tkn154/InactivePeriodP.nc"
static inline void /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioControl__startDone(error_t result)
#line 75
{
}

#line 75
static inline void /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioControl__startDone(error_t result)
#line 75
{
}

# 113 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
inline static void CC2420TKN154P__SplitControl__startDone(error_t error){
#line 113
  /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioControl__startDone(error);
#line 113
  /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioControl__startDone(error);
#line 113
  PibP__RadioControl__startDone(error);
#line 113
}
#line 113
# 292 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline uint8_t CC2420ControlP__CC2420Config__getChannel(void )
#line 292
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 293
    {
      unsigned char __nesc_temp = 
#line 293
      CC2420ControlP__m_channel;

      {
#line 293
        __nesc_atomic_end(__nesc_atomic); 
#line 293
        return __nesc_temp;
      }
    }
#line 295
    __nesc_atomic_end(__nesc_atomic); }
}

# 65 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static uint8_t CC2420TKN154P__CC2420Config__getChannel(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = CC2420ControlP__CC2420Config__getChannel();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65

inline static void CC2420TKN154P__CC2420Config__setChannel(uint8_t channel){
#line 66
  CC2420ControlP__CC2420Config__setChannel(channel);
#line 66
}
#line 66
# 168 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__startDoneTask__runTask(void )
{



  CC2420TKN154P__CC2420Config__setChannel(CC2420TKN154P__CC2420Config__getChannel());
  CC2420TKN154P__CC2420Config__sync();
  CC2420TKN154P__SpiResource__release();
  CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;
  CC2420TKN154P__SplitControl__startDone(SUCCESS);
}

# 52 "/usr/src/tinyos/tos/interfaces/Random.nc"
inline static uint16_t PibP__Random__rand16(void ){
#line 52
  unsigned short __nesc_result;
#line 52

#line 52
  __nesc_result = RandomMlcgC__Random__rand16();
#line 52

#line 52
  return __nesc_result;
#line 52
}
#line 52
# 266 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_phyMaxFrameDuration_t PibP__MLME_GET__phyMaxFrameDuration(void )
#line 266
{
#line 266
  return IEEE154_MAX_FRAME_DURATION;
}

#line 140
static inline void PibP__updateMacMaxFrameTotalWaitTime(void )
{

  ieee154_macMinBE_t macMinBE = PibP__m_pib.macMinBE;
  ieee154_macMaxBE_t macMaxBE = PibP__m_pib.macMaxBE;
  ieee154_macMaxCSMABackoffs_t macMaxCSMABackoffs = PibP__m_pib.macMaxCSMABackoffs;
  uint8_t m = macMaxBE - macMinBE;
#line 146
  uint8_t k;
  uint32_t waitTime = 0;

  if (macMaxCSMABackoffs < m) {
    m = macMaxCSMABackoffs;
    }
#line 151
  waitTime = (((uint16_t )1 << macMaxBE) - 1) * (macMaxCSMABackoffs - m);
  if (m) {
      k = 0;
      while (k != m) {
          waitTime += (uint16_t )1 << (macMinBE + k);
          k += 1;
        }
    }
  waitTime *= IEEE154_aUnitBackoffPeriod;
  waitTime += PibP__MLME_GET__phyMaxFrameDuration();
  PibP__m_pib.macMaxFrameTotalWaitTime = waitTime;
}

# 327 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline void ScanP__EnergyDetection__done(error_t status, int8_t EnergyLevel)
{
  if (status == SUCCESS && ScanP__m_resultListNumEntries) {
    ((uint8_t *)ScanP__m_resultList)[ScanP__m_resultIndex++] = EnergyLevel;
    }
#line 331
  if (ScanP__m_resultIndex == ScanP__m_resultListNumEntries) {
    ScanP__m_terminateScan = TRUE;
    }
#line 333
  if (ScanP__RadioOff__off() == EALREADY) {
    ScanP__RadioOff__offDone();
    }
}

# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/EnergyDetection.nc"
inline static void CC2420TKN154P__EnergyDetection__done(error_t status, int8_t EnergyLevel){
#line 61
  ScanP__EnergyDetection__done(status, EnergyLevel);
#line 61
}
#line 61
# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TimeCalc.nc"
inline static bool CC2420TKN154P__TimeCalc__hasExpired(uint32_t t0, uint32_t dt){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = PibP__TimeCalc__hasExpired(t0, dt);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 104 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static error_t CC2420TKN154P__CC2420Power__rssi(int8_t *rssi){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = CC2420ControlP__CC2420Power__rssi(rssi);
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 320 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__energyDetectionTask__runTask(void )
{
  int8_t value;

#line 323
  if (CC2420TKN154P__CC2420Power__rssi(&value) == SUCCESS) {
    if (value > CC2420TKN154P__m_maxEnergy) {
      CC2420TKN154P__m_maxEnergy = value;
      }
    }
#line 327
  if (CC2420TKN154P__TimeCalc__hasExpired(CC2420TKN154P__m_edStartTime, CC2420TKN154P__m_edDuration)) {


      CC2420TKN154P__m_maxEnergy -= 45;
      CC2420TKN154P__CC2420Power__rfOff();
      CC2420TKN154P__CC2420Power__flushRxFifo();
      CC2420TKN154P__SpiResource__release();
      CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;
      CC2420TKN154P__EnergyDetection__done(SUCCESS, CC2420TKN154P__m_maxEnergy);
    }
  else {
#line 337
    CC2420TKN154P__energyDetectionTask__postTask();
    }
}

# 55 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RSSI__read(uint16_t *data){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = CC2420SpiP__Reg__read(CC2420_RSSI, data);
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 65 "/usr/src/tinyos/tos/system/QueueC.nc"
static inline /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__queue_t /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__head(void )
#line 65
{
  return /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__queue[/*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__head];
}

# 73 "/usr/src/tinyos/tos/interfaces/Queue.nc"
inline static CoordBroadcastP__Queue__t  CoordBroadcastP__Queue__head(void ){
#line 73
  struct __nesc_unnamed4318 *__nesc_result;
#line 73

#line 73
  __nesc_result = /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 53 "/usr/src/tinyos/tos/system/QueueC.nc"
static inline bool /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__empty(void )
#line 53
{
  return /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__size == 0;
}

# 50 "/usr/src/tinyos/tos/interfaces/Queue.nc"
inline static bool CoordBroadcastP__Queue__empty(void ){
#line 50
  unsigned char __nesc_result;
#line 50

#line 50
  __nesc_result = /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__empty();
#line 50

#line 50
  return __nesc_result;
#line 50
}
#line 50
# 128 "/usr/src/tinyos/tos/lib/mac/tkn154/CoordBroadcastP.nc"
static inline void CoordBroadcastP__transmitNowDoneTask__runTask(void )
{
  if (!CoordBroadcastP__m_lock) {
    return;
    }
#line 132
  if (CoordBroadcastP__m_transmittedFrame == CoordBroadcastP__m_realignmentFrame) {
      CoordBroadcastP__m_realignmentFrame = (void *)0;
      CoordBroadcastP__RealignmentTx__transmitDone(CoordBroadcastP__m_transmittedFrame, CoordBroadcastP__m_status);
    }
  else {
#line 135
    if (CoordBroadcastP__m_transmittedFrame == CoordBroadcastP__m_queueHead) {
        CoordBroadcastP__Queue__dequeue();
        if (CoordBroadcastP__Queue__empty()) {
          CoordBroadcastP__m_queueHead = (void *)0;
          }
        else {
#line 140
          CoordBroadcastP__m_queueHead = CoordBroadcastP__Queue__head();
          }
#line 141
        CoordBroadcastP__BroadcastDataFrame__transmitDone(CoordBroadcastP__m_transmittedFrame, CoordBroadcastP__m_status);
      }
    }
#line 143
  CoordBroadcastP__m_lock = FALSE;
}

# 148 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline void PromiscuousModeP__PromiscuousMode__default__stopDone(error_t error)
#line 148
{
}

# 138 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
inline static void PromiscuousModeP__PromiscuousMode__stopDone(error_t error){
#line 138
  PromiscuousModeP__PromiscuousMode__default__stopDone(error);
#line 138
}
#line 138
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t PromiscuousModeP__RadioToken__release(void ){
#line 137
  unsigned char __nesc_result;
#line 137

#line 137
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(2);
#line 137

#line 137
  return __nesc_result;
#line 137
}
#line 137
# 89 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Config.nc"
inline static void CC2420TKN154P__CC2420Config__setPromiscuousMode(bool on){
#line 89
  CC2420ControlP__CC2420Config__setPromiscuousMode(on);
#line 89
}
#line 89
# 290 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__RadioPromiscuousMode__set(bool val)
{
  CC2420TKN154P__CC2420Config__setPromiscuousMode(val);
}

# 55 "/usr/src/tinyos/tos/interfaces/Set.nc"
inline static void PromiscuousModeP__RadioPromiscuousMode__set(PromiscuousModeP__RadioPromiscuousMode__val_t val){
#line 55
  CC2420TKN154P__RadioPromiscuousMode__set(val);
#line 55
}
#line 55
# 129 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline void PromiscuousModeP__continueStopTask__runTask(void )
{
  PromiscuousModeP__RadioPromiscuousMode__set(FALSE);
  PromiscuousModeP__m_state = PromiscuousModeP__S_STOPPED;
  PromiscuousModeP__RadioToken__release();
  ;
  PromiscuousModeP__PromiscuousMode__stopDone(SUCCESS);
}










static inline void PromiscuousModeP__PromiscuousMode__default__startDone(error_t error)
#line 147
{
}

# 113 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
inline static void PromiscuousModeP__PromiscuousMode__startDone(error_t error){
#line 113
  PromiscuousModeP__PromiscuousMode__default__startDone(error);
#line 113
}
#line 113
# 96 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline void PromiscuousModeP__signalStartDoneTask__runTask(void )
{
  PromiscuousModeP__m_state = PromiscuousModeP__S_STARTED;
  ;
  PromiscuousModeP__PromiscuousMode__startDone(SUCCESS);
}

# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status){
#line 51
  /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTxCsma__transmitDone(txFrame, status);
#line 51
}
#line 51
# 651 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__signalTxDoneTask__runTask(void )
{
  ieee154_txframe_t *lastFrame = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lastFrame;
  ieee154_status_t status = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_txStatus;

#line 655
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_indirectTxPending = FALSE;
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lastFrame = (void *)0;
  if (lastFrame) {


      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameTx__transmitDone(lastFrame, status);
    }
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__updateState();
}

#line 757
static inline error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameBackup__default__setNow(ieee154_cap_frame_backup_t *val)
#line 757
{
#line 757
  return FAIL;
}

# 53 "/usr/src/tinyos/tos/interfaces/SetNow.nc"
inline static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameBackup__setNow(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameBackup__data_type val){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameBackup__default__setNow(val);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 698 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__backupCurrentFrame(void )
{
  ieee154_cap_frame_backup_t backup = { /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_transactionTime, /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_currentFrame, /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_csma };

#line 701
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameBackup__setNow(&backup);
}

#line 277
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__setupTxBroadcastTask__runTask(void )
{
  ieee154_macDSN_t tmp;
  ieee154_txframe_t *oldFrame = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_currentFrame;

#line 281
  if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__COORD_ROLE) {
      if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_bcastFrame != (void *)0) {






          /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__backupCurrentFrame();
          /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__setCurrentFrame(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_bcastFrame);
          if (oldFrame) {

              tmp = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_bcastFrame->header->mhr[MHR_INDEX_SEQNO];
              /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_bcastFrame->header->mhr[MHR_INDEX_SEQNO] = 
              oldFrame->header->mhr[MHR_INDEX_SEQNO];
              oldFrame->header->mhr[MHR_INDEX_SEQNO] = tmp;
            }
        }
    }
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lock = FALSE;
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__updateState();
}

# 292 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macDSN_t PibP__MLME_GET__macDSN(void )
#line 292
{
#line 292
  return PibP__m_pib.macDSN;
}

# 108 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macDSN_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macDSN(void ){
#line 108
  unsigned char __nesc_result;
#line 108

#line 108
  __nesc_result = PibP__MLME_GET__macDSN();
#line 108

#line 108
  return __nesc_result;
#line 108
}
#line 108
# 118 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_SET__macDSN(ieee154_macDSN_t value){
#line 118
  enum ieee154_status __nesc_result;
#line 118

#line 118
  __nesc_result = PibP__MLME_SET__macDSN(value);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 296 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macMaxCSMABackoffs_t PibP__MLME_GET__macMaxCSMABackoffs(void )
#line 296
{
#line 296
  return PibP__m_pib.macMaxCSMABackoffs;
}

# 114 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macMaxCSMABackoffs_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macMaxCSMABackoffs(void ){
#line 114
  unsigned char __nesc_result;
#line 114

#line 114
  __nesc_result = PibP__MLME_GET__macMaxCSMABackoffs();
#line 114

#line 114
  return __nesc_result;
#line 114
}
#line 114
# 314 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macMaxBE_t PibP__MLME_GET__macMaxBE(void )
#line 314
{
#line 314
  return PibP__m_pib.macMaxBE;
}

# 141 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macMaxBE_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macMaxBE(void ){
#line 141
  unsigned char __nesc_result;
#line 141

#line 141
  __nesc_result = PibP__MLME_GET__macMaxBE();
#line 141

#line 141
  return __nesc_result;
#line 141
}
#line 141
# 298 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macMinBE_t PibP__MLME_GET__macMinBE(void )
#line 298
{
#line 298
  return PibP__m_pib.macMinBE;
}

# 117 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macMinBE_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macMinBE(void ){
#line 117
  unsigned char __nesc_result;
#line 117

#line 117
  __nesc_result = PibP__MLME_GET__macMinBE();
#line 117

#line 117
  return __nesc_result;
#line 117
}
#line 117
# 278 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macBattLifeExt_t PibP__MLME_GET__macBattLifeExt(void )
#line 278
{
#line 278
  return PibP__m_pib.macBattLifeExt;
}

# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macBattLifeExt_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macBattLifeExt(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = PibP__MLME_GET__macBattLifeExt();
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 381 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline ieee154_txframe_t *IndirectTxP__GetIndirectTxFrame__get(void )
#line 381
{
#line 381
  return IndirectTxP__m_pendingTxFrame;
}

# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
inline static /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__GetIndirectTxFrame__val_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__GetIndirectTxFrame__get(void ){
#line 55
  struct __nesc_unnamed4318 *__nesc_result;
#line 55

#line 55
  __nesc_result = IndirectTxP__GetIndirectTxFrame__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 318 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macMaxFrameRetries_t PibP__MLME_GET__macMaxFrameRetries(void )
#line 318
{
#line 318
  return PibP__m_pib.macMaxFrameRetries;
}

# 147 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macMaxFrameRetries_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macMaxFrameRetries(void ){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = PibP__MLME_GET__macMaxFrameRetries();
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 164 "/usr/src/tinyos/tos/lib/mac/tkn154/RxEnableP.nc"
static inline void RxEnableP__WasRxEnabled__notify(bool val)
{
  if (RxEnableP__m_isRxEnabled && RxEnableP__m_confirmPending) {
      RxEnableP__m_confirmPending = FALSE;
      RxEnableP__MLME_RX_ENABLE__confirm(IEEE154_SUCCESS);
    }
  ;
  ;
}

# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
inline static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__WasRxEnabled__notify(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__WasRxEnabled__val_t val){
#line 74
  RxEnableP__WasRxEnabled__notify(val);
#line 74
}
#line 74
# 736 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__wasRxEnabledTask__runTask(void )
{
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__WasRxEnabled__notify(TRUE);
}

# 62 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__resetTxDonePending(void )
#line 62
{
#line 62
  /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__m_state &= ~/*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__TX_DONE_PENDING;
}

# 128 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static inline void BeaconSynchronizeP__setInternalRequest(void )
#line 128
{
#line 128
  BeaconSynchronizeP__m_state |= BeaconSynchronizeP__INTERNAL_REQUEST;
}

#line 476
static inline error_t BeaconSynchronizeP__TrackSingleBeacon__start(void )
{

  ;
  BeaconSynchronizeP__setInternalRequest();
  BeaconSynchronizeP__RadioToken__request();
  if (!BeaconSynchronizeP__isUpdatePending()) {
      BeaconSynchronizeP__m_updateLogicalChannel = BeaconSynchronizeP__MLME_GET__phyCurrentChannel();
      BeaconSynchronizeP__m_updateTrackBeacon = FALSE;
      BeaconSynchronizeP__setUpdatePending();
    }
  return SUCCESS;
}

# 104 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
inline static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__TrackSingleBeacon__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = BeaconSynchronizeP__TrackSingleBeacon__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
inline static /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__IsTrackingBeacons__data_type /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__IsTrackingBeacons__getNow(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = BeaconSynchronizeP__IsTrackingBeacons__getNow();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 249 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline ieee154_status_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameTx__transmit(ieee154_txframe_t *frame)
{
  if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_currentFrame != (void *)0) {

      ;
      return IEEE154_TRANSACTION_OVERFLOW;
    }
  else 
#line 255
    {
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__setCurrentFrame(frame);


      if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__DEVICE_ROLE && !/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__IsTrackingBeacons__getNow()) {
          /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__TrackSingleBeacon__start();
          ;
        }


      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__updateState();
      return IEEE154_SUCCESS;
    }
}

# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static ieee154_status_t /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTxCsma__transmit(ieee154_txframe_t *txFrame){
#line 43
  enum ieee154_status __nesc_result;
#line 43

#line 43
  __nesc_result = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameTx__transmit(txFrame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__setTxDonePending(void )
#line 61
{
#line 61
  /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__m_state |= /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__TX_DONE_PENDING;
}

# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__txTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__txTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 180 "/usr/src/tinyos/tos/lib/mac/tkn154/DataP.nc"
static inline void DataP__PurgeDirect__purgeDone(ieee154_txframe_t *data, ieee154_status_t status)
{
  DataP__finishTxTransaction(data, status);
}

# 37 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/Purge.nc"
inline static void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Purge__purgeDone(ieee154_txframe_t *txFrame, ieee154_status_t status){
#line 37
  DataP__PurgeDirect__purgeDone(txFrame, status);
#line 37
}
#line 37
# 65 "/usr/src/tinyos/tos/system/QueueC.nc"
static inline /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__queue_t /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__head(void )
#line 65
{
  return /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__queue[/*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__head];
}

# 73 "/usr/src/tinyos/tos/interfaces/Queue.nc"
inline static /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__t  /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__head(void ){
#line 73
  struct __nesc_unnamed4318 *__nesc_result;
#line 73

#line 73
  __nesc_result = /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__head();
#line 73

#line 73
  return __nesc_result;
#line 73
}
#line 73
# 60 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static inline bool /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__isTxDonePending(void )
#line 60
{
#line 60
  return /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__m_state & /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__TX_DONE_PENDING ? TRUE : FALSE;
}

#line 90
static inline void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__txTask__runTask(void )
{
  if (!/*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__isTxDonePending() && /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__size()) {
      ieee154_txframe_t *txFrame = /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__head();

#line 94
      if (txFrame->headerLen == 0) {

          /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__dequeue();
          /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Purge__purgeDone(txFrame, IEEE154_SUCCESS);
          /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__txTask__postTask();
        }
      /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__m_client = txFrame->client;
      /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__setTxDonePending();
      if (/*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTxCsma__transmit(txFrame) != IEEE154_SUCCESS) {
        /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__resetTxDonePending();
        }
    }
}

# 216 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static inline void BeaconSynchronizeP__signalGrantedTask__runTask(void )
{
  BeaconSynchronizeP__RadioToken__granted();
}

# 54 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t BeaconSynchronizeP__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value){
#line 54
  enum ieee154_status __nesc_result;
#line 54

#line 54
  __nesc_result = PibP__MLME_SET__phyCurrentChannel(value);
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 93 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macBeaconOrder_t BeaconSynchronizeP__MLME_GET__macBeaconOrder(void ){
#line 93
  unsigned char __nesc_result;
#line 93

#line 93
  __nesc_result = PibP__MLME_GET__macBeaconOrder();
#line 93

#line 93
  return __nesc_result;
#line 93
}
#line 93
# 123 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static inline void BeaconSynchronizeP__resetBeaconReceived(void )
#line 123
{
#line 123
  BeaconSynchronizeP__m_state &= ~BeaconSynchronizeP__BEACON_RECEIVED;
}

# 61 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_BEACON_NOTIFY.nc"
inline static message_t *BeaconSynchronizeP__MLME_BEACON_NOTIFY__indication(message_t *beaconFrame){
#line 61
  nx_struct message_t *__nesc_result;
#line 61

#line 61
  __nesc_result = TestDeviceC__MLME_BEACON_NOTIFY__indication(beaconFrame);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 46 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/DataRequest.nc"
inline static ieee154_status_t BeaconSynchronizeP__DataRequest__poll(uint8_t CoordAddrMode, uint16_t CoordPANId, uint8_t *CoordAddressLE, uint8_t SrcAddrMode){
#line 46
  enum ieee154_status __nesc_result;
#line 46

#line 46
  __nesc_result = PollP__DataRequest__poll(0U, CoordAddrMode, CoordPANId, CoordAddressLE, SrcAddrMode);
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 1049 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline bool PibP__isLocalExtendedAddress(uint8_t *addrLE)
{
  uint64_t dest;

#line 1052
  PibP__FrameUtility__convertToNative(&dest, addrLE);
  return dest == PibP__m_aExtendedAddressLE;
}

#line 918
static inline uint8_t PibP__BeaconFrame__isLocalAddrPending(message_t *frame)
{
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;
  uint8_t *payload = (uint8_t *)frame->data;
  uint8_t pendAddrSpecOffset = PibP__getPendAddrSpecOffset(payload);
  uint8_t pendAddrSpec = payload[pendAddrSpecOffset];
#line 923
  uint8_t i;
  ieee154_macShortAddress_t shortAddress = PibP__MLME_GET__macShortAddress();

#line 925
  if ((mhr[MHR_INDEX_FC1] & FC1_FRAMETYPE_MASK) != FC1_FRAMETYPE_BEACON) {
    return ADDR_MODE_NOT_PRESENT;
    }
#line 927
  for (i = 0; i < (pendAddrSpec & PENDING_ADDRESS_SHORT_MASK); i++) 
    if (__nesc_ntoh_leuint16((* (nxle_uint16_t *)(payload + pendAddrSpecOffset + 1 + 2 * i)).nxdata) == shortAddress) {
      return ADDR_MODE_SHORT_ADDRESS;
      }
#line 930
  for (i = 0; i < ((pendAddrSpec & PENDING_ADDRESS_EXT_MASK) >> 4); i++) 
    if (PibP__isLocalExtendedAddress(payload + pendAddrSpecOffset + 
    1 + (pendAddrSpec & PENDING_ADDRESS_SHORT_MASK) * 2 + 8 * i)) {
      return ADDR_MODE_EXTENDED_ADDRESS;
      }
#line 934
  return ADDR_MODE_NOT_PRESENT;
}

# 88 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154BeaconFrame.nc"
inline static uint8_t BeaconSynchronizeP__BeaconFrame__isLocalAddrPending(message_t *frame){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  __nesc_result = PibP__BeaconFrame__isLocalAddrPending(frame);
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 111 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t BeaconSynchronizeP__RadioToken__transferTo(uint8_t dstClient){
#line 111
  unsigned char __nesc_result;
#line 111

#line 111
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__transferTo(8, dstClient);
#line 111

#line 111
  return __nesc_result;
#line 111
}
#line 111
# 280 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macBattLifeExtPeriods_t PibP__MLME_GET__macBattLifeExtPeriods(void )
#line 280
{
#line 280
  return PibP__m_pib.macBattLifeExtPeriods;
}

# 87 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macBattLifeExtPeriods_t BeaconSynchronizeP__MLME_GET__macBattLifeExtPeriods(void ){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = PibP__MLME_GET__macBattLifeExtPeriods();
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 330 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macMinSIFSPeriod_t PibP__MLME_GET__macMinSIFSPeriod(void )
#line 330
{
#line 330
  return IEEE154_MIN_SIFS_PERIOD;
}

# 165 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macMinSIFSPeriod_t BeaconSynchronizeP__MLME_GET__macMinSIFSPeriod(void ){
#line 165
  unsigned char __nesc_result;
#line 165

#line 165
  __nesc_result = PibP__MLME_GET__macMinSIFSPeriod();
#line 165

#line 165
  return __nesc_result;
#line 165
}
#line 165
# 328 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_macMinLIFSPeriod_t PibP__MLME_GET__macMinLIFSPeriod(void )
#line 328
{
#line 328
  return IEEE154_MIN_LIFS_PERIOD;
}

# 162 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macMinLIFSPeriod_t BeaconSynchronizeP__MLME_GET__macMinLIFSPeriod(void ){
#line 162
  unsigned char __nesc_result;
#line 162

#line 162
  __nesc_result = PibP__MLME_GET__macMinLIFSPeriod();
#line 162

#line 162
  return __nesc_result;
#line 162
}
#line 162
# 748 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline uint32_t PibP__Frame__getTimestamp(message_t *frame)
{
  ieee154_metadata_t *metadata = (ieee154_metadata_t *)frame->metadata;

#line 751
  return __nesc_ntoh_uint32(metadata->timestamp.nxdata);
}

# 174 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static uint32_t BeaconSynchronizeP__Frame__getTimestamp(message_t *frame){
#line 174
  unsigned long __nesc_result;
#line 174

#line 174
  __nesc_result = PibP__Frame__getTimestamp(frame);
#line 174

#line 174
  return __nesc_result;
#line 174
}
#line 174
# 132 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154BeaconFrame.nc"
inline static uint8_t BeaconSynchronizeP__BeaconFrame__getBeaconPayloadLength(message_t *frame){
#line 132
  unsigned char __nesc_result;
#line 132

#line 132
  __nesc_result = PibP__BeaconFrame__getBeaconPayloadLength(frame);
#line 132

#line 132
  return __nesc_result;
#line 132
}
#line 132
# 81 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macAutoRequest_t BeaconSynchronizeP__MLME_GET__macAutoRequest(void ){
#line 81
  unsigned char __nesc_result;
#line 81

#line 81
  __nesc_result = PibP__MLME_GET__macAutoRequest();
#line 81

#line 81
  return __nesc_result;
#line 81
}
#line 81
# 137 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t BeaconSynchronizeP__RadioToken__release(void ){
#line 137
  unsigned char __nesc_result;
#line 137

#line 137
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(8);
#line 137

#line 137
  return __nesc_result;
#line 137
}
#line 137
# 754 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline bool PibP__Frame__isTimestampValid(message_t *frame)
{
  ieee154_metadata_t *metadata = (ieee154_metadata_t *)frame->metadata;

#line 757
  if (__nesc_ntoh_uint32(metadata->timestamp.nxdata) == 0xffffffff) {
    return FALSE;
    }
  else {
#line 760
    return TRUE;
    }
}

# 181 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/public/IEEE154Frame.nc"
inline static bool BeaconSynchronizeP__Frame__isTimestampValid(message_t *frame){
#line 181
  unsigned char __nesc_result;
#line 181

#line 181
  __nesc_result = PibP__Frame__isTimestampValid(frame);
#line 181

#line 181
  return __nesc_result;
#line 181
}
#line 181
# 356 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static inline void BeaconSynchronizeP__processBeaconTask__runTask(void )
{

  bool wasInternalRequest = BeaconSynchronizeP__isInternalRequest();

  if (BeaconSynchronizeP__wasBeaconReceived() && !BeaconSynchronizeP__Frame__isTimestampValid(BeaconSynchronizeP__m_beaconPtr)) {
      ;
      BeaconSynchronizeP__resetBeaconReceived();
    }

  if (BeaconSynchronizeP__getMode() == BeaconSynchronizeP__MODE_TRACK_SINGLE) {
    BeaconSynchronizeP__setMode(BeaconSynchronizeP__MODE_INACTIVE);
    }
#line 368
  BeaconSynchronizeP__resetInternalRequest();




  BeaconSynchronizeP__RadioToken__request();

  if (!BeaconSynchronizeP__wasBeaconReceived()) {

      BeaconSynchronizeP__resetBeaconReceived();
      BeaconSynchronizeP__m_numBeaconsMissed += 1;
      BeaconSynchronizeP__m_dt += BeaconSynchronizeP__getBeaconInterval(BeaconSynchronizeP__m_beaconOrder);
      ;

      if (wasInternalRequest) {


          BeaconSynchronizeP__TrackSingleBeacon__startDone(FAIL);
        }
      if (BeaconSynchronizeP__isExternalRequest() && BeaconSynchronizeP__m_numBeaconsMissed >= IEEE154_aMaxLostBeacons) {
          BeaconSynchronizeP__resetExternalRequest();
          BeaconSynchronizeP__setMode(BeaconSynchronizeP__MODE_INACTIVE);
          ;
          BeaconSynchronizeP__MLME_SYNC_LOSS__indication(
          IEEE154_BEACON_LOSS, 
          BeaconSynchronizeP__MLME_GET__macPANId(), 
          BeaconSynchronizeP__MLME_GET__phyCurrentChannel(), 
          BeaconSynchronizeP__MLME_GET__phyCurrentPage(), 
          (void *)0);
        }

      BeaconSynchronizeP__RadioToken__release();
    }
  else {

      uint8_t *payload = (uint8_t *)BeaconSynchronizeP__m_beaconPtr->data;
      ieee154_macAutoRequest_t autoRequest = BeaconSynchronizeP__MLME_GET__macAutoRequest();
      uint8_t pendAddrSpecOffset = 3 + ((payload[2] & 7) > 0 ? 1 + (payload[2] & 7) * 3 : 0);
      uint8_t pendAddrSpec = payload[pendAddrSpecOffset];
      uint8_t *beaconPayload = payload + pendAddrSpecOffset + 1;
      uint8_t beaconPayloadSize = BeaconSynchronizeP__BeaconFrame__getBeaconPayloadLength(BeaconSynchronizeP__m_beaconPtr);
      uint8_t pendingAddrMode = ADDR_MODE_NOT_PRESENT;
      uint8_t *mhr = ((ieee154_header_t *)BeaconSynchronizeP__m_beaconPtr->header)->mhr;
      uint8_t frameLen = ((uint8_t *)BeaconSynchronizeP__m_beaconPtr)[0] & FRAMECTL_LENGTH_MASK;
      uint8_t gtsFieldLength;
      uint32_t timestamp = BeaconSynchronizeP__Frame__getTimestamp(BeaconSynchronizeP__m_beaconPtr);

      ;


      BeaconSynchronizeP__m_numBeaconsMissed = 0;
      BeaconSynchronizeP__m_numGtsSlots = payload[BEACON_INDEX_GTS_SPEC] & GTS_DESCRIPTOR_COUNT_MASK;
      gtsFieldLength = 1 + (BeaconSynchronizeP__m_numGtsSlots > 0 ? 1 + BeaconSynchronizeP__m_numGtsSlots * 3 : 0);
      BeaconSynchronizeP__m_lastBeaconRxTime = timestamp;
      BeaconSynchronizeP__m_numCapSlots = ((payload[BEACON_INDEX_SF_SPEC2] & SF_SPEC2_FINAL_CAPSLOT_MASK) >> SF_SPEC2_FINAL_CAPSLOT_OFFSET) + 1;
      BeaconSynchronizeP__m_sfSlotDuration = ((uint32_t )1 << ((payload[BEACON_INDEX_SF_SPEC1] & SF_SPEC1_SO_MASK) >> SF_SPEC1_SO_OFFSET)) * IEEE154_aBaseSlotDuration;
      memcpy(BeaconSynchronizeP__m_gtsField, &payload[BEACON_INDEX_GTS_SPEC], gtsFieldLength);


      if (payload[BEACON_INDEX_SF_SPEC2] & SF_SPEC2_BATT_LIFE_EXT) {

          BeaconSynchronizeP__m_battLifeExtDuration = IEEE154_SHR_DURATION + frameLen * IEEE154_SYMBOLS_PER_OCTET;
          if (frameLen > IEEE154_aMaxSIFSFrameSize) {
            BeaconSynchronizeP__m_battLifeExtDuration += BeaconSynchronizeP__MLME_GET__macMinLIFSPeriod();
            }
          else {
#line 433
            BeaconSynchronizeP__m_battLifeExtDuration += BeaconSynchronizeP__MLME_GET__macMinSIFSPeriod();
            }
#line 434
          BeaconSynchronizeP__m_battLifeExtDuration = BeaconSynchronizeP__m_battLifeExtDuration + BeaconSynchronizeP__MLME_GET__macBattLifeExtPeriods() * 20;
        }
      else {
#line 436
        BeaconSynchronizeP__m_battLifeExtDuration = 0;
        }
      BeaconSynchronizeP__m_framePendingBit = mhr[MHR_INDEX_FC1] & FC1_FRAME_PENDING ? TRUE : FALSE;
      BeaconSynchronizeP__m_beaconOrder = (payload[BEACON_INDEX_SF_SPEC1] & SF_SPEC1_BO_MASK) >> SF_SPEC1_BO_OFFSET;
      BeaconSynchronizeP__m_dt = BeaconSynchronizeP__getBeaconInterval(BeaconSynchronizeP__m_beaconOrder);

      ;
      BeaconSynchronizeP__RadioToken__transferTo(RADIO_CLIENT_DEVICECAP);

      if (pendAddrSpec & PENDING_ADDRESS_SHORT_MASK) {
        beaconPayload += (pendAddrSpec & PENDING_ADDRESS_SHORT_MASK) * 2;
        }
#line 447
      if (pendAddrSpec & PENDING_ADDRESS_EXT_MASK) {
        beaconPayload += ((pendAddrSpec & PENDING_ADDRESS_EXT_MASK) >> 4) * 8;
        }


      if (autoRequest) {
        pendingAddrMode = BeaconSynchronizeP__BeaconFrame__isLocalAddrPending(BeaconSynchronizeP__m_beaconPtr);
        }
#line 454
      if (pendingAddrMode != ADDR_MODE_NOT_PRESENT) {

          uint8_t CoordAddrMode;
          uint16_t CoordPANId;
          uint8_t *CoordAddress;
          uint8_t SrcAddrMode = pendingAddrMode;

#line 460
          if ((mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) == FC2_SRC_MODE_SHORT) {
            CoordAddrMode = ADDR_MODE_SHORT_ADDRESS;
            }
          else {
#line 463
            CoordAddrMode = ADDR_MODE_EXTENDED_ADDRESS;
            }
#line 464
          CoordAddress = &mhr[MHR_INDEX_ADDRESS + 2];
          CoordPANId = __nesc_ntoh_leuint16((* (nxle_uint16_t *)&mhr[MHR_INDEX_ADDRESS]).nxdata);
          BeaconSynchronizeP__DataRequest__poll(CoordAddrMode, CoordPANId, CoordAddress, SrcAddrMode);
        }

      if (!autoRequest || beaconPayloadSize) {
        BeaconSynchronizeP__m_beaconPtr = BeaconSynchronizeP__MLME_BEACON_NOTIFY__indication(BeaconSynchronizeP__m_beaconPtr);
        }
#line 471
      BeaconSynchronizeP__resetBeaconReceived();
    }
  ;
}

# 191 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline void ScanP__continueScanRequestTask__runTask(void )
{
  ScanP__continueScanRequest();
}

# 108 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macDSN_t ScanP__MLME_GET__macDSN(void ){
#line 108
  unsigned char __nesc_result;
#line 108

#line 108
  __nesc_result = PibP__MLME_GET__macDSN();
#line 108

#line 108
  return __nesc_result;
#line 108
}
#line 108
# 118 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_SET.nc"
inline static ieee154_status_t ScanP__MLME_SET__macDSN(ieee154_macDSN_t value){
#line 118
  enum ieee154_status __nesc_result;
#line 118

#line 118
  __nesc_result = PibP__MLME_SET__macDSN(value);
#line 118

#line 118
  return __nesc_result;
#line 118
}
#line 118
# 150 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_GET.nc"
inline static ieee154_macResponseWaitTime_t ScanP__MLME_GET__macResponseWaitTime(void ){
#line 150
  unsigned char __nesc_result;
#line 150

#line 150
  __nesc_result = PibP__MLME_GET__macResponseWaitTime();
#line 150

#line 150
  return __nesc_result;
#line 150
}
#line 150
# 55 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameUtility.nc"
inline static void ScanP__FrameUtility__copyLocalExtendedAddressLE(uint8_t *destLE){
#line 55
  PibP__FrameUtility__copyLocalExtendedAddressLE(destLE);
#line 55
}
#line 55
# 440 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline void ScanP__nextIterationTask__runTask(void )
{
  ScanP__nextIteration();
}

# 73 "/usr/src/tinyos/tos/lib/timer/Timer.nc"
inline static void ScanP__ScanTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(0U, dt);
#line 73
}
#line 73
# 419 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline void ScanP__startTimerTask__runTask(void )
{
  ScanP__ScanTimer__startOneShot(ScanP__m_scanDuration);
}

# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t IndirectTxP__tryCoordCapTxTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(IndirectTxP__tryCoordCapTxTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
inline static ieee154_status_t IndirectTxP__CoordCapTx__transmit(ieee154_txframe_t *txFrame){
#line 43
  enum ieee154_status __nesc_result;
#line 43

#line 43
  __nesc_result = /*TKN154BeaconEnabledP.CoordCapQueue*/NoDispatchQueueP__0__FrameTx__transmit(7U, txFrame);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 296 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static inline void IndirectTxP__tryCoordCapTx(void )
{


  uint8_t i;

#line 301
  if (IndirectTxP__m_pendingTxFrame == (void *)0 && IndirectTxP__m_numTableEntries) {
      for (i = 0; i < IndirectTxP__NUM_MAX_PENDING; i++) 
        if (IndirectTxP__m_txFrameTable[i] && IndirectTxP__m_txFrameTable[i]->client & IndirectTxP__SEND_THIS_FRAME) {
            IndirectTxP__m_pendingTxFrame = IndirectTxP__m_txFrameTable[i];
            IndirectTxP__m_client = IndirectTxP__m_txFrameTable[i]->client;
            if (IndirectTxP__CoordCapTx__transmit(IndirectTxP__m_txFrameTable[i]) == IEEE154_SUCCESS) {
                ;
              }
            else 
#line 308
              {
                IndirectTxP__m_pendingTxFrame = (void *)0;
                IndirectTxP__tryCoordCapTxTask__postTask();
              }
            return;
          }
    }
}

static inline void IndirectTxP__tryCoordCapTxTask__runTask(void )
{
  IndirectTxP__tryCoordCapTx();
}

# 60 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static bool ScanP__RadioOff__isOff(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = RadioControlImplP__MacRadioOff__isOff(0);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 180 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static inline void ScanP__RadioToken__granted(void )
{
  if (ScanP__RadioOff__isOff()) {
    ScanP__continueScanRequest();
    }
  else 
#line 184
    {
      error_t e = ScanP__RadioOff__off();

#line 186
      while (!(e == SUCCESS)) {
#line 186
          break;
        }
#line 186
      ;
    }
}

# 98 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoBeaconTransmitP.nc"
static inline void NoBeaconTransmitP__RadioToken__granted(void )
#line 98
{
}

# 146 "/usr/src/tinyos/tos/lib/mac/tkn154/CoordBroadcastP.nc"
static inline void CoordBroadcastP__RadioToken__granted(void )
#line 146
{
#line 146
  while (!0) {
#line 146
      break;
    }
#line 146
  ;
}

# 741 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioToken__granted(void )
{
  while (!0) {
#line 743
      break;
    }
#line 743
  ;
}

# 113 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioToken__granted(void )
#line 113
{
}

# 166 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDeviceCfpP.nc"
static inline void NoDeviceCfpP__RadioToken__granted(void )
{
  while (!0) {
#line 168
      break;
    }
#line 168
  ;
}

# 170 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoCoordCfpP.nc"
static inline void NoCoordCfpP__RadioToken__granted(void )
{
  while (!0) {
#line 172
      break;
    }
#line 172
  ;
}

# 77 "/usr/src/tinyos/tos/lib/mac/tkn154/InactivePeriodP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioToken__granted(void )
#line 77
{
#line 77
  while (!0) {
#line 77
      break;
    }
#line 77
  ;
}

#line 77
static inline void /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioToken__granted(void )
#line 77
{
#line 77
  while (!0) {
#line 77
      break;
    }
#line 77
  ;
}

# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static error_t PromiscuousModeP__RadioOff__off(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = RadioControlImplP__MacRadioOff__off(2);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
#line 60
inline static bool PromiscuousModeP__RadioOff__isOff(void ){
#line 60
  unsigned char __nesc_result;
#line 60

#line 60
  __nesc_result = RadioControlImplP__MacRadioOff__isOff(2);
#line 60

#line 60
  return __nesc_result;
#line 60
}
#line 60
# 87 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static inline void PromiscuousModeP__RadioToken__granted(void )
{
  PromiscuousModeP__RadioPromiscuousMode__set(TRUE);
  if (PromiscuousModeP__RadioOff__isOff()) {
    PromiscuousModeP__RadioOff__offDone();
    }
  else {
#line 93
    PromiscuousModeP__RadioOff__off();
    }
}

# 47 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/RadioOff.nc"
inline static error_t PibP__RadioOff__off(void ){
#line 47
  unsigned char __nesc_result;
#line 47

#line 47
  __nesc_result = RadioControlImplP__MacRadioOff__off(1);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 187 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__RadioToken__granted(void )
{
  if (PibP__RadioOff__off() != SUCCESS) {
    PibP__RadioOff__offDone();
    }
}

# 179 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__default__granted(uint8_t id)
#line 179
{
}

# 98 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__granted(uint8_t arg_0x2ab71d626ad8){
#line 98
  switch (arg_0x2ab71d626ad8) {
#line 98
    case 0:
#line 98
      ScanP__RadioToken__granted();
#line 98
      break;
#line 98
    case 1:
#line 98
      PibP__RadioToken__granted();
#line 98
      break;
#line 98
    case 2:
#line 98
      PromiscuousModeP__RadioToken__granted();
#line 98
      break;
#line 98
    case 3:
#line 98
      NoBeaconTransmitP__RadioToken__granted();
#line 98
      break;
#line 98
    case 4:
#line 98
      CoordBroadcastP__RadioToken__granted();
#line 98
      break;
#line 98
    case 5:
#line 98
      /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__RadioToken__granted();
#line 98
      break;
#line 98
    case 6:
#line 98
      NoCoordCfpP__RadioToken__granted();
#line 98
      break;
#line 98
    case 7:
#line 98
      /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__RadioToken__granted();
#line 98
      break;
#line 98
    case 8:
#line 98
      BeaconSynchronizeP__RadioToken__granted();
#line 98
      break;
#line 98
    case 9:
#line 98
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioToken__granted();
#line 98
      break;
#line 98
    case 10:
#line 98
      NoDeviceCfpP__RadioToken__granted();
#line 98
      break;
#line 98
    case 11:
#line 98
      /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__RadioToken__granted();
#line 98
      break;
#line 98
    default:
#line 98
      /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__default__granted(arg_0x2ab71d626ad8);
#line 98
      break;
#line 98
    }
#line 98
}
#line 98
# 185 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__configure(uint8_t id)
#line 185
{
}

# 59 "/usr/src/tinyos/tos/interfaces/ResourceConfigure.nc"
inline static void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__configure(uint8_t arg_0x2ab71d622538){
#line 59
    /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__default__configure(arg_0x2ab71d622538);
#line 59
}
#line 59
# 169 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static inline void /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__runTask(void )
#line 169
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 170
    {
      /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__reqResId;
      /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_BUSY;
    }
#line 173
    __nesc_atomic_end(__nesc_atomic); }
  /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__configure(/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId);
  /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__granted(/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId);
}

# 136 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline error_t CC2420TKN154P__SplitControl__start(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 138
    {
      if (CC2420TKN154P__m_state == CC2420TKN154P__S_RADIO_OFF) 
        {
          unsigned char __nesc_temp = 
#line 140
          EALREADY;

          {
#line 140
            __nesc_atomic_end(__nesc_atomic); 
#line 140
            return __nesc_temp;
          }
        }
      else {
#line 141
        if (CC2420TKN154P__m_state != CC2420TKN154P__S_STOPPED) 
          {
            unsigned char __nesc_temp = 
#line 142
            FAIL;

            {
#line 142
              __nesc_atomic_end(__nesc_atomic); 
#line 142
              return __nesc_temp;
            }
          }
        }
#line 143
      CC2420TKN154P__m_state = CC2420TKN154P__S_STARTING;
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  CC2420TKN154P__SpiResource__request();
  return SUCCESS;
}

# 104 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
inline static error_t PibP__RadioControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = CC2420TKN154P__SplitControl__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t PibP__resetSpinTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(PibP__resetSpinTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 222 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__resetSpinTask__runTask(void )
{
  PibP__m_resetSpin -= 1;
  if (PibP__m_resetSpin != 0) {
      PibP__resetSpinTask__postTask();
      return;
    }
  while (!(PibP__RadioControl__start() == SUCCESS)) {
#line 229
      break;
    }
#line 229
  ;
}

# 180 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline error_t CC2420TKN154P__SplitControl__stop(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 182
    {
      if (CC2420TKN154P__m_state == CC2420TKN154P__S_STOPPED) 
        {
          unsigned char __nesc_temp = 
#line 184
          EALREADY;

          {
#line 184
            __nesc_atomic_end(__nesc_atomic); 
#line 184
            return __nesc_temp;
          }
        }
      else {
#line 185
        if (CC2420TKN154P__m_state != CC2420TKN154P__S_RADIO_OFF) 
          {
            unsigned char __nesc_temp = 
#line 186
            FAIL;

            {
#line 186
              __nesc_atomic_end(__nesc_atomic); 
#line 186
              return __nesc_temp;
            }
          }
        }
#line 187
      CC2420TKN154P__m_state = CC2420TKN154P__S_STOPPING;
    }
#line 188
    __nesc_atomic_end(__nesc_atomic); }
  CC2420TKN154P__SpiResource__request();
  return SUCCESS;
}

# 130 "/usr/src/tinyos/tos/interfaces/SplitControl.nc"
inline static error_t PibP__RadioControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = CC2420TKN154P__SplitControl__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 198 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline void PibP__radioControlStopTask__runTask(void )
{
  error_t result = PibP__RadioControl__stop();

#line 201
  if (result == EALREADY) {
    PibP__RadioControl__stopDone(SUCCESS);
    }
  else {
#line 204
    while (!(result == SUCCESS)) {
#line 204
        break;
      }
    }
#line 204
  ;
}

# 46 "/usr/src/tinyos/tos/interfaces/Random.nc"
inline static uint32_t PibP__Random__rand32(void ){
#line 46
  unsigned long __nesc_result;
#line 46

#line 46
  __nesc_result = RandomMlcgC__Random__rand32();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 96 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline error_t PibP__LocalInit__init(void )
{

  PibP__m_aExtendedAddressLE = ((uint64_t )PibP__Random__rand32() << 32) | PibP__Random__rand32();

  PibP__resetAttributesToDefault();
  return SUCCESS;
}

# 61 "/usr/src/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static inline error_t /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__Init__init(void )
#line 61
{
  memset(/*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ, 0, sizeof /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ);
  return SUCCESS;
}

# 65 "/usr/src/tinyos/tos/system/PoolP.nc"
static inline error_t /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 4; i++) {
      /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__queue[i] = &/*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool[i];
    }
  /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__free = 4;
  /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__index = 0;
  return SUCCESS;
}

#line 65
static inline error_t /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Init__init(void )
#line 65
{
  int i;

#line 67
  for (i = 0; i < 3; i++) {
      /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__queue[i] = &/*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool[i];
    }
  /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__free = 3;
  /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__index = 0;
  return SUCCESS;
}

# 59 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )49U &= ~(1 << 4);
}

# 44 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__SFD__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__makeInput();
#line 44
}
#line 44


inline static void CC2420TransmitP__CSN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 59 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput(void )
#line 59
{
#line 59
  * (volatile uint8_t * )49U &= ~(1 << 6);
}

# 44 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420TransmitP__CCA__makeInput(void ){
#line 44
  /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__makeInput();
#line 44
}
#line 44
# 122 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline error_t CC2420TransmitP__Init__init(void )
#line 122
{
  CC2420TransmitP__CCA__makeInput();
  CC2420TransmitP__CSN__makeOutput();
  CC2420TransmitP__SFD__makeInput();
  return SUCCESS;
}

# 61 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 5;
}

# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__VREN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit5*/HplAtm128GeneralIOPinP__5__IO__makeOutput();
#line 46
}
#line 46
# 61 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline void /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput(void )
#line 61
{
#line 61
  * (volatile uint8_t * )58U |= 1 << 6;
}

# 46 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static void CC2420ControlP__RSTN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortA.Bit6*/HplAtm128GeneralIOPinP__6__IO__makeOutput();
#line 46
}
#line 46
inline static void CC2420ControlP__CSN__makeOutput(void ){
#line 46
  /*HplAtm128GeneralIOC.PortB.Bit0*/HplAtm128GeneralIOPinP__8__IO__makeOutput();
#line 46
}
#line 46
# 113 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline error_t CC2420ControlP__Init__init(void )
#line 113
{
  CC2420ControlP__CSN__makeOutput();
  CC2420ControlP__RSTN__makeOutput();
  CC2420ControlP__VREN__makeOutput();





  CC2420ControlP__addressRecognition = TRUE;






  CC2420ControlP__autoAckEnabled = TRUE;


  CC2420ControlP__hwAutoAckDefault = TRUE;
  CC2420ControlP__acceptReservedFrames = FALSE;
  CC2420ControlP__m_needsSync = FALSE;
  return SUCCESS;
}

# 81 "/usr/src/tinyos/tos/system/StateImplP.nc"
static inline error_t StateImplP__Init__init(void )
#line 81
{
  int i;

#line 83
  for (i = 0; i < 1U; i++) {
      StateImplP__state[i] = StateImplP__S_IDLE;
    }
  return SUCCESS;
}

# 55 "/usr/src/tinyos/tos/system/FcfsResourceQueueC.nc"
static inline error_t /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init(void )
#line 55
{
  memset(/*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__NO_ENTRY, sizeof /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__resQ);
  return SUCCESS;
}

# 126 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline error_t CC2420ReceiveP__Init__init(void )
#line 126
{
  CC2420ReceiveP__m_rxFramePtr = &CC2420ReceiveP__m_frame;
  /* atomic removed: atomic calls only */
#line 128
  CC2420ReceiveP__m_state = CC2420ReceiveP__S_STOPPED;
  return SUCCESS;
}

# 82 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static inline error_t /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Init__init(void )
#line 82
{
  memset(&/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m, 0, sizeof /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m);
  return SUCCESS;
}

# 55 "/usr/src/tinyos/tos/system/RandomMlcgC.nc"
static inline error_t RandomMlcgC__Init__init(void )
#line 55
{
  /* atomic removed: atomic calls only */
#line 56
  RandomMlcgC__seed = (uint32_t )(TOS_NODE_ID + 1);

  return SUCCESS;
}

# 62 "/usr/src/tinyos/tos/interfaces/Init.nc"
inline static error_t RealMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = RandomMlcgC__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420ReceiveP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*Atm128SpiC.Arbiter.Queue*/FcfsResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, StateImplP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420ControlP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, CC2420TransmitP__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__Init__init());
#line 62
  __nesc_result = ecombine(__nesc_result, PibP__LocalInit__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 304 "/usr/lib/x86_64-linux-gnu/ncc/nesc_nx.h"
static inline  void __nesc_bfle_encode8(uint8_t *msg, unsigned offset, uint8_t length, uint8_t x)
#line 304
{
#line 304
  unsigned byte_offset = offset >> 3;
#line 304
  unsigned bit_offset = offset & 7;
#line 304
  unsigned count = 0;

#line 304
  x = x & (((uint8_t )1 << length) - 1);
#line 304
  if (length + bit_offset <= 8) {
#line 304
      unsigned mask = ((1 << length) - 1) << bit_offset;

#line 304
      msg[byte_offset] = (msg[byte_offset] & ~mask) | (x << bit_offset);
#line 304
      return;
    }
#line 304
  if (bit_offset > 0) {
#line 304
      unsigned mask = (1 << bit_offset) - 1;

#line 304
      msg[byte_offset] = (msg[byte_offset] & mask) | (x << bit_offset);
#line 304
      count += 8 - bit_offset;
#line 304
      byte_offset++;
    }
#line 304
  while (count + 8 <= length) {
#line 304
      msg[byte_offset++] = x >> count;
#line 304
      count += 8;
    }
#line 304
  if (count < length) {
#line 304
      unsigned remaining = length - count;
#line 304
      unsigned mask = ~((1 << remaining) - 1);

#line 304
      msg[byte_offset] = (msg[byte_offset] & mask) | (x >> count);
    }
}

#line 304
static __inline  uint8_t __nesc_htonbf_leuint8(void *target, unsigned offset, uint8_t length, uint8_t value)
#line 304
{
#line 304
  __nesc_bfle_encode8(target, offset, length, value);
#line 304
  return value;
}

# 84 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/TransferableResource.nc"
inline static error_t PibP__RadioToken__request(void ){
#line 84
  unsigned char __nesc_result;
#line 84

#line 84
  __nesc_result = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__request(1);
#line 84

#line 84
  return __nesc_result;
#line 84
}
#line 84
# 55 "/usr/src/tinyos/tos/interfaces/Get.nc"
inline static PibP__PromiscuousModeGet__val_t PibP__PromiscuousModeGet__get(void ){
#line 55
  unsigned char __nesc_result;
#line 55

#line 55
  __nesc_result = PromiscuousModeP__PromiscuousModeGet__get();
#line 55

#line 55
  return __nesc_result;
#line 55
}
#line 55
# 164 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static inline ieee154_status_t PibP__MLME_RESET__request(bool SetDefaultPIB)
{








  ieee154_status_t status = IEEE154_SUCCESS;

#line 175
  if (PibP__PromiscuousModeGet__get()) {
    status = IEEE154_TRANSACTION_OVERFLOW;
    }
  else 
#line 177
    {
      PibP__m_setDefaultPIB = SetDefaultPIB;
      PibP__m_resetSpin = 5;
      PibP__RadioToken__request();
    }
  ;

  return status;
}

# 69 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/MLME/MLME_RESET.nc"
inline static ieee154_status_t TestDeviceC__MLME_RESET__request(bool SetDefaultPIB){
#line 69
  enum ieee154_status __nesc_result;
#line 69

#line 69
  __nesc_result = PibP__MLME_RESET__request(SetDefaultPIB);
#line 69

#line 69
  return __nesc_result;
#line 69
}
#line 69
# 62 "TestDeviceC.nc"
static inline void TestDeviceC__Boot__booted(void )
#line 62
{
  __nesc_htonbf_leuint8((unsigned char *)&TestDeviceC__m_capabilityInformation, 0, 1, 0);
  __nesc_htonbf_leuint8((unsigned char *)&TestDeviceC__m_capabilityInformation, 1, 1, 0);
  __nesc_htonbf_leuint8((unsigned char *)&TestDeviceC__m_capabilityInformation, 2, 1, 0);
  __nesc_htonbf_leuint8((unsigned char *)&TestDeviceC__m_capabilityInformation, 3, 1, 0);
  __nesc_htonbf_leuint8((unsigned char *)&TestDeviceC__m_capabilityInformation, 4, 2, 0);
  __nesc_htonbf_leuint8((unsigned char *)&TestDeviceC__m_capabilityInformation, 6, 1, 0);
  __nesc_htonbf_leuint8((unsigned char *)&TestDeviceC__m_capabilityInformation, 7, 1, 1);
  TestDeviceC__MLME_RESET__request(TRUE);
}

# 60 "/usr/src/tinyos/tos/interfaces/Boot.nc"
inline static void RealMainP__Boot__booted(void ){
#line 60
  TestDeviceC__Boot__booted();
#line 60
}
#line 60
# 164 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline mcu_power_t HplAtm128Timer0AsyncP__McuPowerOverride__lowestState(void )
#line 164
{
  uint8_t diff;


  if (* (volatile uint8_t *)(0x37 + 0x20) & ((1 << 1) | (1 << 0))) {




      while (* (volatile uint8_t *)(0x30 + 0x20) & (((1 << 2) | (1 << 1)) | (1 << 0))) 
        ;
      diff = * (volatile uint8_t *)(0x31 + 0x20) - * (volatile uint8_t *)(0x32 + 0x20);
      if (diff < EXT_STANDBY_T0_THRESHOLD || 
      * (volatile uint8_t *)(0x32 + 0x20) > 256 - EXT_STANDBY_T0_THRESHOLD) {
        return ATM128_POWER_EXT_STANDBY;
        }
#line 179
      return ATM128_POWER_SAVE;
    }
  else {
      return ATM128_POWER_DOWN;
    }
}

# 62 "/usr/src/tinyos/tos/interfaces/McuPowerOverride.nc"
inline static mcu_power_t McuSleepC__McuPowerOverride__lowestState(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = HplAtm128Timer0AsyncP__McuPowerOverride__lowestState();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 74 "/usr/src/tinyos/tos/chips/atm128/McuSleepC.nc"
static inline mcu_power_t McuSleepC__getPowerState(void )
#line 74
{





  if (* (volatile uint8_t *)(0x37 + 0x20) & ~((((1 << 1) | (1 << 0)) | (1 << 2)) | (1 << 6)) || 
  * (volatile uint8_t *)0x7D & ~(1 << 2)) {
      return ATM128_POWER_IDLE;
    }
  else {
    if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x0D + 0x20) & (1 << 6)) {
        return ATM128_POWER_IDLE;
      }
    else {
      if ((* (volatile uint8_t *)(0x0A + 0x20) | * (volatile uint8_t *)0x9A) & ((1 << 3) | (1 << 4))) {
          return ATM128_POWER_IDLE;
        }
      else {
        if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)0x74 & (1 << 2)) {
            return ATM128_POWER_IDLE;
          }
        else {
          if (* (volatile uint8_t *)(uint16_t )& * (volatile uint8_t *)(0x06 + 0x20) & (1 << 7)) {
              return ATM128_POWER_ADC_NR;
            }
          else {
              return ATM128_POWER_DOWN;
            }
          }
        }
      }
    }
}

# 140 "/usr/src/tinyos/tos/chips/atm128/atm128hardware.h"
static inline  mcu_power_t mcombine(mcu_power_t m1, mcu_power_t m2)
#line 140
{
  return m1 < m2 ? m1 : m2;
}

# 105 "/usr/src/tinyos/tos/chips/atm128/McuSleepC.nc"
static inline void McuSleepC__McuSleep__sleep(void )
#line 105
{
  uint8_t powerState;

  powerState = mcombine(McuSleepC__getPowerState(), McuSleepC__McuPowerOverride__lowestState());
  * (volatile uint8_t *)(0x35 + 0x20) = ((
  * (volatile uint8_t *)(0x35 + 0x20) & 0xe3) | (1 << 5)) | __extension__ ({
#line 110
    uint16_t __addr16 = (uint16_t )(uint16_t )&McuSleepC__atm128PowerBits[powerState];
#line 110
    uint8_t __result;

#line 110
     __asm ("lpm %0, Z""\n\t" : "=r"(__result) : "z"(__addr16));__result;
  }
  );
#line 112
   __asm volatile ("sei" :  :  : "memory");

   __asm volatile ("sleep" :  :  : "memory");
   __asm volatile ("cli" :  :  : "memory");

  * (volatile uint8_t *)(0x35 + 0x20) &= ~(1 << 5);
}

# 76 "/usr/src/tinyos/tos/interfaces/McuSleep.nc"
inline static void SchedulerBasicP__McuSleep__sleep(void ){
#line 76
  McuSleepC__McuSleep__sleep();
#line 76
}
#line 76
# 78 "/usr/src/tinyos/tos/system/SchedulerBasicP.nc"
static __inline uint8_t SchedulerBasicP__popTask(void )
{
  if (SchedulerBasicP__m_head != SchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SchedulerBasicP__m_head;

#line 83
      SchedulerBasicP__m_head = SchedulerBasicP__m_next[SchedulerBasicP__m_head];
      if (SchedulerBasicP__m_head == SchedulerBasicP__NO_TASK) 
        {
          SchedulerBasicP__m_tail = SchedulerBasicP__NO_TASK;
        }
      SchedulerBasicP__m_next[id] = SchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SchedulerBasicP__NO_TASK;
    }
}

#line 149
static inline void SchedulerBasicP__Scheduler__taskLoop(void )
{
  for (; ; ) 
    {
      uint8_t nextTask;

      { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
        {
          while ((nextTask = SchedulerBasicP__popTask()) == SchedulerBasicP__NO_TASK) 
            {
              SchedulerBasicP__McuSleep__sleep();
            }
        }
#line 161
        __nesc_atomic_end(__nesc_atomic); }
      SchedulerBasicP__TaskBasic__runTask(nextTask);
    }
}

# 72 "/usr/src/tinyos/tos/interfaces/Scheduler.nc"
inline static void RealMainP__Scheduler__taskLoop(void ){
#line 72
  SchedulerBasicP__Scheduler__taskLoop();
#line 72
}
#line 72
# 149 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static __inline void HplAtm128Timer0AsyncP__stabiliseTimer0(void )
#line 149
{
  * (volatile uint8_t *)(0x33 + 0x20) = * (volatile uint8_t *)(0x33 + 0x20);
  while (* (volatile uint8_t *)(0x30 + 0x20) & (1 << 0)) 
    ;
}

#line 186
static inline void HplAtm128Timer0AsyncP__Compare__default__fired(void )
#line 186
{
}

# 58 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP__Compare__fired(void ){
#line 58
  HplAtm128Timer0AsyncP__Compare__default__fired();
#line 58
}
#line 58
# 192 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Timer__default__overflow(void )
#line 192
{
}

# 70 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP__Timer__overflow(void ){
#line 70
  HplAtm128Timer0AsyncP__Timer__default__overflow();
#line 70
}
#line 70
# 375 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__BackoffAlarm__fired(void )
#line 375
{
  /* atomic removed: atomic calls only */
#line 376
  {
    switch (CC2420TransmitP__m_state) {

        case CC2420TransmitP__S_SFD: 
          case CC2420TransmitP__S_EFD: 


            {
              CC2420TransmitP__CSN__set();
              CC2420TransmitP__CSN__clr();
              CC2420TransmitP__SFLUSHTX__strobe();
              CC2420TransmitP__CSN__set();
            }
        CC2420TransmitP__signalDone(FALSE, ERETRY);
        break;

        case CC2420TransmitP__S_ACK_WAIT: 







          CC2420TransmitP__signalDone(FALSE, ENOACK);
        break;


        default: 
          break;
      }
  }
}

# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__fired(void ){
#line 78
  CC2420TransmitP__BackoffAlarm__fired();
#line 78
}
#line 78
# 54 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__fired(void )
#line 54
{
#line 54
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__fired();
}

# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__fired(void ){
#line 78
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__fired();
#line 78
}
#line 78
# 162 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt == 0) 
        {
          /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__fired();
        }
      else 
        {
          /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm();
        }
    }
#line 174
    __nesc_atomic_end(__nesc_atomic); }
}

# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__fired(void ){
#line 78
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 88 "/usr/src/tinyos/tos/chips/atm128/atm128hardware.h"
static __inline  void __nesc_enable_interrupt()
#line 88
{
   __asm volatile ("sei" :  :  : "memory");}

# 119 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired(void )
#line 119
{
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__stop();
  ;
  __nesc_enable_interrupt();
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__Alarm__fired();
}

# 58 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareA__fired(void ){
#line 58
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Compare__fired();
#line 58
}
#line 58
# 57 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static inline void Alarm32khzTo62500hzTransformC__AlarmFrom__fired(uint8_t num)
#line 57
{
#line 57
  Alarm32khzTo62500hzTransformC__Alarm__fired(num);
}

# 200 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(uint8_t id)
#line 200
{
}

# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__fired(uint8_t arg_0x2ab71e8b71a0){
#line 78
  switch (arg_0x2ab71e8b71a0) {
#line 78
    case /*Ieee802154BeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*Ieee802154BeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID);
#line 78
      break;
#line 78
    case /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID);
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm1*/Alarm62500hz32VirtualizedC__2__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*Ieee802154BeaconEnabledC.MACAlarm1*/Alarm62500hz32VirtualizedC__2__CLIENT_ID);
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm2*/Alarm62500hz32VirtualizedC__3__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*Ieee802154BeaconEnabledC.MACAlarm2*/Alarm62500hz32VirtualizedC__3__CLIENT_ID);
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm3*/Alarm62500hz32VirtualizedC__4__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*Ieee802154BeaconEnabledC.MACAlarm3*/Alarm62500hz32VirtualizedC__4__CLIENT_ID);
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm4*/Alarm62500hz32VirtualizedC__5__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*Ieee802154BeaconEnabledC.MACAlarm4*/Alarm62500hz32VirtualizedC__5__CLIENT_ID);
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm5*/Alarm62500hz32VirtualizedC__6__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*Ieee802154BeaconEnabledC.MACAlarm5*/Alarm62500hz32VirtualizedC__6__CLIENT_ID);
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm6*/Alarm62500hz32VirtualizedC__7__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*Ieee802154BeaconEnabledC.MACAlarm6*/Alarm62500hz32VirtualizedC__7__CLIENT_ID);
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm7*/Alarm62500hz32VirtualizedC__8__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*Ieee802154BeaconEnabledC.MACAlarm7*/Alarm62500hz32VirtualizedC__8__CLIENT_ID);
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm8*/Alarm62500hz32VirtualizedC__9__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*Ieee802154BeaconEnabledC.MACAlarm8*/Alarm62500hz32VirtualizedC__9__CLIENT_ID);
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm9*/Alarm62500hz32VirtualizedC__10__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*Ieee802154BeaconEnabledC.MACAlarm9*/Alarm62500hz32VirtualizedC__10__CLIENT_ID);
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm10*/Alarm62500hz32VirtualizedC__11__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*Ieee802154BeaconEnabledC.MACAlarm10*/Alarm62500hz32VirtualizedC__11__CLIENT_ID);
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm11*/Alarm62500hz32VirtualizedC__12__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*Ieee802154BeaconEnabledC.MACAlarm11*/Alarm62500hz32VirtualizedC__12__CLIENT_ID);
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm12*/Alarm62500hz32VirtualizedC__13__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*Ieee802154BeaconEnabledC.MACAlarm12*/Alarm62500hz32VirtualizedC__13__CLIENT_ID);
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm13*/Alarm62500hz32VirtualizedC__14__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*Ieee802154BeaconEnabledC.MACAlarm13*/Alarm62500hz32VirtualizedC__14__CLIENT_ID);
#line 78
      break;
#line 78
    case /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__15__CLIENT_ID:
#line 78
      Alarm32khzTo62500hzTransformC__AlarmFrom__fired(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__15__CLIENT_ID);
#line 78
      break;
#line 78
    default:
#line 78
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__default__fired(arg_0x2ab71e8b71a0);
#line 78
      break;
#line 78
    }
#line 78
}
#line 78
# 139 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__signalAlarms(void )
#line 139
{
  uint8_t id;

  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.is_signaling = TRUE;

  for (id = 0; id < /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__NUM_ALARMS; id++) {
      if (/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id]) {


          /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type t0 = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].t0;
          /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type elapsed = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow() - t0;

#line 150
          if (/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].dt <= elapsed) {
              /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id] = FALSE;
              /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__fired(id);
            }
        }
    }

  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.is_signaling = FALSE;
}











static inline void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__fired(void )
#line 170
{
  /* atomic removed: atomic calls only */
#line 171
  {
    /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__signalAlarms();
    /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__setNextAlarm();
  }
}

# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Alarm__fired(void ){
#line 78
  /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__fired();
#line 78
}
#line 78
# 162 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__AlarmFrom__fired(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__m_dt == 0) 
        {
          /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Alarm__fired();
        }
      else 
        {
          /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__set_alarm();
        }
    }
#line 174
    __nesc_atomic_end(__nesc_atomic); }
}

# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__Alarm__fired(void ){
#line 78
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__AlarmFrom__fired();
#line 78
}
#line 78
# 119 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__fired(void )
#line 119
{
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__stop();
  ;
  __nesc_enable_interrupt();
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__Alarm__fired();
}

# 58 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareB__fired(void ){
#line 58
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Compare__fired();
#line 58
}
#line 58
# 67 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SchedulerBasicP__TaskBasic__postTask(/*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/usr/src/tinyos/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 76 "/usr/src/tinyos/tos/lib/mac/tkn154/InactivePeriodP.nc"
static inline void /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__Alarm__fired(void )
#line 76
{
#line 76
  while (!0) {
#line 76
      break;
    }
#line 76
  ;
}

#line 76
static inline void /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__Alarm__fired(void )
#line 76
{
#line 76
  while (!0) {
#line 76
      break;
    }
#line 76
  ;
}

# 135 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoCoordCfpP.nc"
static inline void NoCoordCfpP__CfpEndAlarm__fired(void )
{
}

#line 138
static inline void NoCoordCfpP__CfpSlotAlarm__fired(void )
{
}

# 149 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDeviceCfpP.nc"
static inline void NoDeviceCfpP__CfpEndAlarm__fired(void )
#line 149
{
}

#line 151
static inline void NoDeviceCfpP__CfpSlotAlarm__fired(void )
#line 151
{
}

# 100 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__BLEAlarm__fired(void )
#line 100
{
}

#line 98
static inline void /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__CapEndAlarm__fired(void )
#line 98
{
}

# 547 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BLEAlarm__fired(void )
#line 547
{
#line 547
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__updateState();
}

#line 543
static inline void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__CapEndAlarm__fired(void )
#line 543
{
  ;
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__updateState();
}

# 104 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoBeaconTransmitP.nc"
static inline void NoBeaconTransmitP__BeaconSendAlarm__fired(void )
#line 104
{
}

# 13 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/LocalTime62500hzP.nc"
static inline void LocalTime62500hzP__Alarm__fired(void )
#line 13
{
}

# 63 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Register.nc"
inline static cc2420_status_t CC2420ControlP__RXCTRL1__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_RXCTRL1, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
inline static cc2420_status_t CC2420ControlP__IOCFG0__write(uint16_t data){
#line 63
  unsigned char __nesc_result;
#line 63

#line 63
  __nesc_result = CC2420SpiP__Reg__write(CC2420_IOCFG0, data);
#line 63

#line 63
  return __nesc_result;
#line 63
}
#line 63
# 53 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Strobe.nc"
inline static cc2420_status_t CC2420ControlP__SXOSCON__strobe(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = CC2420SpiP__Strobe__strobe(CC2420_SXOSCON);
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 89 "/usr/src/tinyos/tos/platforms/micaz/chips/cc2420/HplCC2420InterruptsP.nc"
static inline error_t HplCC2420InterruptsP__CCA__enableRisingEdge(void )
#line 89
{
  /* atomic removed: atomic calls only */
#line 90
  HplCC2420InterruptsP__ccaWaitForState = TRUE;
  /* atomic removed: atomic calls only */
#line 91
  HplCC2420InterruptsP__ccaCheckDisabled = FALSE;
  HplCC2420InterruptsP__ccaLastState = HplCC2420InterruptsP__CC_CCA__get();
  HplCC2420InterruptsP__CCATask__postTask();
  return SUCCESS;
}

# 53 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
inline static error_t CC2420ControlP__InterruptCCA__enableRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = HplCC2420InterruptsP__CCA__enableRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 194 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline error_t CC2420ControlP__CC2420Power__startOscillator(void )
#line 194
{
  /* atomic removed: atomic calls only */
#line 195
  {
    if (CC2420ControlP__m_state != CC2420ControlP__S_VREG_STARTED) {
        {
          unsigned char __nesc_temp = 
#line 197
          FAIL;

#line 197
          return __nesc_temp;
        }
      }
    CC2420ControlP__m_state = CC2420ControlP__S_XOSC_STARTING;
    CC2420ControlP__CSN__set();
    CC2420ControlP__CSN__clr();
    CC2420ControlP__IOCFG1__write(CC2420_SFDMUX_XOSC16M_STABLE << 
    CC2420_IOCFG1_CCAMUX);

    CC2420ControlP__InterruptCCA__enableRisingEdge();
    CC2420ControlP__SXOSCON__strobe();

    CC2420ControlP__IOCFG0__write((1 << CC2420_IOCFG0_FIFOP_POLARITY) | (
    127 << CC2420_IOCFG0_FIFOP_THR));

    CC2420ControlP__writeFsctrl();
    CC2420ControlP__writeMdmctrl0();

    CC2420ControlP__RXCTRL1__write(((((((1 << CC2420_RXCTRL1_RXBPF_LOCUR) | (
    1 << CC2420_RXCTRL1_LOW_LOWGAIN)) | (
    1 << CC2420_RXCTRL1_HIGH_HGM)) | (
    1 << CC2420_RXCTRL1_LNA_CAP_ARRAY)) | (
    1 << CC2420_RXCTRL1_RXMIX_TAIL)) | (
    1 << CC2420_RXCTRL1_RXMIX_VCM)) | (
    2 << CC2420_RXCTRL1_RXMIX_CURRENT));
    CC2420ControlP__CSN__set();
  }
  return SUCCESS;
}

# 72 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static error_t CC2420TKN154P__CC2420Power__startOscillator(void ){
#line 72
  unsigned char __nesc_result;
#line 72

#line 72
  __nesc_result = CC2420ControlP__CC2420Power__startOscillator();
#line 72

#line 72
  return __nesc_result;
#line 72
}
#line 72
# 155 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__CC2420Power__startVRegDone(void )
{
  CC2420TKN154P__CC2420Power__startOscillator();
}

# 57 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Power.nc"
inline static void CC2420ControlP__CC2420Power__startVRegDone(void ){
#line 57
  CC2420TKN154P__CC2420Power__startVRegDone();
#line 57
}
#line 57
# 436 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static inline void CC2420ControlP__StartupAlarm__fired(void )
#line 436
{
  if (CC2420ControlP__m_state == CC2420ControlP__S_VREG_STARTING) {
      CC2420ControlP__m_state = CC2420ControlP__S_VREG_STARTED;
      CC2420ControlP__RSTN__clr();
      CC2420ControlP__RSTN__set();
      CC2420ControlP__CC2420Power__startVRegDone();
    }
}

# 105 "/usr/src/tinyos/tos/interfaces/AsyncStdControl.nc"
inline static error_t CC2420TKN154P__TxControl__stop(void ){
#line 105
  unsigned char __nesc_result;
#line 105

#line 105
  __nesc_result = CC2420TransmitP__AsyncStdControl__stop();
#line 105

#line 105
  return __nesc_result;
#line 105
}
#line 105
# 43 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static error_t CC2420TKN154P__CC2420Tx__send(bool cca){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = CC2420TransmitP__CC2420Tx__send(cca);
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 521 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__waitBackoffDoneUnslottedCsma(void )
{

  int8_t dummy;
  ieee154_txframe_t *frame = (void *)0;
  ieee154_csma_t *csma = (void *)0;

  /* atomic removed: atomic calls only */
#line 528
  {



    CC2420TKN154P__CC2420Power__rxOn();
    CC2420TKN154P__m_state = CC2420TKN154P__S_TX_ACTIVE_UNSLOTTED_CSMA;


    while (CC2420TKN154P__CC2420Power__rssi(&dummy) != SUCCESS) 
      ;


    if (CC2420TKN154P__CC2420Tx__send(TRUE) == SUCCESS) {

        CC2420TKN154P__checkEnableRxForACK();
      }
    else 
#line 543
      {

        CC2420TKN154P__CC2420Power__rfOff();

        CC2420TKN154P__CC2420Power__flushRxFifo();
        CC2420TKN154P__m_csma->NB += 1;
        if (CC2420TKN154P__m_csma->NB > CC2420TKN154P__m_csma->macMaxCsmaBackoffs) {

            frame = CC2420TKN154P__m_txframe;
            csma = CC2420TKN154P__m_csma;
          }
        else {

            CC2420TKN154P__m_csma->BE += 1;
            if (CC2420TKN154P__m_csma->BE > CC2420TKN154P__m_csma->macMaxBE) {
              CC2420TKN154P__m_csma->BE = CC2420TKN154P__m_csma->macMaxBE;
              }
#line 559
            CC2420TKN154P__nextIterationUnslottedCsma();
          }
      }
  }
  if (frame != (void *)0) {
      CC2420TKN154P__CC2420Tx__unlockChipSpi();
      CC2420TKN154P__TxControl__stop();
      CC2420TKN154P__SpiResource__release();
      CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;
      CC2420TKN154P__UnslottedCsmaCa__transmitDone(frame, csma, FALSE, FAIL);
    }
}

# 43 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__CCA__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit6*/HplAtm128GeneralIOPinP__30__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 327 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline bool CC2420TransmitP__CC2420Tx__cca(void )
{
  return CC2420TransmitP__CCA__get();
}

# 46 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static bool CC2420TKN154P__CC2420Tx__cca(void ){
#line 46
  unsigned char __nesc_result;
#line 46

#line 46
  __nesc_result = CC2420TransmitP__CC2420Tx__cca();
#line 46

#line 46
  return __nesc_result;
#line 46
}
#line 46
# 887 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline bool CC2420TKN154P__CCA__getNow(void )
{
  return CC2420TKN154P__CC2420Tx__cca();
}

# 51 "/usr/src/tinyos/tos/interfaces/GetNow.nc"
inline static TKN154TimingP__CCA__data_type TKN154TimingP__CCA__getNow(void ){
#line 51
  unsigned char __nesc_result;
#line 51

#line 51
  __nesc_result = CC2420TKN154P__CCA__getNow();
#line 51

#line 51
  return __nesc_result;
#line 51
}
#line 51
# 84 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static inline bool TKN154TimingP__ReliableWait__ccaOnBackoffBoundary(uint32_t slot0)
{

  return TKN154TimingP__CCA__getNow() ? 20 : 0;
}

# 41 "/usr/src/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
inline static bool CC2420TKN154P__ReliableWait__ccaOnBackoffBoundary(uint32_t slot0){
#line 41
  unsigned char __nesc_result;
#line 41

#line 41
  __nesc_result = TKN154TimingP__ReliableWait__ccaOnBackoffBoundary(slot0);
#line 41

#line 41
  return __nesc_result;
#line 41
}
#line 41
# 644 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__waitBackoffDoneSlottedCsma(void )
{
  int8_t dummy;
  bool ccaFailure = FALSE;
  error_t result = FAIL;
  ieee154_txframe_t *frame = (void *)0;
  ieee154_csma_t *csma = (void *)0;

  /* atomic removed: atomic calls only */
#line 652
  {



    CC2420TKN154P__CC2420Power__rxOn();
    CC2420TKN154P__m_state = CC2420TKN154P__S_TX_ACTIVE_SLOTTED_CSMA;


    while (CC2420TKN154P__CC2420Power__rssi(&dummy) != SUCCESS) 
      ;




    if (CC2420TKN154P__ReliableWait__ccaOnBackoffBoundary(CC2420TKN154P__m_t0)) {

        if (CC2420TKN154P__CC2420Tx__send(TRUE) == SUCCESS) {

            CC2420TKN154P__checkEnableRxForACK();
            return;
          }
        else {
#line 673
          ccaFailure = TRUE;
          }
      }
    else {
#line 675
      ccaFailure = TRUE;
      }

    CC2420TKN154P__CC2420Power__rfOff();
    CC2420TKN154P__CC2420Power__flushRxFifo();
    CC2420TKN154P__m_state = CC2420TKN154P__S_LOAD_TXFIFO_SLOTTED;
    if (ccaFailure) {
        CC2420TKN154P__m_csma->NB += 1;
        if (CC2420TKN154P__m_csma->NB > CC2420TKN154P__m_csma->macMaxCsmaBackoffs) {

            frame = CC2420TKN154P__m_txframe;
            csma = CC2420TKN154P__m_csma;
            result = FAIL;
          }
        else 
#line 688
          {

            CC2420TKN154P__m_csma->BE += 1;
            if (CC2420TKN154P__m_csma->BE > CC2420TKN154P__m_csma->macMaxBE) {
              CC2420TKN154P__m_csma->BE = CC2420TKN154P__m_csma->macMaxBE;
              }
#line 693
            CC2420TKN154P__nextIterationSlottedCsma();
          }
      }
    else 
#line 695
      {



        frame = CC2420TKN154P__m_txframe;
        csma = CC2420TKN154P__m_csma;
        result = ERETRY;
      }
  }
  if (frame != (void *)0) {
      CC2420TKN154P__CC2420Tx__unlockChipSpi();
      CC2420TKN154P__TxControl__stop();
      CC2420TKN154P__SpiResource__release();
      CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;
      CC2420TKN154P__SlottedCsmaCa__transmitDone(frame, csma, FALSE, 0, result);
    }
}

#line 837
static inline void CC2420TKN154P__ReliableWait__waitBackoffDone(void )
{
  switch (CC2420TKN154P__m_state) 
    {
      case CC2420TKN154P__S_TX_BACKOFF_SLOTTED: CC2420TKN154P__waitBackoffDoneSlottedCsma();
#line 841
      break;
      case CC2420TKN154P__S_TX_BACKOFF_UNSLOTTED: CC2420TKN154P__waitBackoffDoneUnslottedCsma();
#line 842
      break;
      default: while (!0) {
#line 843
            break;
          }
#line 843
      ;
#line 843
      break;
    }
}

# 40 "/usr/src/tinyos/tos/chips/cc2420_tkn154/ReliableWait.nc"
inline static void TKN154TimingP__ReliableWait__waitBackoffDone(void ){
#line 40
  CC2420TKN154P__ReliableWait__waitBackoffDone();
#line 40
}
#line 40
#line 38
inline static void TKN154TimingP__ReliableWait__waitTxDone(void ){
#line 38
  CC2420TKN154P__ReliableWait__waitTxDone();
#line 38
}
#line 38
#line 36
inline static void TKN154TimingP__ReliableWait__waitRxDone(void ){
#line 36
  CC2420TKN154P__ReliableWait__waitRxDone();
#line 36
}
#line 36
# 120 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static inline void TKN154TimingP__SymbolAlarm__fired(void )
{
  switch (TKN154TimingP__m_state) 
    {
      case TKN154TimingP__S_WAIT_RX: TKN154TimingP__m_state = TKN154TimingP__S_WAIT_OFF;
#line 124
      TKN154TimingP__ReliableWait__waitRxDone();
#line 124
      break;
      case TKN154TimingP__S_WAIT_TX: TKN154TimingP__m_state = TKN154TimingP__S_WAIT_OFF;
#line 125
      TKN154TimingP__ReliableWait__waitTxDone();
#line 125
      break;
      case TKN154TimingP__S_WAIT_BACKOFF: TKN154TimingP__m_state = TKN154TimingP__S_WAIT_OFF;
#line 126
      TKN154TimingP__ReliableWait__waitBackoffDone();
#line 126
      break;
      default: while (!0) {
#line 127
            break;
          }
#line 127
      ;
#line 127
      break;
    }
}

# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__fired(void ){
#line 78
  TKN154TimingP__SymbolAlarm__fired();
#line 78
}
#line 78
# 54 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__fired(void )
#line 54
{
#line 54
  /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__fired();
}

# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__fired(void ){
#line 78
  /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__fired();
#line 78
}
#line 78
# 162 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__AlarmFrom__fired(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      if (/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__m_dt == 0) 
        {
          /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__fired();
        }
      else 
        {
          /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__set_alarm();
        }
    }
#line 174
    __nesc_atomic_end(__nesc_atomic); }
}

# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__Alarm__fired(void ){
#line 78
  /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__AlarmFrom__fired();
#line 78
}
#line 78
# 150 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline void HplAtm128Timer1P__CompareC__stop(void )
#line 150
{
#line 150
  * (volatile uint8_t *)0x7D &= ~(1 << 0);
}

# 68 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Compare__stop(void ){
#line 68
  HplAtm128Timer1P__CompareC__stop();
#line 68
}
#line 68
# 119 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Compare__fired(void )
#line 119
{
  /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Compare__stop();
  ;
  __nesc_enable_interrupt();
  /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__Alarm__fired();
}

# 58 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer1P__CompareC__fired(void ){
#line 58
  /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Compare__fired();
#line 58
}
#line 58
# 224 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd_dropped(void )
#line 224
{
  if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) {
    return;
    }
#line 227
  if (CC2420ReceiveP__m_timestamp_size) {
      CC2420ReceiveP__m_timestamp_size--;
    }
}

# 55 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd_dropped(void ){
#line 55
  CC2420ReceiveP__CC2420Receive__sfd_dropped();
#line 55
}
#line 55
# 78 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static inline uint16_t TKN154TimingP__CaptureTime__getSFDUptime(uint16_t SFDCaptureTime, uint16_t EFDCaptureTime)
{

  return (EFDCaptureTime - SFDCaptureTime) * 2;
}

# 56 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CaptureTime.nc"
inline static uint16_t CC2420TransmitP__CaptureTime__getSFDUptime(uint16_t SFDCaptureTime, uint16_t EFDCaptureTime){
#line 56
  unsigned short __nesc_result;
#line 56

#line 56
  __nesc_result = TKN154TimingP__CaptureTime__getSFDUptime(SFDCaptureTime, EFDCaptureTime);
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 59 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureRisingEdge(void )
#line 59
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__enableCapture(TRUE);
}

# 53 "/usr/src/tinyos/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureRisingEdge(void ){
#line 53
  unsigned char __nesc_result;
#line 53

#line 53
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureRisingEdge();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 54 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128GeneralIOPinP.nc"
static __inline bool /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__get(void )
#line 54
{
#line 54
  return (* (volatile uint8_t * )48U & (1 << 4)) != 0;
}

# 43 "/usr/src/tinyos/tos/interfaces/GeneralIO.nc"
inline static bool CC2420TransmitP__SFD__get(void ){
#line 43
  unsigned char __nesc_result;
#line 43

#line 43
  __nesc_result = /*HplAtm128GeneralIOC.PortD.Bit4*/HplAtm128GeneralIOPinP__28__IO__get();
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 214 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__CC2420Receive__sfd(uint32_t time)
#line 214
{
  if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) {
    return;
    }
#line 217
  if (CC2420ReceiveP__m_timestamp_size < CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE) {
      uint8_t tail = (CC2420ReceiveP__m_timestamp_head + CC2420ReceiveP__m_timestamp_size) % CC2420ReceiveP__TIMESTAMP_QUEUE_SIZE;

#line 219
      CC2420ReceiveP__m_timestamp_queue[tail] = time;
      CC2420ReceiveP__m_timestamp_size++;
    }
}

# 49 "/usr/src/tinyos/tos/chips/cc2420/interfaces/CC2420Receive.nc"
inline static void CC2420TransmitP__CC2420Receive__sfd(uint32_t time){
#line 49
  CC2420ReceiveP__CC2420Receive__sfd(time);
#line 49
}
#line 49
# 63 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureFallingEdge(void )
#line 63
{
  return /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__enableCapture(FALSE);
}

# 54 "/usr/src/tinyos/tos/interfaces/GpioCapture.nc"
inline static error_t CC2420TransmitP__CaptureSFD__captureFallingEdge(void ){
#line 54
  unsigned char __nesc_result;
#line 54

#line 54
  __nesc_result = /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captureFallingEdge();
#line 54

#line 54
  return __nesc_result;
#line 54
}
#line 54
# 64 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
inline static /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__size_type /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get(void ){
#line 64
  unsigned long __nesc_result;
#line 64

#line 64
  __nesc_result = /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get();
#line 64

#line 64
  return __nesc_result;
#line 64
}
#line 64
# 86 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(void )
{
  return /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get();
}

#line 147
static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type t0, /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt)
{
  /* atomic removed: atomic calls only */
  {
    /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 = t0;
    /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt = dt;
    /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm();
  }
}

static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type dt)
{
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__startAt(/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__getNow(), dt);
}

# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__start(/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__size_type dt){
#line 66
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Alarm__start(dt);
#line 66
}
#line 66
# 52 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__start(uint32_t dt)
#line 52
{
#line 52
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__AlarmFrom__start(dt >> 1);
}

# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static void CC2420TransmitP__BackoffAlarm__start(CC2420TransmitP__BackoffAlarm__size_type dt){
#line 66
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm62500hz32P*/Alarm62500hz32P__0__Alarm__start(dt);
#line 66
}
#line 66
# 900 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__Timestamp__default__transmissionStarted(uint8_t frameType, uint8_t msduHandle, uint8_t *msdu, uint8_t token)
#line 900
{
}

# 49 "/usr/src/tinyos/tos/chips/cc2420_tkn154/Timestamp.nc"
inline static void CC2420TKN154P__Timestamp__transmissionStarted(uint8_t frameType, uint8_t msduHandle, uint8_t *payload, uint8_t token){
#line 49
  CC2420TKN154P__Timestamp__default__transmissionStarted(frameType, msduHandle, payload, token);
#line 49
}
#line 49
# 815 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static inline void CC2420TKN154P__CC2420Tx__transmissionStarted(ieee154_txframe_t *frame)
{
  uint8_t frameType = frame->header->mhr[0] & FC1_FRAMETYPE_MASK;
  uint8_t token = frame->headerLen;

#line 819
  CC2420TKN154P__Timestamp__transmissionStarted(frameType, frame->handle, frame->payload, token);
}

# 50 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420Tx.nc"
inline static void CC2420TransmitP__CC2420Tx__transmissionStarted(ieee154_txframe_t *data){
#line 50
  CC2420TKN154P__CC2420Tx__transmissionStarted(data);
#line 50
}
#line 50
# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__size_type /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 58 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static inline uint32_t /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__getNow(void )
#line 58
{


  return /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__AlarmFrom__getNow() << 1;
}

# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
inline static TKN154TimingP__SymbolAlarm__size_type TKN154TimingP__SymbolAlarm__getNow(void ){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  __nesc_result = /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 67 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static inline uint32_t TKN154TimingP__CaptureTime__getTimestamp(uint16_t captured_time)
{
  uint32_t now = TKN154TimingP__SymbolAlarm__getNow();





  return now - (uint16_t )(now - captured_time * 2) - 10;
}

# 47 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CaptureTime.nc"
inline static uint32_t CC2420TransmitP__CaptureTime__getTimestamp(uint16_t SFDCaptureTime){
#line 47
  unsigned long __nesc_result;
#line 47

#line 47
  __nesc_result = TKN154TimingP__CaptureTime__getTimestamp(SFDCaptureTime);
#line 47

#line 47
  return __nesc_result;
#line 47
}
#line 47
# 245 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static inline void CC2420TransmitP__CaptureSFD__captured(uint16_t time)
#line 245
{
  uint32_t time32;
  uint8_t sfd_state = 0;

#line 248
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 248
    {
      time32 = CC2420TransmitP__CaptureTime__getTimestamp(time);
      switch (CC2420TransmitP__m_state) {

          case CC2420TransmitP__S_SFD: 
            CC2420TransmitP__m_state = CC2420TransmitP__S_EFD;
          CC2420TransmitP__sfdHigh = TRUE;


          CC2420TransmitP__m_receiving = FALSE;
          CC2420TransmitP__CaptureSFD__captureFallingEdge();
          __nesc_hton_uint32(CC2420TransmitP__m_frame->metadata->timestamp.nxdata, time32);

          CC2420TransmitP__BackoffAlarm__stop();

          if (CC2420TransmitP__SFD__get()) {
              break;
            }


          case CC2420TransmitP__S_EFD: 
            CC2420TransmitP__sfdHigh = FALSE;
          CC2420TransmitP__CaptureSFD__captureRisingEdge();

          CC2420TransmitP__CC2420Tx__transmissionStarted(CC2420TransmitP__m_frame);
          if (CC2420TransmitP__m_frame->header->mhr[0] & (1 << IEEE154_FCF_ACK_REQ)) {

              CC2420TransmitP__m_state = CC2420TransmitP__S_ACK_WAIT;



              CC2420TransmitP__BackoffAlarm__start(150);
            }
          else 
#line 280
            {
              CC2420TransmitP__signalDone(FALSE, SUCCESS);
            }

          if (!CC2420TransmitP__SFD__get()) {
              break;
            }


          default: 

            if (!CC2420TransmitP__m_receiving && CC2420TransmitP__sfdHigh == FALSE) {
                CC2420TransmitP__sfdHigh = TRUE;
                CC2420TransmitP__CaptureSFD__captureFallingEdge();

                sfd_state = CC2420TransmitP__SFD__get();

                CC2420TransmitP__CC2420Receive__sfd(time32);
                CC2420TransmitP__m_receiving = TRUE;
                CC2420TransmitP__m_prev_time = time;
                if (CC2420TransmitP__SFD__get()) {
                    {
                      __nesc_atomic_end(__nesc_atomic); 
#line 302
                      return;
                    }
                  }
              }
          if (CC2420TransmitP__sfdHigh == TRUE) {
              CC2420TransmitP__sfdHigh = FALSE;
              CC2420TransmitP__CaptureSFD__captureRisingEdge();
              CC2420TransmitP__m_receiving = FALSE;









              if (sfd_state == 0 && CC2420TransmitP__CaptureTime__getSFDUptime(CC2420TransmitP__m_prev_time, time) < 20) {
                CC2420TransmitP__CC2420Receive__sfd_dropped();
                }
#line 321
              break;
            }
        }
    }
#line 324
    __nesc_atomic_end(__nesc_atomic); }
}

# 61 "/usr/src/tinyos/tos/interfaces/GpioCapture.nc"
inline static void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captured(uint16_t time){
#line 61
  CC2420TransmitP__CaptureSFD__captured(time);
#line 61
}
#line 61
# 71 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static inline void /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__captured(uint16_t time)
#line 71
{


  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Capture__captured(time);
}

# 60 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Capture.nc"
inline static void HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Capture__size_type t){
#line 60
  /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__captured(t);
#line 60
}
#line 60
# 197 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
static inline uint16_t HplAtm128Timer1P__Capture__get(void )
#line 197
{
#line 197
  return * (volatile uint16_t *)(0x26 + 0x20);
}

# 126 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow(void )
#line 126
{
}

# 60 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128TimerInitC.nc"
static inline void /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow(void )
#line 60
{
}

# 177 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static inline void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow(void )
{
}

#line 177
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Counter__overflow(void )
{
}

#line 177
static inline void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Counter__overflow(void )
{
}

# 82 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
inline static void /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow(void ){
#line 82
  /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Counter__overflow();
#line 82
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Counter__overflow();
#line 82
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__overflow();
#line 82
}
#line 82
# 133 "/usr/src/tinyos/tos/lib/timer/TransformCounterC.nc"
static inline void /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper++;
      if ((/*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper & /*Counter32khz32C.Transform32*/TransformCounterC__0__OVERFLOW_MASK) == 0) {
        /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__overflow();
        }
    }
#line 141
    __nesc_atomic_end(__nesc_atomic); }
}

# 82 "/usr/src/tinyos/tos/lib/timer/Counter.nc"
inline static void /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow(void ){
#line 82
  /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__overflow();
#line 82
}
#line 82
# 65 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128CounterC.nc"
static inline void /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow(void )
{
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Counter__overflow();
}

# 126 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128AlarmC.nc"
static inline void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__overflow(void )
#line 126
{
}

#line 126
static inline void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Timer__overflow(void )
#line 126
{
}

# 70 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer1P__Timer__overflow(void ){
#line 70
  /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__2__HplAtm128Timer__overflow();
#line 70
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__1__HplAtm128Timer__overflow();
#line 70
  /*CounterOne16C.NCounter*/Atm128CounterC__0__Timer__overflow();
#line 70
  /*InitOneP.InitOne*/Atm128TimerInitC__0__Timer__overflow();
#line 70
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Alarm16.NAlarm*/Atm128AlarmC__0__HplAtm128Timer__overflow();
#line 70
}
#line 70
# 72 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired(void )
#line 72
{
}

# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired(void ){
#line 75
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__default__fired();
#line 75
}
#line 75
# 70 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__Irq__fired();
}

# 48 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig0__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin0*/HplAtm128InterruptPinP__0__IrqSignal__fired();
#line 48
}
#line 48
# 72 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired(void )
#line 72
{
}

# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired(void ){
#line 75
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__default__fired();
#line 75
}
#line 75
# 70 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__Irq__fired();
}

# 48 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig1__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin1*/HplAtm128InterruptPinP__1__IrqSignal__fired();
#line 48
}
#line 48
# 72 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired(void )
#line 72
{
}

# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired(void ){
#line 75
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__default__fired();
#line 75
}
#line 75
# 70 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__Irq__fired();
}

# 48 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig2__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin2*/HplAtm128InterruptPinP__2__IrqSignal__fired();
#line 48
}
#line 48
# 72 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired(void )
#line 72
{
}

# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__fired(void ){
#line 75
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__default__fired();
#line 75
}
#line 75
# 70 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__Irq__fired();
}

# 48 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig3__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin3*/HplAtm128InterruptPinP__3__IrqSignal__fired();
#line 48
}
#line 48
# 72 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__default__fired(void )
#line 72
{
}

# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__fired(void ){
#line 75
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__default__fired();
#line 75
}
#line 75
# 70 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__Irq__fired();
}

# 48 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig4__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin4*/HplAtm128InterruptPinP__4__IrqSignal__fired();
#line 48
}
#line 48
# 72 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__default__fired(void )
#line 72
{
}

# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__fired(void ){
#line 75
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__default__fired();
#line 75
}
#line 75
# 70 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__Irq__fired();
}

# 48 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig5__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin5*/HplAtm128InterruptPinP__5__IrqSignal__fired();
#line 48
}
#line 48
# 233 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static inline void CC2420ReceiveP__InterruptFIFOP__fired(void )
#line 233
{
  /* atomic removed: atomic calls only */
#line 234
  {
    if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STARTED) {
        CC2420ReceiveP__beginReceive();
      }
    else {
        CC2420ReceiveP__m_missed_packets++;
      }
  }
}

# 68 "/usr/src/tinyos/tos/interfaces/GpioInterrupt.nc"
inline static void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__fired(void ){
#line 68
  CC2420ReceiveP__InterruptFIFOP__fired();
#line 68
}
#line 68
# 38 "/usr/src/tinyos/tos/chips/atm128/pins/Atm128GpioInterruptC.nc"
static inline void /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired(void )
#line 38
{
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Interrupt__fired();
}

# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__fired(void ){
#line 75
  /*HplCC2420InterruptsC.InterruptFIFOPC*/Atm128GpioInterruptC__0__Atm128Interrupt__fired();
#line 75
}
#line 75
# 70 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__Irq__fired();
}

# 48 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig6__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin6*/HplAtm128InterruptPinP__6__IrqSignal__fired();
#line 48
}
#line 48
# 72 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__default__fired(void )
#line 72
{
}

# 75 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128Interrupt.nc"
inline static void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__fired(void ){
#line 75
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__default__fired();
#line 75
}
#line 75
# 70 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptPinP.nc"
static inline void /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired(void )
#line 70
{
#line 70
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__Irq__fired();
}

# 48 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptSig.nc"
inline static void HplAtm128InterruptSigP__IntSig7__fired(void ){
#line 48
  /*HplAtm128InterruptC.IntPin7*/HplAtm128InterruptPinP__7__IrqSignal__fired();
#line 48
}
#line 48
# 115 "/usr/src/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static inline uint8_t HplAtm128SpiP__SPI__read(void )
#line 115
{
#line 115
  return * (volatile uint8_t *)(0x0F + 0x20);
}

# 97 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
inline static uint8_t Atm128SpiP__Spi__read(void ){
#line 97
  unsigned char __nesc_result;
#line 97

#line 97
  __nesc_result = HplAtm128SpiP__SPI__read();
#line 97

#line 97
  return __nesc_result;
#line 97
}
#line 97
#line 113
inline static void Atm128SpiP__Spi__enableInterrupt(bool enabled){
#line 113
  HplAtm128SpiP__SPI__enableInterrupt(enabled);
#line 113
}
#line 113
# 354 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static inline void Atm128SpiP__Spi__dataReady(uint8_t data)
#line 354
{
  bool again;

  /* atomic removed: atomic calls only */
#line 357
  {
    if (Atm128SpiP__rxBuffer != (void *)0) {
        Atm128SpiP__rxBuffer[Atm128SpiP__pos] = data;
      }

    Atm128SpiP__pos++;
  }
  Atm128SpiP__Spi__enableInterrupt(FALSE);
  /* atomic removed: atomic calls only */
  {
    again = Atm128SpiP__pos < Atm128SpiP__len;
  }

  if (again) {
      Atm128SpiP__sendNextPart();
    }
  else {
      uint8_t discard;
      uint16_t myLen;
      uint8_t * rx;
      uint8_t * tx;

      /* atomic removed: atomic calls only */
#line 379
      {
        myLen = Atm128SpiP__len;
        rx = Atm128SpiP__rxBuffer;
        tx = Atm128SpiP__txBuffer;
        Atm128SpiP__rxBuffer = (void *)0;
        Atm128SpiP__txBuffer = (void *)0;
        Atm128SpiP__len = 0;
        Atm128SpiP__pos = 0;
      }
      discard = Atm128SpiP__Spi__read();

      Atm128SpiP__SpiPacket__sendDone(tx, rx, myLen, SUCCESS);
    }
}

# 109 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128Spi.nc"
inline static void HplAtm128SpiP__SPI__dataReady(uint8_t data){
#line 109
  Atm128SpiP__Spi__dataReady(data);
#line 109
}
#line 109
# 63 "/usr/src/tinyos/tos/system/RealMainP.nc"
  int main(void )
#line 63
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {





      {
      }
#line 71
      ;

      RealMainP__Scheduler__init();





      RealMainP__PlatformInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;





      RealMainP__SoftwareInit__init();
      while (RealMainP__Scheduler__runNextTask()) ;
    }
#line 88
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  RealMainP__Boot__booted();


  RealMainP__Scheduler__taskLoop();




  return -1;
}

# 134 "/usr/src/tinyos/tos/system/SchedulerBasicP.nc"
static bool SchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

  /* atomic removed: atomic calls only */
#line 138
  {
    nextTask = SchedulerBasicP__popTask();
    if (nextTask == SchedulerBasicP__NO_TASK) 
      {
        {
          unsigned char __nesc_temp = 
#line 142
          FALSE;

#line 142
          return __nesc_temp;
        }
      }
  }
#line 145
  SchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

#line 175
static void SchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/usr/src/tinyos/tos/interfaces/TaskBasic.nc"
static void SchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x2ab71cf0bab0){
#line 75
  switch (arg_0x2ab71cf0bab0) {
#line 75
    case PibP__radioControlStopTask:
#line 75
      PibP__radioControlStopTask__runTask();
#line 75
      break;
#line 75
    case PibP__resetSpinTask:
#line 75
      PibP__resetSpinTask__runTask();
#line 75
      break;
#line 75
    case /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask:
#line 75
      /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case IndirectTxP__tryCoordCapTxTask:
#line 75
      IndirectTxP__tryCoordCapTxTask__runTask();
#line 75
      break;
#line 75
    case ScanP__startTimerTask:
#line 75
      ScanP__startTimerTask__runTask();
#line 75
      break;
#line 75
    case ScanP__nextIterationTask:
#line 75
      ScanP__nextIterationTask__runTask();
#line 75
      break;
#line 75
    case ScanP__continueScanRequestTask:
#line 75
      ScanP__continueScanRequestTask__runTask();
#line 75
      break;
#line 75
    case BeaconSynchronizeP__processBeaconTask:
#line 75
      BeaconSynchronizeP__processBeaconTask__runTask();
#line 75
      break;
#line 75
    case BeaconSynchronizeP__signalGrantedTask:
#line 75
      BeaconSynchronizeP__signalGrantedTask__runTask();
#line 75
      break;
#line 75
    case /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__txTask:
#line 75
      /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__txTask__runTask();
#line 75
      break;
#line 75
    case /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__signalTxDoneTask:
#line 75
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__signalTxDoneTask__runTask();
#line 75
      break;
#line 75
    case /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__setupTxBroadcastTask:
#line 75
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__setupTxBroadcastTask__runTask();
#line 75
      break;
#line 75
    case /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__wasRxEnabledTask:
#line 75
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__wasRxEnabledTask__runTask();
#line 75
      break;
#line 75
    case PromiscuousModeP__signalStartDoneTask:
#line 75
      PromiscuousModeP__signalStartDoneTask__runTask();
#line 75
      break;
#line 75
    case PromiscuousModeP__continueStopTask:
#line 75
      PromiscuousModeP__continueStopTask__runTask();
#line 75
      break;
#line 75
    case CoordBroadcastP__transmitNowDoneTask:
#line 75
      CoordBroadcastP__transmitNowDoneTask__runTask();
#line 75
      break;
#line 75
    case CC2420TKN154P__energyDetectionTask:
#line 75
      CC2420TKN154P__energyDetectionTask__runTask();
#line 75
      break;
#line 75
    case CC2420TKN154P__startDoneTask:
#line 75
      CC2420TKN154P__startDoneTask__runTask();
#line 75
      break;
#line 75
    case CC2420TKN154P__rxControlStopDoneTask:
#line 75
      CC2420TKN154P__rxControlStopDoneTask__runTask();
#line 75
      break;
#line 75
    case CC2420TKN154P__configSyncTask:
#line 75
      CC2420TKN154P__configSyncTask__runTask();
#line 75
      break;
#line 75
    case HplCC2420InterruptsP__CCATask:
#line 75
      HplCC2420InterruptsP__CCATask__runTask();
#line 75
      break;
#line 75
    case CC2420SpiP__grant:
#line 75
      CC2420SpiP__grant__runTask();
#line 75
      break;
#line 75
    case Atm128SpiP__zeroTask:
#line 75
      Atm128SpiP__zeroTask__runTask();
#line 75
      break;
#line 75
    case /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask:
#line 75
      /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__grantedTask__runTask();
#line 75
      break;
#line 75
    case CC2420ReceiveP__stopContinueTask:
#line 75
      CC2420ReceiveP__stopContinueTask__runTask();
#line 75
      break;
#line 75
    case CC2420ReceiveP__receiveDone_task:
#line 75
      CC2420ReceiveP__receiveDone_task__runTask();
#line 75
      break;
#line 75
    case /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SchedulerBasicP__TaskBasic__default__runTask(arg_0x2ab71cf0bab0);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 89 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static uint32_t Alarm32khzTo62500hzTransformC__AlarmFrom__default__getNow(uint8_t num)
#line 89
{
#line 89
  return 0;
}

# 109 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static Alarm32khzTo62500hzTransformC__AlarmFrom__size_type Alarm32khzTo62500hzTransformC__AlarmFrom__getNow(uint8_t arg_0x2ab71e87ac38){
#line 109
  unsigned long __nesc_result;
#line 109

#line 109
  switch (arg_0x2ab71e87ac38) {
#line 109
    case /*Ieee802154BeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*Ieee802154BeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID);
#line 109
      break;
#line 109
    case /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID);
#line 109
      break;
#line 109
    case /*Ieee802154BeaconEnabledC.MACAlarm1*/Alarm62500hz32VirtualizedC__2__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*Ieee802154BeaconEnabledC.MACAlarm1*/Alarm62500hz32VirtualizedC__2__CLIENT_ID);
#line 109
      break;
#line 109
    case /*Ieee802154BeaconEnabledC.MACAlarm2*/Alarm62500hz32VirtualizedC__3__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*Ieee802154BeaconEnabledC.MACAlarm2*/Alarm62500hz32VirtualizedC__3__CLIENT_ID);
#line 109
      break;
#line 109
    case /*Ieee802154BeaconEnabledC.MACAlarm3*/Alarm62500hz32VirtualizedC__4__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*Ieee802154BeaconEnabledC.MACAlarm3*/Alarm62500hz32VirtualizedC__4__CLIENT_ID);
#line 109
      break;
#line 109
    case /*Ieee802154BeaconEnabledC.MACAlarm4*/Alarm62500hz32VirtualizedC__5__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*Ieee802154BeaconEnabledC.MACAlarm4*/Alarm62500hz32VirtualizedC__5__CLIENT_ID);
#line 109
      break;
#line 109
    case /*Ieee802154BeaconEnabledC.MACAlarm5*/Alarm62500hz32VirtualizedC__6__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*Ieee802154BeaconEnabledC.MACAlarm5*/Alarm62500hz32VirtualizedC__6__CLIENT_ID);
#line 109
      break;
#line 109
    case /*Ieee802154BeaconEnabledC.MACAlarm6*/Alarm62500hz32VirtualizedC__7__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*Ieee802154BeaconEnabledC.MACAlarm6*/Alarm62500hz32VirtualizedC__7__CLIENT_ID);
#line 109
      break;
#line 109
    case /*Ieee802154BeaconEnabledC.MACAlarm7*/Alarm62500hz32VirtualizedC__8__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*Ieee802154BeaconEnabledC.MACAlarm7*/Alarm62500hz32VirtualizedC__8__CLIENT_ID);
#line 109
      break;
#line 109
    case /*Ieee802154BeaconEnabledC.MACAlarm8*/Alarm62500hz32VirtualizedC__9__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*Ieee802154BeaconEnabledC.MACAlarm8*/Alarm62500hz32VirtualizedC__9__CLIENT_ID);
#line 109
      break;
#line 109
    case /*Ieee802154BeaconEnabledC.MACAlarm9*/Alarm62500hz32VirtualizedC__10__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*Ieee802154BeaconEnabledC.MACAlarm9*/Alarm62500hz32VirtualizedC__10__CLIENT_ID);
#line 109
      break;
#line 109
    case /*Ieee802154BeaconEnabledC.MACAlarm10*/Alarm62500hz32VirtualizedC__11__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*Ieee802154BeaconEnabledC.MACAlarm10*/Alarm62500hz32VirtualizedC__11__CLIENT_ID);
#line 109
      break;
#line 109
    case /*Ieee802154BeaconEnabledC.MACAlarm11*/Alarm62500hz32VirtualizedC__12__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*Ieee802154BeaconEnabledC.MACAlarm11*/Alarm62500hz32VirtualizedC__12__CLIENT_ID);
#line 109
      break;
#line 109
    case /*Ieee802154BeaconEnabledC.MACAlarm12*/Alarm62500hz32VirtualizedC__13__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*Ieee802154BeaconEnabledC.MACAlarm12*/Alarm62500hz32VirtualizedC__13__CLIENT_ID);
#line 109
      break;
#line 109
    case /*Ieee802154BeaconEnabledC.MACAlarm13*/Alarm62500hz32VirtualizedC__14__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*Ieee802154BeaconEnabledC.MACAlarm13*/Alarm62500hz32VirtualizedC__14__CLIENT_ID);
#line 109
      break;
#line 109
    case /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__15__CLIENT_ID:
#line 109
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getNow(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__15__CLIENT_ID);
#line 109
      break;
#line 109
    default:
#line 109
      __nesc_result = Alarm32khzTo62500hzTransformC__AlarmFrom__default__getNow(arg_0x2ab71e87ac38);
#line 109
      break;
#line 109
    }
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 80 "/usr/src/tinyos/tos/lib/timer/TransformCounterC.nc"
static /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type /*Counter32khz32C.Transform32*/TransformCounterC__0__Counter__get(void )
{
  /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type rv = 0;

#line 83
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*Counter32khz32C.Transform32*/TransformCounterC__0__upper_count_type high = /*Counter32khz32C.Transform32*/TransformCounterC__0__m_upper;
      /*Counter32khz32C.Transform32*/TransformCounterC__0__from_size_type low = /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get();

#line 87
      if (/*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__isOverflowPending()) 
        {






          high++;
          low = /*Counter32khz32C.Transform32*/TransformCounterC__0__CounterFrom__get();
        }
      {
        /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type high_to = high;
        /*Counter32khz32C.Transform32*/TransformCounterC__0__to_size_type low_to = low >> /*Counter32khz32C.Transform32*/TransformCounterC__0__LOW_SHIFT_RIGHT;

#line 101
        rv = (high_to << /*Counter32khz32C.Transform32*/TransformCounterC__0__HIGH_SHIFT_LEFT) | low_to;
      }
    }
#line 103
    __nesc_atomic_end(__nesc_atomic); }
  return rv;
}

# 85 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static void Alarm32khzTo62500hzTransformC__AlarmFrom__default__stop(uint8_t num)
#line 85
{
}

# 73 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__AlarmFrom__stop(uint8_t arg_0x2ab71e87ac38){
#line 73
  switch (arg_0x2ab71e87ac38) {
#line 73
    case /*Ieee802154BeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*Ieee802154BeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID);
#line 73
      break;
#line 73
    case /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID);
#line 73
      break;
#line 73
    case /*Ieee802154BeaconEnabledC.MACAlarm1*/Alarm62500hz32VirtualizedC__2__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*Ieee802154BeaconEnabledC.MACAlarm1*/Alarm62500hz32VirtualizedC__2__CLIENT_ID);
#line 73
      break;
#line 73
    case /*Ieee802154BeaconEnabledC.MACAlarm2*/Alarm62500hz32VirtualizedC__3__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*Ieee802154BeaconEnabledC.MACAlarm2*/Alarm62500hz32VirtualizedC__3__CLIENT_ID);
#line 73
      break;
#line 73
    case /*Ieee802154BeaconEnabledC.MACAlarm3*/Alarm62500hz32VirtualizedC__4__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*Ieee802154BeaconEnabledC.MACAlarm3*/Alarm62500hz32VirtualizedC__4__CLIENT_ID);
#line 73
      break;
#line 73
    case /*Ieee802154BeaconEnabledC.MACAlarm4*/Alarm62500hz32VirtualizedC__5__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*Ieee802154BeaconEnabledC.MACAlarm4*/Alarm62500hz32VirtualizedC__5__CLIENT_ID);
#line 73
      break;
#line 73
    case /*Ieee802154BeaconEnabledC.MACAlarm5*/Alarm62500hz32VirtualizedC__6__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*Ieee802154BeaconEnabledC.MACAlarm5*/Alarm62500hz32VirtualizedC__6__CLIENT_ID);
#line 73
      break;
#line 73
    case /*Ieee802154BeaconEnabledC.MACAlarm6*/Alarm62500hz32VirtualizedC__7__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*Ieee802154BeaconEnabledC.MACAlarm6*/Alarm62500hz32VirtualizedC__7__CLIENT_ID);
#line 73
      break;
#line 73
    case /*Ieee802154BeaconEnabledC.MACAlarm7*/Alarm62500hz32VirtualizedC__8__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*Ieee802154BeaconEnabledC.MACAlarm7*/Alarm62500hz32VirtualizedC__8__CLIENT_ID);
#line 73
      break;
#line 73
    case /*Ieee802154BeaconEnabledC.MACAlarm8*/Alarm62500hz32VirtualizedC__9__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*Ieee802154BeaconEnabledC.MACAlarm8*/Alarm62500hz32VirtualizedC__9__CLIENT_ID);
#line 73
      break;
#line 73
    case /*Ieee802154BeaconEnabledC.MACAlarm9*/Alarm62500hz32VirtualizedC__10__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*Ieee802154BeaconEnabledC.MACAlarm9*/Alarm62500hz32VirtualizedC__10__CLIENT_ID);
#line 73
      break;
#line 73
    case /*Ieee802154BeaconEnabledC.MACAlarm10*/Alarm62500hz32VirtualizedC__11__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*Ieee802154BeaconEnabledC.MACAlarm10*/Alarm62500hz32VirtualizedC__11__CLIENT_ID);
#line 73
      break;
#line 73
    case /*Ieee802154BeaconEnabledC.MACAlarm11*/Alarm62500hz32VirtualizedC__12__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*Ieee802154BeaconEnabledC.MACAlarm11*/Alarm62500hz32VirtualizedC__12__CLIENT_ID);
#line 73
      break;
#line 73
    case /*Ieee802154BeaconEnabledC.MACAlarm12*/Alarm62500hz32VirtualizedC__13__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*Ieee802154BeaconEnabledC.MACAlarm12*/Alarm62500hz32VirtualizedC__13__CLIENT_ID);
#line 73
      break;
#line 73
    case /*Ieee802154BeaconEnabledC.MACAlarm13*/Alarm62500hz32VirtualizedC__14__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*Ieee802154BeaconEnabledC.MACAlarm13*/Alarm62500hz32VirtualizedC__14__CLIENT_ID);
#line 73
      break;
#line 73
    case /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__15__CLIENT_ID:
#line 73
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__stop(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__15__CLIENT_ID);
#line 73
      break;
#line 73
    default:
#line 73
      Alarm32khzTo62500hzTransformC__AlarmFrom__default__stop(arg_0x2ab71e87ac38);
#line 73
      break;
#line 73
    }
#line 73
}
#line 73
# 73 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 88 "/usr/src/tinyos/tos/system/PoolP.nc"
static /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t */*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__get(void )
#line 88
{
  if (/*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__free) {
      /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t *rval = /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__queue[/*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__index];

#line 91
      /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__queue[/*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__index] = (void *)0;
      /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__free--;
      /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__index++;
      if (/*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__index == 4) {
          /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

#line 88
static /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t */*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__get(void )
#line 88
{
  if (/*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__free) {
      /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t *rval = /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__queue[/*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__index];

#line 91
      /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__queue[/*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__index] = (void *)0;
      /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__free--;
      /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__index++;
      if (/*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__index == 3) {
          /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__index = 0;
        }
      ;
      return rval;
    }
  return (void *)0;
}

static error_t /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__Pool__put(/*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__pool_t *newVal)
#line 103
{
  if (/*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__free >= 4) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__index + /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__free;

#line 109
      if (emptyIndex >= 4) {
          emptyIndex -= 4;
        }
      /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__queue[emptyIndex] = newVal;
      /*TKN154BeaconEnabledP.TxFramePoolP.PoolP*/PoolP__0__free++;
      ;
      return SUCCESS;
    }
}

# 591 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static uint8_t PibP__FrameUtility__writeHeader(
uint8_t *mhr, 
uint8_t DstAddrMode, 
uint16_t DstPANId, 
ieee154_address_t *DstAddr, 
uint8_t SrcAddrMode, 
uint16_t SrcPANId, 
const ieee154_address_t *SrcAddr, 
bool PANIDCompression)
{
  uint8_t offset = MHR_INDEX_ADDRESS;

#line 602
  if (DstAddrMode == ADDR_MODE_SHORT_ADDRESS || DstAddrMode == ADDR_MODE_EXTENDED_ADDRESS) {
      __nesc_hton_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata, DstPANId);
      offset += 2;
      if (DstAddrMode == ADDR_MODE_SHORT_ADDRESS) {
          __nesc_hton_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata, DstAddr->shortAddress);
          offset += 2;
        }
      else 
#line 608
        {
          PibP__FrameUtility__convertToLE(&mhr[offset], & DstAddr->extendedAddress);
          offset += 8;
        }
    }
  if (SrcAddrMode == ADDR_MODE_SHORT_ADDRESS || SrcAddrMode == ADDR_MODE_EXTENDED_ADDRESS) {
      if (DstPANId != SrcPANId || !PANIDCompression) {
          __nesc_hton_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata, SrcPANId);
          offset += 2;
        }
      if (SrcAddrMode == ADDR_MODE_SHORT_ADDRESS) {
          __nesc_hton_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata, SrcAddr->shortAddress);
          offset += 2;
        }
      else 
#line 621
        {
          PibP__FrameUtility__convertToLE(&mhr[offset], & SrcAddr->extendedAddress);
          offset += 8;
        }
    }
  return offset;
}

#line 1020
static void PibP__FrameUtility__convertToLE(uint8_t *destLE, const uint64_t *src)
{
  uint8_t i;
  uint64_t srcCopy = *src;

#line 1024
  for (i = 0; i < 8; i++) {
      destLE[i] = srcCopy;
      srcCopy >>= 8;
    }
}

# 79 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static ieee154_status_t /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTx__transmit(uint8_t client, ieee154_txframe_t *txFrame)
{
  txFrame->client = client;
  if (/*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__isResetPending() || /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__enqueue(txFrame) != SUCCESS) {
    return IEEE154_TRANSACTION_OVERFLOW;
    }
  else 
#line 84
    {
      /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__txTask__postTask();
      return IEEE154_SUCCESS;
    }
}

# 170 "/usr/src/tinyos/tos/system/SchedulerBasicP.nc"
static error_t SchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 172
    {
#line 172
      {
        unsigned char __nesc_temp = 
#line 172
        SchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;

        {
#line 172
          __nesc_atomic_end(__nesc_atomic); 
#line 172
          return __nesc_temp;
        }
      }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
}

# 189 "/usr/src/tinyos/tos/lib/timer/VirtualizeTimerC.nc"
static uint32_t /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__getNow(uint8_t num)
{
  return /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
}

#line 159
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

#line 144
static void /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimer62500hzC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 104 "/usr/src/tinyos/tos/lib/mac/tkn154/IndirectTxP.nc"
static uint32_t IndirectTxP__getPersistenceTimeSymbols(void )
{


  uint32_t unitPeriod;
  ieee154_macBeaconOrder_t BO = IndirectTxP__MLME_GET__macBeaconOrder();

  if (BO <= 14) {
      unitPeriod = IEEE154_aBaseSuperframeDuration;
      unitPeriod *= (uint16_t )1 << BO;
    }
  else {
#line 115
    unitPeriod = IEEE154_aBaseSuperframeDuration;
    }
#line 116
  return unitPeriod * IndirectTxP__MLME_GET__macTransactionPersistenceTime();
}

# 60 "/usr/src/tinyos/tos/lib/mac/tkn154/dummies/NoDispatchQueueP.nc"
static ieee154_status_t /*TKN154BeaconEnabledP.CoordCapQueue*/NoDispatchQueueP__0__FrameTx__transmit(uint8_t client, ieee154_txframe_t *txFrame)
{
  ieee154_status_t status;

#line 63
  txFrame->client = client;
  status = /*TKN154BeaconEnabledP.CoordCapQueue*/NoDispatchQueueP__0__FrameTxCsma__transmit(txFrame);
  if (status == IEEE154_SUCCESS) {
    /*TKN154BeaconEnabledP.CoordCapQueue*/NoDispatchQueueP__0__m_client = client;
    }
#line 67
  return status;
}

# 103 "/usr/src/tinyos/tos/system/PoolP.nc"
static error_t /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__Pool__put(/*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__pool_t *newVal)
#line 103
{
  if (/*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__free >= 3) {
      return FAIL;
    }
  else {
      uint16_t emptyIndex = /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__index + /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__free;

#line 109
      if (emptyIndex >= 3) {
          emptyIndex -= 3;
        }
      /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__queue[emptyIndex] = newVal;
      /*TKN154BeaconEnabledP.TxControlPoolP.PoolP*/PoolP__1__free++;
      ;
      return SUCCESS;
    }
}

# 353 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__updateState(void )
{
  uint32_t capDuration;
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__next_state_t next;

#line 357
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 357
    {


      if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lock || !/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioToken__isOwner()) {
        {
#line 361
          __nesc_atomic_end(__nesc_atomic); 
#line 361
          return;
        }
        }
#line 362
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lock = TRUE;
      capDuration = (uint32_t )/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__numCapSlots() * 
      (uint32_t )/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__sfSlotDuration();



      if (
#line 367
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__TimeCalc__hasExpired(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__sfStartTime(), 
      capDuration - /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__guardTime()) || 
      !/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__CapEndAlarm__isRunning()) {
          ;
          if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioOff__isOff()) {
              /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__stopAllAlarms();
              if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__DEVICE_ROLE && /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_indirectTxPending) {
                /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxWaitAlarm__fired();
                }
#line 375
              /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_broadcastRxPending = FALSE;
              if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__COORD_ROLE && /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_bcastFrame) {

                  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__restoreFrameFromBackup();
                  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__signalTxBroadcastDone(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_bcastFrame, IEEE154_CHANNEL_ACCESS_FAILURE);
                  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_bcastFrame = (void *)0;
                }
              /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lock = FALSE;
              ;
              ;
              /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioToken__transferTo(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RADIO_CLIENT_CFP);
              {
#line 386
                __nesc_atomic_end(__nesc_atomic); 
#line 386
                return;
              }
            }
          else {
#line 388
            next = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SWITCH_OFF;
            }
        }
      else {

        if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__DEVICE_ROLE && /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_broadcastRxPending) {

            ;
            next = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__tryReceive();
          }
        else {
#line 397
          if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__COORD_ROLE && /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_bcastFrame) {
              ;
              next = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__tryTransmit();
            }
          else {


            if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__DEVICE_ROLE && /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_indirectTxPending) {
                ;
                next = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__tryReceive();
              }
            else {

              if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__IsRadioTokenRequested__getNow()) {
                  ;
                  if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioOff__isOff()) {
                      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__stopAllAlarms();

                      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lock = FALSE;
                      ;
                      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioToken__release();
                      {
#line 418
                        __nesc_atomic_end(__nesc_atomic); 
#line 418
                        return;
                      }
                    }
                  else {
#line 420
                    next = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SWITCH_OFF;
                    }
                }
              else {




                if (
#line 425
                /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__battLifeExtDuration() > 0 && 
                /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__TimeCalc__hasExpired(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__sfStartTime(), 
                /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__battLifeExtDuration()) && 
                !/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__IsRxEnableActive__getNow() && !/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__macRxOnWhenIdle) {
                    ;
                    next = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__trySwitchOff();
                  }
                else {

                  if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_currentFrame != (void *)0) {
                      ;
                      next = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__tryTransmit();
                    }
                  else {

                    if ((/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__COORD_ROLE || /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__IsRxEnableActive__getNow()) || /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__macRxOnWhenIdle) {
                        ;
                        next = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__tryReceive();
                        if (next == /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__DO_NOTHING) {


                            /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__wasRxEnabledTask__postTask();
                          }
                      }
                    else 

                      {
                        ;
                        next = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__trySwitchOff();
                      }
                    }
                  }
                }
              }
            }
          }
        }
#line 457
      if (next == /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__DO_NOTHING) {
        /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lock = FALSE;
        }
    }
#line 460
    __nesc_atomic_end(__nesc_atomic); }

  switch (next) 
    {
      case /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SWITCH_OFF: while (!(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioOff__off() == SUCCESS)) {
#line 464
            break;
          }
#line 464
      ;
#line 464
      break;
      case /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__WAIT_FOR_RXDONE: break;
      case /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__WAIT_FOR_TXDONE: break;
      case /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__DO_NOTHING: break;
    }
}

# 162 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static bool /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__isOwner(uint8_t id)
#line 162
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 163
    {
      if (/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId == id && /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state == /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_BUSY) {
          unsigned char __nesc_temp = 
#line 164
          TRUE;

          {
#line 164
            __nesc_atomic_end(__nesc_atomic); 
#line 164
            return __nesc_temp;
          }
        }
      else 
#line 165
        {
          unsigned char __nesc_temp = 
#line 165
          FALSE;

          {
#line 165
            __nesc_atomic_end(__nesc_atomic); 
#line 165
            return __nesc_temp;
          }
        }
    }
#line 168
    __nesc_atomic_end(__nesc_atomic); }
}

# 549 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static bool PibP__TimeCalc__hasExpired(uint32_t t0, uint32_t dt)
{

  uint32_t now = PibP__LocalTime__get();
#line 552
  uint32_t elapsed;

#line 553
  if (now >= t0) {
    elapsed = now - t0;
    }
  else {
#line 556
    elapsed = ~(t0 - now) + 1;
    }
#line 557
  return elapsed >= dt;
}

# 86 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static bool Alarm32khzTo62500hzTransformC__AlarmFrom__default__isRunning(uint8_t num)
#line 86
{
#line 86
  return FALSE;
}

# 88 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static bool Alarm32khzTo62500hzTransformC__AlarmFrom__isRunning(uint8_t arg_0x2ab71e87ac38){
#line 88
  unsigned char __nesc_result;
#line 88

#line 88
  switch (arg_0x2ab71e87ac38) {
#line 88
    case /*Ieee802154BeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID:
#line 88
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__isRunning(/*Ieee802154BeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID);
#line 88
      break;
#line 88
    case /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID:
#line 88
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__isRunning(/*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID);
#line 88
      break;
#line 88
    case /*Ieee802154BeaconEnabledC.MACAlarm1*/Alarm62500hz32VirtualizedC__2__CLIENT_ID:
#line 88
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__isRunning(/*Ieee802154BeaconEnabledC.MACAlarm1*/Alarm62500hz32VirtualizedC__2__CLIENT_ID);
#line 88
      break;
#line 88
    case /*Ieee802154BeaconEnabledC.MACAlarm2*/Alarm62500hz32VirtualizedC__3__CLIENT_ID:
#line 88
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__isRunning(/*Ieee802154BeaconEnabledC.MACAlarm2*/Alarm62500hz32VirtualizedC__3__CLIENT_ID);
#line 88
      break;
#line 88
    case /*Ieee802154BeaconEnabledC.MACAlarm3*/Alarm62500hz32VirtualizedC__4__CLIENT_ID:
#line 88
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__isRunning(/*Ieee802154BeaconEnabledC.MACAlarm3*/Alarm62500hz32VirtualizedC__4__CLIENT_ID);
#line 88
      break;
#line 88
    case /*Ieee802154BeaconEnabledC.MACAlarm4*/Alarm62500hz32VirtualizedC__5__CLIENT_ID:
#line 88
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__isRunning(/*Ieee802154BeaconEnabledC.MACAlarm4*/Alarm62500hz32VirtualizedC__5__CLIENT_ID);
#line 88
      break;
#line 88
    case /*Ieee802154BeaconEnabledC.MACAlarm5*/Alarm62500hz32VirtualizedC__6__CLIENT_ID:
#line 88
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__isRunning(/*Ieee802154BeaconEnabledC.MACAlarm5*/Alarm62500hz32VirtualizedC__6__CLIENT_ID);
#line 88
      break;
#line 88
    case /*Ieee802154BeaconEnabledC.MACAlarm6*/Alarm62500hz32VirtualizedC__7__CLIENT_ID:
#line 88
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__isRunning(/*Ieee802154BeaconEnabledC.MACAlarm6*/Alarm62500hz32VirtualizedC__7__CLIENT_ID);
#line 88
      break;
#line 88
    case /*Ieee802154BeaconEnabledC.MACAlarm7*/Alarm62500hz32VirtualizedC__8__CLIENT_ID:
#line 88
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__isRunning(/*Ieee802154BeaconEnabledC.MACAlarm7*/Alarm62500hz32VirtualizedC__8__CLIENT_ID);
#line 88
      break;
#line 88
    case /*Ieee802154BeaconEnabledC.MACAlarm8*/Alarm62500hz32VirtualizedC__9__CLIENT_ID:
#line 88
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__isRunning(/*Ieee802154BeaconEnabledC.MACAlarm8*/Alarm62500hz32VirtualizedC__9__CLIENT_ID);
#line 88
      break;
#line 88
    case /*Ieee802154BeaconEnabledC.MACAlarm9*/Alarm62500hz32VirtualizedC__10__CLIENT_ID:
#line 88
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__isRunning(/*Ieee802154BeaconEnabledC.MACAlarm9*/Alarm62500hz32VirtualizedC__10__CLIENT_ID);
#line 88
      break;
#line 88
    case /*Ieee802154BeaconEnabledC.MACAlarm10*/Alarm62500hz32VirtualizedC__11__CLIENT_ID:
#line 88
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__isRunning(/*Ieee802154BeaconEnabledC.MACAlarm10*/Alarm62500hz32VirtualizedC__11__CLIENT_ID);
#line 88
      break;
#line 88
    case /*Ieee802154BeaconEnabledC.MACAlarm11*/Alarm62500hz32VirtualizedC__12__CLIENT_ID:
#line 88
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__isRunning(/*Ieee802154BeaconEnabledC.MACAlarm11*/Alarm62500hz32VirtualizedC__12__CLIENT_ID);
#line 88
      break;
#line 88
    case /*Ieee802154BeaconEnabledC.MACAlarm12*/Alarm62500hz32VirtualizedC__13__CLIENT_ID:
#line 88
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__isRunning(/*Ieee802154BeaconEnabledC.MACAlarm12*/Alarm62500hz32VirtualizedC__13__CLIENT_ID);
#line 88
      break;
#line 88
    case /*Ieee802154BeaconEnabledC.MACAlarm13*/Alarm62500hz32VirtualizedC__14__CLIENT_ID:
#line 88
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__isRunning(/*Ieee802154BeaconEnabledC.MACAlarm13*/Alarm62500hz32VirtualizedC__14__CLIENT_ID);
#line 88
      break;
#line 88
    case /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__15__CLIENT_ID:
#line 88
      __nesc_result = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__isRunning(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__15__CLIENT_ID);
#line 88
      break;
#line 88
    default:
#line 88
      __nesc_result = Alarm32khzTo62500hzTransformC__AlarmFrom__default__isRunning(arg_0x2ab71e87ac38);
#line 88
      break;
#line 88
    }
#line 88

#line 88
  return __nesc_result;
#line 88
}
#line 88
# 179 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static bool /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__isRunning(uint8_t id)
#line 179
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 180
    {
      unsigned char __nesc_temp = 
#line 180
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id];

      {
#line 180
        __nesc_atomic_end(__nesc_atomic); 
#line 180
        return __nesc_temp;
      }
    }
#line 182
    __nesc_atomic_end(__nesc_atomic); }
}

# 206 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static bool RadioControlImplP__MacRadioOff__isOff(uint8_t client)
{
  if (client == RadioControlImplP__ArbiterInfo__userId()) {
    return RadioControlImplP__PhyRadioOff__isOff();
    }
  else {
#line 211
    return EBUSY;
    }
}

# 151 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static uint8_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ArbiterInfo__userId(void )
#line 151
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 152
    {
      if (/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state != /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_BUSY) 
        {
          unsigned char __nesc_temp = 
#line 154
          /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__NO_RES;

          {
#line 154
            __nesc_atomic_end(__nesc_atomic); 
#line 154
            return __nesc_temp;
          }
        }
#line 155
      {
        unsigned char __nesc_temp = 
#line 155
        /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId;

        {
#line 155
          __nesc_atomic_end(__nesc_atomic); 
#line 155
          return __nesc_temp;
        }
      }
    }
#line 158
    __nesc_atomic_end(__nesc_atomic); }
}

# 554 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxWaitAlarm__fired(void )
{
  if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__DEVICE_ROLE && (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_indirectTxPending || /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_broadcastRxPending)) {
    /* atomic removed: atomic calls only */
#line 557
    {
      if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_indirectTxPending) {
          /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_indirectTxPending = FALSE;
          /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__signalTxDoneTask__postTask();
        }
      else {
#line 561
        if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_broadcastRxPending) {
            /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_broadcastRxPending = FALSE;
            /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__updateState();
          }
        }
    }
    }
}

#line 704
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__restoreFrameFromBackup(void )
{
  ieee154_cap_frame_backup_t *backup = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameRestore__getNow();

#line 707
  if (backup != (void *)0) {
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_currentFrame = backup->frame;
      memcpy(&/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_csma, & backup->csma, sizeof(ieee154_csma_t ));
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_transactionTime = backup->transactionTime;
    }
}

# 121 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__transferTo(uint8_t fromID, uint8_t toID)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 123
    {
      if (/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ArbiterInfo__userId() == fromID) {
          /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__unconfigure(fromID);
          /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__configure(/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId);
          /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId = toID;
          /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__transferredFrom(toID, fromID);
          {
            unsigned char __nesc_temp = 
#line 129
            SUCCESS;

            {
#line 129
              __nesc_atomic_end(__nesc_atomic); 
#line 129
              return __nesc_temp;
            }
          }
        }
    }
#line 133
    __nesc_atomic_end(__nesc_atomic); }
#line 132
  return FAIL;
}

# 67 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static void Alarm32khzTo62500hzTransformC__Alarm__startAt(uint8_t num, uint32_t t0, uint32_t dt)
#line 67
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 69
    {
      uint32_t now = Alarm32khzTo62500hzTransformC__Alarm__getNow(num);
#line 70
      uint32_t elapsed;

#line 71
      if (t0 < now) {
        elapsed = now - t0;
        }
      else {
#line 74
        elapsed = ~(t0 - now) + 1;
        }
#line 75
      if (elapsed > dt) {
        dt = elapsed;
        }
#line 77
      dt -= elapsed;
      Alarm32khzTo62500hzTransformC__Alarm__start(num, dt);
    }
#line 79
    __nesc_atomic_end(__nesc_atomic); }
}



static void Alarm32khzTo62500hzTransformC__AlarmFrom__default__start(uint8_t num, uint32_t dt)
#line 84
{
}

# 66 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__AlarmFrom__start(uint8_t arg_0x2ab71e87ac38, Alarm32khzTo62500hzTransformC__AlarmFrom__size_type dt){
#line 66
  switch (arg_0x2ab71e87ac38) {
#line 66
    case /*Ieee802154BeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*Ieee802154BeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID, dt);
#line 66
      break;
#line 66
    case /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID, dt);
#line 66
      break;
#line 66
    case /*Ieee802154BeaconEnabledC.MACAlarm1*/Alarm62500hz32VirtualizedC__2__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*Ieee802154BeaconEnabledC.MACAlarm1*/Alarm62500hz32VirtualizedC__2__CLIENT_ID, dt);
#line 66
      break;
#line 66
    case /*Ieee802154BeaconEnabledC.MACAlarm2*/Alarm62500hz32VirtualizedC__3__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*Ieee802154BeaconEnabledC.MACAlarm2*/Alarm62500hz32VirtualizedC__3__CLIENT_ID, dt);
#line 66
      break;
#line 66
    case /*Ieee802154BeaconEnabledC.MACAlarm3*/Alarm62500hz32VirtualizedC__4__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*Ieee802154BeaconEnabledC.MACAlarm3*/Alarm62500hz32VirtualizedC__4__CLIENT_ID, dt);
#line 66
      break;
#line 66
    case /*Ieee802154BeaconEnabledC.MACAlarm4*/Alarm62500hz32VirtualizedC__5__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*Ieee802154BeaconEnabledC.MACAlarm4*/Alarm62500hz32VirtualizedC__5__CLIENT_ID, dt);
#line 66
      break;
#line 66
    case /*Ieee802154BeaconEnabledC.MACAlarm5*/Alarm62500hz32VirtualizedC__6__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*Ieee802154BeaconEnabledC.MACAlarm5*/Alarm62500hz32VirtualizedC__6__CLIENT_ID, dt);
#line 66
      break;
#line 66
    case /*Ieee802154BeaconEnabledC.MACAlarm6*/Alarm62500hz32VirtualizedC__7__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*Ieee802154BeaconEnabledC.MACAlarm6*/Alarm62500hz32VirtualizedC__7__CLIENT_ID, dt);
#line 66
      break;
#line 66
    case /*Ieee802154BeaconEnabledC.MACAlarm7*/Alarm62500hz32VirtualizedC__8__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*Ieee802154BeaconEnabledC.MACAlarm7*/Alarm62500hz32VirtualizedC__8__CLIENT_ID, dt);
#line 66
      break;
#line 66
    case /*Ieee802154BeaconEnabledC.MACAlarm8*/Alarm62500hz32VirtualizedC__9__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*Ieee802154BeaconEnabledC.MACAlarm8*/Alarm62500hz32VirtualizedC__9__CLIENT_ID, dt);
#line 66
      break;
#line 66
    case /*Ieee802154BeaconEnabledC.MACAlarm9*/Alarm62500hz32VirtualizedC__10__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*Ieee802154BeaconEnabledC.MACAlarm9*/Alarm62500hz32VirtualizedC__10__CLIENT_ID, dt);
#line 66
      break;
#line 66
    case /*Ieee802154BeaconEnabledC.MACAlarm10*/Alarm62500hz32VirtualizedC__11__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*Ieee802154BeaconEnabledC.MACAlarm10*/Alarm62500hz32VirtualizedC__11__CLIENT_ID, dt);
#line 66
      break;
#line 66
    case /*Ieee802154BeaconEnabledC.MACAlarm11*/Alarm62500hz32VirtualizedC__12__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*Ieee802154BeaconEnabledC.MACAlarm11*/Alarm62500hz32VirtualizedC__12__CLIENT_ID, dt);
#line 66
      break;
#line 66
    case /*Ieee802154BeaconEnabledC.MACAlarm12*/Alarm62500hz32VirtualizedC__13__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*Ieee802154BeaconEnabledC.MACAlarm12*/Alarm62500hz32VirtualizedC__13__CLIENT_ID, dt);
#line 66
      break;
#line 66
    case /*Ieee802154BeaconEnabledC.MACAlarm13*/Alarm62500hz32VirtualizedC__14__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*Ieee802154BeaconEnabledC.MACAlarm13*/Alarm62500hz32VirtualizedC__14__CLIENT_ID, dt);
#line 66
      break;
#line 66
    case /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__15__CLIENT_ID:
#line 66
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__start(/*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__15__CLIENT_ID, dt);
#line 66
      break;
#line 66
    default:
#line 66
      Alarm32khzTo62500hzTransformC__AlarmFrom__default__start(arg_0x2ab71e87ac38, dt);
#line 66
      break;
#line 66
    }
#line 66
}
#line 66
# 183 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__startAt(uint8_t id, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type t0, /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt)
#line 183
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 184
    {
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].t0 = t0;
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].dt = dt;
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset[id] = TRUE;
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__setNextAlarm();
    }
#line 189
    __nesc_atomic_end(__nesc_atomic); }
}

#line 87
static void /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__setNextAlarm(void )
#line 87
{
  if (! /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.is_signaling) {








      const /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type now = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__getNow();
      const /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__alarm_t *pEnd = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm + /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__NUM_ALARMS;
      bool isset = FALSE;
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__alarm_t *p = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm;
      bool *pset = /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.isset;
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type dt = (/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type )0 - (/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type )1;

      for (; p != pEnd; p++, pset++) {
          if (*pset) {
              /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type elapsed = now - p->t0;

#line 107
              if (p->dt <= elapsed) {
                  p->t0 += p->dt;
                  p->dt = 0;
                }
              else {
                  p->t0 = now;
                  p->dt -= elapsed;
                }

              if (p->dt <= dt) {
                  dt = p->dt;
                  isset = TRUE;
                }
            }
        }

      if (isset) {




          if (dt & ((/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type )1 << (8 * sizeof(/*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type ) - 1))) {
            dt >>= 1;
            }
          /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__startAt(now, dt);
        }
      else {
          /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__AlarmFrom__stop();
        }
    }
}

# 107 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static void /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__set_alarm(void )
{
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__to_size_type now = /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__Counter__get();
#line 109
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__to_size_type expires;
#line 109
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__to_size_type remaining;




  expires = /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__m_t0 + /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__m_dt;


  remaining = (/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__to_size_type )(expires - now);


  if (/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__m_t0 <= now) 
    {
      if (expires >= /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__MAX_DELAY) 
    {
      /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__m_t0 = now + /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__MAX_DELAY;
      /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__m_dt = remaining - /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__MAX_DELAY;
      remaining = /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__MAX_DELAY;
    }
  else 
    {
      /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__m_t0 += /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__m_dt;
      /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__m_dt = 0;
    }
  /*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__AlarmFrom__startAt((/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__from_size_type )now << 0, 
  (/*Alarm32khz32VirtualizedP.Alarm32khz32C.Transform32*/TransformAlarmC__1__from_size_type )remaining << 0);
}

# 221 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static void BeaconSynchronizeP__trackNextBeacon(void )
{
  bool missed = FALSE;

  if (BeaconSynchronizeP__getMode() == BeaconSynchronizeP__MODE_INACTIVE) {

      ;
      BeaconSynchronizeP__RadioToken__release();
      return;
    }

  if (BeaconSynchronizeP__getRxState() != BeaconSynchronizeP__RX_FIRST_SCAN) {

      ;



      BeaconSynchronizeP__setRxState(BeaconSynchronizeP__RX_PREPARE);

      while (BeaconSynchronizeP__TimeCalc__hasExpired(BeaconSynchronizeP__m_lastBeaconRxTime, BeaconSynchronizeP__m_dt)) {
          ;

          missed = TRUE;
          BeaconSynchronizeP__m_dt += BeaconSynchronizeP__getBeaconInterval(BeaconSynchronizeP__m_beaconOrder);
          BeaconSynchronizeP__m_numBeaconsMissed++;
        }

      if (BeaconSynchronizeP__m_numBeaconsMissed >= IEEE154_aMaxLostBeacons) {
          ;
          BeaconSynchronizeP__processBeaconTask__postTask();
          return;
        }

      if (missed) {

          BeaconSynchronizeP__RadioToken__request();
          ;
          BeaconSynchronizeP__RadioToken__release();
          return;
        }
    }

  if (BeaconSynchronizeP__RadioOff__isOff()) {
    BeaconSynchronizeP__RadioOff__offDone();
    }
  else {
#line 265
    if (BeaconSynchronizeP__RadioOff__off() != SUCCESS) {
      while (!0) {
#line 266
          break;
        }
      }
    }
#line 266
  ;
}

# 98 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__release(uint8_t id)
#line 98
{
  bool released = FALSE;

#line 100
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 100
    {
      if (/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state == /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_BUSY && /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId == id) {
          if (/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__isEmpty() == FALSE) {
              /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__reqResId = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__dequeue();
              /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_GRANTING;
              /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__postTask();
            }
          else {
              /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__NO_RES;
              /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_IDLE;
            }
          released = TRUE;
        }
    }
#line 113
    __nesc_atomic_end(__nesc_atomic); }
  if (released == TRUE) {
      /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceConfigure__unconfigure(id);
      return SUCCESS;
    }
  return FAIL;
}

# 75 "/usr/src/tinyos/tos/system/RoundRobinResourceQueueC.nc"
static bool /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__RoundRobinQueue__isEnqueued(resource_client_id_t id)
#line 75
{
  return /*RadioControlP.Queue*/RoundRobinResourceQueueC__0__resQ[id / 8] & (1 << id % 8);
}

# 548 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static uint32_t BeaconSynchronizeP__getBeaconInterval(ieee154_macBeaconOrder_t BO)
{
  if (BO >= 15) {
    BO = 14;
    }
#line 552
  return ((uint32_t )1 << BO) * (uint32_t )IEEE154_aBaseSuperframeDuration;
}

# 72 "/usr/src/tinyos/tos/lib/mac/tkn154/SimpleTransferArbiterP.nc"
static error_t /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Resource__request(uint8_t id)
#line 72
{
  /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__ResourceRequested__requested(/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__resId);
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 74
    {
      if (/*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state == /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_IDLE) {
          /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__state = /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__RES_GRANTING;
          /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__reqResId = id;
          /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__grantedTask__postTask();
          {
            unsigned char __nesc_temp = 
#line 79
            SUCCESS;

            {
#line 79
              __nesc_atomic_end(__nesc_atomic); 
#line 79
              return __nesc_temp;
            }
          }
        }
#line 81
      {
        unsigned char __nesc_temp = 
#line 81
        /*RadioControlP.Arbiter*/SimpleTransferArbiterP__0__Queue__enqueue(id);

        {
#line 81
          __nesc_atomic_end(__nesc_atomic); 
#line 81
          return __nesc_temp;
        }
      }
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
}

# 269 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static void BeaconSynchronizeP__RadioOff__offDone(void )
{
  uint32_t delay = IEEE154_RADIO_RX_DELAY + 20;

  if (BeaconSynchronizeP__getRxState() == BeaconSynchronizeP__RX_FIRST_SCAN) {

      BeaconSynchronizeP__BeaconRx__enableRx(0, 0);
    }
  else {
#line 276
    if (BeaconSynchronizeP__getRxState() == BeaconSynchronizeP__RX_PREPARE) {
        if (!BeaconSynchronizeP__TimeCalc__hasExpired(BeaconSynchronizeP__m_lastBeaconRxTime - delay, BeaconSynchronizeP__m_dt)) {
          BeaconSynchronizeP__TrackAlarm__startAt(BeaconSynchronizeP__m_lastBeaconRxTime - delay, BeaconSynchronizeP__m_dt);
          }
        else {
#line 280
          BeaconSynchronizeP__TrackAlarm__fired();
          }
      }
    else 
#line 281
      {
        BeaconSynchronizeP__processBeaconTask__postTask();
      }
    }
}

# 63 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static error_t RadioControlImplP__MacRx__enableRx(uint8_t client, uint32_t t0, uint32_t dt)
{
  if (client == RadioControlImplP__ArbiterInfo__userId()) {
    return RadioControlImplP__PhyRx__enableRx(t0, dt);
    }
  else 
#line 67
    {
      while (!0) {
#line 68
          break;
        }
#line 68
      ;
      return IEEE154_TRANSACTION_OVERFLOW;
    }
}

# 143 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static error_t CC2420ReceiveP__AsyncSplitControl__start(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 145
    {
      if (!CC2420ReceiveP__FIFO__get() && !CC2420ReceiveP__FIFOP__get()) {




          {
            unsigned char __nesc_temp = 
#line 151
            FAIL;

            {
#line 151
              __nesc_atomic_end(__nesc_atomic); 
#line 151
              return __nesc_temp;
            }
          }
        }
#line 153
      while (!(CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED)) {
#line 153
          break;
        }
#line 153
      ;
      CC2420ReceiveP__reset_state();
      CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
      CC2420ReceiveP__InterruptFIFOP__enableFallingEdge();
    }
#line 157
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 514
static void CC2420ReceiveP__reset_state(void )
#line 514
{
  CC2420ReceiveP__m_bytes_left = CC2420ReceiveP__RXFIFO_SIZE;
  /* atomic removed: atomic calls only */
#line 516
  CC2420ReceiveP__receivingPacket = FALSE;
  CC2420ReceiveP__m_timestamp_head = 0;
  CC2420ReceiveP__m_timestamp_size = 0;
  CC2420ReceiveP__m_missed_packets = 0;
}

# 145 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static error_t CC2420ControlP__Resource__immediateRequest(void )
#line 145
{
  error_t error = CC2420ControlP__SpiResource__immediateRequest();

#line 147
  if (error == SUCCESS) {
    }

  return error;
}

# 126 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__immediateRequest(uint8_t id)
#line 126
{
  error_t error;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 129
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) != SUCCESS) {
          {
            unsigned char __nesc_temp = 
#line 131
            EBUSY;

            {
#line 131
              __nesc_atomic_end(__nesc_atomic); 
#line 131
              return __nesc_temp;
            }
          }
        }
      if (CC2420SpiP__SpiResource__isOwner()) {
          CC2420SpiP__m_holder = id;
          error = SUCCESS;
        }
      else {
#line 139
        if ((error = CC2420SpiP__SpiResource__immediateRequest()) == SUCCESS) {
            CC2420SpiP__m_holder = id;
          }
        else {
            CC2420SpiP__WorkingState__toIdle();
          }
        }
    }
#line 146
    __nesc_atomic_end(__nesc_atomic); }
#line 146
  return error;
}

# 96 "/usr/src/tinyos/tos/system/StateImplP.nc"
static error_t StateImplP__State__requestState(uint8_t id, uint8_t reqState)
#line 96
{
  error_t returnVal = FAIL;

  /* atomic removed: atomic calls only */
#line 98
  {
    if (reqState == StateImplP__S_IDLE || StateImplP__state[id] == StateImplP__S_IDLE) {
        StateImplP__state[id] = reqState;
        returnVal = SUCCESS;
      }
  }
  return returnVal;
}

# 148 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__Resource__isOwner(uint8_t id)
#line 148
{
  /* atomic removed: atomic calls only */
#line 149
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__resId == id && /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_BUSY) {
        unsigned char __nesc_temp = 
#line 150
        TRUE;

#line 150
        return __nesc_temp;
      }
    else 
#line 151
      {
        unsigned char __nesc_temp = 
#line 151
        FALSE;

#line 151
        return __nesc_temp;
      }
  }
}

# 131 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static void Atm128SpiP__startSpi(void )
#line 131
{
  Atm128SpiP__Spi__enableSpi(FALSE);
  /* atomic removed: atomic calls only */
#line 133
  {
    Atm128SpiP__Spi__initMaster();
    Atm128SpiP__Spi__enableInterrupt(FALSE);
    Atm128SpiP__Spi__setClockPolarity(FALSE);
    Atm128SpiP__Spi__setClockPhase(FALSE);
    Atm128SpiP__Spi__enableSpi(TRUE);
#line 160
    Atm128SpiP__Spi__setMasterDoubleSpeed(TRUE);
    Atm128SpiP__Spi__setClock(0);
  }

  Atm128SpiP__McuPowerState__update();
}

# 147 "/usr/src/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
static void HplAtm128SpiP__SPI__enableSpi(bool enabled)
#line 147
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 6;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 6);
      HplAtm128SpiP__Mcu__update();
    }
}

#line 132
static void HplAtm128SpiP__SPI__enableInterrupt(bool enabled)
#line 132
{
  if (enabled) {
      * (volatile uint8_t *)(0x0D + 0x20) |= 1 << 7;
      HplAtm128SpiP__Mcu__update();
    }
  else {
      * (volatile uint8_t *)(0x0D + 0x20) &= ~(1 << 7);
      HplAtm128SpiP__Mcu__update();
    }
}

# 403 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__rxSpiReserved(void )
{
  CC2420TKN154P__m_state = CC2420TKN154P__S_RX_PENDING;
  CC2420TKN154P__CC2420Config__sync();
  CC2420TKN154P__TxControl__stop();
  CC2420TKN154P__TxControl__start();
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 409
    {
      if (CC2420TKN154P__TimeCalc__hasExpired(CC2420TKN154P__m_t0, CC2420TKN154P__m_dt)) {
        CC2420TKN154P__ReliableWait__waitRxDone();
        }
      else {
#line 413
        CC2420TKN154P__ReliableWait__waitRx(CC2420TKN154P__m_t0, CC2420TKN154P__m_dt);
        }
    }
#line 415
    __nesc_atomic_end(__nesc_atomic); }
}

# 392 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static error_t CC2420ControlP__CC2420Config__sync(void )
#line 392
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 393
    {
      if (!CC2420ControlP__SpiResource__isOwner()) 
        {
          unsigned char __nesc_temp = 
#line 395
          FAIL;

          {
#line 395
            __nesc_atomic_end(__nesc_atomic); 
#line 395
            return __nesc_temp;
          }
        }
#line 396
      if (CC2420ControlP__m_needsSync) {
          CC2420ControlP__CSN__set();
          CC2420ControlP__CSN__clr();
          CC2420ControlP__SRFOFF__strobe();
          CC2420ControlP__CSN__set();
          CC2420ControlP__CSN__clr();
          CC2420ControlP__writeFsctrl();
          CC2420ControlP__writeMdmctrl0();
          CC2420ControlP__writeTxPower();
          CC2420ControlP__CSN__set();
          CC2420ControlP__CSN__clr();
          CC2420ControlP__writeId();
          CC2420ControlP__CSN__set();
          CC2420ControlP__m_needsSync = FALSE;
        }
    }
#line 411
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 178 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static bool CC2420SpiP__Resource__isOwner(uint8_t id)
#line 178
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 179
    {
      unsigned char __nesc_temp = 
#line 179
      CC2420SpiP__m_holder == id;

      {
#line 179
        __nesc_atomic_end(__nesc_atomic); 
#line 179
        return __nesc_temp;
      }
    }
#line 181
    __nesc_atomic_end(__nesc_atomic); }
}

#line 318
static cc2420_status_t CC2420SpiP__Strobe__strobe(uint8_t addr)
#line 318
{
  /* atomic removed: atomic calls only */
#line 319
  {
    if (CC2420SpiP__WorkingState__isIdle()) {
        {
          unsigned char __nesc_temp = 
#line 321
          0;

#line 321
          return __nesc_temp;
        }
      }
  }
  return CC2420SpiP__SpiByte__write(addr);
}

# 175 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static uint8_t Atm128SpiP__SpiByte__write(uint8_t tx)
#line 175
{






  Atm128SpiP__Spi__enableSpi(TRUE);
  Atm128SpiP__McuPowerState__update();


  Atm128SpiP__Spi__write(tx);

  while (!Atm128SpiP__Spi__isInterruptPending()) 
    ;

  return Atm128SpiP__Spi__read();
}

# 461 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static void CC2420ControlP__writeFsctrl(void )
#line 461
{
  uint8_t channel;

  /* atomic removed: atomic calls only */
#line 464
  {
    channel = CC2420ControlP__m_channel;
  }

  CC2420ControlP__FSCTRL__write((1 << CC2420_FSCTRL_LOCK_THR) | (((
  channel - 11) * 5 + 357) << CC2420_FSCTRL_FREQ));
}

# 305 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Reg__write(uint8_t addr, uint16_t data)
#line 305
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 306
    {
      if (CC2420SpiP__WorkingState__isIdle()) {
          {
            unsigned char __nesc_temp = 
#line 308
            0;

            {
#line 308
              __nesc_atomic_end(__nesc_atomic); 
#line 308
              return __nesc_temp;
            }
          }
        }
    }
#line 312
    __nesc_atomic_end(__nesc_atomic); }
#line 311
  CC2420SpiP__SpiByte__write(addr);
  CC2420SpiP__SpiByte__write(data >> 8);
  return CC2420SpiP__SpiByte__write(data & 0xff);
}

# 475 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static void CC2420ControlP__writeMdmctrl0(void )
#line 475
{
  /* atomic removed: atomic calls only */
#line 476
  {
    uint8_t _acceptReservedFrames = CC2420ControlP__acceptReservedFrames ? 1 : 0;
    uint8_t _panCoord = CC2420ControlP__m_isPanCoord ? 1 : 0;
    uint8_t _addressRecognition = CC2420ControlP__addressRecognition ? 1 : 0;
    uint8_t _autoAck = CC2420ControlP__autoAckEnabled && CC2420ControlP__hwAutoAckDefault ? 1 : 0;

#line 481
    CC2420ControlP__MDMCTRL0__write((((((((_acceptReservedFrames << CC2420_MDMCTRL0_RESERVED_FRAME_MODE) | (
    _panCoord << CC2420_MDMCTRL0_PAN_COORDINATOR)) | (
    _addressRecognition << CC2420_MDMCTRL0_ADR_DECODE)) | (
    2 << CC2420_MDMCTRL0_CCA_HYST)) | (
    CC2420ControlP__m_CCAMode << CC2420_MDMCTRL0_CCA_MOD)) | (
    1 << CC2420_MDMCTRL0_AUTOCRC)) | (
    _autoAck << CC2420_MDMCTRL0_AUTOACK)) | (
    2 << CC2420_MDMCTRL0_PREAMBLE_LENGTH));
  }
}







static void CC2420ControlP__writeId(void )
#line 498
{
  uint16_t bcnAccept = 0;
  nxle_uint16_t id[6];

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 502
    {
      CC2420ControlP__FrameUtility__copyLocalExtendedAddressLE((uint8_t *)&id);
      __nesc_hton_leuint16(id[4].nxdata, CC2420ControlP__m_pan);
      __nesc_hton_leuint16(id[5].nxdata, CC2420ControlP__m_short_addr);
    }
#line 506
    __nesc_atomic_end(__nesc_atomic); }
  if (CC2420ControlP__m_pan == 0xFFFF) {
    bcnAccept = 1;
    }

  CC2420ControlP__IOCFG0__write(((bcnAccept << CC2420_IOCFG0_BCN_ACCEPT) | (
  1 << CC2420_IOCFG0_FIFOP_POLARITY)) | (
  127 << CC2420_IOCFG0_FIFOP_THR));

  CC2420ControlP__IEEEADR__write(0, (uint8_t *)&id, sizeof id);
}

# 141 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static error_t CC2420TransmitP__AsyncStdControl__stop(void )
#line 141
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 142
    {
      CC2420TransmitP__m_state = CC2420TransmitP__S_STOPPED;
      CC2420TransmitP__BackoffAlarm__stop();
      CC2420TransmitP__CaptureSFD__disable();
      CC2420TransmitP__CSN__set();
    }
#line 147
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 130
static error_t CC2420TransmitP__AsyncStdControl__start(void )
#line 130
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 131
    {
      if (CC2420TransmitP__m_state == CC2420TransmitP__S_STARTED) 
        {
          unsigned char __nesc_temp = 
#line 133
          EALREADY;

          {
#line 133
            __nesc_atomic_end(__nesc_atomic); 
#line 133
            return __nesc_temp;
          }
        }
#line 134
      CC2420TransmitP__CaptureSFD__captureRisingEdge();
      CC2420TransmitP__m_state = CC2420TransmitP__S_STARTED;
      CC2420TransmitP__m_receiving = FALSE;
    }
#line 137
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 49 "/usr/src/tinyos/tos/chips/atm128/timer/Atm128GpioCaptureC.nc"
static error_t /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__enableCapture(uint8_t mode)
#line 49
{
  /* atomic removed: atomic calls only */
#line 50
  {
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__stop();
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__reset();
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__setEdge(mode);
    /*HplCC2420InterruptsC.CaptureSFDC*/Atm128GpioCaptureC__0__Atm128Capture__start();
  }
  return SUCCESS;
}

# 417 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__ReliableWait__waitRxDone(void )
{
  error_t result;

  /* atomic removed: atomic calls only */
#line 420
  {
    CC2420TKN154P__m_state = CC2420TKN154P__S_RECEIVING;
    result = CC2420TKN154P__CC2420Power__rxOn();
  }
  while (!(result == SUCCESS)) {
#line 424
      break;
    }
#line 424
  ;
  CC2420TKN154P__CC2420Tx__lockChipSpi();
  CC2420TKN154P__SpiResource__release();
  CC2420TKN154P__RadioRx__enableRxDone();
}

# 242 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static error_t CC2420ControlP__CC2420Power__rxOn(void )
#line 242
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 243
    {
      if (!CC2420ControlP__SpiResource__isOwner()) 
        {
          unsigned char __nesc_temp = 
#line 245
          FAIL;

          {
#line 245
            __nesc_atomic_end(__nesc_atomic); 
#line 245
            return __nesc_temp;
          }
        }
#line 246
      CC2420ControlP__CSN__set();
      CC2420ControlP__CSN__clr();
      CC2420ControlP__SRXON__strobe();
      CC2420ControlP__SACKPEND__strobe();
      CC2420ControlP__CSN__set();
    }
#line 251
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

#line 161
static error_t CC2420ControlP__Resource__release(void )
#line 161
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 162
    {

      {
        unsigned char __nesc_temp = 
#line 164
        CC2420ControlP__SpiResource__release();

        {
#line 164
          __nesc_atomic_end(__nesc_atomic); 
#line 164
          return __nesc_temp;
        }
      }
    }
#line 167
    __nesc_atomic_end(__nesc_atomic); }
}

# 149 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__release(uint8_t id)
#line 149
{
  uint8_t i;

#line 151
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 151
    {
      if (CC2420SpiP__m_holder != id) {
          {
            unsigned char __nesc_temp = 
#line 153
            FAIL;

            {
#line 153
              __nesc_atomic_end(__nesc_atomic); 
#line 153
              return __nesc_temp;
            }
          }
        }
#line 156
      CC2420SpiP__m_holder = CC2420SpiP__NO_HOLDER;
      if (!CC2420SpiP__m_requests) {
          CC2420SpiP__WorkingState__toIdle();
          CC2420SpiP__attemptRelease();
        }
      else {
          for (i = CC2420SpiP__m_holder + 1; ; i++) {
              i %= CC2420SpiP__RESOURCE_COUNT;

              if (CC2420SpiP__m_requests & (1 << i)) {
                  CC2420SpiP__m_holder = i;
                  CC2420SpiP__m_requests &= ~(1 << i);
                  CC2420SpiP__grant__postTask();
                  {
                    unsigned char __nesc_temp = 
#line 169
                    SUCCESS;

                    {
#line 169
                      __nesc_atomic_end(__nesc_atomic); 
#line 169
                      return __nesc_temp;
                    }
                  }
                }
            }
        }
    }
#line 175
    __nesc_atomic_end(__nesc_atomic); }
#line 175
  return SUCCESS;
}

#line 339
static error_t CC2420SpiP__attemptRelease(void )
#line 339
{


  if ((
#line 340
  CC2420SpiP__m_requests > 0
   || CC2420SpiP__m_holder != CC2420SpiP__NO_HOLDER)
   || !CC2420SpiP__WorkingState__isIdle()) {
      return FAIL;
    }
  /* atomic removed: atomic calls only */
  CC2420SpiP__release = TRUE;
  CC2420SpiP__ChipSpiResource__releasing();
  /* atomic removed: atomic calls only */
#line 348
  {
    if (CC2420SpiP__release) {
        CC2420SpiP__SpiResource__release();
        {
          unsigned char __nesc_temp = 
#line 351
          SUCCESS;

#line 351
          return __nesc_temp;
        }
      }
  }
  return EBUSY;
}

# 124 "/usr/src/tinyos/tos/system/SimpleArbiterP.nc"
static bool /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__ArbiterInfo__inUse(void )
#line 124
{
  /* atomic removed: atomic calls only */
#line 125
  {
    if (/*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__state == /*Atm128SpiC.Arbiter.Arbiter*/SimpleArbiterP__0__RES_IDLE) 
      {
        unsigned char __nesc_temp = 
#line 127
        FALSE;

#line 127
        return __nesc_temp;
      }
  }
#line 129
  return TRUE;
}

# 64 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm62500hz32P.nc"
static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__startAt(uint32_t t0, uint32_t dt)
#line 64
{
  /* atomic removed: atomic calls only */
  {
    uint32_t now = /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__getNow();
#line 67
    uint32_t elapsed;

#line 68
    if (t0 < now) {
      elapsed = now - t0;
      }
    else {
#line 71
      elapsed = ~(t0 - now) + 1;
      }
#line 72
    if (elapsed > dt) {
      dt = elapsed;
      }
#line 74
    dt -= elapsed;
    /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm62500hz32P*/Alarm62500hz32P__1__Alarm__start(dt);
  }
}

# 107 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static void /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__set_alarm(void )
{
  /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_size_type now = /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__Counter__get();
#line 109
  /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_size_type expires;
#line 109
  /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_size_type remaining;




  expires = /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__m_t0 + /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__m_dt;


  remaining = (/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__to_size_type )(expires - now);


  if (/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__m_t0 <= now) 
    {
      if (expires >= /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__MAX_DELAY) 
    {
      /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__m_t0 = now + /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__MAX_DELAY;
      /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__m_dt = remaining - /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__MAX_DELAY;
      remaining = /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__MAX_DELAY;
    }
  else 
    {
      /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__m_t0 += /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__m_dt;
      /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__m_dt = 0;
    }
  /*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__AlarmFrom__startAt((/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__from_size_type )now << 0, 
  (/*Ieee802154BeaconEnabledC.TKN154TimingPAlarm.Alarm32khz32C.Transform32*/TransformAlarmC__2__from_size_type )remaining << 0);
}

# 107 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static error_t CC2420SpiP__Resource__request(uint8_t id)
#line 107
{

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 109
    {
      if (CC2420SpiP__WorkingState__requestState(CC2420SpiP__S_BUSY) == SUCCESS) {
          CC2420SpiP__m_holder = id;
          if (CC2420SpiP__SpiResource__isOwner()) {
              CC2420SpiP__grant__postTask();
            }
          else {
              CC2420SpiP__SpiResource__request();
            }
        }
      else {
          CC2420SpiP__m_requests |= 1 << id;
        }
    }
#line 122
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 319 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static void BeaconSynchronizeP__TrackAlarm__fired(void )
{
  if (BeaconSynchronizeP__getRxState() == BeaconSynchronizeP__RX_PREPARE) {
      uint32_t maxBeaconJitter = 20;

#line 323
      if (maxBeaconJitter > BeaconSynchronizeP__m_dt) {
        maxBeaconJitter = BeaconSynchronizeP__m_dt;
        }
#line 325
      BeaconSynchronizeP__BeaconRx__enableRx(BeaconSynchronizeP__m_lastBeaconRxTime, BeaconSynchronizeP__m_dt - maxBeaconJitter);
    }
  else 
#line 326
    {
      error_t error = BeaconSynchronizeP__RadioOff__off();

#line 328
      while (!(BeaconSynchronizeP__getRxState() == BeaconSynchronizeP__RX_RECEIVING && error == SUCCESS)) {
#line 328
          break;
        }
#line 328
      ;
    }
}

# 190 "/usr/src/tinyos/tos/lib/mac/tkn154/RadioControlImplP.nc"
static error_t RadioControlImplP__MacRadioOff__off(uint8_t client)
{
  if (client == RadioControlImplP__ArbiterInfo__userId()) {
    return RadioControlImplP__PhyRadioOff__off();
    }
  else 
#line 194
    {
      while (!0) {
#line 195
          break;
        }
#line 195
      ;
      return EBUSY;
    }
}

# 172 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static error_t CC2420ReceiveP__AsyncSplitControl__stop(void )
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 174
    {
      if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) 
        {
          unsigned char __nesc_temp = 
#line 176
          EALREADY;

          {
#line 176
            __nesc_atomic_end(__nesc_atomic); 
#line 176
            return __nesc_temp;
          }
        }
      else 
#line 177
        {
          CC2420ReceiveP__m_stop = TRUE;
          CC2420ReceiveP__InterruptFIFOP__disable();
          if (!CC2420ReceiveP__receivingPacket) {
            CC2420ReceiveP__continueStop();
            }
        }
    }
#line 184
    __nesc_atomic_end(__nesc_atomic); }

  return SUCCESS;
}

static void CC2420ReceiveP__continueStop(void )
{
  /* atomic removed: atomic calls only */
#line 191
  {
    if (!CC2420ReceiveP__m_stop) {
        return;
      }
    CC2420ReceiveP__m_stop = FALSE;
    CC2420ReceiveP__m_state = CC2420ReceiveP__S_STOPPED;
  }
  CC2420ReceiveP__stopContinueTask__postTask();
}

# 505 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__next_state_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__tryReceive(void )
{
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__next_state_t next;

#line 508
  if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioRx__isReceiving()) {
    next = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__DO_NOTHING;
    }
  else {
#line 510
    if (!/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioOff__isOff()) {
      next = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SWITCH_OFF;
      }
    else 
#line 512
      {
        /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioRx__enableRx(0, 0);
        next = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__WAIT_FOR_RXDONE;
      }
    }
#line 516
  return next;
}

#line 471
static /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__next_state_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__tryTransmit(void )
{

  uint32_t capDuration = (uint32_t )/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__numCapSlots() * 
  (uint32_t )/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__sfSlotDuration();
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__next_state_t next;

  if (!/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioOff__isOff()) {
    next = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SWITCH_OFF;
    }
  else 
#line 480
    {
      uint32_t dtMax = capDuration - /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__guardTime() - /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_transactionTime;

      dtMax = dtMax + (IEEE154_aUnitBackoffPeriod - dtMax % IEEE154_aUnitBackoffPeriod);
      if (dtMax > capDuration) {
        dtMax = 0;
        }
#line 486
      if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__battLifeExtDuration() > 0) {

          uint16_t bleLen = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__battLifeExtDuration();

#line 489
          if (bleLen < dtMax) {
            dtMax = bleLen;
            }
        }
#line 492
      if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__TimeCalc__hasExpired(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__sfStartTime(), dtMax)) {
        next = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__DO_NOTHING;
        }
      else 
#line 494
        {
          error_t res;

#line 496
          res = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SlottedCsmaCa__transmit(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_currentFrame, &/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_csma, 
          /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SuperframeStructure__sfStartTime(), dtMax, /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_resume, /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_remainingBackoff);

          next = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__WAIT_FOR_TXDONE;
        }
    }
  return next;
}

# 722 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__loadTxFrame(ieee154_txframe_t *frame)
{
  if (CC2420TKN154P__SpiResource__isOwner() || CC2420TKN154P__SpiResource__immediateRequest() == SUCCESS) {
    CC2420TKN154P__txSpiReserved();
    }
  else {
#line 727
    CC2420TKN154P__SpiResource__request();
    }
}

#line 730
static void CC2420TKN154P__txSpiReserved(void )
{
  error_t result;

#line 733
  CC2420TKN154P__CC2420Config__sync();
  CC2420TKN154P__TxControl__start();
  result = CC2420TKN154P__CC2420Tx__loadTXFIFO(CC2420TKN154P__m_txframe);
  while (!(result == SUCCESS)) {
#line 736
      break;
    }
#line 736
  ;
}

# 214 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Fifo__write(uint8_t addr, uint8_t *data, 
uint8_t len)
#line 215
{

  uint8_t status = 0;

  /* atomic removed: atomic calls only */
#line 219
  {
    if (CC2420SpiP__WorkingState__isIdle()) {
        {
          unsigned char __nesc_temp = 
#line 221
          status;

#line 221
          return __nesc_temp;
        }
      }
  }
  CC2420SpiP__m_addr = addr;

  status = CC2420SpiP__SpiByte__write(CC2420SpiP__m_addr);
  CC2420SpiP__SpiPacket__send(data, (void *)0, len);

  return status;
}

# 330 "/usr/src/tinyos/tos/chips/atm128/spi/Atm128SpiP.nc"
static error_t Atm128SpiP__SpiPacket__send(uint8_t *writeBuf, 
uint8_t *readBuf, 
uint16_t bufLen)
#line 332
{
  uint8_t discard;

  /* atomic removed: atomic calls only */
#line 334
  {
    Atm128SpiP__len = bufLen;
    Atm128SpiP__txBuffer = writeBuf;
    Atm128SpiP__rxBuffer = readBuf;
    Atm128SpiP__pos = 0;
  }
  if (bufLen > 0) {
      discard = Atm128SpiP__Spi__read();
      return Atm128SpiP__sendNextPart();
    }
  else {
      Atm128SpiP__zeroTask__postTask();
      return SUCCESS;
    }
}

#line 251
static error_t Atm128SpiP__sendNextPart(void )
#line 251
{
  uint16_t end;
  uint16_t tmpPos;
  uint16_t myLen;
  uint8_t * tx;
  uint8_t * rx;

  /* atomic removed: atomic calls only */
#line 258
  {
    myLen = Atm128SpiP__len;
    tx = Atm128SpiP__txBuffer;
    rx = Atm128SpiP__rxBuffer;
    tmpPos = Atm128SpiP__pos;
    end = Atm128SpiP__pos + Atm128SpiP__SPI_ATOMIC_SIZE;
    end = end > Atm128SpiP__len ? Atm128SpiP__len : end;
  }

  for (; tmpPos < end - 1; tmpPos++) {
      uint8_t val;

#line 269
      if (tx != (void *)0) {
        val = Atm128SpiP__SpiByte__write(tx[tmpPos]);
        }
      else {
#line 272
        val = Atm128SpiP__SpiByte__write(0);
        }
      if (rx != (void *)0) {
          rx[tmpPos] = val;
        }
    }



  Atm128SpiP__Spi__enableInterrupt(TRUE);
  /* atomic removed: atomic calls only */
#line 282
  {
    if (tx != (void *)0) {
      Atm128SpiP__Spi__write(tx[tmpPos]);
      }
    else {
#line 286
      Atm128SpiP__Spi__write(0);
      }
    Atm128SpiP__pos = tmpPos;
  }


  return SUCCESS;
}

# 519 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__next_state_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__trySwitchOff(void )
{
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__next_state_t next;

#line 522
  if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioOff__isOff()) {
    next = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__DO_NOTHING;
    }
  else {
#line 525
    next = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SWITCH_OFF;
    }
#line 526
  return next;
}

# 298 "/usr/src/tinyos/tos/lib/mac/tkn154/AssociateP.nc"
static void AssociateP__AssociationResponseTx__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  ieee154_address_t srcAddress;
#line 300
  ieee154_address_t deviceAddress;

#line 301
  srcAddress.extendedAddress = AssociateP__LocalExtendedAddress__get();
  if ((txFrame->header->mhr[MHR_INDEX_FC2] & FC2_DEST_MODE_MASK) == FC2_DEST_MODE_SHORT) {
    deviceAddress.shortAddress = __nesc_ntoh_leuint16((* (nxle_uint16_t *)(&txFrame->header->mhr[MHR_INDEX_ADDRESS] + 2)).nxdata);
    }
  else {
#line 305
    AssociateP__FrameUtility__convertToNative(& deviceAddress.extendedAddress, &txFrame->header->mhr[MHR_INDEX_ADDRESS] + 2);
    }
#line 306
  txFrame->payload[0] = AssociateP__S_IDLE;
  AssociateP__TxControlPool__put((ieee154_txcontrol_t *)((uint8_t *)txFrame->header - (unsigned short )& ((ieee154_txcontrol_t *)0)->header));
  AssociateP__TxFramePool__put(txFrame);
  AssociateP__MLME_COMM_STATUS__indication(AssociateP__MLME_GET__macPANId(), ADDR_MODE_EXTENDED_ADDRESS, 
  srcAddress, ADDR_MODE_EXTENDED_ADDRESS, deviceAddress, 
  status, 0);
}

# 1030 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static void PibP__FrameUtility__convertToNative(uint64_t *dest, const uint8_t *srcLE)
{

  uint32_t lower = __nesc_ntoh_leuint32((* (nxle_uint32_t *)srcLE).nxdata);
  uint64_t upper = __nesc_ntoh_leuint32((* (nxle_uint32_t *)(srcLE + 4)).nxdata);

#line 1035
  *dest = (upper << 32) + lower;
}

# 177 "/usr/src/tinyos/tos/lib/mac/tkn154/DisassociateP.nc"
static void DisassociateP__DisassociationDirectTx__transmitDone(ieee154_txframe_t *data, ieee154_status_t status)
{

  uint8_t *mhr = ((ieee154_header_t *)data->header)->mhr;
#line 180
  uint8_t dstAddrOffset = 5;
  uint8_t DeviceAddrMode = (mhr[1] & FC2_DEST_MODE_MASK) >> FC2_DEST_MODE_OFFSET;
  uint16_t DevicePANID = __nesc_ntoh_leuint16((* (nxle_uint16_t *)&mhr[MHR_INDEX_ADDRESS]).nxdata);
  ieee154_address_t DeviceAddress;

  DisassociateP__FrameUtility__convertToNative(& DeviceAddress.extendedAddress, &mhr[dstAddrOffset]);
  DisassociateP__TxControlPool__put((ieee154_txcontrol_t *)((uint8_t *)data->header - (unsigned short )& ((ieee154_txcontrol_t *)0)->header));
  DisassociateP__TxFramePool__put(data);
  ;
  DisassociateP__m_disAssociationOngoing = FALSE;



  if (status == IEEE154_SUCCESS || status == IEEE154_NO_ACK) {
    DisassociateP__resetPanValuesInPib();
    }
#line 195
  DisassociateP__MLME_DISASSOCIATE__confirm(status, DeviceAddrMode, DevicePANID, DeviceAddress);
}

#line 228
static void DisassociateP__resetPanValuesInPib(void )
{




  DisassociateP__MLME_SET__macPANId(0xFFFF);
  DisassociateP__MLME_SET__macShortAddress(0xFFFF);
  DisassociateP__MLME_SET__macAssociatedPANCoord(FALSE);
  DisassociateP__MLME_SET__macCoordShortAddress(0xFFFF);
  DisassociateP__MLME_SET__macCoordExtendedAddress(0);
}

# 454 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static ieee154_status_t PibP__MLME_SET__macPANId(ieee154_macPANId_t value)
#line 454
{
  PibP__m_pib.macPANId = value;
  PibP__PIBUpdate__notify(IEEE154_macPANId, & PibP__m_pib.macPANId);
  return IEEE154_SUCCESS;
}

#line 1063
static void PibP__PIBUpdate__default__notify(uint8_t PIBAttributeID, const void *PIBAttributeValue)
#line 1063
{
}

# 74 "/usr/src/tinyos/tos/interfaces/Notify.nc"
static void PibP__PIBUpdate__notify(uint8_t arg_0x2ab71d3bed98, PibP__PIBUpdate__val_t val){
#line 74
  switch (arg_0x2ab71d3bed98) {
#line 74
    case IEEE154_phyCurrentChannel:
#line 74
      CC2420TKN154P__PIBUpdate__notify(IEEE154_phyCurrentChannel, val);
#line 74
      break;
#line 74
    case IEEE154_phyTransmitPower:
#line 74
      CC2420TKN154P__PIBUpdate__notify(IEEE154_phyTransmitPower, val);
#line 74
      break;
#line 74
    case IEEE154_phyCCAMode:
#line 74
      CC2420TKN154P__PIBUpdate__notify(IEEE154_phyCCAMode, val);
#line 74
      break;
#line 74
    case IEEE154_macAssociationPermit:
#line 74
      NoBeaconTransmitP__PIBUpdate__notify(IEEE154_macAssociationPermit, val);
#line 74
      break;
#line 74
    case IEEE154_macGTSPermit:
#line 74
      NoBeaconTransmitP__PIBUpdate__notify(IEEE154_macGTSPermit, val);
#line 74
      break;
#line 74
    case IEEE154_macPANId:
#line 74
      CC2420TKN154P__PIBUpdate__notify(IEEE154_macPANId, val);
#line 74
      break;
#line 74
    case IEEE154_macRxOnWhenIdle:
#line 74
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__PIBUpdateMacRxOnWhenIdle__notify(val);
#line 74
      /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__PIBUpdateMacRxOnWhenIdle__notify(val);
#line 74
      break;
#line 74
    case IEEE154_macShortAddress:
#line 74
      CC2420TKN154P__PIBUpdate__notify(IEEE154_macShortAddress, val);
#line 74
      break;
#line 74
    case IEEE154_macPanCoordinator:
#line 74
      CC2420TKN154P__PIBUpdate__notify(IEEE154_macPanCoordinator, val);
#line 74
      break;
#line 74
    default:
#line 74
      PibP__PIBUpdate__default__notify(arg_0x2ab71d3bed98, val);
#line 74
      break;
#line 74
    }
#line 74
}
#line 74
# 244 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__PIBUpdate__notify(uint8_t PIBAttribute, const void *PIBAttributeValue)
{
  uint8_t txpower;

#line 247
  switch (PIBAttribute) 
    {
      case IEEE154_macShortAddress: 
        CC2420TKN154P__CC2420Config__setShortAddr(* (ieee154_macShortAddress_t *)PIBAttributeValue);
      break;
      case IEEE154_macPANId: 
        CC2420TKN154P__CC2420Config__setPanAddr(* (ieee154_macPANId_t *)PIBAttributeValue);
      break;
      case IEEE154_phyCurrentChannel: 
        CC2420TKN154P__CC2420Config__setChannel(* (ieee154_phyCurrentChannel_t *)PIBAttributeValue);
      break;
      case IEEE154_macPanCoordinator: 
        CC2420TKN154P__CC2420Config__setPanCoordinator(* (ieee154_macPanCoordinator_t *)PIBAttributeValue);
      break;
      case IEEE154_phyTransmitPower: 

        txpower = * (ieee154_phyTransmitPower_t *)PIBAttributeValue & 0x3F;
      if (txpower & 0x20) {
        txpower |= 0xC0;
        }
#line 266
      CC2420TKN154P__CC2420Config__setTxPower(CC2420TKN154P__dBmToPA_LEVEL((int8_t )txpower));
      break;
      case IEEE154_phyCCAMode: 
        CC2420TKN154P__CC2420Config__setCCAMode(* (ieee154_phyCCAMode_t *)PIBAttributeValue);
      break;
    }
  if (CC2420TKN154P__m_state == CC2420TKN154P__S_RECEIVING || CC2420TKN154P__m_state == CC2420TKN154P__S_RX_PENDING) {
    CC2420TKN154P__configSyncTask__postTask();
    }
}

# 296 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static void CC2420ControlP__CC2420Config__setChannel(uint8_t channel)
#line 296
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 297
    {
      CC2420ControlP__m_needsSync = TRUE;
      CC2420ControlP__m_channel = channel;
    }
#line 300
    __nesc_atomic_end(__nesc_atomic); }
}

# 466 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static ieee154_status_t PibP__MLME_SET__macShortAddress(ieee154_macShortAddress_t value)
#line 466
{
  PibP__m_pib.macShortAddress = value;
  PibP__PIBUpdate__notify(IEEE154_macShortAddress, & PibP__m_pib.macShortAddress);
  return IEEE154_SUCCESS;
}

#line 418
static ieee154_status_t PibP__MLME_SET__macCoordShortAddress(ieee154_macCoordShortAddress_t value)
#line 418
{
  PibP__m_pib.macCoordShortAddress = value;
  PibP__PIBUpdate__notify(IEEE154_macCoordShortAddress, & PibP__m_pib.macCoordShortAddress);
  return IEEE154_SUCCESS;
}

#line 412
static ieee154_status_t PibP__MLME_SET__macCoordExtendedAddress(ieee154_macCoordExtendedAddress_t value)
#line 412
{
  PibP__m_pib.macCoordExtendedAddress = value;
  PibP__PIBUpdate__notify(IEEE154_macCoordExtendedAddress, & PibP__m_pib.macCoordExtendedAddress);
  return IEEE154_SUCCESS;
}

# 225 "/usr/src/tinyos/tos/lib/mac/tkn154/DataP.nc"
static void DataP__finishTxTransaction(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  uint8_t handle = txFrame->handle;
  uint32_t txTime = __nesc_ntoh_uint32(txFrame->metadata->timestamp.nxdata);
  message_t *msg = (message_t *)((uint8_t *)txFrame->header - (unsigned short )& ((message_t *)0)->header);

  DataP__TxFramePool__put(txFrame);
  DataP__MCPS_DATA__confirm(msg, handle, status, txTime);
}

# 540 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static uint32_t PibP__TimeCalc__timeElapsed(uint32_t t0, uint32_t t1)
{

  if (t0 <= t1) {
    return t1 - t0;
    }
  else {
#line 546
    return ~(t0 - t1) + 1;
    }
}

# 122 "/usr/src/tinyos/tos/lib/mac/tkn154/PollP.nc"
static ieee154_status_t PollP__DataRequest__poll(uint8_t client, uint8_t CoordAddrMode, 
uint16_t CoordPANId, uint8_t *CoordAddressLE, uint8_t srcAddrMode)
{
  ieee154_txframe_t *txFrame;
  ieee154_txcontrol_t *txControl;
  ieee154_status_t status = IEEE154_TRANSACTION_OVERFLOW;

  ;
  if (client == 2U && PollP__m_numPending != 0) {

      PollP__DataRequest__pollDone(client);
      return IEEE154_SUCCESS;
    }
  else {
#line 134
    if ((txFrame = PollP__TxFramePool__get()) != (void *)0) {
        if ((txControl = PollP__TxControlPool__get()) != (void *)0) {
            txFrame->header = & txControl->header;
            txFrame->metadata = & txControl->metadata;
            txFrame->handle = client;
            PollP__assembleDataRequestFrame(CoordAddrMode, CoordPANId, 
            CoordAddressLE, srcAddrMode, txFrame);
            if ((status = PollP__PollTx__transmit(txFrame)) != IEEE154_SUCCESS) {
                PollP__TxControlPool__put(txControl);
                PollP__TxFramePool__put(txFrame);
                ;
              }
            else {
#line 146
              PollP__m_numPending++;
              }
          }
        else 
#line 147
          {
            PollP__TxFramePool__put(txFrame);
          }
      }
    }
#line 151
  ;
  if (status != IEEE154_SUCCESS) {
    PollP__DataRequest__pollDone(client);
    }
#line 154
  return status;
}

# 222 "/usr/src/tinyos/tos/lib/mac/tkn154/AssociateP.nc"
static void AssociateP__DataRequest__pollDone(void )
{
  if (AssociateP__m_associationOngoing) {

      AssociateP__ResponseTimeout__stop();
      AssociateP__m_associationOngoing = FALSE;
      AssociateP__MLME_SET__macPANId(0xFFFF);
      AssociateP__MLME_ASSOCIATE__confirm(0xFFFF, IEEE154_NO_DATA, 0);
      ;
    }
}

# 154 "TestDeviceC.nc"
static void TestDeviceC__MLME_ASSOCIATE__confirm(
uint16_t AssocShortAddress, 
uint8_t status, 
ieee154_security_t *security)

{
  if (status == IEEE154_SUCCESS) {

      TestDeviceC__Leds__led1On();
      TestDeviceC__DisassociateTimer__startOneShot(312500U);
    }
  else 
#line 164
    {
      TestDeviceC__MLME_ASSOCIATE__request(
      TestDeviceC__m_PANDescriptor.LogicalChannel, 
      TestDeviceC__m_PANDescriptor.ChannelPage, 
      TestDeviceC__m_PANDescriptor.CoordAddrMode, 
      TestDeviceC__m_PANDescriptor.CoordPANId, 
      TestDeviceC__m_PANDescriptor.CoordAddress, 
      TestDeviceC__m_capabilityInformation, 
      (void *)0);
    }
}

# 91 "/usr/src/tinyos/tos/lib/mac/tkn154/AssociateP.nc"
static ieee154_status_t AssociateP__MLME_ASSOCIATE__request(
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
uint8_t CoordAddrMode, 
uint16_t CoordPANID, 
ieee154_address_t CoordAddress, 
ieee154_CapabilityInformation_t CapabilityInformation, 
ieee154_security_t *security)
{
  ieee154_status_t status = IEEE154_SUCCESS;
  ieee154_txframe_t *txFrame = 0;
  ieee154_txcontrol_t *txControl = 0;
  ieee154_address_t srcAddress;

  if (security && security->SecurityLevel) {
    status = IEEE154_UNSUPPORTED_SECURITY;
    }
  else {
#line 108
    if (((
#line 107
    ChannelPage != (IEEE154_SUPPORTED_CHANNELS >> 27) || LogicalChannel > 26) || 
    !(IEEE154_SUPPORTED_CHANNELS & ((uint32_t )1 << LogicalChannel))) || (
    CoordAddrMode != ADDR_MODE_SHORT_ADDRESS && CoordAddrMode != ADDR_MODE_EXTENDED_ADDRESS)) {
      status = IEEE154_INVALID_PARAMETER;
      }
    else {
#line 111
      if (AssociateP__m_associationOngoing || !(txFrame = AssociateP__TxFramePool__get())) {
        status = IEEE154_TRANSACTION_OVERFLOW;
        }
      else {
#line 113
        if (!(txControl = AssociateP__TxControlPool__get())) {
            AssociateP__TxFramePool__put(txFrame);
            status = IEEE154_TRANSACTION_OVERFLOW;
          }
        }
      }
    }
#line 117
  if (status == IEEE154_SUCCESS) {
      AssociateP__m_assocRespStatus = IEEE154_NO_DATA;
      AssociateP__m_shortAddress = 0xFFFF;
      AssociateP__MLME_SET__phyCurrentChannel(LogicalChannel);
      AssociateP__MLME_SET__macPANId(CoordPANID);
      AssociateP__m_coordAddrMode = CoordAddrMode;
      if (CoordAddrMode == ADDR_MODE_SHORT_ADDRESS) {
        AssociateP__MLME_SET__macCoordShortAddress(CoordAddress.shortAddress);
        }
      else {
#line 126
        AssociateP__MLME_SET__macCoordExtendedAddress(CoordAddress.extendedAddress);
        }
#line 127
      txFrame->header = & txControl->header;
      txFrame->metadata = & txControl->metadata;
      srcAddress.extendedAddress = AssociateP__LocalExtendedAddress__get();
      txFrame->headerLen = AssociateP__FrameUtility__writeHeader(
      txFrame->header->mhr, 
      CoordAddrMode, 
      CoordPANID, 
      &CoordAddress, 
      ADDR_MODE_EXTENDED_ADDRESS, 
      0xFFFF, 
      &srcAddress, 
      0);
      txFrame->header->mhr[MHR_INDEX_FC1] = FC1_ACK_REQUEST | FC1_FRAMETYPE_CMD;
      txFrame->header->mhr[MHR_INDEX_FC2] = FC2_SRC_MODE_EXTENDED | (
      CoordAddrMode == ADDR_MODE_SHORT_ADDRESS ? FC2_DEST_MODE_SHORT : FC2_DEST_MODE_EXTENDED);
      AssociateP__m_payloadAssocRequest[0] = CMD_FRAME_ASSOCIATION_REQUEST;
      AssociateP__m_payloadAssocRequest[1] = * (uint8_t *)&CapabilityInformation;
      txFrame->payload = AssociateP__m_payloadAssocRequest;
      txFrame->payloadLen = 2;
      AssociateP__m_associationOngoing = TRUE;
      if ((status = AssociateP__AssociationRequestTx__transmit(txFrame)) != IEEE154_SUCCESS) {
          AssociateP__m_associationOngoing = FALSE;
          AssociateP__TxFramePool__put(txFrame);
          AssociateP__TxControlPool__put(txControl);
        }
    }
  ;
  return status;
}

# 336 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static ieee154_status_t PibP__MLME_SET__phyCurrentChannel(ieee154_phyCurrentChannel_t value)
#line 336
{
  uint32_t i = 1;
  uint8_t k = value;

#line 339
  while (i && k) {
      i <<= 1;
      k -= 1;
    }
  if (!(IEEE154_SUPPORTED_CHANNELS & i)) {
    return IEEE154_INVALID_PARAMETER;
    }
#line 345
  PibP__m_pib.phyCurrentChannel = value;
  PibP__PIBUpdate__notify(IEEE154_phyCurrentChannel, & PibP__m_pib.phyCurrentChannel);
  return IEEE154_SUCCESS;
}

# 196 "/usr/src/tinyos/tos/lib/timer/VirtualizeAlarmC.nc"
static /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__Alarm__getAlarm(uint8_t id)
#line 196
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 197
    {
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__size_type __nesc_temp = 
#line 197
      /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].t0 + /*Alarm32khz32VirtualizedP.VirtualizeAlarmC*/VirtualizeAlarmC__0__m.alarm[id].dt;

      {
#line 197
        __nesc_atomic_end(__nesc_atomic); 
#line 197
        return __nesc_temp;
      }
    }
#line 199
    __nesc_atomic_end(__nesc_atomic); }
}

# 200 "/usr/src/tinyos/tos/lib/mac/tkn154/DisassociateP.nc"
static message_t *DisassociateP__DisassociationDirectRxFromCoord__received(message_t *frame)
{

  ieee154_address_t address;

  address.extendedAddress = DisassociateP__LocalExtendedAddress__get();
  DisassociateP__MLME_DISASSOCIATE__indication(address.extendedAddress, __nesc_ntoh_uint8(frame->data[1].nxdata), (void *)0);
  return frame;
}

# 747 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static message_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameRx__default__received(uint8_t client, message_t *data)
#line 747
{
#line 747
  return data;
}

# 43 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameRx.nc"
static message_t */*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameRx__received(uint8_t arg_0x2ab71d9d4020, message_t *frame){
#line 43
  nx_struct message_t *__nesc_result;
#line 43

#line 43
  switch (arg_0x2ab71d9d4020) {
#line 43
    case FC1_FRAMETYPE_DATA:
#line 43
      __nesc_result = DataP__DeviceCapRx__received(frame);
#line 43
      break;
#line 43
    case FC1_FRAMETYPE_CMD + CMD_FRAME_DISASSOCIATION_NOTIFICATION:
#line 43
      __nesc_result = DisassociateP__DisassociationDirectRxFromCoord__received(frame);
#line 43
      break;
#line 43
    case FC1_FRAMETYPE_CMD + CMD_FRAME_COORDINATOR_REALIGNMENT:
#line 43
      __nesc_result = BeaconSynchronizeP__CoordRealignmentRx__received(frame);
#line 43
      break;
#line 43
    default:
#line 43
      __nesc_result = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameRx__default__received(arg_0x2ab71d9d4020, frame);
#line 43
      break;
#line 43
    }
#line 43

#line 43
  return __nesc_result;
#line 43
}
#line 43
# 79 "TestDeviceC.nc"
static void TestDeviceC__startApp(void )
{
  ieee154_phyChannelsSupported_t channel;
  uint8_t scanDuration = BEACON_ORDER;


  channel = (uint32_t )1 << RADIO_CHANNEL;




  TestDeviceC__MLME_SET__macAutoRequest(FALSE);
  TestDeviceC__m_wasScanSuccessful = FALSE;
  TestDeviceC__MLME_SCAN__request(
  PASSIVE_SCAN, 
  channel, 
  scanDuration, 
  0x00, 
  0, 
  (void *)0, 
  0, 
  (void *)0, 
  (void *)0);
}

# 176 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static error_t /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__reset(error_t error)
{
  if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioToken__isOwner()) {
    return FAIL;
    }
#line 180
  if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_currentFrame) {
    /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameTx__transmitDone(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_currentFrame, error);
    }
#line 182
  if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lastFrame) {
    /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__FrameTx__transmitDone(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lastFrame, error);
    }
#line 184
  if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_bcastFrame) {
    /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__signalTxBroadcastDone(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_bcastFrame, error);
    }
#line 186
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_currentFrame = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lastFrame = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_bcastFrame = (void *)0;
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_macMaxFrameTotalWaitTime = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macMaxFrameTotalWaitTime();
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__stopAllAlarms();
  return SUCCESS;
}

# 107 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTxCsma__transmitDone(ieee154_txframe_t *txFrame, ieee154_status_t status)
{
  /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__resetTxDonePending();
  if (!/*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__size()) {
    return;
    }
#line 112
  /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__dequeue();
  /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTx__transmitDone(txFrame->client, txFrame, status);
  if (TRUE && status == IEEE154_NO_BEACON) {

      while (/*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__size()) {
          ieee154_txframe_t *frame = /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__Queue__dequeue();

#line 118
          /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTx__transmitDone(frame->client, frame, IEEE154_NO_BEACON);
        }
    }
  /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__txTask__postTask();
}

# 85 "/usr/src/tinyos/tos/system/QueueC.nc"
static /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__queue_t /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__dequeue(void )
#line 85
{
  /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__queue_t t = /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__head();

#line 87
  ;
  if (!/*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__Queue__empty()) {
      /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__head++;
      if (/*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__head == 4) {
#line 90
        /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__head = 0;
        }
#line 91
      /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__size--;
      /*TKN154BeaconEnabledP.DeviceCapQueueC*/QueueC__0__printQueue();
    }
  return t;
}

# 132 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchQueueP.nc"
static void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTx__default__transmitDone(uint8_t client, ieee154_txframe_t *txFrame, ieee154_status_t status)
#line 132
{
}

# 51 "/usr/src/tinyos/tos/lib/mac/tkn154/interfaces/private/FrameTx.nc"
static void /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTx__transmitDone(uint8_t arg_0x2ab71d974c68, ieee154_txframe_t *txFrame, ieee154_status_t status){
#line 51
  switch (arg_0x2ab71d974c68) {
#line 51
    case 1U:
#line 51
      AssociateP__AssociationRequestTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 3U:
#line 51
      DisassociateP__DisassociationToCoord__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 4U:
#line 51
      DataP__DeviceCapTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 6U:
#line 51
      PollP__PollTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    case 9U:
#line 51
      NoDeviceCfpP__GTSrequestTx__transmitDone(txFrame, status);
#line 51
      break;
#line 51
    default:
#line 51
      /*TKN154BeaconEnabledP.DeviceCapQueue*/DispatchQueueP__0__FrameTx__default__transmitDone(arg_0x2ab71d974c68, txFrame, status);
#line 51
      break;
#line 51
    }
#line 51
}
#line 51
# 105 "TestDeviceC.nc"
static message_t *TestDeviceC__MLME_BEACON_NOTIFY__indication(message_t *frame)
{

  ieee154_phyCurrentPage_t page = TestDeviceC__MLME_GET__phyCurrentPage();

  if (!TestDeviceC__m_wasScanSuccessful) {

      if (
#line 111
      TestDeviceC__BeaconFrame__parsePANDescriptor(
      frame, RADIO_CHANNEL, page, &TestDeviceC__m_PANDescriptor) == SUCCESS) {


          if (
#line 114
          TestDeviceC__m_PANDescriptor.CoordAddrMode == ADDR_MODE_SHORT_ADDRESS && 
          TestDeviceC__m_PANDescriptor.CoordPANId == PAN_ID && 
          TestDeviceC__m_PANDescriptor.CoordAddress.shortAddress == COORDINATOR_ADDRESS) {

              TestDeviceC__m_wasScanSuccessful = TRUE;
            }
        }
    }

  return frame;
}

# 969 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static error_t PibP__BeaconFrame__parsePANDescriptor(
message_t *frame, 
uint8_t LogicalChannel, 
uint8_t ChannelPage, 
ieee154_PANDescriptor_t *pdescriptor)
{
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;
  uint8_t offset;
  ieee154_metadata_t *metadata = (ieee154_metadata_t *)frame->metadata;

  if ((mhr[MHR_INDEX_FC1] & FC1_FRAMETYPE_MASK) != FC1_FRAMETYPE_BEACON || ((
  mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) != FC2_SRC_MODE_SHORT && (
  mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) != FC2_SRC_MODE_EXTENDED)) {
    return FAIL;
    }
  pdescriptor->CoordAddrMode = (mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) >> FC2_SRC_MODE_OFFSET;
  offset = MHR_INDEX_ADDRESS;
  pdescriptor->CoordPANId = __nesc_ntoh_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata);
  offset += sizeof(ieee154_macPANId_t );

  if ((mhr[MHR_INDEX_FC2] & FC2_SRC_MODE_MASK) == FC2_SRC_MODE_SHORT) {
    pdescriptor->CoordAddress.shortAddress = __nesc_ntoh_leuint16((* (nxle_uint16_t *)&mhr[offset]).nxdata);
    }
  else {
#line 992
    PibP__FrameUtility__convertToNative(& pdescriptor->CoordAddress.extendedAddress, &mhr[offset]);
    }
  pdescriptor->LogicalChannel = LogicalChannel;
  pdescriptor->ChannelPage = ChannelPage;
  ((uint8_t *)& pdescriptor->SuperframeSpec)[0] = __nesc_ntoh_uint8(frame->data[BEACON_INDEX_SF_SPEC1].nxdata);
  ((uint8_t *)& pdescriptor->SuperframeSpec)[1] = __nesc_ntoh_uint8(frame->data[BEACON_INDEX_SF_SPEC2].nxdata);
  pdescriptor->GTSPermit = __nesc_ntoh_uint8(frame->data[BEACON_INDEX_GTS_SPEC].nxdata) & GTS_SPEC_PERMIT ? 1 : 0;
  pdescriptor->LinkQuality = __nesc_ntoh_uint8(metadata->linkQuality.nxdata);
  pdescriptor->TimeStamp = __nesc_ntoh_uint32(metadata->timestamp.nxdata);

  pdescriptor->SecurityFailure = IEEE154_SUCCESS;
  pdescriptor->SecurityLevel = 0;
  pdescriptor->KeyIdMode = 0;
  pdescriptor->KeySource = 0;
  pdescriptor->KeyIndex = 0;



  return SUCCESS;
}

#line 953
static uint8_t PibP__BeaconFrame__getBeaconPayloadLength(message_t *frame)
{
  uint8_t *mhr = ((ieee154_header_t *)frame->header)->mhr;
  uint8_t len = ((ieee154_header_t *)frame->header)->length & FRAMECTL_LENGTH_MASK;

#line 957
  if ((mhr[MHR_INDEX_FC1] & FC1_FRAMETYPE_MASK) == FC1_FRAMETYPE_BEACON) {
      uint8_t *payload = PibP__BeaconFrame__getBeaconPayload(frame);

#line 959
      len = len - (payload - (uint8_t *)frame->data);
    }
  return len;
}

#line 876
static uint8_t PibP__getPendAddrSpecOffset(uint8_t *macPayloadField)
{
  uint8_t gtsDescriptorCount = macPayloadField[BEACON_INDEX_GTS_SPEC] & GTS_DESCRIPTOR_COUNT_MASK;

#line 879
  return BEACON_INDEX_GTS_SPEC + 1 + (gtsDescriptorCount > 0 ? 1 + gtsDescriptorCount * 3 : 0);
}

# 482 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static void CC2420ReceiveP__waitForNextPacket(void )
#line 482
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 483
    {
      if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED) {
          CC2420ReceiveP__SpiResource__release();
          {
#line 486
            __nesc_atomic_end(__nesc_atomic); 
#line 486
            return;
          }
        }
#line 488
      CC2420ReceiveP__receivingPacket = FALSE;
      if (CC2420ReceiveP__m_stop) {
          CC2420ReceiveP__continueStop();
          {
#line 491
            __nesc_atomic_end(__nesc_atomic); 
#line 491
            return;
          }
        }
      if ((CC2420ReceiveP__m_missed_packets && CC2420ReceiveP__FIFO__get()) || !CC2420ReceiveP__FIFOP__get()) {

          if (CC2420ReceiveP__m_missed_packets) {
              CC2420ReceiveP__m_missed_packets--;
            }

          CC2420ReceiveP__beginReceive();
        }
      else {

          CC2420ReceiveP__m_state = CC2420ReceiveP__S_STARTED;
          CC2420ReceiveP__m_missed_packets = 0;
          CC2420ReceiveP__SpiResource__release();
        }
    }
#line 508
    __nesc_atomic_end(__nesc_atomic); }
}

#line 430
static void CC2420ReceiveP__beginReceive(void )
#line 430
{
  /* atomic removed: atomic calls only */
#line 431
  {
    if (CC2420ReceiveP__m_state == CC2420ReceiveP__S_STOPPED || CC2420ReceiveP__m_stop) {
        return;
      }
    CC2420ReceiveP__m_state = CC2420ReceiveP__S_RX_LENGTH;
    CC2420ReceiveP__receivingPacket = TRUE;

    if (CC2420ReceiveP__SpiResource__isOwner()) {
        CC2420ReceiveP__receive();
      }
    else {
#line 441
      if (CC2420ReceiveP__SpiResource__immediateRequest() == SUCCESS) {
          CC2420ReceiveP__receive();
        }
      else {
          CC2420ReceiveP__SpiResource__request();
        }
      }
  }
}

#line 470
static void CC2420ReceiveP__receive(void )
#line 470
{
  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__CSN__clr();

  CC2420ReceiveP__RXFIFO__beginRead(& ((ieee154_header_t *)CC2420ReceiveP__m_rxFramePtr->header)->length, 1);
}

# 329 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static void CC2420SpiP__SpiPacket__sendDone(uint8_t *tx_buf, uint8_t *rx_buf, 
uint16_t len, error_t error)
#line 330
{
  if (CC2420SpiP__m_addr & 0x40) {
      CC2420SpiP__Fifo__readDone(CC2420SpiP__m_addr & ~0x40, rx_buf, len, error);
    }
  else 
#line 333
    {
      CC2420SpiP__Fifo__writeDone(CC2420SpiP__m_addr, tx_buf, len, error);
    }
}

# 453 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ReceiveP.nc"
static void CC2420ReceiveP__flush(void )
#line 453
{
  CC2420ReceiveP__reset_state();
  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__CSN__clr();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__SFLUSHRX__strobe();
  CC2420ReceiveP__CSN__set();
  CC2420ReceiveP__SpiResource__release();
  CC2420ReceiveP__waitForNextPacket();
}

# 768 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__CC2420Tx__sendDone(ieee154_txframe_t *frame, bool ackPendingFlag, error_t result)
{
  CC2420TKN154P__m_ackFramePending = ackPendingFlag;
  CC2420TKN154P__m_txResult = result;
  if (!CC2420TKN154P__SpiResource__isOwner()) {


      while (!(frame->header->mhr[MHR_INDEX_FC1] & FC1_ACK_REQUEST)) {
#line 775
          break;
        }
#line 775
      ;
      result = CC2420TKN154P__RxControl__stop();
      while (!(result == SUCCESS)) {
#line 777
          break;
        }
#line 777
      ;
    }
  else {
#line 779
    CC2420TKN154P__sendDoneSpiReserved();
    }
}









static void CC2420TKN154P__sendDoneSpiReserved(void )
{

  CC2420TKN154P__m_state_t state = CC2420TKN154P__m_state;
  ieee154_txframe_t *frame = CC2420TKN154P__m_txframe;
  ieee154_csma_t *csma = CC2420TKN154P__m_csma;

  CC2420TKN154P__CC2420Power__rfOff();
  CC2420TKN154P__CC2420Power__flushRxFifo();
  CC2420TKN154P__CC2420Tx__unlockChipSpi();
  CC2420TKN154P__TxControl__stop();
  CC2420TKN154P__SpiResource__release();
  CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;

  if (state == CC2420TKN154P__S_TX_ACTIVE_NO_CSMA) {
    CC2420TKN154P__txDoneRadioTx(frame, CC2420TKN154P__m_txResult);
    }
  else {
#line 807
    if (state == CC2420TKN154P__S_TX_ACTIVE_UNSLOTTED_CSMA) {
      CC2420TKN154P__txDoneUnslottedCsma(frame, csma, CC2420TKN154P__m_ackFramePending, CC2420TKN154P__m_txResult);
      }
    else {
#line 809
      if (state == CC2420TKN154P__S_TX_ACTIVE_SLOTTED_CSMA) {
        CC2420TKN154P__txDoneSlottedCsmaCa(frame, csma, CC2420TKN154P__m_ackFramePending, CC2420TKN154P__m_remainingBackoff, CC2420TKN154P__m_txResult);
        }
      else {
#line 812
        while (!0) {
#line 812
            break;
          }
        }
      }
    }
#line 812
  ;
}

# 255 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static error_t CC2420ControlP__CC2420Power__rfOff(void )
#line 255
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 256
    {
      if (!CC2420ControlP__SpiResource__isOwner()) 
        {
          unsigned char __nesc_temp = 
#line 258
          FAIL;

          {
#line 258
            __nesc_atomic_end(__nesc_atomic); 
#line 258
            return __nesc_temp;
          }
        }
#line 259
      CC2420ControlP__CSN__set();
      CC2420ControlP__CSN__clr();
      CC2420ControlP__SRFOFF__strobe();
      CC2420ControlP__CSN__set();
    }
#line 263
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

static error_t CC2420ControlP__CC2420Power__flushRxFifo(void )
{
  uint16_t dummy;

#line 270
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 270
    {
      if (!CC2420ControlP__SpiResource__isOwner()) 
        {
          unsigned char __nesc_temp = 
#line 272
          FAIL;

          {
#line 272
            __nesc_atomic_end(__nesc_atomic); 
#line 272
            return __nesc_temp;
          }
        }
#line 273
      if (CC2420ControlP__FIFO__get()) {



          CC2420ControlP__CSN__clr();
          CC2420ControlP__RXFIFO_REGISTER__read(&dummy);
          CC2420ControlP__CSN__set();
          CC2420ControlP__CSN__clr();


          CC2420ControlP__SFLUSHRX__strobe();
          CC2420ControlP__SFLUSHRX__strobe();
          CC2420ControlP__CSN__set();
        }
    }
#line 287
    __nesc_atomic_end(__nesc_atomic); }
  return SUCCESS;
}

# 287 "/usr/src/tinyos/tos/chips/cc2420/spi/CC2420SpiP.nc"
static cc2420_status_t CC2420SpiP__Reg__read(uint8_t addr, uint16_t *data)
#line 287
{

  cc2420_status_t status = 0;

  /* atomic removed: atomic calls only */
#line 291
  {
    if (CC2420SpiP__WorkingState__isIdle()) {
        {
          unsigned char __nesc_temp = 
#line 293
          status;

#line 293
          return __nesc_temp;
        }
      }
  }
  status = CC2420SpiP__SpiByte__write(addr | 0x40);
  *data = (uint16_t )CC2420SpiP__SpiByte__write(0) << 8;
  *data |= CC2420SpiP__SpiByte__write(0);

  return status;
}

# 568 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__SlottedCsmaCa__transmitDone(ieee154_txframe_t *frame, ieee154_csma_t *csma, 
bool ackPendingFlag, uint16_t remainingBackoff, error_t result)
{
  bool done = TRUE;

  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_resume = FALSE;

  switch (result) 
    {
      case SUCCESS: 


        /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_txStatus = IEEE154_SUCCESS;
      if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__DEVICE_ROLE && frame->payload[0] == CMD_FRAME_DATA_REQUEST && (
      frame->header->mhr[MHR_INDEX_FC1] & FC1_FRAMETYPE_MASK) == FC1_FRAMETYPE_CMD) {

          /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_txStatus = IEEE154_NO_DATA;
          if (ackPendingFlag) {


              /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_indirectTxPending = TRUE;
              /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lastFrame = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_currentFrame;
              /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_currentFrame = (void *)0;
              while (!(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RadioRx__enableRx(0, 0) == SUCCESS)) {
#line 591
                  break;
                }
#line 591
              ;
              return;
            }
        }
      break;
      case FAIL: 


        /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_txStatus = IEEE154_CHANNEL_ACCESS_FAILURE;
      break;
      case ENOACK: 



        if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_macMaxFrameRetries > 0) {

            done = FALSE;
            /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_csma.NB = 0;
            /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_csma.macMaxCsmaBackoffs = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_macMaxCSMABackoffs;
            /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_csma.macMaxBE = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_macMaxBE;
            /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_csma.BE = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_BE;
            /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_macMaxFrameRetries -= 1;
          }
        else {
#line 614
          /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_txStatus = IEEE154_NO_ACK;
          }
#line 615
      break;
      case EINVAL: 
        ;

      case ERETRY: 


        ;
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_resume = TRUE;
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_remainingBackoff = remainingBackoff;
      done = FALSE;
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lock = FALSE;
      if (!/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__CapEndAlarm__isRunning()) {
        /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__updateState();
        }
#line 629
      return;
      break;
      default: 
        while (!0) {
#line 632
            break;
          }
#line 632
      ;
      break;
    }

  if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__COORD_ROLE && frame == /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_bcastFrame) {

      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__restoreFrameFromBackup();
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__signalTxBroadcastDone(/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_bcastFrame, !done ? IEEE154_CHANNEL_ACCESS_FAILURE : /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_txStatus);
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_bcastFrame = (void *)0;
    }
  else {
#line 641
    if (done) {
        /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lastFrame = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_currentFrame;
        /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_currentFrame = (void *)0;
        /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__signalTxDoneTask__postTask();
      }
    }
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_lock = FALSE;
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__updateState();
}

# 476 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__ReliableWait__waitTxDone(void )
{
  error_t result;

#line 479
  while (!(CC2420TKN154P__m_state == CC2420TKN154P__S_TX_PENDING)) {
#line 479
      break;
    }
#line 479
  ;
  /* atomic removed: atomic calls only */
#line 480
  {
    CC2420TKN154P__m_state = CC2420TKN154P__S_TX_ACTIVE_NO_CSMA;
    result = CC2420TKN154P__CC2420Tx__send(FALSE);
    CC2420TKN154P__checkEnableRxForACK();
  }
  while (!(result == SUCCESS)) {
#line 485
      break;
    }
#line 485
  ;
}

# 190 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TransmitP.nc"
static error_t CC2420TransmitP__CC2420Tx__send(bool cca)
{
  cc2420_status_t status;
  bool congestion = TRUE;

  /* atomic removed: atomic calls only */
#line 195
  {
    if (CC2420TransmitP__m_state != CC2420TransmitP__S_READY_TX) 
      {
        unsigned char __nesc_temp = 
#line 197
        EOFF;

#line 197
        return __nesc_temp;
      }
#line 198
    CC2420TransmitP__CSN__set();
    CC2420TransmitP__CSN__clr();



    status = cca ? CC2420TransmitP__STXONCCA__strobe() : CC2420TransmitP__STXON__strobe();






    if (!(status & CC2420_STATUS_TX_ACTIVE)) {
        status = CC2420TransmitP__SNOP__strobe();
        if (status & CC2420_STATUS_TX_ACTIVE) {
            congestion = FALSE;
          }
      }

    CC2420TransmitP__CSN__set();



    if (congestion) {
        {
          unsigned char __nesc_temp = 
#line 222
          FAIL;

#line 222
          return __nesc_temp;
        }
      }
    else 
#line 223
      {
        CC2420TransmitP__m_state = CC2420TransmitP__S_SFD;
        __nesc_hton_uint32(CC2420TransmitP__m_frame->metadata->timestamp.nxdata, 0xffffffff);
        CC2420TransmitP__BackoffAlarm__start(CC2420TransmitP__CC2420_ABORT_PERIOD);
        {
          unsigned char __nesc_temp = 
#line 227
          SUCCESS;

#line 227
          return __nesc_temp;
        }
      }
  }
}

# 107 "/usr/src/tinyos/tos/lib/timer/TransformAlarmC.nc"
static void /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__set_alarm(void )
{
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type now = /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__Counter__get();
#line 109
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type expires;
#line 109
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type remaining;




  expires = /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 + /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt;


  remaining = (/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__to_size_type )(expires - now);


  if (/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 <= now) 
    {
      if (expires >= /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 && 
      expires <= now) {
        remaining = 0;
        }
    }
  else {
      if (expires >= /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 || 
      expires <= now) {
        remaining = 0;
        }
    }
#line 132
  if (remaining > /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY) 
    {
      /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 = now + /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY;
      /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt = remaining - /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY;
      remaining = /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__MAX_DELAY;
    }
  else 
    {
      /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_t0 += /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt;
      /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__m_dt = 0;
    }
  /*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__AlarmFrom__startAt((/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type )now << 0, 
  (/*Ieee802154BeaconEnabledC.PHYAlarm1.Alarm32khz32C.Transform32*/TransformAlarmC__0__from_size_type )remaining << 0);
}

# 752 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__checkEnableRxForACK(void )
{


  bool ackRequest = CC2420TKN154P__m_txframe->header->mhr[MHR_INDEX_FC1] & FC1_ACK_REQUEST ? TRUE : FALSE;
  error_t result = SUCCESS;

  if (ackRequest) {


      CC2420TKN154P__SpiResource__release();
      result = CC2420TKN154P__RxControl__start();
    }
  while (!(result == SUCCESS)) {
#line 765
      break;
    }
#line 765
  ;
}

#line 513
static void CC2420TKN154P__nextIterationUnslottedCsma(void )
{

  uint16_t backoff = CC2420TKN154P__getRandomBackoff(CC2420TKN154P__m_csma->BE);

#line 517
  CC2420TKN154P__m_state = CC2420TKN154P__S_TX_BACKOFF_UNSLOTTED;
  CC2420TKN154P__ReliableWait__waitBackoff(backoff);
}

#line 210
static uint16_t CC2420TKN154P__getRandomBackoff(uint8_t BE)
{
  uint16_t res = CC2420TKN154P__Random__rand16();
  uint16_t mask = 0xFFFF;

#line 214
  mask <<= BE;
  mask = ~mask;
  res &= mask;
  return res * IEEE154_aUnitBackoffPeriod;
}

# 69 "/usr/src/tinyos/tos/system/RandomMlcgC.nc"
static uint32_t RandomMlcgC__Random__rand32(void )
#line 69
{
  uint32_t mlcg;
#line 70
  uint32_t p;
#line 70
  uint32_t q;
  uint64_t tmpseed;

#line 72
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      tmpseed = (uint64_t )33614U * (uint64_t )RandomMlcgC__seed;
      q = tmpseed;
      q = q >> 1;
      p = tmpseed >> 32;
      mlcg = p + q;
      if (mlcg & 0x80000000) {
          mlcg = mlcg & 0x7FFFFFFF;
          mlcg++;
        }
      RandomMlcgC__seed = mlcg;
    }
#line 84
    __nesc_atomic_end(__nesc_atomic); }
  return mlcg;
}

# 110 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/TKN154TimingP.nc"
static void TKN154TimingP__ReliableWait__waitBackoff(uint32_t dt)
{
  if (TKN154TimingP__m_state != TKN154TimingP__S_WAIT_OFF) {
      while (!0) {
#line 113
          break;
        }
#line 113
      ;
      return;
    }
  TKN154TimingP__m_state = TKN154TimingP__S_WAIT_BACKOFF;
  TKN154TimingP__SymbolAlarm__start(dt);
}

# 607 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__nextIterationSlottedCsma(void )
{
  uint32_t dtTxTarget;
  uint16_t backoff;
  ieee154_txframe_t *frame = (void *)0;
  ieee154_csma_t *csma = (void *)0;

  /* atomic removed: atomic calls only */
#line 614
  {
    if (CC2420TKN154P__m_resume) {
        backoff = CC2420TKN154P__m_remainingBackoff;
        CC2420TKN154P__m_resume = FALSE;
      }
    else {
#line 619
      backoff = CC2420TKN154P__getRandomBackoff(CC2420TKN154P__m_csma->BE);
      }
#line 620
    dtTxTarget = CC2420TKN154P__TimeCalc__timeElapsed(CC2420TKN154P__m_t0, CC2420TKN154P__LocalTime__get());
    dtTxTarget += backoff;
    if (dtTxTarget > CC2420TKN154P__m_dt) {

        uint32_t overlap = dtTxTarget - CC2420TKN154P__m_dt;

#line 625
        overlap = overlap + (IEEE154_aUnitBackoffPeriod - overlap % IEEE154_aUnitBackoffPeriod);
        backoff = overlap;
        frame = CC2420TKN154P__m_txframe;
        csma = CC2420TKN154P__m_csma;
      }
    else 
#line 629
      {

        CC2420TKN154P__m_state = CC2420TKN154P__S_TX_BACKOFF_SLOTTED;
        CC2420TKN154P__ReliableWait__waitBackoff(backoff);
      }
  }
  if (frame != (void *)0) {
      CC2420TKN154P__CC2420Tx__unlockChipSpi();
      CC2420TKN154P__TxControl__stop();
      CC2420TKN154P__SpiResource__release();
      CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;
      CC2420TKN154P__SlottedCsmaCa__transmitDone(frame, csma, FALSE, backoff, ERETRY);
    }
}

# 61 "/usr/src/tinyos/tos/lib/timer/LocalTime.nc"
static uint32_t CC2420TKN154P__LocalTime__get(void ){
#line 61
  unsigned long __nesc_result;
#line 61

#line 61
  __nesc_result = LocalTime62500hzP__LocalTime__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 207 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static void PibP__RadioControl__stopDone(error_t result)
{




  if (PibP__RadioToken__isOwner()) {
      while (!(result == SUCCESS)) {
#line 214
          break;
        }
#line 214
      ;
      PibP__DispatchReset__init();
      PibP__DispatchQueueReset__init();
      PibP__MacReset__init();
      PibP__resetSpinTask__postTask();
    }
}

# 240 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static void ScanP__nextIteration(void )
{
  ieee154_phyChannelsSupported_t supportedChannels = ScanP__MLME_GET__phyChannelsSupported();
  uint32_t currentChannelBit = (uint32_t )1 << ScanP__m_currentChannelNum;
  error_t radioStatus = SUCCESS;

  if (!ScanP__m_terminateScan) {
      while (ScanP__m_currentChannelNum <= ScanP__LAST_CHANNEL && 
      !((ScanP__m_scanChannels & currentChannelBit) & supportedChannels)) {
          ScanP__m_currentChannelNum++;
          currentChannelBit <<= 1;
        }
    }

  if (ScanP__m_currentChannelNum <= ScanP__LAST_CHANNEL && !ScanP__m_terminateScan) {

      ScanP__MLME_SET__phyCurrentChannel(ScanP__m_currentChannelNum);
      ;
      switch (ScanP__m_scanType) {
          case PASSIVE_SCAN: 
            radioStatus = ScanP__RadioRx__enableRx(0, 0);
          break;
          case ACTIVE_SCAN: 
            case ORPHAN_SCAN: 
              radioStatus = ScanP__RadioTx__transmit(ScanP__m_txFrame, 0, 0);
          break;
          case ENERGY_DETECTION_SCAN: 
            radioStatus = ScanP__EnergyDetection__start(ScanP__m_scanDuration);
          break;
        }
      while (!(radioStatus == SUCCESS)) {
#line 270
          break;
        }
#line 270
      ;
    }
  else 
#line 271
    {

      ieee154_status_t result = IEEE154_SUCCESS;
      uint32_t unscannedChannels = 0;

      if (ScanP__m_terminateScan) {





          if (ScanP__m_scanType == PASSIVE_SCAN || ScanP__m_scanType == ACTIVE_SCAN) {
            currentChannelBit >>= 1;
            }
#line 284
          while (!(currentChannelBit & 0xFC000000L) && 
          ScanP__m_scanChannels & currentChannelBit) {
              unscannedChannels |= currentChannelBit;
              currentChannelBit <<= 1;
            }
          if (unscannedChannels) {
            result = IEEE154_LIMIT_REACHED;
            }
        }
      else {
#line 291
        if (ScanP__m_scanType != ENERGY_DETECTION_SCAN && !ScanP__m_resultIndex) {
          result = IEEE154_NO_BEACON;
          }
        }
#line 294
      if (ScanP__m_scanType == PASSIVE_SCAN || ScanP__m_scanType == ACTIVE_SCAN) {
        ScanP__MLME_SET__macPANId(ScanP__m_PANID);
        }
#line 296
      if (ScanP__m_txFrame != (void *)0) {
          ScanP__TxControlPool__put((ieee154_txcontrol_t *)((uint8_t *)ScanP__m_txFrame->header - (unsigned short )& ((ieee154_txcontrol_t *)0)->header));
          ScanP__TxFramePool__put(ScanP__m_txFrame);
        }
      ScanP__m_txFrame = (void *)0;
      if (ScanP__RadioToken__isOwner()) {
        ScanP__RadioToken__release();
        }
#line 303
      ScanP__m_busy = FALSE;
      ;
      ScanP__MLME_SCAN__confirm(
      result, 
      ScanP__m_scanType, 
      IEEE154_SUPPORTED_CHANNELS >> 27, 
      unscannedChannels, 
      ScanP__m_scanType == ENERGY_DETECTION_SCAN ? ScanP__m_resultIndex : 0, 
      ScanP__m_scanType == ENERGY_DETECTION_SCAN ? (int8_t *)ScanP__m_resultList : (void *)0, (
      ScanP__m_scanType == ACTIVE_SCAN || 
      ScanP__m_scanType == PASSIVE_SCAN) && ScanP__MLME_GET__macAutoRequest() ? ScanP__m_resultIndex : 0, (
      ScanP__m_scanType == ACTIVE_SCAN || 
      ScanP__m_scanType == PASSIVE_SCAN) && ScanP__MLME_GET__macAutoRequest() ? (ieee154_PANDescriptor_t *)ScanP__m_resultList : (void *)0);
    }
  ;
}

# 85 "/usr/src/tinyos/tos/system/QueueC.nc"
static /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__queue_t /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__dequeue(void )
#line 85
{
  /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__queue_t t = /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__head();

#line 87
  ;
  if (!/*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__Queue__empty()) {
      /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__head++;
      if (/*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__head == 4) {
#line 90
        /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__head = 0;
        }
#line 91
      /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__size--;
      /*TKN154BeaconEnabledP.BroadcastQueueC*/QueueC__2__printQueue();
    }
  return t;
}

# 365 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420TKN154P.nc"
static void CC2420TKN154P__offSpiReserved(void )
{
  CC2420TKN154P__TxControl__stop();
  CC2420TKN154P__CC2420Power__rfOff();
  CC2420TKN154P__CC2420Power__flushRxFifo();
  CC2420TKN154P__CC2420Tx__unlockChipSpi();
  CC2420TKN154P__SpiResource__release();
  CC2420TKN154P__m_state = CC2420TKN154P__S_RADIO_OFF;
  CC2420TKN154P__RadioOff__offDone();
}

# 138 "/usr/src/tinyos/tos/lib/mac/tkn154/PromiscuousModeP.nc"
static void PromiscuousModeP__RadioOff__offDone(void )
{
  if (PromiscuousModeP__m_state == PromiscuousModeP__S_STARTING) {
      PromiscuousModeP__PromiscuousRx__enableRx(0, 0);
    }
  else {
#line 143
    PromiscuousModeP__continueStopTask__postTask();
    }
}

# 430 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static void ScanP__RadioOff__offDone(void )
{
  if (ScanP__m_currentChannelNum == 0) {
    ScanP__continueScanRequestTask__postTask();
    }
  else 
#line 434
    {
      ScanP__m_currentChannelNum++;
      ScanP__nextIterationTask__postTask();
    }
}

# 105 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static void PibP__resetAttributesToDefault(void )
#line 105
{
  PibP__m_pib.phyCurrentChannel = 26;
  PibP__m_pib.phyTransmitPower = IEEE154_TXPOWER_TOLERANCE | (0 & 0x3F);
  PibP__m_pib.phyCCAMode = 3;
  PibP__m_pib.phyCurrentPage = 0;

  PibP__m_pib.macAssociatedPANCoord = FALSE;
  PibP__m_pib.macAssociationPermit = FALSE;
  PibP__m_pib.macAutoRequest = TRUE;
  PibP__m_pib.macBattLifeExt = FALSE;
  PibP__m_pib.macBattLifeExtPeriods = 6;
  PibP__m_pib.macBeaconPayloadLength = 0;
  PibP__m_pib.macBeaconOrder = 15;
  PibP__m_pib.macBeaconTxTime = 0;
  PibP__m_pib.macBSN = 0xFF & PibP__Random__rand16();

  PibP__m_pib.macCoordShortAddress = 0xFFFF;
  PibP__m_pib.macDSN = 0xFF & PibP__Random__rand16();
  PibP__m_pib.macGTSPermit = TRUE;
  PibP__m_pib.macMaxBE = 5;
  PibP__m_pib.macMaxCSMABackoffs = 4;
  PibP__m_pib.macMaxFrameRetries = 3;
  PibP__m_pib.macMinBE = 3;
  PibP__m_pib.macPANId = 0xFFFF;
  PibP__m_pib.macPromiscuousMode = FALSE;
  PibP__m_pib.macResponseWaitTime = 32;
  PibP__m_pib.macRxOnWhenIdle = FALSE;
  PibP__m_pib.macSecurityEnabled = FALSE;
  PibP__m_pib.macShortAddress = 0xFFFF;
  PibP__m_pib.macSuperframeOrder = 15;
  PibP__m_pib.macTransactionPersistenceTime = 0x01F4;
  PibP__m_pib.macPanCoordinator = FALSE;
  PibP__updateMacMaxFrameTotalWaitTime();
}

# 417 "/usr/src/tinyos/tos/chips/cc2420_tkn154/CC2420ControlP.nc"
static error_t CC2420ControlP__CC2420Power__rssi(int8_t *rssi)
#line 417
{
  uint16_t data;
  cc2420_status_t status;

#line 420
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 420
    {
      if (!CC2420ControlP__SpiResource__isOwner()) 
        {
          unsigned char __nesc_temp = 
#line 422
          FAIL;

          {
#line 422
            __nesc_atomic_end(__nesc_atomic); 
#line 422
            return __nesc_temp;
          }
        }
#line 423
      CC2420ControlP__CSN__set();
      CC2420ControlP__CSN__clr();
      status = CC2420ControlP__RSSI__read(&data);
      CC2420ControlP__CSN__set();
      if (status & 0x02) {
          *rssi = data & 0x00FF;
          {
            unsigned char __nesc_temp = 
#line 429
            SUCCESS;

            {
#line 429
              __nesc_atomic_end(__nesc_atomic); 
#line 429
              return __nesc_temp;
            }
          }
        }
      else 
#line 431
        {
          unsigned char __nesc_temp = 
#line 431
          FAIL;

          {
#line 431
            __nesc_atomic_end(__nesc_atomic); 
#line 431
            return __nesc_temp;
          }
        }
    }
#line 434
    __nesc_atomic_end(__nesc_atomic); }
}

#line 336
static void CC2420ControlP__CC2420Config__setPromiscuousMode(bool on)
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 338
    {
      CC2420ControlP__m_needsSync = TRUE;
      if (on) {
          CC2420ControlP__addressRecognition = FALSE;
          CC2420ControlP__acceptReservedFrames = TRUE;
          CC2420ControlP__autoAckEnabled = FALSE;
        }
      else 
#line 344
        {
          CC2420ControlP__addressRecognition = TRUE;
          CC2420ControlP__acceptReservedFrames = FALSE;
          CC2420ControlP__autoAckEnabled = TRUE;
        }
    }
#line 349
    __nesc_atomic_end(__nesc_atomic); }
}

# 304 "/usr/src/tinyos/tos/lib/mac/tkn154/DispatchSlottedCsmaP.nc"
static void /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__setCurrentFrame(ieee154_txframe_t *frame)
{
  ieee154_macDSN_t dsn = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macDSN();

#line 307
  frame->header->mhr[MHR_INDEX_SEQNO] = dsn++;
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_SET__macDSN(dsn);
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_csma.NB = 0;
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_csma.macMaxCsmaBackoffs = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_macMaxCSMABackoffs = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macMaxCSMABackoffs();
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_csma.macMaxBE = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_macMaxBE = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macMaxBE();
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_csma.BE = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macMinBE();
  if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macBattLifeExt() && /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_csma.BE > 2) {
    /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_csma.BE = 2;
    }
#line 315
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_BE = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_csma.BE;
  if (/*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__COORD_ROLE && /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__GetIndirectTxFrame__get() == frame) {
    /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_macMaxFrameRetries = 0;
    }
  else {
#line 319
    /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_macMaxFrameRetries = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macMaxFrameRetries();
    }
#line 320
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_transactionTime = IEEE154_SHR_DURATION + (
  frame->headerLen + frame->payloadLen + 2) * IEEE154_SYMBOLS_PER_OCTET;
  if (frame->header->mhr[MHR_INDEX_FC1] & FC1_ACK_REQUEST) {
    /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_transactionTime += IEEE154_aTurnaroundTime + IEEE154_aUnitBackoffPeriod + 
    11 * IEEE154_SYMBOLS_PER_OCTET;
    }



  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_macMaxFrameTotalWaitTime = /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__MLME_GET__macMaxFrameTotalWaitTime();
  /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__m_currentFrame = frame;
}

# 424 "/usr/src/tinyos/tos/lib/mac/tkn154/PibP.nc"
static ieee154_status_t PibP__MLME_SET__macDSN(ieee154_macDSN_t value)
#line 424
{
  PibP__m_pib.macDSN = value;
  PibP__PIBUpdate__notify(IEEE154_macDSN, & PibP__m_pib.macDSN);
  return IEEE154_SUCCESS;
}

# 189 "/usr/src/tinyos/tos/lib/mac/tkn154/BeaconSynchronizeP.nc"
static void BeaconSynchronizeP__RadioToken__granted(void )
{
  if (BeaconSynchronizeP__isUpdatePending()) {
      ;
      if (BeaconSynchronizeP__m_updateTrackBeacon) {
        BeaconSynchronizeP__setMode(BeaconSynchronizeP__MODE_TRACK_CONTINUOUS);
        }
      else {
#line 196
        BeaconSynchronizeP__setMode(BeaconSynchronizeP__MODE_TRACK_SINGLE);
        }
#line 197
      BeaconSynchronizeP__MLME_SET__phyCurrentChannel(BeaconSynchronizeP__m_updateLogicalChannel);
      BeaconSynchronizeP__m_beaconOrder = BeaconSynchronizeP__MLME_GET__macBeaconOrder();
      BeaconSynchronizeP__m_dt = BeaconSynchronizeP__getBeaconInterval(BeaconSynchronizeP__m_beaconOrder);
      BeaconSynchronizeP__m_numBeaconsMissed = IEEE154_aMaxLostBeacons;
      BeaconSynchronizeP__resetUpdatePending();
      BeaconSynchronizeP__setRxState(BeaconSynchronizeP__RX_FIRST_SCAN);
    }
  BeaconSynchronizeP__trackNextBeacon();
}

# 196 "/usr/src/tinyos/tos/lib/mac/tkn154/ScanP.nc"
static void ScanP__continueScanRequest(void )
{
  uint8_t i;
  ieee154_macPANId_t bcastPANID = 0xFFFF;
  ieee154_macDSN_t dsn = ScanP__MLME_GET__macDSN();

  if (!ScanP__m_busy) {
      ScanP__RadioToken__release();
      return;
    }
  switch (ScanP__m_scanType) {
      case ACTIVE_SCAN: 

        ScanP__m_txFrame->header->mhr[MHR_INDEX_FC1] = FC1_FRAMETYPE_CMD;
      ScanP__m_txFrame->header->mhr[MHR_INDEX_FC2] = FC2_DEST_MODE_SHORT;
      ScanP__m_txFrame->header->mhr[MHR_INDEX_SEQNO] = dsn;
      ScanP__MLME_SET__macDSN(dsn + 1);
      for (i = 0; i < 4; i++) 
        ScanP__m_txFrame->header->mhr[MHR_INDEX_ADDRESS + i] = 0xFF;
      ScanP__m_txFrame->headerLen = 7;
      ScanP__m_payload[0] = CMD_FRAME_BEACON_REQUEST;
      ScanP__m_txFrame->payloadLen = 1;

      case PASSIVE_SCAN: 
        ScanP__MLME_SET__macPANId(bcastPANID);
      break;
      case ORPHAN_SCAN: 

        ScanP__m_scanDuration = ScanP__MLME_GET__macResponseWaitTime() * IEEE154_aBaseSuperframeDuration;
      ScanP__m_txFrame->header->mhr[MHR_INDEX_FC1] = FC1_FRAMETYPE_CMD | FC1_PAN_ID_COMPRESSION;
      ScanP__m_txFrame->header->mhr[MHR_INDEX_FC2] = FC2_SRC_MODE_EXTENDED | FC2_DEST_MODE_SHORT;
      ScanP__m_txFrame->header->mhr[MHR_INDEX_SEQNO] = dsn;
      ScanP__MLME_SET__macDSN(dsn + 1);
      for (i = 0; i < 4; i++) 
        ScanP__m_txFrame->header->mhr[MHR_INDEX_ADDRESS + i] = 0xFF;
      ScanP__FrameUtility__copyLocalExtendedAddressLE((uint8_t *)&ScanP__m_txFrame->header->mhr[MHR_INDEX_ADDRESS + i]);
      ScanP__m_txFrame->headerLen = 15;
      ScanP__m_payload[0] = CMD_FRAME_ORPHAN_NOTIFICATION;
      ScanP__m_txFrame->payloadLen = 1;
      break;
    }
  ScanP__nextIteration();
}

# 187 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer0AsyncP.nc"
__attribute((signal))   void __vector_15(void )
#line 187
{
  HplAtm128Timer0AsyncP__stabiliseTimer0();
  HplAtm128Timer0AsyncP__Compare__fired();
}


__attribute((signal))   void __vector_16(void )
#line 193
{
  HplAtm128Timer0AsyncP__stabiliseTimer0();
  HplAtm128Timer0AsyncP__Timer__overflow();
}

# 204 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
__attribute((interrupt))   void __vector_12(void )
#line 204
{
  HplAtm128Timer1P__CompareA__fired();
}

__attribute((interrupt))   void __vector_13(void )
#line 208
{
  HplAtm128Timer1P__CompareB__fired();
}

# 87 "/usr/src/tinyos/tos/platforms/telosb/mac/tkn154/timer/Alarm32khzTo62500hzTransformC.nc"
static void Alarm32khzTo62500hzTransformC__Alarm__default__fired(uint8_t num)
#line 87
{
}

# 78 "/usr/src/tinyos/tos/lib/timer/Alarm.nc"
static void Alarm32khzTo62500hzTransformC__Alarm__fired(uint8_t arg_0x2ab71e87e448){
#line 78
  switch (arg_0x2ab71e87e448) {
#line 78
    case /*Ieee802154BeaconEnabledC.PHYAlarm2*/Alarm62500hz32VirtualizedC__0__CLIENT_ID:
#line 78
      CC2420ControlP__StartupAlarm__fired();
#line 78
      break;
#line 78
    case /*LocalTime62500hzC.Alarm62500hz32VirtualizedC*/Alarm62500hz32VirtualizedC__1__CLIENT_ID:
#line 78
      LocalTime62500hzP__Alarm__fired();
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm1*/Alarm62500hz32VirtualizedC__2__CLIENT_ID:
#line 78
      NoBeaconTransmitP__BeaconSendAlarm__fired();
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm2*/Alarm62500hz32VirtualizedC__3__CLIENT_ID:
#line 78
      BeaconSynchronizeP__TrackAlarm__fired();
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm3*/Alarm62500hz32VirtualizedC__4__CLIENT_ID:
#line 78
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__CapEndAlarm__fired();
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm4*/Alarm62500hz32VirtualizedC__5__CLIENT_ID:
#line 78
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__BLEAlarm__fired();
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm5*/Alarm62500hz32VirtualizedC__6__CLIENT_ID:
#line 78
      /*TKN154BeaconEnabledP.DeviceCap*/DispatchSlottedCsmaP__0__RxWaitAlarm__fired();
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm6*/Alarm62500hz32VirtualizedC__7__CLIENT_ID:
#line 78
      /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__CapEndAlarm__fired();
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm7*/Alarm62500hz32VirtualizedC__8__CLIENT_ID:
#line 78
      /*TKN154BeaconEnabledP.CoordCap*/NoDispatchSlottedCsmaP__0__BLEAlarm__fired();
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm8*/Alarm62500hz32VirtualizedC__9__CLIENT_ID:
#line 78
      NoDeviceCfpP__CfpSlotAlarm__fired();
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm9*/Alarm62500hz32VirtualizedC__10__CLIENT_ID:
#line 78
      NoDeviceCfpP__CfpEndAlarm__fired();
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm10*/Alarm62500hz32VirtualizedC__11__CLIENT_ID:
#line 78
      NoCoordCfpP__CfpSlotAlarm__fired();
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm11*/Alarm62500hz32VirtualizedC__12__CLIENT_ID:
#line 78
      NoCoordCfpP__CfpEndAlarm__fired();
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm12*/Alarm62500hz32VirtualizedC__13__CLIENT_ID:
#line 78
      /*TKN154BeaconEnabledP.DeviceInactivePeriod*/InactivePeriodP__0__Alarm__fired();
#line 78
      break;
#line 78
    case /*Ieee802154BeaconEnabledC.MACAlarm13*/Alarm62500hz32VirtualizedC__14__CLIENT_ID:
#line 78
      /*TKN154BeaconEnabledP.CoordInactivePeriod*/InactivePeriodP__1__Alarm__fired();
#line 78
      break;
#line 78
    case /*HilTimer62500hzC.Alarm*/Alarm62500hz32VirtualizedC__15__CLIENT_ID:
#line 78
      /*HilTimer62500hzC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
      break;
#line 78
    default:
#line 78
      Alarm32khzTo62500hzTransformC__Alarm__default__fired(arg_0x2ab71e87e448);
#line 78
      break;
#line 78
    }
#line 78
}
#line 78
# 212 "/usr/src/tinyos/tos/chips/atm128/timer/HplAtm128Timer1P.nc"
__attribute((interrupt))   void __vector_24(void )
#line 212
{
  HplAtm128Timer1P__CompareC__fired();
}

__attribute((interrupt))   void __vector_11(void )
#line 216
{
  HplAtm128Timer1P__Capture__captured(HplAtm128Timer1P__Capture__get());
}

__attribute((interrupt))   void __vector_14(void )
#line 220
{
  HplAtm128Timer1P__Timer__overflow();
}

# 55 "/usr/src/tinyos/tos/chips/atm128/pins/HplAtm128InterruptSigP.nc"
__attribute((signal))   void __vector_1(void )
#line 55
{
  HplAtm128InterruptSigP__IntSig0__fired();
}


__attribute((signal))   void __vector_2(void )
#line 60
{
  HplAtm128InterruptSigP__IntSig1__fired();
}


__attribute((signal))   void __vector_3(void )
#line 65
{
  HplAtm128InterruptSigP__IntSig2__fired();
}


__attribute((signal))   void __vector_4(void )
#line 70
{
  HplAtm128InterruptSigP__IntSig3__fired();
}


__attribute((signal))   void __vector_5(void )
#line 75
{
  HplAtm128InterruptSigP__IntSig4__fired();
}


__attribute((signal))   void __vector_6(void )
#line 80
{
  HplAtm128InterruptSigP__IntSig5__fired();
}


__attribute((signal))   void __vector_7(void )
#line 85
{
  HplAtm128InterruptSigP__IntSig6__fired();
}


__attribute((signal))   void __vector_8(void )
#line 90
{
  HplAtm128InterruptSigP__IntSig7__fired();
}

# 119 "/usr/src/tinyos/tos/chips/atm128/spi/HplAtm128SpiP.nc"
__attribute((signal))   void __vector_17(void )
#line 119
{
  HplAtm128SpiP__SPI__dataReady(HplAtm128SpiP__SPI__read());
}

