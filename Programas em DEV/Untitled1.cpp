//  revisão de ponteiros.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int a=20, b=50; // cria variavel
	
	int *pa; // cria uma variável para guardar um endereço
	int *pb;
	
	pa = &a; // coloca o endereço de a no pa
	pb = &b;
	
	printf("\nUsando o &, salvei o endereço do A, veja só: %i\n", pa);	
	printf("\nUsando o &, salvei o endereço do B, veja só: %i\n", pb);	
	
	printf("\nO que está guardado no endereço de pa é %i\n", *pa);
	printf("\nO que está guardado no endereço de pb é %i\n", *pb);
	
	*pa = 500;
	
	printf("\nalteramos o valor de asterisco pa para %d", *pa);
	printf("\nagora o valor de a e %d", a);
	
	return 0;
}
