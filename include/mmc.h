#ifndef MinusMinusC_H
#define MinusMinusC_H

#include <stdlib.h>
#include <assert.h>

#define new(value) ({ \
    __typeof__(value)* address = malloc(sizeof(value)); \
    assert(address != 0); \
    *address = value; \
    address; \
})

#endif
