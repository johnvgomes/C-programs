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
	
	printf("QUESTAO 2:");
	printf("\n");
	printf("valor de x:\n\n");
	scanf("%f",&x);
	
	
	fx= (2*(x*x*x*x))-(2*(x*x*x))-(x*x)-(x)-(3);
	
	fxlinha = (8*(x*x*x))-(6*(x*x))-(2*x)-(1);
	
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
