#include <stdio.h>
#include <stdlib.h>
#include "function_guga.c"

int guga(char c);
void salvarArquivo(char tabuleiro[3][3], char nome[]);

int main(int argc, char *argv[])
{
    char tabuleiro[3][3];
    int linha, coluna;
    int indice = 2;

    if (argc != 11)
    {
        printf("Uso: %s arquivo.txt O O O X X X O O O\n", argv[0]);
        return 1;
    }

    for (linha = 0; linha < 3; linha++)
    {
        for (coluna = 0; coluna < 3; coluna++)
        {
            tabuleiro[linha][coluna] = argv[indice][0];

            if (!guga(tabuleiro[linha][coluna]))
            {
                printf("Erro: use apenas X ou O\n");
                return 1;
            }

            indice++;
        }
    }

    salvarArquivo(tabuleiro, argv[1]);

    return 0;
}
