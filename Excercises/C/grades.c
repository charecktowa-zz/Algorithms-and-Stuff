#include <stdio.h>

#define grades 10

int main() {

    float calif[grades];

    for (int i = 0; i < grades; i++) {
        printf("Enter a grade: ");
        scanf("%f", &calif[i]);
    }

    return 0;
}
