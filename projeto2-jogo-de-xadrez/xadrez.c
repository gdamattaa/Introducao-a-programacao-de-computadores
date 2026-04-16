// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de 
//  movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os 
//  limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
   
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

#include <stdio.h>
/*
int main() {

    // ------------------------
    // Torre - movimento horizontal (para a direita)
    // usando for
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // ------------------------
    // Bispo - movimento diagonal (cima + direita)
    // usando while
    printf("\nMovimento do Bispo:\n");
    int b = 1;
    while (b <= 5) {
        printf("Cima, Direita\n");
        b++;
    }

    // ------------------------
    // Rainha - movimento para a esquerda
    // usando do-while
    printf("\nMovimento da Rainha:\n");
    int r = 1;
    do {
        printf("Esquerda\n");
        r++;
    } while (r <= 8);

printf("\n");  //Pulo de linha

 // ------------------------
    // Cavalo - movimento em "L"
    // duas casas para baixo e uma para a esquerda
    // usando while + for (loops aninhados)
    printf("\nMovimento do Cavalo:\n");

    int movimentoCompleto = 1;   //Controle do movimento em L

    while (movimentoCompleto--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n");  //Imprime Baixo duas vezes
        }
        printf("Esquerda\n");   //Imprime Esquerda uma vez
    }
    
    printf("\n");  // Pulo de linha final

    return 0;

}
*/

// ---------------------------------------------------------------------
// Função recursiva da Torre
void moverTorre(int casas) {
    if (casas > 0) {            // caso base
        printf("Direita\n");
        moverTorre(casas - 1);  // chamada recursiva
    }
}

/* Essa função se chama várias vezes até "casas" chegar a 0.
   Exemplo: moverTorre(5) → imprime 5x "Direita". */


// ---------------------------------------------------------------------
// Função recursiva da Rainha
void moverRainha(int casas) {
    if (casas > 0) {            // caso base
        printf("Esquerda\n");
        moverRainha(casas - 1);     // chamada recursiva
    }                     
}

/* Funciona igual à Torre, mas na direção "Esquerda".*/


// ---------------------------------------------------------------------
// Função recursiva + loops aninhados para o Bispo
void moverBispo(int casas) {
    if (casas > 0) {
    for (int v = 0; v < 1; v++) {       // movimento vertical
        for (int h = 0; h < 1; h++) {   // movimento horizontal
            printf("Cima, Direita\n");
        }
      }  
        moverBispo(casas - 1);   // chamada recursiva
    }
}

/* Esse bispo faz um movimento em diagonal (Cima + Direita). 
   Ele combina os dois loops e depois se chama de novo,
   mas com menos casas (vai "desgastando" o movimento). */


// ---------------------------------------------------------------------
// Movimento do Cavalo (loops complexos)
// 2 casas para cima + 1 para direita
void moverCavalo(void) {
    int cima = 2;
    int direita = 1;

    printf("Movimento do Cavalo:\n");

    if (cima > 0 && direita > 0) {   // só entra se realmente houver movimento
        for (int i = 0; i < cima; i++) {
            printf("Cima\n");
            if (i == cima - 1) {   // só depois da última "Cima"
                for (int j = 0; j < direita; j++) {
                    printf("Direita\n");
                }
            }
        }
    }
}

/* O cavalo é especial: ele precisa combinar os dois tipos de movimento.
   Esse loop usa duas variáveis (i e j), "continue" e "break"
   para simular o "L": Cima, Cima, Direita. */


// ---------------------------------------------------------------------
// Programa principal
int main() {

    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    // Cavalo
    moverCavalo();
    printf("\n");

    return 0;
}