#include <stdio.h>
#include "utils.h"

int main(int argc, char *argv[]){
    int a = 5, b = 2;
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
