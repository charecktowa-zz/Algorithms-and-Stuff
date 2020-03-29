#include <stdio.h>
#include <math.h>

int main() {

    int number;
    long long armstrong = 0;

    printf("Ingrese un número: ");
    scanf("%d", &number);

    int size = floor(log10(number) + 1);
    printf("%d\n", size);

    printf("El número elevado es: %lld\n", armstrong);

    if (number == armstrong)
        printf("Es un número de Armstrong\n");

    else
        printf("No es un número de Armstrong.\n");

    return 0;
}
