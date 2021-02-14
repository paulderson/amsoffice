#ifndef office4_h
#define office4_h

#include "emptyRoom.h"
#include "entityTypes.h"
#include "entityExpressions.h"


const uint8_t PROGMEM office4_map[568] = {
    // array length (16 bit, little endian), map width, map height (in rooms)
    56, 2, 7, 6,
    // room indices (16 bit, little endian), 84 bytes
    // room 0, index 0
    0, 0,
    // room 1, index 11
    11, 0,
    // room 2, index 24
    24, 0,
    // room 3, index 36
    36, 0,
    // room 4, index 48
    48, 0,
    // room 5, index 58
    58, 0,
    // room 6, index 68
    68, 0,
    // room 7, index 78
    78, 0,
    // room 8, index 89
    89, 0,
    // room 9, index 103
    103, 0,
    // room 10, index 116
    116, 0,
    // room 11, index 128
    128, 0,
    // room 12, index 137
    137, 0,
    // room 13, index 146
    146, 0,
    // room 14, index 157
    157, 0,
    // room 15, index 169
    169, 0,
    // room 16, index 182
    182, 0,
    // room 17, index 196
    196, 0,
    // room 18, index 208
    208, 0,
    // room 19, index 220
    220, 0,
    // room 20, index 233
    233, 0,
    // room 21, index 245
    245, 0,
    // room 22, index 256
    0, 1,
    // room 23, index 267
    11, 1,
    // room 24, index 280
    24, 1,
    // room 25, index 288
    32, 1,
    // room 26, index 294
    38, 1,
    // room 27, index 304
    48, 1,
    // room 28, index 316
    60, 1,
    // room 29, index 328
    72, 1,
    // room 30, index 340
    84, 1,
    // room 31, index 354
    98, 1,
    // room 32, index 363
    107, 1,
    // room 33, index 374
    118, 1,
    // room 34, index 387
    131, 1,
    // room 35, index 397
    141, 1,
    // room 36, index 409
    153, 1,
    // room 37, index 423
    167, 1,
    // room 38, index 437
    181, 1,
    // room 39, index 447
    191, 1,
    // room 40, index 457
    201, 1,
    // room 41, index 471
    215, 1,

    // compressed room data, 480 bytes
    0x1f, 0x2b, 0x20, 0x55, 0x50, 0x2, 0x5, 0x55, 0x0, 0x2f, 0x20, 0xbb, 0x4b, 0xbb, 0x9f, 0x20, 0xc0, 0x4, 0x0, 0xc, 0x0, 0x43, 0x30, 0xa0, 0x1f, 0x2b, 0x20, 0xf0, 0x50, 0x44, 0x4f, 0x0, 0x40, 0x43, 0x83, 0x30, 0xf2, 0xb9, 0x5, 0x55, 0x7, 0xc0, 0x55, 0x0, 0x7c, 0xf, 0x13, 0xa0, 0x1f, 0x1b, 0x92, 0xf1, 0xc, 0x2f, 0x20, 0x80, 0xf0, 0x3a, 0x1f, 0x1b, 0x92, 0xf1, 0xc, 0xf2, 0xc, 0x8f, 0x3, 0x4, 0x1f, 0x1b, 0x92, 0xf1, 0xc, 0x2f, 0x10, 0xc2, 0xf1, 0xc, 0x2f, 0x20, 0x20, 0x55, 0x50, 0x2, 0x5, 0x55, 0x0, 0x2f, 0x20, 0x0, 0x4b, 0xb0, 0x90, 0x4, 0x0, 0xc, 0x0, 0x40, 0x0, 0xc0, 0x4, 0x33, 0x3a, 0x10, 0xf0, 0xb9, 0x2f, 0x5, 0x0, 0x2f, 0x5, 0xc, 0x83, 0x33, 0x3, 0xa0, 0x2f, 0x1b, 0x98, 0x5, 0x50, 0x5c, 0x2f, 0x10, 0xc2, 0xf, 0x3, 0xa0, 0x40, 0xf2, 0x40, 0x47, 0xf0, 0x40, 0x0, 0xf6, 0x40, 0xf1, 0x40, 0x44, 0xf1, 0x4, 0x4f, 0x10, 0xf4, 0x40, 0x2f, 0x10, 0xc2, 0xf1, 0xc, 0x2f, 0x10, 0xc8, 0xf0, 0x30, 0xa0, 0x20, 0x55, 0x50, 0x2, 0x5, 0x55, 0x0, 0x2f, 0x20, 0x8f, 0x13, 0x40, 0x0, 0x4b, 0xbb, 0x9f, 0x20, 0xc0, 0x4, 0x0, 0xc, 0x40, 0x43, 0x33, 0xa0, 0x1b, 0xbb, 0x4, 0x92, 0x55, 0xf0, 0x2, 0x55, 0x0, 0x5c, 0x83, 0x33, 0x3, 0xa0, 0x20, 0xf1, 0x48, 0x4, 0x74, 0x44, 0x20, 0x0, 0x44, 0x42, 0xf, 0x14, 0x1f, 0x1b, 0x92, 0xf0, 0x5, 0xc2, 0xf0, 0x5, 0xc8, 0x33, 0x30, 0x44, 0x1f, 0x2b, 0x25, 0x50, 0x55, 0x2, 0x55, 0x5, 0x50, 0x20, 0x0, 0x55, 0x0, 0xb1, 0x9b, 0x40, 0x4f, 0x20, 0xcf, 0x0, 0x55, 0xc0, 0x55, 0x0, 0xc, 0x4f, 0x1b, 0x42, 0xf1, 0xc, 0x20, 0x55, 0x0, 0xc2, 0xf1, 0xc, 0x40, 0xf1, 0x42, 0x4, 0x44, 0x64, 0x2f, 0x10, 0x42, 0xf, 0x14, 0x1b, 0xbb, 0xb, 0x92, 0x0, 0x5, 0x5c, 0x25, 0x50, 0x0, 0xc8, 0xf2, 0x30, 0x20, 0xf1, 0x42, 0xf2, 0x2, 0xf2, 0xf, 0x33, 0xf0, 0x40, 0x44, 0xfa, 0xf, 0x33, 0x20, 0x0, 0x55, 0xf1, 0x5, 0x5f, 0x10, 0x55, 0xf, 0x33, 0x5, 0x50, 0x0, 0xc0, 0x55, 0x5, 0x5c, 0xf0, 0x5, 0x5c, 0xf2, 0x3a, 0x2f, 0x10, 0xc2, 0x5, 0x50, 0xc, 0x20, 0x55, 0x0, 0x2, 0xf2, 0x0, 0x20, 0xf1, 0x42, 0x0, 0x74, 0x44, 0x0, 0xf1, 0xb3, 0x3, 0x30, 0x33, 0x14, 0xbb, 0x19, 0xb2, 0x5, 0x0, 0x9, 0xbb, 0xb0, 0x80, 0xa0, 0x33, 0x30, 0x0, 0xf3, 0xb0, 0x1b, 0x90, 0x5, 0xf1, 0x5, 0xf4, 0x0, 0xf2, 0xb4, 0x5, 0x0, 0x50, 0x40, 0x5, 0x5, 0x4, 0xf2, 0x4, 0x4f, 0xb, 0x6b, 0x4f, 0x0, 0x60, 0x40, 0x0, 0x60, 0x4, 0x0, 0x6, 0x4, 0xf2, 0xb9, 0xf2, 0xc, 0xf2, 0xc, 0x44, 0x40, 0x44, 0x40, 0x2f, 0x10, 0xc2, 0x5, 0x50, 0xc, 0x20, 0x50, 0x0, 0xc4, 0xf1, 0x3a, 0x20, 0xb9, 0xb, 0x92, 0x0, 0xc0, 0xc, 0x20, 0xc, 0x0, 0xc8, 0x33, 0xa3, 0x3a, 0x2b, 0x94, 0x0, 0x2, 0xc, 0x20, 0x50, 0x20, 0xc2, 0x5, 0x8, 0x3a, 0x83, 0x33, 0xf4, 0x5, 0x0, 0x50, 0xc0, 0x50, 0x5, 0xc, 0xf2, 0x37, 0xf2, 0x4, 0x5, 0x55, 0x0, 0x4f, 0x30, 0xf1, 0x73, 0x40, 0x40, 0x0, 0x60, 0x44, 0x0, 0x60, 0x4, 0x0, 0x6, 0x0, 0x44, 0x33, 0x66, 0x64, 0x44, 0x40, 0xf0, 0x4f, 0x10, 0x44, 0xf1, 0xf, 0x44
};

const uint8_t PROGMEM office4_room0_0[] = {
    7, // number of entities

    // entity 0
    miscAndEntityType(0, POT),
    xy(16, 44),

    // entity 1
    miscAndEntityType(HEART, POT),
    xy(24, 8),

    // entity 2
    miscAndEntityType(0, POT),
    xy(48, 8),

    // entity 3
    miscAndEntityType(HEART, POT),
    xy(88, 44),

    // entity 4
    miscAndEntityType(0, POT),
    xy(88, 28),

    // entity 5
    miscAndEntityType(0, BLOB),
    xy(24, 20),

    // entity 6
    miscAndEntityType(0, SNAKE),
    xy(40, 52),
};



const uint8_t PROGMEM office4_room0_1[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(0, BLOB),
    xy(96, 32),

    // entity 1
    miscAndEntityType(0, SNAKE),
    xy(48, 12),

    // entity 2
    miscAndEntityType(0, BLOB),
    xy(24, 36),
};



const uint8_t PROGMEM office4_room0_2[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(0, BLOB),
    xy(24, 16),

    // entity 1
    miscAndEntityType(0, BLOB),
    xy(48, 48),

    // entity 2
    miscAndEntityType(0, SNAKE),
    xy(96, 28),
};



const uint8_t PROGMEM office4_room0_3[] = {
    6, // number of entities

    // entity 0
    miscAndEntityType(LAST_ENEMY_HAS_HEART_CONTAINER, SNAKE),
    xy(24, 16),

    // entity 1
    miscAndEntityType(LAST_ENEMY_HAS_HEART_CONTAINER, BLOB),
    xy(88, 40),

    // entity 2
    miscAndEntityType(LAST_ENEMY_HAS_HEART_CONTAINER, SNAKE),
    xy(48, 32),

    // entity 3
    miscAndEntityType(LAST_ENEMY_HAS_HEART_CONTAINER, BLOB),
    xy(16, 44),

    // entity 4
    miscAndEntityType(LAST_ENEMY_HAS_HEART_CONTAINER, BLOB),
    xy(72, 24),

    // entity 5
    miscAndEntityType(LAST_ENEMY_HAS_HEART_CONTAINER, BAT),
    xy(40, 40),
};



const uint8_t PROGMEM office4_room0_4[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, BLOB),
    xy(24, 12),

    // entity 1
    miscAndEntityType(0, SNAKE),
    xy(56, 8),
};



const uint8_t PROGMEM office4_room0_5[] = {
    5, // number of entities

    // entity 0
    miscAndEntityType(LAST_ENEMY_HAS_KEY, SKELETON),
    xy(16, 8),

    // entity 1
    miscAndEntityType(LAST_ENEMY_HAS_KEY, SKELETON),
    xy(88, 16),

    // entity 2
    miscAndEntityType(LAST_ENEMY_HAS_KEY, SKELETON),
    xy(16, 28),

    // entity 3
    miscAndEntityType(LAST_ENEMY_HAS_KEY, SKELETON),
    xy(64, 12),

    // entity 4
    miscAndEntityType(LAST_ENEMY_HAS_KEY, SKELETON),
    xy(72, 40),
};



const uint8_t PROGMEM office4_room1_0[] = {
    8, // number of entities

    // entity 0
    miscAndEntityType(VERTICAL, TRIGGER_DOOR),
    xy(32, 16),

    // entity 1
    miscAndEntityType(SLAM_SHUT, BAT),
    xy(72, 16),

    // entity 2
    miscAndEntityType(SLAM_SHUT, BAT),
    xy(56, 16),

    // entity 3
    miscAndEntityType(SLAM_SHUT, BAT),
    xy(56, 52),

    // entity 4
    miscAndEntityType(SLAM_SHUT, BAT),
    xy(96, 44),

    // entity 5
    miscAndEntityType(SLAM_SHUT, BAT),
    xy(88, 36),

    // entity 6
    miscAndEntityType(SLAM_SHUT, BAT),
    xy(72, 44),

    // entity 7
    miscAndEntityType(SLAM_SHUT, BAT),
    xy(64, 20),
};



const uint8_t PROGMEM office4_room1_1[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(KEY, CHEST),
    xy(64, 16),

    // entity 1
    miscAndEntityType(0, SNAKE),
    xy(64, 52),

    // entity 2
    miscAndEntityType(0, BLOB),
    xy(96, 48),
};



const uint8_t PROGMEM office4_room1_2[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, GHOST),
    xy(8, 12),

    // entity 1
    miscAndEntityType(0, HUMAN),
    xy(8, 36),
};



const uint8_t PROGMEM office4_room1_3[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(2, TELEPORTER),
    xy(80, 20),

    // entity 1
    miscAndEntityType(SLAM_SHUT, BAT),
    xy(88, 40),
};



const uint8_t PROGMEM office4_room1_4[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(1, TELEPORTER),
    xy(48, 16),

    // entity 1
    miscAndEntityType(0, LOCK),
    xy(32, 16),
};



const uint8_t PROGMEM office4_room1_5[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(0, SNAKE),
    xy(80, 44),

    // entity 1
    miscAndEntityType(0, SNAKE),
    xy(40, 36),

    // entity 2
    miscAndEntityType(0, SNAKE),
    xy(24, 52),
};



const uint8_t PROGMEM office4_room2_0[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(0, SNAKE),
    xy(56, 12),

    // entity 1
    miscAndEntityType(0, SNAKE),
    xy(16, 24),

    // entity 2
    miscAndEntityType(KEY, CHEST),
    xy(16, 48),
};



const uint8_t PROGMEM office4_room2_1[] = {
    5, // number of entities

    // entity 0
    miscAndEntityType(SLAM_SHUT, BLOB_MOTHER),
    xy(40, 12),

    // entity 1
    miscAndEntityType(0, TRIGGER_DOOR),
    xy(16, 0),

    // entity 2
    miscAndEntityType(VERTICAL, TRIGGER_DOOR),
    xy(104, 16),

    // entity 3
    miscAndEntityType(0, SNAKE),
    xy(16, 52),

    // entity 4
    miscAndEntityType(0, SNAKE),
    xy(80, 16),
};



const uint8_t PROGMEM office4_room2_2[] = {
    8, // number of entities

    // entity 0
    miscAndEntityType(VERTICAL, TRIGGER_DOOR),
    xy(104, 16),

    // entity 1
    miscAndEntityType(0, TRIGGER_DOOR),
    xy(64, 0),

    // entity 2
    miscAndEntityType(SLAM_SHUT, SNAKE),
    xy(40, 36),

    // entity 3
    miscAndEntityType(SLAM_SHUT, SNAKE),
    xy(96, 40),

    // entity 4
    miscAndEntityType(SLAM_SHUT, BLOB),
    xy(64, 12),

    // entity 5
    miscAndEntityType(SLAM_SHUT, BLOB),
    xy(16, 40),

    // entity 6
    miscAndEntityType(SLAM_SHUT, BLOB),
    xy(56, 32),

    // entity 7
    miscAndEntityType(SLAM_SHUT, BLOB),
    xy(72, 24),
};



const uint8_t PROGMEM office4_room2_3[] = {
    5, // number of entities

    // entity 0
    miscAndEntityType(0, TRIGGER_DOOR),
    xy(64, 0),

    // entity 1
    miscAndEntityType(SLAM_SHUT, SKELETON),
    xy(24, 16),

    // entity 2
    miscAndEntityType(SLAM_SHUT, SNAKE),
    xy(48, 24),

    // entity 3
    miscAndEntityType(SLAM_SHUT, SNAKE),
    xy(64, 52),

    // entity 4
    miscAndEntityType(SLAM_SHUT, BLOB),
    xy(104, 12),
};



const uint8_t PROGMEM office4_room2_4[] = {
    4, // number of entities

    // entity 0
    miscAndEntityType(HEART, CHEST),
    xy(8, 8),

    // entity 1
    miscAndEntityType(0, SECRET_WALL),
    xy(16, 16),

    // entity 2
    miscAndEntityType(0, BLOB),
    xy(80, 16),

    // entity 3
    miscAndEntityType(0, SECRET_WALL),
    xy(0, 16),
};



const uint8_t PROGMEM office4_room2_5[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, BLOB),
    xy(24, 48),

    // entity 1
    miscAndEntityType(0, BLOB),
    xy(72, 48),
};



const uint8_t PROGMEM office4_room3_0[] = {
    4, // number of entities

    // entity 0
    miscAndEntityType(THREE_SWITCHES_ONE_BOOMERANG, SWITCH),
    xy(40, 16),

    // entity 1
    miscAndEntityType(0, SWITCH),
    xy(64, 16),

    // entity 2
    miscAndEntityType(0, SWITCH),
    xy(64, 24),

    // entity 3
    miscAndEntityType(0, SWITCH),
    xy(72, 36),
};



const uint8_t PROGMEM office4_room3_1[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(LAST_ENEMY_HAS_HEART_CONTAINER, SNAKE),
    xy(32, 12),

    // entity 1
    miscAndEntityType(LAST_ENEMY_HAS_HEART_CONTAINER, BLOB),
    xy(72, 16),

    // entity 2
    miscAndEntityType(LAST_ENEMY_HAS_HEART_CONTAINER, BAT),
    xy(80, 40),
};



const uint8_t PROGMEM office4_room3_2[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(3, TELEPORTER),
    xy(48, 16),
};



const uint8_t PROGMEM office4_room3_4[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, BLOB),
    xy(24, 44),

    // entity 1
    miscAndEntityType(0, BLOB),
    xy(72, 24),
};



const uint8_t PROGMEM office4_room3_5[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, BLOB),
    xy(16, 44),

    // entity 1
    miscAndEntityType(0, SNAKE),
    xy(56, 24),
};



const uint8_t PROGMEM office4_room4_0[] = {
    9, // number of entities

    // entity 0
    miscAndEntityType(SLAM_SHUT, GIANT_BAT),
    xy(80, 24),

    // entity 1
    miscAndEntityType(0, TRIGGER_DOOR),
    xy(16, 56),

    // entity 2
    miscAndEntityType(SLAM_SHUT, BAT),
    xy(56, 48),

    // entity 3
    miscAndEntityType(VERTICAL, TRIGGER_DOOR),
    xy(104, 32),

    // entity 4
    miscAndEntityType(SLAM_SHUT, GIANT_BAT),
    xy(24, 20),

    // entity 5
    miscAndEntityType(SLAM_SHUT, GIANT_BAT),
    xy(88, 48),

    // entity 6
    miscAndEntityType(SLAM_SHUT, GIANT_BAT),
    xy(40, 36),

    // entity 7
    miscAndEntityType(SLAM_SHUT, BAT),
    xy(64, 16),

    // entity 8
    miscAndEntityType(SLAM_SHUT, GIANT_BAT),
    xy(72, 52),
};



const uint8_t PROGMEM office4_room4_1[] = {
    4, // number of entities

    // entity 0
    miscAndEntityType(0, TELEPORTER),
    xy(48, 16),

    // entity 1
    miscAndEntityType(LAST_TORCH_OPENS_DOORS, TORCH),
    xy(16, 40),

    // entity 2
    miscAndEntityType(0, TRIGGER_DOOR),
    xy(16, 0),

    // entity 3
    miscAndEntityType(LAST_TORCH_OPENS_DOORS, TORCH),
    xy(56, 44),
};



const uint8_t PROGMEM office4_room4_2[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(SWORD, CHEST),
    xy(16, 20),
};



const uint8_t PROGMEM office4_room4_3[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, LOCK),
    xy(64, 0),
};



const uint8_t PROGMEM office4_room4_4[] = {
    5, // number of entities

    // entity 0
    miscAndEntityType(BOOMERANG, CHEST),
    xy(80, 8),

    // entity 1
    miscAndEntityType(0, BLOB),
    xy(8, 16),

    // entity 2
    miscAndEntityType(0, BLOB),
    xy(48, 24),

    // entity 3
    miscAndEntityType(0, SKELETON),
    xy(16, 40),

    // entity 4
    miscAndEntityType(0, BLOB),
    xy(48, 24),
};



const uint8_t PROGMEM office4_room4_5[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(0, SECRET_WALL),
    xy(96, 32),

    // entity 1
    miscAndEntityType(0, BLOB),
    xy(8, 8),

    // entity 2
    miscAndEntityType(0, SKELETON),
    xy(88, 44),
};



const uint8_t PROGMEM office4_room5_0[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(BOSS_KEY, CHEST),
    xy(56, 28),

    // entity 1
    miscAndEntityType(0, SECRET_WALL),
    xy(80, 48),
};



const uint8_t PROGMEM office4_room5_1[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(HEART, CHEST),
    xy(32, 24),
};



const uint8_t PROGMEM office4_room5_2[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, BLOB),
    xy(56, 36),

    // entity 1
    miscAndEntityType(0, BLOB),
    xy(104, 16),
};



const uint8_t PROGMEM office4_room5_3[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, BLOB),
    xy(24, 24),

    // entity 1
    miscAndEntityType(0, BLOB),
    xy(56, 24),
};



const uint8_t PROGMEM office4_room5_4[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(OPEN_CHESTS_IN_RIGHT_ORDER, SUNKEN_BRIDGE),
    xy(88, 28),

    // entity 1
    miscAndEntityType(0, BAT),
    xy(56, 20),

    // entity 2
    miscAndEntityType(0, SWITCH),
    xy(48, 28),
};



const uint8_t PROGMEM office4_room5_5[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, BAT),
    xy(24, 28),

    // entity 1
    miscAndEntityType(0, BAT),
    xy(80, 36),
};



const uint8_t PROGMEM office4_room6_0[] = {
    5, // number of entities

    // entity 0
    miscAndEntityType(LAST_ENEMY_HAS_HEART_CONTAINER, SNAKE),
    xy(32, 32),

    // entity 1
    miscAndEntityType(LAST_ENEMY_HAS_HEART_CONTAINER, BLOB),
    xy(80, 32),

    // entity 2
    miscAndEntityType(LAST_ENEMY_HAS_HEART_CONTAINER, BAT),
    xy(88, 56),

    // entity 3
    miscAndEntityType(LAST_ENEMY_HAS_HEART_CONTAINER, GIANT_BAT),
    xy(16, 32),

    // entity 4
    miscAndEntityType(LAST_ENEMY_HAS_HEART_CONTAINER, GIANT_BAT),
    xy(64, 32),
};



const uint8_t PROGMEM office4_room6_1[] = {
    2, // number of entities

    // entity 0
    miscAndEntityType(0, BAT),
    xy(32, 20),

    // entity 1
    miscAndEntityType(0, BAT),
    xy(88, 24),
};



const uint8_t PROGMEM office4_room6_2[] = {
    3, // number of entities

    // entity 0
    miscAndEntityType(0, SECRET_WALL),
    xy(80, 0),

    // entity 1
    miscAndEntityType(0, SNAKE),
    xy(24, 36),

    // entity 2
    miscAndEntityType(0, SNAKE),
    xy(88, 56),
};



const uint8_t PROGMEM office4_room6_3[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, SNAKE),
    xy(56, 48),
};



const uint8_t PROGMEM office4_room6_4[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(0, LOCK),
    xy(48, 48),
};



const uint8_t PROGMEM office4_room6_5[] = {
    1, // number of entities

    // entity 0
    miscAndEntityType(RING, CHEST),
    xy(56, 36),
};

const uint8_t PROGMEM office4_teleporters[] = {
    // dest x, dest y (in rooms)
    4, 5,
    4, 2,
    0, 1,
    4, 3,
};





const uint8_t * const PROGMEM office4_row0[7] = {
    office4_room0_0,
    office4_room1_0,
    office4_room2_0,
    office4_room3_0,
    office4_room4_0,
    office4_room5_0,
    office4_room6_0
};


const uint8_t * const PROGMEM office4_row1[7] = {
    office4_room0_1,
    office4_room1_1,
    office4_room2_1,
    office4_room3_1,
    office4_room4_1,
    office4_room5_1,
    office4_room6_1
};


const uint8_t * const PROGMEM office4_row2[7] = {
    office4_room0_2,
    office4_room1_2,
    office4_room2_2,
    office4_room3_2,
    office4_room4_2,
    office4_room5_2,
    office4_room6_2
};


const uint8_t * const PROGMEM office4_row3[7] = {
    office4_room0_3,
    office4_room1_3,
    office4_room2_3,
    empty_room,
    office4_room4_3,
    office4_room5_3,
    office4_room6_3
};


const uint8_t * const PROGMEM office4_row4[7] = {
    office4_room0_4,
    office4_room1_4,
    office4_room2_4,
    office4_room3_4,
    office4_room4_4,
    office4_room5_4,
    office4_room6_4
};


const uint8_t * const PROGMEM office4_row5[7] = {
    office4_room0_5,
    office4_room1_5,
    office4_room2_5,
    office4_room3_5,
    office4_room4_5,
    office4_room5_5,
    office4_room6_5
};


const uint8_t * const* const PROGMEM office4_entities[6] = {
    office4_row0,
    office4_row1,
    office4_row2,
    office4_row3,
    office4_row4,
    office4_row5
};


#endif