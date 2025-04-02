#include <stdio.h>

int main(void) {

    int num;

    printf("Informe um número inteio qualquer: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O número digitado é PAR!");
    } else {
        printf("O número digitado é IMPAR!");
    }

    return 0;
}
