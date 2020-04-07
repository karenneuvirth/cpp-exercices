/* 3.Build an algorithm that requests the balance of an application and shows the adjusted balance, with an increase of 7.5%. */

#include<stdio.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"en-US");
	float b; // balance.
	printf("\nBalance: ");
	scanf("%f", &b);
	b += b * 0.075;
	printf("\nThe readjusted value is: %.2f", b);
}
