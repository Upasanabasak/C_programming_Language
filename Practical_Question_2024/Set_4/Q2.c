// Write a program in C to add two complex numbers using structure. Display the result in proper format of complex number.

#include <stdio.h>

// Define structure for complex number
struct complex
{
    float real;
    float imag;
};

int main()
{
    struct complex c1, c2, sum;

    // Input first complex number
    printf("Enter first complex number (real and imaginary part): ");
    scanf("%f %f", &c1.real, &c1.imag);

    // Input second complex number
    printf("Enter second complex number (real and imaginary part): ");
    scanf("%f %f", &c2.real, &c2.imag);

    // Add two complex numbers
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    // Display result
    if(sum.imag >= 0)
        printf("Sum = %.2f + %.2fi\n", sum.real, sum.imag);
    else
        printf("Sum = %.2f - %.2fi\n", sum.real, -sum.imag);

    return 0;
}
