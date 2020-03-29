#include <stdio.h>

long long divisors(int number) {
  long long divisors = 0;
  for (int divisor = 1; divisor <= number; ++divisor)
    if (number % divisor == 0)
      ++divisors;
  return divisors;
}

int main() {

  int number;

  printf("Input a number: ");
  scanf("%d", &number);

  printf("The number of divisors of %d is %lld\n", number, divisors(number));

  return 0;
}
