#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <stdlib.h>


int main ()


{
	

int cont =0;
float contIM50 =0;
float somaaltura =0;
float idade =0;
float altura =0;
float media=0;
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");


for (;;){
	
printf("----------------------------------------------------------\n");
printf("         EXERCICIO 5 -  MEDIA ALTURA + 50 ANOS\n");
printf("----------------------------------------------------------\n");
printf("\n\n\a");

printf("               PESSOA NUMERO : %i\n", cont);

printf("                    Digite a idade\n");

printf("\n                             ");
scanf("%f" , &idade );

if (idade==0){
	
break;

}

printf("                    Digite a altura\n");

printf("\n                             ");
scanf("%f" , &altura );



if (idade > 50) {

somaaltura += altura;
contIM50 +=1;
}
media = (somaaltura/contIM50);
cont+=1;
}
system("cls");
printf("______________________________________________________________________\n");
printf("          MEDIA DAS ALTURAS DAS PESSOAS C/ IDADE MAIOR Q 50\n");
printf("______________________________________________________________________\n");
printf("                                    %.2f\n",media);
printf("======================================================================\n");


  
return (0);


}



