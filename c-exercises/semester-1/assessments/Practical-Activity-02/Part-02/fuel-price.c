#include <stdio.h>

int main(void) {

    float tempoviagem, velocidademedia, qtdatualcombustivel, distancia, precototal, combustivel_usado, complete, combustivel_restante;

    scanf("%f %f %f", &tempoviagem, &velocidademedia, &qtdatualcombustivel);

    distancia = velocidademedia * tempoviagem;

    combustivel_usado = distancia / 12;

    complete = 40 - qtdatualcombustivel;

    combustivel_restante = combustivel_usado - complete;

    if (combustivel_usado + qtdatualcombustivel < 40) {
        precototal = combustivel_usado * 4.80;
    } else {
        precototal = complete * 4.80;
        precototal = precototal + (combustivel_restante * 5.20);
    }

    printf("R$ %.2f", precototal);

    return 0;
}
