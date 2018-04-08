#include<stdio.h>
#include<stdlib.h>
#include <locale.h>



int main ()


{
	
int matriz[5][5];
int i=0;
int j=0;
float soma =0;
float pares=0;
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");

for (i=0;i<5;i++){

for (j=0;j<5;j++){
	
	//printf ("Digite um valor para a posição (%i,%i)\n", (i+1),(j+1));
	//scanf("%i", &matriz[i][j]);
	srand(time(NULL));
    matriz[i][j]=rand()%20;
	
	if (matriz[i][j]%2==0){
		
		soma+=matriz[i][j];
		pares++;
	}
	
  } 
}

printf("Matriz Original\n");

for (i=0;i<5;i++){

for (j=0;j<5;j++){
	
	printf ("%i\t", matriz[i][j]);

	  } 
	  
	  printf("\n");
}

printf("A média entre os pares é: %.2f", (soma/pares));

return(0);

}



