#include<stdlib.h>
#include <locale.h>
#include <math.h>
#include <stdio.h>            
#include <string.h> 
#include <ctype.h>


int main ()


{
	
char nome[100];
char resposta[1];
float salario_atual=0;
float salario_reajustado=0;
int result = 0;
	
	
setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("             Exercicio 9 - Reajuste Salarial\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("                      Digite seu nome:\n");
printf("\n                             ");
scanf ("%s", &nome);
printf("\n\a");
printf("           Olá %s você está feliz hoje? s/n \n", nome);
printf("\n                             ");
scanf ("%s", &resposta);
printf("\n\a");
strlwr (resposta); //transforma a resposta <s/n> em minusculo

if (strlen (resposta) == strlen ("s")){ // confere o numero de letras
    
       result = strcmp(resposta, "s"); //confere a letra
	   
	    if (result==0){ // se der 0 sao iguais
    		
    	printf ("  Então temos motivo para você ficar ainda mais feliz!!!\n");
    	 
    	}
		
		if (result>0){
		
		    	
    	
    	result = strcmp(resposta, "n");
    	
    	if (result==0){ 
    	printf ("       Não sabemos o motivo de sua tristeza,\n");
        printf ("      mas garantimos que temos uma boa noticia.\n");
        
    }
    
    if (result!=0){
    	
    
	    printf ("           O ser analfabeto, era s ou n.\n");	
    }
        	
}

		if (result<0){
		
		    	
    	
    	result = strcmp(resposta, "n");
    	
    	if (result==0){ 
    	printf ("         Não sabemos o motivo de sua tristeza,\n");
        printf ("        mas garantimos que temos uma boa noticia.\n");
        
        
        
}

        if (result!=0){
    	
    
	    printf ("           O ser analfabeto, era s ou n.\n");	
    }

}
}


else{
       
        
	    printf ("           O ser analfabeto, era s ou n.\n");
		 
	}
        
printf ("        Realizaremos um reajuste salarial!!!\n");
printf("\n \a");
printf("       Informe o valor de seu salario atual:\n");
printf("\n                             ");
scanf ("%f", &salario_atual);


salario_reajustado = ((salario_atual*0.2375)+salario_atual);

printf("\n\n\a");
printf ("         O salario com reajuste passará a ser:\n");
printf("                     R$ %.2f",salario_reajustado);
    
	
return (0);
}



