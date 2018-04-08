#include <stdio.h>
#include <locale.h>

main ()
{
	
	setlocale (LC_ALL,"Portuguese");
	
	int idade[5];
	float altura[5];
	int i;
	
	for (i=0;i<5;i++)
	{
		
		idade[i] = 0;
		altura[i] = 0;

	}
	
	for (i=0;i<5;i++)
	{
		
		printf ("Digite a altura da pessoa %i\n",(i+1));
		scanf ("%f",&altura[i]);

	}
	
	for (i=0;i<5;i++)
	{
	
		printf ("Digite a idade da pessoa %i\n",(i+1));
		scanf ("%i",&idade[i]);
		
	}
	
	for (i=4;i>=0;i-=1)
	{
	
		printf ("%i\n",idade[i]);
		
	}
	
	for (i=4;i>=0;i-=1)
	{
	
		printf ("%.2f\n",altura[i]);
		
	}
	
}
