/* 8.Calculate the area of a circle. The area of a circle is calculated by multiplying the radius² by PI (3.14159) */

#include <stdio.h>
#include <math.h>
#include <locale.h>

main() {
	setlocale(LC_ALL,"en-US");
	float r, a; // radius, area.
	printf("\nCircle radius: ");
	scanf("%f", &r);
	a = pow (r,2) * 3.14159;
	printf("\nThe area of the circle is: %.5f", a);
}
