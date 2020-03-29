/*

    ***************
    *             *
    *             *
    ***************

*/

#include <stdio.h>

#define ROWS 5

int main() {

    for (int i = 1; i < ROWS; i++) {
        for (int j = 1; j <= ROWS; j++) {
            if ( (j > 1 && j < 5))
                putchar('\t');
            if (i == 1 || i == 4)
                printf("*");
        }
        putchar('\n');
    }

    putchar('\n');

    return 0;
}
