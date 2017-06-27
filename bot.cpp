#include "bot.h"
#include <assert.h>
Bot::Bot()
{

}

bool Bot::tryPlaceEmpty(Board& board, int x, int y)
{
    //border
    if ((y + m_shipSize) > board.size)
    {
        return false;
    }

    for (int i = x - 1; i < x + m_shipSize + 1; i++)
    {
        for (int j = y - 1; j < y + 2; j++)
        {
            if ((i >= 0) && (i < board.size) && (j >= 0) && (j < board.size))
            {
                if (board.board[i][j] != board.emptyCell)
                {
//                    cout << "i = " << i << " j = " << j << endl;
                    return false;
                }
            }
        }
    }
    return true;

}

void Bot::placeShip(Board& board, int x, int y)
{
    for (int i = 0; i < m_shipSize; i++)
    {
        board.board[x][y + i] = board.shipCell;
    }
}

void Bot::countShips()
{
    if ( m_shipSize == 1)
    {
        m_submarine++;
    }
    else if (m_shipSize == 2)
    {
        m_destroyer++;
    }
    else if (m_shipSize == 3)
    {
        m_cruiser++;
    }
    else if (m_shipSize == 4)
    {
        m_battleship++;
    }
    else
    {
        cout << "countShips():/n Error: bad ship type!" << endl;
    }
}


void Bot::placeShips(Board& board)
{
    ShipsPosition ship;
    srand (time(NULL));

    while (true)
    {
        m_x = rand() % board.size;
        m_y = rand() % board.size;
        m_shipSize = (rand() % 4) + 1;

//        cout << "m_shipSize = " << m_shipSize << endl;

        assert((m_x >= 0) && (m_x < board.size));
        assert((m_y >= 0) && (m_y < board.size));
        assert((m_shipSize >= 1) && (m_shipSize <= ship.maxShipSize));

//        cout << m_x+1 << " " << m_y+1 << " Before try" << endl;

        if (((m_submarine) == ship.countSubmarine) && (m_destroyer == ship.countDestroyer) && (m_cruiser == ship.countCruisers) && (m_battleship == ship.countBattleship))
        {
            // кончились все корабли
            break;
        }

        if (((m_submarine) == ship.countSubmarine) || (m_destroyer == ship.countDestroyer) || (m_cruiser == ship.countCruisers) || (m_battleship == ship.countBattleship))
        {
            m_shipSize = (rand() % 4) + 1;

            //кончились корабли данного типа
//           return;

            continue;
        }

        if (tryPlaceEmpty(board, m_x, m_y) == true)
        {
            placeShip(board, m_x, m_y);

            countShips();
        }

    }

}
