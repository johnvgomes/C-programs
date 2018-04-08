#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <stdlib.h>


int main ()


{
	
int numeros[10];
int i=0;
int flag=0;
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");

for (i =0 ; i<10 ; i++){
	
printf("----------------------------------------------------------\n");
printf("         Exercicio 1 - Valores maiores que 20\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("               Insira um valor para a posição %i \n", (i+1));
printf("\n                             ");
scanf("%i" , &numeros[i] );



  system("cls");  
  }

printf("\n\a");
printf("----------------------------------------------------------\n");
printf("         Exercicio 1 - Valores maiores que 20\n");
printf("----------------------------------------------------------\n");

for (i =0 ; i<10 ; i++){

if(numeros[i]>20){
	printf("%i\n",numeros[i]); 
	
	if (flag==0){
		printf("%i\n", numeros[i]);
		flag=1;
	}
}	
	

  }
  if (flag==0){
		
	printf("Nao foram encontrados valores maiores que 20\n\n"); 
		
	}
return (0);


}



