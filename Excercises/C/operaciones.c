#include <stdio.h>

int main() {

    float num1, num2;

    printf("Ingrese dos números para realizar la operación: ");
    scanf("%f %f", &num1, &num2);

    printf("El resultado es: %.2f\n", num1 + num2);
    printf("El resultado es: %.2f\n", num1 - num2);
    printf("El resultado es: %.2f\n", num1 * num2);
    printf("El resultado es: %.2f\n", num1 / num2);


    return 0;
}
