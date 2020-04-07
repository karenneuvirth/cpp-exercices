/* 10.A used car dealership pays its sales staff a fixed salary per mounth plus 5% of sales made by them.
Develop an algorithm that reads the salesperson's number, total sales in the mounth and salary fixed.
Calculate the salary to be paid to this seller by writing down the seller's number and total salary. */

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL,"en-US");
	int sc; // seller code.
	float fs, sa, ts;  // fixed salary, sales amount, total salary.
	printf("\nSeller code: ");
	scanf("%i", &sc);
	printf("\nFixed salary: ");
	scanf("%f", &fs);
	printf("\nSales amount: ");
	scanf("%f", &sa);
	sa *= 0.05;
	ts = fs + sa;
	printf("\nThe seller's code is %i and the amount to be paid is U$ %.2f", sc, ts);
}
