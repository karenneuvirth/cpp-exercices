/* 6.Make an algorithm that receives a person's year of birth and the current year,
calculate and show: The age that person and how old it will be in 2028. */

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL,"en-US");
	int yb, cy, a, fa;
	printf("\nYear of birth: ");
	scanf("%i", &yb);
	printf("\nCurrent year: ");
	scanf("%i", &cy);
	a = cy - yb;
	printf("\nThe age is: %i",a);
	fa = 2028 - yb;
	printf("\n\nIn 2028 the age will be %i", fa);
}
