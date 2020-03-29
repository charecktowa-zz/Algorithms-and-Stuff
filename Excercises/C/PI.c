// Producto de Wallis
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    long long int itr;
    long double pi = 1;

    printf("Ingrese la cantidad iteraciones: ");
    scanf("%lli", &itr);

    for (long long int k = 1; k < itr; k++)
        pi *= ( (pow((2 * k), 2)) / ( (2*k + 1) * (2*k - 1) ) );

    pi *= 2;

    printf("La aproximación es: %Lf\n", pi);

    return (EXIT_SUCCESS);
}
