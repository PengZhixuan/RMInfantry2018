#ifndef _MAIN_H_
#define _MAIN_H_

#include "ch.h"
#include "hal.h"

#include "math_misc.h"

#include "usbcfg.h"
#include "flash.h"
#include "chprintf.h"
#include "system_error.h"

#include "canBusProcess.h"
#include "dbus.h"
#include "params.h"
#include "sdlog.h"
#include "exti.h"

#include "mpu6500.h"
#include "ist8310.h"
#include "adis16265.h"
#include "attitude.h"
#include "imu_temp.h"
#include "calibrate_sensor.h"

#include "gimbal.h"
#include "shoot.h"
#include "feeder.h"
#include "barrelStatus.h"

#include "rune.h"

typedef enum {
  INIT_DUMMY = 0,
  INIT_SEQUENCE_3_RETURN_1 = 1,
  INIT_SEQUENCE_3_RETURN_2 = 2,
  INIT_SEQUENCE_3_RETURN_3 = 4,
  INIT_COMPLETE = 32,
} system_init_state_t;

void shellStart(void);

system_init_state_t init_state_get(void);
uint8_t power_check(void);
bool    power_failure(void);

#endif
