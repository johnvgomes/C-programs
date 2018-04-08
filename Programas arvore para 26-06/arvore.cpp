#include<stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>



void pause (float);
void Setar_Listar();
void Listar();
void Listar1();
void ListarINFINITO();
void Excluir(int inc);
void Incluir(int inc);
void Incluir_inicio(int inc);
void Incluir_direita(int inc);
void Incluir_esquerda(int inc);
void Loading_inicio(int flag_inicio);
void Proximo_anterior();


int flag_text=0;
int flag_inicio;
int flag_lista =0;
int flag_primeiro_valor=0;
int flag_li_l4 = 0;
int flag_li_l5 =0;
int tamanho;
int posicao;
int inc;
int valorzin;

int	cont_pt_lt4 =0;
int	cont_pt_lt41 =0;
int	cont_pt_lt5 =0; 			 	


char resposta[2];
//ESTRUTURA arvore

struct arvore {
	
    struct arvore *ponteiro_topo;
    struct arvore *ponteiro_esquerda;
	int valor;
	struct arvore *ponteiro_direita;
	int impresso;
	
} *av, *topo, *b, *c, *d, *e, *f, *g, *h, *i, *ex, *dx;

//av -->arvore

//topo --> APONTA PARA PRIMEIRA POSICAO

//b --> APONTA PARA o topo Aux

//d --> auxiiar do maior menor

//e --> exclui

//f --> aux exclui

//g --> Para excluir

//ex --> ve a posicao atual

//dx --> idem^ so que para  excluir





 void carregar_lista(){
	
	av = (struct arvore*) malloc(sizeof(struct arvore));
	
	if(av != NULL){
		
		
		av->ponteiro_topo = NULL;
		av->ponteiro_esquerda = NULL;
		av->ponteiro_direita = NULL;
		av->impresso=0;
		
		system("cls");
		
		printf("\n\n\n");
		printf("                     ----------------------------------------\n");
		printf("                     |    arvore mallocada com sucesso!!!    |\n");
		printf("                     ----------------------------------------\n");
		
		pause(2.0);
		
	}
	else{
		
		printf("Erro no malloc!!");
	}
}


void pause (float delay1) {

   if (delay1<0.001) return; // pode ser ajustado e/ou evita-se valores negativos.

   float inst1=0, inst2=0;

   inst1 = (float)clock()/(float)CLOCKS_PER_SEC;

   while (inst2-inst1<delay1) inst2 = (float)clock()/(float)CLOCKS_PER_SEC;

   return;

}



void Incluir_inicio(int inc){
	
	int valor=0;
	
	do{
		system("cls");
	
			if(flag_primeiro_valor == 0  ){
				
			
		system("cls");
    	printf("\n");
    	printf("\n");
    	printf("\n");
    	printf("\n");
    	printf("\n");
    	printf("\n");
        printf("             %c%c%c%c%c%c  %c%c%c%c  %c   %c  %c   %c  %c%c  %c%c%c%c  %c%c%c%c  %c%c%c%c  %c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);		
		printf("                %c    %c  %c  %c   %c  %c%c  %c   %c  %c     %c  %c  %c       %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178);          
        printf("                %c    %c  %c  %c%c%c%c%c  %c %c %c  %c   %c%c%c%c  %c  %c  %c%c%c     %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("             %c  %c    %c  %c  %c   %c  %c  %c%c         %c  %c  %c  %c       %c\n",178,178,178,178,178,178,178,178,178,178,178);
        printf("             %c%c%c%c    %c%c%c%c  %c   %c  %c   %c      %c%c%c%c  %c%c%c%c  %c       %c",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
      	
        printf("\n");
        printf("\n");
        printf("                         Digite um valor inteiro:\n\n");
        printf("             _______________________________________________________\n");
        printf("\n");
		printf("\n");
		printf("%c-----------------------------------------------------------------------%c\n",218,191);
		printf("                           		INCLUIR no TOPO   ");
		printf(" \n");
		printf("%c-----------------------------------------------------------------------%c\n",195,180);
		printf("| Valor:   |      " );
		scanf("%d", &valor);
			
			av->valor = valor;
			av->ponteiro_topo = NULL;
			av->ponteiro_direita = NULL;
			av->ponteiro_esquerda = NULL;
			b = av;
			
			topo = b;
			flag_primeiro_valor=1;
			
			
			posicao+=1;
    	
			tamanho+=1;
	
    
			}
			
			
		}while(valor == 0);
}

void Incluir_direita(int inc){	
		
			
			if (topo->ponteiro_direita == NULL && valorzin>topo->valor){
				
				
				av->valor = valorzin;		
				av->ponteiro_topo = topo;	
				topo->ponteiro_direita=av;
				
				
				
			} else {
			
					
			printf(" \n");
			printf(" \n");
			g=av;
			printf("valor g = %i", g->valor);
			
			
			printf(" \n");
			printf(" \n");
			
				if(g->ponteiro_topo != NULL)
		{
			g = g->ponteiro_topo;
			
			printf("valor TOPO g = %i", g->valor);
		}
		else{
			
			printf("valor TOPO g = NULL");
			
			
		}
			g=av;
			
			printf(" \n");
			printf(" \n");
			if(g->ponteiro_esquerda != NULL)
		{
			g = g->ponteiro_esquerda;
			
			printf("valor esquerda g = %i", g->valor);
		}
		else{
			
			printf("valor esquerda g = NULL");
			
			
		}
		
			printf(" \n");
			printf(" \n");
		
				if(g->ponteiro_direita != NULL)
		{
			g = g->ponteiro_direita;
			
			printf("valor direita g = %i", g->valor);
		}
		else{
			
			printf("valor direita g = NULL");
			
			
		}
		
			printf(" \n");
			printf(" \n");
		
		system("pause");
		
					
				}
				
				printf("entrou!!!\n\n");
				system("pause");
				av->valor = valorzin;
				c=av;
				
				av->ponteiro_topo = ex;	
			
					
					
			printf(" \n");
			printf(" \n");
			g=ex;
			printf("valor g = %i", g->valor);
			
			
			printf(" \n");
			printf(" \n");
			
				if(g->ponteiro_topo != NULL)
		{
			g = g->ponteiro_topo;
			
			printf("valor TOPO g = %i", g->valor);
		}
		else{
			
			printf("valor TOPO g = NULL");
			
			
		}
			g=ex;
			
			
			printf(" \n");
			printf(" \n");
			if(g->ponteiro_esquerda != NULL)
		{
			g = g->ponteiro_esquerda;
			
			printf("valor esquerda g = %i", g->valor);
		}
		else{
			
			printf("valor esquerda g = NULL");
			
			
		}
		
			printf(" \n");
			printf(" \n");
		
				if(g->ponteiro_direita != NULL)
		{
			g = g->ponteiro_direita;
			
			printf("valor direita g = %i", g->valor);
		}
		else{
			
			printf("valor direita g = NULL");
			
			
		}
		
			printf(" \n");
			printf(" \n");
		
		system("pause");
					
				}
				ex = av->ponteiro_topo;
				
				ex->ponteiro_direita = av;
				
				
				
				if(){
					
					
				printf("ex->ponteiro direita", ex->ponteiro_direita);
				}
				else{
					
				printf("NULL");
					
				}
			posicao+=1;
    	
    		tamanho+=1;
}
}
 	
void Incluir_esquerda(int inc){
																					
				
			if (topo->ponteiro_esquerda==NULL && valorzin<topo->valor){
			
				av->valor = valorzin;		
				av->ponteiro_topo = topo;	
				topo->ponteiro_esquerda=av;
				
				
			} else {                                      
	
	 
  	 
				
				av->valor = valorzin;
				av->ponteiro_topo = ex;	
				ex->ponteiro_esquerda=av;
				
				
	
 		}
			
			posicao+=1;
    	
			tamanho+=1;
}
 
void Listar()
{                             

    printf("oi eu sou goku");
}


void Listar1()
{                             

	if (tamanho == 0){	
		
			system("cls");
		
		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("     A 	ARVORE ESTA VAZIA, INCLUA VALORES NA ARVORE PARA LISTA-LOS.   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("                           Aguarde...\n");
				
			pause(2.5);
				
			
		
	}
	
	
	else{
	
	
		
    av = topo;
 	
    
    printf("\n                       Lista : (");
 
 m:
 	
 	
 	while(av->ponteiro_esquerda != NULL){
 		av = av->ponteiro_esquerda;
 		
 	}
 
 if (av->impresso==0){
  
  printf(" %d |", av->valor);
  av->impresso=1;
  }
 j:
 	if (av->ponteiro_direita!=NULL){
 		
	  		av=av->ponteiro_direita;
	  		
	  		goto m;
}
 	
 
	 if (av->ponteiro_topo!=NULL){
	 	
	  		av=av->ponteiro_topo;
	  		
	 	if (av->impresso==0){
	  		
	  		printf(" %d |", av->valor);
	  		av->impresso=1;
	  		
	  		goto j;
			  	
	  	} 
	  	else{
	  		if (av->ponteiro_topo!=NULL){
	 	
	  	
		  			av=av->ponteiro_topo;
		  	
	  				if (av->impresso==0){
	  			
	  				printf(" %d |", av->valor);
	  				av->impresso=1;
			  		
					  goto j;
	  				} 
	  		}
	  	}
	  	
	 
	}

 
	  	else if(av->ponteiro_topo==NULL){
	  		
	  		if (av->impresso==0){
	  		
	  		printf(" %d |", av->valor);
	  		av->impresso=1;
			  	
	  	
		  } 
	  		
	  	}
	  	
	  	
 	 
    printf(")");
    
    
    printf("\n\n");
	
 	printf("topo: %i", topo->valor);
    printf("\n\n");
    Setar_Listar();
    
    
}
    
}



void Setar_Listar()
{
	
    av = topo;
 	
    
 n:
 	
 	
 	while(av->ponteiro_esquerda != NULL){
 		av = av->ponteiro_esquerda;
 		
 	}
 
 if (av->impresso==1){
  
  av->impresso=0;
  }
 
 y:
 	if (av->ponteiro_direita!=NULL){
 		
	  		av=av->ponteiro_direita;
	  		
	  		goto n;
}
 	
 
	 if (av->ponteiro_topo!=NULL){
	 	
	  		av=av->ponteiro_topo;
	  		
	 	if (av->impresso==1){
	  		
	  		av->impresso=0;
	  		
	  		goto y;
			  	
	  	} 
	  	else{
	  		if (av->ponteiro_topo!=NULL){
	 	
	  	
		  			av=av->ponteiro_topo;
		  	
	  				if (av->impresso==1){
	  			
	  				av->impresso=0;
			  		
					  goto y;
	  				} 
	  		}
	  	}
	  	
	 
	}

 
	  	else if(av->ponteiro_topo==NULL){
	  		
	  		if (av->impresso==1){
	  		
	  		av->impresso=0;
			  	
	  	} 
	  		
	  		
	  	}
	  	
	  	
 	 
    
    pause(0.7);
    
    
    
 	
 	
}









void Incluir(int opcao){
  
	carregar_lista();
	if (tamanho == 0){
		
		// se a arvore estiver vazia
		//vai inserir no inicio
		
			system("cls");
		
		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("     A 	ARVORE ESTA VAZIA, POR ISSO O VALOR SERA INCLUIDO NO TOPO.   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("                           Aguarde...\n");
				
			pause(2.5);
				
			inc = 1; 	
				
			Incluir_inicio(inc);
		
			
			
			system("pause");
	}
			
	
	
		else if(tamanho>0){

		system("cls");
    	printf("\n");
    	printf("\n");
    	printf("\n");
    	printf("\n");
    	printf("\n");
    	printf("\n");
        printf("             %c%c%c%c%c%c  %c%c%c%c  %c   %c  %c   %c  %c%c  %c%c%c%c  %c%c%c%c  %c%c%c%c  %c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);		
		printf("                %c    %c  %c  %c   %c  %c%c  %c   %c  %c     %c  %c  %c       %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178);          
        printf("                %c    %c  %c  %c%c%c%c%c  %c %c %c  %c   %c%c%c%c  %c  %c  %c%c%c     %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("             %c  %c    %c  %c  %c   %c  %c  %c%c         %c  %c  %c  %c       %c\n",178,178,178,178,178,178,178,178,178,178,178);
        printf("             %c%c%c%c    %c%c%c%c  %c   %c  %c   %c      %c%c%c%c  %c%c%c%c  %c       %c",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
      	
        printf("\n");
        printf("\n");
        printf("                         Digite um valor inteiro:\n\n");
        printf("             _______________________________________________________\n");
        printf("\n");
		printf("\n");
		printf("%c-----------------------------------------------------------------------%c\n",218,191);
		printf("                           		INCLUIR   ");
		printf(" \n");
		printf("%c-----------------------------------------------------------------------%c\n",195,180);
		printf("| Valor:   |      " );
		scanf("%d", &valorzin);
 		
 		
        	printf(" \n");
		
 
			d=topo;
			ex=d;
    	g:
   			
   		
			printf(" \n");
			printf(" \n");
			g=ex;
			printf("valor g = %i", g->valor);
			
			
			printf(" \n");
			printf(" \n");
			if(g->ponteiro_esquerda != NULL)
		{
			g = g->ponteiro_esquerda;
			
			printf("valor esquerda g = %i", g->valor);
		}
		else{
			
			printf("valor esquerda g = NULL");
			
			
		}
		
			printf(" \n");
			printf(" \n");
		
				if(g->ponteiro_direita != NULL)
		{
			g = g->ponteiro_direita;
			
			printf("valor direita g = %i", g->valor);
		}
		else{
			
			printf("valor direita g = NULL");
			
			
		}
		
			printf(" \n");
			printf(" \n");
		
		system("pause");
		printf("\n");
			
		printf("\n");
		//----------------------------------------------------
		if(valorzin>d->valor){
			
			
			
			if(d->ponteiro_direita!=NULL){
				
				
				
				d= d->ponteiro_direita;
				ex=d;
				goto g;
				
			}
			
			else{
				
			
			//INSERE DIREITA
			int in=1;
			Incluir_direita(in);
				
			}
		}		
		else if(valorzin<d->valor){
			
			
			
				if(d->ponteiro_esquerda!=NULL){
					
				d= d->ponteiro_esquerda;
				ex=d;
				goto g;
				
			}
			
			
			else{
				
			//INSERE ESQUERDA
			int in=1;
			Incluir_esquerda(in);
				
			}
		}
		
		
		else if(valorzin==d->valor){
			
		
			printf("Valor ja inserido!!!\n\n\n");
		}
		
system("pause");
system("cls");

}

    
}



//fim incluir-------------------------------------------------------------------------------------------------------------------------------------------------------
		

void Excluir(int opcao){
	
	
	
		if (tamanho == 0){
		// se a arvore estiver vazia
	
		
			system("cls");
		
		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("    A ARVORE ESTA VAZIA DE UM 'INCLUIR NA ARVORE' PARA ACRESCENTAR DADOS.   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("                           Aguarde...\n");
				
			pause(2.5);
				
		
			
			
	}
	else{
		
		do{
			
			system("cls");
			
				printf("\n\n");
				
				Listar1();
				
				
				printf("\n\n");
				
		
			printf("%c-----------------------------------------------------------------------%c\n",218,191);
			printf("                      DIGITE O VALOR A SER EXCLUIDO   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n",195,180);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n",195,180);
			printf("| valor:   |      " );
			scanf(" %i", &valorzin);
			
				g=topo;
    	e:
   		
   		
		printf("\n");
			
		printf("\n");
		
		if(valorzin>g->valor){
			
			
			
			if(g->ponteiro_direita!=NULL){
				
				
				g= g->ponteiro_direita;
				dx=g;
				goto e;
				
			}
			
			else{
				printf("\n\n");
				
				printf("valor NAO EXISTE na arvore!!!");
				
				printf("\n\n");
				pause(1.7);
				
			}
			
		}		
		else if(valorzin<g->valor){
			
			
			
				if(g->ponteiro_esquerda!=NULL){
					
				g= g->ponteiro_esquerda;
				dx=g;
				goto e;
				
			}
			
			
			else{
				printf("\n\n");
				
				printf("valor NAO EXISTE na arvore!!!");
				
				printf("\n\n");
				pause(1.7);
				
			}
			
		
		}
		
		
		else if(valorzin==g->valor){
			
	printf("\n\n");
				
				printf("valor EXISTE na arvore!!!");
				
				printf("\n\n");
				pause(1.7);
				break;
			}
	
	
	
}while(true);


			system("cls");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("                               EXCLUIR DA LISTA   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| VALOR: |      ");
			printf("%i", g->valor);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf(" \n");
			printf(" \n");
			printf(" \n");
			printf(" \n");		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("                   TEM CERTEZA QUE DESEJA EXCLUIR? ( S/N )  ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| RESPOSTA: |      ");
			scanf(" %[^\n]s", resposta);
			strlwr(resposta);
			
			
			if(!strcmp(resposta,"n")){
			printf(" \n");
			printf(" \n");
			printf(" \n");
			
			
			printf("   Exclusao da arvore cancelada, sem alteracoes na ARVORE!!!\n");
			
			printf(" \n");
			printf(" \n");
			
			system("pause");
		}
			else if(!strcmp(resposta,"s")){
		
		
			printf(" \n");
			printf(" \n");
			g=topo;
			printf("valor g = %i", g->valor);
			
			
			printf(" \n");
			printf(" \n");
			if(g->ponteiro_esquerda != NULL)
		{
			g = g->ponteiro_esquerda;
			
			printf("valor esquerda g = %i", g->valor);
		}
		else{
			
			printf("valor esquerda g = NULL");
			
			
		}
		
			printf(" \n");
			printf(" \n");
		
				if(g->ponteiro_direita != NULL)
		{
			g = g->ponteiro_direita;
			
			printf("valor direita g = %i", g->valor);
		}
		else{
			
			printf("valor direita g = NULL");
			
			
		}
		
			printf(" \n");
			printf(" \n");
		
		system("pause");
			
			if(g->ponteiro_direita == NULL && g->ponteiro_esquerda == NULL){
				//SEM FILHOS
				
				if (g->ponteiro_topo != NULL){
				
				
				g = g->ponteiro_topo;
				
				if(valorzin>g->valor){
					e = g->ponteiro_direita;
					g->ponteiro_direita = NULL;
					
				}
				else if(valorzin<g->valor){
					e = g->ponteiro_esquerda;
				g->ponteiro_esquerda = NULL;
				}
				
			printf(" \n");
				
			printf("MEIO SEM FILHOS!!!!");
				
			printf(" \n");
				free(e);
				tamanho-=1;
				
			}
			
				else if (g->ponteiro_topo == NULL){
				
			printf(" \n");
				
			printf("TOPO sem FILHOS!!!!");
				
			printf(" \n");
				free(g);
				
				tamanho-=1;
			}
			
			
				
				
			}
			
			
	//-----------------------------------------------------------------------------------------------		
			
		
			if(g->ponteiro_direita == NULL && g->ponteiro_esquerda != NULL){
				//1 FILHO na ESQUERDA
				
				
				
				if (g->ponteiro_topo != NULL){
				
				f=g->ponteiro_esquerda;
				g = g->ponteiro_topo;
				
				if(valorzin>g->valor){
					e = g->ponteiro_direita;
					g->ponteiro_direita = f;
					f->ponteiro_topo = g;
					
				}
				else if(valorzin<g->valor){
					e = g->ponteiro_esquerda;
					g->ponteiro_esquerda = f;
					f->ponteiro_topo = g;
				}
				
			printf(" \n");
				
			printf("MEIO 1 FILHO ESQUERDA!!!!");
				
			printf(" \n");
				free(e);
				tamanho-=1;
				
			}
			
				else if (g->ponteiro_topo == NULL){
				
				
				
				f=g->ponteiro_esquerda;
				
				f->ponteiro_topo = NULL;
				
				topo = f;
			printf(" \n");
				
			printf("TOPO 1 FILHO ESQUERDA!!!!");
				
			printf(" \n");
			
			
				free(g);
				
				tamanho-=1;
			}
		}
			
	//--------------------------------------------------------------------------------------
				
				
				
		
			if(g->ponteiro_direita != NULL && g->ponteiro_esquerda == NULL){
				//1 FILHO na DIREITA
				
				
				
				if (g->ponteiro_topo != NULL){
				
				f=g->ponteiro_direita;
				g = g->ponteiro_topo;
				
				if(valorzin>g->valor){
					e = g->ponteiro_direita;
					g->ponteiro_direita = f;
					f->ponteiro_topo = g;
					
				}
				else if(valorzin<g->valor){
					e = g->ponteiro_esquerda;
					g->ponteiro_esquerda = f;
					f->ponteiro_topo = g;
				}
				
			printf(" \n");
				
			printf("MEIO 1 FILHO DIREITA!!!!");
				
			printf(" \n");
				free(e);
				tamanho-=1;
				
			}
			
				else if (g->ponteiro_topo == NULL){
				
				
				
				f=g->ponteiro_direita;
				
				f->ponteiro_topo = NULL;
				
				topo = f;
			printf(" \n");
				
			printf("TOPO 1 FILHO DIREITA!!!!");
				
			printf(" \n");
			
			
				free(g);
				
				tamanho-=1;
			}
		
			
//------------------------------------------------------------------------------------------------
		
		
		
		
		
				
		
			if(g->ponteiro_direita != NULL && g->ponteiro_esquerda != NULL){
				//2 FILHOS na DIREITA
				
				printf("Entrou !!!!");
				system("pause");	
				
				if (g->ponteiro_topo != NULL){
				
				f=g->ponteiro_direita;
				h=g->ponteiro_esquerda;
				e = g;
				g = g->ponteiro_topo;
				
				if(valorzin>g->valor){
				
						g->ponteiro_direita = f;
						
				while(f->ponteiro_esquerda != NULL )
					{	
						f=f->ponteiro_esquerda;
					}
					
						f->ponteiro_esquerda = h;
						h->ponteiro_topo = f;
				}
					
				
				
				else if(valorzin<g->valor){
					
						g->ponteiro_esquerda = f;
						
				while(f->ponteiro_esquerda != NULL )
					{	
						f=f->ponteiro_esquerda;
					}
					
						f->ponteiro_esquerda = h;
						h->ponteiro_topo = f;
						
						free(e);
						tamanho-=1;
				}
				
			printf(" \n");
				
			printf("MEIO 2 FILHOS !!!!");
				
			printf(" \n");
				//free(e);
				//tamanho-=1;
				
		}
			
				else if (g->ponteiro_topo == NULL){
				
				
						f=g->ponteiro_direita;
						h=g->ponteiro_esquerda;
				
						f->ponteiro_topo = NULL;
						
				while(f->ponteiro_esquerda != NULL )
					{	
						f=f->ponteiro_esquerda;
					}
					
						f->ponteiro_esquerda = h;
						h->ponteiro_topo = f;
				
			
				
				topo = f;
			printf(" \n");
				
			printf("TOPO 2 FILHOs DIREITA!!!!");
				
			printf(" \n");
			
			
				free(g);
				
				tamanho-=1;
			
		}
		
		
		
			printf(" \n");
			printf(" \n");
			printf(" \n");
			
			printf("\n\n");
			
			printf("Valor excluido com SUCESSO!!!!");
	
			printf("\n\n");
			system("pause");
		}
			
			
	
	
}
}
}
}


int main (){

int i=0 ;

int opcao=0;
		
	
if (flag_inicio==0){
Loading_inicio(flag_inicio);
}
system("cls"); 
do{
    	printf("\n");
    	printf("\n");
    	printf("\n");
    	printf("\n");
    	printf("\n");
    	printf("\n");
        printf("             %c%c%c%c%c%c  %c%c%c%c  %c   %c  %c   %c  %c%c  %c%c%c%c  %c%c%c%c  %c%c%c%c  %c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);		
		printf("                %c    %c  %c  %c   %c  %c%c  %c   %c  %c     %c  %c  %c       %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178);          
        printf("                %c    %c  %c  %c%c%c%c%c  %c %c %c  %c   %c%c%c%c  %c  %c  %c%c%c     %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("             %c  %c    %c  %c  %c   %c  %c  %c%c         %c  %c  %c  %c       %c\n",178,178,178,178,178,178,178,178,178,178,178);
        printf("             %c%c%c%c    %c%c%c%c  %c   %c  %c   %c      %c%c%c%c  %c%c%c%c  %c       %c",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
      	
        printf("\n");
        printf("\n");
        printf("                              Escolha uma opcao:\n\n");
        printf("             _______________________________________________________\n");
        printf("\n");
		printf("\n");
		printf("                          1 - Incluir na Arvore\n");
		printf("                          2 - Excluir da Arvore\n");
		printf("                          3 - Visualizar\n");
		printf("                          4 - Sair\n");
		printf("\n");
		printf("\n                          ");
		scanf("%i", &opcao);
		switch (opcao){

		case(1) :
			Incluir(opcao);
			break;

		case(2) :
			
			Excluir(opcao);
			break;

		case(3) :
			system("cls");
			Listar1();
			printf("\n");
			system("pause");
		break;

		case(4) :
			return(0);
			break;


		default:
			printf("                                     OPCAO INVALIDA!!!\n");
			printf("                        Por favor, verifique navamente as opcoes.\n");
			pause(1.5);

		}

system("cls");
}while(2>1);

return(0);

}



// INICIO LOGO E FLASH DE CARREGAMENTO


void Loading_inicio(int flag_inicio){
	flag_inicio =1;
	
	char  ballpos[100][20];
   int posball;
   int cont_inicio=8;
   
   for (posball=0;posball<=16;posball++){
   
   // DAQUI EM DIANTE SERA VERIFICADO O VALOR DA POSICAO DA BOLINHA DE CARREGAMENTO
   
   
   if(posball==0){    // SE A POSSICAO FOR IGUAL A ZERO
    printf("\n");   
    printf("\n");   //ESTES ESPACOS SAO PARA NAO ENCOSTAR NA BORDA
   printf("              %c  \n",248, 248);   //BOLINHA NA LINHA 1
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
   }
   else if(posball==1){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   printf("                 %c\n",248,248);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
   }
   
   else if(posball==2){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   printf("                   %c\n",248,248);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
   }

   else if(posball==3){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   printf("                    %c\n",248,248);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
   }
   
   else if(posball==4){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   printf("                    %c\n",248,248);
    printf("\n");
    printf("\n");
    printf("\n");
   }
   
   else if (posball==5){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   printf("                   %c\n",248,248);
    printf("\n");
    printf("\n");
   }

   else if(posball==6){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
    printf("                 %c\n",248,248);
    printf("\n");
   }
   
   else if(posball==7){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
    printf("            %c\n",248,248);
    
   }
   
   else if(posball==8){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   printf("          %c  \n",248, 248);
   }
   
   else if(posball==9){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");   	printf("\n");
   printf("       %c        \n",248,248); 
    printf("\n");
   }
   
   else if(posball==10){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   printf("     %c            \n",248,248);
    printf("\n");
    printf("\n");
   }
   
   else if(posball==11){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   printf("    %c              \n",248,248);
    printf("\n");
    printf("\n");
    printf("\n");
   }
   
   else  if (posball==12){   
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
   printf("    %c              \n",248,248);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
   
   }
   
   else if(posball==13){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   printf("     %c            \n",248,248);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    
   }
   
   else if(posball==14){ 
    printf("\n");
    printf("\n");
    printf("\n");  
   printf("       %c        \n",248,248);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
   
   }
   
   else if(posball==15){
   	printf("\n");
   	printf("\n");
   printf("          %c  \n",248,248);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
   }

else if(posball==16){
	posball=0;
	
}


    printf("\n");
    printf("\n");
    
  if(posball>=0 || posball<=15 && cont_inicio<100)
  {
    printf("           %i%%\n", cont_inicio);
  }
    if (cont_inicio>=0 && cont_inicio<=12){
	
	 // 	J
	 
	 
    	printf("Baixando dados...");
    	printf("\n");
    	printf("\n");
    	printf("\n");
        printf("%c%c%c%c%c%c\n",178,178,178,178,178,178);		
		printf("   %c  \n",178);          
        printf("   %c\n",178);
        printf("%c  %c\n",178,178);
        printf("%c%c%c%c",178,178,178,178);
        
        
    	printf("\n");
    	printf("\n");
    	printf("\n");
        
        
    }
    if (cont_inicio>=13 && cont_inicio<=24){
	
	//      JO
	
	
	
    	printf("Recebendo dados...");
    	printf("\n");
    	printf("\n");
    	printf("\n");
        printf("%c%c%c%c%c%c  %c%c%c%c\n",178,178,178,178,178,178,178,178,178,178);		
		printf("   %c    %c  %c\n",178,178,178);          
        printf("   %c    %c  %c\n",178,178,178);
        printf("%c  %c    %c  %c\n",178,178,178);
        printf("%c%c%c%c    %c%c%c%c",178,178,178,178,178,178,178,178);
        
        
    	printf("\n");
    	printf("\n");
    	printf("\n");
        
        
    }
    if (cont_inicio>=25 && cont_inicio<=36){
	
	//     JOH
	
    	printf("Visualizando dados...");
    	printf("\n");
    	printf("\n");
    	printf("\n");
        printf("%c%c%c%c%c%c  %c%c%c%c  %c   %c\n",178,178,178,178,178,178,178,178,178,178,178,178);		
		printf("   %c    %c  %c  %c   %c \n",178,178,178,178,178);          
        printf("   %c    %c  %c  %c%c%c%c%c\n",178,178,178,178,178,178,178,178);
        printf("%c  %c    %c  %c  %c   %c\n",178,178,178,178,178);
        printf("%c%c%c%c    %c%c%c%c  %c   %c",178,178,178,178,178,178,178,178,178);
        
        
    	printf("\n");
    	printf("\n");
    	printf("\n");
        
    }
    if (cont_inicio>=37 && cont_inicio<=48){ 
	
	
	//      JOHN
	
    	printf("Interpretando dados...");
    	printf("\n");
    	printf("\n");
    	printf("\n");
        printf("%c%c%c%c%c%c  %c%c%c%c  %c   %c  %c   %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178);		
		printf("   %c    %c  %c  %c   %c  %c%c  %c \n",178,178,178,178,178,178,178,178);          
        printf("   %c    %c  %c  %c%c%c%c%c  %c %c %c\n",178,178,178,178,178,178,178,178,178,178,178);
        printf("%c  %c    %c  %c  %c   %c  %c  %c%c\n",178,178,178,178,178,178,178,178);
        printf("%c%c%c%c    %c%c%c%c  %c   %c  %c   %c",178,178,178,178,178,178,178,178,178,178,178);
        
        
    	printf("\n");
    	printf("\n");
    	printf("\n");
        
        
		 }
    if (cont_inicio>=49 && cont_inicio<=60){
    	
	//     JOHN'
    	printf("Calculando dados...");
    	
    	printf("\n");
    	printf("\n");
    	printf("\n");
        printf("%c%c%c%c%c%c  %c%c%c%c  %c   %c  %c   %c  %c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);		
		printf("   %c    %c  %c  %c   %c  %c%c  %c   %c \n",178,178,178,178,178,178,178,178,178);          
        printf("   %c    %c  %c  %c%c%c%c%c  %c %c %c  %c\n",178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c  %c    %c  %c  %c   %c  %c  %c%c\n",178,178,178,178,178,178,178,178);
        printf("%c%c%c%c    %c%c%c%c  %c   %c  %c   %c",178,178,178,178,178,178,178,178,178,178,178);
        
        
    	printf("\n");
    	printf("\n");
    	printf("\n");
        
        
    }
    if (cont_inicio>=61 && cont_inicio<=72){
    	
    
	//    JOHN'S
	
    	printf("Transferindo dados...");
    	    printf("\n");
    	printf("\n");
    	printf("\n");
        printf("%c%c%c%c%c%c  %c%c%c%c  %c   %c  %c   %c  %c%c  %c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);		
		printf("   %c    %c  %c  %c   %c  %c%c  %c   %c  %c \n",178,178,178,178,178,178,178,178,178,178);          
        printf("   %c    %c  %c  %c%c%c%c%c  %c %c %c  %c   %c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c  %c    %c  %c  %c   %c  %c  %c%c         %c\n",178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c    %c%c%c%c  %c   %c  %c   %c      %c%c%c%c",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        
        
    	printf("\n");
    	printf("\n");
    	printf("\n");
        
        
    }
    if (cont_inicio>=73 && cont_inicio<=84){
    	
    
	//     JOHN'SO
    	printf("Compilando dados...");
    	printf("\n");
    	printf("\n");
    	printf("\n");
        printf("%c%c%c%c%c%c  %c%c%c%c  %c   %c  %c   %c  %c%c  %c%c%c%c  %c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);		
		printf("   %c    %c  %c  %c   %c  %c%c  %c   %c  %c     %c  %c\n",178,178,178,178,178,178,178,178,178,178,178,178);          
        printf("   %c    %c  %c  %c%c%c%c%c  %c %c %c  %c   %c%c%c%c  %c  %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c  %c    %c  %c  %c   %c  %c  %c%c         %c  %c  %c\n",178,178,178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c    %c%c%c%c  %c   %c  %c   %c      %c%c%c%c  %c%c%c%c",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        
        
    	printf("\n");
    	printf("\n");
    	printf("\n");
        
        
			 }
			 if (cont_inicio>=85 && cont_inicio<=94){
	
	//     JOHN'SOF
	
    	printf("Estamos quase la...");
    	printf("\n");
    	printf("\n");
    	printf("\n");
        printf("%c%c%c%c%c%c  %c%c%c%c  %c   %c  %c   %c  %c%c  %c%c%c%c  %c%c%c%c  %c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);		
		printf("   %c    %c  %c  %c   %c  %c%c  %c   %c  %c     %c  %c  %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178);          
        printf("   %c    %c  %c  %c%c%c%c%c  %c %c %c  %c   %c%c%c%c  %c  %c  %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c  %c    %c  %c  %c   %c  %c  %c%c         %c  %c  %c  %c\n",178,178,178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c    %c%c%c%c  %c   %c  %c   %c      %c%c%c%c  %c%c%c%c  %c",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        
        
    	printf("\n");
    	printf("\n");
    	printf("\n");
        
			 }
			 
			  if (cont_inicio>=95 && cont_inicio<=99){
	
	//     ULTRASOFT
	
    	printf("Concluido...");
    	
        printf("\n");
    	printf("\n");
    	printf("\n");
        printf("%c%c%c%c%c%c  %c%c%c%c  %c   %c  %c   %c  %c%c  %c%c%c%c  %c%c%c%c  %c%c%c%c  %c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);		
		printf("   %c    %c  %c  %c   %c  %c%c  %c   %c  %c     %c  %c  %c       %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178);          
        printf("   %c    %c  %c  %c%c%c%c%c  %c %c %c  %c   %c%c%c%c  %c  %c  %c%c%c     %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c  %c    %c  %c  %c   %c  %c  %c%c         %c  %c  %c  %c       %c\n",178,178,178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c    %c%c%c%c  %c   %c  %c   %c      %c%c%c%c  %c%c%c%c  %c       %c",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        
        
    	printf("\n");
    	printf("\n");
    	printf("\n");
        
        
		
		 }
    
    
    else if (cont_inicio==100){
    	
	//     ULTRASOFT
    	
    	system("cls");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    
    printf("\n");
    printf("\n");
    
    printf("           %i%%\n", cont_inicio);
    
    printf("\n");
    
     printf("           Iniciando...");	
     
     
    	 printf("\n");
    	printf("\n");
    	printf("\n");
        printf("%c%c%c%c%c%c  %c%c%c%c  %c   %c  %c   %c  %c%c  %c%c%c%c  %c%c%c%c  %c%c%c%c  %c%c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);		
		printf("   %c    %c  %c  %c   %c  %c%c  %c   %c  %c     %c  %c  %c       %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178);          
        printf("   %c    %c  %c  %c%c%c%c%c  %c %c %c  %c   %c%c%c%c  %c  %c  %c%c%c     %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c  %c    %c  %c  %c   %c  %c  %c%c         %c  %c  %c  %c       %c\n",178,178,178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c    %c%c%c%c  %c   %c  %c   %c      %c%c%c%c  %c%c%c%c  %c       %c",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        
        
    	printf("\n");
    	printf("\n");
    	printf("\n");
        
        
        pause (1.5);
     	break;
    }
    
    system("cls");
    cont_inicio += 8;
    
    if (cont_inicio>100){
    	
    	cont_inicio=100;
    }
}

	

	
	
}


    
    

