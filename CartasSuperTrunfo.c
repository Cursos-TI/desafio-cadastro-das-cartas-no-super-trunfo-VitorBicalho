#include <stdio.h>

int main() {
    
    char estado;    
    char nome_cidade1[50], nome_cidade2[50], nome_cidade3[50], nome_cidade4[50]; 
    float populacao1, populacao2, populacao3, populacao4;
    float area1, area2, area3, area4;
    float pib1, pib2, pib3, pib4;
    int ponto_turistico1, ponto_turistico2, ponto_turistico3, ponto_turistico4;

    printf("Digite a letra do estado(A-H): ");
    scanf("%c", &estado);

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

    printf("\n");

    printf("Digite o nome da cidade 3: ");
    scanf("%s", nome_cidade3);

    printf("Digite a população da cidade 3: ");
    scanf("%f", &populacao3);

    printf("Digite a área da cidade 3: ");
    scanf("%f", &area3);

    printf("Digite o PIB da cidade 3: ");
    scanf("%f", &pib3);

    printf("Digite quantos pontos turísticos a cidade 3 possui: ");
    scanf("%d", &ponto_turistico3);

    printf("\n");

    printf("Digite o nome da cidade 4: ");
    scanf("%s", nome_cidade4);

    printf("Digite a população da cidade 4: ");
    scanf("%f", &populacao4);

    printf("Digite a área da cidade 4: ");
    scanf("%f", &area4);

    printf("Digite o PIB da cidade 4: ");
    scanf("%f", &pib4);

    printf("Digite quantos pontos turísticos a cidade 4 possui: ");
    scanf("%d", &ponto_turistico4);

    printf("\n");

    printf("Carta %c01:\n", estado);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.1f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", ponto_turistico1);

    printf("\n");

    printf("Carta %c02:\n", estado);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.1f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", ponto_turistico2);

    printf("\n");

    printf("Carta %c03:\n", estado);
    printf("Nome da cidade: %s\n", nome_cidade3);
    printf("População: %.2f\n", populacao3);
    printf("Área: %.2f km²\n", area3);
    printf("PIB: %.1f bilhões\n", pib3);
    printf("Pontos Turísticos: %d\n", ponto_turistico3);

    printf("\n");

    printf("Carta %c04:\n", estado);
    printf("Nome da cidade: %s\n", nome_cidade4);
    printf("População: %.2f\n", populacao4);
    printf("Área: %.2f km²\n", area4);
    printf("PIB: %.1f bilhões\n", pib4);
    printf("Pontos Turísticos: %d\n", ponto_turistico4);

    return 0;
}




