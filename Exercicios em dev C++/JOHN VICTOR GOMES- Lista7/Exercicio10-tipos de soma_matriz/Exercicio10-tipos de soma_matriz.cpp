#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

main ()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	int matriz[5][5];
	int i;
	int j;
	int linha4=0;
	int coluna2=0;
	int diagprincipal=0;
	int diagsecundaria=0;
	int total=0;

      for (i=0;i<5;i++)
	  {
           for (j=0;j<5;j++)
		   {
			
				//printf ("Digite um valor [%i,%i]\n",(i+1),(j+1));
                //scanf ("%i",&matriz[i][j]);
                
                matriz[i][j]=rand()%10;

           }

      }	
	
      for (i=0;i<5;i++)
	  {
           for (j=0;j<5;j++)
		   {

                if (i==3)
				{

                   linha4 += matriz[i][j];

                }

                if (j==1)
                {

                   coluna2 += matriz[i][j];
                   
                }

                if (i==j)
                {

                   diagprincipal += matriz[i][j];
		
                }
                
                if ((i+j)==4)
                {
                
                   diagsecundaria += matriz[i][j];
                   
                }
                
                total += matriz[i][j];


           }

      }

      for (i=0;i<5;i++)
	  {
           for (j=0;j<5;j++)
		   {

                  printf ("%i ",matriz[i][j]);
           
           }
            
           printf ("\n");
            
     }
 

 
 printf ("Soma da linha 4: %i\n",linha4);
 printf ("Soma da coluna 2: %i\n",coluna2);
 printf ("Soma da diagonal principal: %i\n",diagprincipal);
 printf ("Soma da diagonal secundária: %i\n",diagsecundaria);
 printf ("Soma total: %i\n",total);
	
}
