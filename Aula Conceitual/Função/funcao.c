#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
int main(){
    float qui, gra;
    printf("Digite o peso quilos:\n");
    scanf("%f", &qui);
    gra = convertePeso(qui);
    printf("O peso e de %.1f gramas.\n", gra);
}

float convertePeso(float quilos){
    float gramas;
    gramas = quilos * 1000;
    return gramas;
}
*/

/*CRIE UM ALGORITMO QUE LEIA DOIS N√öMEROS E EXIBA O RESULTADO DA SOMA ENTRE ELES

int main(){
    int x, y, resultado;
    printf("Digite o primeiro n√∫mero:\n");
    scanf("%d", &x);
    printf("Digite o segundo n√∫mero:\n");
    scanf("%d", &y);
    resultado = x + y;
    printf("Resultado: %d.\n", resultado);
}
*/
/*
void somaDoisNumeros(){
    int x, y, resultado;
    printf("Digite o primeiro n√∫mero:\n");
    scanf("%d", &x);
    printf("Digite o segundo n√∫mero:\n");
    scanf("%d", &y);
    resultado = x + y;
    printf("Resultado: %d.\n", resultado);
}

int main(){
    somaDoisNumeros();
}
*/

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Vamos testar a acentuaÁ„o se est· funcionando corretamente!\n");
}