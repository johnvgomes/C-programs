#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <string.h>



struct pessoa {
	char sexo[2];
	int idade;
	float salario;
	
};

int main ()


{
	
setlocale(LC_ALL, "Portuguese");
struct pessoa p1;
	
printf(" \n");
printf("Digite o sexo da pessoa m - Masculino/ f - Feminino\n");
scanf("%[^\n]", p1.sexo);


printf("Digite a idade da pessoa:\n");
scanf("%i", &p1.idade);


printf("Digite o salario da pesssoa:\n");
scanf("%f", &p1.salario);

if(!strcmp(p1.sexo,"m")){
	printf("Sexo: Masculino\n");
}else{
	printf("Sexo: Feminino\n");
}

printf ("Idade: %i\n", p1.idade);
printf("Salario:%.2f\n", p1.salario);
return (0);
}
