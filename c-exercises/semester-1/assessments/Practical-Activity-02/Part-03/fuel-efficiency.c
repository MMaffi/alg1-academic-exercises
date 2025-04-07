#include <stdio.h>

int main(void) {

    int numUnico, v1, v2, v3, v4, v5, japassou;
    float media, soma;

    scanf("%d %d %d %d %d", &v1, &v2, &v3, &v4, &v5);

    soma = v1 + v2 + v3 + v4 + v5;
    numUnico = 5;

    if (v1 == v2 || v1 == v3 | v1 == v4 || v1 == v5) {
        soma = soma - v1;
        numUnico = numUnico - 1;
    }

    if (v2 == v3 || v2 == v4 || v2 == v5) {
        soma = soma - v2;
        numUnico = numUnico - 1;
    }

    if (v3 == v4 || v3 == v5) {
        soma = soma - v3;
        numUnico = numUnico - 1;
    }

    if (v4 == v5) {
        soma = soma - v4;
        numUnico = numUnico - 1;
    }

    if (numUnico > 0) {
        media = soma / numUnico;
        printf("%.6f", media);
    }

    return 0;
}
