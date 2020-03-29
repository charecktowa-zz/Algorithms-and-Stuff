#include <stdio.h>
#include <math.h>

int main() {

    long long int number, numberAux;
    long long int armstrong = 0;

    printf("Ingrese un número: ");
    scanf("%lld", &number);
    numberAux = number;

    int numberDigits = floor(log10(number) + 1);

    int counter = 0;
    while (counter < numberDigits) {
        int splitNumber = numberAux % 10;
        armstrong += pow( (double)splitNumber, (double)numberDigits );
        numberAux /= 10;
        counter++;
    }

    printf("El número %s es armstrong\n", (armstrong == number) ? "sí" : "no");

    return 0;
}
