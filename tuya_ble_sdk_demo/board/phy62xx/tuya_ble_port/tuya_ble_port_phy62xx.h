/**
****************************************************************************
* @file      tuya_ble_port_phy62xx.h
* @brief     tuya_ble_port_phy62xx
* @author    suding
* @version   V1.0.0
* @date      2020-04
* @note
******************************************************************************
* @attention
*
* <h2><center>&copy; COPYRIGHT 2020 Tuya </center></h2>
*/


#ifndef __TUYA_BLE_PORT_PHY62XX_H__
#define __TUYA_BLE_PORT_PHY62XX_H__

#ifdef __cplusplus
extern "C"
{
#endif

/*********************************************************************
 * INCLUDE
 */
//#include "app_util_platform.h"
#include "tuya_ble_config.h"
#include "ty_system.h"
#include "elog.h"
#include "log.h"

/*********************************************************************
 * CONSTANT
 */
#if (TUYA_BLE_LOG_ENABLE||TUYA_APP_LOG_ENABLE)
    #define TUYA_BLE_PRINTF(...)        log_d(__VA_ARGS__)
    #define TUYA_BLE_HEXDUMP(...)       ty_system_log_hexdump("", 8, __VA_ARGS__)
#else
    #define TUYA_BLE_PRINTF(...)
    #define TUYA_BLE_HEXDUMP(...)
#endif

#define tuya_ble_device_enter_critical()        \
    HAL_ENTER_CRITICAL_SECTION();

#define tuya_ble_device_exit_critical()         \
       HAL_EXIT_CRITICAL_SECTION(); 

/*********************************************************************
 * STRUCT
 */

/*********************************************************************
 * EXTERNAL VARIABLE
 */

/*********************************************************************
 * EXTERNAL FUNCTION
 */


#ifdef __cplusplus
}
#endif

#endif //__TUYA_BLE_PORT_PHY62XX_H__



