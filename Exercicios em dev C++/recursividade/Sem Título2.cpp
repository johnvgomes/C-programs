#include<stdio.h>
int fat(int n);
main(){
int numero;
printf ("Insira um valor para calcular seu fatorial\n");
scanf ("%i",&numero);
printf ("O fatorial de numero e: %i\n",fat(numero));
}
/* calculo do fatorial – função recursiva */
int fat(int n){
if (n==1){
return 1;
}else{
printf ("%i\t",n);
return n*fat(n-1);
}
}
