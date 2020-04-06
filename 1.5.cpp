/*5. Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar suas vendas oferecendo desconto. Faça um
algoritmo que receba o valor de um produto e que escreva o novo valor tendo em vista que o desconto foi de 9%.*/
#include <stdio.h>
#include <locale.h>
main(){
	setlocale(LC_ALL,"Portuguese");
	float v;
	printf("\nValor do produto: R$ ");
	scanf("%f", &v);
	v -= v * 0.09;
	printf("\nO valor com desconto é: R$ %.2f", v);
}
