#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <stdlib.h>


int main ()


{
	
int numeros[20];
int i=0;
int flag=0;
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");

for (i =0 ; i<20 ; i++){
	
printf("----------------------------------------------------------\n");
printf("         EXERCICIO 2 - VALORES IGUAIS A 10\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("               Insira um valor para a posição %i \n", (i+1));
printf("\n                             ");
scanf("%i" , &numeros[i] );



  system("cls");  
  }

printf("\n\a");
printf("----------------------------------------------------------\n");
printf("         EXERCICIO 2 - VALORES IGUAIS A 10\n");
printf("----------------------------------------------------------\n");

for (i =0 ; i<20 ; i++){

if(numeros[i]==10){
	
	if (flag==0){
		printf("%i - INDICE : %i \n", numeros[i], (i+1));
		flag=1;
	}
	
	else if (flag!=0){
		
		printf("%i - INDICE : %i \n", numeros[i], (i+1));
	
	}
}	
	

  }
  if (flag==0){
		
	printf("Nao foram encontrados valores maiores que 20\n\n"); 
		
	}
return (0);


}



