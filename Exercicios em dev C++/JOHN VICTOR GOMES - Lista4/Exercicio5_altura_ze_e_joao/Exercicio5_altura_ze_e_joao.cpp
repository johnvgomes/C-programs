#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>



int main ()


{

float altura_joao = 1.5;

float altura_ze = 1.10;

int ano = 0;



setlocale(LC_ALL, "Portuguese");


printf(" \n");
printf("----------------------------------------------------------\n");
printf("          EXERCICIO 5 - ALTURA Z� E JOAO\n");
printf("----------------------------------------------------------\n");
printf("\n\a");
printf("                        ___      \n");
printf("                       (. .)    __�__\n");
printf("                        {-}    ( ' ' ) \n");
printf("                        (|)     |_-_|  \n");
printf("                         |       <|> \n");
printf("                         *        * \n");
printf("                        _||_     _||_ \n");
printf("\n");
printf("                       JOAO    |   Z� \n");
printf("                      %.2f m     %.2f m \n\n"   , altura_joao, altura_ze);



while (altura_joao > altura_ze) {
ano += 1;

altura_joao += 0.02;
altura_ze += 0.03;

}

printf("            EM %i ANOS Z� SER� MAIOR QUE JO�O\n", ano);

printf("                                       \n");
printf("                                 __�__ \n");
printf("                        ___     ( ' ' ) \n");
printf("                       (. .)     |_-_| \n");
printf("                        {-}       <|> \n");
printf("                        (|)        | \n");
printf("                         |         | \n");
printf("                         *         * \n");
printf("                        _||_      _||_ \n");
printf("\n");
printf("                       JOAO    |   Z� \n");
printf("                      %.2f m     %.2f m \n\n"   , altura_joao, altura_ze);


return (0);
}
