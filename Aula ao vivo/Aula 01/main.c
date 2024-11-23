#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Esse � o programa principal

int main() {
	
	/*printf("Ola Mundo!");
	
	setlocale(LC_ALL, "") = Servem para aceitar as acentuações
	
	int valor1 = 10;
	int valor2 = 20;
	int resultado = valor1 + valor2;
	
	float preco = 10.50;
	
 	preco = preco * 1.1; */
 	
 	/*printf("Digite a sua idade\n");
 	int idade;
 	scanf("%d", &idade);
 	
 	printf("A idade digitada foi %d\n", idade);
 	
 	if (idade > 18){
 		if (idade == 20) {
 			printf("Você tem 20 anos, parabêns\n");20
		 }
 		printf("Maior de idade\n");
 		
 		}else{
 			printf("Menor de idade\n");
		}
	*/
	
	printf("Digite o dia da semana\n");
	printf("1 - Domingo\n");
	printf("2 - Segunda\n");
	
	int diaSemana;
	scanf("%d", &diaSemana);
	
	switch(diaSemana){
		case 1: {
			printf("Domingo foi selecionado\n");
			break;
		}
		case 2: {
			printf("Segunda foi selecionado\n");
			break;
		}
		default : {
			printf("Dia inv�lido\n");
			break;
		}
	}
	
	return 0;
}

// \n : Quebra de linha
