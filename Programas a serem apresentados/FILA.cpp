#include<stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#define MAX 5


//prototipos das funçoes
void pause (float);

void Listar(int opcao);
void Listar2(int opcao);
void Adicionar(int opcao);

void Pop(int opcao);
void Pop2(int opcao);
void Loading_inicio(int flag_inicio);
int controle_entrada=0;
int controle_entrada2=0;
int controle_saida=6;
int controle_saida2=6;
int flag_inicio;
int cont;
int flag_controle_total_fila = 0;
int flag_text=0;
int flag_text2=0;
int flag_tamanho=0;
int tamanho=MAX;
int tamanho2=MAX;
int controle_exibicao = 0;
int controle_exibicao2 = 0;
int total_fila=0;
int total_fila2=0;
int situacao=0;
int situacao2=0;
char resposta[2];
char resposta2[2];

int vetor_Fila[MAX];
int vetor_Fila2[MAX];
int ctrl_exibicao[MAX];
int ctrl_exibicao2[MAX];

int vetor_idade[MAX];
int vetor_idade2[MAX];


int main (){
	
	
int i=0;
int opcao=0;


	
printf(" \n");


if (flag_inicio==0){
Loading_inicio(flag_inicio);
}

for(int y=0; y<MAX; y++){
	
	 vetor_Fila[y]=0;
}

for(int y=0; y<MAX; y++){
	
	 vetor_Fila2[y]=0;
}


for(int y=0; y<	MAX; y++){
	
		ctrl_exibicao[y]=0;
}	



for(int y=0; y<	MAX; y++){
	
		ctrl_exibicao2[y]=0;
}	



for(int y=0; y<MAX; y++){
	
	 vetor_idade[y]=0;
}


for(int y=0; y<MAX; y++){
	
	 vetor_idade2[y]=0;
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
		printf("                          1 - Adicionar a FILA\n");
		printf("                          2 - Movimentar FILA\n");
		printf("                          3 - Listar FILA\n");
		printf("                          4 - Sair\n");
		printf("\n");
		printf("\n                          ");
		scanf("%i", &opcao);
		switch (opcao){

		case(1) :
			Adicionar(opcao);
			break;

		case(2) :
		
		if(total_fila2>0){
			
			Pop2(opcao);
			
			}
			
			else if(total_fila2==0){
			
			Pop(opcao);	
				
			}
			break;

		case(3) :
			system("cls");
			flag_text=1;
			flag_text2=1;
			
			if(total_fila2>0){
			
			Listar2(opcao);
			printf("\n\n\n");
			
			printf("        + %i pessoa(s) aguardando na fila convencional", total_fila);
			
			pause(2.0);
			}
			else{
				
			Listar2(opcao);
			Listar(opcao);
			}
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
void pause (float delay1) {

   if (delay1<0.001) return; // pode ser ajustado e/ou evita-se valores negativos.

   float inst1=0, inst2=0;

   inst1 = (float)clock()/(float)CLOCKS_PER_SEC;

   while (inst2-inst1<delay1) inst2 = (float)clock()/(float)CLOCKS_PER_SEC;

   return;

}

void Adicionar(int opcao){

	system("cls");
	int i = 0;
	int idade =0;
	do{
		
	 idade =0;
	
			system("cls");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("                   ADICIONAR A FILA - DIGITE A IDADE "); 
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| IDADE: |      ");
			scanf("%i", &idade);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
	if(idade!= 0){
		
		break;
	}
	
	}while(2>1);
	do{
		
		
		if(idade<65){
		if(total_fila <tamanho){
			situacao=0;
		}
		else if(total_fila ==tamanho){
			situacao=1;
		}
		if (situacao==1){
			
			system("cls");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("           A FILA ESTA CHEIA, MOVIMENTE-A PARA DESOCUPA-LA.   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
					
				
				
			Listar(opcao);
			break;
		}
		else if(situacao==0){
			
		do{
			
			
		
			if(vetor_Fila[controle_entrada]==0  ){
				
			vetor_idade[controle_entrada]=idade;	
				
			system("cls");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("                   ADICIONAR A FILA - (valores entre 0 e 10)   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| POSICAO DA FILA: |      ");
			printf("%i", controle_entrada);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| VALOR: |      ");
			scanf("%i", &vetor_Fila[controle_entrada]);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
		}
		
		if(vetor_Fila[controle_entrada]>0 && vetor_Fila[controle_entrada]<10){
			
			break;
		}
		else{
			vetor_Fila[controle_entrada]=0;
		}
		}while(2>1);
				
				total_fila+=1;
				
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
			
			printf(" \n");
			printf(" \n");
			printf(" \n");
			printf("                     Adicionado a FILA com sucesso!!!\n");
			
			

			pause(1);
			
			
			Listar(opcao);
			
			
			
			pause(1.5);
			
			
			system("cls");
			break;
		}
			
//----------------------------------------------------------------------------------------------------------------------------------------------------------------			
			
			
			}else if (idade>=65){
			
			
			
			if(total_fila2 <tamanho2){
			situacao2=0;
		}
		else if(total_fila2 ==tamanho2){
			situacao2=1;
		}
		if (situacao2==1){
			
			system("cls");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("           A FILA ESTA CHEIA, MOVIMENTE-A PARA DESOCUPA-LA.   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
					
				
				
			Listar2(opcao);
			break;
		}
		else if(situacao2==0){
			
		
			do{
			
			if(vetor_Fila2[controle_entrada2]==0  ){
				
			vetor_idade2[controle_entrada2]=idade;
				
				
			system("cls");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("             ADICIONAR A FILA PREFERENCIAL - (valores entre 0 e 10)   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| POSICAO DA FILA: |      ");
			printf("%i", controle_entrada2);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| VALOR: |      ");
			scanf("%i", &vetor_Fila2[controle_entrada2]);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
		}
		
		if(vetor_Fila2[controle_entrada2]>0 && vetor_Fila2[controle_entrada2]<10){
			
			break;
		}
		else{
			vetor_Fila2[controle_entrada2]=0;
		}
		}while(2>1);
				
				total_fila2+=1;
				
			controle_exibicao2+=1;
			ctrl_exibicao2[controle_entrada2]=controle_exibicao2;
			
			
					
			
			
		
			if (controle_saida2==6){
				
				controle_saida2=i;
			}
			
			if(controle_entrada2<=4){
				
				controle_entrada2+=1;
			}
			if(controle_entrada2==5){
				
				controle_entrada2=0;
			}
			
			printf(" \n");
			printf(" \n");
			printf(" \n");
			printf("                     Adicionado a FILA com sucesso!!!\n");
			
			

			pause(1);
			
			
			Listar2(opcao);
			
			
			
			pause(1.5);
			
			
			system("cls");
			break;
		
		}

}

			} while (2>1);

}


		
		
	
	void Pop(int opcao){

	system("cls");
	int i = 0;
	
	do{
		if(total_fila ==0){
			situacao=0;
		}
		else if(total_fila >0){
			situacao=1;
		}
		if (situacao==0){
		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("     A FILA ESTA VAZIA DE UM 'ADICIONAR A FILA' PARA ACRESCENTAR DADOS.   ");
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
			printf("                               MOVIMENTAR FILA   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| POSICAO A SAIR: |      ");
			printf("%i", controle_saida);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| VALOR: |      ");
			printf("%i", vetor_Fila[controle_saida]);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| IDADE: |      ");
			printf("%i", vetor_idade[controle_saida]);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf(" \n");
			printf(" \n");
			printf(" \n");
			printf(" \n");		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("                   TEM CERTEZA QUE DESEJA MOVIMENTAR? ( S/N )  ");
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
			printf("                  Movimento de FILA cancelado, sem alteracoes na FILA!!!\n");
			
			
			

			pause(1);
			if(total_fila2>0){
			
			Listar2(opcao);
			printf("\n\n\n");
			
			printf("        + %i pessoa(s) aguardando na fila convencional", total_fila);
			
			pause(2.0);
			}
			else{
				
			Listar2(opcao);
			Listar(opcao);
			}
			
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
			printf("                  Movimentacao efetuada com sucesso!!!\n");
			
			
			
			

			pause(1);
		
				if(	total_fila==0){
				total_fila=0;
			}else{
				
			total_fila-=1;
			}
			
			
			vetor_Fila[controle_saida]=0;
			
			for(int aq =0 ; aq<=tamanho;aq++){
			ctrl_exibicao[aq]=ctrl_exibicao[aq]-1;

			
			
		}
		controle_exibicao = total_fila;
		
			if(controle_exibicao == 1){
				controle_exibicao = 1;
			}
			else
			if(total_fila==0){
				controle_entrada=0;
				controle_saida=6;
				controle_exibicao =1;
				
			
			
			}
			else if(controle_saida == 4){
				
				controle_saida=6;
				
				
				
				
			}
			
			else if (controle_saida !=6 && total_fila==0){
				
				controle_saida=6;
			}
			
			else if (controle_saida<4){
			controle_saida+=1;
			
			}
			
			
			if(total_fila ==1 && vetor_Fila[controle_saida]==0){
				
				
				controle_saida=0;
			}
				Listar2(opcao);
			printf("\n\n\n");
			
			printf("        + %i pessoa(s) aguardando na fila convencional", total_fila);
			
			pause(2.0);
			}
			else{
				
			Listar2(opcao);
			Listar(opcao);
			}
			
			system("cls");
			printf(" \n");
			printf(" \n");
			printf(" \n");
			printf("                 Movimentacao efetuada com sucesso!!!\n");
			
			if(total_fila2>0){
			
			Listar2(opcao);
			printf("\n\n\n");
			
			printf("        + %i pessoa(s) aguardando na fila convencional", total_fila);
			
			pause(2.0);
			}
			else{
				
			Listar2(opcao);
			Listar(opcao);
			}
			
				printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("                     So mais um pouquinho...\n");
			
			pause(1.5);


			system("cls");
			
			break;
				}
		
				
				
	}while(2>1);
			
		
			
			
			
		}
			break;
			} while (2>1);

		
		}
		
//fim pop--------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	void Pop2(int opcao){

	system("cls");
	int i = 0;
	
	do{
		if(total_fila2 ==0){
			situacao2=0;
		}
		else if(total_fila2 >0){
			situacao2=1;
		}
		if (situacao2==0){
		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("     A FILA ESTA VAZIA DE UM 'ADICIONAR A FILA' PARA ACRESCENTAR DADOS.   ");
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
		else if(situacao2==1){
			
			do{
				
			system("cls");	
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("                               MOVIMENTAR FILA   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| POSICAO A SAIR: |      ");
			printf("%i", controle_saida2);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| VALOR: |      ");
			printf("%i", vetor_Fila2[controle_saida2]);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| IDADE: |      ");
			printf("%i", vetor_idade2[controle_saida2]);
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf(" \n");
			printf(" \n");
			printf(" \n");
			printf(" \n");		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("                   TEM CERTEZA QUE DESEJA MOVIMENTAR? ( S/N )  ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 195, 180);
			printf("| RESPOSTA: |      ");
			scanf(" %[^\n]s", resposta2);
			strlwr(resposta2);
			if(!strcmp(resposta2,"s") || !strcmp(resposta2,"n")){
				
				if(!strcmp(resposta2,"n")){
					
					
			printf(" \n");
			printf(" \n");
			printf(" \n");
			printf("                  Movimento de FILA cancelado, sem alteracoes na FILA!!!\n");
			
			
			

			pause(1);
			if(total_fila2>0){
			
			Listar2(opcao);
			printf("\n\n\n");
			
			printf("        + %i pessoa(s) aguardando na fila convencional", total_fila);
			
			pause(2.0);
			}
			else{
				
			Listar2(opcao);
			Listar(opcao);
			}
			
			pause(1.5);


			system("cls");
			
			break;
				}
				else if(!strcmp(resposta2,"s")){
					
				
				
					
					
			printf(" \n");
			printf(" \n");
			printf(" \n");
				
					
			printf(" \n");
			printf(" \n");
			printf(" \n");
			printf("                  Movimentacao efetuada com sucesso!!!\n");
			
			
			
			

			pause(1);
		
				if(	total_fila2==0){
				total_fila2=0;
			}else{
				
			total_fila2-=1;
			}
			
			
			vetor_Fila2[controle_saida2]=0;
			
			for(int aq =0 ; aq<=tamanho2;aq++){
			ctrl_exibicao2[aq]=ctrl_exibicao2[aq]-1;

			
			
		}
		controle_exibicao2 = total_fila2;
		
			if(controle_exibicao2 == 1){
				controle_exibicao2 = 1;
			}
			else
			if(total_fila2==0){
				controle_entrada2=0;
				controle_saida2=6;
				controle_exibicao2 =1;
				
			
			
			}
			else if(controle_saida2 == 4){
				
				controle_saida2=6;
				
				
				
				
			}
			
			else if (controle_saida2 !=6 && total_fila2==0){
				
				controle_saida2=6;
			}
			
			else if (controle_saida2<4){
			controle_saida2+=1;
			
			}
			
			
			if(total_fila2 ==1 && vetor_Fila2[controle_saida2]==0){
				
				
				controle_saida2=0;
			}
			
			if(total_fila2>0){
			
			Listar2(opcao);
			printf("\n\n\n");
			
			printf("        + %i pessoa(s) aguardando na fila convencional", total_fila);
			
			pause(2.0);
			}
			else{
				
			Listar2(opcao);
			Listar(opcao);
			}
			
			
			system("cls");
			printf(" \n");
			printf(" \n");
			printf(" \n");
			printf("                 Movimentacao efetuada com sucesso!!!\n");
			
			if(total_fila2>0){
			
			Listar2(opcao);
			printf("\n\n\n");
			
			printf("        + %i pessoa(s) aguardando na fila convencional", total_fila);
			
			pause(2.0);
			}
			else{
				
			Listar2(opcao);
			Listar(opcao);
			}
			
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
	
//fimpop2=========================================================================================================================================================	
	void Listar(int opcao){

	
	printf("\n");
	printf("\n");

	if(total_fila==0){
		
		
		
		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("     A FILA ESTA VAZIA DE UM 'ADICIONAR A FILA' PARA ACRESCENTAR DADOS.   ");
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
			printf("                             A FILA CONTEM DADOS.   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			
			flag_text=0;
		}
		
		
			
			printf("\n");
			printf("\n");
	

	for (int l1 = 0; l1<tamanho; l1++){

if(vetor_Fila[l1]>0){

		


			

			printf("      %c        ",1);
				
}

	}
	
		printf("\n");
	
		for (int l2 = 0; l2<tamanho; l2++){

if(vetor_Fila[l2]>0){

		


			

			printf("      |       /");
				
}

	}
	
		printf("\n");
	
		for (int l3 = 0; l3<tamanho; l3++){

if(vetor_Fila[l3]>0){

		


			

			printf("    %c%c%c%c%c%c%c%c%c  ",178,178,178,178,178,178,178,178,178);
}

	}
	
		printf("\n");
		


for(int ct= 1;ct<=tamanho;ct++){
		for (int l4 = 0; l4<tamanho; l4++){

		

			
	if(vetor_Fila[l4]>0 && ctrl_exibicao[l4]==(ct)){

		
			
			printf("       %i       ", vetor_Fila[l4],ctrl_exibicao[l4]);
}                        

}

	}
	
	
		printf("\n");

		
	for (int l5 = 0; l5<tamanho; l5++){

if(vetor_Fila[l5]>0){

		


			

			printf("  \\ %c%c%c%c%c%c%c%c%c  ",178,178,178,178,178,178,178,178,178);
				
}

	}
	
		printf("\n");
		
			printf("\n");
		
		printf("\n");
		
		
		for(int ct= 1;ct<=tamanho;ct++){
		for (int l54 = 0; l54<tamanho; l54++){

		

			
	if(vetor_Fila[l54]>0 && ctrl_exibicao[l54]==(ct)){

		if(vetor_idade[l54]>10){
		
			printf("    idade: %i  ", vetor_idade[l54]);
		
		}	
		
		else if(vetor_idade[l54]<10){
		
			printf("    idade: 0%i  ", vetor_idade[l54]);
		
		}	
}                      
}                        
}                        



	
	
		printf("\n");
	
		printf("\n");
		
	for (int l65 = 0; l65<tamanho; l65++){

if(vetor_Fila[l65]>0){

		


			

			printf("    %c%c%c%c%c%c%c%c%c  ",178,178,178,178,178,178,178,178,178);
				
}

	}
	
		printf("\n");
		
	for (int l6 = 0; l6<tamanho; l6++){

if(vetor_Fila[l6]>0){

		


			

			printf("     |    |    ");
				
}

	}
		printf("\n");
		for (int l7 = 0; l7<tamanho; l7++){

if(vetor_Fila[l7]>0){

		


			

			printf("     /    \\    ");
				
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

//FIM LISTAR 1========================================================================================================================================================================

	void Listar2(int opcao){

	
	printf("\n");
	printf("\n");

	if(total_fila2==0){
		
		
		
		
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("                       A FILA PREFERENCIAL ESTA VAZIA.   ");
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
		
		if(flag_text2==1){
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			printf("                       A FILA PREFERENCIAL CONTEM DADOS.   ");
			printf(" \n");
			printf("%c-----------------------------------------------------------------------%c\n", 218, 191);
			
			flag_text2=0;
		}
		
		
			
			printf("\n");
			printf("\n");
	

	for (int l1 = 0; l1<tamanho2; l1++){

if(vetor_Fila2[l1]>0){

		


			

			printf("      %c        ",1);
				
}

	}
	
		printf("\n");
	
		for (int l2 = 0; l2<tamanho2; l2++){

if(vetor_Fila2[l2]>0){

		


			

			printf("      |       /");
				
}

	}
	
		printf("\n");
	
		for (int l3 = 0; l3<tamanho2; l3++){

if(vetor_Fila2[l3]>0){

		


			

			printf("    %c%c%c%c%c%c%c%c%c  ",178,178,178,178,178,178,178,178,178);
}

	}
	
		printf("\n");
		


for(int ct= 1;ct<=tamanho2;ct++){
		for (int l4 = 0; l4<tamanho2; l4++){

		

			
	if(vetor_Fila2[l4]>0 && ctrl_exibicao2[l4]==(ct)){

		
			
			printf("       %i       ", vetor_Fila2[l4],ctrl_exibicao2[l4]);
}                        

}

	}
	
	
		printf("\n");

		
	for (int l5 = 0; l5<tamanho2; l5++){

if(vetor_Fila2[l5]>0){

		


			

			printf("  \\ %c%c%c%c%c%c%c%c%c  ",178,178,178,178,178,178,178,178,178);
				
}

	}
	
		printf("\n");
		
		printf("\n");
		
		
		for(int ct= 1;ct<=tamanho2;ct++){
		for (int l54 = 0; l54<tamanho2; l54++){

		

			
	if(vetor_Fila2[l54]>0 && ctrl_exibicao2[l54]==(ct)){

		
			
			printf("    idade: %i  ", vetor_idade2[l54]);
}                        

}

	}
	
		printf("\n");
	
		printf("\n");
		
	for (int l65 = 0; l65<tamanho2; l65++){

if(vetor_Fila2[l65]>0){

		


			

			printf("    %c%c%c%c%c%c%c%c%c  ",178,178,178,178,178,178,178,178,178);
				
}

	}
	
		printf("\n");
		
	for (int l6 = 0; l6<tamanho2; l6++){

if(vetor_Fila2[l6]>0){

		


			

			printf("     |    |    ");
				
}

	}
		printf("\n");
		for (int l7 = 0; l7<tamanho2; l7++){

if(vetor_Fila2[l7]>0){

		


			

			printf("     /    \\    ");
				
}

	}
	
	printf("\n");
	printf("\n");
	
		printf("\n");
			
	pause(2.5);
	
}
}


