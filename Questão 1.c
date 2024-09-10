/*1. Crie uma função que receba um número inteiro de 1 a 10 e retorne 1 se o número
for primo. Caso contrário, não retorne nada. Você não pode usar laços de repetição,
por essa razão, limite a verificação a um conjunto pequeno de números para
verificar se são primos. Um número primo é divisível apenas por 1 e por ele mesmo.
(0.1 ponto)*/

#include <stdio.h>

 int num_primo(int numero) {
    if (numero == 2 || numero == 3 || numero == 5 || numero == 7) {
        return 1;
    } 
    return 0; 
}


int main () {
	int numero;
	
	printf("Informe um numero (1 a 10): ");
	scanf("%d", &numero);
	
	if (numero >= 1 && numero <=10) {
		if(num_primo(numero)) {
			printf("%d e um numero primo.\n", numero);
		} else if (num_primo(numero)) {
			printf("%d nao e um numero primo.\n", numero);
		}		
	} else {
		printf("Informe um numero valido (1 a 10) ");
	}	
	return 0;	
}

