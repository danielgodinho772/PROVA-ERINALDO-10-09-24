/*1. Crie uma fun��o que receba um n�mero inteiro de 1 a 10 e retorne 1 se o n�mero
for primo. Caso contr�rio, n�o retorne nada. Voc� n�o pode usar la�os de repeti��o,
por essa raz�o, limite a verifica��o a um conjunto pequeno de n�meros para
verificar se s�o primos. Um n�mero primo � divis�vel apenas por 1 e por ele mesmo.
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

