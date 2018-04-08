#include<stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#define MAX 10

int main(void){
	
	int flag =0;
	int flag_erro=0;
	float intervalo_a=0;
	float intervalo_b=0;
	float a;
	float b;
	float deltax;
	float fa;
	float fb;
	float x;
	float fx;
	float Xis=0;
	float erro;
	float ERROR=0.0001;
	do{
	if(flag ==0){
	printf("valor do intervalo a:\n\n");
	scanf("%i",&intervalo_a);
	
	
	printf("\n\n");
	
	printf("valor do intervalo b:\n\n");
	scanf("%i",&intervalo_b);
	flag=1;
	
	a=intervalo_a;
	b=intervalo_b;
	x=b;
}


	fa= (0.2*(a*a*a))-(3.006*(a*a))+(15.06*a)-(25.15);

	
	fb= (0.2*(b*b*b))-(3.006*(b*b))+(15.06*b)-(25.15);
	
	
	
	deltax = fb * ((b-a)/(fb-fa));
	
	Xis = x- deltax;
	
	fx= (0.2*(Xis*Xis*Xis))-(3.006*(Xis*Xis))+(15.06*Xis)-(25.15);
	
	erro = b-a;
	
	
	
	printf("valor de Xn:  %f",a);
	
	printf("\n\n");
	
	printf("valor de F(Xn):  %f",fa);
	
	printf("\n\n");
	
	printf("valor de  Xn-1:  %f",a);
	
	
	printf("\n\n");
	printf("valor de F(Xn-1):  %f",fb);
	
	printf("\n\n");
		
	printf("valor de Xn+1:  %f",Xis);
	
	
	printf("\n\n");
	printf("valor de F(Xn+1):  %f",fx);
	
	printf("\n\n");
	if(flag_erro ==0){
		
	printf("valor do erro: --");
	}
	else{
	printf("valor de a:  %f", erro);
}
	

		if (fx*fb<0){
		
		a=b;
		fa=fb;
		
	}
	else if(a*fb>=0){
		
		fa= (fa*fb)/(fb+fx);
		
	}
	
	b=x;
	
	fb=fx;
	
	}while(ERROR<erro);
	
	return (0);
}
