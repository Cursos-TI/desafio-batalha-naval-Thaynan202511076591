#include <stdio.h>

int main() {
    // Declarando matrizes 3x5 para cada habilidade especial
    int cone[3][5];
    int octaedro[3][5];
    int cruz[3][5];

    // Passo 1: Inicializando todas as matrizes com 0 (Área não afetada)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cone[i][j] = 0;
            octaedro[i][j] = 0;
            cruz[i][j] = 0;
        }
    }

    // Passo 2: Preenchendo as matrizes com 1 (Área afetada)

    // --- Montando o CONE ---
    cone[0][2] = 1; // Ponta do cone
    cone[1][1] = 1; cone[1][2] = 1; cone[1][3] = 1; // Meio do cone
    cone[2][0] = 1; cone[2][1] = 1; cone[2][2] = 1; cone[2][3] = 1; cone[2][4] = 1; // Base do cone

    // --- Montando o OCTAEDRO (Diamante) ---
    octaedro[0][2] = 1; // Ponta superior
    octaedro[1][1] = 1; octaedro[1][2] = 1; octaedro[1][3] = 1; // Centro largo
    octaedro[2][2] = 1; // Ponta inferior

    // --- Montando a CRUZ ---
    cruz[0][2] = 1; // Topo da cruz
    cruz[1][0] = 1; cruz[1][1] = 1; cruz[1][2] = 1; cruz[1][3] = 1; cruz[1][4] = 1; // Linha horizontal inteira
    cruz[2][2] = 1; // Base da cruz


    // Passo 3: Exibindo os resultados com formatação
    
    printf("--- Habilidade Especial: CONE ---\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]); // O espaço após o %d deixa a matriz alinhada
        }
        printf("\n"); // Quebra a linha ao final de cada repetição das colunas
    }

    printf("\n--- Habilidade Especial: OCTAEDRO ---\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Habilidade Especial: CRUZ ---\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    return 0;
}