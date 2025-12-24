#ifndef PP_H
#define PP_H

#include <stdio.h>

#include "var.h"

void pprint_var(var* variable) {
    printf("var* ");

    DataType type = variable->type;
    switch (type) {
        case TYPE_INT:
            printf("%d [TYPE_INT]\n", *((int*) variable->data));
            break;
        case TYPE_CHAR:
            printf("%c [TYPE_CHAR]\n", (char)(*((char*) variable->data)));
            break; 
        case TYPE_FLOAT:
            printf("%f [TYPE_FLOAT]\n", *((float*) variable->data));
            break; 
        case TYPE_DOUBLE:
            printf("%lf [TYPE_DOUBLE]\n", *((double*) variable->data));
            break; 
        case TYPE_LONG:
            printf("%ld [TYPE_LONG]\n", *((long*) variable->data));
            break; 


        default:
            break;
    }
}

#endif
