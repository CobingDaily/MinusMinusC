#include "include/mmc.h"
#include "include/var.h"
#include "include/pp.h"

int main(void) {
    let four = new(4);
    pprint_var(four);

    // cast to char to prevent integer promotion
    let letter = new((char)'A');
    pprint_var(letter);

    let pi = new(3.14f);
    pprint_var(pi);

    let e = new(2.718281828459045235360287471352);
    pprint_var(e);

    let long_number = new(123456789L);
    pprint_var(long_number);

    let string = new((char*)"Hello, World");
    pprint_var(string);
}

