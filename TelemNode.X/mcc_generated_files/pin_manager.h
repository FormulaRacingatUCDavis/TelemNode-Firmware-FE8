/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18F26K83
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0


#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RB3 procedures
#define RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define RB3_GetValue()              PORTBbits.RB3
#define RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define RB3_SetPullup()             do { WPUBbits.WPUB3 = 1; } while(0)
#define RB3_ResetPullup()           do { WPUBbits.WPUB3 = 0; } while(0)
#define RB3_SetAnalogMode()         do { ANSELBbits.ANSELB3 = 1; } while(0)
#define RB3_SetDigitalMode()        do { ANSELBbits.ANSELB3 = 0; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSELB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSELB4 = 0; } while(0)

// get/set Sensor1 aliases
#define Sensor1_TRIS                 TRISCbits.TRISC0
#define Sensor1_LAT                  LATCbits.LATC0
#define Sensor1_PORT                 PORTCbits.RC0
#define Sensor1_WPU                  WPUCbits.WPUC0
#define Sensor1_OD                   ODCONCbits.ODCC0
#define Sensor1_ANS                  ANSELCbits.ANSELC0
#define Sensor1_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define Sensor1_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define Sensor1_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define Sensor1_GetValue()           PORTCbits.RC0
#define Sensor1_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define Sensor1_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define Sensor1_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define Sensor1_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define Sensor1_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define Sensor1_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define Sensor1_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define Sensor1_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set Sensor2 aliases
#define Sensor2_TRIS                 TRISCbits.TRISC1
#define Sensor2_LAT                  LATCbits.LATC1
#define Sensor2_PORT                 PORTCbits.RC1
#define Sensor2_WPU                  WPUCbits.WPUC1
#define Sensor2_OD                   ODCONCbits.ODCC1
#define Sensor2_ANS                  ANSELCbits.ANSELC1
#define Sensor2_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define Sensor2_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define Sensor2_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define Sensor2_GetValue()           PORTCbits.RC1
#define Sensor2_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define Sensor2_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define Sensor2_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define Sensor2_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define Sensor2_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define Sensor2_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define Sensor2_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define Sensor2_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set Sensor3 aliases
#define Sensor3_TRIS                 TRISCbits.TRISC5
#define Sensor3_LAT                  LATCbits.LATC5
#define Sensor3_PORT                 PORTCbits.RC5
#define Sensor3_WPU                  WPUCbits.WPUC5
#define Sensor3_OD                   ODCONCbits.ODCC5
#define Sensor3_ANS                  ANSELCbits.ANSELC5
#define Sensor3_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define Sensor3_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define Sensor3_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define Sensor3_GetValue()           PORTCbits.RC5
#define Sensor3_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define Sensor3_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define Sensor3_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define Sensor3_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define Sensor3_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define Sensor3_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define Sensor3_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define Sensor3_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set Sensor4 aliases
#define Sensor4_TRIS                 TRISCbits.TRISC6
#define Sensor4_LAT                  LATCbits.LATC6
#define Sensor4_PORT                 PORTCbits.RC6
#define Sensor4_WPU                  WPUCbits.WPUC6
#define Sensor4_OD                   ODCONCbits.ODCC6
#define Sensor4_ANS                  ANSELCbits.ANSELC6
#define Sensor4_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define Sensor4_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define Sensor4_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define Sensor4_GetValue()           PORTCbits.RC6
#define Sensor4_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define Sensor4_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define Sensor4_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define Sensor4_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define Sensor4_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define Sensor4_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define Sensor4_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define Sensor4_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/