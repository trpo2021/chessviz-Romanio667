#include <ctest.h>
#include <libchessviz/move.h>

CTEST(test, move_test)
{
    int i, j;
    char realchess[10][10]
            = {"1rnbqkbnr",
               "2pppppppp",
               "3        ",
               "4        ",
               "5        ",
               "6        ",
               "7PPPPPPPP",
               "8RNBQKBNR",
               " ABCDEFGH"};
    char movement[5] = {'e', 2, 'e', 4};
    char chessexpected[10][10]
            = {"1rnbqkbnr",
               "2pppp ppp",
               "3        ",
               "4    p   ",
               "5        ",
               "6        ",
               "7PPPPPPPP",
               "8RNBQKBNR",
               " ABCDEFGH"};
    move(realchess, 1, movement);
    for (i = 0; i < 10; i++)
        for (j = 0; j < 10; j++)
            ASSERT_EQUAL(chessexpected[i][j], realchess[i][j]);
}