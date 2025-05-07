#include <stdio.h>

int main(void) {

    char operacao;
    int num, exec, calc, inverso, resto, result, mult, dec, base, valor, pot, expo, controle, copia, tamanho, pos, div, i, j, dig, ha_valor;

    exec = 1;

    while (exec == 1) {

        scanf(" %c", &operacao);

        switch (operacao) {
            case 'a':
                scanf("%d", &num);

                calc = num;

                while (calc > 0) {
                    inverso = calc % 10;
                    printf("%d", inverso);
                    calc = calc / 10;
                }

                printf("\n");
                break;

            case 'b':
                scanf("%d", &num);

                result = 0;
                mult = 1;

                if (num == 0) {
                    printf("0\n");
                }else {
                    while (num > 0) {
                        resto = num % 2;
                        result = result + resto * mult;
                        mult = mult * 10;
                        num = num / 2;
                    }

                    printf("%d\n", result);
                }
                break;

            case 'c':
                scanf("%d", &num);

                dec = 0;
                base = 1;
                calc = num;

                while (calc > 0) {
                    valor = calc % 10;
                    dec = dec + valor * base;
                    base = base * 2;
                    calc = calc / 10;
                }

                printf("%d\n", dec);
                break;

            case 'd':
                scanf("%d", &num);

                pot = 1;
                expo = 0;

                while (pot <= num / 2) {
                    pot = pot * 2;
                    expo = expo + 1;
                }

                controle = 1;

                while (pot >= 1) {
                    if (num >= pot) {
                        if (controle != 1) {
                            printf(" + ");
                        }
                        printf("2^%d", expo);
                        num = num - pot;
                        controle = 0;
                    }
                    pot = pot / 2;
                    expo = expo - 1;
                }

                printf(";\n");
                break;

            case 'e':
                scanf("%d", &num);

                copia = num;
                tamanho = 0;
                ha_valor = 0;

                while (copia > 0) {
                    copia = copia / 10;
                    tamanho = tamanho + 1;
                }

                copia = num;
                pos = tamanho;
                ha_valor = 0;

                while (pos > 0) {
                    div = 1;
                    i = 1;
                    while (i < pos) {
                        div = div * 10;
                        i = i + 1;
                    }

                    dig = copia / div;
                    copia = copia % div;

                    if (dig == 1) {
                        valor = 1;
                        j = 1;
                        while (j < pos) {
                            valor = valor * 2;
                            j = j + 1;
                        }

                        if (ha_valor == 1) {
                            printf(" + %d", valor);
                        }else {
                            printf("%d", valor);
                            ha_valor = 1;
                        }
                    }

                    pos = pos - 1;
                }

                printf(";\n");
                break;

            case 'x':
                exec = 0;
                break;

            default:
                printf("Código de operação inválido.\n");
                break;
        }

    }

    return 0;
}
