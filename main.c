#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void) {
    printf("Hello, World\n");

    int* number = malloc(sizeof(int));
    assert(number != 0);

    *number = 4;

    printf("*number = %d\n", *number);
}

