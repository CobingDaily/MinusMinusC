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

/**
 * Expects sizeof(value) <= sizeof(t)
 */
#define new_of_t(value, t) ({ \
    t* address = malloc(sizeof(t)); \
    assert(address != 0); \
    *address = value; \
    address; \
})

#endif
