#include<stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#define MAX 500

struct cliente{
    char nome[50];
    char endereco[50];
};//faltava o ponto e virgula

void addCliente(struct cliente *dadosCliente, int *i)//ha duas maneiras de usar o vetor de struct por referencia
{
    printf("\nqual o nome do cliente?");
    scanf(" %s", &dadosCliente->nome);//a primeira muito mais simples
    printf("\nqual o endereço do cliente?");
    scanf(" %s", &(*(dadosCliente+*i)).endereco);// e aqui no caso pra poder dar certo oq pretendia fazer 
    
    
    *i++;
}

int main(void) {
    int i=0,h=0;
    struct cliente clientes[1000];
    while(h!=1){
        printf("\n\nCaso queira sair do cadastro digite 1");
        addCliente(clientes, &i);
        
        printf("%s ", clientes[0].endereco);
    }
    return (0);
}
