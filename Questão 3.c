/*3. Crie uma fun��o que receba tr�s lados de um tri�ngulo e verifique se esses lados
formam um tri�ngulo v�lido. Um tri�ngulo � v�lido se a soma de dois de seus lados
for sempre maior que o terceiro. Caso o tri�ngulo seja v�lido, a fun��o dever�
retornar 1. Caso contr�rio, n�o deve retornar nada. (0.1 ponto)*/

#include <stdio.h>

int ver_trian(int a, int b, int c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        return 1;
    }
    return 0;
}

int main() {
    int l1, l2, l3;
    
    printf("Informe o primeiro lado: ");
    scanf("%d", &l1);
    
    printf("Informe o segundo lado: ");
    scanf("%d", &l2);
    
    printf("Informe o terceiro lado: ");
    scanf("%d", &l3);
     
    if (ver_trian(l1, l2, l3)) {
        printf("O triangulo e valido.\n");
    } else {
        printf("O triangulo nao e valido.\n");
    }
    
    return 0;
}

