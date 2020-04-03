#include <stdio.h>

int main() {

    int number;
    long double factorial, euler = 1.0;

    printf("Input a number: ");
    scanf("%d", &number);

    int counter = 1;
    while (counter <= number) {
        // factorial
        factorial = 1;
        int anotherCounter = counter;
        while (anotherCounter > 0) {
            factorial *= anotherCounter;
            anotherCounter--;
        }
        // calc of the e number
        euler += (1.0 / factorial);
        counter++;
    }

    printf("The approximation the e number is: %Lf\n", euler);

    return 0;
}
