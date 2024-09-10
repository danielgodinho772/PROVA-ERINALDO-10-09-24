/*12. Desenvolva uma fun��o que receba o valor venal de um im�vel e calcule o valor
do IPTU com base na tabela abaixo:
? At� R$ 100.000,00: Al�quota de 1%
? De R$ 100.000,01 at� R$ 300.000,00: Al�quota de 1,5%
? De R$ 300.000,01 at� R$ 500.000,00: Al�quota de 2%
? Acima de R$ 500.000,00: Al�quota de 2,5%
Use a estrutura condicional aninhada para aplicar a al�quota corretamente. (0.4
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
