#include <stdio.h>
#include <stdlib.h>

int fat(int n) {
    if(n == 0 || n == 1){ //CASO BASE
        return 1;
    } else {
        return n * fat(n - 1); //CHAMADA RECURSIVA
    }
}

int main() {
    int num;

    printf("Digite o n�mero inteiro para calcular o fatorial: ");
    scanf("%d", &num);

    if (num < 0){
        printf("Fatorial n�o � definido para n�meros negativos.\n");
    } else {
        printf("O fatorial de %d � %d\n", num, fat(num)); //A FUN��O FAT VAI LEVAR O NUM QUE RECEBEU VALOR L� ENCIMA, E PASSA PELO PROCESSO FATORIAL
    }
    return 0;
}