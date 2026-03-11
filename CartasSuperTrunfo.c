#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Carta 1
  char estado1 = 'A';
  char codigo1[] = "A01";
  char cidade1[] = "Fortaleza";

  int populacao1 = 12325000;
  float area1 = 1521.11;
  float pib1 = 699.28;
  int pontos1 = 50;

  //Carta 2
  char estado2 = 'B';
  char codigo2[] = "B01";
  char cidade2[] = "Curitiba";

  int populacao2 = 6748000;
  float area2 = 1200.25;
  float pib2 = 300.50; 
  int pontos2 = 30;

  // Dados da Cidade

  printf("Carta 1 \n");
  printf("Estado: %c \n", estado1);
  printf("Codigo: %s \n", codigo1);
  printf("Nome da Cidade: %s \n", cidade1);
  printf("Populacao: %d \n", populacao1);
  printf("Area: %2.f km2 \n", area1);
  printf("PIB: %.2f Bilhoes de Reais \n", pib1);
  printf("Numero de Pontos Turisticos: %d \n \n", pontos1);


  printf("Carta 2 \n");
  printf("Estado: %c \n", estado2);
  printf("Codigo: %s \n", codigo2);
  printf("Nome da Cidade: %s \n", cidade2);
  printf("Populacao: %d \n", populacao2);
  printf("Area: %2.f Km2 \n", area2);
  printf("PIB: %.2f Bilhoes de Reais \n", pib2);
  printf("Numero de Pontos Turisticos: %d \n", pontos2);

return 0;
} 
