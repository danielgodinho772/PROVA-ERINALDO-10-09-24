/*9. Crie uma função que receba o salário bruto de uma pessoa e calcule o valor do
Imposto de Renda Retido na Fonte (IRRF) com base na tabela de IRRF de 2024.
Utilize as alíquotas e deduções conforme a tabela abaixo:
? Até R$ 2.112,00: Isento
? De R$ 2.112,01 até R$ 2.826,65: Alíquota de 7,5% (dedução de R$ 158,40)
? De R$ 2.826,66 até R$ 3.751,05: Alíquota de 15% (dedução de R$ 370,40)
? De R$ 3.751,06 até R$ 4.664,68: Alíquota de 22,5% (dedução de R$ 651,73)
? Acima de R$ 4.664,68: Alíquota de 27,5% (dedução de R$ 884,96)
Use a estrutura condicional aninhada para calcular o imposto corretamente. (0.4
ponto)
*/

#include <stdio.h>

float calcula_irrf(float salabruto) {
	float imposto;
	
	if (salabruto <= 2122.00) {
		imposto = 0.0;
		printf("Voce esta dispensado do pagamento do imposto. \n");
		
		} else if ((salabruto >= 2122.01) && (salabruto <=2826.65)) {
			imposto = salabruto * 0.075  - 158.40;
			printf("Aliquota aplicavel de 7,5%% (com deducao de R$ 158,40)\n");
			
		} else if ((salabruto >= 2826.66) && (salabruto <= 3751.05)) {
			imposto = salabruto * 0.15 - 370.40;
			printf("Aliquota aplicavel de 15%% (com deducao de R$ 370,40)\n");
			
		} else if ((salabruto >=3751.06) && (salabruto <= 4664.68)) {
			imposto = salabruto * 0.225 - 651.73;
			printf("Aliquota aplicavel de 22,5%% (com deducao de R$ 651,73)\n");
			
		} else {
			imposto = salabruto * 0.275 - 884.96;
			printf("Aliquota aplicavel de 27,5%% (com deducao de R$ 884,96)\n");
		}
		
		return imposto;
	
}

int main(){
	float salabruto;
	float imposto;
	
	 printf("Informe seu salario bruto: ");
	 scanf("%f",&salabruto);
	 
	 imposto = calcula_irrf(salabruto);
	 
	  printf("O valor do imposto de renda retido na fonte e: R$ %.2f\n", imposto);
	 
	 return 0;
	 
}
