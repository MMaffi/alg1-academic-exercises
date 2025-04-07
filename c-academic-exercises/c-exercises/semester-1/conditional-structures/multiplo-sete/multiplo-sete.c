#include <stdio.h>

int main(void) {

    int numero;

    printf("Digite um número inteiro qualquer: ");
    scanf("%d", &numero);

    if (numero % 7 == 0) {
        printf("O número %d é multiplo de 7!\n", numero);
    } else {
        printf("O número %d não é multiplo de 7!\n", numero);
    }

    return 0;
}
