/* 7.Make an algorithm that the user enters one side of a square an inform:
a. Perimeter: side * 4
b. Area: side²
c. Diagonal: side * (2 ¹²). */

#include <stdio.h>
#include <math.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"en-US");
	float s, p, a, d; // side, perimeter, area, diagonal.
	printf("\nSide: ");
	scanf("%f", &s);
	p = s * 4;
	printf("\nPerimeter: %.2f", p);
	a = s * s;
	printf("\nArea: %.2f", a);
	d = s * pow (2,1/2);
	printf("\nDiagonal: %.2f", d);
}
