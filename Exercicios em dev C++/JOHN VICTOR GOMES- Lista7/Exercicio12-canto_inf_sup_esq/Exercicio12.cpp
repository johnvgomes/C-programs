#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>


int main ()


{
	

float dados[2][3];
int linha=0;
int coluna=0;

float sup_esq=0;
float inf_esq=0;


setlocale(LC_ALL, "Portuguese");
for(linha=0;linha<3;linha++){
for(coluna=0;coluna<=3;coluna++){
printf("Digite o primeiro valor inteiro para a posicao (%i,%i) da matriz:",linha, coluna);
scanf("%f",&dados[linha][coluna]);
}

}

sup_esq = dados[0][0];
inf_esq = dados[2][0];
coluna=0;


system:("cls");

for(linha=0;linha<3;linha++){
for(coluna=0;coluna<=3;coluna++){
printf("\t %.0f", dados[linha][coluna]);
}
printf("\n");

}

printf("\n");
printf("                    Elemento do canto superior esquerdo: %0.f \n", sup_esq);
printf("\n");
printf("                    Elemento do canto inferior esquerdo: %0.f \n", inf_esq);
printf("\n");

	return(0);
}



