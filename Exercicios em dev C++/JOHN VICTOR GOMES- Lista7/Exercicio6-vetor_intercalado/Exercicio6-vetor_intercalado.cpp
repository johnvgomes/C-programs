#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <stdlib.h>


int main ()


{
	
int vetor1[10];

int vetor2[10];

int vetor3[20];

int i=0;

int j=0;

	
setlocale(LC_ALL, "Portuguese");
printf(" \n");

for (i =0 ; i<10 ; i++){
	
printf("----------------------------------------------------------\n");
printf("         EXERCICIO 6 - Vetor intercalado\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("               Insira um valor para a posição %i do vetor 1 \n", (i+1));
printf("\n                             ");
scanf("%i" , &vetor1[i] );

}

i=0;

for (i =0 ; i<10 ; i++){
	
printf("----------------------------------------------------------\n");
printf("         EXERCICIO 6 - Vetor intercalado\n");
printf("----------------------------------------------------------\n");

printf("\n\a");
printf("               Insira um valor para a posição %i do vetor 2 \n", (i+1));
printf("\n                             ");
scanf("%i" , &vetor2[i] );
}

  system("cls");  
  

for (i =0 ; i<10 ; i++){

     vetor3[j]=vetor1[i];
	 j++;
	 vetor3[j]=vetor2[i];
	 j++;
	 
}

for (i =0 ; i<20 ; i++){
	printf("%i  ", vetor3[i]);
}
return (0);


}





