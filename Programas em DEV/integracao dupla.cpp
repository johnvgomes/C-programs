#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

double x0, x1, x2, x3, x4, x5, y11, y2, y3, y4, y5, vet[10][10],vet1[10];
int lim = 3;

void buffer() {
	char d;
	while ((d = getchar() != '\n') && (d != EOF));
}
double funcao(double y) {
	double fxy =  y5 * pow(y, 5) + y4 * pow(y, 4) + y3 * pow(y, 3) + y2 * pow(y, 2) + (y11 * y) + x0 ;
	return fxy;
}
double fx(double x) {
	double f = x5 * pow(x, 5) + x4 * pow(x, 4) + x3 * pow(x, 3) + x2 * pow(x, 2) + (x1 * x);
	return f;
}
double funint(double vet[10][10],int i) {
	double f = 0;
	if (lim == 3) {
		f = vet[i][0] + 3 * vet[i][1] + 3 * vet[i][2] + vet[i][3];
	}
	else if (lim == 6) {
		f = vet[i][0] + 3 * vet[i][1] + 3 * vet[i][2] + 2 * vet[i][3] + 3 * vet[i][4] + 3 * vet[i][5] + vet[i][6];
	}
	else {
		f = vet[i][0] + 3 * vet[i][1] + 3 * vet[i][2] + 2 * vet[i][3] + 3 * vet[i][4] + 3 * vet[i][5] +
			2 * vet[i][6] + 3 * vet[i][7] + 3 * vet[i][8] + vet[i][9];
	}


	return f;
}
double funint1(double vet[10]) {
	double f = 0;
	if (lim == 3) {
		f = vet[0] + 3 * vet[1] + 3 * vet[2] + vet[3];
	}
	else if (lim == 6) {
		f = vet[0] + 3 * vet[1] + 3 * vet[2] + 2 * vet[3] + 3 * vet[4] + 3 * vet[5] + vet[6];
	}
	else {
		f = vet[0] + 3 * vet[1] + 3 * vet[2] + 2 * vet[3] + 3 * vet[4] + 3 * vet[5] +
			2 * vet[6] + 3 * vet[7] + 3 * vet[8] + vet[9];
	}


	return f;
}

int main() {
	setlocale(LC_ALL, "Portuguese");
	void buffer(void);
	bool resp1 = true, teste = false, teste1 = false;
	int resp = -1;
	float lim_ext_sup = 0, lim_ext_inf = 0, lim_int_sup = 0, lim_int_inf = 0, int_ext = 0, int_int = 0;
	double aux = 0;

	while (resp != 0) {

		while (true) {
			if (resp1 == false) {
				printf("\n\nDigite os valores para cada grau de X \nObs: Caso o valor não esteja na formúla digite 0 \n");
				printf("X^5: ");
				scanf("%lf", &x5);
				buffer();
				printf("X^4: ");
				scanf("%lf", &x4);
				buffer();
				printf("X^3: ");
				scanf("%lf", &x3);
				buffer();
				printf("X^2: ");
				scanf("%lf", &x2);
				buffer();
				printf("X^1: ");
				scanf("%lf", &x1);
				buffer();
				
				printf("\nDigite os valores para cada grau de Y \nObs: Caso o valor não esteja na formúla digite 0 \n");
				printf("Y^5: ");
				scanf("%lf", &y5);
				buffer();
				printf("Y^4: ");
				scanf("%lf", &y4);
				buffer();
				printf("Y^3: ");
				scanf("%lf", &y3);
				buffer();
				printf("Y^2: ");
				scanf("%lf", &y2);
				buffer();
				printf("Y^1: ");
				scanf("%lf", &y11);
				buffer();
				printf("\nDigite o valor para a constante da função. Obs: Caso o valor n]ao esteja na formúla digite 0 \n");
				printf("C: ");
				scanf("%lf", &x0);
				buffer();
				teste = true;
			}
			system("cls");
			resp1 = true;			//reinicializar variaveis

			printf("\n--------------- CÁLCULO DA INTEGRAL DUPLA (2ª Regra de Simpsons) ---------------\n");
			if (teste == false) {
				printf("Nenhuma função declarada\n");
			}
			else {
				printf("Função atual: ");
				if (x5 != 0) {
					printf("(%.2lfx^5) + ", x5);
				}
				if (x4 != 0) {
					printf("(%.2lfX^4) + ", x4);
				}
				if (x3 != 0) {
					printf("(%.2lfx^3) + ", x3);
				}
				if (x2 != 0) {
					printf("(%.2lfx^2) + ", x2);
				}
				if (x1 != 0) {
					printf("(%.2lfx) + ", x1);
				}
				if (y5 != 0) {
					printf("(%.2lfy^5) + ", y5);
				}
				if (y4 != 0) {
					printf("(%.2lfy^4) + ", y4);
				}
				if (y3 != 0) {
					printf("(%.2lfy^3) + ", y3);
				}
				if (y2 != 0) {
					printf("(%.2lfy^2) + ", y2);
				}
				if (y11 != 0) {
					printf("(%.2lfy) + ", y11);
				}
				if (x0 != 0) {
					printf("(%.2lf)", x0);
				}
				printf("\n");

			}

			if (teste1 == false) {
				printf("limites não definidos ");
			}
			else {
				printf("limites: Sup Ext: %.0f | Inf Ext: %.0f | Sup Int: %.0f | "
					"Inf Int: %.0f", lim_ext_sup, lim_ext_inf, lim_int_sup, lim_int_inf);
			}

			printf("\n\n		1- Inserir Função \n		2- Inserir limite para as integrais \n		3- Alterar numero de divisões (duvisões atuais: %d) \n"
				"		4- Calcular Integral	\n		0- Sair\n", lim);
			printf("Opção escolhida: ");
			scanf("%d", &resp);
			buffer();
			if (resp > 4 || resp < 0) {
				printf("Valor digitado inválido, digite novamente: ");
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
			resp1 = false;
			teste = true;
			break;

		case 2:
			printf("Limite superior da integral externa: ");
			scanf("%f", &lim_ext_sup);
			buffer();
			printf("Limite inferior da integral externa: ");
			scanf("%f", &lim_ext_inf);
			buffer();
			printf("Limite superior da integral interna: ");
			scanf("%f", &lim_int_sup);
			buffer();
			printf("Limite inferior da integral interna: ");
			scanf("%f", &lim_int_inf);
			buffer();
			teste1 = true;
			break;

		case 3:
			printf("Defina a quantida de divisões (3,6 ou 9): ");
			scanf("%d", &lim);
			buffer();

			while (lim % 3 != 0 || lim > 10) {
				printf("Valor digitado inválido, digite novamente: ");
				scanf("%d", &lim);
				buffer();
			}
			printf("Valor alterado para %d com sucesso \n", lim);
			system("pause");
			break;

		case 4:
			int_ext = (lim_ext_sup - lim_ext_inf) / lim;
			int_int = (lim_int_sup - lim_int_inf) / lim;

			if (teste == false) {
				printf("A função não foi definida \n");
				system("pause");
				break;
			}
			else {
				system("cls");
				printf("Função das integrais em forma literal: \n  ");
				if (lim == 3) {
					printf("I = 3*h/8 * (y0 + 3*y1 + 3*y2 + y3) \n");
					if (teste1 == true) {
						printf("Intervalo externo: %.2f  | Intervalo interno: %.2f \n", int_ext, int_int);
					}
				}
				else if (lim == 6) {
					printf("I = 3*h/8 * (y0 + 3*y1 + 3*y2 + 2*y3 + 3*y4 + 3*y5 + y6) \n");
					if (teste1 == true) {
						printf("Intervalo externo: %.2f  | Intervalo interno: %.2f \n", int_ext, int_int);
					}
				}
				else {
					printf("I = 3*h/8 * (y0 + 3*y1 + 3*y2 + 2*y3 + 3*y4 + 3*y5 + 2*y6 + 3*y7 + 3*y8 + y9) \n");
					if (teste1 == true) {
						printf("Intervalo externo: %.2f  | Intervalo interno: %.2f \n", int_ext, int_int);
					}
				}
				system("pause");

				printf("\nFunção da integral externa:	\n  ");
				if (lim == 3) {
					printf("I = 3*h/8 * (g(0) + 3*g(1) + 3*g(2) + g(3)) \n");
					if (teste1 == true) {
						printf("Intervalo: %.2f  | (g = funcao da integral interna) \n", int_ext);
					}
				}
				else if (lim == 6) {
					printf("I = 3*h/8 * (g(0) + 3*g(1) + 3*g(2) + 2*g(3) + 3*g(4) + 3*g(5) + g(6)) \n");
					if (teste1 == true) {
						printf("Intervalo: %.2f  | (g = função da integral interna) \n ", int_ext);
					}
				}
				else {
					printf("I = 3*h/8 * (g(0) + 3*g(1) + 3*g(2) + 2*g(3) + 3*g(4) + 3*g(5) + 2*g(6) + 3*g(7) + 3*g(8) + (g9) \n");
					if (teste1 == true) {
						printf("Intervalo: %.2f  | (g = função da integral interna) \n ", int_ext);
					}
				}
				system("pause");

				printf("\nFunção da integral interna:	\n  ");
				if (lim == 3) {
					printf("I = 3*h/8 * (y0 + 3*y1 + 3*y2 + y3) \n");
					if (teste1 == true) {
						printf("Intervalo: %.2f \n", int_int);
					}//fazer o da interna também
				}
				else if (lim == 6) {
					printf("I = 3*h/8 * (y0 + 3*y1 + 3*y2 + 2*y3 + 3*y4 + 3*y5 + y6) \n");
					if (teste1 == true) {
						printf("Intervalo: %.2f \n ", int_int);
					}
				}
				else {
					printf("I = 3*h/8 * (y0 + 3*y1 + 3*y2 + 2*y3 + 3*y4 + 3*y5 + 2*y6 + 3*y7 + 3*y8 + y9) \n");
					if (teste1 == true) {
						printf("Intervalo: %.2f \n ", int_int);
					}
				}
				system("pause");
			}
						
			if (teste1 == false) {
				printf("Os limites não foram definidos para realizar o cálculo \n");
				system("pause");
			}
			else {
				system("cls");
				printf("Elementos da integral externa: ");
				printf("\nI	|	x \n");		//mostra os elementos utilizado nas contas das integrais
				for (int i = 0; i <= lim; i++) {
					printf("%d	|    %.2f \n", i, (lim_ext_inf + (int_ext * i)));
				}

				printf("\nElementos da integral interna: ");
				printf("\nI	|	y \n");				//mostra os elementos utilizado nas contas das integrais
				for (int i = 0; i <= lim; i++) {
					printf("%d	|    %.2f \n", i, (lim_int_inf + (int_int * i)));
				}
				//fazer os calculos de g individuais e mostrar
				for (int i = 0; i <= lim; i++) {			//cada i representa o valor de x para a integral externa
					aux = fx((lim_ext_inf + (i * int_ext)));		// cada y representa o valor da integral interna
					for (int j = 0; j <= lim; j++) {				//as matrizes tem o i como externa e o j como interna
						vet[i][j] = funcao((lim_int_inf + (j * int_int)));
						vet[i][j] = vet[i][j] + aux;
					}
				}

				printf("\nValores obtidos a partir dos limites (2ª regra Simpson)");
				for (int j = 0; j <= lim; j++) {
					printf("\ng(%d):	", j);
					for (int i = 0; i <= lim; i++) {
						printf("%.2lf		", vet[i][j]);
					}
				}
				printf("\n\n");

				//fazer para as 4 interações com laço 
				printf("Aplicação da integral: \n");
				for (int i = 0; i <= lim; i++) {
					aux = funint(vet, i);
					vet1[i] = (3 * int_int * aux) / 8;
					printf("	%.2lf	", vet1[i]);
				}
				aux = funint1(vet1);
				aux = (3 * int_ext * aux) / 8;
				printf("\n\nResultado final da integral dupla: %.4lf", aux);
				printf("\n\n");
				system("pause");
			}
			break;

		default:
			printf("\n\n----------- ERRO 404 -----------\n\n");
			break;
		}
	}

	system("pause");
	return 0;
}
