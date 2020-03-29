#include <stdio.h>

int main() {

  long int number, reversedNumber = 0;

  printf("Enter a number: ");
  scanf("%ld", &number);
  long int auxNumber = number;

  /* int numberOfDigits = floor(log10(number) + 1);

  int counter = 0;
  while (counter < numberOfDigits) {
    int splitNumber = auxNumber % 10;

    // number
    reversedNumber = (reversedNumber * 10) + splitNumber;
#include <math.h>
    auxNumber /= 10;
    counter++;
  } */

  while (auxNumber != 0) {
    reversedNumber = reversedNumber*10 + auxNumber%10;
    auxNumber = auxNumber/10;
  }

  printf("The number %s palindrome.\n",
         (reversedNumber == number) ? "is" : "is not");

  return 0;
}