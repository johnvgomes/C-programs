#include<stdio.h>
#include <locale.h>



int main ()


{
	

int num = 10;
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("           Exercicio 1 - Multiplos de 10\n");
printf("----------------------------------------------------------\n");
printf("\n\a");

while (num<=1000){

printf("              %i \n", num);
num += 10;

}

return (0);
}



