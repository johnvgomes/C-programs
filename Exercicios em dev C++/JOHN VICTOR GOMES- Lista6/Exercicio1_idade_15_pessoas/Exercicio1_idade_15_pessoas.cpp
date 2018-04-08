#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <stdlib.h>


int main ()


{
	

int idade=0;
float cont=0;
float f1 =0;
float f2 =0;
float f3 =0;
float f4 =0;
float f5 =0;
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");

for (cont =0 ; cont<15 ; cont++){
	
printf("----------------------------------------------------------\n");
printf("         Exercicio 1 - Faixa Etaria 15 pessoas\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("               Insira a idade da pessoa %.0f \n", (cont+1));
printf("\n                             ");
scanf("%i" , &idade );

if  ((idade>=0) && (idade<=15)) {
	
      f1 = (f1+1);

}else if  ((idade>=16) && (idade<=30)) {
      
      f2 = (f2+1);
         
}else if  ((idade>=31) && (idade<=45)) {
	
      f3 = (f3+1);
            
}else if  ((idade>=45) && (idade<=60)) {
	
      f4 = (f4+1);
               
}else if  (idade>=61) {
               
      f5 = (f5+1) ;
}else{

      printf("     Idade informada incorretamente");
}

  system("cls");  
  }
  
  
   printf("----------------------------------------------------------\n");
   printf("         Exercicio 1 - Faixa Etaria 15 pessoas\n");
   printf("----------------------------------------------------------\n");
   printf("\n\a");


   
   
    
   printf ("Total de pessoas da faixa 1: %0.f pessoas (%.2f%%)", cont, (f1/cont*100));
   
   printf(" \n");
   printf(" \n");
   
   printf ("Total de pessoas da faixa 2: %0.f pessoas (%.2f%%)", cont, (f2/cont*100));
   
   printf(" \n");
   printf(" \n");
   
   printf ("Total de pessoas da faixa 3: %0.f pessoas (%.2f%%)", cont, (f3/cont*100));
   
   printf(" \n");
   printf(" \n");
   
   printf ("Total de pessoas da faixa 4: %0.f pessoas (%.2f%%)", cont, (f4/cont*100));
   
   printf(" \n");
   printf(" \n");
      
   printf ("Total de pessoas da faixa 5: %0.f pessoas (%.2f%%)", cont, (f5/cont*100));
   
  
return (0);


}



