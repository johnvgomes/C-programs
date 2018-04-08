#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>


int main ()


{
	
int numero[10];

int i=0;

int soma=0;

int limite =0;



	
setlocale(LC_ALL, "Portuguese");
printf(" \n");


printf("----------------------------------------------------------\n");
printf("         EXERCICIO 3 - SOMA INDICE PAR\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("              Digite a quantidade de números para inserir \n", (i+1));
printf("\n                             ");
scanf("%i" , &limite );


  system("cls");  

for (i =0 ; i<limite ; i++){
	
	
	
printf("----------------------------------------------------------\n");
printf("         EXERCICIO 3 - SOMA INDICE PAR\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("               Insira um valor para a posição %i do vetor: \n", (i+1));
printf("\n                             ");
scanf("%i" , &numero[i] );


  system("cls"); 

if(i%2==0) {
soma +=numero[i]; 

  }


}

system("cls");

printf("\n\a");
printf("----------------------------------------------------------\n");
printf("         EXERCICIO 3 - SOMA INDICE PAR\n");
printf("----------------------------------------------------------\n");

printf("          ________________________________\n");
printf("          ________      INDICE    ________\n");
printf("          ________________________________\n\n");


for (i =0 ; i<=limite ; i++){


if(i%2==0 && i==0) {
printf("              %i   ",i);

} else if (i%2==0 && i>0 && i<limite){

printf("%i   ", i);

}else if (i%2==0 && (limite-1)%2==0){

printf("%i",i); 

}

else if (i%2==0 && limite%2!=0){

printf(" "); 

}

}

printf("\n");

for (i=0 ; i<=limite ; i++){


if(i%2==0 && i==0) {
printf("             ( %i ",numero[i]);

} else if (i%2==0 && i>0 && i<limite){

printf("+ %i ", numero[i]);


}if (i%2!=0 && i==limite-1){

printf(")",numero[i]); 

}

if (i%2!=0 && i==limite){

printf(")",numero[i]); 

}
}


printf("\n");
printf ("      A soma dos elementos de indice par é %i", soma);

return (0);


}



