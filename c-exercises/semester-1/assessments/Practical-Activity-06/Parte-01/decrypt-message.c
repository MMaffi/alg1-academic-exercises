#include <stdio.h>
#include <string.h>

int main(void) {
    int rot1, rot2, cifracesar1, cifracesar2, len1, len2, i, j, pos, p1, p2, posicao1, posicao2, primeira;
    char parte1[51], parte2[51], dec1[51], dec2[51], palavras1[25][51], palavras2[25][51];

    scanf("%d %d %d %d", &rot1, &rot2, &cifracesar1, &cifracesar2);

    scanf(" %[^\n]", parte1);
    scanf(" %[^\n]", parte2);

    len1 = strlen(parte1);
    len2 = strlen(parte2);

    for (i = 0; i < len1; i = i + 1) {

        if (parte1[i] == ' ') {
            dec1[i] = ' ';
        } else {
            pos = i;
            for (j = 0; j < rot1; j = j + 1) {

                pos = (pos + 1) % len1;
                while (parte1[pos] == ' ') {
                    pos = (pos + 1) % len1;
                }

            }
            dec1[i] = parte1[pos];
        }

    }
    dec1[len1] = '\0';

    for (i = 0; i < len1; i = i + 1) {

        if (dec1[i] >= 'a' && dec1[i] <= 'z') {
            dec1[i] = ((dec1[i] - 'a' - cifracesar1 + 26) % 26) + 'a';
        }

    }

    for (i = 0; i < len2; i = i + 1) {

        if (parte2[i] == ' ') {
            dec2[i] = ' ';
        } else {
            pos = i;
            for (j = 0; j < rot2; j = j + 1) {

                pos = (pos + 1) % len2;
                while (parte2[pos] == ' ') {

                    pos = (pos + 1) % len2;

                }
            }
            dec2[i] = parte2[pos];
        }

    }
    dec2[len2] = '\0';

    for (i = 0; i < len2; i = i + 1) {

        if (dec2[i] >= 'a' && dec2[i] <= 'z') {
            dec2[i] = ((dec2[i] - 'a' - cifracesar2 + 26) % 26) + 'a';
        }

    }

    p1 = 0;
    posicao1 = 0;
    for (i = 0; i <= len1; i = i + 1) {

        if (dec1[i] != ' ' && dec1[i] != '\0') {
            palavras1[p1][posicao1] = dec1[i];
            posicao1 = posicao1 + 1;
        } else {
            if (posicao1 > 0) {
                palavras1[p1][posicao1] = '\0';
                p1 = p1 + 1;
                posicao1 = 0;
            }
        }

    }

    p2 = 0;
    posicao2 = 0;
    for (i = 0; i <= len2; i = i + 1) {

        if (dec2[i] != ' ' && dec2[i] != '\0') {
            palavras2[p2][posicao2] = dec2[i];
            posicao2 = posicao2 + 1;
        } else {
            if (posicao2 > 0) {
                palavras2[p2][posicao2] = '\0';
                p2 = p2 + 1;
                posicao2 = 0;
            }
        }

    }

    i = 0;
    j = 0;
    primeira = 1;
    while (i < p1 || j < p2) {

        if (i < p1) {
            if (primeira == 0) {
                printf(" ");
            }
            printf("%s", palavras1[i]);
            primeira = 0;
            i = i + 1;
        }
        if (j < p2) {
            if (primeira == 0) {
                printf(" ");
            }
            printf("%s", palavras2[j]);
            primeira = 0;
            j = j + 1;
        }

    }

    printf("\n");

    return 0;
}
