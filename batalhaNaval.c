#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

  int board[10][10] = {0};

  // Add horizontal ship into the board - number 1
  for (int i = 0; i < 3; i++)
  {
    board[2][i] = 1;
  }

  // Add vertical ship into the board - number 2
  for (int i = 4; i < 7; i++)
  {
    board[i][6] = 2;
  }

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      printf("%d ", board[i][j]);
    }
    printf("\n");
  }

  printf("\n");
  printf("Adventure Level");
  printf("\n");

  // Ship one in the board - 1
  // Ship two in the board - 2

  // -------------------------
  // Adventure Level
  // -------------------------

  int advBoard[10][10] = {0};

  // First ship
  for (int i = 1; i < 4; i++)
  {
    advBoard[1][i] = 1;
  }

  // Second ship
  for (int i = 5; i < 8; i++)
  {
    advBoard[4][i] = 2;
  }

  // Third ship
  for (int i = 7; i < 10; i++)
  {
    advBoard[i][3] = 3;
  }

  // Fourth ship
  for (int i = 1; i < 4; i++)
  {
    advBoard[i][8] = 4;
  }

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      printf("%d ", advBoard[i][j]);
    }
    printf("\n");
  }

  // -------------------------
  // Master Level
  // -------------------------
    
    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
