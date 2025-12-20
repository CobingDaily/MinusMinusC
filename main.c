#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// #define new(value) ({ \
//     __typeof__(value)* object_name; \
//     malloc_assert(&object_name); \
// })

void* new_int(int value) {
    int* address = malloc(sizeof(*address));
    assert(address != 0);

    *address = value;
    return address;
}

void* new_float(float value) {
    float* address = malloc(sizeof(*address));
    assert(address != 0);

    *address = value;
    return address;
}

int main(void) {
    int* number = new_int(4);
    float* pi = new_float(3.14f);

    printf("*number = %d\n", *number);
    printf("*pi = %f\n", *pi);
}

