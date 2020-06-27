#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct Complex
{
    float real;
    float imag;

} Complex;

Complex addNumbers(Complex c1, Complex c2) 
{
    float real = c1.real + c2.real;
    float imag = c1.imag + c2.imag;

    Complex z = {real, imag};

    return z;
}

Complex multiplyNumbers(Complex c1, Complex c2) 
{   
    float real = (c1.real * c2.real) - (c1.imag * c2.imag);
    float imag = (c1.imag * c2.real) + (c1.real * c2.imag);

    Complex z = {real, imag};
   
    return z;
}

Complex conjugateNumber(Complex c) 
{   
    Complex x = {c.real, -c.imag};

    return x;
}

void printComplexNumber(Complex c) 
{
    const char * op = c.imag < 0 ? "-" : "+";

    printf("%.2f %s i %.2f", c.real, op, fabsf(c.imag));
}