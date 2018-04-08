#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

struct lista
{
    struct lista *ant;
    int n;
    struct lista *prox;
}*x,*temp0,*temp1,*temp2;
 
void inserirI();
void inserirF();
void inserirP();
void imprimir();
void excluir();
 
int cont = 0;

int main()
{	
	setlocale(LC_ALL,"Portuguese");

    int esc;
    x = NULL;
    temp0 = temp1 = NULL;
 
    while (1)
    {	
	   	printf("   <------> LISTA DUPLAMENTE ENCADEADA <------>\n");
	  	printf("=====================================================");
	    printf("\n||\t\t     OPÇÔES                        ||\n");
	    printf("||1 - Inserir um elemento no inicio da lista       ||\n");
	    printf("||2 - Inserir um elemento no final da lista        ||\n");
	    printf("||3 - Inserir um elemento numa determinada posição ||\n");
	    printf("||4 - Remover um elemento da lista                 ||\n");
	    printf("||5 - Imprimir a lista                             ||\n");
	    printf("||6 - Sair                                         ||\n");
	    printf("=====================================================\n");
    	
    	
        printf("\n Escolha uma opção : ");
        scanf("%d", &esc);
        switch (esc)
        {
        case 1:
            inserirI();
            system("pause");
            break;
        case 2:
            inserirF();
            system("pause");
            break;
        case 3:
            inserirP();
            system("pause");
            break;
        case 4:
            excluir();
            system("pause");
            break;
        case 5:
            imprimir();
            system("pause");
            break;
        case 6:
            exit(0);
        default:
            printf("\n Opção Inválida\n\n");
            system("pause");
        }
        system("cls");
    }
    return(0);
}
 
void criacao()
{
    int y;
 
    temp0 =(struct lista *)malloc(1*sizeof(struct lista));
    temp0->ant = NULL;
    temp0->prox = NULL;
    printf("\n Digite o valor que deseja : ");
    scanf("%d", &y);
    temp0->n = y;
    cont++;
    printf("\n\n");
    
}
 
void inserirI()
{
    if (x == NULL)
    {
        criacao();
        x = temp0;
        temp1 = x;
    }
    else
    {
        criacao();
        temp0->prox = x;
        x->ant = temp0;
        x = temp0;
    }
}
 
void inserirF()
{
    if (x == NULL)
    {
        criacao();
        x = temp0;
        temp1 = x;
    }
    else
    {
        criacao();
        temp1->prox = temp0;
        temp0->ant = temp1;
        temp1 = temp0;
    }
}
 
void inserirP()
{
    int pos, i = 2;
 
    printf("\n Digite a posição desejada : ");
    scanf("%d", &pos);
    temp2 = x;
 
    if ((pos < 1) || (pos >= cont + 1))
    {
        printf("\n Posição Inexistente\n\n");
        return;
    }
    if ((x == NULL) && (pos == 1))
    {
        criacao();
        x = temp0;
        temp1 = x;
        return;
    }
    else
    {
        while (i < pos)
        {
            temp2 = temp2->prox;
            i++;
        }
        criacao();
        temp0->ant = temp2;
        temp0->prox = temp2->prox;
        temp2->prox->ant = temp0;
        temp2->prox = temp0;
    }
}
 
void excluir()
{
    int i = 1, pos;
 
    printf("\n Qual posição deseja deletar : ");
    scanf("%d", &pos);
    temp2 = x;
  
    if ((pos < 1) || (pos >= cont + 1))
    {
        printf("\n Posição Inexistente\n\n");
        return;
    }
    if (x == NULL)
    {
        printf("\n Lista Vazia\n\n");
        return;
    }
    else
    {
        while (i < pos)
        {
            temp2 = temp2->prox;
            i++;
        }
        if (i == 1)
        {
            if (temp2->prox == NULL)
            {
                printf("\nExcluido com sucesso\n\n");
                free(temp2);
                temp2 = x = NULL;
                return;
            }
        }
        if (temp2->prox == NULL)
        {
            temp2->ant->prox = NULL;
            free(temp2);
            printf("\nExcluido com sucesso\n\n");
            return;
        }
        temp2->prox->ant = temp2->ant;
        if (i != 1)
            temp2->ant->prox = temp2->prox; 
        if (i == 1)
            x = temp2->prox;
        printf("\n Excluido com sucesso\n\n");
        free(temp2);
    }
    cont--;
}
 
void imprimir()
{
    temp2 = x;
 
    if (temp2 == NULL)
    {
        printf("\nLista Vazia \n");
        return;
    }
    printf("\n Imprimindo... : ");
 
    while (temp2->prox != NULL)
    {
        printf(" %d ", temp2->n);
        temp2 = temp2->prox;
    }
    printf(" %d ", temp2->n);
    int posicao=1;
    printf(" posicao 1 --> %d ", (temp2+1)->n);
    printf("\n\n");
}
