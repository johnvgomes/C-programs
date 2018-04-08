#include<stdio.h>

#include <locale.h>



int main ()


{
	
float n1 = 0;
float n2 = 0;
float n3 = 0;
float soma_maior = 0;



setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("           Exercicio 7 - Soma dos dois maiores\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("OBS: PARA FICAR LEGAL DIGITE 3 NUMEROS DIFERENTES EX: 1 , 2 , 3");
printf(" \n");
printf(" \n");
printf("              Digite o primeiro numero:\n");
printf("\n                             ");
scanf("%f" , &n1 );
printf("\n\a");
printf("              Digite o segundo numero: \n");
printf("\n                             ");
scanf("%f" , &n2 );
printf("\n\a");
printf("              Digite o terceiro numero: \n");
printf("\n                             ");
scanf("%f" , &n3 );
printf(" \n");
printf(" \n");


if (n1 == n2 && n1 == n3) {
                           printf ("         OS NUMEROS DIGITADOS SÃO IGUAIS\n\n");

                           printf ("");
                           printf ("");

                           printf ("");

                           soma_maior = (n1 + n2);

                           
                             printf ("         A soma dos dois valores maiores é igual a:\n");
                             printf ("                  %.2f + %.2f = %.2f",n2, n1, soma_maior);
                          

                           
                        //2
                        }else if (n1 == n2 && n1 > n3) {
   
                           printf ("         DOIS DE TRÊS NUMEROS DIGITADOS SÃO IGUAIS\n\n");
       
                           printf ("");
                           printf ("");
       
                           printf ("");
       
                           soma_maior = (n1 + n2);
       
                           printf ("         A soma dos dois valores maiores é igual a:\n");
                           printf ("                  %.2f + %.2f = %.2f",n2, n1, soma_maior);
                           
                        //3
                        }else if (n1 == n2 && n1 < n3) {

                            printf ("         DOIS DE TRÊS NUMEROS DIGITADOS SÃO IGUAIS\n\n");

                            printf ("");
                            printf ("");

                            printf ("");

                            soma_maior = (n3 + n2);

                             printf ("         A soma dos dois valores maiores é igual a:\n");
                             printf ("                  %.2f + %.2f = %.2f",n3, n2, soma_maior);
                            
                         //4
                         }else if (n3 == n2 && n1 > n3) {

                             printf ("         DOIS DE TRÊS NUMEROS DIGITADOS SÃO IGUAIS\n\n");

                             printf ("");
                             printf ("");

                             printf ("");

                             soma_maior = (n1 + n2);

                             printf ("         A soma dos dois valores maiores é igual a:\n");
                             printf ("                  %.2f + %.2f = %.2f",n1, n2, soma_maior);
                             
                             
                         //5
                         }else if (n3 == n2 && n1 < n3) {

                             printf ("         DOIS DE TRÊS NUMEROS DIGITADOS SÃO IGUAIS\n\n");

                             printf ("");
                             printf ("");

                             printf ("");

                             soma_maior = (n3 + n2);

                             printf ("         A soma dos dois valores maiores é igual a:\n");
                             printf ("                  %.2f + %.2f = %.2f",n3, n2, soma_maior);
                             
                         //6
                         }else if (n1 > n2 && n1 > n3 && n2 > n3)   {

                             printf ("         OS NUMEROS DIGITADOS SÃO DIFERENTES\n\n");

                             printf ("");
                             printf ("");

                             printf ("");

                             soma_maior = (n1 + n2);

                             printf ("         A soma dos dois valores maiores é igual a:\n");
                             printf ("                  %.2f + %.2f = %.2f",n1, n2, soma_maior);

                             
                         //7
                        } else if (n1 > n2 && n1 > n3 && n2 < n3)   {

                             printf ("         OS NUMEROS DIGITADOS SÃO DIFERENTES\n\n");

                             printf ("");
                             printf ("");

                             printf ("");

                             soma_maior = (n1 + n3);

                             printf ("         A soma dos dois valores maiores é igual a:\n");
                             printf ("                  %.2f + %.2f = %.2f",n1, n3, soma_maior);
                             
                             
                         //8
                         }else if (n2 > n1 && n2 > n3 && n1 < n3)   {

                             printf ("         OS NUMEROS DIGITADOS SÃO DIFERENTES\n\n");

                             printf ("");
                             printf ("");

                             printf ("");

                             soma_maior = (n2 + n3);

                             printf ("         A soma dos dois valores maiores é igual a:\n");
                             printf ("                  %.2f + %.2f = %.2f",n2, n3, soma_maior);

                             
                         //9
                         }else if (n2 > n1 && n2 > n3 && n1 > n3)   {

                             printf ("         OS NUMEROS DIGITADOS SÃO DIFERENTES\n\n");

                             printf ("");
                             printf ("");

                             printf ("");

                             soma_maior = (n2 + n1);

                             printf ("         A soma dos dois valores maiores é igual a:\n");
                             printf ("                  %.2f + %.2f = %.2f",n2, n1, soma_maior);
                             
                             
                         //10
                         }else if (n3 > n1 && n3 > n2 && n2 > n1)   {

                             printf ("         OS NUMEROS DIGITADOS SÃO DIFERENTES\n\n");

                             printf ("");
                             printf ("");

                             printf ("");

                             soma_maior = (n3 + n2);

                             
                             printf ("         A soma dos dois valores maiores é igual a:\n");
                             printf ("                  %.2f + %.2f = %.2f",n3, n2, soma_maior);
                             
                             
                          //11
                         } else if (n3 > n1 && n3 > n2 && n1 > n2)   {

                             printf ("         OS NUMEROS DIGITADOS SÃO DIFERENTES\n\n");

                             printf ("");
                             printf ("");

                             printf ("");

                             soma_maior = (n3 + n1);

                             printf ("         A soma dos dois valores maiores é igual a:\n");
                             printf ("                  %.2f + %.2f = %.2f",n2, n1, soma_maior);
}

printf("\n");

printf("\n");
   
return (0);
}



