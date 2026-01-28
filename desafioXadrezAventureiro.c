#include <stdio.h>

int main() {

        // MOVIMENTO DA TORRE
        //A torre anda em linha reta. Aqui vamos simular 5 casas andando para a direita.
        //Vamos usar o FOR porque já sabemos quantas vezes repetir.

    int casas_torre = 5;

    printf("Movimento da Torre:\n");

    for (int i = 1; i <= casas_torre; i++) {
        // A cada repetição, a torre anda uma casa para a direita
        printf("Direita\n");
    }

    printf("\n");

        //-----------------------------------------------------------------------------------------------------

        // MOVIMENTO DO BISPO
        // O bispo anda na diagonal. Diagonal = duas direções juntas.
        // Aqui ele vai andar 5 casas para cima e para a direita.
        // Vamos usar while.

    int casas_bispo = 5;
    int contador_bispo = 1;

    printf("Movimento do Bispo:\n");

    while (contador_bispo <= casas_bispo) {
        // Cada repetição representa uma casa na diagonal
        printf("Cima Direita\n");
        contador_bispo++;
    }

    printf("\n");
    
        //-----------------------------------------------------------------------------------------------------
        // MOVIMENTO DA RAINHA
        // A rainha pode andar em todas as direções. Aqui vamos simular 8 casas para a esquerda.Vamos usar DO-WHILE para
        // garantir que execute pelo menos uma vez.

    int casas_rainha = 8;
    int contador_rainha = 1;

    printf("Movimento da Rainha:\n");

    do {
        // A rainha anda uma casa para a esquerda
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);

    printf("\n");

    //-----------------------------------------------------------------------------------------------------
        // MOVIMENTO DO CAVALO
        // O cavalo se movimenta em formato de L. Aqui vamos andar duas casas para baixo e uma casa para a esquerda. 
        // Vamos utilizar o loop for e outro do while.

        int baixo = 1;
        int esquerda = 1;

    printf("Movimento do Cavalo:\n");

    while (esquerda--)
        {
            for (int i = 2; i >= baixo; i--) {
             // A cada repetição, o cavalo anda para baixo
             printf("Baixo\n");
            }
        // Ao fim do movimento de baixa do cavalo, printa 1 movimento pra esquerda, resultado da declaração do while(esquerda--)
        printf("esquerda");
        } 

    return 0;
}