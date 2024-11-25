#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int i;
    for (i = 0; i < 10; i ++){
        printf("Este é o incremento para i: %d\n", i);
        i = i + 1;
    }
    
    return 0;
}