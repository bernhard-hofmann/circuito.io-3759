#include "Arduino.h"
#include "Servo.h"
#include "Button.h"

// Pin Definitions
#define TOGGLESWITCH_PIN 7 // D4
#define SERVO_1_PIN      6 // D3
#define SERVO_2_PIN      5 // D2

// Global variables and defines
#define msDelayForServo1 500 // Controls how long the servo takes to turn as far as needed
#define msDelayForServo2 800 // Controls how long the servo takes to turn as far as needed

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
  bool ToggleSwitchVal = ToggleSwitch.read();
  Serial.print(F("ToggleSwitch: ")); 
  Serial.println(ToggleSwitchVal);

  if (ToggleSwitchVal) {
    moveServo1Up();
    moveServo2();
    moveServo1Down();
  }
}

void moveServo1Up()
{
  // 1. attach the servo to correct pin to control it.
  servo_1.attach(SERVO_1_PIN);
  // Turns the servo clockwise at full speed.
  servo_1.write(180);
  // Wait for a set time to determine how far the motor turns.
  delay(msDelayForServo1);
  // Sending 90 stops the servo
  servo_1.write(90);
}

void moveServo1Down()
{
  // Turns the servo counter clockwise at full speed.
  servo_1.write(0);
  // Wait for a set time to determine how far the motor turns.
  delay(msDelayForServo1);
  // Sending 90 stops the servo
  servo_1.write(90);
  // Release the servo to conserve power. When detached the servo will NOT hold it's position under stress.
  servo_1.detach();
}

void moveServo2()
{
  // 1. attach the servo to correct pin to control it.
  servo_2.attach(SERVO_2_PIN);
  // Turns the servo clockwise at full speed.
  servo_2.write(180);
  // Wait for a set time to determine how far the motor turns.
  delay(msDelayForServo2);
  // Turns the servo counter clockwise at full speed.
  servo_2.write(0);
  // Wait for a set time to determine how far the motor turns.
  delay(msDelayForServo2);
  // Sending 90 stops the servo
  servo_2.write(90);
  // Release the servo to conserve power. When detached the servo will NOT hold it's position under stress.
  servo_2.detach();
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




