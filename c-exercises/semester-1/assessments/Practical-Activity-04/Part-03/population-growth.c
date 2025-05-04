#include <stdio.h>

int main(void) {

    int T, PA, PB, i, anos, auxP;
    float G1, G2, auxG;



    scanf("%d", &T);

    for (i = 1; i <= T; i = i + 1) {

        PA = 0;
        PB = 0;
        G1 = 0;
        G2 = 0;
        anos = 0;

        scanf("%d %d %f %f", &PA, &PB, &G1, &G2);

        if (PB < PA && G2 > G1) {
            auxP = PB;
            PB = PA;
            PA = auxP;

            auxG = G2;
            G2 = G1;
            G1 = auxG;
        }

        while (PA <= PB) {

            PA = PA + (PA * (G1 / 100));

            PB = PB + (PB * (G2 / 100));

            anos = anos + 1;

        }

        if (anos <= 100) {
            printf("%d anos.\n", anos);
        }else {
            printf("Mais de 1 seculo.\n");
        }

    }

    return 0;
}
