#include <stdio.h>

int main(void) {

    char motor, velas, bicos, mArranque, compressao;
    float pressao, resistencia, tensao;

    scanf("%c", &motor);
    if (motor == 'L') {
        scanf(" %c", &velas);
        if (velas == 'T') {
            scanf("%f", &pressao);
            if (pressao < 2) {
                printf("Inspecionar bomba de combustível e regulador de pressão");
            }
            if (pressao >= 2 && pressao <= 4) {
                scanf(" %c", &bicos);
                if (bicos == 'R') {
                    printf("Medir a compressão do motor");
                }
                if (bicos == 'I') {
                    printf("Limpar/trocar bicos injetores");
                }
            }
            if (pressao > 4) {
                printf("Inspecionar regulador de pressão");
            }
        }
        if (velas == 'A') {
            scanf("%f", &resistencia);
            if (!(resistencia < 4000) && !(resistencia > 16000)) {
                printf("Trocar velas");
            }
            if (resistencia < 4000 || resistencia > 16000) {
                printf("Trocar bobinas");
            }
        }
    }
    if (motor == 'N') {
        scanf(" %c", &mArranque);
        if (mArranque == 'O') {
            scanf(" %c", &compressao);
            if (compressao == 'N') {
                printf("Inspecionar sistemas de ignição e de injeção");
            }
            if (compressao == 'B') {
                printf("Retificar o motor");
            }
        }
        if (mArranque == 'I') {
            scanf("%f", &tensao);
            if (tensao > 12.2) {
                printf("Inspecionar motor de arranque");
            }
            if (tensao <= 12.2) {
                printf("Inspecionar bateria e/ou alternador");
            }
        }
    }

    return 0;
}
