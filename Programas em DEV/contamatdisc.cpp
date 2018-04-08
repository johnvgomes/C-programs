#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	printf("Os valores sao:");
	printf("\n\n\n");
	
	for(int i=1;;i++){
	
	float n = sqrt(i); 
	
	
		if( n<=4 && (i/n) == n){
			
			printf("%i | ",i);
			
		}
		
		
		
		
		
	}
	
	return (0);
}
