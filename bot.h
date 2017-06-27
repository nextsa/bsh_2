#ifndef BOT_H
#define BOT_H
#include "ship.h"
#include "board.h"
#include <ctime>

class Bot
{
public:
    Bot();
    void placeShips(Board& board);
    bool tryPlaceEmpty(Board& board, int x, int y);
    void placeShip(Board& board, int x, int y);
    void countShips();


private:
    int m_maxShips = 10;
    int m_x = 0;
    int m_y = 0;
    int m_shipSize = 0;
    int m_submarine = 0;
    int m_destroyer = 0;
    int m_cruiser = 0;
    int m_battleship = 0;
};

#endif // BOT_H
