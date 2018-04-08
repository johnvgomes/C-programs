#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

main ()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	float original[5][5];
	int i;
	int j;
	
	for (i=0;i<5;i++)
	{
		
		for (j=0;j<5;j++)
		{
			
			original[i][j]=rand()%20;
			
		}
		
	}
	
	printf ("Matriz original:\n");
	
	for (i=0;i<5;i++)
	{
		
		for (j=0;j<5;j++)
		{
			
			printf ("%.0f ",original[i][j]);
			
		}
		
		printf ("\n");
		
	}
	
	printf ("\nMatriz ^3:\n");
	
	for (i=0;i<5;i++)
	{
		
		for (j=0;j<5;j++)
		{
			
			printf ("%.0f ",pow(original[i][j],3));
			
		}
		
		printf ("\n");
		
	}
	
}
