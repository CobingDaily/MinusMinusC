#include <stdio.h>

#include "include/mmc.h"
#include "include/var.h"

int main(void) {
    let four = new(4);

    printf("*((int*) four->data) = %d\n", *((int*) four->data));
    printf("four->type = %d\n", four->type);

    let pi = new(3.14f);
    printf("*((float*) pi->data) = %f\n", *((float*) pi->data));
    printf("pi->type = %d\n", pi->type);
    
}

