#include <stdio.h>

int main(void) {

    int numero, copia_num, binario, resto, multiplicador;

    multiplicador = 1;
    binario = 0;

    printf("Digite o número decimal: ");
    scanf("%d", &numero);

    copia_num = numero;

    while (copia_num > 0) {

        resto = copia_num % 2;
        binario = binario + (resto * multiplicador);
        copia_num = copia_num / 2;
        multiplicador = multiplicador * 10;

    }

    printf("O número decimal digitado foi: %d\n", numero);
    printf("O número binário é: %d\n", binario);

    return 0;
}
