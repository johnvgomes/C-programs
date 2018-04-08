#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void buffer() {
	char d;
	while ((d = getchar() != '\n') && (d != EOF));
}
bool testar(bool teste, bool teste1) {
	if (teste1 == false) {
		printf("O tamanho não foi definido \n");
		system("pause");
		return false;
	}
	else if (teste == false) {
		printf("A função não foi definida \n");
		system("pause");
		return false;
	}

	else {
		return true;
	}
}
double **alocarmatriz(int a) {
	//fazer a alocação da matriz
	double **mat;
	mat = (double **)calloc(a, sizeof(double *));

	for (int i = 0; i <= a; i++) {
		mat[i] = (double*)calloc(a, sizeof(double));
	}

	return mat;
}
double *alocarvetor(int a) {
	double *x;
	x = (double *)calloc(a + 1, sizeof(double));
	return x;
}
void inserir(int tam, double **a) {
	for (int i = 0; i < tam; i++) {
		for (int j = 0; j < tam + 1; j++) {
			printf("Digite o valor para o elemento [%d][%d]: ", i, j);
			scanf("%lf", &a[i][j]);
			buffer();
		}
	}
}
void imprimir(int tam, double **a) {
	for (int i = 0; i < tam; i++) {
		printf("\n");
		for (int j = 0; j <= tam; j++) {
			printf("%.4lf	", a[i][j]);
		}
	}
	printf("\n\n");
}
void imprimiriterativa(int tam, int h, double **matx, double *veterro) {
	//printf("\nI	")
	printf("\n - %d	", h);
	for (int j = 0; j < tam; j++) {
		printf("%.4lf	", matx[0][j]);
	}
	printf("	");
	for (int j = 0; j < tam; j++) {
		printf("%.4lf	", veterro[j]);
	}

}
void copiar(double **a, double **b, int tam) {
	for (int i = 0; i < tam; i++) {
		for (int j = 0; j <= tam; j++) {
			a[i][j] = b[i][j];
		}
	}
}
void gaus(double **res, int tam, double *x) {
	double aux = 0, aux1 = 0;
	//fazer o triangulo
	for (int i = 0; i < tam - 1; i++) {		//coluna
		for (int j = 1; j < tam; j++) {			//linha
			if (j > i) {						//se a linha for maior que a coluna faz, senão não
				if (res[j][i] != 0) {
					aux = -(res[j][i] / res[i][i]);
					for (int k = 0; k <= tam; k++) {
						res[j][k] /= aux;      //todas  as colunas da linha J dividas elo auxiliar
						res[j][k] += res[i][k];    //todas as linhas somadas com a de cima salva pela debaixo
					}
					imprimir(tam, res);
				}
			}
		}
	}
	//Resolver as equações finais
	for (int i = tam - 1; i >= 0; i--) {			//da ultima linha até na primeira
		aux1 = 0;
		for (int j = tam; j >= 0; j--) {			//da ultima coluna até na primeira, fazendo só o que precisa
			if (i <= j) {						//se a posição da linha for menor ou igual a posição da coluna
												//se o valor da posição da linha for menor que o valor do tamanho da matriz, (ia a matriz é de 3 ele tem 0,1,2 e o 3 é o resultado, e não pode ser no mesmo valor por ser o valor a ser descoberto
				if (i < tam && i != j && j != tam) { //errei pois ele pegou o valor da ultima coluna que é o resultado
					aux1 += res[i][j];
				}
			}
		}
		if (res[i][tam] != 0) {
			res[i][tam] -= aux1;
			res[i][tam] /= res[i][i];
			x[i] = res[i][tam];
		}


		if (i > 0) {
			for (int k = 0; k < i; k++) {
				res[k][i] *= x[i];
			}
		}
	}
	for (int i = 0; i < tam; i++) {		//imprimir os valores para cada x encontrado
		printf("x%d:  %.4lf \n", (i + 1), x[i]);
	}
}
void jordan(double **res, int tam, double *x) {
	double aux = 0;
	//Calcula a diagonal principal
	for (int i = 0; i < tam; i++) {
		aux = 0;
		for (int j = 0; j < tam; j++) {
			if (i != j) {
				if (res[j][i] != 0) {
					aux = -res[i][i] / res[j][i];
					for (int k = 0; k <= tam; k++) {
						res[j][k] *= aux;
						res[j][k] += res[i][k];
					}
					imprimir(tam, res);
				}
			}
		}
	}
	//Resolver as equações finais
	for (int i = tam - 1; i >= 0; i--) {			//da ultima linha até na primeira
		if (res[i][tam] != 0) {
			res[i][tam] /= res[i][i];
			x[i] = res[i][tam];
		}
		else {
			x[i] = 0;
		}
	}
	for (int i = 0; i < tam; i++) {		//imprimir os valores para cada x encontrado
		printf("x%d:  %.4lf \n", (i + 1), x[i]);
	}
}
int quantidade() {
	int qtd = 0;
	printf("Digite a quantidade de iterações (maximo 100): ");
	scanf("%d", &qtd);
	buffer();
	if (qtd > 100 || qtd < 0) {
		qtd = 0;
		printf("Número de iterações inválido! \n");
		system("pause");
	}
	return qtd;
}
double errro() {
	double a = 0;
	printf("Digite o valor maximo de erro (maximo 1): ");
	scanf("%lf", &a);
	buffer();
	if (a > 1 || a < 0) {
		a = 0;
		printf("Erro inválido! \n");
		system("pause");

	}
	return a;
}
void jacobi(int qtd, double **res, double **matx, double *veterro, int tam, double erro) {
	double aux = 0, aux1 = 0;
	int h = 0;
	bool teste = false;
	//printf("\nI	x1	x2		e1	e2");
	while (teste == false) {
		for (int i = 0; i < tam; i++) {									//a linha anterior recebe a nova linha 
			matx[0][i] = matx[1][i];
		}
		for (int i = 0; i < tam; i++) {									//for para as linhas
			aux = aux1 = 0;
			for (int j = 0; j < tam; j++) {										//for para colunas 
				if (h != 0) {
					if (i != j) {
						aux += res[i][j] * matx[0][j];						//"resolve" a equação para saber o valor e salva em aux
					}
					aux1 += res[i][j] * matx[0][j];
				}
			}
			aux1 = -aux1 + res[i][tam];
			veterro[i] = fabs(aux1);
			if (h != 0) {
				aux = -aux + res[i][tam];
				aux /= res[i][i];
				fabs(aux);
				matx[1][i] = aux;
			}
		}
		if (h != 0) {
			imprimiriterativa(tam, h, matx, veterro);
		}
		h++;
		teste = true;
		for (int i = 0; i < tam; i++) {
			if (veterro[i] > erro) {
				teste = false;
			}
		}

		if (h > qtd) {
			teste = true;
		}
	}
}
void gausseidel(int qtd, double **res, double **matx, double *veterro, int tam, double erro) {
	double aux = 0, aux1 = 0;
	int h = 0;
	bool teste = false;
	while (teste == false) {
		for (int i = 0; i < tam; i++) {									//for para as linhas
			aux = aux1 = 0;
			for (int j = 0; j < tam; j++) {										//for para colunas 
				if (h != 0) {
					if (i != j) {
						aux += res[i][j] * matx[1][j];			//"resolve" a equação para saber o valor e salva em aux
					}
					aux1 += res[i][j] * matx[0][j];
				}
			}
			aux1 = -aux1 + res[i][tam];
			veterro[i] = fabs(aux1);
			if (h != 0) {
				aux = -aux + res[i][tam];
				aux /= res[i][i];
				fabs(aux);
				matx[0][i] = matx[1][i];
				matx[1][i] = aux;
			}
		}
		if (h != 0) {
			imprimiriterativa(tam, h, matx, veterro);
		}
		h++;
		teste = true;
		for (int i = 0; i < tam; i++) {
			if (veterro[i] > erro) {
				teste = false;
			}
		}
		if (h > qtd) {
			teste = true;
		}
	}
}

int main() {
	double **matriz = NULL, **res = NULL, *x = NULL, **matrizaux = NULL, *erroaux = NULL, erro = 0;
	setlocale(LC_ALL, "Portuguese");
	bool resp1 = true, teste = false, teste1 = false, tester = false;
	int resp = -1, tam = 0, qtd = 0, a = -1;

	while (resp != 0) {
		while (true) {
			if (resp1 == false) {
				// fazer for para ler a matriz do usuario
				printf("\n\nDigite os valores para  os valores da matriz \nObs: Caso o valor não esteja na formúla digite 0 \n");
				inserir(tam, matriz);
				teste = true;
			}
			system("cls");
			resp1 = true;			//reinicializar variaveis

			printf("\n------------------- CÁLCULO DE SISTEMAS LINEARES -------------------\n");
			if (teste == false) {
				printf("Nenhuma função declarada\n");
			}
			else {
				printf("Função atual: ");
				imprimir(tam, matriz);
			}

			printf("\n\n		1- Inserir Matriz \n		2- Alterar tamanho para a matriz (tamanho atual: %d) \n		3- Método de GAUSS \n"
				"		4- Método de JORDAN	\n		5- Método de JACOBI \n		6- Método de GAUSS-SEIDEL \n		0- Sair\n", tam);
			printf("Opção escolhida: ");
			scanf("%d", &resp);
			buffer();
			if (resp > 6 || resp < 0) {
				printf("Valor digitado inválido, digite novamente! \n ");
				system("pause");
			}
			else {
				break;
			}
		}
		switch (resp) {

		case 0:
			break;

		case 1:
			if (matriz == NULL) {
				printf("Defina primeiramente o tamanho da matriz com a opção número 2!\n");
				system("pause");
			}
			else {
				resp1 = false;
			}
			break;

		case 2:
			printf("Defina o tamanho da matriz (2 a 10): ");
			scanf("%d", &tam);
			buffer();
			while (tam > 10 || tam < 2) {
				printf("Valor digitado inválido, digite novamente: ");
				scanf("%d", &tam);
				buffer();
			}
			matriz = alocarmatriz(tam);
			res = alocarmatriz(tam);
			printf("Valor alterado para %d com sucesso \n", tam);
			system("pause");
			teste1 = true;
			teste = false;
			break;

		case 3:
			if (testar(teste, teste1) == true) {
				copiar(res, matriz, tam);
				x = alocarvetor(tam);
				gaus(res, tam, x);
				system("pause");
			}
			break;

		case 4:
			if (testar(teste, teste1) == true) {
				copiar(res, matriz, tam);
				x = alocarvetor(tam);
				jordan(res, tam, x);
				system("pause");
			}
			break;

		case 5:
			if (testar(teste, teste1) == true) {
				matrizaux = alocarmatriz(tam);
				erroaux = alocarvetor(tam);
				tester = false;
				qtd = 0;
				erro = 0;

				while (tester == false) {
					system("cls");
					printf("------------------ MÉTODO ITERATIVO (Valores iniciando em 0) -------------------\n\n		1- Definir quantidade de iterações (atual: %d)\n		"
						"2- Definir erro minimo a ser encontrado (Atual: %lf)\n		3- Calculo de Jacobi \n		0- Retornar \n		Opção escolhida: ", qtd, erro);
					scanf("%d", &a);
					buffer();

					if (a < 0 || a > 3) {
						printf("Opção não encontrada! Digite novamente! \n");
						system("pause");
					}
					else if (a == 0) {
						break;
					}
					else if (a == 3 && qtd == 0) {
						printf("Não é possivel realizar o calculo sem a quantidade de iterações! \n");
						system("pause");
					}
					else if (a == 3 && erro == 0) {
						printf("Não é possivel realizar o calculo sem o valor do erro! \n");
						system("pause");
					}
					else if (a == 1) {
						qtd = quantidade();

					}
					else if (a == 2) {
						erro = errro();
					}
					else {
						tester = true;
					}
				}

				jacobi(qtd, matriz, matrizaux, erroaux, tam, erro);			//chamar método iterativo jacobi
				printf("\n");
				system("pause");
			}
			break;

		case 6:
			if (testar(teste, teste1) == true) {
				matrizaux = alocarmatriz(tam);
				erroaux = alocarvetor(tam);
				tester = false;
				qtd = 0;
				erro = 0;

				while (tester == false) {
					system("cls");
					printf("------------------ MÉTODO ITERATIVO (Valores iniciando em 0) -------------------\n\n		1- Definir quantidade de iterações (atual: %d)\n		"
						"2- Definir erro minimo a ser encontrado (Atual: %lf)\n		3- Calculo de Gauss-Seidel \n		0- Retornar \n		Opção escolhida: ", qtd, erro);
					scanf("%d", &a);
					buffer();

					if (a < 0 || a > 3) {
						printf("Opção não encontrada! Digite novamente! \n");
						system("pause");
					}
					else if (a == 0) {
						break;
					}
					else if (a == 3 && qtd == 0) {
						printf("Não é possivel realizar o calculo sem a quantidade de iterações! \n");
						system("pause");
					}
					else if (a == 3 && erro == 0) {
						printf("Não é possivel realizar o calculo sem o valor do erro! \n");
						system("pause");
					}
					else if (a == 1) {
						qtd = quantidade();

					}
					else if (a == 2) {
						erro = errro();
					}
					else {
						tester = true;
					}
				}
				gausseidel(qtd, matriz, matrizaux, erroaux, tam, erro);			//chamar método iterativo jacobi
				printf("\n");
				system("pause");
			}
			//chamar método de gaus-seidel
			break;

		default:
			printf("\n\n----------- ERRO 404 -----------\n\n");
			break;
		}
	}

	system("pause");
	return 0;
}
