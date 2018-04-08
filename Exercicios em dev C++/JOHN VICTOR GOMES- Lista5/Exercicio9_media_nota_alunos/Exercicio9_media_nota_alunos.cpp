#include<stdio.h>
#include<stdlib.h>
#include <locale.h>


int main ()


{

int cont=1;
int alunos_aprovados =0;
int alunos_reprovados =0;
int alunos_recuperacao =0;

float media_nota =0;
float media_geral =0;

float soma_nota =0;
float soma_nota_total =0;

float nota1 =0;
float nota2 =0;

	
setlocale(LC_ALL, "Portuguese");

do{
	
printf(" \n");

printf("----------------------------------------------------------\n");
printf("              EXERCICIO 9 - MEDIA NOTAS DOS ALUNOS\n");
printf("----------------------------------------------------------\n");
printf("\n\a");

printf("\n\a");
printf("                         Digite a primeira nota:");
printf("\n\a");

printf("\n                               ");
scanf("%f", &nota1 );


printf("\n\a");
printf("                         Digite a segunda nota:");
printf("\n\a");

printf("\n                               ");
scanf("%f", &nota2 );


soma_nota= (nota1 + nota2);
media_nota = (soma_nota / 2);

soma_nota_total += soma_nota;
media_geral = (soma_nota_total/12);



system("cls");

printf("                _____________________________________\n\n");

printf("                       SITUACAO E MEDIA DO ALUNO\n\n");
printf("                _____________________________________\n\n\n\n");



printf("                               A Média é:\n");
printf("                _____________________________________\n");

printf("                         (%.2f + %.2f) = %.2f\n\n", nota1, nota2, media_nota);


if(media_nota >=7){
alunos_aprovados +=1;

printf("o aluno foi aprovado\n\n");
}

else if (media_nota >5 && media_nota <7) {
alunos_recuperacao += 1;

printf("O aluno esta de recuperacao\n\n");
}else if (media_nota <= 5) {
alunos_reprovados +=1;

printf("o aluno foi reprovado\n\n");

}


system("pause");
system("cls");
cont+=1;

}while (cont<=6);


printf("--------------------------------------------------------------------------------\n");
printf("\n");
printf("                                SITUACAO GERAL\n");
printf("\n");
printf("-------------------------------------------------------------------------------\n");

printf(" A Quantidade de alunos aprovados é de: %i\n\n", alunos_aprovados);

printf(" A Quantidade de alunos reprovados é de: %i\n\n", alunos_reprovados);

printf(" A Quantidade de alunos em recuperação é de: %i\n\n", alunos_recuperacao);

printf(" A Média geral do programa é : %.2f\n\n", media_geral);


return(0);
}



