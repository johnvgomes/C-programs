#include<stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>


//prototipos das fun�oes
void pause (float);

void Listar(int opcao);
void Incluir(int opcao);
void Excluir(int opcao);
void Loading_inicio(int flag_inicio);

void carregar_struct_lista();
void teste(struct lista *p);
int tamanho_lista;


int n=0;
int controle_entrada=0;
int controle_saida=6;
int flag_inicio;
int cont;
int flag_text=0;
int flag_tamanho=0;
int tamanho;
int controle_exibicao = 0;
int total_lista=0;
int situacao=0;
char resposta[2];

int flag_anterior;
int flag_proximo;


struct lista {

int ponteiroAnterior;
int valor;
int ponteiroProximo;
};


struct lista *ptr;


int main (){




int i=0;
int opcao=0;


/*
if (flag_inicio==0){
Loading_inicio(flag_inicio);
}
*/

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
		printf("                          1 - Incluir na Lista\n");
		printf("                          2 - Excluir da Lista\n");
		printf("                          3 - Visualizar\n");
		printf("                          4 - Proximo\n");
		printf("                          5 - Anterior\n");
		printf("                          6 - Sair\n");
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
			Listar(opcao);
			break;

		case(4) :
			
			break;

		case(5) :
			
			break;

		case(6) :
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


void pause (float delay1) {

   if (delay1<0.001) return; // pode ser ajustado e/ou evita-se valores negativos.

   float inst1=0, inst2=0;

   inst1 = (float)clock()/(float)CLOCKS_PER_SEC;

   while (inst2-inst1<delay1) inst2 = (float)clock()/(float)CLOCKS_PER_SEC;

   return;

}

void teste(struct lista *p){


printf("VALOR DE P+%i --> %i",0,(p+0)->valor);

};

void carregar_struct_lista()
{
    int y;
 
    ptr =(struct lista *)malloc(1*sizeof(struct lista));
   // ptr->ant = NULL;
    //ptr->prox = NULL;
    printf("\n Digite o valor que deseja : ");
    scanf("%d", &y);
    (ptr+n)->valor = y;
    cont++;
    n+=1;
    printf("\n\n");
    
    teste(ptr);
    
			pause(1.5);
}
    


void Incluir(int opcao){

carregar_struct_lista();


/*do{
	
		
							
		
		
	system("cls");
	int i = 0;	
	

	do{
		
	
			if(ptr[controle_entrada].valor==0  ){
				
			
			
			printf("%c-----------------------------------------------------------------------%c\n",218,191);
			printf("                           INCLUIR NA LISTA   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n",195,180);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n",195,180);
			printf("| Valor:   |      " );
			scanf(" %i", &ptr[controle_entrada].valor);
			}
	
		}while(ptr[controle_entrada].valor <=0 || ptr[controle_entrada].valor <=10);
		
	
			total_lista+=1;
				
			controle_exibicao+=1;
			
			ctrl_exibicao[controle_entrada]=controle_exibicao;
			
		
		
			
		
			if (controle_saida==6){
				
				controle_saida=i;
			}
			
			if(controle_entrada<=4){
				
				controle_entrada+=1;
			}
			if(controle_entrada==5){
				
				controle_entrada=0;
			}
			
			int gx = controle_entrada;
			
			if (gx == 0){
				
				gx =6;
				
			}
			
			if(total_lista==1){
				
			ptr[gx-1].ponteiroAnterior = ptr[gx-1].valor;
			
			ptr[gx-1].ponteiroProximo = ptr[gx-1].valor;
			
			}
			if(total_lista >1){
				int jv=0;
				int ja=0;
				int total_exibido=0;
				
				for(int ct= 1;ct<=tamanho;ct++){
				for (int i =0;i<tamanho;i++){


					jv=i;
					ja=i;
					
					if(total_lista==(total_exibido+1)){
						
						jv=-1;
					}
					
					
			
					if(i<tamanho && (ctrl_exibicao[i]==(ct))){	
						
						int flag_j =0;
						for(int j=0; j<tamanho;j++){
							
							if(((ptr+(j-1))->valor) >0 && ja-1!=j-1 && flag_j==0){
								
								
								
						ptr[j-1].ponteiroAnterior = (ptr+(ja-1))->valor;
								flag_j=1;
							}
						}
						
						
							int flag_ji =0;
						for(int ji=0; ji<tamanho;ji++){
							
							while(((ptr+(jv+1))->valor) == 0  ){
								
								
								
								if(jv==4){
									
									
									jv==-1;
								}
								jv++;
								
							}
						
							
						if(((ptr+(ji-1))->valor) >0 && ((ptr+(jv+1))->valor) >0 &&  ji-1 !=ja-1 && flag_ji==0){
						
								
								
						ptr[ji-1].ponteiroProximo = (ptr+(jv+1))->valor;
						
						printf("\n( %i ) -> ponteiro proximo esta na posicao ptr+(%i) = %i",ptr[ji-1].valor,jv+1,(ptr+(jv+1))->valor);
						
						total_exibido+=1;
								flag_ji=1;
							}
						}
					
						
					
						
					}
			}
	 }
	}
			printf(" \n");
			printf(" \n");
			printf(" \n");
			printf("                      Adicionado a LISTA com sucesso!!!\n");
			
			

			pause(1);
			
			
			Listar(opcao);
			
			
			
			pause(1.5);
			
			
			system("cls");
			break;
		
		} while (2>1);
*/
	
		
	}


		
	void Excluir(int opcao){
		
		/*
struct lista *ptr;

		
		
		
		
		
		system("cls");
	int i = 0;
	
	do{
		if(total_lista ==0){
			situacao=0;
		}
		else if(total_lista >0){
			situacao=1;
		}
		if (situacao==0){
		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("        A LISTA ESTA VAZIA DE UM 'INCLUIR' PARA ACRESCENTAR DADOS.   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			
				printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("                           Aguarde...\n");
			
			pause(2.5);
				
				
			break;
		}
		
		
		
		else if(situacao==1){
			
			do{
				
		
			
			system("cls");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("                          EXCLUIR VALOR DA LISTA   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| POSICAO A SAIR: |      ");
			printf("%i", controle_saida);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| VALOR: |      ");
			printf("%i", ptr[controle_saida].valor);
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
			if(!strcmp(resposta,"s") || !strcmp(resposta,"n")){
				
				if(!strcmp(resposta,"n")){
					
					
			printf(" \n");
			printf(" \n");
			printf(" \n");
			printf("                  Exclusao de valor cancelado, sem alteracoes na LISTA!!!\n");
			
			
			

			pause(1);
			
			Listar(opcao);
			
			pause(1.5);


			system("cls");
			
			break;
				}
				else if(!strcmp(resposta,"s")){
					
				
				
					
					
			printf(" \n");
			printf(" \n");
			printf(" \n");
				
					
			printf(" \n");
			printf(" \n");
			printf(" \n");
			printf("                  Exclusao efetuada com sucesso!!!\n");
			
			
			
			

			pause(1);
		
				if(	total_lista==0){
				total_lista=0;
			}else{
				
			total_lista-=1;
			}
			
			
			ptr[controle_saida].valor=0;
			
			for(int aq =0 ; aq<=tamanho;aq++){
			ctrl_exibicao[aq]=ctrl_exibicao[aq]-1;

			
			
		}
		controle_exibicao = total_lista;
		
			if(controle_exibicao == 1){
				controle_exibicao = 1;
			}
			else
			if(total_lista==0){
				controle_entrada=0;
				controle_saida=6;
				controle_exibicao =1;
				
			
			
			}
			else if(controle_saida == 4){
				
				controle_saida=6;
				
				
				
				
			}
			
			else if (controle_saida !=6 && total_lista==0){
				
				controle_saida=6;
			}
			
			else if (controle_saida<4){
			controle_saida+=1;
			
			}
			
			
			if(total_lista ==1 && ptr[controle_saida].valor==0){
				
				
				controle_saida=0;
			}
			
			if(total_lista >1){
				int jv=0;
				int ja=0;
				int total_exibido=0;
				
				for(int ct= 1;ct<=tamanho;ct++){
				for (int i =0;i<tamanho;i++){


					jv=i;
					ja=ct;
					
					if(total_lista==(total_exibido+1)){
						
						jv=-1;
					}
					
					
			
					if(i<tamanho && (ctrl_exibicao[i]==(ct))){	
						
						int flag_j =0;
						for(int j=0; j<tamanho;j++){
							
							if(((ptr+(j-1))->valor) >0 && ja-1!=j-1 && flag_j==0){
								
								
								
						ptr[j-1].ponteiroAnterior = (ptr+(ja-1))->valor;
								flag_j=1;
							}
						}
						
						
							int flag_ji =0;
						for(int ji=0; ji<tamanho;ji++){
							
							while(((ptr+(jv+1))->valor) == 0 ){
								
								jv++;
							}
						
							
							if(((ptr+(ji-1))->valor) >0 && ((ptr+(jv+1))->valor) >0 &&  ji-1 !=ja-1 && flag_ji==0){
								
								
						ptr[ji-1].ponteiroProximo = (ptr+(jv+1))->valor;
						
						printf("\n( %i ) -> ponteiro proximo esta na posicao ptr+(%i) = %i",ptr[ji-1].valor,jv+1,(ptr+(jv+1))->valor);
						
								flag_ji=1;
							}
						}
					
						
					
						
						total_exibido+=1;
					}
			}
		}
	}
			
		
			Listar(opcao);
			
			system("cls");
			printf(" \n");
			printf(" \n");
			printf(" \n");
			printf("                 Exclusao efetuada com sucesso!!!\n");
			
			
			Listar(opcao);
			
				printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("                     So mais um pouquinho...\n");
			
			pause(1.5);


			system("cls");
			
			break;
				}
		}
				
				
	}while(2>1);
			
		
			
			
			
		}
			break;
			} while (2>1);
*/
		
		};
	
	
	
	
	void Listar(int opcao){
		
		struct lista *ptr;

	

	printf("\n");
	printf("\n");

	if(total_lista==0){
		
		
		
		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("     A LISTA ESTA VAZIA DE UM 'ADICIONAR A FILA' PARA ACRESCENTAR DADOS.   ");
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
		
		if(flag_text==1){
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("                             A LISTA CONTEM DADOS.   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			
			flag_text=0;
		}
		
		
				teste(ptr);
			printf("\n");
			printf("\n");
			
			
	int exibe_atual=0;	
	
	if(controle_entrada==0){
		
	exibe_atual=5;
	}
	else{
	
	exibe_atual=controle_entrada;	
		
	}


	for (int l1 = 0; l1<tamanho; l1++){
		

if(((ptr+l1)->valor) > 0 && l1 ==(exibe_atual-1)){

		


			

			printf("                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c        ",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
				
}

	}
	
		printf("\n");
	
		for (int l2 = 0; l2<tamanho; l2++){

if(((ptr+l2)->valor) > 0 && l2 ==(exibe_atual-1)){

		


			

			printf("                              %c              %c",178,178);
				
}

	}
	
		printf("\n");
	
		for (int l3 = 0; l3<tamanho; l3++){

if(((ptr+l3)->valor) > 0 && l3 ==(exibe_atual-1)){

		


			
			printf("                 %c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178);

			printf("     %c              %c",178,178);
			
			printf("     %c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178);
}	

	}
	
		printf("\n");
		



		for (int l4 = 0; l4<tamanho; l4++){

		
		
		                   
if(((ptr+l4)->valor)> 0 &&  l4 ==(exibe_atual-1) ){
	
	
	printf("                 %c      %c",178,178);
	printf("     %c              %c",178,178);
	printf("     %c      %c",178,178);
	
}

	}
	
	
		printf("\n");

		

	for (int l5 = 0; l5<tamanho; l5++){

if(((ptr+l5)->valor) > 0 && l5 ==(exibe_atual-1) ){
	
			


	printf("                    %i ",(ptr+l5)->ponteiroAnterior);
	
	printf("                %i ",(ptr+l5)->valor);
	
	printf("               %i ",(ptr+l5)->ponteiroProximo);
		
		
			
}  
		
}
	

	
		printf("\n");
		
		


			

	for (int l6 = 0; l6<tamanho; l6++){

if(((ptr+l6)->valor && l6 ==(exibe_atual-1)) > 0 ){

			
	printf("                 %c      %c",178,178);
	printf("     %c              %c",178,178);
	printf("     %c      %c",178,178);
	
				
}

	}
		printf("\n");
		for (int l7 = 0; l7<tamanho; l7++){

if(((ptr+l7)->valor) > 0 && l7 ==(exibe_atual-1) ){

		
		
		printf("                 %c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178);

		printf("     %c              %c",178,178);
				
		printf("     %c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178);
}

}
		printf("\n");
		for (int l8 = 0; l8<tamanho; l8++){

if(((ptr+l8)->valor) > 0 && l8 ==(exibe_atual-1)){

		


			

		

		printf("                              %c              %c",178,178);
				
}

}
		printf("\n");
		for (int l9 = 0; l9<tamanho; l9++){

if(((ptr+l9)->valor) > 0 && l9 ==(exibe_atual-1)){

		
		


			

			printf("                              %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
			
}

	}
	
	printf("\n");
	printf("\n");
	printf("\n");
	
			printf("                 ANTERIOR    |     ATUAL      |     PROXIMO");
			
			
			
	printf("\n");	
	printf("\n");
	
		printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("                           Aguarde...\n");
			
			system("pause");
	pause(2.5);
}

}
