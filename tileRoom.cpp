#include "tileRoom.h"
#include "bitmaps.h"

Sprites sprite;

void TileRoom::render(Arduboy2* arduboy, byte frame) {
    for (char y = 0; y < ROOM_TILE_HEIGHT; ++y) {
        for (char x = 0; x < ROOM_TILE_WIDTH; ++x) {
            switch (roomDef->tiles[y][x]) {
                case NO_TILE:
                    break;
                case PLAIN_FLOOR:
                    arduboy->fillRect(x * TILE_SIZE, y * TILE_SIZE, TILE_SIZE, TILE_SIZE, WHITE);
                    break;
                case DIRT_FLOOR:
                    sprite.drawOverwrite(x * TILE_SIZE, y * TILE_SIZE, tileBmp, 0);
                    break;
                case STONE_WALL:
                    arduboy->fillRect(x * TILE_SIZE, y * TILE_SIZE, TILE_SIZE, TILE_SIZE, WHITE);
                    arduboy->drawRect(x * TILE_SIZE, y * TILE_SIZE, TILE_SIZE, TILE_SIZE, BLACK);
                    break;
                case UNLOCKED_DOOR:
                    arduboy->fillRect(x * TILE_SIZE, y * TILE_SIZE, TILE_SIZE, TILE_SIZE, BLACK);
                    break;
            }

        }
    }
}

uint8_t TileRoom::getTileAt(char px, char py) const {
    return roomDef->tiles[py >> 3][px >> 3];
}


