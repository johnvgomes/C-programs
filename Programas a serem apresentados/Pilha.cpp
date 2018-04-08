#include<stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#define MAX 5


//prototipos das funçoes
void pause (float);

void Listar(int opcao);
void Push(int opcao);

void Pop(int opcao);
void Loading_inicio(int flag_inicio);

int flag_inicio;
int flag_text=0;
int flag_tamanho=0;
int tamanho=MAX;
int total_pilha;
int situacao=0;
char resposta[2];

int vetor_Pilha[MAX];


int main (){
	
	
int i=0;
int opcao=0;


	
printf(" \n");


if (flag_inicio==0){
Loading_inicio(flag_inicio);
}

for(int y=0; y<MAX; y++){
	
	 vetor_Pilha[y]=0;
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
		printf("                          1 - Push (EMPILHA)\n");
		printf("                          2 - POP (DESEMPILHA)\n");
		printf("                          3 - Listar Pilha\n");
		printf("                          4 - Sair\n");
		printf("\n");
		printf("\n                          ");
		scanf("%i", &opcao);
		switch (opcao){

		case(1) :
			Push(opcao);
			break;

		case(2) :
			
			Pop(opcao);
			break;

		case(3) :
			system("cls");
			flag_text=1;
			Listar(opcao);
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
   	printf("\n");
   	printf("\n");
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

void Push(int opcao){

	system("cls");
	int i = 0;
	
	do{
		if(total_pilha <tamanho){
			situacao=0;
		}
		else if(total_pilha >tamanho){
			situacao=1;
		}
		if (situacao==1){
			
			system("cls");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("           A PILHA ESTA CHEIA, DE UM 'POP' PARA DESEMPILHAR DADOS.   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
		
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("                           Aguarde...\n");
				
				
			Listar(opcao);
			break;
		}
		else if(situacao==0){
			
			do{
			
			
			if(total_pilha ==0){
				total_pilha=1;
			}
			i= (total_pilha - 1);
			system("cls");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("                                 PUSH - EMPILHAR   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| POSICAO A SER EMPILHADO: |      ");
			printf("%i", i);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| VALOR: |      ");
			scanf("%i", &vetor_Pilha[i]);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			
		}while(vetor_Pilha[i] <=0);
				
				total_pilha+=1;
				
				
			
			
		}
			
			printf(" \n");
			printf(" \n");
			printf(" \n");
			printf("                         PUSH efetuado com sucesso!!!\n");
			
			
			

			pause(1);
			
			
			Listar(opcao);
			
			
			
			pause(1.5);
			
			

			system("cls");
			break;
			} while (2>1);

		
		}
		
	void Pop(int opcao){

	system("cls");
	int i = 0;
	
	do{
		if(total_pilha ==0){
			situacao=0;
		}
		else if(total_pilha >0){
			situacao=1;
		}
		if (situacao==0){
		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("           A PILHA ESTA VAZIA DE UM 'PUSH' PARA EMPILHAR DADOS.   ");
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
				
		
			i= (total_pilha - 2);
			system("cls");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("                               POP - DESEMPILHAR   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| POSICAO A SER DESEMPILHADO: |      ");
			printf("%i", i);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| VALOR: |      ");
			printf("%i", vetor_Pilha[i]);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf(" \n");
			printf(" \n");
			printf(" \n");
			printf(" \n");		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("                   TEM CERTEZA QUE DESEJA DESEMPILHAR? ( S/N )  ");
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
			printf("                         POP cancelado, sem alteracoes na pilha!!!\n");
			
			
			

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
			printf("                  POP efetuado com sucesso!!!\n");
			
			
			
			

			pause(1);
			vetor_Pilha[i]=0;
			if(	total_pilha==0){
				total_pilha=0;
			}else{
				
			total_pilha-=1;
			}
			Listar(opcao);
			
			system("cls");
			printf(" \n");
			printf(" \n");
			printf(" \n");
			printf("                  POP efetuado com sucesso!!!\n");
			
			
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

		
		}
	
	
	void Listar(int opcao){

	
	printf("\n");
	printf("\n");

	if(total_pilha==0 || total_pilha==1){
		
		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("           A PILHA ESTA VAZIA DE UM 'PUSH' PARA EMPILHAR DADOS.   ");
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
			printf("                             A PILHA CONTEM DADOS.   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			
			flag_text=0;
		}
		
		
			
			printf("\n");
			printf("\n");
			printf("                                  %c%c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178,178);
	

	for (int i = tamanho; i>=0; i--){

if(vetor_Pilha[i]>0){

		


			

			printf("\n");
			printf("                                  %c     %i   ", 178,vetor_Pilha[i]);
			printf("\n");
			printf("                                  %c%c%c%c%c%c%c%c%c",178,178,178,178,178,178,178,178,178);
		

		
}

	}
	
	printf("\n");
	printf("\n");
	
		printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("                           Aguarde...\n");
			
	pause(2.5);
}
}

