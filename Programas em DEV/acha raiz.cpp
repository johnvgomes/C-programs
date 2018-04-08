#include<stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#define MAX 10

int main(void){
	
	
	for(;;){
	float x=0;
	float fx=0;
	float fxlinha=0;
	
	
	printf("QUESTAO 1:");
	printf("\n");
	printf("valor de x:\n\n");
	scanf("%f",&x);
	
	
	fx= (0.2*(x*x*x))-(3.006*(x*x))+(15.06*x)-(25.15);
	
	fxlinha = (0.6*(x*x))-(6.012*x)+(1);
	
	printf("o valor de fx eh:");
	
	printf("\n\n");
	
	printf("%f",fx);
	
	printf("\n\n");
		printf("\n\n");
	
	printf("o valor de (fx') eh:");
	
	printf("\n\n");
	
	printf("%f",fxlinha);
	
	printf("\n\n");
	
	printf("\n\n");
	system("pause");
	system("cls");
}
	return (0);
}
