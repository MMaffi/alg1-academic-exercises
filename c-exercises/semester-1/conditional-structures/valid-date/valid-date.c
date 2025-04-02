#include <stdio.h>

int main(void) {

    int dia, mes, ano;

    printf("Informe uma data, exemplo - xx/xx/xxxx: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if (mes > 12) {
        printf("Essa não é uma data válida!\n");
    } else {
        if (dia > 29 && mes == 2) {
            printf("Essa não é uma data válida!\n");
        } else {
            if (dia == 29 && mes == 2 && !((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0))) {
                printf("Essa não é uma data válida!\n");
            } else {
                if (dia > 30 && (mes == 2 || mes == 4 || mes == 6 || mes == 9 || mes == 11)) {
                    printf("Essa não é uma data válida!\n");
                } else {
                    if (dia > 31) {
                        printf("Essa não é uma data válida!\n");
                    } else {
                        printf("Parabéns, você digitou uma data válida!\n");
                    }
                }
            }
        }
    }

    return 0;
}
