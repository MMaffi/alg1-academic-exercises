#include <stdio.h>

int main(void) {

    int j, num, menor,  maior;

    j = 1;

    printf("Seja bem vindo ao identificador de maior e menor número digitado.\nPara começar basta digitar os números.\nPara encerrar basta digitar um número negativo\n");

    while (num >= 0) {

        printf("Digite seus números: ");

        scanf("%d", &num);

        if (num >= 0) {
            if (j == 1) {
            maior = num;
            menor = num;
            }
            if (num > maior) {
                maior = num;
            }
            if (num < menor) {
                menor = num;
            }
        }

        j = 0;
    }

    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}
