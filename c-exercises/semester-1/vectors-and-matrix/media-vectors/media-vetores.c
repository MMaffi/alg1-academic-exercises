#include <stdio.h>

int main(void) {

    int vet[1000], i, n, soma, media;

    soma = 0;

    printf("Informe a quantidade de valores: ");
    scanf("%d", &n);

    printf("Agora informe os valores: ");
    for (i = 0; i < n; i = i + 1) {

        scanf("%d", &vet[i]);
        soma = soma + vet[i];

    }

    media = soma / n;

    printf("A média aritimética dos números digitados é: %d\n", media);
    printf("Os valores acima da media digitados foram: ");

    for (i = 0; i < n; i = i + 1) {

        if (vet[i] > media && i < n - 1) {
            printf("%d, ", vet[i]);
        }

        if (vet[i] > media && i == n - 1) {
            printf("%d\n", vet[i]);
        }

    }

    return 0;
}