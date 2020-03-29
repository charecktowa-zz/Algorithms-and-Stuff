#include <stdio.h>

int main() {

    float number;
    float factorial = 1.0;

    printf("Input a number: ");
    scanf("%f", &number);

    int counter = number;
    while (counter > 0) {
        factorial = factorial * counter;
        counter--;
    }

    printf("The factorial of %f is %f.\n", number, factorial);
    
    return 0;
}
