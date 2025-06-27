#include <stdio.h>
#include <string.h>

int main(void) {

    char palavra[71];
    int N, L, C, tamanho, i, linhas, caracteres, paginas;

    scanf("%d %d %d", &N, &L, &C);

    linhas = 1;
    caracteres = 0;

    for (i = 0; i < N; i = i + 1) {

        scanf("%s", palavra);
        tamanho = strlen(palavra);

        if (caracteres == 0) {
            caracteres = tamanho;
        } else {
            if (caracteres + 1 + tamanho <= C) {
                caracteres = caracteres + 1 + tamanho;
            } else {
                linhas = linhas + 1;
                caracteres = tamanho;
            }
        }

    }

    paginas = (linhas + L - 1) / L;

    printf("%d página(s)\n", paginas);

    return 0;
}
