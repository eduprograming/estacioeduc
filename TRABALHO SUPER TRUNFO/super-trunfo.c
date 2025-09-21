//By Eduardo Elias

#include <stdio.h>; //Inclusão da biblioteca
int main(){

//Definição das variaveis

char cartaA[20] = "A01";//Letra representando um dos 8 estados
char codestadoA[20]="Acre";//Estado
char cidadeA[20]= "Rio Branco";//Nome da cidade
int populacaoA =364.756;//Numero de habitantes
float areaA = 8.836;//Área em quilometros quadrados
float pibA = 10955674.857;//Produto Interno Bruto da cidade
int NpontoturA = 20;//Quantidade de pontos turísticos na cidade

char cartaB[20] = "B02";//Letra representando um dos 8 estados
char codestadoB[20]= "Bahia";//Estado
char cidadeB[20] = "Salvador";//Nome da cidade
int populacaoB = 2564204;//Numero de habitantes
float areaB = 693.442;//Área em quilometros quadrados
float pibB = 62954487;//Produto Interno Bruto da cidade
int NpontoturB =30;//Quantidade de pontos turísticos na cidade

//Coleta dos dados das cidades

printf ("Digite uma letra para representar o estado carta A:\n");
scanf ("%s", &codestadoA);
printf ("Digite uma letra para representar o estado carta B:\n");
scanf ("%s", &codestadoB);

printf ("Digite a letra do estado  da carta A seguida de um número de 01 a 04: \n");
scanf("%s", cartaA); 
printf ("Digite a letra do estado  da carta B seguida de um número de 01 a 04: \n");
scanf("%s", cartaB); 

printf ("Digite o nome da cidade da carta A \n");
scanf ("%s", &cidadeA);
printf ("Digite o nome da cidade da carta B \n");
scanf ("%s", &cidadeB);

printf("Digite o numero de habitantes da cidade da carta A:\n");
scanf ("%d", &populacaoA);
printf("Digite o numero de habitantes da cidade da carta B:\n");
scanf ("%d", &populacaoB);

printf("Digite a aréa em km2 da cidade A:\n");
scanf("%f", &areaA);
printf("Digite a aréa em km2 da cidade A:\n");
scanf("%f", &areaB);

printf ("Digite o PIB da cidade A:\n");
scanf("%f", &pibA);
printf ("Digite o PIB da cidade B:\n");
scanf("%f", &pibB);

printf("Digite o numero de pontos turistiscos da cidade A:\n");
scanf("%d", &NpontoturA);
printf("Digite o numero de pontos turistiscos da cidade B:\n");
scanf("%d", &NpontoturB);


printf("CARTA 1\n");
printf("ESTADO: %s \n", codestadoA);
printf("CODIGO: %s \n", cartaA);
printf("CIDADE: %s \n", cidadeA);
printf("POPULAÇÃO: %d \n", populacaoA);
printf("ARÉA: %f ", areaA);
printf("KM² \n");
printf("PIB: %f ", pibA );
printf(" bilhões de reais \n");
printf("Numero de Pontos Turisticos: %d \n\n", NpontoturA);

printf("CARTA 2\n");
printf("ESTADO: %s \n", codestadoB);
printf("CODIGO: %s \n", cartaB);
printf("CIDADE: %s \n", cidadeB);
printf("POPULAÇÃO: %d \n", populacaoB);
printf("ARÉA: %f ", areaB);
printf("KM² \n");
printf("PIB:%f"  , pibB  );
printf(" bilhões de reais \n");
printf("Numero de Pontos Turisticos: %d \n ", NpontoturB);


}