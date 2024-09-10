/*11. Crie uma função que receba o valor de um produto e calcule o valor do desconto
de ICMS com base nas faixas de preço do produto:
? Até R$ 1.000,00: Desconto de 5%
? De R$ 1.000,01 até R$ 5.000,00: Desconto de 10%
? Acima de R$ 5.000,00: Desconto de 15%
Use a estrutura condicional aninhada para aplicar o desconto corretamente. (0.4
ponto)*/

#include <stdio.h>

float calcu_impos(float produto) {
	float desconto;
	
	if (produto <= 1000.00) {
		desconto = produto * 0.05;
		printf("O desconto e de: 5%%\n");
		
	} else if (produto <= 5000.00){
		desconto = produto * 0.10;
		printf("O desconto e de: 10%%\n");
		
	} else {
		desconto = produto * 0.15;
		printf("O desconto e de: 15%%\n");
	}
	return desconto;
}

int main(){
	float produto;
	
	printf("Informe o valor do produto: R$");
	scanf("%f", &produto);
	
	float desconto = calcu_impos(produto);
    printf("O valor do desconto e: R$%.2f\n", desconto);
    
    return 0;
}
