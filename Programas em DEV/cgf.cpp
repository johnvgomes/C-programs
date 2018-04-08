#include<stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>


void pause (float);
void Listar();
void Listar1();
void Listar2();
void Listar3();
void Incluir(int inc);
void Incluir_inicio(int inc);
void Incluir_fim(int inc);
void Incluir_posicao_especifica(int inc);

int flag_lista =0;
int flag_primeiro_valor=0;

int tamanho;
int posicao;
int inc;

//ESTRUTURA lista

struct lista {
	
    struct lista *ponteiro_anterior;
	int valor;
	struct lista *ponteiro_proximo;

} *lt, *a, *b, *c, *d;



 void carregar_lista(){
	
	lt = (struct lista*) malloc(sizeof(struct lista));
	
	if(lt != NULL){
		
		lt->ponteiro_anterior = NULL;
		lt->ponteiro_proximo = NULL;
		
		system("cls");
		
		printf("\n\n\n");
		printf("                     ----------------------------------------\n");
		printf("                     |    lista mallocada com sucesso!!!    |\n");
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
				
			
			
			printf("%c-----------------------------------------------------------------------%c\n",218,191);
			printf("                           INCLUIR NA LISTA   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n",195,180);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n",195,180);
			printf("| Valor:   |      " );
			scanf(" %i", &valor);
			
			
			lt->valor = valor;
			
			a = lt;
			
			b = a;
			
			flag_primeiro_valor=1;
			
			
    		posicao+=1;
    	
    		tamanho+=1;
    		
	
    
			}
			
			else if(flag_primeiro_valor == 1){
			
			valor=0;	
					
			printf("%c-----------------------------------------------------------------------%c\n",218,191);
			printf("                           INCLUIR NA LISTA   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n",195,180);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n",195,180);
			printf("| Valor:   |      " );
			scanf(" %i", &valor);
			
			lt->valor = valor;
			
			lt->ponteiro_proximo = a;
			
			a->ponteiro_anterior = lt;
			
			a = lt;
			
			  
    		posicao+=1;
    	
    		tamanho+=1;
    		
				
				
			}
		}while(valor == 0);
}

void Incluir_fim(int inc){
		int valor=0;
	
	
	do{
		system("cls");
	
			
			valor=0;	
					
			printf("%c-----------------------------------------------------------------------%c\n",218,191);
			printf("                           INCLUIR NA LISTA   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n",195,180);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n",195,180);
			printf("| Valor:   |      " );
			scanf(" %i", &valor);
			
			
			
			lt->valor = valor;		
        	
        	b->ponteiro_proximo = lt;
						
			lt->ponteiro_anterior = b;
			
			b = lt;
			  
			  
			  
    		posicao+=1;
    	
    		tamanho+=1;
    		
				
				
			
		}while(valor == 0);
	
	
}
void Incluir_posicao_especifica(int inc){
	
	
	int valor=0;
	
	
	do{
		system("cls");
	
			
			valor=0;	
			int position;
			int i = 2;  //referente a 2ª posição
			c = a;
			
			do{
				
				system("cls");
				
			printf("%c-----------------------------------------------------------------------%c\n",218,191);
			printf("                           DIGITE A POSICAO   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n",195,180);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n",195,180);
			printf("| Posicao:   |      " );
			scanf(" %i", &position);
			
				if(position >= 1 && position <= tamanho) {
  						break;
  					}
  					
  					
				 else if ((position < 1) || (position >= tamanho + 1))
   					 {
        				printf("\n Posição Inexistente\n\n");
        				
        				
        				pause(1.5);
        				
  					  }
  					  
			}while(2>1);
			
  					
			  						
			  		if (position == 1){
			    		
			    			system("cls");
			    			int inc=1;
			      			Incluir_inicio(inc);
			      			
			      			flag_lista = 1;
			      			goto p;
			      			
			   			 }
			   		else
			   		{
			        
			    			system("cls");
			    			
			    			
			      			flag_lista = 3;
					
						while (i < position)
			        	{
			           	 	c = c->ponteiro_proximo;
			            	i+=1;
			        	}
			        	
			        	
			
							printf("%c-----------------------------------------------------------------------%c\n",218,191);
							printf("                           INCLUIR NA LISTA   ");
							printf(" \n");
							printf("%c-----------------------------------------------------------------------%c\n",195,180);
							printf(" \n");
							printf("%c-----------------------------------------------------------------------%c\n",195,180);
							printf("| Valor:   |      " );
							scanf(" %i", &valor);
							        	
									lt->valor = valor;
									
									d = lt;
											
						        	lt->ponteiro_anterior = c;
						        	
						        	lt->ponteiro_proximo = c->ponteiro_proximo;
						        	
						        	c->ponteiro_proximo->ponteiro_anterior = lt;
						        	
						        	c->ponteiro_proximo = lt;
						        	goto p;
						    }	
			  						
			
			
				
				
			
		}while(valor == 0);
	
			p:
				
    		posicao+=1;
    	
    		tamanho+=1;
    		
	
}

void Listar()
{
    lt = a;
 
    
    printf("\n                       Lista : (");
 
    while (lt->ponteiro_proximo != NULL)
    {
        printf(" %d |", lt->valor);
        lt = lt->ponteiro_proximo;
    }
    printf(" %d ", lt->valor);
    printf(")");
    printf("\n\n");
    
    pause(0.7);
}














//inicio--------------------------------------------LISTA1------------------------------------------------------------------------------------------------------------------------
void Listar1()

{
	
system("cls");

	if(tamanho==0){
		
		
		
		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("     A LISTA ESTA VAZIA DE UM 'INCLUIR' PARA ACRESCENTAR DADOS.   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("                           Aguarde...\n");
				pause(2.5);
	}
			
			
	
	
		else {
		
		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("                             A LISTA CONTEM DADOS.   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			
		
		
			Listar();
			printf("\n");
			printf("\n");
			

			printf("                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c        ",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
	
	
		printf("\n");

			printf("                              %c              %c",178,178);
			
			printf("\n");

			printf("                 %c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178);

			printf("     %c              %c",178,178);
			
			printf("     %c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178);

		printf("\n");
	
	
	printf("                 %c      %c",178,178);
	printf("     %c              %c",178,178);
	printf("     %c      %c",178,178);


	 if (tamanho==1){
    
	lt = a;
    
    
    printf("                                         %d",lt->valor);       
	
	printf("                %d",lt->valor);
	
	printf("                 %d",lt->valor);
    
    
}
 else if (tamanho>1){
               
	printf("                                         %d",lt->valor);
		
    lt = a;
    	
	printf("                %d",lt->valor);
    
    lt = lt->ponteiro_proximo;
		    
        
	printf("                 %d",lt->valor);
           
    
}

		printf("\n");		
		
		
	printf("                 %c      %c",178,178);
	printf("     %c              %c",178,178);
	printf("     %c      %c",178,178);
	
		printf("\n");		
		
		printf("                 %c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178);

		printf("     %c              %c",178,178);
				
		printf("     %c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178);

		printf("\n");

		printf("                              %c              %c",178,178);
				
		printf("\n");
		
		printf("                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
			


	}
	
	printf("\n");
	printf("\n");
	printf("\n");
	
			printf("                 ANTERIOR    |     ATUAL      |     PROXIMO");
			
			
		
	
			printf("\n");
			printf("\n");
			printf("\n");
			//printf("                           Aguarde...\n");
			
			system("pause");
}

//FIM------------------------------------------LISTA1--------------------------------------------------------------------------------------------------------------------	



void Listar2()

{
	
system("cls");

	
		
		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("                             A LISTA CONTEM DADOS.   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			
		
		
			Listar();
			printf("\n");
			printf("\n");
			
			printf("                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c        ",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
	
	
		printf("\n");

			printf("                              %c              %c",178,178);
			
			printf("\n");

			printf("                 %c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178);

			printf("     %c              %c",178,178);
			
			printf("     %c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178);

		printf("\n");
	
	
	printf("                 %c      %c",178,178);
	printf("     %c              %c",178,178);
	printf("     %c      %c",178,178);


	 if (tamanho==1){
    
	lt = a;
    
    
    printf("                                         %d",lt->valor);       
	
	printf("                %d",lt->valor);
	
	printf("                 %d",lt->valor);
    
    
}
 else if (tamanho>1){
    
    
	lt = lt->ponteiro_anterior;
	           
	printf("                                         %d",lt->valor);
    
	lt=lt->ponteiro_proximo;
		
	printf("                %d",lt->valor);
    
    lt = a;	    
        
	printf("                 %d",lt->valor);
           
    
}

		printf("\n");		
		
		
	printf("                 %c      %c",178,178);
	printf("     %c              %c",178,178);
	printf("     %c      %c",178,178);
	
		printf("\n");		
		
		printf("                 %c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178);

		printf("     %c              %c",178,178);
				
		printf("     %c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178);

		printf("\n");

		printf("                              %c              %c",178,178);
				
		printf("\n");
		
		printf("                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
			


	
	
	printf("\n");
	printf("\n");
	printf("\n");
	
			printf("                 ANTERIOR    |     ATUAL      |     PROXIMO");
			
			
		
	
			printf("\n");
			printf("\n");
			printf("\n");
			//printf("                           Aguarde...\n");
			
			system("pause");
}
//FIM------------------------------------------------------LISTA2-------------------------------------------------------------------------------------------------------

void Listar3()

{
	
system("cls");

	
		
		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("                             A LISTA CONTEM DADOS. L3   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			
		
		
			Listar();
			printf("\n");
			printf("\n");
			
			printf("                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c        ",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
	
	
		printf("\n");

			printf("                              %c              %c",178,178);
			
			printf("\n");

			printf("                 %c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178);

			printf("     %c              %c",178,178);
			
			printf("     %c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178);

		printf("\n");
	
	
	printf("                 %c      %c",178,178);
	printf("     %c              %c",178,178);
	printf("     %c      %c",178,178);


	 if (tamanho==1){
    
	lt = a;
    
    
    printf("                                         %d",lt->valor);       
	
	printf("                %d",lt->valor);
	
	printf("                 %d",lt->valor);
    
    
}
 else if (tamanho>1){
	
	lt = d->ponteiro_anterior;
	
	printf("                                         %d",lt->valor);
		
	printf("                %d",d->valor);
        
     lt = d->ponteiro_proximo;
	    
	printf("                 %d",lt->valor);
           
    
}

		printf("\n");		
		
		
	printf("                 %c      %c",178,178);
	printf("     %c              %c",178,178);
	printf("     %c      %c",178,178);
	
		printf("\n");		
		
		printf("                 %c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178);

		printf("     %c              %c",178,178);
				
		printf("     %c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178);

		printf("\n");

		printf("                              %c              %c",178,178);
				
		printf("\n");
		
		printf("                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
			


	
	
	printf("\n");
	printf("\n");
	printf("\n");
	
			printf("                 ANTERIOR    |     ATUAL      |     PROXIMO");
			
			
		
	
			printf("\n");
			printf("\n");
			printf("\n");
			//printf("                           Aguarde...\n");
			
			system("pause");
}


//FIM------------------------------------------------------LISTA3-------------------------------------------------------------------------------------------------------



void Incluir(int opcao){

	int valor;
	carregar_lista();
	
	if (tamanho == 0){
		// se a lista estiver vazia
		//vai inserir no inicio
		
			system("cls");
		
		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("     A LISTA ESTA VAZIA, POR ISSO O VALOR SERA INCLUIDO NO INICIO.   ");
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
			Listar1();
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
        printf("                      Escolha uma opcao para incluir:\n\n");
        printf("             _______________________________________________________\n");
        printf("\n");
		printf("\n");
		printf("                          1 - Incluir no inicio\n");
		printf("                          2 - Incluir no fim\n");
		printf("                          3 - Incluir em posicao especifica\n");
		printf("\n");
		printf("\n                          ");
		scanf("%i", &inc);
		switch (inc){

		case(1) :
		
			//INCLUI NO INICIO
			
			Incluir_inicio(inc);
			Listar1();
			break;

		case(2) :
			//INCLUI NO FIM
			Incluir_fim(inc);
			Listar2();
			break;

		case(3) :
		
			//INCLUI EM POSICAO ESPECIFICA
			
			Incluir_posicao_especifica(inc);
			
			
			if(	flag_lista == 3){
				
			Listar3();	
			}
			else if(flag_lista == 1){
			
			Listar1();
			}
			      			
			break;


		default:
			printf("                                     OPCAO INVALIDA!!!\n");
			printf("                        Por favor, verifique novamente as opcoes.\n");
			pause(1.5);

		}

system("cls");

}

    
    
	
    
}
int main(void){
	int y;
	int opcao=4;
	
	b:
			Incluir(opcao);
			
    goto b;
    
}
    
    

