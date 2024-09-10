/*14. Elabore um programa que exiba uma mensagem de boas-vindas baseada no
turno do dia. O usuário deve informar o turno usando um número (1 para manhã, 2
para tarde, 3 para noite). O programa deve exibir uma mensagem apropriada para
cada turno e um erro para entradas inválidas. (0.2 ponto)*/

#include <stdio.h>

int main () {
	int turno;
	
	printf("Informe o turno (1 - Manhã, 2 - Tarde, 3 - Noite): ");
	scanf("%d", &turno);
	
	switch(turno) {
		case 1:
			printf("Bom dia, hoje sera um dia produtivo ");
			break;
		case 2:
		    printf("Boa tarde, foco no progresso ");
			break;
		case 3:
		    printf("Boa noite, bom trabalho a voce");
			break;
		default:
		    printf("Turno invalido");
			break;		
	}
	return 0;
}
