#include <stdio.h>

int main(void) {
    float A, B, C, primeiro, segundo, terceiro, aux;
    char sA, sB, sC;

    scanf("%f %f %f", &A, &B, &C);

    primeiro = A;
    segundo = B;
    terceiro = C;

    if (primeiro < segundo) {
        aux = primeiro;
        primeiro = segundo;
        segundo = aux;
    }
    if (primeiro < terceiro) {
        aux = primeiro;
        primeiro = terceiro;
        terceiro = aux;
    }
    if (segundo < terceiro) {
        aux = segundo;
        segundo = terceiro;
        terceiro = aux;
    }

    sA = 'X';
    sB = 'X';
    sC = 'X';

    if (primeiro == A) {
        sA = 'A';
        if (segundo == B) {
            sB = 'B';
            sC = 'C';
        } else {
            if (segundo == C) {
                sB = 'C';
                sC = 'B';
            }
        }
    } else {
        if (primeiro == B) {
            sA = 'B';
            if (segundo == A) {
                sB = 'A';
                sC = 'C';
            } else {
                if (segundo == C) {
                    sB = 'C';
                    sC = 'A';
                }
            }
        } else {
            if (primeiro == C) {
                sA = 'C';
                if (segundo == A) {
                    sB = 'A';
                    sC = 'B';
                } else {
                    if (segundo == B) {
                        sB = 'B';
                        sC = 'A';
                    }
                }
            }
        }
    }

    if (primeiro == segundo && segundo == terceiro) {
        sA = 'A';
        sB = 'B';
        sC = 'C';
    } else {
        if (primeiro == segundo) {
            if (A == primeiro && B == primeiro) {
                sA = 'A';
                sB = 'B';
            } else {
                if (A == primeiro && C == primeiro) {
                    sA = 'A';
                    sB = 'C';
                } else {
                    if (B == primeiro && C == primeiro) {
                        sA = 'B';
                        sB = 'C';
                    }
                }
            }
            sC = (sA == 'A' && sB == 'B') ? 'C' :
                 (sA == 'A' && sB == 'C') ? 'B' : 'A';
        } else {
            if (segundo == terceiro) {
                if (B == segundo && C == segundo) {
                    sB = 'B';
                    sC = 'C';
                } else {
                    if (A == segundo && B == segundo) {
                        sB = 'A';
                        sC = 'B';
                    } else {
                        if (A == segundo && C == segundo) {
                            sB = 'A';
                            sC = 'C';
                        }
                    }
                }
            }
        }
    }

    if (primeiro < 0 || segundo < 0 || terceiro < 0) {
        printf("Uma ou mais pontuações informadas é inválida.");
    } else {
        if (primeiro == segundo && segundo == terceiro) {
            printf("Os três competidores empataram em 1º lugar (%.2f ponto(s)).", primeiro);
        } else {
            if (primeiro == segundo && segundo != terceiro) {
                printf("empatados em 1º: %c e %c (%.2f ponto(s)) / 2º colocado: %c (%.2f ponto(s)).", sA, sB, primeiro, sC, terceiro);
            } else {
                if (primeiro != segundo && segundo == terceiro) {
                    printf("1º colocado: %c (%.2f ponto(s)) / empatados em segundo: %c e %c (%.2f ponto(s)).", sA, primeiro, sB, sC, segundo);
                } else {
                    printf("1º colocado: %c (%.2f ponto(s)) / 2º colocado %c (%.2f ponto(s)) / 3º colocado %c (%.2f ponto(s)).", sA, primeiro, sB, segundo, sC, terceiro);
                }
            }
        }
    }

    return 0;
}
