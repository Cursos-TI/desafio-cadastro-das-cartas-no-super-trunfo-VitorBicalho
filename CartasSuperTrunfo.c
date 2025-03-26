#include <stdio.h>

int main() {
    
    char estado;    
    unsigned int carta1, carta2;
    char nome_cidade1[50], nome_cidade2[50];
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    unsigned int ponto_turistico1, ponto_turistico2;

    printf("Digite a letra do estado(A-H): ");
    scanf("%c", &estado);

    printf("Digite a numeração da carta 1: ");
    scanf("%d", &carta1);

    printf("Digite o nome da cidade 1: ");
    scanf("%s", nome_cidade1);

    printf("Digite a população da cidade 1: ");
    scanf("%f", &populacao1);

    printf("Digite a área da cidade 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos a cidade 1 possui: ");
    scanf("%d", &ponto_turistico1);

    printf("\n");

    printf("Digite a numeração da carta 2: ");
    scanf("%d", &carta2);

    printf("Digite o nome da cidade 2: ");
    scanf("%s", nome_cidade2);

    printf("Digite a população da cidade 2: ");
    scanf("%f", &populacao2);

    printf("Digite a área da cidade 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos a cidade 2 possui: ");
    scanf("%d", &ponto_turistico2);

    float densidadepop1 = populacao1 / area1, densidadepop2 = populacao2 / area2;
    float pibpercapita1 = pib1 / populacao1, pibpercapita2 = pib2 / populacao2;
    float superPoder1 = area1 + pib1 + pibpercapita1 + (1 / densidadepop1) + ponto_turistico1, superPoder2 = area2 + pib2 + pibpercapita2 + (1 / densidadepop2) + ponto_turistico2; 

    printf("\n");

    printf("Carta %c%d\n", estado, carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %.3f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.1f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", ponto_turistico1);
    printf("Pib per capita: %.2f\n", pibpercapita1);
    printf("Densidade Populacional: %.2f\n", densidadepop1);
    printf("Super poder: %.3f\n", superPoder1);

    printf("\n");

    printf("Carta %c%d:\n", estado, carta2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %.3f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.1f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", ponto_turistico2);
    printf("Pib per capita: %.1f\n", pibpercapita2);
    printf("Densidade Populacional: %.2f\n", densidadepop2);
    printf("Super poder: %.3f\n", superPoder2);

    printf("\n");

    printf("Comparação de cartas:\n");
    printf("População: Carta %c%d venceu? (%d)\n", estado, carta1, populacao1 > populacao2);
    printf("Área: %c%d venceu? (%d)\n", estado, carta1, area1 > area2);
    printf("PIB: %c%d venceu? (%d)\n", estado, carta1, pib1 > pib2);
    printf("Pontos Turísticos: %c%d venceu? (%d)\n", estado, carta1, ponto_turistico1 > ponto_turistico2);
    printf("Densidade Populacional: %c%d venceu? (%d)\n", estado, carta1, densidadepop1 <= densidadepop2);
    printf("Pib per Capita: %c%d venceu? (%d)\n", estado, carta1, pibpercapita1 > pibpercapita2);
    printf("Super Poder: %c%d venceu? (%d)", estado, carta1, superPoder1 > superPoder2);

    return 0;
}
