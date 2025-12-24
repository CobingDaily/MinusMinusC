### Basic Type Inference
```c
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
}
``` 

###### Output of this program looks like this:
```
var* 4 [TYPE_INT]
var* A [TYPE_CHAR]
var* 3.140000 [TYPE_FLOAT]
var* 2.718282 [TYPE_DOUBLE]
var* 123456789 [TYPE_LONG]
```

##### TODO
> Create generic printf to handle % formats generically
