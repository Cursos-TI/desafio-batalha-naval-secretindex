#include <stdio.h>

// NIVEL MESTRE

void exibirtable(int table[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", table[i][j]);
        }
        printf("\n");
    }
}

void habilidadeCone(int table[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            table[i][j] = 0;
        }
    }

    table[2][2] = 1;
    table[1][2] = 1;
    table[3][2] = 1;
    table[2][1] = 1;
    table[2][3] = 1;
    table[1][1] = 1;
    table[1][3] = 1;
    table[3][1] = 1;
    table[3][3] = 1;
}

void habilidadeCruz(int table[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            table[i][j] = 0;
        }
    }

    table[2][2] = 1;
    for (int i = 0; i < 5; i++) {
        table[2][i] = 1;
        table[i][2] = 1;
    }
}

void habilidadeOctaedro(int table[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            table[i][j] = 0;
        }
    }

    table[2][2] = 1;
    table[1][1] = 1;
    table[1][3] = 1;
    table[3][1] = 1;
    table[3][3] = 1;
    table[2][1] = 1;
    table[2][3] = 1;
}

int main() {
    int table[5][5];

    int escolha;
    printf("Escolha a habilidade especial:\n");
    printf("1. Cone\n");
    printf("2. Cruz\n");
    printf("3. Octaedro\n");
    printf("Digite a opcao desejada (1-3): ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            habilidadeCone(table);
            printf("Habilidade Cone:\n");
            break;
        case 2:
            habilidadeCruz(table);
            printf("Habilidade Cruz:\n");
            break;
        case 3:
            habilidadeOctaedro(table);
            printf("Habilidade Octaedro:\n");
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    exibirtable(table);

    return 0;
}
