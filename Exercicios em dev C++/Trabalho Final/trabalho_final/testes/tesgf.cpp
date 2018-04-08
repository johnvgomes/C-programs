#include <stdio.h>
#include <time.h>

// prototipo
void pause (float);

/** procedimento de compilacao normal
  * uso: pause(valor)
  *
  * valor eh um numero maior que zero podendo ser uma fracao.
  * eh o tempo em segundos de pausa no programa.
**/



void pause (float delay1) {

   if (delay1<0.001) return; // pode ser ajustado e/ou evita-se valores negativos.

   float inst1=0, inst2=0;

   inst1 = (float)clock()/(float)CLOCKS_PER_SEC;

   while (inst2-inst1<delay1) inst2 = (float)clock()/(float)CLOCKS_PER_SEC;

   return;

}

int main (void) {

   printf ("Favor olhar para o relogio da maquina para conferir.\n");
   printf ("5,5 segundos antes...\n");
   pause (5.5);
   printf ("5,5 segundos depois...\n");

   return 0;

}
