/*4. Elabore uma fun��o que receba tr�s lados de um tri�ngulo e verifique se ele � um
tri�ngulo ret�ngulo. Um tri�ngulo � ret�ngulo se o quadrado da hipotenusa (o maior
lado) for igual � soma dos quadrados dos outros dois lados. Caso o tri�ngulo seja
ret�ngulo, a fun��o dever� informar ao usu�rio que o tri�ngulo � ret�ngulo, caso
contr�rio, n�o dever� fazer nada. (0.1 ponto)*/

#include <stdio.h>

void tri_ret(int a, int b, int c) {
    int maior, l1, l2;
    
    if (a >= b && a >= c) {
        maior = a;
        l1 = b;
        l2 = c;
    } else if (b >= a && b >= c) {
        maior = b;
        l1 = a;
        l2 = c;
    } else {
        maior = c;
        l1 = a;
        l2 = b;
    }
    
    if (maior * maior == (l1 * l1 + l2 * l2)) {
        printf("O tri�ngulo e retasngulo.\n");
    }
}

int main() {
    int l1, l2, l3;
    
    printf("Digite o comprimento do primeiro lado: ");
    scanf("%d", &l1);
    
    printf("Digite o comprimento do segundo lado: ");
    scanf("%d", &l2);
    
    printf("Digite o comprimento do terceiro lado: ");
    scanf("%d", &l3);

   tri_ret(l1, l2, l3);
    
    return 0;
}

