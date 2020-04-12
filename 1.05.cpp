/* 5.In times of low money, merchants are looking to increase their sales by offering discounts.
Make one algorithm that receives the value of a product and that writes the new value considering
that the discount was 9%. */

#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL,"en-US");
	float v; // value.
	printf("\nProduct value: R$ ");
	scanf("%f", &v);
	v -= v * 0.09;
	printf("\nThe discounted amount is: R$ %.2f", v);
}
