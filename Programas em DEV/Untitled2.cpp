#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int funcao1(int x, int y)
{
	int z;
	z = x + y;
	return(z);
}

int funcao2(int *rlista)
{
	int i=0;
	
	while (i < 3)
	{
		printf("    %d", rlista[i]);
		i++;
	}
	
	return(0);
}

int main()
{
	int valor1, valor2, resultado;
	int lista[3];
	
	printf("\ndigite o 1 valor:\n");
	scanf("%d", &valor1);
	fflush(stdin);
	
	printf("\ndigite o 2 valor:\n");
	scanf("%d", &valor2);
	fflush(stdin);
	
	resultado = funcao1(valor1, valor2);
		
	printf("\nO resultado e: %d\n",resultado);
	
	//
	
	lista[0] = valor1;
	lista[1] = valor2;
	lista[2] = resultado;
	
	int i = 0;
	
	while (i < 3)
	{
		printf(" %d", lista[i]);
		i++;
	}
	
	printf("\n");
	funcao2(lista);
		
	//
		
	return(0);	
}
