#include <stdio.h>

#define TAM_SEQUENCIA 22

int main() {
    int sequencia[TAM_SEQUENCIA];
    int anterior = -1, tamanho= 0, maior = 0, inicio = 0, inicioMaior = 0, lidos = 0;

    printf("Digite uma seguencia de %d valores 0 ou 1: ", TAM_SEQUENCIA);

    while (lidos < TAM_SEQUENCIA) {
        lidos += scanf("%d", &sequencia[lidos]);
    }
    

    for (int i = 0; i < TAM_SEQUENCIA; i++) {
        if (sequencia[i] == anterior) {
            tamanho++;
        } else {
            if (tamanho > maior) {
                inicioMaior = inicio;
                maior = tamanho;
            }

            inicio = i;
            tamanho = 1;
            anterior = sequencia[i];
        }
    }

    printf("Posicao: %d\n", inicioMaior);
    printf("Tamanho: %d\n", maior);
    printf("Sequencia: ");

    for (int i = 0; i < maior; i++) {
        printf("%d ", sequencia[inicioMaior]);
    }

    return 0;
}
