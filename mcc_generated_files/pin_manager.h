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
        Device            :  PIC16F1938
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

// get/set RANDOM_SEED aliases
#define RANDOM_SEED_TRIS                 TRISAbits.TRISA0
#define RANDOM_SEED_LAT                  LATAbits.LATA0
#define RANDOM_SEED_PORT                 PORTAbits.RA0
#define RANDOM_SEED_ANS                  ANSELAbits.ANSA0
#define RANDOM_SEED_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define RANDOM_SEED_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define RANDOM_SEED_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RANDOM_SEED_GetValue()           PORTAbits.RA0
#define RANDOM_SEED_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define RANDOM_SEED_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define RANDOM_SEED_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define RANDOM_SEED_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set ANODE_0 aliases
#define ANODE_0_TRIS                 TRISAbits.TRISA1
#define ANODE_0_LAT                  LATAbits.LATA1
#define ANODE_0_PORT                 PORTAbits.RA1
#define ANODE_0_ANS                  ANSELAbits.ANSA1
#define ANODE_0_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define ANODE_0_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define ANODE_0_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define ANODE_0_GetValue()           PORTAbits.RA1
#define ANODE_0_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define ANODE_0_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define ANODE_0_SetAnalogMode()      do { ANSELAbits.ANSA1 = 1; } while(0)
#define ANODE_0_SetDigitalMode()     do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set ANODE_1 aliases
#define ANODE_1_TRIS                 TRISAbits.TRISA2
#define ANODE_1_LAT                  LATAbits.LATA2
#define ANODE_1_PORT                 PORTAbits.RA2
#define ANODE_1_ANS                  ANSELAbits.ANSA2
#define ANODE_1_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define ANODE_1_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define ANODE_1_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define ANODE_1_GetValue()           PORTAbits.RA2
#define ANODE_1_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define ANODE_1_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define ANODE_1_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define ANODE_1_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set ANODE_2 aliases
#define ANODE_2_TRIS                 TRISAbits.TRISA3
#define ANODE_2_LAT                  LATAbits.LATA3
#define ANODE_2_PORT                 PORTAbits.RA3
#define ANODE_2_ANS                  ANSELAbits.ANSA3
#define ANODE_2_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define ANODE_2_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define ANODE_2_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define ANODE_2_GetValue()           PORTAbits.RA3
#define ANODE_2_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define ANODE_2_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define ANODE_2_SetAnalogMode()      do { ANSELAbits.ANSA3 = 1; } while(0)
#define ANODE_2_SetDigitalMode()     do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set ANODE_3 aliases
#define ANODE_3_TRIS                 TRISAbits.TRISA4
#define ANODE_3_LAT                  LATAbits.LATA4
#define ANODE_3_PORT                 PORTAbits.RA4
#define ANODE_3_ANS                  ANSELAbits.ANSA4
#define ANODE_3_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define ANODE_3_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define ANODE_3_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define ANODE_3_GetValue()           PORTAbits.RA4
#define ANODE_3_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define ANODE_3_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define ANODE_3_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define ANODE_3_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set ANODE_4 aliases
#define ANODE_4_TRIS                 TRISAbits.TRISA5
#define ANODE_4_LAT                  LATAbits.LATA5
#define ANODE_4_PORT                 PORTAbits.RA5
#define ANODE_4_ANS                  ANSELAbits.ANSA5
#define ANODE_4_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define ANODE_4_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define ANODE_4_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define ANODE_4_GetValue()           PORTAbits.RA5
#define ANODE_4_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define ANODE_4_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define ANODE_4_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define ANODE_4_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set ANODE_6 aliases
#define ANODE_6_TRIS                 TRISAbits.TRISA6
#define ANODE_6_LAT                  LATAbits.LATA6
#define ANODE_6_PORT                 PORTAbits.RA6
#define ANODE_6_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define ANODE_6_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define ANODE_6_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define ANODE_6_GetValue()           PORTAbits.RA6
#define ANODE_6_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define ANODE_6_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set ANODE_5 aliases
#define ANODE_5_TRIS                 TRISAbits.TRISA7
#define ANODE_5_LAT                  LATAbits.LATA7
#define ANODE_5_PORT                 PORTAbits.RA7
#define ANODE_5_SetHigh()            do { LATAbits.LATA7 = 1; } while(0)
#define ANODE_5_SetLow()             do { LATAbits.LATA7 = 0; } while(0)
#define ANODE_5_Toggle()             do { LATAbits.LATA7 = ~LATAbits.LATA7; } while(0)
#define ANODE_5_GetValue()           PORTAbits.RA7
#define ANODE_5_SetDigitalInput()    do { TRISAbits.TRISA7 = 1; } while(0)
#define ANODE_5_SetDigitalOutput()   do { TRISAbits.TRISA7 = 0; } while(0)

// get/set CATHODE_7 aliases
#define CATHODE_7_TRIS                 TRISBbits.TRISB0
#define CATHODE_7_LAT                  LATBbits.LATB0
#define CATHODE_7_PORT                 PORTBbits.RB0
#define CATHODE_7_WPU                  WPUBbits.WPUB0
#define CATHODE_7_ANS                  ANSELBbits.ANSB0
#define CATHODE_7_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define CATHODE_7_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define CATHODE_7_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define CATHODE_7_GetValue()           PORTBbits.RB0
#define CATHODE_7_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define CATHODE_7_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define CATHODE_7_SetPullup()          do { WPUBbits.WPUB0 = 1; } while(0)
#define CATHODE_7_ResetPullup()        do { WPUBbits.WPUB0 = 0; } while(0)
#define CATHODE_7_SetAnalogMode()      do { ANSELBbits.ANSB0 = 1; } while(0)
#define CATHODE_7_SetDigitalMode()     do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set CATHODE_6 aliases
#define CATHODE_6_TRIS                 TRISBbits.TRISB1
#define CATHODE_6_LAT                  LATBbits.LATB1
#define CATHODE_6_PORT                 PORTBbits.RB1
#define CATHODE_6_WPU                  WPUBbits.WPUB1
#define CATHODE_6_ANS                  ANSELBbits.ANSB1
#define CATHODE_6_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define CATHODE_6_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define CATHODE_6_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define CATHODE_6_GetValue()           PORTBbits.RB1
#define CATHODE_6_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define CATHODE_6_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define CATHODE_6_SetPullup()          do { WPUBbits.WPUB1 = 1; } while(0)
#define CATHODE_6_ResetPullup()        do { WPUBbits.WPUB1 = 0; } while(0)
#define CATHODE_6_SetAnalogMode()      do { ANSELBbits.ANSB1 = 1; } while(0)
#define CATHODE_6_SetDigitalMode()     do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set CATHODE_5 aliases
#define CATHODE_5_TRIS                 TRISBbits.TRISB2
#define CATHODE_5_LAT                  LATBbits.LATB2
#define CATHODE_5_PORT                 PORTBbits.RB2
#define CATHODE_5_WPU                  WPUBbits.WPUB2
#define CATHODE_5_ANS                  ANSELBbits.ANSB2
#define CATHODE_5_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define CATHODE_5_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define CATHODE_5_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define CATHODE_5_GetValue()           PORTBbits.RB2
#define CATHODE_5_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define CATHODE_5_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define CATHODE_5_SetPullup()          do { WPUBbits.WPUB2 = 1; } while(0)
#define CATHODE_5_ResetPullup()        do { WPUBbits.WPUB2 = 0; } while(0)
#define CATHODE_5_SetAnalogMode()      do { ANSELBbits.ANSB2 = 1; } while(0)
#define CATHODE_5_SetDigitalMode()     do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set CATHODE_4 aliases
#define CATHODE_4_TRIS                 TRISBbits.TRISB3
#define CATHODE_4_LAT                  LATBbits.LATB3
#define CATHODE_4_PORT                 PORTBbits.RB3
#define CATHODE_4_WPU                  WPUBbits.WPUB3
#define CATHODE_4_ANS                  ANSELBbits.ANSB3
#define CATHODE_4_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define CATHODE_4_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define CATHODE_4_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define CATHODE_4_GetValue()           PORTBbits.RB3
#define CATHODE_4_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define CATHODE_4_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define CATHODE_4_SetPullup()          do { WPUBbits.WPUB3 = 1; } while(0)
#define CATHODE_4_ResetPullup()        do { WPUBbits.WPUB3 = 0; } while(0)
#define CATHODE_4_SetAnalogMode()      do { ANSELBbits.ANSB3 = 1; } while(0)
#define CATHODE_4_SetDigitalMode()     do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set CATHODE_3 aliases
#define CATHODE_3_TRIS                 TRISBbits.TRISB4
#define CATHODE_3_LAT                  LATBbits.LATB4
#define CATHODE_3_PORT                 PORTBbits.RB4
#define CATHODE_3_WPU                  WPUBbits.WPUB4
#define CATHODE_3_ANS                  ANSELBbits.ANSB4
#define CATHODE_3_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define CATHODE_3_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define CATHODE_3_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define CATHODE_3_GetValue()           PORTBbits.RB4
#define CATHODE_3_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define CATHODE_3_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define CATHODE_3_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define CATHODE_3_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define CATHODE_3_SetAnalogMode()      do { ANSELBbits.ANSB4 = 1; } while(0)
#define CATHODE_3_SetDigitalMode()     do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set CATHODE_2 aliases
#define CATHODE_2_TRIS                 TRISBbits.TRISB5
#define CATHODE_2_LAT                  LATBbits.LATB5
#define CATHODE_2_PORT                 PORTBbits.RB5
#define CATHODE_2_WPU                  WPUBbits.WPUB5
#define CATHODE_2_ANS                  ANSELBbits.ANSB5
#define CATHODE_2_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define CATHODE_2_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define CATHODE_2_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define CATHODE_2_GetValue()           PORTBbits.RB5
#define CATHODE_2_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define CATHODE_2_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define CATHODE_2_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define CATHODE_2_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define CATHODE_2_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define CATHODE_2_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set CATHODE_1 aliases
#define CATHODE_1_TRIS                 TRISBbits.TRISB6
#define CATHODE_1_LAT                  LATBbits.LATB6
#define CATHODE_1_PORT                 PORTBbits.RB6
#define CATHODE_1_WPU                  WPUBbits.WPUB6
#define CATHODE_1_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define CATHODE_1_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define CATHODE_1_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define CATHODE_1_GetValue()           PORTBbits.RB6
#define CATHODE_1_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define CATHODE_1_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define CATHODE_1_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define CATHODE_1_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)

// get/set CATHODE_0 aliases
#define CATHODE_0_TRIS                 TRISBbits.TRISB7
#define CATHODE_0_LAT                  LATBbits.LATB7
#define CATHODE_0_PORT                 PORTBbits.RB7
#define CATHODE_0_WPU                  WPUBbits.WPUB7
#define CATHODE_0_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define CATHODE_0_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define CATHODE_0_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define CATHODE_0_GetValue()           PORTBbits.RB7
#define CATHODE_0_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define CATHODE_0_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define CATHODE_0_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define CATHODE_0_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)

// get/set ANODE_7 aliases
#define ANODE_7_TRIS                 TRISCbits.TRISC0
#define ANODE_7_LAT                  LATCbits.LATC0
#define ANODE_7_PORT                 PORTCbits.RC0
#define ANODE_7_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define ANODE_7_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define ANODE_7_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define ANODE_7_GetValue()           PORTCbits.RC0
#define ANODE_7_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define ANODE_7_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)

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