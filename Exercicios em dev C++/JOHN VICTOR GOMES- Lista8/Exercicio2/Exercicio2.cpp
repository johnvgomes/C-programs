#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>


int Busca(int procura);
int numeros[100];
int i=0;
int procura =0;


main ()

{
	

	
setlocale(LC_ALL, "Portuguese");
printf(" \n");

for (i =1 ;i<=50; i++){
	
		
	printf("Digite um numero para a posição %i: (Digite 0 para finalizar)\n", i);
	scanf("%i",&numeros[i]);

  	if (numeros[i]== 0){
		break;
}
}


printf (" Digite o numero a ser procurado:\n") ;
scanf ("%i", &procura);



printf (" O numero foi encontrado: %i vezes", Busca(procura));

	

printf("\n\nFinalizando...\n\n");
	

  }
  




int Busca(int procura){

int teste=0;
int cont=0;

for (cont =0 ;cont<i; cont++){
   if (numeros[cont] == procura) {
      teste +=1;
   }
}

return teste;
}




