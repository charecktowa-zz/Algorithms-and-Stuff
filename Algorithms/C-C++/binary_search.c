#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N 10

/* I will try to optimize this later */
void bubbleSort(int array[]) {
    for(int i = 0; i < N - 1; i++) {
        for(int j = 0; j < N - 1 - i; j++) {
            if (array[j] > array[j+1]) {
                int swap = array[j];
                array[j] = array[j+1];
                array[j+1] = swap;
            }
        }
    }
}

int binarySearch(int array[], int number) {
    int left = 0, right = N - 1;
    int exist = -1;
    for (int i = 0; i < N; i++) {
        int mid = (left + right) / 2;

        if (number == array[mid])
            exist = array[mid];

        else if (number < array[mid])
            right = mid - 1;

        else if (number > array[mid])
            left = mid + 1;
        
        else
            exist = array[mid];
    }
    return exist;
}

int main() {

    int array[N];
    int number;

    for (int i = 0; i < N; i++) {
        printf("Input different a numbers: ");
        scanf("%d", &array[i]);
    }

    /* Just for knowing the size of the array */
    //int size = ( (int)sizeof(array) / (int)sizeof(int) );

    /* In order to get the binary search, the array must be sorted */
    bubbleSort(array);

    printf("Input the number you want to find: ");
    scanf("%d", &number);

    printf("The number is: %d\n", binarySearch(array, number));

    return (EXIT_SUCCESS);
}
