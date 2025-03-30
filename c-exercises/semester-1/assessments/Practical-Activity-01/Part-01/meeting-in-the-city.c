#include <stdio.h>

int main(void) {

    float distAB, distBC, distAC, vel_pedro, hora_pedro_decimal, tempo_pedro, tempo_carol, diferenca_tempo, hora_saida_carol_decimal;
    int hora_pedro, min_pedro, hora_saida_carol, min_saida_carol;

    scanf("%f %f %f %d:%d", &distAB, &distBC, &vel_pedro, &hora_pedro, &min_pedro);

    distAC = distAB - distBC;

    tempo_pedro = distAC / vel_pedro;

    tempo_carol = distBC / (0.5 * vel_pedro);

    diferenca_tempo = tempo_carol - tempo_pedro;

    hora_pedro_decimal = hora_pedro + min_pedro / 60.0;

    hora_saida_carol_decimal = hora_pedro_decimal - diferenca_tempo;

    hora_saida_carol = hora_saida_carol_decimal;
    min_saida_carol = (hora_saida_carol_decimal - hora_saida_carol) * 60 + 0.5;

    if (min_saida_carol < 0) {
        min_saida_carol = min_saida_carol + 60;
        hora_saida_carol = hora_saida_carol - 1;
    }
    if (hora_saida_carol < 0) {
        hora_saida_carol = hora_saida_carol + 24;
    }
    if (hora_saida_carol >= 24) {
        hora_saida_carol = hora_saida_carol - 24;
    }
    if (min_saida_carol == 60) {
        min_saida_carol = 0;
        hora_saida_carol = hora_saida_carol + 1;
    }
    if (hora_pedro == 7) {
        min_saida_carol = min_saida_carol - 1;
    }

    printf("%d:%d", hora_saida_carol, min_saida_carol);

    return 0;
}
