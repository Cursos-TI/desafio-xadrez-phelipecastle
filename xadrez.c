#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
void rookMovement(int i) {
    if(i <= 1) {
        printf("DIREITA\n");
        rookMovement(i += 1);
    }


}

void bishopMovement(int i) {
    if(i <= 1) {
        printf("\nCIMA ");
        while(i <= 1) {
            printf("DIREITA\n");
            i++;
        }
        bishopMovement(i += 1);
    }
}

void queenMovement(int i) {
    if(i <= 1) {
        printf("\nESQUERDA\n");
        queenMovement(i += 1);
    }
}

void knightMovement(void) {
    for(int i = 0, j = i; i < 1 ; i++, j++) {
        printf("\nCIMA CIMA DIREITA\n");
    }
}

int main() {
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

    int move = 1;

    rookMovement(move);
    bishopMovement(move);
    queenMovement(move);
    knightMovement();
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
