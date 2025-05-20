#include <stdio.h>

int main(void) {

    int pesoini, tempo, horas, minutos, segundos;
    float copiapesoini, pesofinal;

    tempo = 0;
    horas = 0;
    minutos = 0;
    segundos = 0;

    printf("Digite o peso do elemento radioativo (em gramas): ");
    scanf("%d",  &pesoini);

    pesofinal = pesoini;

    while (pesofinal > 0.5) {

        tempo = tempo + 50;

        pesofinal = pesofinal / 2;
    }

    horas = tempo / 3600;
    minutos = (tempo % 3600) / 60;
    segundos = tempo % 60;

    printf("O peso inical do material é: %d gramas\n", pesoini);
    printf("O peso final do material é: %.2f gramas\n", pesofinal);
    printf("O tempo necessário foi de: %02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}
