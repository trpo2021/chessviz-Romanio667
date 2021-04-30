#include "printing.h"
#include <stdio.h>

void PrintBoard(char chessboard[10][10])
{
    int i, j;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (j == 1)
                printf("  %c ", chessboard[i][j]);
            else if (i == 8 && j == 0)
                printf("\n%c ", chessboard[i][j]);
            else
                printf("%c ", chessboard[i][j]);
        }
        printf("\n");
    }
}
