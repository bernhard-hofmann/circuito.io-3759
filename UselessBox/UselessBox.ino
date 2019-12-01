#include "Arduino.h"
#include "Servo.h"
#include "Button.h"

// Pin Definitions
#define SERVO_1_PIN      2
#define SERVO_2_PIN      3
#define TOGGLESWITCH_PIN 4

// Global variables and defines

// object initialization
Servo servo_1;
Servo servo_2;
Button ToggleSwitch(TOGGLESWITCH_PIN);

// Setup the essentials for your circuit to work. It runs first every time your circuit is powered with electricity.
void setup() 
{
  // Setup Serial which is useful for debugging
  // Use the Serial Monitor to view printed messages
  Serial.begin(9600);
  while (!Serial) ; // wait for serial port to connect. Needed for native USB
  Serial.println("start");

  ToggleSwitch.init();
}

// Main logic of your circuit. It defines the interaction between the components you selected. After setup, it runs over and over again, in an eternal loop.
void loop() 
{
  // Continuous Rotation Micro Servo - FS90R #1 - Test Code
  // The servo will rotate CW in full speed, CCW in full speed, and will stop  with an interval of 2000 milliseconds (2 seconds) 
  servo_1.attach(SERVO_1_PIN);    // 1. attach the servo to correct pin to control it.
  servo_1.write(180);             // 2. turns servo CW in full speed. change the value in the brackets (180) to change the speed. As these numbers move closer to 90, the servo will move slower in that direction.
  delay(200);                     // 3. waits 2000 milliseconds (2 sec). change the value in the brackets (2000) for a longer or shorter delay in milliseconds.
  servo_1.write(0);               // 4. turns servo CCW in full speed. change the value in the brackets (0) to change the speed. As these numbers move closer to 90, the servo will move slower in that direction.
  delay(200);                     // 5. waits 2000 milliseconds (2 sec). change the value in the brackets (2000) for a longer or shorter delay in milliseconds.
  servo_1.write(90);              // 6. sending 90 stops the servo 
  delay(200);                     // 7. waits 2000 milliseconds (2 sec). change the value in the brackets (2000) for a longer or shorter delay in milliseconds.
  servo_1.detach();               // 8. release the servo to conserve power. When detached the servo will NOT hold it's position under stress.

  // Continuous Rotation Micro Servo - FS90R #2 - Test Code
  // The servo will rotate CW in full speed, CCW in full speed, and will stop  with an interval of 2000 milliseconds (2 seconds) 
  servo_2.attach(SERVO_1_PIN);    // 1. attach the servo to correct pin to control it.
  servo_2.write(180);             // 2. turns servo CW in full speed. change the value in the brackets (180) to change the speed. As these numbers move closer to 90, the servo will move slower in that direction.
  delay(200);                     // 3. waits 2000 milliseconds (2 sec). change the value in the brackets (2000) for a longer or shorter delay in milliseconds.
  servo_2.write(0);               // 4. turns servo CCW in full speed. change the value in the brackets (0) to change the speed. As these numbers move closer to 90, the servo will move slower in that direction.
  delay(200);                     // 5. waits 2000 milliseconds (2 sec). change the value in the brackets (2000) for a longer or shorter delay in milliseconds.
  servo_2.write(90);              // 6. sending 90 stops the servo 
  delay(200);                     // 7. waits 2000 milliseconds (2 sec). change the value in the brackets (2000) for a longer or shorter delay in milliseconds.
  servo_2.detach();               // 8. release the servo to conserve power. When detached the servo will NOT hold it's position under stress.

  bool ToggleSwitchVal = ToggleSwitch.read();
  Serial.print(F("ToggleSwitch: ")); 
  Serial.println(ToggleSwitchVal);
}






/*******************************************************
 * 
 *    Circuito.io is an automatic generator of schematics and code for off
 *    the shelf hardware combinations.
 * 
 *    Copyright (C) 2016 Roboplan Technologies Ltd.
 * 
 *    This program is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 * 
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 * 
 *    You should have received a copy of the GNU General Public License
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 *    In addition, and without limitation, to the disclaimers of warranties 
 *    stated above and in the GNU General Public License version 3 (or any 
 *    later version), Roboplan Technologies Ltd. ("Roboplan") offers this 
 *    program subject to the following warranty disclaimers and by using 
 *    this program you acknowledge and agree to the following:
 *    THIS PROGRAM IS PROVIDED ON AN "AS IS" AND "AS AVAILABLE" BASIS, AND 
 *    WITHOUT WARRANTIES OF ANY KIND EITHER EXPRESS OR IMPLIED.  ROBOPLAN 
 *    HEREBY DISCLAIMS ALL WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT 
 *    NOT LIMITED TO IMPLIED WARRANTIES OF MERCHANTABILITY, TITLE, FITNESS 
 *    FOR A PARTICULAR PURPOSE, NON-INFRINGEMENT, AND THOSE ARISING BY 
 *    STATUTE OR FROM A COURSE OF DEALING OR USAGE OF TRADE. 
 *    YOUR RELIANCE ON, OR USE OF THIS PROGRAM IS AT YOUR SOLE RISK.
 *    ROBOPLAN DOES NOT GUARANTEE THAT THE PROGRAM WILL BE FREE OF, OR NOT 
 *    SUSCEPTIBLE TO, BUGS, SECURITY BREACHES, OR VIRUSES. ROBOPLAN DOES 
 *    NOT WARRANT THAT YOUR USE OF THE PROGRAM, INCLUDING PURSUANT TO 
 *    SCHEMATICS, INSTRUCTIONS OR RECOMMENDATIONS OF ROBOPLAN, WILL BE SAFE 
 *    FOR PERSONAL USE OR FOR PRODUCTION OR COMMERCIAL USE, WILL NOT 
 *    VIOLATE ANY THIRD PARTY RIGHTS, WILL PROVIDE THE INTENDED OR DESIRED
 *    RESULTS, OR OPERATE AS YOU INTENDED OR AS MAY BE INDICATED BY ROBOPLAN. 
 *    YOU HEREBY WAIVE, AGREE NOT TO ASSERT AGAINST, AND RELEASE ROBOPLAN, 
 *    ITS LICENSORS AND AFFILIATES FROM, ANY CLAIMS IN CONNECTION WITH ANY OF 
 *    THE ABOVE. 
 ********************************************************/


