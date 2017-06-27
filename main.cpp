#include <QCoreApplication>
#include <iostream>
#include "board.h"
#include "bot.h"

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "Your enemy's board: \n" << endl;

    Board board;
    Bot bot;
    bot.placeShips(board);
    board.printBoard();

    int x = 0;
    int y = 0;
    int size = 0;

    cout << "To make shot enter coordinates." << endl;
    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;
    cout << "Enter ship's size: ";
    cin >> size;

    return a.exec();
}
