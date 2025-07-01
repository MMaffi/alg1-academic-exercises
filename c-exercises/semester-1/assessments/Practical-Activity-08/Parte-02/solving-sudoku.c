#include <stdio.h>

int eh_valido(int matriz[9][9], int linha, int coluna, int num) {
    int i, j, bloco_l, bloco_c, valido;

    valido = 1;

    for (i = 0; i < 9; i = i + 1) {
        if (matriz[linha][i] == num) {
            valido = 0;
        }
        if (matriz[i][coluna] == num) {
            valido = 0;
        }
    }

    bloco_l = (linha / 3) * 3;
    bloco_c = (coluna / 3) * 3;

    for (i = 0; i < 3; i = i + 1) {
        for (j = 0; j < 3; j = j + 1) {
            if (matriz[bloco_l + i][bloco_c + j] == num) {
                valido = 0;
            }
        }
    }

    return valido;
}

int resolver(int matriz[9][9], int preenchido[9][9]) {
    int linha, coluna, num, achou_vazio, resolvido, encontrou, validar, validar2;

    achou_vazio = 0;
    linha = 0;
    coluna = 0;
    resolvido = 0;

    while (linha < 9 && achou_vazio == 0) {
        coluna = 0;
        while (coluna < 9 && achou_vazio == 0) {
            if (matriz[linha][coluna] == 0) {
                achou_vazio = 1;
            } else {
                coluna = coluna + 1;
            }
        }
        if (achou_vazio == 0) {
            linha = linha  + 1;
        }
    }

    if (achou_vazio == 0) {
        resolvido = 1;
    } else {
        encontrou = 0;
        num = 1;
        while (num <= 9 && encontrou == 0) {
            validar = eh_valido(matriz, linha, coluna, num);
            if (validar == 1) {
                matriz[linha][coluna] = num;
                validar2 = resolver(matriz, preenchido);
                if (validar2 == 1) {
                    resolvido = 1;
                    encontrou = 1;
                } else {
                    matriz[linha][coluna] = 0;
                }
            }
            num = num + 1;
        }
    }

    return resolvido;
}

void imprimir_resultado(int matriz[9][9], int preenchido[9][9]) {
    int i, j, count, numeros[9];

    for (i = 0; i < 9; i = i + 1) {
        count = 0;
        for (j = 0; j < 9; j = j + 1) {
            if (preenchido[i][j] == 0) {
                numeros[count] = matriz[i][j];
                count = count + 1;
            }
        }

        if (count > 0) {
            printf("Linha %d:", i + 1);
            for (j = 0; j < count; j = j + 1) {
                printf(" %d", numeros[j]);
            }
            printf("\n");
        }
    }
}

int main(void) {
    int matriz[9][9], preenchido[9][9], i, j, resultado;

    for (i = 0; i < 9; i = i + 1) {
        for (j = 0; j < 9; j = j + 1) {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] != 0) {
                preenchido[i][j] = 1;
            } else {
                preenchido[i][j] = 0;
            }
        }
    }

    resultado = resolver(matriz, preenchido);

    if (resultado == 1) {
        imprimir_resultado(matriz, preenchido);
    } else {
        printf("desafio incompleto\n");
    }

    return 0;
}
