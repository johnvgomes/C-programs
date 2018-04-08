#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 
#include <ctype.h>



int main ()


{

char resposta[1] = "";
float salario_minimo = 0;
float salario_liquido = 0;
char nome[100] ="";
char cpf[100] ="";
int nr_dependentes_total = 0;
int nr_dependentes = 0;
float renda_mensal = 0;
float desconto = 0;
float IR = 0;
float taxa = 0;
int result = 0;



setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("              EXERCICIO 11 - IMPOSTO DE RENDA\n");
printf("----------------------------------------------------------\n");
printf("\n\a");

salario_minimo = 880;


printf("       O SALARIO MINIMO ESTA DETERMINADO COMO R$ 880,00\n");
printf("\n");
printf("         VOCê DESEJA ALTERAR O VALOR DO SALARIO MINIMO?\n");
printf("\n");
printf("                              S/N\n\n");
printf("\n\a                            ");
scanf("%s" , &resposta );

system("cls");

printf(" \n");
printf("----------------------------------------------------------\n");
printf("              EXERCICIO 11 - IMPOSTO DE RENDA\n");
printf("----------------------------------------------------------\n");
printf("\n\a");

printf(" \n");
printf(" \n");
printf(" \n");
printf(" \n");


printf("\n\a");
strlwr (resposta); //transforma a resposta <s/n> em minusculo

if (strlen (resposta) == strlen ("s")){ // confere o numero de letras
    
       result = strcmp(resposta, "s"); //confere a letra
	   
	    if (result==0){ // }else if der 0 sao iguais
    		
    	printf("              Digite o novo valor para o salario minimo:\n");
        printf("\n                             ");
        scanf("%s" , &salario_minimo );
    	}
		
		if (result>0){
		
		    	
    	
    	result = strcmp(resposta, "n");
    	
    	if (result==0){ 
        salario_minimo = 880;
    }
    
    if (result!=0){
    	
        
        salario_minimo = 880;
	    printf ("           O ser analfabeto, era s ou n.\n");	
    }
        	
}

		if (result<0){
		
		    	
    	
    	result = strcmp(resposta, "n");
    	
    	if (result==0){ 
        
        
     salario_minimo = 880;
        
        
}

        if (result!=0){
    	
        salario_minimo = 880;
    
	    printf ("           O ser analfabeto, era s ou n.\n");	
	    
	    
    }

}
}


else{
       
        
        salario_minimo = 880;
        
	    printf ("           O ser analfabeto, era s ou n.\n");
		 
	}
     
      //-------------------------INICIO PROGRAM-----------------------------------------------------------------------

system("cls"); 


printf(" \n");
printf("----------------------------------------------------------\n");
printf("              EXERCICIO 11 - IMPOSTO DE RENDA\n");
printf("----------------------------------------------------------\n");
printf("\n\a");

printf(" \n");
printf(" \n");
printf(" \n");


printf("                 Digite o nome do contribuinte");

printf("\n");
printf("\n                          ");

scanf ("%s",nome);

printf("\n");
printf("\n");

printf("                  Digite o CPF do contribuinte");

printf("\n");
printf("\n                          ");

scanf("%s", &cpf);

printf("\n");
printf("\n");

printf("                 Digite o número de dependentes");

printf("\n");
printf("\n                          ");

scanf ("%i", &nr_dependentes_total);

if (nr_dependentes_total > 3) {

nr_dependentes = 3;

}

printf("\n");
printf("\n");

printf("                      Digite a renda mensal");

printf("\n");
printf("\n                             ");

scanf("%f",&renda_mensal);

desconto = (nr_dependentes*0.05);


   
if   (renda_mensal <= (2*salario_minimo)) {
        taxa = 0;
        desconto = 0;
        IR = ((renda_mensal*taxa) - (desconto*renda_mensal));

        salario_liquido = (renda_mensal - IR );

        
     }else if   (renda_mensal > (2*salario_minimo) && renda_mensal <= (3*salario_minimo)) {

          taxa = 0.05;

          IR = ((renda_mensal*taxa) - (desconto*renda_mensal));

          salario_liquido = (renda_mensal - IR );



     }else if   (renda_mensal > (3*salario_minimo) && renda_mensal <= (5*salario_minimo)) {

          taxa = 0.10;

          IR = ((renda_mensal*taxa) - (desconto*renda_mensal));

          salario_liquido = (renda_mensal - IR );



     }else if   (renda_mensal > (5*salario_minimo) && renda_mensal <= (7*salario_minimo)) {

          taxa = 0.15;

          IR = ((renda_mensal*taxa) - (desconto*renda_mensal));

          salario_liquido = (renda_mensal - IR );


       

     }else if   (renda_mensal > (7*salario_minimo)) {

          taxa = 0.20;

          IR = ((renda_mensal*taxa) - (desconto*renda_mensal));

          salario_liquido = (renda_mensal - IR );
          
      }
      
      system("cls"); 

printf(" \n");
printf(" \n");


printf(" \n");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("              EXERCICIO 11 - IMPOSTO DE RENDA\n");
printf("----------------------------------------------------------\n");
printf("\n\a");


      
      	printf ("                  NOME: %s", nome);

        printf("\n");

        printf ("                   CPF: %s", cpf);

        printf("\n");
        printf("\n");

        printf ("          Renda Mensal: R$ %.2f\n", renda_mensal);
        printf (" Numero de dependentes: %i\n", nr_dependentes_total);
        printf ("        Desconto total: %.0f %%\n", (desconto*100));
        printf ("              Aliquota: %.0f %%\n", (taxa*100));
        printf ("                    IR: R$ %.2f\n", IR);
        printf("\n\n");
        printf ("      SALARIO LIQUIDO : R$ %.2f\n ", salario_liquido);


		   
printf("\n");
printf("\n");


return (0);
}
