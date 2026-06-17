#include <stdio.h>

int guga(char c)
{
    if (c == 'X' || c == 'O')
        return 1;

    return 0;
}

void salvarArquivo(char tabuleiro[3][3], char nome[])
{
    FILE *arquivo = fopen(nome, "w");

    if (arquivo == NULL)
    {
        printf("Erro ao criar arquivo\n");
        return;
    }

    for (int i = 0; i < 3; i++)
    {
        fprintf(arquivo,
                "| %c | %c | %c |\n",
                tabuleiro[i][0],
                tabuleiro[i][1],
                tabuleiro[i][2]);
    }

    fprintf(arquivo, "\n");
    fprintf(arquivo, "Criado por Gustavo Moraes");

    fclose(arquivo);
}
