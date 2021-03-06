
#include <iostream>
#include <libchessviz/locate.h>
#include <libchessviz/vivod.h>
using namespace std;

int main()
{
    char chessboard[11][11]
            = {"1rnbqkbnr",
               "2pppppppp",
               "3        ",
               "4        ",
               "5        ",
               "6        ",
               "7PPPPPPPP",
               "8RNBQKBNR"};
    vivod(chessboard);
    while (1) {
        locate(chessboard);
    }
    return 0;
}
