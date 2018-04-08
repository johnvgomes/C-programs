#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>



void Buscar(char* busca);
char nomes[100][15];
int i=0;


main ()

{
	
char busca[15];
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");

for (i =0 ;; i++){
	
	printf("Digite um nome para a posição %i: (Digite f para finalizar)\n", (i+1));
	scanf("%s",&nomes[i]);
	
	if (!strcmp(nomes[i],"f")){
		break;
}
  }
  
printf("Digite um nome para ser buscado:\n");
scanf("%s", &busca);

Buscar(busca);

printf("\n\nFinalizando...\n\n");

}

void Buscar(char* busca){
int j;
int flag=0;

 
for (j=0;j<i;j++){	
	if (!strcmp(busca,nomes[j])){
		printf("o nome foi encontrado na posição %i\n", (j+1));
		flag=1;
	}
	
}	
  if (flag==0){
		
	printf("Nome não foi encontrado\n\n"); 
		
	}
}




