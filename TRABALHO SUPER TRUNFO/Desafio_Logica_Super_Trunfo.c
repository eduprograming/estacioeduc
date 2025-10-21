#include <stdio.h>
#include <locale.h>


int main() {

    setlocale(LC_ALL, "Portuguese");

    // Primeira Carta
    char estado1;
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_Turisticos1;
    float densidade1;
    float pibperCapita1;
    float superPoder1;

    //Segunda Carta
    char estado2;
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_Turisticos2;
    float densidade2;
    float pibperCapita2;
    float superPoder2;

    
 

  // Dados da Primeira Carta
    printf("Cadastro da Primeira Carta\n");

    printf("\nDigite o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o Código: ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %50[^\n]", cidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_Turisticos1);
    

    // Dados da Segunda Carta
    printf("\nCadastro da Segunda Carta\n");

    printf("\nDigite o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código: ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %50[^\n]", cidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_Turisticos2);


  
    densidade1 = (float)populacao1 / area1;
    pibperCapita1 = (float)(pib1* 1000000000 / populacao1);
    
    
    densidade2 = (float)populacao2 / area2;
    pibperCapita2 = (float)pib2* 1000000000 / populacao2;

    
  superPoder1 = populacao1 + area1 + pib1 + pontos_Turisticos1 + pibperCapita1;
  superPoder2 = populacao2 + area2 + pib2 + pontos_Turisticos2 + pibperCapita2;


    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_Turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibperCapita1);
    printf("Super poder Carta 1: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_Turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibperCapita2);
    printf("Super poder Carta 2: %.2f\n", superPoder2);
      

    printf("\n\n**** Disputa de Cartas ****\n\n");

    printf("Carta 1 - São Paulo (SP) População: %d\n", populacao1);
    printf("Carta 2 - Rio de Janeiro (RJ) População: %d\n", populacao2);
    if (populacao1 > populacao2){
        printf("Carta 1 (%s) venceu!\n\n", cidade1);
    } else {
        printf("Carta 2 (%s) venceu!\n\n", cidade2);
    }
    

    printf("Carta 1 - São Paulo (SP) Área: %.2f km²\n", area1);
    printf("Carta 2 - Rio de Janeiro (RJ) Área: %.2f km²\n", area2);
    if (area1 > area2){
        printf("Carta 1 (%s) venceu!\n\n", cidade1);
    } else {
        printf("Carta 2 (%s) venceu!\n\n", cidade2);
    }


    printf("Carta 1 - São Paulo (SP) PIB: %.2f bilhões de reais\n", pib1);
    printf("Carta 2 - Rio de Janeiro (RJ) PIB: %.2f bilhões de reais\n", pib2);
    if (pib1 > pib2){
        printf("Carta 1 (%s) venceu!\n\n", cidade1);
    } else {
        printf("Carta 2 (%s) Venceu!\n\n", cidade2);
    }


    printf("Carta 1 - São Paulo (SP) Número de Pontos Turísticos: %d\n", pontos_Turisticos1);
    printf("Carta 2 - Rio de Janeiro (RJ) Número de Pontos Turísticos: %d\n", pontos_Turisticos2);
    if (pontos_Turisticos1 > pontos_Turisticos2){
        printf("Carta 1 (%s) venceu!\n\n", cidade1);
    } else {
        printf("Carta 2 (%s) venceu!\n\n", cidade2);
    }


    printf("Carta 1 - São Paulo (SP) Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Carta 2 - Rio de Janeiro (RJ) Densidade Populacional: %.2f hab/km²\n", densidade2);
    if (densidade1 < densidade2){
        printf("Carta 1 (%s) venceu!\n\n", cidade1);
    } else {
        printf("Carta 2 (%s) venceu!\n\n", cidade2);
    }

    printf("Carta 1 - São Paulo (SP) PIB per Capita: %.2f reais\n", pibperCapita1);
    printf("Carta 2 - Rio de Janeiro (RJ) PIB per Capita: %.2f reais\n", pibperCapita2);
    if (pibperCapita1 > pibperCapita2){
        printf("Carta 1 (%s) venceu!\n\n", cidade1);
    } else {
        printf("Carta 2 (%s) venceu!\n\n", cidade2);
    }

    printf("Carta 1 - São Paulo (SP) Super poder Carta 2: %.2f\n", superPoder1);
    printf("Carta 2 - Rio de Janeiro (RJ) Super poder Carta 2: %.2f\n", superPoder2);
    if (superPoder1 > superPoder2){
        printf("Carta 1 (%s) venceu!\n\n", cidade1);
    } else {
        printf("Carta 2 (%s) venceu!\n\n", cidade2);
    }



    return 0;
}
