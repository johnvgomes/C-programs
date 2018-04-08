int tamanho_lista(Lista* li);

int lista_cheia(Lista* li);

int lista_vazia(Lista* li);

int insere_lista_inicio(Lista* li, struct aluno al);

int	insere_lista_final(Lista* li, struct aluno al)

void libera_lista(Lista* li);


//ESTRUTURA ALUNO

struct aluno{
	
	int matricula;
	char nome[30];n1,n2,n3;
	float 
};

// PONTEIRO LISTA REFERENCIA A ESTRUTURA ELEMENTO
typedef struct elemento *Lista;


//ESTRUTURA ELEMENTO

struct elemento {
	
	
	struct elemento *anterior
	struct aluno dados;
	struct elemento *proximo
};

// APELIDO (definicao) PARA ELEMENTO : ELEM
typedef struct elemento Elem;


//funcao para retornar uma lista
Lista* cria_lista();

Lista* cria_lista(){
	
	
	//mallocando ponteiro de ponteiro
	
	Lista* li = (Lista*) malloc(sizeof(Lista));
	if(li != NULL)
		*li =NULL;
	return li;
}

int tamanho_lista(Lista* li)

{

	int cont =0;
	
	if(li == NULL) 
	{
	cont =0;
	}
	else{
	
	Elem* no = *li;
	
	while(no != NULL){
		cont ++;
		no = no->prox;
	}
	}
	return cont;
	
}

void libera_lista(Lista* li){
	
	if(li != NULL){
		Elem* no;
		while((*li) != NULL){
			
			no = *li;
			*li = (*li)->prox;
			free(no);
		}
		free(li);
			
	}
	
	int lista_cheia(Lista* li){
		
		return 0;
	}
	
	int lista_vazia(Lista* li){
		if(li == NULL){
		
			return l;
		}
		if(*li ==NULL){
			return l;
		}
		return 0;
	}
	
int	insere_lista_inicio(Lista* li, struct aluno al){
		
		if(li == NULL) 
		{
		return 0;
		
		}
		
		Elem* no = (Elem*) malloc(sizeof(Elem));
		
		
		if(no == NULL) {
			
		return 0;	
		}
		
		no->dados =al;
		no->prox = (*li);
		no>ant= NULL;
		
		if(*li != NULL){
			(*li)-> ant = no;
			*li = no;
			return 1;
		
		}
		
int	insere_lista_final(Lista* li, struct aluno al){
	
	if(li == NULL) {
		return 0;
	}
	
	Elem *no = (Elem*) malloc (sizeof(Elem));
	if(no == NULL) 
	{
		return 0;
	}
	
	no -> dados = al;
	no -> prox = NULL;
	
	if((*li) == NULL){
		no->ant = NULL;
		*li = no;
	}
	
	else{
		Elem *aux = *li;
		
		while(aux->prox != NULL){
			
			aux = aux->prox;
			aux->prox = no;
			no->ant= aux;
		}
		
	}
	
	return 1;
	
}

int insere_lista_ordenada(Lista* li, struct aluno al){
	
	if(li == NULL) {
		
	return 0;
	
	}
	Elem *no = (Elem*) malloc(sizeof(Elem));
	if(no == NULL) {
	
	return 0;	
	}
	no->dados =al;
	
	if(lista_vazia(li)){
		
		no->prox = NULL;
		no->ant = NULL;
		*li = no;
		
		return 1;
	}
	else{
		
		Elem *ante, *atual = *li;
		
		while(atual != NULL && atual->dados.matricula < al.matricula){
			ante = atual;
			atual = atual-> prox;
		}
		
		if(atual == *li){
			no->ant =NULL;
			(*li)->ant = no;
			no->prox = (*li);
			*li = no;
		}else{
			
			no -> prox = ante-> prox;
			no->ant = ante;
			ante-> prox = no;
			
			if(atual != *li){
				atual->ant =no;
			}
			
		}
		
		return 1;
	}
}
	
	
//programa principal 


int main(void){
	
//ponteiro para ponteiro
Lista *li;
	
li = cria_lista();

libera_lista(li);
	
int tamanho = tamanho_lista(li);	

int ltcheia = lista_cheia(li);

int ins_in = insere_lista_inicio(li, dados_aluno);

int ins_fin = insere_lista_final(li, dados_aluno);

int ins_ord = insere_lista_ordenada(li, dados_aluno);

if(lista_cheia(li)){
	
}

if(lista_vazia(li)){
	
}

}


