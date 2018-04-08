/**     QUICK SORT
  *		
  *     ALUNO: JOHN VICTOR GOMES
  *     CURSO: Ciencia Computação / IFC videira
  *		FASE/ANO: 3ªFASE / 2017
  *		DISCIPLINA: ESTRUTURA DE DADOS



/** Divisão:  Particiona o vetor A[menor....maior] entre dois sub vetores do vetor A
  *           A[menor....j-1] e A[j+1...maior] de modo que cada elemento
  *           de A[menor....j-1] que é menor ou igual a A[j], que
  *           por sua vez é menor ou igual a A[j+1...maior]. Calcula
  *           O índice j como parte deste procedimento de particionamento.
  
  
  
  * OBJETIVO : 		Classificar os dois sub vetores A [menor .... j-1] e A [j + 1 .... maior]
  * 				Por chamadas recursivas para quicksort
  **/

#include<stdio.h> 														//incluindo biblioteca stdio.h

void quicksort(int *vetor, int menor, int maior); 						// Chamando prototipo da função quicksort

int main() 																// inicio da função Principal 'Main'
{
	
	
  int vetor[20];														//criação de um vetor com 20 posições.
  int n;																//criacao de uma variavel n ( numero de elementos a serem inseridos no vetor).
  int i;																//criação da variavel contador 'i'.
  
  printf("Digite o numero de elementos a serem inseridos no vetor\n");   //Imprime na tela 
  scanf("%d", &n);														 //recebe o valor digitado e armazena em n

  printf("Digite os elementos a serem ordenados\n"); 					 //Imprime na tela 
  for(i = 0; i < n; i++)												 // laço de repetiçao de i=0 até i<n
    scanf("%d", &vetor[i]);											     // recebe valor do elemento e armazena na posiçao do vetor

  quicksort(vetor, 0, n-1);											     //chama função quicksort.

  printf("VETOR ORDENADO:\n");											 //Impressao do vetor Ordenado
  for(i = 0; i < n; i++)
    printf("%d ", vetor[i]);

  return 0;																 //fim  impressao com retorno igual a zero.
}


void quicksort(int *vetor, int menor, int maior)					     //INICIO FUNÇÃO QUICKSORT
{
  int pivo;																 // PIVO ->  Responsavel por demarcar atual o meio.
  int i; 																 //  I   ->  varivel responsavel por receber o menor valor
  int j;																 //  J   ->  varivel responsavel por receber o maior valor
  int temp;																 // TEMP ->  variavel temporaria, utilizada para auxiliar a ordenação
  
  
  if(menor < maior) {													 // se a varivel menor for menor que a variavel maior entao 
    pivo = menor; 													     // o pivo recebe o valor de menor
    i = menor;														     // o valor de menor é atribuido a i;
    j = maior;															 // o valor de maior é atribuido a j;
    
    
    while(i < j) {
      																	 // Incrementar i até obter um número maior que o elemento de pivô
      while(vetor[i] <= vetor[pivo] && i <= maior)
        i++;
      																	 // decrementar j obter um número menor que o elemento de pivô
      while(vetor[j] > vetor[pivo] && j >= menor)
        j--;
        
      if(i < j) {														 // se o valor de i for menor que o vallor de j
        temp = vetor[i];												 // temp recebe vetor na posicao i.
        vetor[i] = vetor[j];											 // vetor na posicao i recebe vetor na posicao j
        vetor[j] = temp;												 // vetor na posicao j recebe o valor da variavel temp
      }
    }
    
    
    temp = vetor[j];													 // O valor do vetor na posicao j é atribuido na variavel temp
    vetor[j] = vetor[pivo];												 // O vetor na posicao j recebe o vetor na posicao pivo
    vetor[pivo] = temp;													 // Por fim, o vetor na posicao pivo recebeo valor de temp
    
    
    quicksort(vetor, menor, j-1); 										 //Chama a funçao quicksort com o menor valor como inicial e j-1 como final.
    quicksort(vetor, j+1, maior);										 //Chama a função quicksort com o valor j+1 como inicial e o maior como final
  }
}
