#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <stdlib.h>


int main ()


{
	
int i =0;
float peso=0;
int idade=0;
int f1 =0;
int f2 =0;
int f3 =0;
int f4 =0;
float p1 =0;
float p2 =0;
float p3 =0;
float p4 =0;
float media1=0;
float media2=0;
float media3=0;
float media4=0;

	
setlocale(LC_ALL, "Portuguese");
printf(" \n");



for (i=1;i<=15;i++){
   printf(" ------------------------------------------------------------------------------\n");
   printf("                      EXERCICIO 2 - MEDIA PESO 15 PESSOAS\n");
   printf(" ------------------------------------------------------------------------------\n");

   printf("\a\n\n");
   
   printf("                            Insira a idade da pessoa %i\n",i);

   printf("\n                                        ");

   scanf("%i",&idade);

   printf("\n");
   printf("\n");

   printf("                            Insira o peso da pessoa %i \n",i);

   printf("\n");
   printf("\n");

   printf("\n                                        ");

   scanf("%f",&peso);

      if  ((idade>=1 && idade<=10)) {
         f1+=1;
         p1+=peso;
      
      }else if  ((idade>=11 && idade<=20)) {
         f2+=1;
         p2+=peso;
         
      }else if ((idade>=21 && idade<=30)) {
            f3+=1;
            p3+=peso;
            
      }else if  (idade>=30) {
               f4+=1;
               p4+=peso;
            }
   system("cls");
}
   
   printf("     A média de peso da pessoas na faixa de 1 a 10 anos é:\n\n");
   
   if (f1==0){
    printf("            Não há pessoas nesta faixa etaria\n");
    }else {
    	
    	media1 = (p1/f1) ;
   printf("                            %.2f",media1);
    }
    
   printf("\n");
   printf("\n");
   
   printf("     A média de peso da pessoas na faixa de 11 a 20 anos é:\n\n");
    if (f2==0) {
    printf("            Não há pessoas nesta faixa etaria\n");
    }else{
    	
   	media2 = (p2/f2) ;
   printf("                            %.2f",media2);
    }
   printf("\n");
   printf("\n");
   
   printf("     A média de peso da pessoas na faixa de 21 a 30 anos é:\n\n");
    if (f3==0){
    printf("            Não há pessoas nesta faixa etaria\n");
    }else{
  
  	media3 = (p3/f3) ;
   printf("                            %.2f",media3);
    }
   printf("\n");
   printf("\n");
   
   printf("        A média de peso da pessoas com 30 anos ou mais é:\n\n");
    if (f4==0) {
    printf("            Não há pessoas nesta faixa etaria\n");
   }else{
  
   media4 = (p4/f4) ;
   	
   printf("                            %.2f",media4);
    }
   printf("\n");
   printf("\n");
  
return (0);


}



