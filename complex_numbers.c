#include <math.h>
#include "complex_numbers.h"

// Conversions

double abs(complex a){
	return sqrt(a.re * a.re + a.im * a.im);
}

double arg(complex a){	
	return arctan(a.im / a.re);	// in [0, 2 * PI[
}

double re(polar a){
	return a.abs * cos(a.arg);
}

double im(polar a){
	return a.abs * sin(a.arg);
}

complex to_cartesian(polar a);

polar to_polar(complex a);


// Unary operations on cartisian form

complex conj(complex a){
	return (complex) {a.re, - a.im};
}


// Binary operations on cartesian form

complex add(complex a, complex b){
	return (complex) {a.re + b.re, a.im + b.im};
}

complex sub(complex a, complex b){
	return (complex) {a.re - b.re, a.im - b.im};
}

complex mul(complex a, complex b){
	return (complex) {a.re * b.re - a.im * b.im, a.re * b.im + a.im * b.re};
}

complex div(complex a, complex b);


// Unary operations on polar form

polar p_conj(polar a){
	return (polar) {a.abs, - a.arg};
}


// Binary operations on polar form

polar p_mul(polar a, polar b){
	return (polar) {a.abs * b.abs, a.arg + b.arg};
}

polar p_div(polar a, polar b){
	return (polar) {a.abs / b.abs, a.arg - b.arg};
}

