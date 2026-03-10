#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Carta 1
  char estado1 = 'A';
  char codigo1[] = "A01";
  char cidade1[] = "Fortaleza";

  int populacao1 = 2700000;
  float area1 = 314.93;
  float pib1 = 73.40;
  int pontos1 = 25;

  // Dados da Cidade

  printf("Carta 1: \n");
  printf("Estado: %c \n", estado1);
  printf("Codigo: %s \n", codigo1);
  printf("Nome da Cidade: %s \n", cidade1);
  printf("Populacao: %d \n", populacao1);
  printf("Area: %2.f km2 \n", area1);
  printf("PIB: %.2f bilhoes de reais \n", pib1);
  printf("Numero de Pontos Turisticos: %d \n", pontos1);


return 0;
} 
