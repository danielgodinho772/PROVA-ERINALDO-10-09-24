/*13. Crie um programa que simule uma calculadora simples. O programa deve
permitir ao usuário escolher entre quatro operações aritméticas: soma, subtração,
multiplicação e divisão. O usuário deve informar a operação desejada e dois
números. O programa deve realizar a operação selecionada e exibir o resultado.
Caso a operação não seja reconhecida, o programa deve informar um erro. (0.2
ponto)*/

#include <stdio.h>

int main() {
    char sinal;
    float num1, num2, resultado;

    printf("Escolha uma operacao (+, -, *, /): ");
    scanf(" %c", &sinal);

    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);
    printf("Informe o segundo numero: ");
    scanf("%f", &num2);


    switch (sinal) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
            } else {
                printf("Erro: Divisao por zero nao e permitida.\n");
            }
            break;
        default:
            printf("Erro: Operacao nao reconhecida.\n");
            break;
    }

    return 0;
}

