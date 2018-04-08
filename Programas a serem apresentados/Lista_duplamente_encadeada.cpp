#include<stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>


//OLHAR EM LISTA 4 --> EXIBICAO PROXIMO ANTERIOR

void pause (float);
void Listar();
void Listar1();
void Listar2();
void Listar3();
void Listar4();
void Listar5();
void ListarINFINITO();
void Excluir(int opcao);
void Incluir(int inc);
void Incluir_inicio(int inc);
void Incluir_fim(int inc);
void Incluir_posicao_especifica(int inc);
void Loading_inicio(int flag_inicio);
void Proximo_anterior();


int flag_text=0;
int flag_inicio;
int flag_lista =0;
int flag_primeiro_valor=0;
int flag_li_l4 = 0;
int flag_ant_proximo =0;
int flag_li_l5 =0;
int tamanho;
int posicao;
int inc;

int	cont_pt_lt4 =0;
int	cont_pt_lt41 =0;
int	cont_pt_lt5 =0; 			 	


char resposta[2];
//ESTRUTURA lista

struct lista {
	
    struct lista *ponteiro_anterior;
	int valor;
	struct lista *ponteiro_proximo;

} *lt, *a, *b, *c, *d, *e, *f, *g, *h, *ex;

//lt -->LISTA

//a --> APONTA PARA PRIMEIRA POSICAO

//b --> APONTA PARA ULTIMA POSICAO

//C -->

//d -->

//e -->

//f -->

//g --> controle do atual para LISTA 4/5

//h --> controle do atual para LISTA 4/5



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
			
			e = lt;  
			  
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
			  
			
			e = lt;  
			  
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
        				printf("\n Posicao Inexistente\n\n");
        				
        				
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
			        	
  			
  			c=a;
  			
 			while (c->ponteiro_proximo != NULL)
   			 {
     			   c = c->ponteiro_proximo;
  			 }
  			 	
 	
	
         printf("valor de p ant -- > %d\n",c->valor);
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
						        	
						        	
									e = lt;  
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
    /*
	lt = a;
    
    
    printf("                                         %d",lt->valor);       

	printf("                %d",lt->valor);
	g=d;
	
	printf("                 %d",lt->valor);
    
    */
	
		if(lt == NULL){
  			
  			lt=a;
  			
 			while (lt->ponteiro_proximo != NULL)
   			 {
     			   lt = lt->ponteiro_proximo;
  			 }
  			 	
 	
		printf("                                         %d",lt->valor);
		
  		}
  		else if(lt->ponteiro_anterior == NULL){
  			
  			lt=a;
  			
 			while (lt->ponteiro_proximo != NULL)
   			 {
     			   lt = lt->ponteiro_proximo;
  			 }
  			 	
  			 	
  			 	
  			
	printf("                                         %d",lt->valor);
		
  		}
	
  		else{
	

	lt=lt->ponteiro_anterior;	
		
	printf("                                         %d",lt->valor);
		
	
	
	}
	
	
	if(lt->ponteiro_proximo==NULL){
		
  	lt=a;
		
		
	printf("                %d",lt->valor);
	}
	
	else{
		
		lt= lt->ponteiro_proximo;
			
		
	printf("                %d",lt->valor);
		
	}
	
	g=lt;
	
	
	if(lt->ponteiro_proximo == NULL){
		
		
	lt=a;
		
	printf("                 %d",lt->valor);
	}
	else{
		
	lt = lt->ponteiro_proximo;
        
	printf("                 %d",lt->valor);
		
	}
        
    
    
}
 else if (tamanho>1){
               
               
               /*
               
	printf("                                         %d",lt->valor);
		
    lt = a;
    	
	printf("                %d",lt->valor);
    g=lt;
    lt = lt->ponteiro_proximo;
		    
        
	printf("                 %d",lt->valor);
	
	*/
           
           
	
		if(lt == NULL){
  			
  			lt=a;
  			
 			while (lt->ponteiro_proximo != NULL)
   			 {
     			   lt = lt->ponteiro_proximo;
  			 }
  			 	
 	
		printf("                                         %d",lt->valor);
		
  		}
  		else if(lt->ponteiro_anterior == NULL){
  			
  			lt=a;
  			
 			while (lt->ponteiro_proximo != NULL)
   			 {
     			   lt = lt->ponteiro_proximo;
  			 }
  			 	
  			 	
  			 	
  			
	printf("                                         %d",lt->valor);
		
  		}
	
  		else{
	

	lt=lt->ponteiro_anterior;	
		
	printf("                                         %d",lt->valor);
		
	
	
	}
	
	
	if(lt->ponteiro_proximo==NULL){
		
  	lt=a;
		
		
	printf("                %d",lt->valor);
	}
	
	else{
		
		lt= lt->ponteiro_proximo;
			
		
	printf("                %d",lt->valor);
		
	}
	
	g=lt;
	
	
	if(lt->ponteiro_proximo == NULL){
		
		
	lt=a;
		
	printf("                 %d",lt->valor);
	}
	else{
		
	lt = lt->ponteiro_proximo;
        
	printf("                 %d",lt->valor);
		
	}
        
    
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
		g=lt;
	printf("                %d",lt->valor);
    
    lt = a;	    
             
	printf("            %d",lt->valor);
           
    
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
		g=d;
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
			
}


//FIM------------------------------------------------------LISTA3-------------------------------------------------------------------------------------------------------




void Listar4()

{



system("cls");

	
		
		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("                             A LISTA CONTEM DADOS. L4   ");
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
    g=lt;
    
    printf("                                         %d",lt->valor);       
	
	printf("                %d",lt->valor);
	
	printf("                 %d",lt->valor);
    
    
}
 else if (tamanho>1){
 	
 lt=g;
    //  null 8 6 4 2 null
lt=lt->ponteiro_anterior;

if(lt == NULL){
  			
  			lt=a;
 			while (lt->ponteiro_proximo != NULL)
   			 {
     			   lt = lt->ponteiro_proximo;
  			 }
  			 	
  			 	
	lt=lt->ponteiro_anterior;
  			
	printf("                                         %d",lt->valor);
		
  		}
  		else if(lt->ponteiro_anterior == NULL){
  			
  			lt=a;
  			
 			while (lt->ponteiro_proximo != NULL)
   			 {
     			   lt = lt->ponteiro_proximo;
  			 }
  			 	
  			 	
  			 	
  			
	printf("                                         %d",lt->valor);
		
  		}
	
	
  		else{
	

	lt=lt->ponteiro_anterior;	
		
	printf("                                         %d",lt->valor);
		
	
	
	}
	
	
	if(lt->ponteiro_proximo==NULL){
		
  	lt=a;
		
		
	printf("                %d",lt->valor);
		
	}
	else{
		
		lt= lt->ponteiro_proximo;
		
		
	printf("                %d",lt->valor);
	}
	
	
 g=lt;
	
	
	
	if(lt->ponteiro_proximo == NULL){
		
		
	lt=a;
		
	printf("                 %d",lt->valor);
	}
	else{
		
	lt = lt->ponteiro_proximo;
        
	printf("                 %d",lt->valor);
		
	}
        
 	
 	
   
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
			
}


//FIM------------------------------------------------------LISTA4-------------------------------------------------------------------------------------------------------





void Listar5()

{



system("cls");

	
		
		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("                             A LISTA CONTEM DADOS. L5   ");
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
 	
 	
 lt=g;
    //  null 8 6 4 2 null
	
	lt = lt->ponteiro_proximo;
	
		if(lt == NULL){
  			
  			lt=a;
  			
 			while (lt->ponteiro_proximo != NULL)
   			 {
     			   lt = lt->ponteiro_proximo;
  			 }
  			 	
 	
		printf("                                         %d",lt->valor);
		
  		}
  		else if(lt->ponteiro_anterior == NULL){
  			
  			lt=a;
  			
 			while (lt->ponteiro_proximo != NULL)
   			 {
     			   lt = lt->ponteiro_proximo;
  			 }
  			 	
  			 	
  			 	
  			
	printf("                                         %d",lt->valor);
		
  		}
	
  		else{
	

	lt=lt->ponteiro_anterior;	
		
	printf("                                         %d",lt->valor);
		
	
	
	}
	
	
	if(lt->ponteiro_proximo==NULL){
		
  	lt=a;
		
		
	printf("                %d",lt->valor);
	}
	
	else{
		
		lt= lt->ponteiro_proximo;
			
		
	printf("                %d",lt->valor);
		
	}
	
	g=lt;
	
	
	if(lt->ponteiro_proximo == NULL){
		
		
	lt=a;
		
	printf("                 %d",lt->valor);
	}
	else{
		
	lt = lt->ponteiro_proximo;
        
	printf("                 %d",lt->valor);
		
	}
        


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
			
}


//FIM------------------------------------------------------LISTA5-------------------------------------------------------------------------------------------------------



void ListarINFINITO()

{
	
system("cls");
int op_ap;

		
			if(tamanho==0){
				
				

				
					printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
					printf("     A LISTA ESTA VAZIA DE UM 'INCLUIR' PARA ACRESCENTAR DADOS.   ");
					printf(" \n");
					printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
					
					printf("\n");
					printf("\n");
					printf("\n");
					printf("                           Aguarde...\n");
						pause(2.5);
			}
			
			
		else{
		
	 if (tamanho==1){
	 	
	 	g:
	 	Listar1();
	 	
	 	
			printf("                    (1)      |                |       (2)");
	 	
			printf("\n");
			
			printf("\n");
			printf("%c-----------------------------------------------------------------------%c\n",195,180);
			printf("                           DIGITE 3 PARA SAIR\n");
			printf("%c-----------------------------------------------------------------------%c\n",195,180);
			printf("| Opcao:  |      " );
			scanf(" %i", &op_ap);
					
					
			switch (op_ap){

		case(1) :
		
			
			goto g;
			
			break;

		case(2) :
			
			goto g;
			
			break;

		case(3) :
		
			break;
			
			


		default:
			printf("                                     OPCAO INVALIDA!!!\n");
			printf("                        Por favor, verifique novamente as opcoes.\n");
			pause(1.5);

		}
				
			
    
    
}



 if (tamanho>1){
		
		int flag_controle_1=1;
		int cont_contador=0;
		//arrumar 
		
		i:
		
		if(flag_controle_1==1){
			
		Listar1();
		
			flag_li_l4 = 0;
		flag_controle_1=2;	
		cont_contador+=1;
		goto h;
		
			}
			
		if(flag_controle_1==2){			
				
		Listar4();
				
		if(cont_contador<(tamanho-1)){
		
		cont_contador+=1;
		}
		else{	
		cont_contador=0;
		flag_controle_1=1;
			}
			
		
		goto h;
		
			}
		
			
		if(flag_controle_1==3){			
				
		Listar5();
				
		
		flag_controle_1=2;
			
		goto h;
		
			}
			
			h:
			printf("                    (1)      |                |       (2)");
	 	
			printf("\n");
			
			printf("\n");
			printf("%c-----------------------------------------------------------------------%c\n",195,180);
			printf("                           DIGITE 3 PARA SAIR\n");
			printf("%c-----------------------------------------------------------------------%c\n",195,180);
			printf("| Opcao:  |      " );
			scanf(" %i", &op_ap);
					
					
			switch (op_ap){

		case(1) :
			cont_pt_lt5=0;
			goto i;
			
			
			break;
		case(2) :
			flag_ant_proximo = 1;
			flag_controle_1=3;
			
			goto i;
			
			break;

		case(3) :
			flag_li_l4 = 0;
			flag_ant_proximo = 0;
			cont_pt_lt5=0;
			break;
			goto i;
			


		default:
			printf("                                     OPCAO INVALIDA!!!\n");
			printf("                        Por favor, verifique novamente as opcoes.\n");
			pause(1.5);
	break;
		}
		
	

	

}
}
}

//fim listainfinito--------------------------------------------------------------------------------------------------------------------------------------------------------------


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
			
			
			system("pause");
			break;

		case(2) :
			//INCLUI NO FIM
			Incluir_fim(inc);
			Listar2();
			
			
			system("pause");
			break;

		case(3) :
		
			//INCLUI EM POSICAO ESPECIFICA
			
			Incluir_posicao_especifica(inc);
			
			
			if(	flag_lista == 3){
				
			Listar3();	
			
			
			system("pause");
			}
			else if(flag_lista == 1){
			
			Listar1();
			
			system("pause");
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




void Excluir(int opcao){

	
	

	
		if (tamanho == 0){
		// se a lista estiver vazia
	
		
			system("cls");
		
		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("    A LISTA ESTA VAZIA DE UM 'INCLUIR NA LISTA' PARA ACRESCENTAR DADOS.   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("                           Aguarde...\n");
				
			pause(2.5);
				
		
			
			
	}
	
		else if (tamanho > 0){
			
				int valor=0;
	
	

		system("cls");
	
			
			valor=0;	
			int position;
			int i = 0;  
			
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
        				printf("\n Posicao Inexistente\n\n");
        				
        				
        				pause(1.5);
        				
  					  }
  					  
  					  
  				
			}while(2>1);
				
				int ps=0;
				//null  6  2   null //			
			
			system("cls");
			for(ps; ps<position-1;ps++){
				
				c=c->ponteiro_proximo;
				i++;
				
			}
			
				
	
			system("cls");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("                               EXCLUIR DA LISTA   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| POSICAO A SER EXCLUIDA: |      ");
			printf("%i", (i+1));
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| VALOR: |      ");
			printf("%i", c->valor);
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
			
			
			printf("   Movimento de lista cancelado, sem alteracoes na LISTA!!!\n");
			
			printf(" \n");
			printf(" \n");
			
			system("pause");
		}
			
			
		
			else if(!strcmp(resposta,"s")){
			
 if (tamanho == 1){  //quando so ha um valor
      	
	  
            if (c->ponteiro_proximo == NULL){
            	  printf("\n    Excluido com sucesso\n\n");
                //free desaloca espaço alocado
                free(c);
                c = a = NULL;
                
                
    			tamanho-=1;
    			
				flag_primeiro_valor=0;
			
    			printf("\n    da 1 POSICAO\n\n");
    			
    			system("pause");
                return;
                
                
    		}
    }
    
    
    
    	if (c->ponteiro_proximo == NULL)
        	//ultimo valor
        {
        	
        	printf("\nExcluido com sucesso\n\n");
        	
        	
    		// NULL 2  6 NULL
        	
        	
            c=c->ponteiro_anterior;
            
			c->ponteiro_proximo = NULL;
			
			c=c->ponteiro_proximo;
			
            free(c);
            
            tamanho-=1;
            
    		printf("\n    DA ULTIMA POSICAO\n\n");
    		
    			system("pause");
            return;
            
    
        }
		
    
		
		
		else if (c->ponteiro_anterior == NULL){
		
		
			printf("\nExcluido com sucesso\n\n");
        	
        	
    		// NULL 2  6 NULL
        	
        	ex=c;
        	
            c=c->ponteiro_proximo;
            
            
			c->ponteiro_anterior = NULL;
			a=c;
			
			free(ex);
			
            tamanho-=1;
            
    		printf("\n    DA 1 POSICAO mais de 1\n\n");
    		
    			system("pause");
            return;		
		
		}
		else{
		
		
			printf("\nExcluido com sucesso\n\n");
        	
        	
    		// NULL 2  6  8 NULL
        	
        	ex=c;
        	
            c=c->ponteiro_proximo;
            
            
			c->ponteiro_anterior = ex->ponteiro_anterior;
			
			c=ex;
			
		    c=c->ponteiro_anterior;
		    
			c->ponteiro_proximo = ex->ponteiro_proximo;
			
			a=c;
			
			free(ex);
			
            tamanho-=1;
            
    		printf("\n    DA POSICAO MEIO mais de 1\n\n");
    		
    			system("pause");
            return;		
		
		}
		
		
		
    
    
    
    
    
    
	}
		
}
	
}//FIM FUNCAO EXCLUIR



  			 /*
	    		
		
		
		
		else if (c->ponteiro_anterior == NULL){
		
		
			printf("\nExcluido com sucesso\n\n");
        	
        	
    		// NULL 2  6 NULL
        	
        	
            c=c->ponteiro_proximo;
            
			c->ponteiro_anterior = NULL;
			
			c=c->ponteiro_anterior;
			
            free(c);
            
            tamanho-=1;
            
    		printf("\n    DA 1 POSICAO mais de 1\n\n");
    		
    			system("pause");
            return;
		
		
		
		}
		
		else{
				printf("\nExcluido com sucesso\n\n");
        	
        	
    		// NULL 2 4 6 NUL
  			
  			c=a;
  		
         	if(c == NULL){
  			
  			c=a;
  			
 			while (c->ponteiro_proximo != NULL)
   			 {
     			   c = c->ponteiro_proximo;
  			 }
  			 	
 	
	
         printf("valor de p ant -- > %d\n",c->valor);
  		}
  		else if(c->ponteiro_anterior == NULL){
  			
  			c=a;
  			
 			while (c->ponteiro_proximo != NULL)
   			 {
     			   c = c->ponteiro_proximo;
  			 }
  			 	
  			 	
  			 	
  			
         printf("valor de p ant -- > %d\n",c->valor);
		
  		}
	
  		else{
	

	c=c->ponteiro_anterior;	
		
     	
	printf("valor de p ant -- > %d\n",c->valor);
		
	
	}
	
	
	if(c->ponteiro_proximo==NULL){
		
  	lt=a;
		
		
	printf("valor de c -- > %d\n",c->valor);
	}
	
	else{
		
		c= c->ponteiro_proximo;
	
		printf("valor de c -- > %d\n",c->valor);
     		
	}
	
	
	
	if(c->ponteiro_proximo == NULL){
		
		
	c=a;
		
	printf("valor de p prox -- > %d\n",lt->valor);
	}
	else{
		
	c = c->ponteiro_proximo;
        
	printf("valor de p prox -- > %d\n",lt->valor);
		
	}
  }
 			while (c->ponteiro_proximo != NULL)
   			 {
     			   c = c->ponteiro_proximo;
  			 }
  			 	
 	
	
         printf("valor de p ant -- > %d\n",c->valor);
  		}
        	
        	
         
         printf("valor de h -- > %d",h->valor);
		  printf("\n\n");
        
        	 c->ponteiro_proximo->ponteiro_anterior = c->ponteiro_anterior;
      			
			
			c->ponteiro_anterior->ponteiro_proximo = c->ponteiro_anterior;
			
               
            tamanho-=1;
            
    		printf("\n    DA  POSICAO no meio \n\n");
    		
    			system("pause");
            return;
        
	}

	*/
		    



	


void Proximo_anterior(){
	
	ListarINFINITO();

}




//fim incluir-------------------------------------------------------------------------------------------------------------------------------------------------------
		

int main (){

int i=0 ;

int opcao=0;
		
	
if (flag_inicio==0){
Loading_inicio(flag_inicio);
}
system("cls"); free(h);
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
		printf("                          1 - Incluir na Lista\n");
		printf("                          2 - Excluir da Lista\n");
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
			flag_text=1;
			Proximo_anterior();
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


    
    

