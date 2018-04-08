#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>


int Busca(int procura);
int numeros[100];
int i=0;
int procura =0;
int conta_procura =0;

main ()

{
	

	
setlocale(LC_ALL, "Portuguese");
printf(" \n");

	
for (i=0 ;i<50; i++){

   printf("Digite um numero inteiro para a posição %i (Digite 0 para finalizar)\n", i);
   scanf("%i", &numeros[i]);

   if (numeros[i]== 0) {
      break;
 }  
 }

printf (" Digite o numero a ser deletado\n");
scanf("%i", &procura);
printf("\n");


Busca(procura);


printf("\n\nFinalizando...\n\n");
	

  }
  




int Busca(int procura){

int teste=0;
int cont=0;
int flag =0;


cont=1;

for (cont =0 ;cont<i; cont++){
   if (numeros[cont] == procura) {
   numeros[cont] = 0;
   conta_procura +=1;
   teste = 1;
 }

}
   do{
   
   cont =1;
   
   for (cont =1 ;cont<i; cont++){
   if(numeros[cont]==0) {
   numeros[cont] = numeros[cont+1];
   numeros[cont+1] = 0;
}
}

   flag+=1;
   
   }while (flag < conta_procura);
   

   printf("\n");

   cont = 1;
   
for (cont =0 ;cont<i; cont++){
   if(cont == 1) {

      printf("( %i , ",numeros[cont] );

   }else if(cont >1 && cont<(i-1)) {

   printf("%i , ", numeros[cont]);

   }else if (cont == (i-1)) {

   printf("%i ) ", numeros[cont]);
   
}
   

}

return teste;

}





