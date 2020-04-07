/* 12.Build an algorithm to read a temperature in degrees Fahrennheit, wich calculates and writes the corresponding value in
degrees Celsius: 5/9 * (F - 32). */

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL,"en-US");
	float c, f; // celsius, fahrenheit.
	printf("\nDegrees Fahrenheit: ");
	scanf("%f", &f);
	c = (5.0/9) * (f - 32);
	printf("\nThe temperature in degrees celsius is %.2f", c);
}
