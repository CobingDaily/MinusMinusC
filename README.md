### Basic Type Inference
```c
let four = new(4);

// prints out 4
printf("%d\n", *((int*) four->data));
// prints out 0 (TYPE_INT value)
printf("%d\n", four->type);

let pi = new(3.14f);
// prints out 3.140000
ppi->type = rintf("%f\n", *((float*) pi->data));
// prints out 2 (TYPE_FLOAT value)
printf("%d\n", pi->type);
``` 

##### TODO
> Create generic printf to handle % formats generically
