#include <locale.h>
#include <stdio.h>

main ()

{

	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float saldo=0;
	float saque=0;
	float deposito=0;
	int opcao;
	
	 for (i=0;i<9999999;i++)
	 {
	 
      printf ("Escolha uma opção:\n");
      printf ("(1) - Consulta do Saldo\n");
      printf ("(2) - Saque\n");
      printf ("(3) - Depósito\n");
      printf ("(4) - Sair\n");
      scanf ("%i", &opcao);
      
      if (opcao == 1)
      {
      		printf ("O saldo atual é: R$%.2f\n",saldo);
      }
      
      if (opcao == 2)
      {
      		printf ("Digite a quantidade para saque:\n");
      		printf ("(Saldo atual: R$%.2f)\n",saldo);
      		scanf ("%f", &saque);
  	  
      
      if (saldo < saque) 
      {
      	   printf ("Saldo insuficiente.\n");
  	  }
  	  else
  	  {
           saldo = (saldo - saque);
           saque = 0;
           printf ("O novo saldo é: R$%.2f\n",saldo);
  	  }
  	  }
  	  
      if (opcao == 3)
      {
      printf ("Digite a quandidade para depósito:\n");
      printf ("(Saldo atual: R$%.2f)\n",saldo);
      scanf ("%f", &deposito);
      
      saldo += deposito;
      deposito = 0;
      printf ("O novo saldo é: R$%.2f\n",saldo);
      }
      
      if (opcao == 4)
      {
      	break;
      }
      
      if ((opcao != 1)&&(opcao != 2)&&(opcao != 3)&&(opcao != 4))
	  {
	  printf ("Digite uma opção válida.\n");
      }
   }
	
	
}
