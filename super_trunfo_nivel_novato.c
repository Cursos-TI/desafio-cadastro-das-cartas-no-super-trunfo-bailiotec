#include <stdio.h>

int main() {
//Variáveis para a primeira carta
char estado1;
char codigo1[4];
char nome1[50];
int populacao1;
float area2;
float pib1;
int pontos_turisticos1;

//Variáveis para a segunda carta
char estado2;
char codigo2[4];
char nome2[50];
int populacao2;
float area2;
flpat pib2;
int pontos_turisticos;

//Leitura dos dados da primeira carta
printf("Cadastro da carta 1\n");
printf("estado: ");
scanf("%c", &estado1);
printf("Codigo: ");
scanf("%s", &codigo1);
printf("Nome: ");
scanf("%s", &nome1);
printf("Populacao: ");
scanf("%d", &populacao1);
printf("Área: ");
scanf("%f", &area1);
printf("PIB: ");
scanf("%f", &pib1);
printf("Número de Pontos Turísticos: ");
scanf("%d", &pontos_turisticos1);

//Leitura dos dados da segunda carta
printf("Cadastro da carta 2\n");
printf("estado: ");
scanf("%c", &estado2);
printf("Codigo: ");
scanf("%s", &codigo2);
printf("Nome: ");
scanf("%s", &nome2);
printf("Populacao: ");
scanf("%d", &populacao2);
printf("Área: ");
scanf("%f", &area2);
printf("PIB: ");
scanf("%f", &pib2);
printf("Número de Pontos Turísticos: ");
scanf("%d", &pontos_turisticos2);

//Exibição dos dados das cartas
printf ("\nCarta 1\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome: %s\n", nome1);
printf("População: %d", populacao1);
printf("Área: %.f\n", area1);
printf("PIB: %.f\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

//Exibição dos dados das cartas
printf ("\nCarta 2\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome: %s\n", nome2);
printf("População: %d", populacao2);
printf("Área: %.f\n", area2);
printf("PIB: %.f\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

return 0;
}
