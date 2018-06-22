#ifndef ROBOCONF_H_
#define ROBOCONF_H_

#define RM_INFANTRY
//#define RM_HERO

#ifdef RM_INFANTRY
  #define RM_INFANTRY_GIMBAL
  //#define RM_CHASSIS_STANDARD
  #define CHASSIS_POWER_MAX_W        80U
  #define CHASSIS_POWER_BUFFER_J     60U
  #define LEVEL1_HEATLIMIT    90U
  #define LEVEL2_HEATLIMIT    180U
  #define LEVEL3_HEATLIMIT    360U
#endif //RM_INFANTRY

#ifdef RM_HERO
  #define CHASSIS_POWER_MAX_W       120U
  #define CHASSIS_POWER_BUFFER_J     60U
#endif //RM_HERO

#endif //ROBOCONF_H_
