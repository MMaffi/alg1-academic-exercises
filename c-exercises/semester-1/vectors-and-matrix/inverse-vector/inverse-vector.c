#include <stdio.h>

int main(void) {

    int v[100], n, aux, i, acumulador, total;

    acumulador = 0;

    printf("Informe a quantidade de valores: ");
    scanf("%d", &n);

    printf("Agora informe os valores do vetor: ");
    for (i = 0; i < n; i = i + 1) {

        scanf("%d", &v[i]);

    }

    printf("O vetor normal é: ");
    for (i = 0; i < n - 1; i = i + 1) {

        printf("%d, ", v[i]);

    }
    printf("%d\n", v[n - 1]);

    total = n - 1;

    while (acumulador < total) {

        aux = v[acumulador];
        v[acumulador] = v[total];
        v[total] = aux;

        acumulador = acumulador + 1;
        total = total - 1;

    }

    printf("O vetor invertido é: ");
    for (i = 0; i < n - 1; i = i + 1) {

        printf("%d, ", v[i]);

    }
    printf("%d\n", v[n - 1]);

    return 0;
}