/*7. Desenvolva uma função que receba um número inteiro e determine se ele é par
ou ímpar. Exiba uma mensagem correspondente para cada caso. (0.3 ponto)*/

#include <stdio.h>

int main(){
	int num = 0;
	
	printf("Informe um numero: ");
	scanf("%d",&num);
	
	if (num % 2 == 0){
		printf("O numero %d e par!",num);
	} else {
		printf("O numero %d e impar! ",num);
		}
	
}
