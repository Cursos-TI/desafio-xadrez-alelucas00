#include <stdio.h>

    // FUNÇÃO RECURSIVA - TORRE
    // A torre anda em linha reta (Direita)

    void mover_torre(int casas) {
        if (casas == 0) {
            return; // condição de parada da recursão
        }

        printf("Direita\n");
        mover_torre(casas - 1); // chamada recursiva
    }

        
    //FUNÇÃO RECURSIVA - RAINHA
    //A rainha anda para a esquerda
        
    void mover_rainha(int casas) {
        if (casas == 0) {
            return;
        }

        printf("Esquerda\n");
        mover_rainha(casas - 1);
    }

        
    //FUNÇÃO RECURSIVA + LOOPS ANINHADOS - BISPO
    //Movimento diagonal: Cima + Direita
    //Loop externo: vertical
    //Loop interno: horizontal
        
    void mover_bispo(int casas) {
        if (casas == 0) {
            return;
        }

        // Loop externo: movimento vertical
        for (int vertical = 1; vertical <= 1; vertical++) {
            printf("Cima\n");

            // Loop interno: movimento horizontal
            for (int horizontal = 1; horizontal <= 1; horizontal++) {
                printf("Direita\n");
            }
        }

        mover_bispo(casas - 1); // chamada recursiva
    }

    //FUNÇÃO PRINCIPAL

    int main() {

        // TORRE
        int casas_torre = 5;
        printf("Movimento da Torre:\n");
        mover_torre(casas_torre);

        printf("\n");

        // BISPO
        int casas_bispo = 5;
        printf("Movimento do Bispo:\n");
        mover_bispo(casas_bispo);

        printf("\n");

        // RAINHA
        int casas_rainha = 8;
        printf("Movimento da Rainha:\n");
        mover_rainha(casas_rainha);

        printf("\n");

        // CAVALO
        //Movimento em L:
        //2 casas para cima
        //1 casa para a direita
        //Loops aninhados + controle de fluxo

        printf("Movimento do Cavalo:\n");

        for (int vertical = 1; vertical <= 3; vertical++) {
            if (vertical == 3) {
                continue; // exemplo de controle de fluxo
            }
            printf("Cima\n");
        }

        for (int horizontal = 1; horizontal <= 1; horizontal++) {
            printf("Direita\n");
        }

        return 0;
}
