#ifndef BOT_H
#define BOT_H
#include "ship.h"
#include "board.h"
#include <ctime>

class Bot
{
public:
    Bot();
    void placeShips();
private:
    int maxShips = 10;
    int x_coord = 0;
    int y_coord = 0;
    int size = 0;
    int submarine = 0;
    int destroyer = 0;
    int cruiser = 0;
    int battleship = 0;
};

#endif // BOT_H
