#include <stdio.h>

int main() {

  float base, altura;

  printf("Ingrese la base del triángulo: ");
  scanf("%f", &base);

  printf("\nIngrese la altura del triángulo: ");
  scanf("%f", &altura);

  printf("El área del triangulo es: %f, y su perimetro es: %f\n",
         (base * altura / 2), (base * 3));

  return 0;
}
