#ifndef MinusMinusC_H
#define MinusMinusC_H

#include <stdlib.h>
#include <assert.h>

#include "var.h"

#define new_data(value) ({ \
    __typeof__(value)* address = malloc(sizeof(value)); \
    assert(address != 0); \
    *address = value; \
    address; \
})

/**
 * Expects sizeof(value) <= sizeof(t)
 */
#define new_data_of_t(value, t) ({ \
    t* address = malloc(sizeof(t)); \
    assert(address != 0); \
    *address = value; \
    address; \
})

#define new_of_primary_type(value) ({ \
        var* ptr = malloc(sizeof(var)); \
        assert(ptr != 0); \
        ptr->data = new_data(value); \
        ptr->type = type_to_DataType(value); \
        ptr; \
})

#define new(value) _Generic((value), \
    default: new_of_primary_type(value))

#endif
