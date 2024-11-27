#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese_brazilian");

    int i;
    for (i = 0; i < 10; i ++){
        printf("Este é o incremento para i: %d\n", i);
    }
    
    return 0;
}