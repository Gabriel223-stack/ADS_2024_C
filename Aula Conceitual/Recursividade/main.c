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

    printf("Digite o número inteiro para calcular o fatorial: ");
    scanf("%d", &num);

    if (num < 0){
        printf("Fatorial não é definido para números negativos.\n");
    } else {
        printf("O fatorial de %d é %d\n", num, fat(num)); //A FUNÇÃO FAT VAI LEVAR O NUM QUE RECEBEU VALOR LÁ ENCIMA, E PASSA PELO PROCESSO FATORIAL
    }
    return 0;
}