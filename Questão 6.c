/*6. Elabore uma fun��o que receba a nota de um aluno (de 0 a 10) e classifique se
ele foi aprovado ou reprovado. A aprova��o ocorre se a nota for 7 ou superior, e
reprova��o caso contr�rio. A fun��o deve exibir mensagens para os dois casos. (0.3
ponto)*/

#include <stdio.h>

int main (){
	
	float n;
	
	printf("Insira sua nota(0 a 10): ");
	scanf("%f",&n);
	
	if (n >= 7.0){
		printf("Aprovado(a)! \n");
	} else {
		printf("Reprovado(a)! \n");
	}
}
