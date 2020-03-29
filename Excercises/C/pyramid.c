/*
########
 ######
  ####
   ##
*/
#include <stdio.h>

#define rows 5

int main() {

    for (int i = 1; i < rows; i++) {
        for (int j = 1; j <= rows * 2 - (2 * i); j++)
            printf("#");
        putchar('\n');
        for (int k = 1; k <= 0 + i; k++)
            putchar(' ');
    }
    
    puts("");

    return 0;
}
