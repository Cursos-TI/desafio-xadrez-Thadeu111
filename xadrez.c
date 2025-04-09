#include <stdio.h>

int main() {
    // Movimento da Torre: 5 casas para a Direita (usando for)
    int i;
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo: 5 casas na diagonal Cima Direita (usando while)
    int j = 0;
    int casasBispo = 5;
    printf("\nMovimento do Bispo:\n");
    while (j < casasBispo) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimento da Rainha: 8 casas para a Esquerda (usando do-while)
    int k = 0;
    int casasRainha = 8;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casasRainha);

    return 0;
}
