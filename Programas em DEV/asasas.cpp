#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int lim = 10;
double x0, x1, x2, x3, x4, x5, a = 0, b = 0, xn = 0, fxn = 1, flxn = 0, fan = 0, fbn = 0, delta = 0, erro = 0;

void buffer() {
	char d;
	while ((d = getchar() != '\n') && (d != EOF));
}

double funcao() {
	
	fxn = x5 * pow(xn, 5) + x4 * pow(xn, 4) + x3 * pow(xn, 3) + x2 * pow(xn, 2) + (x1 * xn) + x0;
	
	return fxn;
}

double funcaoderivada() {
	
	flxn = (x5 * 5) * pow(xn, 4) + (x4 * 4) * pow(xn, 3) + (x3 * 3) * pow(xn, 2) + (x2 * 2) * xn + x1;

	return flxn;
}

int main() {
	void buffer(void);
	bool teste = false, resp1 = true;
	int op = 0, resp = -1, n = 0;
	double aux = 0;
	
	while (resp != 0) {
		
		
		
		while (true) {
			if (resp1 == false) {
				printf("\n\nDigite os valores para cada grau de X \nObs: Caso o valor nao esteja na formula digite 0 \n");
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
				printf("X^0: ");
				scanf("%lf", &x0);
				buffer();
				teste = true;
			}

			system("cls");
			resp1 = true;			//reinicializar variaveis
			n = 0;
			
			
			printf("\n---------------------- CALCULO DA RAIZ DA EQUACAO ----------------------\n");
			if (teste == false) {
				printf("Nenhuma funcao declarada\n");
			}
			else if (teste == true) {
				printf("Funcao atual: ");
				if (x5 != 0) {
					printf("(%.2lfx^5) + ",x5);
				}
				if (x4 != 0) {
					printf("(%.2lfX^4) + ",x4);
				}
				if (x3 != 0) {
					printf("(%.2lfx^3) + ",x3);
				}
				if (x2 != 0) {
					printf("(%.2lfx^2) + ",x2);
				}
				if (x1 != 0) {
					printf("(%.2lfx) + ",x1);
				}
				if (x0 != 0) {
					printf("(%.2lf)",x0);
				}
				printf("\n");

			}

			printf("\n		1- Inserir Funcao \n		2- Alterar limite (limite atual: %d) \n		3- Metodo de Bissecao \n		4- Metodo de Cordas \n		"
				"5- Metodo de Pegaso \n		6- Metodo de Newton 		\n		0- Sair\n",lim);
			printf("Opcao escolhida: ");
			scanf("%d", &resp);
			buffer();
			if (resp > 6 || resp < 0) {
				printf("Valor digitado inválido, digite novamente: ");
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
			teste == true;
			break;

		case 2:
			printf("Defina a quantida maxima de iteracoes: ");
			scanf("%d", &lim);
			buffer();
			break;

		case 3:
			if (teste == false) {
				printf("Nenhuma funcao inserida.\n");
				system("pause");
				break;
			}
			
			printf("\nDefina o limite A para encontrar a raiz: ");
			scanf("%lf", &a);
			printf("Defina o limite B para encontrar a raiz: ");
			scanf("%lf", &b);
			xn = a;
			fan = funcao();				//descobre o valor de fa
			xn = b;
			fbn = funcao();				//descobre o valor de fb
			if ((fan * fbn) >= 0) {
				printf("\n	WARNING: A funcao nao possui raizes. \n");
				system("pause");
				break;
			}
			printf("Defina o erro para fxn: ");
			scanf("%lf", &erro);
			buffer();
		

			printf("N    AN	       FAN	  BN        FBN	       XN        FXN \n");

			while (true){
				xn = a;
				fan = funcao();				//descobre o valor de fa
				xn = b;
				fbn = funcao();				//descobre o valor de fb

				xn = (a + b) / 2;
				fxn = funcao();
				printf("%2.d   %2.6lf  %2.6lf  %2.6lf  %2.6lf  %2.6lf  %2.6lf \n\n", n, a, fan, b, fbn, xn, fxn);

				if (fxn >= 0) {
					if (fan >= 0) {
						a = xn;
					}
					else{
						b = xn;
					}
				}
				else if (fxn < 0){
						if (fan < 0) {
							a = xn;
						}
						else {
							b = xn;
						}
				}
				
				if (fabs(fxn) < erro) {
					printf("Erro esperado obtido. \n");
					system("pause");
					break;
				}
				
				n++;
				if (n == lim) {
					printf("Chegou ao limite de interações \n");
					system("pause");
					break;
				}
			}
			break;

		case 4:
			if (teste == false) {
				printf("Nenhuma funcao inserida.\n");
				system("pause");
				break;
			}
			printf("\nDefina o limite A para encontrar a raiz: ");
			scanf("%lf", &a);
			buffer();
			printf("Defina o limite B para encontrar a raiz: ");
			scanf("%lf", &b);
			buffer();
			xn = a;
			fan = funcao();				//descobre o valor de fa
			xn = b;
			fbn = funcao();				//descobre o valor de fb
			if ((fan * fbn) >= 0) {
				printf("\n	WARNING: A funcao nao possui raizes. \n");
				system("pause");
				break;
			}

			printf("Defina o erro para fxn: ");
			scanf("%lf", &erro);
			buffer();


			printf("N    AN	       FAN	 BN        FBN	       XN        FXN \n");
			n = 1;
			while (true) {
				xn = a;
				fan = funcao();				//descobre o valor de fa
				xn = b;
				fbn = funcao();				//descobre o valor de fb

				xn = a - (fan / (fbn - fan)) * (b - a);
				fxn = funcao();
				printf("%2.d   %2.6lf  %2.6lf  %2.6lf  %2.6lf  %2.6lf  %2.6lf \n\n", n, a, fan, b, fbn, xn, fxn);

				if (fxn >= 0) {
					if (fan >= 0) {
						a = xn;
					}
					else {
						b = xn;
					}
				}
				else if (fxn < 0) {
					if (fan < 0) {
						a = xn;
					}
					else {
						b = xn;
					}
				}
				if (fabs(fxn) < erro) {
					printf("Erro esperado obtido. \n");
					system("pause");
					break;
				}

				n++;
				if (n == lim) {
					printf("Chegou ao limite de interações \n");
					system("pause");
					break;
				}
			}
			break;

		case 5:
			if (teste == false) {
				printf("Nenhuma funcao inserida.\n");
				system("pause");
				break;
			}
			printf("\nDefina o limite A para encontrar a raiz: ");
			scanf("%lf", &a);
			buffer();
			printf("Defina o limite B para encontrar a raiz: ");
			scanf("%lf", &b);
			buffer();
			xn = a;
			fan = funcao();				//descobre o valor de fa
			xn = b;
			fbn = funcao();				//descobre o valor de fb
			if ((fan * fbn) >= 0) {
				printf("\n	WARNING: A funcao nao possui raizes. \n");
				system("pause");
				break;
			}
			printf("Defina o erro para fxn: ");
			scanf("%lf", &erro);
			buffer();

			printf("N    AN	         FAN	       BN          FBN	       Delta	      XN          FXN \n");
			n = 0;
			while (true){
				if (n  <= 1) {
					xn = a;
					fan = funcao();				//descobre o valor de fa
					xn = b;
					fbn = funcao();				//descobre o valor de fb
				}
				
				delta = (fbn / (fbn - fan)) * (b - a);
				
				if (n == 0) {
					xn = b;
					aux = b;
				}
				else {
					xn = aux - delta;
					aux = xn;
				}

				fxn = funcao();
				printf("%2.d   %2.6lf  %2.6lf  %2.8lf  %2.6lf  %2.6lf  %2.6lf  %2.6lf	\n", n, a, fan, b, fbn, delta, xn, fxn);

				if (fxn * fbn < 0) {
					a = b;
					fan = fbn;
				}
				else {
					fan = (fan * fbn) / (fbn + fxn);
				}
				b = aux;
				fbn = fxn;

				if (fabs(fxn) < erro) {
					printf("Erro esperado obtido. \n");
					system("pause"); 
					break;
				}

				n++;
				if (n == lim) {
					printf("Chegou ao limite de interações \n");
					system("pause");
					break;
				}
			}
			break;

		case 6:
			if (teste == false) {
				printf("Nenhuma funcao inserida.\n");
				system("pause");
				break;
			}
			printf("\nDefina o limite para encontrar a raiz: ");
			scanf("%lf", &a);
			buffer();
			printf("Defina o erro para fxn: ");
			scanf("%lf", &erro);
			buffer();
	
			n = 0;
			printf("N  XN          FXN       FLXN  \n");

			while (true){
				if (n == 0) {
					xn = (double) a;
				}
				else {
					xn = xn - (fxn / flxn);
				}
				funcao();
				funcaoderivada();
				printf("%2.d  %.6lf  %.6lf  %.6lf \n\n", n, xn, fxn, flxn);

				if (fabs(fxn) < erro) {
					printf("Erro esperado obtido. \n");
					system("pause"); 
					break;
				}

				n++;
				if (n == lim) {
					printf("Chegou ao limite de interações \n");
					system("pause");
					break;
				}
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
