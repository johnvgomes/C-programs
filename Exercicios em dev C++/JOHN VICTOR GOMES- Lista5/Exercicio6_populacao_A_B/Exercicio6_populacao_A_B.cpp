#include<stdio.h>
#include<stdlib.h>
#include <locale.h>


int main ()


{
	
float pop_paisA =90;
float pop_paisB =140;
int anos = 0;



	
setlocale(LC_ALL, "Portuguese");

do{
printf(" \n");
printf("----------------------------------------------------------\n");
printf("     EXERCICIO 6 - POPULACAO PAIS A X POPULACAO PAIS B\n");
printf("----------------------------------------------------------\n");
printf("\n\a");


	
printf("   População Pais A:                 População Pais B\n");
printf("       %.2f                                 %.2f \n",pop_paisA, pop_paisB);

if  (pop_paisA < pop_paisB) {
pop_paisA = (pop_paisA + (pop_paisA*0.035));
pop_paisB = (pop_paisB + (pop_paisB*0.01));

anos +=1;


}else{

break;
}

system("cls");

}while (1<2);


system("cls");

printf(" \n");
printf("----------------------------------------------------------\n");
printf("     EXERCICIO 6 - POPULACAO PAIS A X POPULACAO PAIS B\n");
printf("----------------------------------------------------------\n");
printf("\n\a");


printf("       Anos necessários para que a população do país A\n");
printf("           ultrapasse a população do país B\n\n");
printf("                  Numero de Anos: %i",anos);

return(0);
}



