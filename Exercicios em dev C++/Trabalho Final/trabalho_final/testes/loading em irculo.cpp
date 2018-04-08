#include <stdio.h>
#include <time.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>


void pause (float);

int main()
{
   char  ballpos[100][20];
   int posball;
   int cont_inicio=10;
   
   for (posball=0;posball<=16;posball++){
   
   if(posball==0){
    printf("\n");
    printf("\n");
   printf("              %c  \n",248, 248);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
   }
   else if(posball==1){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   printf("                 %c\n",248,248);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
   }
   
   else if(posball==2){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   printf("                   %c\n",248,248);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
   }

   else if(posball==3){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   printf("                    %c\n",248,248);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
   }
   
   else if(posball==4){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   printf("                    %c\n",248,248);
    printf("\n");
    printf("\n");
    printf("\n");
   }
   
   else if (posball==5){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   printf("                   %c\n",248,248);
    printf("\n");
    printf("\n");
   }

   else if(posball==6){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
    printf("                 %c\n",248,248);
    printf("\n");
   }
   
   else if(posball==7){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
    printf("            %c\n",248,248);
    
   }
   
   else if(posball==8){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   printf("          %c  \n",248, 248);
   }
   
   else if(posball==9){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   printf("       %c        \n",248,248); 
    printf("\n");
   }
   
   else if(posball==10){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   printf("     %c            \n",248,248);
    printf("\n");
    printf("\n");
   }
   
   else if(posball==11){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   printf("    %c              \n",248,248);
    printf("\n");
    printf("\n");
    printf("\n");
   }
   
   else  if (posball==12){   
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
   printf("    %c              \n",248,248);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
   
   }
   
   else if(posball==13){
   	printf("\n");
   	printf("\n");
   	printf("\n");
   	printf("\n");
   printf("     %c            \n",248,248);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    
   }
   
   else if(posball==14){ 
    printf("\n");
    printf("\n");
    printf("\n");  
   printf("       %c        \n",248,248);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
   
   }
   
   else if(posball==15){
   	printf("\n");
   	printf("\n");
   printf("          %c  \n",248,248);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
   }

else if(posball==16){
	posball=0;
	
}


    printf("\n");
    printf("\n");
    
  if(posball>=0 || posball<=15 && cont_inicio<100)
  {
    printf("           %i%%\n", cont_inicio);

    printf("\n");
  }
    if (cont_inicio>=0 && cont_inicio<=15){
    	printf("Baixando dados...");
    	printf("\n");
    	printf("\n");
    	printf("\n");
        printf("%c  %c\n",178,178);		
		printf("%c  %c  \n",178,178);          
        printf("%c  %c\n",178,178);
        printf("%c  %c\n",178,178);
        printf("%c%c%c%c  \n",178,178,178,178);
        
    	
    }
    if (cont_inicio>=16 && cont_inicio<=30){
    	printf("Recebendo dados...");
    		printf("\n");
    		printf("\n");
    		printf("\n");
        printf("%c  %c  %c\n",178,178,178);  
		printf("%c  %c  %c\n",178,178,178);      
        printf("%c  %c  %c%c%c%c\n",178,178,178,178,178,178);
        printf("%c  %c  %c  %c\n",178,178,178,178);
        printf("%c%c%c%c  %c%c%c%c \n",178,178,178,178,178,178,178,178);
        
    }
    if (cont_inicio>=31 && cont_inicio<=45){
    	printf("Visualizando dados...");
    		printf("\n");
    		printf("\n");
    		printf("\n");
        printf("%c  %c  %c     %c\n",178,178,178,178); 
		printf("%c  %c  %c\n",178,178,178);         
        printf("%c  %c  %c%c%c%c  %c  \n",178,178,178,178,178,178,178);
        printf("%c  %c  %c  %c  %c\n",178,178,178,178,178);
        printf("%c%c%c%c  %c%c%c%c  %c \n",178,178,178,178,178,178,178,178,178);
    }
    if (cont_inicio>=46 && cont_inicio<=60){
    	printf("Interpretando dados...");
    		printf("\n");
    		printf("\n");
    		printf("\n");
        printf("%c  %c  %c     %c  %c%c%c%c\n",178,178,178,178,178,178,178,178); 
		printf("%c  %c  %c        %c\n",178,178,178,178);         
        printf("%c  %c  %c%c%c%c  %c  %c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178);
        printf("%c  %c  %c  %c  %c     %c\n",178,178,178,178,178,178);
        printf("%c%c%c%c  %c%c%c%c  %c  %c%c%c%c \n",178,178,178,178,178,178,178,178,178,178,178,178,178);
    }
    if (cont_inicio>=61 && cont_inicio<=75){
    	printf("Calculando dados...");
    		printf("\n");
    		printf("\n");
    		printf("\n");
        printf("%c  %c  %c     %c  %c%c%c%c  %c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178); 
		printf("%c  %c  %c        %c     %c  %c\n",178,178,178,178,178,178,178);         
        printf("%c  %c  %c%c%c%c  %c  %c%c%c%c  %c  %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c  %c  %c  %c  %c     %c  %c  %c\n",178,178,178,178,178,178,178,178);
        printf("%c%c%c%c  %c%c%c%c  %c  %c%c%c%c  %c%c%c%c \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    }
    if (cont_inicio>=76 && cont_inicio<=90){
    	printf("Transferindo dados...");
    	    printf("\n");
    		printf("\n");
    		printf("\n");
        printf("%c  %c  %c     %c  %c%c%c%c  %c%c%c%c  %c%c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178); 
		printf("%c  %c  %c        %c     %c  %c  %c  \n",178,178,178,178,178,178,178);         
        printf("%c  %c  %c%c%c%c  %c  %c%c%c%c  %c  %c  %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c  %c  %c  %c  %c     %c  %c  %c  %c\n",178,178,178,178,178,178,178,178);
        printf("%c%c%c%c  %c%c%c%c  %c  %c%c%c%c  %c%c%c%c  %c \n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    }
    if (cont_inicio>=91 && cont_inicio<=99){
    	printf("Compilando dados...");
    	
         	printf("\n");
    	    printf("\n");
    		printf("\n");
        printf("%c  %c  %c     %c  %c%c%c%c  %c%c%c%c  %c%c%c%c  %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178); 
		printf("%c  %c  %c        %c     %c  %c  %c      %c  \n",178,178,178,178,178,178,178,178);         
        printf("%c  %c  %c%c%c%c  %c  %c%c%c%c  %c  %c  %c%c%c    %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c  %c  %c  %c  %c     %c  %c  %c  %c      %c\n",178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c  %c%c%c%c  %c  %c%c%c%c  %c%c%c%c  %c      %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    }
    
    
    else if (cont_inicio==100){
    	
    	system("cls");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    
    printf("\n");
    printf("\n");
    
    printf("           %i%%\n", cont_inicio);
    
    printf("\n");
    
     printf("           Iniciando...");	
     
     
    		printf("\n");
    		printf("\n");
    		printf("\n");
        printf("%c  %c  %c     %c  %c%c%c%c  %c%c%c%c  %c%c%c%c  %c%c%c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178); 
		printf("%c  %c  %c        %c     %c  %c  %c      %c  \n",178,178,178,178,178,178,178,178);         
        printf("%c  %c  %c%c%c%c  %c  %c%c%c%c  %c  %c  %c%c%c    %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
        printf("%c  %c  %c  %c  %c     %c  %c  %c  %c      %c\n",178,178,178,178,178,178,178,178,178);
        printf("%c%c%c%c  %c%c%c%c  %c  %c%c%c%c  %c%c%c%c  %c      %c\n",178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178,178);
    
    
        pause (5.5);
     	break;
    }
    
    system("cls");
    cont_inicio += 8;
    
    if (cont_inicio>100){
    	
    	cont_inicio=100;
    }
}

return (0);
}


void pause (float delay1) {

   if (delay1<0.001) return; // pode ser ajustado e/ou evita-se valores negativos.

   float inst1=0, inst2=0;

   inst1 = (float)clock()/(float)CLOCKS_PER_SEC;

   while (inst2-inst1<delay1) inst2 = (float)clock()/(float)CLOCKS_PER_SEC;

   return;

}
