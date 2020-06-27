#include <stdio.h>
#include <math.h>
#include "complex.h"

int main()
{
    Complex a = {1,2};
    Complex b = {2,3};

    Complex z = addNumbers(a, b);

    printf("\nAdding %.2f + i %.2f and %.2f + i %.2f\n", a.real, a.imag, b.real, b.imag);
    printf("The result of the addition is %.2f + i %.2f\n\n", z.real, z.imag);

    Complex c = {1,2};
    Complex d = {2,3};

    Complex y = multiplyNumbers(c, d);

    printf("Multiplying %.2f + i %.2f and %.2f + i %.2f\n", c.real, c.imag, d.real, d.imag);
    printf("The result of the multiplication is %.2f + i %.2f\n\n", y.real, y.imag);

    Complex e = {1,2};
    Complex x = conjugateNumber(e);

    printf("The conjugate of ");
    printComplexNumber(e);
    printf(" is ");
    printComplexNumber(x);
    printf("\n");

    return 0;
} 
