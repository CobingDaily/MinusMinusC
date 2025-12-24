#ifndef Var_H
#define Var_H

typedef enum {
    TYPE_INT,
    TYPE_CHAR,
    TYPE_FLOAT,
    TYPE_DOUBLE,
    TYPE_LONG,
    TYPE_UNKNOWN
} DataType;

typedef struct var {
    void* data;
    DataType type;
} var;

#define type_to_DataType(x) _Generic((x), \
    int: TYPE_INT, \
    char: TYPE_CHAR, \
    float: TYPE_FLOAT, \
    double: TYPE_DOUBLE, \
    long: TYPE_LONG, \
    default: TYPE_UNKNOWN)

typedef var* let;

#endif
