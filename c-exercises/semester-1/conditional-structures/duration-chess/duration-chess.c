#include <stdio.h>

int main(void) {

    int hora_inicio, hora_fim, duracao;

    printf("Informe a hora do início do jogo: ");
    scanf("%d", &hora_inicio);
    printf("Informe a hora do fim do jogo: ");
    scanf("%d", &hora_fim);

    if (hora_inicio < hora_fim) {
        duracao = hora_fim - hora_inicio;
    } else {
        duracao = (24 - hora_inicio) + hora_fim;
    }

    if (duracao > 24) {
        printf("A duração máxima para um jogo de xadrez é de 24 horas!\n");
    } else {
        printf("A duração da partida de xadrez foi: %d horas.\n", duracao);
    }

    return 0;
}
