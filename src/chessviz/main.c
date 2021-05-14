#include "libchessviz/move.h"
#include "libchessviz/printing.h"
#include <stdio.h>
int main()
{
    char chess[10][10]
            = {"1rnbqkbnr",
               "2pppppppp",
               "3        ",
               "4        ",
               "5        ",
               "6        ",
               "7PPPPPPPP",
               "8RNBQKBNR",
               " ABCDEFGH"};
    PrintBoard(chess);
    while (1) {
        move(chess, 0, NULL);
        PrintBoard(chess);
    }

    return 0;
}
