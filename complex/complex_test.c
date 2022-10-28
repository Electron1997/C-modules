#include <assert.h>
#include <math.h>

#include "complex_numbers.h"

double EPS = 0.000000001;

int check(double a, double b, double eps){
	return fabs(a - b) < EPS;
}

int main(int argc, char *argv[]){

    complex z0 = {-1.0, -1.0};
    complex z1 = {3.0, 4.0};
    
    // Test mod()
    assert(check(mod(z1), 5.0, EPS));
    
    // Test arg()
    for(int i = 0; i < 60; ++i){
    	double phi = i * PI / 30;
    	complex w = {(i + 1) * cos(phi), (i + 1) * sin(phi)};
    	assert(check(arg(w), phi, EPS));
    }
    
    // Test to_cartesian()
    
    // Test to_polar()
    
    // Test add()
    complex s = add(z0, z1);
    assert(check(s.re, 2.0, EPS) && check(s.im, 3.0, EPS));

    return 0;
}
