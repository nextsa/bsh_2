#include "board.h"

Board::Board()
{
    for (int x = 0; x < size; x++)
    {
        for (int y = 0; y < size; y++)
        {
            board[x][y] = emptyCell;
        }
    }
}

void Board::printBoard()
    {

/*        cout << "   ";
        for (char a = 'A'; a <= 'J'; a++)
        {
            cout <<  "  " <<  a << " ";
        }
        cout << endl;
*/
    for (int i = 0; i <= size; i++)
        {
            if (i == 0)
            {
                cout << setw(4) << "|";
            }
            else if ((i > 0) && (i != size))
            {
                cout << " " << i << " |";
            }
            else if (i == 10)
            {
                cout << " " << i << "|";
            }
        }
        cout << endl;

        for (int x = 0; x < size; x++)
        {
            cout << setw(3) << x+1 << "|";
            for (int y = 0; y < size; y++)
            {
                if (board[x][y] ==  emptyCell)
                {
                    cout << setw(4) << " |";
                }
                else if (board[x][y] == shipCell)
                {
                    cout << " O |";
                }
                else if (board[x][y] == waterShipCell)
                {
                    cout << " w |";
                }
                else if (board[x][y] == missedShot)
                {
                    cout << " . |";
                }
                else if (board[x][y] == rightShot)
                {
                    cout << " X |";
                }
            }
            cout << endl;

         }
}
