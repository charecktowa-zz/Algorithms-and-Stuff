#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool power_of_two(const int x) {
    return x == 0 ? false : (ceil(log2(x)) == floor(log2(x)));
}

int main(int argc, char **argv) {
        printf("The number %s power of 2.\n", (power_of_two(atoi(argv[argc-1])) ? "is" : "is not") );
        return (EXIT_SUCCESS);
}
