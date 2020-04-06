/* 4.Make an algorithm that calculates the value in reals corresponding to the dollars that a tourist has in the hotel safe.
The program must request the following data: Amount of dollars kept in the safe and quote for the dollar that day. */
#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float dv, dquo, r;
	printf("\nDollar value: U$ ");
	scanf("%f", &dv);
	printf("\nDollar quote (current): ");
	scanf("%f", &dquo);
	r = dquo * dv;
	printf("\nValue in reais: R$ %.2f", r); 
}
