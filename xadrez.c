#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
   int i = 1, number;
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    
     printf("Digite o nº de casas que o Bispo deve andar na direção CIMA DIREITA: ");
    scanf("%d", &number);
    printf("Movimentação do Bispo\n");
    do {
        printf("%d.CIMA DIREITA!\n", i);
        i++;
    } while(i <= number);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    i = 1; // redefinição do indicador do nº de casas
    printf("\nDigite a quantidade de casas que a torre deve andar para a DIREITA: ");
    scanf("%d", &number); // Entrada para receber o nº de casas que a peça deve andar
    printf("Movimentação da Torre\n");
    while(i <= number) {
        printf("%d.DIREITA!\n", i);
        i++;
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nDigite o nº de casas que a rainha deve andar para a ESQUERDA: ");
    scanf("%d", &number);
    printf("Movimentação da Rainha\n");
    for(i = 1; i <= number; i++) {
        printf("%d.ESQUERDA!\n", i);
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\nMovimentação do cavalo\n");
    for(i = 1; i <= 1; i++) {
        printf("BAIXO BAIXO ");
        int j = i;
        while(j <= i) {
            printf("ESQUERDA!\n");
            j++;
        }
        printf("\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
