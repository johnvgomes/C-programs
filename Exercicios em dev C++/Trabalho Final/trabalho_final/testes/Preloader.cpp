#include <stdio.h>
#include <windows.h>

int main (void)
{    
   int i, j;
   
   system ("cls");
   
   printf ("\n\nCarregando: \n\n");          
     
   for (i = 0; i <=70; i++)
   {                
      //printf ("\r  %d%%", i);      
      printf ("  %d%%\r", i);
      fflush (stdout);                      
         
      for (j = 0; j < i; j++)
      {
         if (!j) // Da espaco na barra pra nao enconstar na borda da tela
           printf ("  ");
           
         printf ("%c", 219);
         Sleep(3);
      }                      
   } 
          
   printf ("\n\nFinalizando...");
   Sleep (900);
   printf ("\r \t\t\t\t  CARREGADO\n\n\n");      
   printf ("\t\t  Autor: Tarik Ahmad (Thiago Alexandre)\n\n\n\n");
   system ("pause");
   
   return 0;
}

