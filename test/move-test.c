#include <ctest.h>
#include <libchessviz/move.h>
#include <stdio.h>

CTEST(test, move_test)
{
    int i,j,j1=2, j2=4;
    char i1='e', i2='e';
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
    char movement[5] = {i1, j1, i2, j2};
    move(realchess, 1, movement);
    i = (int)(i2 - 'a')-1;
    j = j2+1;
    ASSERT_EQUAL((char)realchess[i][j], 'p');
}
