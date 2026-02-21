#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("\n\n\n");

    int menu, torre = 1, bispo = 1, rainha = 1, cavalo = 1;

    while (menu != 5) /* executa o programa enquanto 5 não for digitado como resposta */
    {
        printf("\nMenu de Peças de Xadrez: \n");
        printf("1. Torre\n");
        printf("2. Bispo\n");
        printf("3. Rainha\n");
        printf("4. Cavalo\n");
        printf("5. Sair");
        printf("\nEscolha a peça para movimentar: \n");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            while (torre <= 5)
            {
                printf("\nMovimentando Torre para a direita em uma casa\n");
                torre++;
            }
            printf("\n\n\n");
            break;
        case 2:
            while (bispo <= 5)
            {
                printf("\nMovimentando Bispo para cima em uma casa\n");
                printf("Movimentando Bispo para a direita em uma casa\n");
                bispo++;
            }
            printf("\n\n\n");
            break;
        case 3:
            while (rainha <= 8)
            {
                printf("\nMovimentando Rainha para a esquerda em uma casa\n");
                rainha++;
            }
            printf("\n\n\n");
            break;
        case 4:
            do /* escolhi do pois nesse desafio só era necessário executar o primeiro loop uma vez */
            {
                printf("\n");
                int l;
                for (l = 1; l <= 2; l++)
                {
                    printf("Movimentando Cavalo para baixo\n");
                }
                printf("Movimentando Cavalo para a esquerda\n");
                cavalo++;
            } while (cavalo <= 1);
            printf("\n\n\n");
            break;
        default:
            printf("\nEscolha uma opçao válida!\n");
            break;
        }
    }
    printf("\nEncerrando programa...\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
