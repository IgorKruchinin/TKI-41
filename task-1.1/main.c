#include "math.h"
#include "stdio.h"

/**
* @brief Возвращает результат функции a
* @param x, y и z параметры для функуии a
*/
double aFunc(double x, double y, double z);

/**
* @brief Возвращает результат функции b
* @param x, y и z параметры для функуии b
*/
double bFunc(double x, double y, double z);

int main() {
	// set constants
	const double x = -4.8;
	const double y = 17.5;
	const double z = 3.2;
	// computing result
	double a = aFunc(x, y, z);
	double b = bFunc(x, y, z);
	// printing output
	printf("x = %f\n", x);
	printf("y = %f\n", y);
	printf("z = %f\n", z);
	printf("\nresults of computing:\n");
	printf("a = %f\n", a);
	printf("b = %f\n", b);
	return 0;
}

double aFunc(double x, double y, double z) {
        double numerator = z;
        double denominator = sin(x / z) * sin(x / z);
        return (y * z * x * x) -  (numerator / denominator);
}

double bFunc(double x, double y, double z) {
        return z * exp(-sqrt(z)) * cos((y * x) / z); 
}
