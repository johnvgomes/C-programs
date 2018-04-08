#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> 
#include <ctype.h>



int main ()


{
char nome_mun1[100] ="";
char nome_mun2[100] ="";
char nome_mun3[100] ="";
char nome_mun4[100] ="";
char nome_mun5[100] ="";

float tmp1 =0;
float tmp2 =0;
float tmp3 =0;
float tmp4 =0;
float tmp5 =0;

float tmpMedia =0;

int tmpBaixa =0;



setlocale(LC_ALL, "Portuguese");
printf(" \n");
printf("----------------------------------------------------------\n");
printf("        EXERCICIO 13 - TEMPERATURA EM 5 MUNICIPIOS\n");
printf("----------------------------------------------------------\n");
printf("\n\a");

printf("                 Digite o nome do municipio 1");

printf("\n");
printf("\n                          ");

scanf ("%s",nome_mun1);

printf("\n");
printf("\n");

printf("                  Digite a temperatura de %s", nome_mun1);

printf("\n");
printf("\n                          ");

scanf("%f", &tmp1);

printf("\n");
printf("\n");

printf("\n\a");

printf("                 Digite o nome do municipio 2");

printf("\n");
printf("\n                          ");

scanf ("%s",nome_mun2);

printf("\n");
printf("\n");

printf("                  Digite a temperatura de %s", nome_mun2);

printf("\n");
printf("\n                          ");

scanf("%f", &tmp2);

printf("\n");
printf("\n");

printf("\n\a");

printf("                 Digite o nome do municipio 3");

printf("\n");
printf("\n                          ");

scanf ("%s",nome_mun3);

printf("\n");
printf("\n");

printf("                  Digite a temperatura de %s", nome_mun3);

printf("\n");
printf("\n                          ");

scanf("%f", &tmp3);

printf("\n");
printf("\n");

printf("\n\a");

printf("                 Digite o nome do municipio 4");

printf("\n");
printf("\n                          ");

scanf ("%s",nome_mun4);

printf("\n");
printf("\n");

printf("                  Digite a temperatura de %s ", nome_mun4);

printf("\n");
printf("\n                          ");

scanf("%f", &tmp4);

printf("\n");
printf("\n");

printf("\n\a");

printf("                 Digite o nome do municipio 5");

printf("\n");
printf("\n                          ");

scanf ("%s",nome_mun5);

printf("\n");
printf("\n");

printf("                  Digite a temperatura de %s ", nome_mun5);

printf("\n");
printf("\n                          ");

scanf("%f", &tmp5);

printf("\n");
printf("\n");


tmpMedia = (tmp1+tmp2+tmp3+tmp4+tmp5) /5;

printf("===========================================================\n");
printf("           A temperatura Média da regiao é:\n");
printf("===========================================================\n");

printf("\n");
printf("\n");

printf("                       %.2f",tmpMedia);



if  (tmp1<10) {
    tmpBaixa = (tmpBaixa+1);

}else if  (tmp2<10) {
    tmpBaixa = (tmpBaixa+1);

}else if  (tmp3<10) {
    tmpBaixa = (tmpBaixa+1);

}else if  (tmp4<10) {
    tmpBaixa = (tmpBaixa+1);

}else if  (tmp5<10) {
    tmpBaixa = (tmpBaixa+1);

}
printf("\n");
printf("\n");

printf("===========================================================\n");
printf("  Quantidade de municipios com temperatura inferior a 10:\n");
printf("===========================================================\n");

printf("\n\n");
printf("                  %i \n\n",tmpBaixa);

printf("===========================================================\n");
printf("       Municipios com temperatura superior a 30:\n");
printf("===========================================================\n");

if  (tmp1>30) {
    printf ("%s", (nome_mun1));

}else if  (tmp2>30) {
    printf ("%s", (nome_mun2));

}else if  (tmp3>30) {
    printf ("%s", (nome_mun3));

}else if  (tmp4>30) {
    printf ("%s", (nome_mun4));

}else if  (tmp5>30) {
    printf ("%s", (nome_mun5));
}
		   
printf("\n");
printf("\n");


return (0);
}
