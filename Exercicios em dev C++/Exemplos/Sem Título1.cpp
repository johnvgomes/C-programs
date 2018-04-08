#include <string>
#include <iostream>
#include <stdio.h>
#include<stdlib.h>
#include <ctype.h>


int main()
{
	
	string str1;
	char str2[100];
	
	
	
  str1=='java';  
  str2=("JAVA");
  
 str1=toupper(str1);
  
  
  if(str1.compare(str2) == 0)
    cout << str1 << " é igual a " << str2 << "\n";
  else
    cout << str1 << " é diferente de " << str2 << "\n";
	  
 
  return 0;
}

