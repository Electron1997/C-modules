#include "complex_numbers.h"
#include <stdio.h>

int main(int argc, char *argv[]){
    complex a = {1, 1};
    complex b = {2, 3};
    complex c = add(a, b);
    printf("%f %f\n", c.re, c.im);
    return 0;
}
