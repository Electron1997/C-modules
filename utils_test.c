#include <assert.h>
#include "utils.h"

int main(int argc, char *argv[]){
    
    int a = 5, b = 2;
    
    // Test swap()
    swap(&a, &b);
    assert(a == 2 && b == 5);
    
    return 0;
}
