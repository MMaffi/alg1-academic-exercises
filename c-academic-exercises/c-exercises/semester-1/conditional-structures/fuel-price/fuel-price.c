#include <stdio.h>

int main(void) {

    char tipocombustivel;
    float litros, precoTotal;

    #define PrecoAlcool 2.10
    #define PrecoDiesel 2.45
    #define PrecoGasolina 3.15

    printf("Informe o tipo de combustível que deseja:\nA - Álcool\nD - Díesel\nG - Gasolina\nAguardando tipo: ");
    scanf("%c", &tipocombustivel);
    printf("Informe a quantidade de combustível que deseja (em litros): ");
    scanf("%f", &litros);

    if (tipocombustivel == 'A') {
        precoTotal = PrecoAlcool * litros;
        printf("O preço total da sua requisição vai ser: R$%.2f\n", precoTotal);
    } else {
        if (tipocombustivel == 'D') {
            precoTotal = PrecoDiesel * litros;
            printf("O preço total da sua requisição vai ser: R$%.2f\n", precoTotal);
        } else {
            precoTotal = PrecoGasolina * litros;
            printf("O preço total da sua requisição vai ser: R$%.2f\n", precoTotal);
        }
    }

    return 0;
}
