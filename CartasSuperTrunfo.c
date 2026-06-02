#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char codigo[4];
    unsigned long int populacao;
    float area, pib;
    int pontos_turisticos;

    printf("Digite o codigo da carta ex: A01: ");
    scanf("%s", codigo);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao);

    printf("Digite a Area em km2: ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos);

    printf("\n=== Carta Cadastrada ===\n");
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %lu habitantes\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos);

    return 0;
}