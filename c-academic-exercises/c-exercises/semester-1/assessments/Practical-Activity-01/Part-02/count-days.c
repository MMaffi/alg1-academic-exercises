#include <stdio.h>

int main(void) {

    int dia, mes, ano, diaspassados;

    scanf("%d/%d/%d/", &dia, &mes, &ano);

    /* 31 */
    if (mes == 1) {
        diaspassados = dia;
    }
    /* 29 */
    if (mes == 2) {
        diaspassados = 31 + dia;
    }
    /* 31 */
    if (mes == 3) {
        diaspassados = 60 + dia;
    }
    /* 30 */
    if (mes == 4) {
        diaspassados = 91 + dia;
    }
    /* 31 */
    if (mes == 5) {
        diaspassados = 121 + dia;
    }
    /* 30 */
    if (mes == 6) {
        diaspassados = 152 + dia;
    }
    /* 31 */
    if (mes == 7) {
        diaspassados = 182 + dia;
    }
    /* 31 */
    if (mes == 8) {
        diaspassados = 213 + dia;
    }
    /* 30 */
    if (mes == 9) {
        diaspassados = 244 + dia;
    }
    /* 31 */
    if (mes == 10) {
        diaspassados = 274 + dia;
    }
    /* 30 */
    if (mes == 11) {
        diaspassados = 305 + dia;
    }
    /* 31 */
    if (mes == 12) {
        diaspassados = 335 + dia;
    }
    /* verificação de ano bissexto */
    if (!((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) && mes > 2) {
        diaspassados = diaspassados - 1;
    }

    printf("%d\n", diaspassados);

    return 0;
}
