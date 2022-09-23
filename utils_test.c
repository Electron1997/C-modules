#include <assert.h>

#include "module.h"

int main(int argc, char *argv[]){

    ull a = 5, b = 2;
    
    // Test swap()
    swap(&a, &b);
    assert(a == 2 && b == 5);
    
    // Test check()
    assert(!check(0.1, 0.2, 0.05));
    assert(check(4.9, 4.8999999, 0.00001));
    
    return 0;
}
