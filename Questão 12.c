/*12. Desenvolva uma função que receba o valor venal de um imóvel e calcule o valor
do IPTU com base na tabela abaixo:
? Até R$ 100.000,00: Alíquota de 1%
? De R$ 100.000,01 até R$ 300.000,00: Alíquota de 1,5%
? De R$ 300.000,01 até R$ 500.000,00: Alíquota de 2%
? Acima de R$ 500.000,00: Alíquota de 2,5%
Use a estrutura condicional aninhada para aplicar a alíquota corretamente. (0.4
ponto)*/

#include <stdio.h>
float calcu_imovel(float venal){
	float iptu;
	
	if (venal <= 100000.00) {
		iptu = venal * 0.01;
		printf("A aliquota e de 1%%");
		
	} else if (venal <= 300000.00) {
		iptu = venal * 0.015;
		printf("A aliquota e de 1,5%%");
		
	} else if ( venal <= 500000.00){
		iptu = venal * 0.02;
		printf("A aliquota e de 2%%");
		
	} else {
		iptu = venal * 0.025;
		printf("A aliquota e de 2,5%%");
	}
	return iptu;
}

int main() {
	float venal;
	float iptu;
	
	printf("Informe o valor venal do imovel: R$");
	scanf("%f", &venal);

	iptu = calcu_imovel(venal);
	
	  printf("O valor do IPTU e: R$ %.2f\n",iptu);
	
	return 0;
}
