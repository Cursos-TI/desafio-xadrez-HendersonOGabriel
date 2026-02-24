#include <stdio.h>

void torreRecursiva(int torre)
{
    if (torre > 0)
    {
        printf("\nMovimentando Torre para a direita em uma casa\n");
        torreRecursiva(torre - 1);
    }
}

void bispoRecursivo(int bispo)
{
    while (bispo < 5)
    {
        printf("\nMovimentando Bispo para cima em uma casa\n");
        bispo++;
        do
        {
            printf("Movimentando Bispo para a direita em uma casa\n");
        } while (bispo == 6); // usei uma condição impossível para executar o loop apenas uma vez, 'do' é perfeito pra esse caso
    }
}

void rainhaRecursiva(int rainha)
{
    if (rainha > 0)
    {
        printf("\nMovimentando Rainha para a esquerda em uma casa\n");
        rainhaRecursiva(rainha - 1);
    }
}

int main()
{
    printf("\n\n\n");

    int menu, torre = 5, bispo = 0, rainha = 8, cavalo;

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
            printf("\nMovimento da Torre: \n");
            torreRecursiva(torre);
            printf("\n\n\n");
            break;
        case 2:
            printf("\nMovimento do Bispo: \n");
            bispoRecursivo(bispo);
            printf("\n\n\n");
            break;
        case 3:
            printf("\nMovimento da Rainha: \n");
            rainhaRecursiva(rainha);
            printf("\n\n\n");
            break;
        case 4:
            printf("\n");
            for (int l = 0, cavalo = 0; l <= 300 && cavalo <= 4000; l++, cavalo++) // independentemente da condição, o loop sempre vai ser limitado ao movimento pré-definido devido ao 'break'
            {
                if (l < 2)
                {
                    printf("Movimentando Cavalo para cima\n");
                    continue;
                }
                if (cavalo == 2)
                {
                    printf("Movimentando Cavalo para a direita\n");
                    break;
                }
            }
            printf("\n\n\n");
            break;
        case 5:
            printf("\nEncerrando programa...\n");
            printf("\n\n");
            break;
        default:
            printf("\nEscolha uma opçao válida!\n");
            printf("\n\n");
            break;
        }
    }

    return 0;
}
