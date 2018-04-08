#include<stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#define MAX 500

int main(void) {
	
	struct horario{
			int hora;
			int minuto;
			int segundo;
	};
	
	struct horario agora[MAX];
	
	agora[0] *p0;
	p0 = &agora[0];
	depois = &agora[MAX];
	
	depois -> hora = 20;
	
	(*depois).minuto = 19;
	
	(*depois).segundo = 17;
	
	
	printf ("%i: %i: %i", agora.hora, agora.minuto, agora.segundo);
	
	
	
	printf ("\n\n%p", depois);
	
	getchar ();
	
	return 0;
}
