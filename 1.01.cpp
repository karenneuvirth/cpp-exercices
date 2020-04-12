/* 1.Develop an algorithm that calculates the area of a triangle. Area = (base * height) / 2 */

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL,"en-US");
	float a, b, h; // area, base, height.
	printf("\n---------------------------Calculating the area of a triangle---------------------------");
	printf("\n\nBase: ");
	scanf("%f", &b);
	printf("\nHeight: ");
	scanf("%f", &h);
	a = (b * h) / 2;
	printf("\nThe area is: %.2f", a);
}
