#include "math.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

/**
* @brief Возвращает площадь прямоугольника по заданным сторонам
* @param width и height - ширина и высота прямоугольника
*/
double rectangleArea(double width, double height);

/**
* @brief Возвращает площадь треугольника по заданным сторонам
* @param a, b и c - стороны треугольника
*/
double triangleArea(double a, double b, double c);

int checkedScan(double *result);

int main() {
	printf("Enter width and height of rectangle: ");
	double width = 0, height = 0, a = 0, b = 0, c = 0;
	while (checkedScan(&width)) {
		printf("Please enter a valid value!\n");
	}
	while (checkedScan(&height)) {
		printf("Please enter a valid value!\n");
	}
	printf("\nArea of rectangle = %f\n\n", rectangleArea(width, height));
	printf("Enter a, b and c sides of triangle: ");
	while (checkedScan(&a)) {
                printf("Please enter a valid value!\n");
        }
       while (checkedScan(&b)) {
                printf("Please enter a valid value!\n");
        }
       while (checkedScan(&c)) {
                printf("Please enter a valid value!\n");
        }

      	printf("\nArea of triangle = %f\n", triangleArea(a, b, c));
	return 0;
}

double rectangleArea(double width, double height) {
        return width * height;
}

double triangleArea(double a, double b, double c) {
        double halfPerimeter = (a + b + c) / 2;
	return sqrt(halfPerimeter * (halfPerimeter - a) * (halfPerimeter - b) * (halfPerimeter - c)); 
}

int checkedScan(double *result) {
	char buf[16];
	memset(&buf, '\0', 16);
	scanf("%s", buf);
	for (int i = 0; i < 16; ++i) {
		 if ((buf[i] < 48 || buf[i] > 57) && buf[i] != '.' && buf[i] != '\0') {
			return 1;
		}
	}
	sscanf(buf, "%lf", result);
	return 0;
}
