/*8. Elabore uma função que calcule o imposto sobre um salário com base no valor
recebido. Se o salário for maior que R$ 5.000,00, o imposto será de 20%. Caso
contrário, o imposto será de 10%. A função deve exibir o valor do imposto a ser
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
