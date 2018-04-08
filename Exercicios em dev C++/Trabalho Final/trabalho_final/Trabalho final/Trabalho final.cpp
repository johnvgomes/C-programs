#include<stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#define MAX 500


//prototipos das funçoes
void pause (float);
void PrintarCliente(int opcao);
void Cadastrar(int opcao);
void Consultar(int opcao);
void AlterarCliente(int i);
void Alterar(int opcao);
void Excluir(int opcao);
void Listar(int opcao);
void Loading_inicio(int flag_inicio);

int flag_inicio;

struct cliente {
	
	int codigo;
	char nome_completo[100];	
	char sexo[2];
	int dia_nasc;
	int mes_nasc;
	int ano_nasc;
	char cpf[15];
	int telddd;
	int telefone;
	char email[100];
	int situacao_cliente;
	int flag_inicio;
	};
	
	
struct cliente cli[MAX];

int main (){
	
	
int i=0;
int opcao=0;
		
printf(" \n");


if (flag_inicio==0){
Loading_inicio(flag_inicio);
}


system("cls");

do{
            printf("\n");
    		printf("\n");
    		printf("\n");
    		
    	printf("                %c  %c  %c    %c%c%c  %c%c%c   %c%c%c%c  %c%c%c  %c%c%c  %c%c%c%c  %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);  
		printf("                %c  %c  %c     %c   %c  %c  %c  %c  %c    %c %c  %c      %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178);      
        printf("                %c  %c  %c     %c   %c%c%c   %c%c%c%c  %c%c%c  %c %c  %c%c%c    %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                %c  %c  %c     %c   %c  %c  %c  %c    %c  %c %c  %c      %c\n",178,178,178,178,178,178,178,178,178,178,178,178);
        printf("                %c%c%c%c  %c%c%c%c  %c   %c  %c  %c  %c  %c%c%c  %c%c%c  %c      %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
		
        printf("\n");
        printf("\n");
        printf("                              Escolha uma opcao:\n\n");
        printf("                 ___________________________________________\n");
        printf("\n");
        printf("\n");
        printf("                          1 - Cadastro do cliente\n");
        printf("                          2 - Alteracao dos dados do cliente\n");        
        printf("                          3 - Exclusao de clientes\n");        
        printf("                          4 - Consulta clientes\n");        
        printf("                          5 - Listar clientes cadastrados\n");        
        printf("                          6 - Sair\n");
        printf("\n");
        printf("\n                          ");
        scanf("%i", &opcao);
switch(opcao){

case(1):
Cadastrar(opcao);
break;

case(2):
Alterar(opcao);
system ("pause");
break;

case(3):
Excluir(opcao);
system ("pause");
break;

case(4):
Consultar(opcao);
system ("pause");
break;

case(5):
Listar(opcao);
system ("pause");
break;

case(6):
return(0);

default:
printf("                                     OPCAO INVALIDA!!!\n");
printf("                        Por favor, verifique navamente as opcoes.\n");
pause (1.5);

}

system("cls");
}while(2>1);

return(0);

}



//INICIO FUNCAO CADASTRAR

void Cadastrar(int opcao){

system("cls");
int i=0;

cli[i].codigo;

for (i=0;i<MAX;i++){

if(cli[i].situacao_cliente!=1){
	
cli[i].codigo=i;
cli[i].situacao_cliente=1; 


printf("%c-----------------------------------------------------------------------%c\n",218,191);
printf("                           CADASTRO DE CLIENTE   ");
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Codigo: |      " );
printf("%i", (cli[i].codigo+1));
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Nome:   |      " );
scanf(" %[^\n]s", &cli[i].nome_completo);

do{
system("cls");


printf("%c-----------------------------------------------------------------------%c\n",218,191);
printf("                           CADASTRO DE CLIENTE   ");
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Codigo: |      " );
printf("%i", (cli[i].codigo+1));
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Nome:   |      " );
printf("%s", cli[i].nome_completo);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DIGITE 'M' PARA MASCULINO E 'F' PARA FEMININO                           "); 
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Sexo:   |  "); 
scanf(" %[^\n]s", cli[i].sexo);
strlwr(cli[i].sexo);
if(!strcmp(cli[i].sexo,"m") || !strcmp(cli[i].sexo,"f")){
	break;
}
}while(2>1);

do{
system("cls");



printf("%c-----------------------------------------------------------------------%c\n",218,191);
printf("                           CADASTRO DE CLIENTE   ");
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Codigo: |      " );
printf("%i", (cli[i].codigo+1));
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Nome:   |      " );
printf("%s", cli[i].nome_completo);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DIGITE 'M' PARA MASCULINO E 'F' PARA FEMININO                           "); 
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Sexo:   |  "); 
printf("%s", cli[i].sexo);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DATA DE NASCIMENTO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Dia:   |  "); 
scanf("%i", &cli[i].dia_nasc);

if(cli[i].dia_nasc>0 && cli[i].dia_nasc<31){
	break;
}

}while(2>1);

do{
system("cls");




printf("%c-----------------------------------------------------------------------%c\n",218,191);
printf("                           CADASTRO DE CLIENTE   ");
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Codigo: |      " );
printf("%i", (cli[i].codigo+1));
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Nome:   |      " );
printf("%s", cli[i].nome_completo);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DIGITE 'M' PARA MASCULINO E 'F' PARA FEMININO                           "); 
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Sexo:   |  "); 
printf("%s", cli[i].sexo);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DATA DE NASCIMENTO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Dia:   |  "); 
printf("%i", cli[i].dia_nasc);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Mes:   |  "); 
scanf("%i", &cli[i].mes_nasc);


if(cli[i].mes_nasc>0 && cli[i].mes_nasc<=12 && ((cli[i].dia_nasc>28 && cli[i].mes_nasc!=2) || cli[i].dia_nasc<28)){
	break;
}
}while(2>1);


do{
		
system("cls");




printf("%c-----------------------------------------------------------------------%c\n",218,191);
printf("                           CADASTRO DE CLIENTE   ");
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Codigo: |      " );
printf("%i", (cli[i].codigo+1));
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Nome:   |      " );
printf("%s", cli[i].nome_completo);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DIGITE 'M' PARA MASCULINO E 'F' PARA FEMININO                           "); 
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Sexo:   |  "); 
printf("%s", cli[i].sexo);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DATA DE NASCIMENTO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Dia:   |  "); 
printf("%i", cli[i].dia_nasc);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Mes:   |  "); 
printf("%i", cli[i].mes_nasc);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Ano:   |  "); 
scanf("%i", &cli[i].ano_nasc);

if (cli[i].ano_nasc>1906 && cli[i].ano_nasc<=2016){
	break;
}

}while(2>1);

do{
	
system("cls");




printf("%c-----------------------------------------------------------------------%c\n",218,191);
printf("                           CADASTRO DE CLIENTE   ");
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Codigo: |      " );
printf("%i", (cli[i].codigo+1));
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Nome:   |      " );
printf("%s", cli[i].nome_completo);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DIGITE 'M' PARA MASCULINO E 'F' PARA FEMININO                           "); 
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Sexo:   |  "); 
printf("%s", cli[i].sexo);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DATA DE NASCIMENTO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Dia:   |  "); 
printf("%i", cli[i].dia_nasc);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Mes:   |  "); 
printf("%i", cli[i].mes_nasc);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Ano:   |  "); 
printf("%i", cli[i].ano_nasc);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| CPF:   |   " );
scanf("%s", &cli[i].cpf);
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("\n\n");

break;


}while(2>1);


do{
	
system("cls");




printf("%c-----------------------------------------------------------------------%c\n",218,191);
printf("                           CADASTRO DE CLIENTE   ");
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Codigo: |      " );
printf("%i", (cli[i].codigo+1));
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Nome:   |      " );
printf("%s", cli[i].nome_completo);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DIGITE 'M' PARA MASCULINO E 'F' PARA FEMININO                           "); 
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Sexo:   |  "); 
printf("%s", cli[i].sexo);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DATA DE NASCIMENTO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Dia:   |  "); 
printf("%i", cli[i].dia_nasc);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Mes:   |  "); 
printf("%i", cli[i].mes_nasc);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Ano:   |  "); 
printf("%i", cli[i].ano_nasc);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| CPF:    | " );
printf("%s", cli[i].cpf);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| TELEFONE PARA CONTATO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DDD:     | " );
scanf("%i", &cli[i].telddd);


if (cli[i].telddd > 0 && cli[i].telddd < 1000){
	break;
}

}while(2>1);


do{
	
system("cls");





printf("%c-----------------------------------------------------------------------%c\n",218,191);
printf("                           CADASTRO DE CLIENTE   ");
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Codigo: |      " );
printf("%i", (cli[i].codigo+1));
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Nome:   |      " );
printf("%s", cli[i].nome_completo);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DIGITE 'M' PARA MASCULINO E 'F' PARA FEMININO                           "); 
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Sexo:   |  "); 
printf("%s", cli[i].sexo);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DATA DE NASCIMENTO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Dia:   |  "); 
printf("%i", cli[i].dia_nasc);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Mes:   |  "); 
printf("%i", cli[i].mes_nasc);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Ano:   |  "); 
printf("%i", cli[i].ano_nasc);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| CPF:    | " );
printf("%s", cli[i].cpf);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| TELEFONE PARA CONTATO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DDD:    | " );
printf("%i", cli[i].telddd);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Telefone| " );
scanf("%i", &cli[i].telefone);
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("\n\n");


if (cli[i].telefone > 9999999 && cli[i].telefone <= 9999999999){
	break;
}

}while(2>1);

do{
	
	system("cls");


printf("%c-----------------------------------------------------------------------%c\n",218,191);
printf("                           CADASTRO DE CLIENTE   ");
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Codigo: |      " );
printf("%i", (cli[i].codigo+1));
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Nome:   |      " );
printf("%s", cli[i].nome_completo);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DIGITE 'M' PARA MASCULINO E 'F' PARA FEMININO                           "); 
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Sexo:   |  "); 
printf("%s", cli[i].sexo);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DATA DE NASCIMENTO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Dia:   |  "); 
printf("%i", cli[i].dia_nasc);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Mes:   |  "); 
printf("%i", cli[i].mes_nasc);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Ano:   |  "); 
printf("%i", cli[i].ano_nasc);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| CPF:    | " );
printf("%s", cli[i].cpf);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| TELEFONE PARA CONTATO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DDD:    | " );
printf("%i", cli[i].telddd);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Telefone| " );
printf("%i", cli[i].telefone);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| E-mail | " );
scanf(" %s", &cli[i].email);
printf("%c-----------------------------------------------------------------------%c\n",192,217);
printf("\n\n");


break;


}while(2>1);

printf ("Cadastro efetuado com sucesso\n");

pause (1.5);


    system("cls");
    break;
}
}


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
	
	 // 	U
	 
	 
    	printf("Baixando dados...");
    	printf("\n");
    	printf("\n");
    	printf("\n");
        printf("%c  %c\n",178,178);		
		printf("%c  %c  \n",178,178);          
        printf("%c  %c\n",178,178);
        printf("%c  %c\n",178,178);
        printf("%c%c%c%c ",178,178,178,178);
        
    	
    }
    if (cont_inicio>=13 && cont_inicio<=24){
	
	//      UL
	
	
	
    	printf("Recebendo dados...");
    		printf("\n");
    		printf("\n");
    		printf("\n");
        printf("%c  %c  %c\n",178,178,178);  
		printf("%c  %c  %c\n",178,178,178);      
        printf("%c  %c  %c\n",178,178,178);
        printf("%c  %c  %c\n",178,178,178);
        printf("%c%c%c%c  %c%c%c%c",178,178,178,178,178,178,178,178);
        
    }
    if (cont_inicio>=25 && cont_inicio<=36){
	
	//     ULT
	
    	printf("Visualizando dados...");
    		printf("\n");
    		printf("\n");
    		printf("\n");
    		
        printf("%c  %c  %c    %c%c%c\n",178,178,178,178,178,178);  
		printf("%c  %c  %c     %c\n",178,178,178,178);      
        printf("%c  %c  %c     %c\n",178,178,178,178);
        printf("%c  %c  %c     %c\n",178,178,178,178);
        printf("%c%c%c%c  %c%c%c%c  %c \n",178,178,178,178,178,178,178,178,178);
    }
    if (cont_inicio>=37 && cont_inicio<=48){ 
	
	
	//      ULTR
	
    	printf("Interpretando dados...");
    		printf("\n");
    		printf("\n");
    		printf("\n");
    		
    		
        printf("%c  %c  %c    %c%c%c  %c%c%c\n",178,178,178,178,178,178,178,178,178);  
		printf("%c  %c  %c     %c   %c  %c\n",178,178,178,178,178,178);      
        printf("%c  %c  %c     %c   %c%c%c\n",178,178,178,178,178,178,178);
        printf("%c  %c  %c     %c   %c  %c\n",178,178,178,178,178,178);
        printf("%c%c%c%c  %c%c%c%c  %c   %c  %c \n",178,178,178,178,178,178,178,178,178,178,178);
    }
    if (cont_inicio>=49 && cont_inicio<=60){
    	
	//     ULTRA
    	printf("Calculando dados...");
    		printf("\n");
    		printf("\n");
    		printf("\n");
    		
    		
        printf("%c  %c  %c    %c%c%c  %c%c%c   %c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178);  
		printf("%c  %c  %c     %c   %c  %c  %c  %c\n",178,178,178,178,178,178,178,178);      
        printf("%c  %c  %c     %c   %c%c%c   %c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178);
        printf("%c  %c  %c     %c   %c  %c  %c  %c\n",178,178,178,178,178,178,178,178);
        printf("%c%c%c%c  %c%c%c%c  %c   %c  %c  %c  %c \n",178,178,178,178,178,178,178,178,178,178,178,178,178);
    }
    if (cont_inicio>=61 && cont_inicio<=72){
    	
    
	//     ULTRAS
	
    	printf("Transferindo dados...");
    	    printf("\n");
    		printf("\n");
    		printf("\n");
        printf("%c  %c  %c    %c%c%c  %c%c%c   %c%c%c%c  %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);  
		printf("%c  %c  %c     %c   %c  %c  %c  %c  %c\n",178,178,178,178,178,178,178,178,178);      
        printf("%c  %c  %c     %c   %c%c%c   %c%c%c%c  %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c  %c  %c     %c   %c  %c  %c  %c    %c\n",178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c  %c%c%c%c  %c   %c  %c  %c  %c  %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    }
    if (cont_inicio>=73 && cont_inicio<=84){
    	
    
	//     ULTRASO
    	printf("Compilando dados...");
    	
         	printf("\n");
    	    printf("\n");
    		printf("\n");
        printf("%c  %c  %c    %c%c%c  %c%c%c   %c%c%c%c  %c%c%c  %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);  
		printf("%c  %c  %c     %c   %c  %c  %c  %c  %c    %c %c\n",178,178,178,178,178,178,178,178,178,178,178);      
        printf("%c  %c  %c     %c   %c%c%c   %c%c%c%c  %c%c%c  %c %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c  %c  %c     %c   %c  %c  %c  %c    %c  %c %c\n",178,178,178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c  %c%c%c%c  %c   %c  %c  %c  %c  %c%c%c  %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
			 }
			 if (cont_inicio>=85 && cont_inicio<=94){
	
	//     ULTRASOF
	
    	printf("Estamos quase la...");
    	
         	printf("\n");
    	    printf("\n");
    		printf("\n");
        printf("%c  %c  %c    %c%c%c  %c%c%c   %c%c%c%c  %c%c%c  %c%c%c  %c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);  
		printf("%c  %c  %c     %c   %c  %c  %c  %c  %c    %c %c  %c\n",178,178,178,178,178,178,178,178,178,178,178,178);      
        printf("%c  %c  %c     %c   %c%c%c   %c%c%c%c  %c%c%c  %c %c  %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c  %c  %c     %c   %c  %c  %c  %c    %c  %c %c  %c\n",178,178,178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c  %c%c%c%c  %c   %c  %c  %c  %c  %c%c%c  %c%c%c  %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
			 }
			 
			  if (cont_inicio>=95 && cont_inicio<=99){
	
	//     ULTRASOFT
	
    	printf("Concluido...");
    	
         	printf("\n");
    	    printf("\n");
    		printf("\n");
        printf("%c  %c  %c    %c%c%c  %c%c%c   %c%c%c%c  %c%c%c  %c%c%c  %c%c%c%c  %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);  
		printf("%c  %c  %c     %c   %c  %c  %c  %c  %c    %c %c  %c      %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178);      
        printf("%c  %c  %c     %c   %c%c%c   %c%c%c%c  %c%c%c  %c %c  %c%c%c    %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c  %c  %c     %c   %c  %c  %c  %c    %c  %c %c  %c      %c\n",178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c  %c%c%c%c  %c   %c  %c  %c  %c  %c%c%c  %c%c%c  %c      %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
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
        printf("%c  %c  %c    %c%c%c  %c%c%c   %c%c%c%c  %c%c%c  %c%c%c  %c%c%c%c  %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);  
		printf("%c  %c  %c     %c   %c  %c  %c  %c  %c    %c %c  %c      %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178);      
        printf("%c  %c  %c     %c   %c%c%c   %c%c%c%c  %c%c%c  %c %c  %c%c%c    %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c  %c  %c     %c   %c  %c  %c  %c    %c  %c %c  %c      %c\n",178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c  %c%c%c%c  %c   %c  %c  %c  %c  %c%c%c  %c%c%c  %c      %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
		
    
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

void PrintarCliente(int cod){
	
	system("cls");
	printf("\n");
	printf("\n");
	

	
int i;


		
		
printf("%c-----------------------------------------------------------------------%c\n",218,191);
printf("                           CONSULTA DE CLIENTE   ");
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Codigo: |      " );
printf("%i", (cli[cod].codigo+1));
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Nome:   |      " );
printf("%s", cli[cod].nome_completo);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DIGITE 'M' PARA MASCULINO E 'F' PARA FEMININO                           "); 
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Sexo:   |  "); 
printf("%s", cli[cod].sexo);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DATA DE NASCIMENTO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Dia:   |  "); 
printf("%i", cli[cod].dia_nasc);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Mes:   |  "); 
printf("%i", cli[cod].mes_nasc);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Ano:   |  "); 
printf("%i", cli[cod].ano_nasc);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| CPF:    | " );
printf("%s", cli[cod].cpf);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| TELEFONE PARA CONTATO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DDD:    | " );
printf("%i", cli[cod].telddd);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Telefone| " );
printf("%i", cli[cod].telefone);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| E-mail | " );
printf("%s", cli[cod].email);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",192,217);
printf("\n\n");

		
system("pause");
}

void Listar(int opcao){
	
	system("cls");
	printf("\n");
	printf("\n");
	
int i;

for(i=0;i<MAX;i++){
	
	if (cli[i].situacao_cliente == 1){
		
		
		printf("\t %i -----", cli[i].codigo+1);
		
		printf("\t %s", cli[i].nome_completo);
		printf("\n");
		printf("\n");
		
	}
	
}
	system("pause");
}

void AlterarCliente(int i){

system("cls");

cli[i].codigo;


if(cli[i].situacao_cliente==1){
	
cli[i].codigo=i;
cli[i].situacao_cliente=1; 


printf("%c-----------------------------------------------------------------------%c\n",218,191);
printf("                        ALTERACAO DO CLIENTE   ");
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Codigo: |      " );
printf("%i", (cli[i].codigo+1));
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Nome:   |      " );
scanf(" %[^\n]s", &cli[i].nome_completo);

do{
system("cls");


printf("%c-----------------------------------------------------------------------%c\n",218,191);
printf("                        ALTERACAO DO CLIENTE   ");
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Codigo: |      " );
printf("%i", (cli[i].codigo+1));
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Nome:   |      " );
printf("%s", cli[i].nome_completo);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DIGITE 'M' PARA MASCULINO E 'F' PARA FEMININO                           "); 
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Sexo:   |  "); 
scanf(" %[^\n]s", cli[i].sexo);
strlwr(cli[i].sexo);
if(!strcmp(cli[i].sexo,"m") || !strcmp(cli[i].sexo,"f")){
	break;
}
}while(2>1);

do{
system("cls");



printf("%c-----------------------------------------------------------------------%c\n",218,191);
printf("                        ALTERACAO DO CLIENTE   ");
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Codigo: |      " );
printf("%i", (cli[i].codigo+1));
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Nome:   |      " );
printf("%s", cli[i].nome_completo);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DIGITE 'M' PARA MASCULINO E 'F' PARA FEMININO                           "); 
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Sexo:   |  "); 
printf("%s", cli[i].sexo);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DATA DE NASCIMENTO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Dia:   |  "); 
scanf("%i", &cli[i].dia_nasc);

if(cli[i].dia_nasc>0 && cli[i].dia_nasc<31){
	break;
}

}while(2>1);

do{
system("cls");




printf("%c-----------------------------------------------------------------------%c\n",218,191);
printf("                        ALTERACAO DO CLIENTE   ");
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Codigo: |      " );
printf("%i", (cli[i].codigo+1));
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Nome:   |      " );
printf("%s", cli[i].nome_completo);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DIGITE 'M' PARA MASCULINO E 'F' PARA FEMININO                           "); 
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Sexo:   |  "); 
printf("%s", cli[i].sexo);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DATA DE NASCIMENTO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Dia:   |  "); 
printf("%i", cli[i].dia_nasc);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Mes:   |  "); 
scanf("%i", &cli[i].mes_nasc);


if(cli[i].mes_nasc>0 && cli[i].mes_nasc<=12 && ((cli[i].dia_nasc>28 && cli[i].mes_nasc!=2) || cli[i].dia_nasc<28)){
	break;
}
}while(2>1);


do{
		
system("cls");



printf("%c-----------------------------------------------------------------------%c\n",218,191);
printf("                        ALTERACAO DO CLIENTE   ");
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Codigo: |      " );
printf("%i", (cli[i].codigo+1));
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Nome:   |      " );
printf("%s", cli[i].nome_completo);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DIGITE 'M' PARA MASCULINO E 'F' PARA FEMININO                           "); 
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Sexo:   |  "); 
printf("%s", cli[i].sexo);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DATA DE NASCIMENTO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Dia:   |  "); 
printf("%i", cli[i].dia_nasc);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Mes:   |  "); 
printf("%i", cli[i].mes_nasc);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Ano:   |  "); 
scanf("%i", &cli[i].ano_nasc);

if (cli[i].ano_nasc>1906 && cli[i].ano_nasc<=2016){
	break;
}

}while(2>1);

do{
	
system("cls");



printf("%c-----------------------------------------------------------------------%c\n",218,191);
printf("                        ALTERACAO DO CLIENTE   ");
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Codigo: |      " );
printf("%i", (cli[i].codigo+1));
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Nome:   |      " );
printf("%s", cli[i].nome_completo);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DIGITE 'M' PARA MASCULINO E 'F' PARA FEMININO                           "); 
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Sexo:   |  "); 
printf("%s", cli[i].sexo);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DATA DE NASCIMENTO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Dia:   |  "); 
printf("%i", cli[i].dia_nasc);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Mes:   |  "); 
printf("%i", cli[i].mes_nasc);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Ano:   |  "); 
printf("%i", cli[i].ano_nasc);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| CPF:   |   " );
scanf("%s", &cli[i].cpf);
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("\n\n");

break;


}while(2>1);


do{
	
system("cls");




printf("%c-----------------------------------------------------------------------%c\n",218,191);
printf("                        ALTERACAO DO CLIENTE   ");
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Codigo: |      " );
printf("%i", (cli[i].codigo+1));
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Nome:   |      " );
printf("%s", cli[i].nome_completo);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DIGITE 'M' PARA MASCULINO E 'F' PARA FEMININO                           "); 
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Sexo:   |  "); 
printf("%s", cli[i].sexo);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DATA DE NASCIMENTO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Dia:   |  "); 
printf("%i", cli[i].dia_nasc);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Mes:   |  "); 
printf("%i", cli[i].mes_nasc);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Ano:   |  "); 
printf("%i", cli[i].ano_nasc);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| CPF:    | " );
printf("%s", cli[i].cpf);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| TELEFONE PARA CONTATO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DDD:     | " );
scanf("%i", &cli[i].telddd);


if (cli[i].telddd > 0 && cli[i].telddd < 1000){
	break;
}

}while(2>1);


do{
	
system("cls");





printf("%c-----------------------------------------------------------------------%c\n",218,191);
printf("                        ALTERACAO DO CLIENTE   ");
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Codigo: |      " );
printf("%i", (cli[i].codigo+1));
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Nome:   |      " );
printf("%s", cli[i].nome_completo);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DIGITE 'M' PARA MASCULINO E 'F' PARA FEMININO                           "); 
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Sexo:   |  "); 
printf("%s", cli[i].sexo);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DATA DE NASCIMENTO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Dia:   |  "); 
printf("%i", cli[i].dia_nasc);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Mes:   |  "); 
printf("%i", cli[i].mes_nasc);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Ano:   |  "); 
printf("%i", cli[i].ano_nasc);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| CPF:    | " );
printf("%s", cli[i].cpf);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| TELEFONE PARA CONTATO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DDD:    | " );
printf("%i", cli[i].telddd);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Telefone| " );
scanf("%i", &cli[i].telefone);
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("\n\n");


if (cli[i].telefone > 9999999 && cli[i].telefone <= 9999999999){
	break;
}

}while(2>1);

do{
	
	system("cls");


printf("%c-----------------------------------------------------------------------%c\n",218,191);
printf("                        ALTERACAO DO CLIENTE   ");
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Codigo: |      " );
printf("%i", (cli[i].codigo+1));
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Nome:   |      " );
printf("%s", cli[i].nome_completo);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DIGITE 'M' PARA MASCULINO E 'F' PARA FEMININO                           "); 
printf(" \n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Sexo:   |  "); 
printf("%s", cli[i].sexo);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DATA DE NASCIMENTO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Dia:   |  "); 
printf("%i", cli[i].dia_nasc);
printf("\n");	
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Mes:   |  "); 
printf("%i", cli[i].mes_nasc);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Ano:   |  "); 
printf("%i", cli[i].ano_nasc);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| CPF:    | " );
printf("%s", cli[i].cpf);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| TELEFONE PARA CONTATO    ");
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| DDD:    | " );
printf("%i", cli[i].telddd);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| Telefone| " );
printf("%i", cli[i].telefone);
printf("\n");
printf("%c-----------------------------------------------------------------------%c\n",195,180);
printf("| E-mail | " );
scanf(" %s", &cli[i].email);
printf("%c-----------------------------------------------------------------------%c\n",192,217);
printf("\n\n");


break;


}while(2>1);

printf ("Alteracao efetuada com sucesso\n");

pause (1.5);


    system("cls");
    
}
}





void Consultar(int opcao){
	
	
		system("cls");
	int op=0;
	int cod=0;
	char nome[100];
	int i=0;
	
        printf("\n");
        printf("\n");
        printf("                              Escolha uma opcao:\n\n");
        printf("                 ___________________________________________\n");
        printf("\n");
        printf("\n");
        printf("                          1 - Consulta por codigo\n");
        printf("                          2 - Consulta por nome\n");
        printf("\n");
        printf("\n                          ");
        scanf("%i", &op);
	switch(op){
		
			
		case(1):
		system("cls");
        printf("\n");
        printf("\n");
        printf("                              Consulta por codigo:\n\n");
        printf("                 ___________________________________________\n");
        printf("\n");
        printf("\n");
        printf("                          Digite o codigo a ser buscado:\n");
        printf("\n                        ");
        scanf("%i",&cod);
        printf("\n                          ");
        
        for(i=0;i<MAX;i++){
        	
        	cod= cod-1;
        if(cod==cli[i].codigo){
        	PrintarCliente(cod);
        	break;
        }
    }
			break;
				
		case(2):
			
			
		system("cls");
		
			  printf("\n");
        printf("\n");
        printf("                              Consulta por nome:\n\n");
        printf("                 ___________________________________________\n");
        printf("\n");
        printf("\n");
        printf("                          Digite o nome a ser buscado:\n");
        printf("\n                        ");
        scanf(" %[^\n]s", nome);
        printf("\n                          ");
        
        
        for(i=0;i<MAX;i++){
        if(!strcmp(nome,cli[i].nome_completo)){
        	
        	
			cod=i;
        	PrintarCliente(cod);
        	printf("\n");
        	system("pause");
        }
			break;
		}
	}
	
}

void Alterar(int opcao){
	
	int opc_alteration;
	int position;
	
	
	Listar(opcao);
	
int i;

for(i=0;i<MAX;i++){ 
	
	printf("Digite o codigo do cliente que deseja Alterar:");
	scanf("%i", &opc_alteration);                 
	
	printf("%i", opc_alteration);
	if (cli[i].situacao_cliente == 1){	
	
	position = opc_alteration-1;
	i=position;
	printf("%i", i);
	
     AlterarCliente(i);
	
break;
}
}
}


void Excluir(int opcao){
	
	int opc_exclusion;
	int position;
	
	
	Listar(opcao);
	
int i;

for(i=0;i<MAX;i++){
		if (cli[i].situacao_cliente == 1){
			
	
	printf("Digite o codigo do cliente que deseja excluir:");
	scanf("%i", &opc_exclusion);
	printf("%i", opc_exclusion);
	
	
	position = opc_exclusion-1;
	printf("%i", position);
	
	
	cli[position].situacao_cliente=2;
	
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

