#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <stdlib.h>


main ()


{
	

int primo =0;
int contprimo =0;
int contnum =0;
int contdiv=0;

setlocale(LC_ALL, "Portuguese");
printf(" \n");

printf("----------------------------------------------------------\n");
printf("               EXERCICIO 7 - NUMEROS PRIMOS\n");
printf("----------------------------------------------------------\n");
printf("\n\a");


for (primo=101; primo<=1000;primo++){
	

for (contprimo=1; contprimo<=primo;contprimo++){



if (primo%contprimo == 0) {
contdiv+=1;
}



if (contdiv==3) {
break;
}
}

 if (contdiv==2) {
printf ("                          %i é primo\n", primo);
}
contdiv=0;
}
  
}



