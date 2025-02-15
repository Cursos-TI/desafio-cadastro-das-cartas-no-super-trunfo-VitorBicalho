int main() {
    
    char estado;    char nome_cidade1[50], nome_cidade2[50]; 
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto_turistico1, ponto_turistico2;

    printf("Digite a letra do estado(A-H):");
    scanf("%c", estado);
    getchar();

    printf("Digite o nome da cidade 1:");
    scanf("%s", &nome_cidade1);

    printf("Digite a população da cidade 1:");
    scanf("%f", &populacao1);

    printf("Digite a área da cidade 1:");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos a cidade possuí:");
    scanf("%d", &ponto_turistico1);

    printf("\n");

    printf("Digite o nome da cidade 2:");
    scanf("%s", &nome_cidade2);

    printf("Digite a população da cidade 2:");
    scanf("%f", &populacao2);

    printf("Digite a área da cidade 2:");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2:");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos a cidade possuí:");
    scanf("%d", &ponto_turistico2);

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

    return 0;

}



