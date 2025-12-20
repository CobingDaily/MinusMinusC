#include <stdio.h>

#include "include/mmc.h"

int main(void) {
    int* number = new(4);
    float* pi = new(3.14f);

    // explicitly make long long with new_of_t argument
    long long* big_number = new_of_t(10, long long);
    // or implicitly from LL
    long long* big_number2 = new(15LL);

    printf("*number = %d\n", *number);
    printf("*pi = %f\n", *pi);
    printf("*big_number = %lld\n", *big_number);
    printf("*big_number2 = %lld\n", *big_number2);
}

