#include<stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#define MAX 500

struct dados {

char nome[30];

int num;

};

struct dados vet[10];

void teste(struct dados *p)

{

for (int i =0;i<=5;i++)
//int i=5; // o i altera, só para exemplo mesmo...

printf("(%s)", (p+i)->nome);

};


main()

{

struct dados *ptr;

ptr = vet;

strcpy(vet[5].nome,"bola");

teste(ptr);

}
