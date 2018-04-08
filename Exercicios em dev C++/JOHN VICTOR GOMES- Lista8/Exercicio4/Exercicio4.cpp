#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>



int numeros [20] ;
int i =0;
int opcao =0;
int result =0;
int num =0;
int conta_procura=0;

void Remove(int opcao){

int cont=0;
int num =0;
int flag=0;


printf ("Digite o valor a ser removido:");
scanf("%i", &num);

cont=1;

for (cont=1;cont<=20;cont++){

   if (numeros[cont] == num) {
   numeros[cont] = 0;
   conta_procura +=1;
      printf(" Todas as ocorrencias do numero digitado foram apagadas.");
   }
}


   do{
   cont = 1;
for (cont=1;cont<=20;cont++){
   if(numeros[cont]==0) {
   numeros[cont] = numeros[cont+1];
   numeros[cont+1] = 0;

   }
  }

   flag+=1;

   }while (flag >= conta_procura);


   printf("\n");

   cont =1;

for (cont=1;cont<=20;cont++){


   if(cont == 1) {

      printf("( %i,", numeros[cont]);

   }else if(cont >1 && cont<20){

   printf("%i, ", numeros[cont] );

   }else if(cont == 20) {

   printf("%i) ", numeros[cont]);
   printf("\n");

  }
}
}



void Insere(int opcao){



int cont=0;
int flag=0;


for (cont=1;cont<=20;cont++){

   if (flag == 1) {
      break;
  }

   if(numeros[cont] == 0) {
      printf("Digite um valor para a posição %i do vetor",cont);
      scanf("%i", &numeros[cont]);
      printf(" O valor foi inserido com SUCESSO!!!");
      if(numeros[cont]!=0) {
         flag = 1;
      }
}
}
}

void Imprime(int opcao){


int cont =0;
int flag =0;


printf("\n");
for (cont=1;cont<20; cont++){

   if(cont == 1) {

      printf("(%i, ",numeros[cont] );
      
   }else if(cont >1 && cont<20) {
   
   printf("%i , ", numeros[cont]);
   
   }else if(cont == 20) {

   printf("%i) ", numeros[cont] );

   }
   }
   printf("\n");
}



void Substituir(int opcao){

int cont;
int num;
int val_sub;


printf ("Digite o valor a ser substituido:\n");
scanf("%i",&num);
     result = 0;
     
for (cont=1;cont<=20;cont++){
   if (numeros[cont] ==
    num) {
      result +=1;
      
   }
}

printf("O numero %i foi encontrado: %i vezes\n", num, result);
printf("\n");

printf("\n");

printf("Digite o valor que irá substituir o valor %i\n", num);
scanf ("%i", &val_sub);

for (cont=1;cont<=20;cont++){
	
   if(numeros[cont] == num){
      numeros[cont] = val_sub;
      
   printf("\no valor foi substituido com SUCESSO\n");
}
}

}



main(){

for (i=0;i<50;i++){

         printf("Digite um numero inteiro para a posição %i (Digite 0 para finalizar)",i);
         scanf("%i", &numeros[i]);

         if (numeros[i]== 0) {
            break;
            
			system("cls");
         }

      }
      
	  system("cls");

      do{

         printf("1-INSERIR\n");
         printf("\n");
         printf("2-REMOVER\n");
         printf("\n");
         printf("3-IMPRIMIR\n");
         printf("\n");
         printf("4-SUBSTITUIR\n");
         printf("\n");
         printf("5-SAIR\n");
         printf("\n");
         printf (" Escolha uma das opções acima:\n");
         scanf ("%i", &opcao);

         system("cls");

         if (opcao == 1) {

            Insere(opcao);
            
            system("pause");

            system("cls");

         }

         if (opcao == 2) {

            Remove(opcao);
            system("pause");

            system("cls");

         }
         if (opcao == 3) {
            Imprime(opcao);
            printf("\n");
            printf("Desculpe, a impressora esta com falta de papel. Verifique-a");
            system("pause");

            system("cls");

        }
         if (opcao == 4) {

          Substituir(opcao);
         
          system("pause");

          system("cls");

        }

         if (opcao == 5) {
        
		  break;

          system("cls");

         }

      } while(2>1);

return(0);
}



