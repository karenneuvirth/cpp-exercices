/* 13.Design an algorithm that reads a number of seconds and transforms this time into days, hours and minutes.
Example: 197820s - Result: 2 days, 6 hours and 57 minutes. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main() {
	setlocale(LC_ALL,"en-US");
	int d, h, m, t; // days, hours, minutes, time, seconds.
	printf("\nSeconds: ");
	scanf("%d", &t);
	d = t / 86400;
	printf("\n%d%s", d, " days ");
	h = t % 86400 / 3600;
	printf("%d%s", h, " hours ");
	m = t % 86400 % 3600 / 60;
	printf("%d%s", m, " minutes ");
}
