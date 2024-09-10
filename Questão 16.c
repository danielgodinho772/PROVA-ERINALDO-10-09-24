/*16. Desenvolva um programa que classifique o desempenho acadêmico de um
aluno com base em sua nota final. A nota deve ser informada pelo usuário e
classificada da seguinte forma:
? A (nota >= 9.0)
? B (nota >= 7.0 e < 9.0)
? C (nota >= 5.0 e < 7.0)
? D (nota < 5.0)
O programa deve exibir a classificação correspondente. Se a nota estiver fora do
intervalo de 0 a 10, o programa deve informar um erro. (0.2 ponto)*/

#include <stdio.h>

int main () {
	float n1, n2, n3, n4, media;
	
	printf("Informe a primeira nota: ");
	scanf("%f", &n1);
	
	printf("Informe a segunda nota: ");
	scanf("%f", &n2);
	
	printf("Informe a terceira nota: ");
	scanf("%f", &n3);
	
	printf("Informe a quarta nota: ");
	scanf("%f", &n4);
	
	media = (n1 + n2 + n3 + n4) / 4.0;
	
	if (media < 0 || media > 10) {
		printf("Nota invalida, insira uma nota de 0 a 10.\n");
	} else {
		
		if (media > 9.0) {
			printf("Nota A");
			
		} else if (media > 7.0 && media < 9.0 ) {
			printf("Nota B");
			
		} else if (media >=5.0 && media <= 7.0) {
			printf("Nota C");
			
		} else {
			printf("Nota D");
		}	
	}
   return 0;
}
