/*8. Elabore uma fun��o que calcule o imposto sobre um sal�rio com base no valor
recebido. Se o sal�rio for maior que R$ 5.000,00, o imposto ser� de 20%. Caso
contr�rio, o imposto ser� de 10%. A fun��o deve exibir o valor do imposto a ser
pago. (0.3 ponto)*/

#include <stdio.h>

int main (){
	float salario;
	float imposto;
	
	printf("Informe seu salario: R$ ");
	scanf("%f",&salario);
	
	if (salario > 5000) {
	imposto = salario * 0.20;	
	} else {	
		imposto = salario * 0.10;
	}
	
	printf("O valor do imposto pago e: R$ %.2f\n",imposto);
	
  return 0;	
}
