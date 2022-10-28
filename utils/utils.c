#include <math.h>

#include "utils.h"

inline void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

inline int check(double a, double b, double eps){
	return fabs(a - b) < eps;
}
