#include <stdio.h>

int main() {

    int numbers;

    printf("Input a range of numbers: ");
    scanf("%d", &numbers);

    for(int i = 0; i <= numbers; i++) {
        if (i % 3 == 0)
            printf("Fizz,");

        else if (i % 5 == 0)
            printf(" Buzz, ");

        else if (i % 15 == 0)
            printf(" Fizz-Buzz, ");

        else
            printf(" %d, ", i); 
    }

    puts("");

    return 0;
}
