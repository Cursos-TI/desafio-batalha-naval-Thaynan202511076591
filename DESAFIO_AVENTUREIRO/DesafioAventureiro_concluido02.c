#include <stdio.h>

int main() {
    // Declarando uma matriz 10x10 para o tabuleiro
    int tabuleiro[10][10];

    // Passo 1: Inicializando todo o tabuleiro com 0 (água)
    // O loop externo percorre as linhas, o interno percorre as colunas
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Passo 2: Posicionando os 4 navios (o número 3 representa a parte do navio)

    // Navio 1: Horizontal (Tamanho 3) - Linha 1
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;
    tabuleiro[1][4] = 3;

    // Navio 2: Vertical (Tamanho 3) - Coluna 8
    tabuleiro[4][8] = 3;
    tabuleiro[5][8] = 3;
    tabuleiro[6][8] = 3;

    // Navio 3: Diagonal Principal (Tamanho 3) - Descendo para a direita
    tabuleiro[2][2] = 3;
    tabuleiro[3][3] = 3;
    tabuleiro[4][4] = 3;

    // Navio 4: Diagonal Secundária (Tamanho 3) - Descendo para a esquerda
    tabuleiro[7][4] = 3;
    tabuleiro[8][3] = 3;
    tabuleiro[9][2] = 3;

    // Passo 3: Exibição Completa do Tabuleiro
    printf("--- Tabuleiro de Batalha Naval (10x10) ---\n\n");
    
    // Novamente, usamos loops aninhados para ler e imprimir a matriz
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            // Imprime o valor seguido de um espaço para não grudar os números
            printf("%d ", tabuleiro[linha][coluna]);
        }
        // Ao final de cada linha, imprimimos uma quebra de linha (\n)
        // Isso é essencial para o tabuleiro ficar com formato quadrado/retangular
        printf("\n");
    }

    return 0;
}