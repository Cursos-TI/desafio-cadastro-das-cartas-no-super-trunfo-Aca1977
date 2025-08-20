#include <stdio.h>

int main() {
  // Definindo variáveis para a primeira carta
  char estado1, cidade1, codigo1;
  int populacao1, pontos_turisticos1;
  float area1, pib1;

  // Definindo variáveis para a segunda carta
  char estado2, cidade2, codigo2;
  int populacao2, pontos_turisticos2;
  float area2, pib2;

  // Leitura dos dados da primeira carta
  printf("Digite os dados da primeira carta:\n");
  printf("Estado: ");
  scanf("%c", &estado1);
  printf("Código: ");
  scanf("%c", &codigo1);
  printf("Cidade: ");
  scanf("%c", &cidade1);
  printf("População: ");
  scanf("%d", &populacao1);
  printf("Área (km²): ");
  scanf("%f", &area1);
  printf("PIB (bilhões): ");
  scanf("%f", &pib1);
  printf("Pontos Turísticos: \n");
  scanf("%d", &pontos_turisticos1);

  // Leitura dos dados da segunda carta
  printf("\nDigite os dados da segunda carta:\n");
  printf("Estado: ");
  scanf("%c", &estado2);
  printf("Código: ");
  scanf("%c", &codigo2);
  printf("Cidade: ");
  scanf("%c", &cidade2);
  printf("População: ");
  scanf("%d", &populacao2);
  printf("Área (km²): ");
  scanf("%f", &area2);
  printf("PIB (bilhões): ");
  scanf("%f", &pib2);
  printf("Pontos Turísticos: \n");
  scanf("%d", &pontos_turisticos2);

  // Exibição dos dados da primeira carta
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %c\n", codigo1);
  printf("Cidade: %c\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turísticos: %d\n", pontos_turisticos1);

  // Exibição dos dados da segunda carta
  printf("\nCarta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %c\n", codigo2);
  printf("Cidade: %c\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turísticos: %d\n", pontos_turisticos2);

  return 0;
}