/**
    BasicBot - The basic working bot, using DCMotorBot library.

    Requires DCMotorBot Library available at http://hardwarefun.com/projects/dc-motor-bot
*/

/*
 * Copyright 2012  Sudar Muthu  (http://hardwarefun.com)
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <sudar@sudarmuthu.com> wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer or coffee in return - Sudar
 * ----------------------------------------------------------------------------
 */
#include <DCMotorBot.h>

DCMotorBot bot;

void setup() {

    // initialize bot pins
    bot.setEnablePins(3, 5);
    bot.setControlPins(2, 4, 7, 8);

    // for debugging
    pinMode(13, OUTPUT);

}

void loop() {
    digitalWrite(13, LOW);
    bot.moveForward();

    delay(10000);

    // change direction
    digitalWrite(13, HIGH);
    bot.moveBackward();

    delay(10000);
}

