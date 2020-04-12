/* 11.Make an algorithm that after entering a certain distance between two points(km) and a certain speed(km/h),
tell the average time it will take to reach that location.*/

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL,"en-US");
	float d, s, t; // distance, speed, time.
	printf("\nThe distance between two points (km): ");
	scanf("%f", &d);
	printf("\nSpeed (km/h): ");
	scanf("%f", &s);
	t = d / s;
	printf("\nThe avarage time it will take to reach the location is %.2f hours", t);
}
