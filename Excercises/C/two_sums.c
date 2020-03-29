#include <stdio.h>

int *twoSums (int *array, int sizeArray, int target) {
    int *idx;
    for (int i = 0; i < sizeArray; i++) {
        for (int j = i + 1; j < sizeArray; i++) {
            if (array[i] + array[j] == target) {
                *idx = i;
            }
        }
    }

    return idx;
}

int main() {

    int array[] = {2, 7, 11, 15};
    int sizeArray = (sizeof(array) / sizeof(int));
    int target = 9;
    /*
    for (int i = 0; i < (sizeof(array) / sizeof(int) - 1); i++)
    {
        for (int j = i + 1; j < (sizeof(array) / sizeof(int)); j++) 
        {
            if (array[i] + array[j] == target) {
                printf("%d + %d = %d\n", array[i], array[j], target);
            }
        }
    }
    */

    twoSum(array, sizeArray, target);
 //   printf("\n%d", target);
    return 0;
}
