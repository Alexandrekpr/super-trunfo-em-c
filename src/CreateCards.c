#include <stdio.h>

int main(){
    char state1;
    char code1[4];
    char city1[50];
    int population1;
    float area1;
    float pib1;
    int touristAttractions1;

    char state2;
    char code2[4];
    char city2[50];
    int population2;
    float area2;
    float pib2;
    int touristAttractions2;

    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &state1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", code1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", city1);

    printf("Digite a Populacao: ");
    scanf("%d", &population1);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &touristAttractions1);

    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &state2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", code2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", city2);

    printf("Digite a Populacao: ");
    scanf("%d", &population2);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &touristAttractions2);

    printf("\n\n==================================\n");
    printf("  CARTAS CADASTRADAS COM SUCESSO!\n");
    printf("==================================\n");

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", state1);
    printf("Codigo: %s\n", code1);
    printf("Nome da Cidade: %s\n", city1);
    printf("Populacao: %d\n", population1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", touristAttractions1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", state2);
    printf("Codigo: %s\n", code2);
    printf("Nome da Cidade: %s\n", city2);
    printf("Populacao: %d\n", population2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", touristAttractions2);

    return 0;

}