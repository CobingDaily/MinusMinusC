#include <stdio.h>

#include "include/mmc.h"

int main(void) {
    int* number = new(4);
    float* pi = new(3.14f);

    printf("*number = %d\n", *number);
    printf("*pi = %f\n", *pi);
}

