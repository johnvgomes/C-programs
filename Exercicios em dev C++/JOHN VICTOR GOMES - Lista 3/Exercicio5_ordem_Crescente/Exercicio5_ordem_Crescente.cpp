#include<stdio.h>

#include <locale.h>



int main ()


{
	
float n1 = 0;
float n2 = 0;



setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("           Exercicio 5 - Ordem crescente\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("OBS: PARA FICAR LEGAL DIGITE 2 NUMEROS DIFERENTES EX: 2 , 3");
printf(" \n");
printf(" \n");
printf("              Digite o primeiro numero:\n");
printf("\n                             ");
scanf("%f" , &n1 );
printf("\n\a");
printf("              Digite o segundo numero: \n");
printf("\n                             ");
scanf("%f" , &n2 );
printf(" \n");
printf(" \n");

if (n1 == n2) {
	
       printf (" os numeros digitados são iguais");
       
   }else if (n1 > n2) {
   	
            printf ("A ordem crescente dos numeros digitados é:\n");
            
            printf ("             %.0f , %.0f ", n2, n1);
        
	}else if (n2>n1) {
		
		printf ("A ordem crescente dos numeros digitados é:\n");
            
        printf ("             %.0f , %.0f ", n1, n2);
    }

        
return (0);
}



