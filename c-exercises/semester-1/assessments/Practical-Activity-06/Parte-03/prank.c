#include <stdio.h>
#include <string.h>

int main(void) {

    int N, i, j, tam1, tam2, pos;
    char prilinha[51], seglinha[51], resfinal[101];

    scanf("%d", &N);

    for (i = 0; i < N; i = i + 1) {

        scanf(" %[^\n]", prilinha);
        scanf(" %[^\n]", seglinha);

        tam1 = strlen(prilinha);
        tam2 = strlen(seglinha);
        pos = 0;

        j = 0;
        while (j < tam1 || j < tam2) {
            if (j < tam1) {
                resfinal[pos] = prilinha[j];
                pos = pos + 1;
            }
            if (j + 1 < tam1) {
                resfinal[pos] = prilinha[j + 1];
                pos = pos + 1;
            }
            if (j < tam2) {
                resfinal[pos] = seglinha[j];
                pos = pos + 1;
            }
            if (j + 1 < tam2) {
                resfinal[pos] = seglinha[j + 1];
                pos = pos + 1;
            }

            j = j + 2;

        }

        resfinal[pos] = '\0';
        printf("%s\n", resfinal);

    }

    return 0;
}
