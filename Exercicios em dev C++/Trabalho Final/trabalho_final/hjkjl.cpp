#include<stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#define MAX 10


struct lista {

int ponteiroAnterior;
int valor;
int ponteiroProximo;
};

struct lista lt[MAX];

void teste(struct lista *p)

{

for (int i =0;i<=5;i++)
//int i=5; // o i altera, só para exemplo mesmo...

printf("(%i)", (p+i)->valor);

};


main()

{

struct lista *ptr;

ptr = lt;

lt[5].valor = 5;

teste(ptr);

}
