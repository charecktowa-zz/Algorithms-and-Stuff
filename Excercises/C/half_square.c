#include <stdio.h>

int main() {

    for (int row = 1; row <= 5; row++) {
        for (int hash = 1; hash <= 6 - row; hash++)
            printf("#");
        
        puts("");
    }

    return 0;
}
