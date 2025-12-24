#include <stdio.h>

#include "include/mmc.h"
#include "include/var.h"

int main(void) {
    var* four = new(4);

    printf("*((int*) four->data) = %d\n", *((int*) four->data));
    printf("four->type = %d\n", four->type);

    printf("-------------------\n");
    char x = 'a';
    printf("type_to_DataType(x) = %d\n", type_to_DataType(x));
    long y = 10L;
    printf("type_to_DataType(y) = %d\n", type_to_DataType(y));
}

