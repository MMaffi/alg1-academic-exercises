#include <stdio.h>

int main(void) {

    int i, j, z, n, S, ehprimo, primoanterior, controle;

    scanf("%d", &n);

    for (i = 1; i <= n; i = i + 1) {

        scanf("%d", &S);

        ehprimo = 1;
        controle = 0;

        for (j = 2; j * j <= S; j = j + 1) {
            if (S % j == 0) {
                ehprimo = 0;
            }
        }

        if (ehprimo == 1) {
            controle = 1;
        } else {
            controle = 2;
        }

        switch (controle) {
            case 1:
                printf("%d é primo.\n", S);
                break;
            case 2:
                primoanterior = S - 1;

                for (z = primoanterior; z >= 2; z = z - 1) {
                    ehprimo = 1;
                    for (j = 2; j * j <= z; j = j + 1) {
                        if (z % j == 0) {
                            ehprimo = 0;
                        }
                    }

                    if (ehprimo == 1) {
                        controle = 3;
                        break;
                    }
                }
                switch (controle) {
                    case 3:
                        printf("%d não é primo, o primo anterior é %d.\n", S, z);
                        break;
                }
                break;
        }
    }

    return 0;
}
