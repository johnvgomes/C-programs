#include<stdio.h>

#include <locale.h>



int main ()


{
	
float n1 = 0;
float n2 = 0;
float n3 = 0;
float soma_maior = 0;



setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("      Exercicio 8 - ORDEM CRESCENTE DE TRÊS VALORES\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("  OBS: ordem crescente - do menor para maior. EX: 0,1,10");
printf(" \n");
printf(" \n");
printf("              Digite o primeiro numero:\n");
printf("\n                             ");
scanf("%f" , &n1 );
printf("\n\a");
printf("              Digite o segundo numero: \n");
printf("\n                             ");
scanf("%f" , &n2 );
printf("\n\a");
printf("              Digite o terceiro numero: \n");
printf("\n                             ");
scanf("%f" , &n3 );
printf(" \n");
printf(" \n");

 if (n1>n2 && n1>n3 && n2>n3) {
      printf (" a ordem crescente é : %.0f , %.0f , %.0f", n3, n2, n1);
   
        }else if (n1>n2 && n1>n3 && n3>n2) {
      printf (" a ordem crescente é : %.0f , %.0f , %.0f", n2, n3, n1);
        
             }else if (n2>n1 && n2>n3 && n1>n3) {
      printf (" a ordem crescente é : %.0f , %.0f , %.0f", n3, n1, n2);
             
                  }else if (n2>n1 && n2>n3 && n3>n1) {
      printf (" a ordem crescente é : %.0f , %.0f , %.0f", n1, n2, n2);
                  
                       }else if (n3>n1 && n3>n2 && n2>n1) {
      printf (" a ordem crescente é : %.0f , %.0f , %.0f", n1, n2, n3);
                       
                            }else if (n3>n1 && n3>n2 && n1>n2) {
      printf (" a ordem crescente é : %.0f , %.0f , %.0f", n2, n1, n3);
  }
  
printf("\n");

printf("\n");
   
return (0);
}



