/*5. Crie uma fun��o que receba a idade de uma pessoa e verifique se ela � maior de
idade (18 anos ou mais). A fun��o deve exibir uma mensagem diferente para os
casos em que a pessoa � maior ou menor de idade. (0.3 ponto)*/

#include <stdio.h>

int main(){
	int age;
	
	printf("Informe sua idade: ");
	scanf("%d",&age);
	
	if (age >= 18){
		printf("Voce e maior de idade! \n");
	} else {
		printf("Voce e menor de idade! \n");
	}
	
	
	}
	
