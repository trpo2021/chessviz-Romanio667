#include <iostream>
#include <libchessviz/checkline.h>
#include <libchessviz/checktab.h>
#include <libchessviz/vivod.h>
#include <stdio.h>
using namespace std;

char locate(char chessboard[11][11])
{
    char sline1, sline2, temp;
    int column1, column2, rline1, rline2, flag1, flag2, flag3;

    cin >> sline1;
    cin >> column1;
    cin >> sline2;
    cin >> column2;

    flag1 = 0;
    flag2 = 0;
    flag3 = 0;

    rline1 = checkline(sline1);
    if (rline1 == -1)
        flag1 = 1;

    rline2 = checkline(sline2);
    if (rline2 == -1)
        flag1 = 1;

    flag2 = checktab(column1);
    flag3 = checktab(column2);

    if (flag1 == 0 && flag2 == 0 && flag3 == 0) {
        temp = chessboard[column1 - 1][rline1];
        chessboard[column1 - 1][rline1] = ' ';
        chessboard[column2 - 1][rline2] = temp;
        vivod(chessboard);
    }

    return chessboard[9][10];
}
