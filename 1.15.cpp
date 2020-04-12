/* 15.Calculate the amount of money a smoker spends. Read the number of years he(she) smokes,
the number of cigarettes smoked on the day and the price of a wallet. Consider that each wallet
has 20 cigarettes and a total of 365 days a year. */

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL,"en-US");
	int c, y; // cigarettes, years.
	float m, tot; // money, total.
	printf("\n-------------------------Amount spent on cigarettes-------------------------");
	printf("\nThe number of cigarettes smoked per day: ");
	scanf("%i", &c);
	printf("\nYears as a smoke: ");
	scanf("%i", &y);
	printf("\nValue of the cigarette portfolio (20 units): ");
	scanf("%f", &m);
	y *= 365; 
	c *= y;
	tot = c * (m / 20);
	printf("\nAmount spent on cigarettes: U$ %.2f\n", tot);
}
