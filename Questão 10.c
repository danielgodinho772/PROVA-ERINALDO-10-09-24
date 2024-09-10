/*10. Elabore uma função que receba o salário bruto de uma pessoa e calcule o valor
da contribuição ao INSS com base na tabela de INSS de 2024. Utilize as faixas e
alíquotas progressivas para calcular o valor da contribuição:
? Até R$ 1.320,00: 7,5%
? De R$ 1.320,01 até R$ 2.571,29: 9%
? De R$ 2.571,30 até R$ 3.856,94: 12%
? De R$ 3.856,95 até R$ 7.507,49: 14%
Use a estrutura condicional aninhada para calcular o desconto corretamente. (0.4
ponto)*/

#include <stdio.h>

float calcu_inss(float salario) {
	float inss;
	
	if (salario <= 1320.00){
		inss = salario * 0.075;
		
	} else if (salario <= 2571.29){
	    inss = 1320.00 * 0.075 + (salario - 1320.00) * 0.09;	
		
	} else if (salario <= 3856.94){
		 inss = 1320.00 * 0.075 + (2571.29 - 1320.00) * 0.09 + (salario - 2571.29) * 0.12;
		
	} else if (salario <= 7507.49) {
        inss = 1320.00 * 0.075 + (2571.29 - 1320.00) * 0.09 + (3856.94 - 2571.29) * 0.12 + (salario - 3856.94) * 0.14;
    } else {
        inss = 1320.00 * 0.075 + (2571.29 - 1320.00) * 0.09 + (3856.94 - 2571.29) * 0.12 + (7507.49 - 3856.94) * 0.14;
    }
    return inss;
}


int main(){
	float salario;
	float inss;
	
	printf("Informe seu salario atual: R$ ");
	scanf("%f",&salario);
	
	inss = calcu_inss(salario);
	
	printf("O valor deduzido do inss e: %2.f\n",inss);
	
	return 0;
	
}
