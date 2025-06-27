#include <stdio.h>

void lerMatriz(char matriz[10][10], int d) {
    int i, j;

    for (i = 0; i < d; i = i + 1) {
        for (j = 0; j < d; j = j + 1) {
            scanf(" %c", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(char matriz[10][10], int d) {
    int i, j;

    for (i = 0; i < d; i = i + 1) {
        for (j = 0; j < d; j = j + 1) {
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void transposicao(char matriz[10][10], int d) {
    int i, j;
    char temp;

    for (i = 0; i < d; i = i + 1) {
        for (j = i + 1; j < d; j = j + 1) {
            temp = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = temp;
        }
    }
}

void transposicaoInversa(char matriz[10][10], int d) {
    int i, j;
    char temp;

    for (i = 0; i < d; i = i + 1) {
        for (j = 0; j < d - i - 1; j = j + 1) {
            temp = matriz[i][j];
            matriz[i][j] = matriz[d - j - 1][d - i - 1];
            matriz[d - j - 1][d - i - 1] = temp;
        }
    }
}

void inversaoHorizontal(char matriz[10][10], int d) {
    int i, j;
    char temp;

    for (i = 0; i < d / 2; i = i + 1) {
        for (j = 0; j < d; j = j + 1) {
            temp = matriz[i][j];
            matriz[i][j] = matriz[d - i - 1][j];
            matriz[d - i - 1][j] = temp;
        }
    }
}

void inversaoVertical(char matriz[10][10], int d) {
    int i, j;
    char temp;

    for (i = 0; i < d; i = i + 1) {
        for (j = 0; j < d / 2; j = j + 1) {
            temp = matriz[i][j];
            matriz[i][j] = matriz[i][d - j - 1];
            matriz[i][d - j - 1] = temp;
        }
    }
}

void rotacaoHorario(char matriz[10][10], int d) {
    transposicao(matriz, d);
    inversaoVertical(matriz, d);
}

void rotacaoAntiHorario(char matriz[10][10], int d) {
    transposicao(matriz, d);
    inversaoHorizontal(matriz, d);
}

int main(void) {
    int d, controle;
    char matriz[10][10], comando;

    controle = 1;

    scanf("%d", &d);
    lerMatriz(matriz, d);

    while (controle == 1) {
        scanf(" %c", &comando);

        if (comando == 's') {
            controle = 0;
        } else {
            if (comando == 't') {
                transposicao(matriz, d);
            } else {
                if (comando == 'i') {
                    transposicaoInversa(matriz, d);
                } else {
                    if (comando == 'h') {
                        inversaoHorizontal(matriz, d);
                    } else {
                        if (comando == 'v') {
                            inversaoVertical(matriz, d);
                        } else {
                            if (comando == 'r') {
                                rotacaoHorario(matriz, d);
                            } else {
                                if (comando == 'a') {
                                    rotacaoAntiHorario(matriz, d);
                                }
                            }
                        }
                    }
                }
            }

            imprimirMatriz(matriz, d);
        }
    }

    return 0;
}
