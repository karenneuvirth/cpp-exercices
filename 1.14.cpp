/* 14.Build an algorithm that reads the height and length of a wall and calculates the number of bricks to be used in
the construction of that wall. It's known that the brick is 30 cm long and 20 cm high and the mortar occupies 2.5 cm.*/

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL,"en-US");
	float wh, wl, a, nb; // wall height, wall length, area, number of bricks.
	printf("\nWall height: ");
	scanf("%f", &wh);
	printf("\nWall length: ");
	scanf("%f", &wl);
	a = wh * wl;
	printf("\nThe available area is: %.2f", a);
	nb = (a) / (0.325 * 0.225);
	printf("\nAmount of bricks needed %.2f", nb);
}
