#ifndef __SENSOR_GYRO_INT_H__
#define __SENSOR_GYRO_INT_H__

/**
 * @addtogroup sds
 * @{
 *
 * @file     sensor_gyro_cfg.h
 * @brief    Gyroscopes sensor integration with the SDS header
 *
 * @}
*/

#ifdef __cplusplus
extern "C" {
#endif  // #ifdef __cplusplus

#include "if_sensor_data_service.h"

/**********************************************************************
 *
 * External type declarations
 *
 **********************************************************************/
extern sds_if_t gyro_base_if;  
extern sds_gyro_data_if_t gyro_data_if;  

#ifdef __cplusplus
}
#endif  // #ifdef __cplusplus

#endif  // #ifndef __SENSOR_GYRO_INT_H__

