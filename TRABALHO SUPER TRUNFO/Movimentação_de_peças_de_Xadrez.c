#include<stdio.h>
int main (){

int torre = 5; // movimentação de cinco casas pra direita.
int bispo = 5; // cinco casas pra cima e direita.
int rainha = 8; // movimentação de 8 casas a esquerda.
int i ;

// Movimentação da torre 

printf("Movimentação da torre.\n");

for (i = 1; i <= torre; i++)
{
    printf("Direita(%d)\n", i);
}

// Movimentação do bispo

printf("\n");
i = 1;

printf("Movimentação bispo\n");

while (i <= bispo) {
    printf("cima, direta (%d)\n", i);
    i++;

}
printf("\n");
// Movimentação da rainha 

printf("Movimentação da Rainha.\n");

i = 1;

do{
    printf("Esquerda(%d)\n", i);
    i++;
    
}while (i <= rainha);

printf("\n");

printf("Movimentação finalizada.\n");


return 0;












}