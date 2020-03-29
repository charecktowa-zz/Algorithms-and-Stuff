#include <stdio.h>
#include <math.h>

int main() {

    long int itr;
    double Pi = 0;

    printf("Insert the iteration number: ");
    scanf("%ld", &itr);

    for (long n = 0; n < itr; n++)
        Pi +=  (pow(-1, n)) / (2*n + 1);

    printf("The PI value at the iteration %ld is: %lf\n", itr, (Pi * 4) );

    return 0;
}
