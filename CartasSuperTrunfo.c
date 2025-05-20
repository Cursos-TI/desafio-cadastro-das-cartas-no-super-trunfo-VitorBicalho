#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Variáveis para armazenar os dados inseridos pelo usuário
    char estado1[10], estado2[]= 'PR', nome_cidade1[50], nome_cidade2[]= 'Curitiba';   
    unsigned int carta1 = 1, carta2 = 2, ponto_turistico1, ponto_turistico2 = rand()% 10 + 1, comparacaoCartas;
    float populacao1, area1, pib1;
    float populacao2 = (rand()% 9000000) / 1000.0 + 1000, area2 = (rand()% 95000)/ 100.0 + 50, pib2 = (rand()% 4001)/ 10.0 + 10;
    srand(time(0));

    //Coleta de dados do usuário
    printf("Digite as letras do estado 1: ");
    scanf("%s", &estado1);

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

    //Cálculos de densidade populacional,PIB Per Capita e super poder
    float densidadepop1 = populacao1 / area1, densidadepop2 = populacao2 / area2;
    float pibpercapita1 = pib1 / populacao1, pibpercapita2 = pib2 / populacao2;
    float superPoder1 = area1 + pib1 + pibpercapita1 + (1 / densidadepop1) + ponto_turistico1, superPoder2 = area2 + pib2 + pibpercapita2 + (1 / densidadepop2) + ponto_turistico2; 

    printf("\n");
    //exibição dos atributos de cada carta
    printf("Carta %d - %s(%s)\n", carta1, nome_cidade1, estado1);
    printf("População: %.3f habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.1f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", ponto_turistico1);
    printf("Pib per capita: %.2f\n", pibpercapita1);
    printf("Densidade Populacional: %.2f\n", densidadepop1);
    printf("Super poder: %.3f\n", superPoder1);

    printf("\n");

    printf("Carta %d - %s(%s):\n", carta2, nome_cidade2, estado2);
    printf("População: %.3f habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.1f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", ponto_turistico2);
    printf("Pib per capita: %.1f\n", pibpercapita2);
    printf("Densidade Populacional: %.2f\n", densidadepop2);
    printf("Super poder: %.3f\n", superPoder2);

    printf("\n");

   /* 
    Antiga comparação de cartas baseado em todos os atributos
    printf("População: Carta %c%d venceu? (%d)\n", estado, carta1, populacao1 > populacao2);
    printf("Área: %c%d venceu? (%d)\n", estado, carta1, area1 > area2);
    printf("PIB: %c%d venceu? (%d)\n", estado, carta1, pib1 > pib2);
    printf("Pontos Turísticos: %c%d venceu? (%d)\n", estado, carta1, ponto_turistico1 > ponto_turistico2);
    printf("Densidade Populacional: %c%d venceu? (%d)\n", estado, carta1, densidadepop1 <= densidadepop2);
    printf("Pib per Capita: %c%d venceu? (%d)\n", estado, carta1, pibpercapita1 > pibpercapita2);
    printf("Super Poder: %c%d venceu? (%d)", estado, carta1, superPoder1 > superPoder2);
    */
   /*
     Comparação baseada em um atributo,sem escolha do usuário
   printf("Comparação de cartas (Atributo: PIb Per Capita):\n");

   printf("Carta 1 - %s(%s):%.1f\n", nome_cidade1, estado1, pibpercapita1);
   printf("Carta 2 - %s(%s):%.1f\n", nome_cidade2, estado2, pibpercapita2);

    if (pibpercapita1 > pibpercapita2) {
        printf("Resultado: Carta %d (%s) Venceu!\n", carta1, nome_cidade1);
   } else {
        printf("Resultado: Carta %d (%s) Venceu!\n", carta2, nome_cidade2);
   }
   */

   printf("Comparação De Cartas\n");
   printf("Escolha um atributo: \n");
   printf("1.População\n");
   printf("2.Área\n");
   printf("3.PIB\n");
   printf("4.Número de pontos turísticos\n");
   printf("5.Densidade demográfica");
   scanf("%d", &comparacaoCartas);

   switch (comparacaoCartas)
   {
   case 1:
          printf("%s(%s) VS %s(%s)\n", nome_cidade1, estado1, nome_cidade2, estado2);
          printf("Atributo População\n");
          printf("%s: %.3f habitantes - %s: %3f habitantes\n", nome_cidade1, populacao1, nome_cidade2, populacao2);
          if (populacao1 > populacao2){
               printf("Carta %d venceu!", carta1);
          } else if (populacao1 < populacao2)
          {
               printf("Carta %d venceu!", carta2);
          } else {
               printf("Empate!\n");
          }
     break;
    case 2: 
          printf("%s(%s) VS %s(%s)\n", nome_cidade1, estado1, nome_cidade2, estado2);
          printf("Atributo Área\n");
          printf("%s: %.2f km² - %s: %.2f km²\n", nome_cidade1, area1, nome_cidade2, area2);
          if (area1 > area1){
               printf("Carta %d venceu!", carta1);
          } else if (area1 < area2)
          {
               printf("Carta %d venceu!", carta2);
          } else {
               printf("Empate!\n");
          } 
     break; 
     case 3:
          printf("%s(%s) VS %s(%s)\n", nome_cidade1, estado1, nome_cidade2, estado2);
          printf("Atributo PIB\n");
          printf("%s: %.1f bilhões - %s: %.1f bilhões\n", nome_cidade1, pib1, nome_cidade2, pib2);
          if (pib1 > pib2){
               printf("Carta %d venceu!", carta1);
          } else if (pib1 < pib2)
          {
               printf("Carta %d venceu!", carta2);
          } else {
               printf("Empate!\n");
          } 
     break;
     case 4:
          printf("%s(%s) VS %s(%s)\n", nome_cidade1, estado1, nome_cidade2, estado2);
          printf("Atributo Pontos Turísticos\n");
          printf("%s: %d - %s: %d\n", nome_cidade1, ponto_turistico1, nome_cidade2, ponto_turistico2);
          if (ponto_turistico1 > ponto_turistico2){
               printf("Carta %d venceu!", carta1);
          } else if (ponto_turistico1 < ponto_turistico2)
          {
               printf("Carta %d venceu!", carta2);
          } else {
               printf("Empate!\n");
          }
     break;
     case 5:
          printf("%s(%s) VS %s(%s)\n", nome_cidade1, estado1, nome_cidade2, estado2);
          printf("Atributo Densidade Demográfica\n");
          printf("%s: %.2f - %s: %.2f\n", nome_cidade1, densidadepop1, nome_cidade2, densidadepop2);
          if (densidadepop1 > densidadepop2){
               printf("Carta %d venceu!", carta2);
          } else if (densidadepop1 < densidadepop2)
          {
               printf("Carta %d venceu!", carta1);
          } else {
               printf("Empate!\n");
          }
     break;
   default:
          printf("Atributo inválido");
          
     break;
   }

   
   return 0;
   
}
    

