#include <stdio.h>

int main(){

    int numero;
    printf("Digite um número inteiro para ver a tabuada desse número até 10: ");
    scanf("%d", &numero);

    for (int i = 0; i <= 10; i++){
        int multiplicacao = numero * i;
        printf("%d x %d = %d\n", numero, i, multiplicacao);

    }
}