#include<stdio.h>
#include<stdlib.h>
#include <locale.h>


int main ()


{
	
int idade =0;
int sexo=0;
int xp =0;
int contFem =0;
int contMas =0;
int idadeMHXP =0;
int contMHXP =0;
int contHM45 =0;
int contMM35XP =0;
int cont =0;
int menorMXP =0;
float porcH=0;
	
setlocale(LC_ALL, "Portuguese");

do{
	
printf(" \n");

printf("----------------------------------------------------------\n");
printf("              EXERCICIO 8 - CANDIDATOS DA EMPRESA\n");
printf("----------------------------------------------------------\n");
printf("\n\a");

printf("\n\a");
printf("                         Informe a idade:");
printf("\n\a");

printf("\n                               ");
scanf("%i", &idade );

if (idade == 0 ) {

break;	
	
}
printf("\n\a");
printf("                         Informe o sexo:\n\n");

printf("                             1- Masc\n");
printf("                             2- Fem");
printf("\n\a");
printf("\n                               ");
scanf("%i", &sexo );

printf("\n\a");
printf("                         Possui experiencia:\n\n");

printf("                             1- Sim\n");
printf("                             2- Nao");

printf("\n\a");
printf("\n                               ");
scanf("%i", &xp );


if (sexo==2) {
      contFem=contFem+1;
   }
   

  if (sexo==1){
      contMas+=1;
   } 
   
   if ((sexo==1 && xp==1)) {
      idadeMHXP+=idade;
      contMHXP+=1;

}

   if (sexo==1 && idade>45) {

      contHM45+=1;
}

   if ((sexo==2 && idade<35 && xp==1)) {
     
	  contMM35XP +=1;
}


   if ((sexo==2 && xp==1)) {
      if ((menorMXP>idade || menorMXP == 0)) {

         menorMXP = idade;

      }
 }

   cont+=1;
   
system("pause");

 system("cls");
 

}while (1<2);





system("cls");

printf("                Numero de Candidatos do sexo feminino\n");
printf("                _____________________________________\n");

printf("                              %i\n\n", contFem);


printf("                Numero de Candidatos do sexo masculino\n");
printf("                _____________________________________\n");

printf("                              %i\n\n", contMas);


system("pause");

 system("cls");

printf("       A idade média dos homens que já têm experiência no serviço é:\n");
printf("       ____________________________________________________________\n");

printf("                              %i\n\n", (idadeMHXP/contMHXP));


printf("                  Porcentagem de Homens com mais de 45 anos:\n");
printf("       ____________________________________________________________\n");



porcH = ((contHM45*100)/contMas);

printf("                              %i Homens\n", contHM45);
printf("                              (%.2f%%)\n\n", porcH);


system("pause");

system("cls");

printf("       Mulheres com idade inferior a 35 anos e com experiência no serviço:\n");
printf("       ___________________________________________________________________\n");

printf("                              %i\n\n", (contMM35XP));


printf("       A menor idade entre as mulheres que já têm experiência no serviço:\n");
printf("       ___________________________________________________________________\n");

printf("                              %i\n\n", (menorMXP));

printf("\n\n\n\n");

return(0);
}



