#include "ty_ble.h"




/*********************************************************************
 * LOCAL CONSTANT
 */
#define     DEFAULT_ADV_DATA    \
            {                   \
                3,              \
                {               \
                    0x02,       \
                    0x01,       \
                    0x06,       \
                },              \
            }
            
#define     DEFAULT_SCAN_RSP    \
            {                   \
                6,              \
                {               \
                    0x0C,       \
                    0x09,       \
                    't', 'y', '_', 'b', 'l', 'e', '_', 'd', 'e', 'm', 'o', \
                },              \
            }

#define     DEFAULT_ADV_PARAM               \
            {                               \
                .adv_interval_min = 100,    \
                .adv_interval_max = 100,    \
                .adv_type         = 0x01,   \
                .adv_power        = 0x00,   \
                .adv_channal_map  = 0x07,   \
            }
            
/*********************************************************************
 * LOCAL STRUCT
 */

/*********************************************************************
 * LOCAL VARIABLE
 */
static ty_ble_data_t        g_adv_data  = DEFAULT_ADV_DATA;
static ty_ble_data_t        g_scan_rsp  = DEFAULT_SCAN_RSP;
static ty_ble_adv_param_t   g_adv_param = DEFAULT_ADV_PARAM;

/*********************************************************************
 * VARIABLE
 */

/*********************************************************************
 * LOCAL FUNCTION
 */




/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_init(void)
{
    return 0;
}

/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_start_adv(void)
{
    return 0;
}

/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_restart_adv(void)
{
    return 0;
}

/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_stop_adv(void)
{
    return 0;
}

/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_set_advdata_and_scanrsp(const ty_ble_data_t* p_adv_data, const ty_ble_data_t* p_scan_rsp)
{
    return 0;
}

/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_set_adv_param(const ty_ble_adv_param_t* p_param)
{
    return 0;
}

/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_connect(const ty_ble_mac_t* p_mac)
{
    return 0;
}

/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_reconnect(const ty_ble_mac_t* p_mac)
{
    return 0;
}

/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_disconnect(void)
{
    return 0;
}

/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_set_conn_param(uint16_t cMin, uint16_t cMax, uint16_t latency, uint16_t timeout)
{
    return 0;
}

/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_set_mac(const ty_ble_mac_t* p_mac)
{
    return 0;
}

/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_get_mac(ty_ble_mac_t* p_mac)
{
    return 0;
}

/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_connect_handler(void)
{
    return 0;
}

/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_disconnect_handler(void)
{
    return 0;
}

/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_receive_data_handler(const uint8_t* buf, uint32_t size)
{
    return 0;
}

/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_send_data(const uint8_t* buf, uint32_t size)
{
    return 0;
}

/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_get_rssi(int8_t* p_rssi)
{
    return 0;
}

/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_set_tx_power(int8_t tx_power)
{
    return 0;
}

/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_set_device_name(const uint8_t* buf, uint16_t size)
{
    return 0;
}

/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_get_device_name(uint8_t* buf, uint16_t* p_size)
{
    return 0;
}

/*********************************************************
FN: 
*/
__TUYA_BLE_WEAK uint32_t ty_ble_set_dle(void)
{
    return 0;
}






