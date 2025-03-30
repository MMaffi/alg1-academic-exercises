#include <stdio.h>

int main(void) {

    int num, quad, cubo;

    printf("Digite um número: ");
    scanf("%d", &num);

    quad = num * num;
    cubo = num * num * num;

    printf("O valor do quadrado de %d é: %d", num, quad);
    printf("O valor do cubo de %d é: %d", num, cubo);

    return 0;
}
