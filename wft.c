#include <stdio.h>
#include <math.h>

int main()
{
// Declare variables
double A, omega, k, t, x;
double real, imag;

 
// Input values
printf("Enter A: ");
scanf("%lf", &A);
printf("Enter omega: ");
scanf("%lf", &omega);
printf("Enter k: ");
scanf("%lf", &k);
printf("Enter t: ");
scanf("%lf", &t);
printf("Enter x: ");
scanf("%lf", &x);

// Calculate wave function
real = A * cos(-omega * t) * cos(k * x);
imag = A * sin(-omega * t) * sin(k * x);

// Print result
printf("Wave function: %lf + %lfi\n", real, imag);

return 0;
}
