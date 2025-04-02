#include <stdio.h>

int main(void) {

    float x, y, z, menor, medio, maior;

    printf("Informe um valor: ");
    scanf("%f", &x);

    printf("Informe outro valor: ");
    scanf("%f", &y);

    printf("Informe um último valor: ");
    scanf("%f", &z);

    /* encontrando o menor valor */
    menor = x;
    if (y < menor) {
        menor = y;
    }
    if (z < menor) {
        menor = z;
    }

    /* encontrando o maior valor */
    maior = x;
    if (y > maior) {
        maior = y;
    }
    if (z > maior) {
        maior = z;
    }

    /* encontrando o valor medio */
    medio = x;
    if (y > menor && y < maior) {
        medio = y;
    }
    if (z > menor && z < maior) {
        medio = z;
    }

    x = menor;
    y = medio;
    z = maior;

    printf("O menor valor é %f e ficou em X\n", x);
    printf("O valor do meio é %f e ficou em Y\n", y);
    printf("O maior valor é %f e ficou em Z\n", z);

    return 0;
}
