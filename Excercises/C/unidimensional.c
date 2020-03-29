#include <stdio.h>

#define ARRAY_SIZE 10000 // Tamaño definido de arreglo

int main() {

  int array[ARRAY_SIZE];
  int number;

  printf("Ingrese la cantidad: ");
  scanf("%d", &number);

  /* Ciclo para pedir los números y comprobarlos */
  int par = 0;
  for (int i = 0; i < number; i++) {
    // primero pedimos el número
    printf("Ingrese el número[%i]: ", i + 1);
    scanf("%d", &array[i]);

    /* Para evitar crear otro ciclo, de una vez comprobamos los núm */
    if (array[i] % 2 == 0)
      ++par;
  }

  /* Para los números impares, únicamente se resta la cantidad de números
   * menos los números pares, nada más para evitar crear otra variable.
   */
  printf("De los %d números ingresados, %d son pares y %d impares.\n", number,
         par, (number - par));

  /* Ahora se imprimen los números pares recibidos. */
  for (int i = 0; i < number; i++)
    printf("%d, ", array[i]);

  putchar('\n');

  return 0;
}
