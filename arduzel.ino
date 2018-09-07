#include <SPI.h>
#include <EEPROM.h>
#include <Arduboy2.h>
#include <Arduboy2Beep.h>
#include <Arduboy2Audio.h>
#include <math.h>

#include "game.h"
#include "renderer.h"
#include "util.h"
#include "sfx.h"

Arduboy2 arduboy;
Renderer renderer(arduboy);
Game game(arduboy, renderer);

void setup() {
    arduboy.boot();
    //TODO: honor EEPROM settings
    Arduboy2Audio::on();
    arduboy.setFrameRate(60);
    Sfx::init();

#ifdef SERIAL_LOG
    Serial.begin(9600);
    delay(1500);
#endif
    LOG("setup done");
}

uint8_t loopCounter = 1;

void loop() {
    if (!arduboy.nextFrame()) {
        return;
    }

    loopCounter += 1;

    if (loopCounter == 61) {
        loopCounter = 1;
    }

    arduboy.clear();
    arduboy.pollButtons();
    
    Sfx::update();
    game.update(loopCounter);
    game.render(loopCounter);
    arduboy.display();
}

