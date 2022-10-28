#include <math.h>

#include "complex_numbers.h"

// Conversions

inline double mod(complex a){
	return sqrt(a.re * a.re + a.im * a.im);
}

inline double arg(complex a){	// result in [0, 2 * PI[, returns 0 for 0 + 0i
	if(a.re == 0.0){
		if(a.im >= 0.0){
			return PI / 2;
		}else{
			return 3 * PI / 2;
		}
	}
	double phi = atan(a.im / a.re);
	if(a.re < 0.0){
		phi += PI;
	}
	if(phi < 0.0){
		phi += 2 * PI;
	}
	return phi;
}

inline double re(polar a){
	return a.abs * cos(a.arg);
}

inline double im(polar a){
	return a.abs * sin(a.arg);
}

inline complex to_cartesian(polar a){
	return (complex) {re(a), im(a)};
}

inline polar to_polar(complex a){
	return (polar) {mod(a), arg(a)};
}

// Unary operations on cartisian form

inline complex conj(complex a){
	return (complex) {a.re, - a.im};
}

// Binary operations on cartesian form

inline complex add(complex a, complex b){
	return (complex) {a.re + b.re, a.im + b.im};
}

inline complex sub(complex a, complex b){
	return (complex) {a.re - b.re, a.im - b.im};
}

inline complex mul(complex a, complex b){
	return (complex) {a.re * b.re - a.im * b.im, a.re * b.im + a.im * b.re};
}

inline complex div(complex a, complex b){
	complex c = conj(b);
	double den = mod(c);
	complex num = mul(a, c);
	return (complex) {num.re / den, num.im / den};
}

// Unary operations on polar form

inline polar p_conj(polar a){
	return (polar) {a.abs, - a.arg};
}

// Binary operations on polar form

inline polar p_mul(polar a, polar b){
	return (polar) {a.abs * b.abs, a.arg + b.arg};
}

inline polar p_div(polar a, polar b){
	return (polar) {a.abs / b.abs, a.arg - b.arg};
}
