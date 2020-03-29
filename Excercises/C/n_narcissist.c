#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int number, nNumbers = 0;
  long long int armstrong = 0;

  if (argc == 1) {
    printf("Ingrese la cantidad de números a generar: ");
    scanf("%d", &number);
  }
  
  /* Si el programa recibe un argumento, estará en la posición 1 */
  else
    number = atoi(argv[argc - 1]);

  /* Ciclo principal */
  int counter = 1;
  while (nNumbers != number) {
    int aux = counter;
    int digitsOfNumber = floor(log10(aux) + 1);

    /* Ciclo que comprueba el número actual */
    int anotherCounter = 0;
    while (anotherCounter < digitsOfNumber) {
      int splitNumber = aux % 10;

      armstrong += (int)pow((double)splitNumber, (double)digitsOfNumber);

      aux /= 10;
      anotherCounter++;
    }

    if (armstrong == counter) {
      printf("%lld ", armstrong);
      nNumbers++;
    }

    armstrong = 0;
    counter++;
  }

  puts("");

  return (EXIT_SUCCESS);
}
