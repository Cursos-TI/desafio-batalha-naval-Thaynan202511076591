int main() {
    // Declarando uma matriz 5x5 para o tabuleiro (Nível Novato)
    int tabuleiro[5][5];

    // Inicializando todo o tabuleiro com 0 (água)
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionando o Navio 1 (Horizontal) - Tamanho 3
    // Ficará na linha 1, ocupando as colunas 0, 1 e 2. O número 3 representa o navio.
    tabuleiro[1][0] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;

    // Posicionando o Navio 2 (Vertical) - Tamanho 3
    // Ficará na coluna 4, ocupando as linhas 2, 3 e 4.
    tabuleiro[2][4] = 3;
    tabuleiro[3][4] = 3;
    tabuleiro[4][4] = 3;

    // Exibindo as coordenadas do Navio Horizontal
    printf("--- Coordenadas do Navio Horizontal ---\n");
    for (int coluna = 0; coluna < 3; coluna++) {
        printf("Parte do navio na Linha 1, Coluna %d\n", coluna);
    }

    // Exibindo as coordenadas do Navio Vertical
    printf("\n--- Coordenadas do Navio Vertical ---\n");
    for (int linha = 2; linha <= 4; linha++) {
        printf("Parte do navio na Linha %d, Coluna 4\n", linha);
    }

    return 0;
}