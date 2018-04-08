#include <stdio.h>            
#include <string.h> 
#include <ctype.h>
int main()                
   {

    char string1[] = "ARARA", string2[] = "arara";
    int menor, result = 0;
    
    strlwr (string1);
    printf("%s",string1);
    
    if (strlen (string2) == strlen (string1)){
    
       result = strcmp(string1, string2); 
	   
	    if (result==0){
    		printf ("A string foi encontrada.");
    		
    }
        else{
        
        
    	printf ("A string NAO foi encontrada.");
    }
   }
   else
   {
   	printf ("ERROR.");
   }

  

return 0;
   }
