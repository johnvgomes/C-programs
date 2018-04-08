#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <string.h>



int main ()


{
	
char respostas[3][3][2];
char gabarito [3][2];
int pontos[3];
int i;
int j;
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");

for (i=0;i<3;i++){

	printf(" Digite a resposta do gabarito para a questao %i\n\n",(i+1));
	scanf("%s", &gabarito[i]);
}

for (i=0;i<3;i++){
	pontos[i]=0;
}


for (i=0;i<3;i++){
	for (j=0;j<3;j++){

	printf(" Digite a resposta do candidato %i para a questao %i\n\n",(i+1), (j+1));
	scanf("%s", &respostas[i][j]);
	
	if(!strcmp(gabarito[j],respostas[i][j])){
		pontos[i]++;
	}
}
}

printf("\n\n");
for (i=0;i<3;i++){
	printf("O candidato %i teve %i acertos\n\n", (i+1), pontos[i]);
}
	return(0);

}



