//  revis�o de ponteiros.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int a=20, b=50; // cria variavel
	
	int *pa; // cria uma vari�vel para guardar um endere�o
	int *pb;
	
	pa = &a; // coloca o endere�o de a no pa
	pb = &b;
	
	printf("\nUsando o &, salvei o endere�o do A, veja s�: %i\n", pa);	
	printf("\nUsando o &, salvei o endere�o do B, veja s�: %i\n", pb);	
	
	printf("\nO que est� guardado no endere�o de pa � %i\n", *pa);
	printf("\nO que est� guardado no endere�o de pb � %i\n", *pb);
	
	*pa = 500;
	
	printf("\nalteramos o valor de asterisco pa para %d", *pa);
	printf("\nagora o valor de a e %d", a);
	
	return 0;
}
