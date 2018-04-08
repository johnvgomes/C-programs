#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>



int main ()


{
	
float limite = 0;
float contador = 1;
float total = 1;



setlocale(LC_ALL, "Portuguese");


printf(" \n");
printf("----------------------------------------------------------\n");
printf("           Exercicio - 4 UM SOBRE N VALORES\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf(" \n");
printf("\n\a");
printf(" \n");
printf(" \n");
  
printf("Digite um valor inteiro e positivo para o limite do calculo: \n");
printf("\n                             ");
scanf("%f" , &limite );

//limite = limite+1;

printf("\n\a");


while (contador <= limite){



total=(total+1/contador);
contador+=1; 


}

      
printf(" \n");
printf("----------------------------------------------------------\n");
printf("            Exercicio - 4 UM SOBRE N VALORES\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf(" \n");

printf ("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n\n");
printf ("             Valor total do calculo: \n\n ");
printf ("                    %.2f\n\n", total);  
printf ("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");


return (0);
}
