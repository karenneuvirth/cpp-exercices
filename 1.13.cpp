/* 13.Design an algorithm that reads a number of seconds and transforms this time into days, hours and minutes.
Example: 197820s - Result: 2 days, 6 hours and 57 minutes. */

#include <stdio.h>
#include <math.h>
#include <locale.h>

main() {
	setlocale(LC_ALL,"en-US");
	int d, h, m, s; // days, hours, minutes, seconds.
	printf("\nSeconds: ");
	scanf("%d", &s);
	d = s / 86400;
	printf("\n%d days", d);
	h = s % 86400 / 36000;
	printf("%d hours", h);
	m = s % 86400 % 36000 / 60;
	printf("%d minutes", m);
	s = s % 86400 % 36000 % 60;
}
