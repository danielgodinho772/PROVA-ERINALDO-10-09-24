/*2. Crie uma função que verifique se um ano fornecido é bissexto. Retorne 1 se for
bissexto, caso contrário, a função não deve retornar nada. Um ano é bissexto se for
divisível por 4, exceto os divisíveis por 100, a menos que também sejam divisíveis
por 400. (0.1 ponto)*/

#include <stdio.h>

int bissex(int ano) {
    if ((ano % 4 == 0) || (ano % 400 == 0)) {
        return 1;
    }
    return 0;
}

int main() {
    int ano;
    
    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (bissex(ano)) {
        printf("%d e um ano bissexto.\n", ano);
    } else {
        printf("%d nao e um ano bissexto.\n", ano);
    }
    
    return 0;
}
