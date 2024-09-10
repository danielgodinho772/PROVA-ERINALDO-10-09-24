/*15. Crie um programa que converta um valor monetário entre três moedas: real
(BRL), dólar (USD) e euro (EUR). O usuário deve informar a moeda de origem, a
moeda de destino e o valor a ser convertido. As taxas de conversão são as
seguintes:
? 1 USD = 5.30 BRL
? 1 EUR = 6.20 BRL
? 1 BRL = 0.19 USD
? 1 BRL = 0.16 EUR
O programa deve calcular e exibir o valor convertido. Se a moeda informada não for
reconhecida, o programa deve exibir uma mensagem de erro. (0.2 ponto)*/

#include <stdio.h>

int main() {
    char origem, destino;
    float valor, convertido;

    printf("Informe a moeda (B para BRL, U para USD, E para EUR): ");
    scanf(" %c", &origem);

    printf("Informe qual moeda voce quer converter (B para BRL, U para USD, E para EUR): ");
    scanf(" %c", &destino);

    printf("Informe o valor a ser convertido: ");
    scanf("%f", &valor);

    if (origem == 'U' && destino == 'B') {
        convertido = valor * 5.30;
        printf("%.2f USD = %.2f BRL\n", valor, convertido);
        
    } else if (origem == 'E' && destino == 'B') {
        convertido = valor * 6.20;
        printf("%.2f EUR = %.2f BRL\n", valor, convertido);
        
    } else if (origem == 'B' && destino == 'U') {
        convertido = valor * 0.19;
        printf("%.2f BRL = %.2f USD\n", valor, convertido);
        
    } else if (origem == 'B' && destino == 'E') {
        convertido = valor * 0.16;
        printf("%.2f BRL = %.2f EUR\n", valor, convertido);
        
    } else if (origem == destino) {
        printf("As moedas de origem e destino são iguais. O valor permanece: %.2f\n", valor);
        
    } else {
        printf("Erro: Moeda não reconhecida.\n");
    }

    return 0;
}

