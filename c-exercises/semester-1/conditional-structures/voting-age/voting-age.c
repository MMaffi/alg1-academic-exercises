#include <stdio.h>

int main(void) {

    int idade;

    printf("Informe a sua idade atual: ");
    scanf("%d", &idade);

    printf("Devido a você ter atualmente %d anos, você é: ", idade);

    if (idade < 16) {
        printf("Não eleitor!\n");
    } else {
        if (idade > 18 && idade < 65) {
            printf("Eleitor obrigatório!\n");
        } else {
            printf("Eleitor facultativo!\n");
        }
    }

    return 0;
}
