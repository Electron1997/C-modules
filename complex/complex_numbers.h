#ifndef CUSTOM_COMPLEX_NUMBERS
#define CUSTOM_COMPLEX_NUMBERS

#define PI 3.14159265359

struct cartesian_form {
	double re;
	double im;
};

struct polar_form {
	double abs;
	double arg;
};

typedef struct cartesian_form complex;
typedef struct polar_form polar;

// Conversions

double mod(complex a);

double arg(complex a);	// in [0, 2 * PI[

double re(polar a);

double im(polar a);

complex to_cartesian(polar a);

polar to_polar(complex a);

// Unary operations on cartisian form

complex conj(complex a);

// Binary operations on cartesian form

complex add(complex a, complex b);

complex sub(complex a, complex b);

complex mul(complex a, complex b);

complex div(complex a, complex b);

// Unary operations on polar form

polar p_conj(polar a);

// Binary operations on polar form

polar p_mul(polar a, polar b);

polar p_div(polar a, polar b);

// Might add roots and logarithms

#endif
