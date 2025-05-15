#include <stdio.h>

int main(void) {

    int n, num, aux, controle, i;

    aux = 0;

    printf("Informe a quantidade de numeros que deseja digitar: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i = i + 1) {

        printf("Digite o número: ");
        scanf("%d", &num);

        if (num < aux) {
            controle = 1;
        }

        aux = num;
    }

    if (controle == 1) {
        printf("A sequência não está em ordem crescente.\n");
    } else {
        printf("A sequência está em ordem crescente.\n");
    }

    return 0;
}
