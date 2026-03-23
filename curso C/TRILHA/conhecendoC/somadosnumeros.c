#include <stdio.h>

int main(){
    int soma = 0;
    for(int i = 1; i<=100; i++){
        soma = soma +i; //soma recebe o valor atual de soma mais o valor de i, ou seja, soma vai acumulando a soma dos números de 1 a 100.  
    }
    printf("A soma eh %d",soma);
    return 0;
}