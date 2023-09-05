#include "math.h"
#include "stdio.h"

double aFunc(double x, double y) {
	double numerator = 2 * cos(x - (3.1415926535897/6));
	double denominator = 0.5 + (sin(x) * sin(x));
	return numerator / denominator;
}

double bFunc(double z) {
	double numerator = z * z;
	double denominator = 3 + ((z * z) / 5);
	return 1 + (numerator / denominator); 
}

int main() {
	// set constants
	const double x = 1.426;
	const double y = -1.22;
	const double z = 3.5;
	// computing result
	double a = aFunc(x, y);
	double b = bFunc(z);
	// printing output
	printf("x = %f\n", x);
	printf("y = %f\n", y);
	printf("z = %f\n", z);
	printf("\nresults of computing:\n");
	printf("a = %f\n", a);
	printf("b = %f\n", b);
	return 0;
}
