#include "bot.h"
#include <QDebug>
Bot::Bot()
{

}
void Bot::placeShips()
{
    Board board;
    ShipsPosition ship;
    srand (time(NULL));

//    while ((submarine <= ship.submarine) && (destroyer <= ship.destroyer) && (cruiser <= ship.cruisers) && (battleship <= ship.battleship))
    int s = 0;
    while (s < maxShips)
    {
        x_coord = rand() % board.size;
        y_coord = rand() % board.size;
        size = rand() % 4;
//    cout << x_coord << " " << y_coord << " " << size << endl;

        if (size == 0)
        {
            submarine++;
        }
        else if (size == 1)
        {
            destroyer++;
        }
        else if (size == 2)
        {
            cruiser++;
        }
        else
        {
            battleship++;
        }
        if ((submarine > ship.submarine) || (destroyer > ship.destroyer) || (cruiser > ship.cruisers) || (battleship > ship.battleship))
        {
             size = rand() % 4;
        }

        if ((board.board[x_coord][y_coord] != board.shipCell) && (board.board[x_coord][y_coord] != board.waterShipCell))
        {
            for (int i = 0; i <= size; i++)
            {
                board.board[x_coord + i][y_coord] = board.shipCell; // s

                board.board[x_coord + i][y_coord + 1] = board.waterShipCell; //  s|
                board.board[x_coord + i][y_coord - 1] = board.waterShipCell; // |s

                board.board[x_coord + i + 1][y_coord] = board.waterShipCell;  // down
                board.board[x_coord - 1][y_coord] = board.waterShipCell;     // top
                board.board[x_coord - 1][y_coord + 1] = board.waterShipCell; // top right
                board.board[x_coord + i + 1][y_coord + 1] = board.waterShipCell; // down right
                board.board[x_coord + i + 1][y_coord - 1] = board.waterShipCell; // down left
                board.board[x_coord - 1][y_coord - 1] = board.waterShipCell;    // top left
            }



        }
        s++;
        cout << submarine << " " << destroyer << " " << cruiser << " " << battleship << endl;
    }
    board.printBoard();

}

    /*

    int s = 0;
    while (s < maxShips)
    {
        x_coord = rand() % board.size;
        y_coord = rand() % board.size;
        size = rand() % 4;
        if (size == 0)
        {
            submarine++;
        }
        else if (size == 1)
        {
            destroyer++;
        }
        else if (size == 2)
        {
            cruiser++;
        }
        else
        {
            battleship++;
        }
        //      cout << x_coord << " " << y_coord << " " << size << endl;
 //       s++;

        while ((submarine <= ship.submarine))
        {
             cout << submarine << " " << destroyer << " " << cruiser << " " << battleship << endl;

             if (board.board[x_coord][y_coord] != board.shipCell)
             {
                 for (int i = 0; i <= size; i++)
                 {
                     board.board[x_coord + i][y_coord] = board.shipCell;
                 }


                 s++;
             }
        }
    }
        board.printBoard();

}


    int s = 0;
    while (s < maxShips)
    {
        x_coord = rand() % board.size;
        y_coord = rand() % board.size;
        size = rand() % 4;

        //      cout << x_coord << " " << y_coord << " " << size << endl;
 //       s++;


        if ((submarine <= ship.submarine) && (destroyer <= ship.destroyer) && (cruiser <= ship.cruisers) && (battleship <= ship.battleship))
        {
             cout << submarine << " " << destroyer << " " << cruiser << " " << battleship << endl;

             if (board.board[x_coord][y_coord] != board.shipCell)
             {
                 for (int i = 0; i <= size; i++)
                 {
                     board.board[x_coord + i][y_coord] = board.shipCell;
                 }

                if (size == 0)
                {
                    submarine++;
                }
                else if (size == 1)
                {
                    destroyer++;
                }
                else if (size == 2)
                {
                    cruiser++;
                }
                else
                {
                    battleship++;
                }
                 s++;
             }
        }
    }

*/
/*
    if ((submarine <= ship.submarine) && (destroyer <= ship.destroyer) && (cruiser <= ship.cruisers) && (battleship <= ship.battleship))
    {
        x_coord = rand() % board.size;
        y_coord = rand() % board.size;
        size = rand() % 4;
        if (size == 0)
        {
            submarine++;
        }
        else if (size == 1)
        {
            destroyer++;
        }
        else if (size == 2)
        {
            cruiser++;
        }
        else
        {
            battleship++;
        }

              cout << submarine << " " << destroyer << " " << cruiser << " " << battleship << endl;

             if (board.board[x_coord][y_coord] != board.shipCell)
             {
                 for (int i = 0; i <= size; i++)
                 {
                     board.board[x_coord + i][y_coord] = board.shipCell;
                 }
                // s++;
             }
        }


*/




        /*
        size = rand() % 4;
        if (size == 1)
        {
            submarine++;
            if (submarine > ship.submarine)
            {
                size = rand() % 4;
            }
        }
        else if (size == 2)
        {
            destroyer++;
            if (destroyer > ship.destroyer)
            {
                size = rand() % 4;
            }
        }
        else if (size == 3)
        {
            cruiser++;
            if (cruiser > ship.cruisers)
            {
                size = rand() % 4;
            }
        }
        else
        {
            battleship++;
            if (battleship > ship.battleship)
            {
                size = rand() % 4;
            }
        }

        if (board.board[x_coord][y_coord] != board.shipCell)
        {
            for (int i = 0; i < size; i++)
            {
                board.board[x_coord + i][y_coord] = board.shipCell;
            }
            s++;
        }
     }
*/
/*
        board.printBoard();

}*/

