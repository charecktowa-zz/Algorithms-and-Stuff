#include <stdio.h>

void toBinary(int number) {
    int bin;
    while (number > 0) {
        bin = number % 2;
        int auxNumber = bin;
        int reversedNumber = reversedNumber * 10 + auxNumber % 10;
        printf("%i",  reversedNumber);
        auxNumber = auxNumber / 10;
        number /= 2;
    }   
}

int main(void) {

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    toBinary(number);

    return 0;
}