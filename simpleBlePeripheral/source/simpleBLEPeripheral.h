/**************************************************************************************************

    Phyplus Microelectronics Limited confidential and proprietary.
    All rights reserved.

    IMPORTANT: All rights of this software belong to Phyplus Microelectronics
    Limited ("Phyplus"). Your use of this Software is limited to those
    specific rights granted under  the terms of the business contract, the
    confidential agreement, the non-disclosure agreement and any other forms
    of agreements as a customer or a partner of Phyplus. You may not use this
    Software unless you agree to abide by the terms of these agreements.
    You acknowledge that the Software may not be modified, copied,
    distributed or disclosed unless embedded on a Phyplus Bluetooth Low Energy
    (BLE) integrated circuit, either as a product or is integrated into your
    products.  Other than for the aforementioned purposes, you may not use,
    reproduce, copy, prepare derivative works of, modify, distribute, perform,
    display or sell this Software and/or its documentation for any purposes.

    YOU FURTHER ACKNOWLEDGE AND AGREE THAT THE SOFTWARE AND DOCUMENTATION ARE
    PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED,
    INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF MERCHANTABILITY, TITLE,
    NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT SHALL
    PHYPLUS OR ITS SUBSIDIARIES BE LIABLE OR OBLIGATED UNDER CONTRACT,
    NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR OTHER
    LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE
    OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT
    OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

**************************************************************************************************/

/**************************************************************************************************
    Filename:       simpleBLEperipheral.h
    Revised:
    Revision:

    Description:    This file contains the Simple BLE Peripheral sample application
                  definitions and prototypes.


**************************************************************************************************/

#ifndef SIMPLEBLEPERIPHERAL_H
#define SIMPLEBLEPERIPHERAL_H

#ifdef __cplusplus
extern "C"
{
#endif

/*********************************************************************
    INCLUDES
*/
#include "types.h"
#include "bcomdef.h"
#include "peripheral.h"

/*********************************************************************
    CONSTANTS
*/
#define SBP_START_DEVICE_EVT                           0x0001
#define SBP_RESET_ADV_EVT                              0x0002
#define SBP_TUYA_BLE_CONN_EVT                          0x0004
#define SBP_TUYA_BLE_DISCONN_EVT                       0x0008
#define SBP_TUYA_EXEC_EVT                              0x0010
#define SBP_RTC_TEST_EVT                               0x0020
#define SBP_TY_KEY_EVT                                 0x0040

#define PHY_TIMER0_EVT                                 0x0001
#define PHY_TIMER1_EVT                                 0x0002
#define PHY_TIMER2_EVT                                 0x0004
#define PHY_TIMER3_EVT                                 0x0008
#define PHY_TIMER4_EVT                                 0x0010
#define PHY_TIMER5_EVT                                 0x0020
#define PHY_TIMER6_EVT                                 0x0040
#define PHY_TIMER7_EVT                                 0x0080
#define PHY_TIMER8_EVT                                 0x0100
#define PHY_TIMER9_EVT                                 0x0200
#define PHY_TIMER10_EVT                                0x0400
#define PHY_TIMER11_EVT                                0x0800
#define PHY_TIMER12_EVT                                0x1000
#define PHY_TIMER13_EVT                                0x2000
#define PHY_TIMER14_EVT                                0x4000
#define PHY_TIMER15_EVT                                0x8000

/*********************************************************************
 * MACROS
 */
extern uint8_t simpleBLEPeripheral_TaskID;
extern uint8_t phy_timer_TaskID;
extern volatile gaprole_States_t g_gap_state;

/*********************************************************************
    FUNCTIONS
*/

/*
    Task Initialization for the BLE Application
*/
extern void SimpleBLEPeripheral_Init( uint8 task_id );
extern void phy_timer_init(uint8 task_id);

/*
    Task Event Processor for the BLE Application
*/
extern uint16 SimpleBLEPeripheral_ProcessEvent( uint8 task_id, uint16 events );
extern uint16 phy_timer_ProcessEvent(uint8 task_id, uint16 events);

void ty_mainloop_timer_start(void);
void ty_mainloop_timer_stop(void);

/*********************************************************************
*********************************************************************/

#ifdef __cplusplus
}
#endif

#endif /* SIMPLEBLEPERIPHERAL_H */
