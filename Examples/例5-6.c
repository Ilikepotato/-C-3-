#include<stdio.h>

float result_real, result_imag;

void complex_add (float real1, float imag1, float real2, float imag2);
void complex_prod (float real1, float imag1, float real2, float imag2);

int main(int argc, char const *argv[])
{
	float real1 = 0, real2 = 0, imag1 = 0, imag2 = 0;

	printf ("Enter the first complex number (real and imaginary):");
	scanf ("%f%f", &real1, &imag1);
	printf ("Enter the second complex number (real and imaginary):");
	scanf ("%f%f", &real2, &imag2);

	complex_add (real1, imag1, real2, imag2);
	printf("addition of complex is %f+%fi.\n", result_real, result_imag);

	complex_prod (real1, imag1, real2, imag2);
	printf("product of complex is %f+%fi.\n", result_real, result_imag);

	while(1) getchar();

	return 0;
}

void complex_add (float real1, float imag1, float real2, float imag2)
{
	result_real = real1 + real2;
	result_imag = imag1 + imag2;
}

void complex_prod (float real1, float imag1, float real2, float imag2)
{
	result_real = real1 * real2 - imag1 * imag2;
	result_imag = real1 * imag2 + real2 * imag1;
}
