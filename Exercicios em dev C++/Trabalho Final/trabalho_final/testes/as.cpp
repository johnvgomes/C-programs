#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
int main()
{
setlocale(LC_ALL, "Portuguese");
   char  spin[4][3];
/*   
   char  spin[0] = '|';
   char  spin[1] = '/';
   char  spin[2] = '-';
   char  spin[3] = '\\';

*/
   strcpy(spin[0], "|") ;
   strcpy(spin[1], "/") ;
   strcpy(spin[2], "--") ;
   strcpy(spin[3], "\\") ;
   
        

   int roda = 0 ;
   int i =0;
   
    for(i; i <= 100; i++){
    	   
   for(roda=0; roda < 6; roda++)
   {
      printf("\r %s", spin[roda]);
      if(roda == 5)
      {
         roda = 0;
      }
  }
   }
}
