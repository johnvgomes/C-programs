#include<stdio.h>

#include <locale.h>



int main ()


{
	
int ano_atual = 0;
int ano_nascimento =0;
int idade =0;



setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("                     Exercicio 3 - VOTO\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("               Digite o ano atual:\n");
printf("\n                             ");
scanf("%i" , &ano_atual );
printf("\n\a");
printf("               Digite o ano do seu nascimento: \n");
printf("\n                             ");
scanf("%i" , &ano_nascimento );
printf(" \n");
printf(" \n");

idade = (ano_atual - ano_nascimento);


             

      if (idade >= 0 && idade < 15) {
      
          printf(" Você não pode votar!");
      
    } else if (idade == 15) {
           
             printf ("Este ano você não pode votar,");
             printf ("mas apartir do ano que vem será opcional");
              
    }else if (idade == 16) {
                
                    printf ("Este ano, e no proximo ano, o voto é opcional para você");
                    
                
                     } else if (idade == 17) {
                     
                     printf ("              Este ano você pode votar ou não,\n");
                     printf ("      mas a partir do ano que vem seu voto é obrigatorio\n\n");
                     
                     } else if (idade>=18 && idade <= 69) {
                          
                             printf ("Seu voto é obrigatorio\n");
                             
                          
                               } else if (idade >= 70) {
                               
                                  printf ("você não tem obrigação de votar\n");
                                  
                           }else{
                               
                                  printf(" O ano de nascimento é invalido\n");
                                  
                          }

        
return (0);
}



