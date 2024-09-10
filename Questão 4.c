/*4. Elabore uma função que receba três lados de um triângulo e verifique se ele é um
triângulo retângulo. Um triângulo é retângulo se o quadrado da hipotenusa (o maior
lado) for igual à soma dos quadrados dos outros dois lados. Caso o triângulo seja
retângulo, a função deverá informar ao usuário que o triângulo é retângulo, caso
contrário, não deverá fazer nada. (0.1 ponto)*/

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
        printf("O triângulo e retasngulo.\n");
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

