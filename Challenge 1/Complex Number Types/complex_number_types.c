/*
 * Challenge 1: Complex Numbers
 * Author: Husain Alshaikhahmed
 * Description:This program demonstrates complex number operations in C using
 * complex.h. It calculates a complex number with Euler's formula, displays its
 * real and imaginary parts, creates a complex number and its conjugate, and
 * then prints their components using creal() and cimag().
 *Date:3/3/2024
 */
/*
 * 1- Create a double complex number that preforms Euler's formula
 *    * PI = acos(-1)
 *    * The complex number is the exponent of I * PI
 *    * Display as output the real numbers and the imaginary number
 * 2- Create double complex number that preforms a conjugate
 *    * A complex number that 1+2*I
 *    * A complex number that 1-2*I
 *    * Display as output the real number and the imaginary number
 * 3- Use the complex.h header file and the creal() and cimag()
 * */

#include <complex.h>
#include <math.h>
#include <stdio.h>

#define PI acos(-1) // PI as a constant

// Function to print complex numbers
void printComplexNumber(const char *label, double complex number) {
    printf("%s: %f + %fi\n", label, creal(number), cimag(number));
}

int main() {
    // 1- Euler's formula to create a complex number
    double complex eulerNumber = cexp(I * PI); // e^(I * PI)
    printComplexNumber("Euler's formula", eulerNumber);

    // 2- Creating a complex number and its conjugate
    double complex complexNumber = 1 + 2 * I; // Original complex number
    double complex conjugateNumber = conj(complexNumber);
    printComplexNumber("Complex number", complexNumber);
    printComplexNumber("Conjugate number", conjugateNumber);

    return 0;
}
