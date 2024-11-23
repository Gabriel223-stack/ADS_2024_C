#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* PARA E FA�A
int main() {
	
	int i;
	
 Progressiva
	for(i = 1; i <= 100; i = i + 1) {
	
	if(i < 50) {
		printf("Valor menor que 50...%d\n", i);
	} else {
		printf("Valor maior que 50...%d\n", i);
	}
	
	printf("Aguarde...%d\n", i);
		
	}

	
 Regress�o
	for (i = 100; i >= 0; i--) {
		if(i < 50) {
		printf("Valor menor que 50...%d\n", i);
	} else {
		printf("Valor maior que 50...%d\n", i);
	}
}
	

	return 0;
}
*/

/* WHILE
int main() {
	int cont = 0;
		printf("Aguarde...");
	while(cont < 100) {
		printf(".");
		cont++;
	}
}
*/

/* DO WHILE
int main() {
	int cont = 0;
	
	do {
		printf("Aguarde...%d\n", cont);
		cont++;
	} while (cont <= 100);
	
	return 0;
}
*/

int main() {
	
	setlocale(LC_ALL, "");
	
	int opcao;
	
	do {
		printf("Digite uma op��o\n");
		printf("1 - Consultar saldo\n");
		printf("2 - Pagar fatura\n");
		printf("3 - Segunda via do cart�o\n");
		printf("4 - Estat�sticas de uso\n");
		printf("9 - Sair\n");
		fflush(stdin); //SERVE PARA OTIMIZAR OS DADOS NA VARI�VEL
		scanf("%d", &opcao);
		
		system("cls"); // LIMPA A TELA
		switch(opcao) {
			case 1: {
				printf("Consultando saldo do cart�o...\n");
				break;
			}
			case 2: {
				printf("Pagando fatura do cart�o...\n");
				break;
			}
			case 3: {
				printf("Emitindo segunda via do cart�o...\n");
				break;
			}
			case 4: {
				printf("Digite o valor estimado de gasto\n");
				float estimativaGasto;
				fflush(stdin);
				scanf("%f", &estimativaGasto);
				
				if(estimativaGasto > 0 && estimativaGasto < 1000) {
					printf("Ok, voc� est� gastando pouco\n");
				} else if(estimativaGasto >= 1000 && estimativaGasto < 2000) {
					printf("Opa, voc� est� gastando um pouco demais\n");
				} else {
					printf("Cuidado, voc� est� gastando demais");
				}
				
				break;
			}
			case 9: {
				printf("Saindo da conta...\n");
				break;
			}
			default: {
				printf("Op��o invalida...\n");
				break;
			}
			system("cls");
		}
	} while(opcao != 9);
}


