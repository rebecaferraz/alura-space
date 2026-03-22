#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main (){

    int segundos = time(0);//time(0) retorna o número de segundos desde 1 de janeiro de 1970, ou seja, a data de início da era Unix. Isso é usado para garantir que a semente do gerador de números aleatórios seja diferente a cada vez que o programa é executado, resultando em uma sequência diferente de números aleatórios.   
    srand(segundos); //srand() é a função que define a semente para o gerador de números aleatórios. Ao passar o número de segundos como argumento, garantimos que a sequência de números aleatórios seja diferente a cada execução do programa.    


    int n1 = rand();
    int n2 = rand();

    printf("%d %d", n1, n2);

    return 0;
}