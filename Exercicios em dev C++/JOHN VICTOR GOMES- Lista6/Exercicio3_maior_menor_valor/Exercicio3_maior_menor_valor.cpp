#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <stdlib.h>


int main ()


{
	

int i=0;
int num =0;
float menor =0;
float maior =0;
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");

for (;;){
	
printf("----------------------------------------------------------\n");
printf("         EXERCICIO 3 - MAIOR VALOR E MENOR VALOR\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("                       Digite um Numero\n");

printf("                       Pressione 0 para finalizar\n");
printf("\n                             ");
scanf("%i" , &num );

if (num==0) {
	
	break;
   
   }
   
   if ((menor==0 || menor>num)) {
   
   
   menor=num ;
   
}
   
   if (maior<num || maior==0) {
   
   maior=num;
   
}

  system("cls");  
   
  
  
}
  system("cls");  
   
printf("  =========================================================================\n");
printf("                         O maior valor Digitado foi\n");
printf("  =========================================================================\n");

printf("  _________________________________________________________________________\n");
printf("");
printf("                                 %.2f\n", maior);
printf("  _________________________________________________________________________\n");


printf("  =========================================================================\n");
printf("                       O menor valor Digitado foi\n");
printf("  =========================================================================\n");

printf("  _________________________________________________________________________\n");
printf("");
printf("                               %.2f\n", menor);
printf("  _________________________________________________________________________\n");

  
return (0);


}



