/*2. Crie uma fun��o que verifique se um ano fornecido � bissexto. Retorne 1 se for
bissexto, caso contr�rio, a fun��o n�o deve retornar nada. Um ano � bissexto se for
divis�vel por 4, exceto os divis�veis por 100, a menos que tamb�m sejam divis�veis
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
