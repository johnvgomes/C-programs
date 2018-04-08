#include <locale.h>
#include <stdio.h>
#include <stdlib.h>


int MAX = 5;


struct end{
    char nome[100];
    char rua[100];
    char cidade[100];
    char estado[100];
    unsigned long int cep;
} *info;


void cria_lista(void) {
    int i;
    info = malloc (MAX*sizeof(struct end));
    for (i = 0; i < MAX; i++){
        info[i].nome[0] = '\0';
    }
}

void insere(void) {
	cria_lista();
    int aux;
    int posicao;
    posicao = livre();
    if (posicao == -1) {
        printf("\nEstrutura Cheia!!");
        return;
    }
    if (posicao != 0){
        info = realloc(info,1);
    }
    printf("-- Registro %d:\n", posicao);
    printf("\t Nome: ");
    ler_string(busca.nome, 30);
    aux = busca_nome();
    if (aux != 0)
        strcpy(info[posicao].nome, busca.nome);
    printf("\t Rua: ");
    ler_string(info[posicao].rua, 40);
    printf("\t Cidade: ");
    ler_string(info[posicao].cidade, 20);
    printf("\t Estado: ");
    ler_string(info[posicao].estado, 2);
    printf("\t CEP: ");
    scanf("%lu", &info[posicao].cep);
}
