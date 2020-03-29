#include <stdio.h>

int main(void) {

    unsigned long number, tanya;

    printf("Enter two numbers: ");
    scanf("%lu %lu", &number, &tanya);

    for (unsigned int i = 0; i < tanya; i++) {
        if (number % 10 != 0)
            number--;
        else 
            number /= 10;
    }

    printf("Output: %lu\n", number);

    return 0;
}
