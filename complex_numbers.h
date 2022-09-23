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

inline double abs(complex a);

inline double arg(complex a);	// in [0, 2 * PI[

inline double re(polar a);

inline double im(polar a);

inline complex to_cartesian(polar a);

inline polar to_polar(complex a);


// Unary operations on cartisian form

inline complex conj(complex a);


// Binary operations on cartesian form

inline complex add(complex a, complex b);

inline complex sub(complex a, complex b);

inline complex mul(complex a, complex b);

inline complex div(complex a, complex b);


// Unary operations on polar form

inline polar p_conj(polar a);


// Binary operations on polar form

inline polar p_mul(polar a, polar b);

inline polar p_div(polar a, polar b);


// Might add roots and logarithms

#endif
