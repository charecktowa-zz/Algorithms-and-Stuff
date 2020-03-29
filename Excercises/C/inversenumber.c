#include <stdio.h>
#include <math.h>

int main() {

    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    int size = (floor(log10(numero) + 1));

    for (int i = 0; i < size ; i++) {
        printf("%d ", numero % 10);
        numero /= 10;
    }

    puts(" ");

    return 0;
}
