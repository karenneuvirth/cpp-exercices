/*5. Em �pocas de pouco dinheiro, os comerciantes est�o procurando aumentar suas vendas oferecendo desconto. Fa�a um
algoritmo que receba o valor de um produto e que escreva o novo valor tendo em vista que o desconto foi de 9%.*/
#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float v;
	printf("\nValor do produto: R$ ");
	scanf("%f", &v);
	v -= v * 0.09;
	printf("\nO valor com desconto �: R$ %.2f", v);
}
