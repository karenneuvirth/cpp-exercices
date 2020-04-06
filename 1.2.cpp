/* 2.The Mamão com Açúcar store is selling its products in five interest-free installments.
Make an algorithm that receives a purchase amount and show the value of the installments. */
#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float v, pv;
	printf("\n---------------------------Mamão com Açúcar store---------------------------");
	printf("\nProduct value: ");
	scanf("%f", &v);
	pv = v / 5;
	printf("\nThe value of each installment is: %.2f", pv); 
}
