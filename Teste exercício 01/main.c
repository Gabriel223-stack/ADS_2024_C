
#include <stdio.h>

int main() {
    int maiorIdade;

    // Solicita a idade do usu�rio
    printf("Digite sua idade: ");
    scanf("%d", &maiorIdade); // Corrige o uso do scanf removendo "\n"

    do {
        // Avalia a idade e exibe mensagens apropriadas
        if (maiorIdade > 16 && maiorIdade < 18) {
            printf("N�o atingiu a maioridade\n");
            printf("Espere completar a idade m�nima\n");
        } else if (maiorIdade >= 18 && maiorIdade < 60) {
            printf("Maior de idade\n");
        } else if (maiorIdade >= 60) {
            printf("Aposentado\n");
        } else {
            printf("Menor de idade.\n");
        }

        // Solicita outra idade para continuar ou terminar o programa
        printf("Digite outra idade (ou um n�mero negativo para sair): ");
        scanf("%d", &maiorIdade);

    } while (maiorIdade >= 0); // O loop continua enquanto a idade n�o for negativa

    printf("Programa encerrado.\n");
    return 0;
}


