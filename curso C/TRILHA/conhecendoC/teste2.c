#include <stdio.h>
#include <stdlib.h>

//abs transforma o número para positivo, ou seja, retorna o valor absoluto do número, que é a distância entre o número e zero, sem considerar o sinal. Por exemplo, abs(-3) retorna 3, e abs(3) também retorna 3.
int main(){

    int a = abs(3);
    int b = -3;

    int c = abs(a*b);

    printf("%d\n", c);

   return 0;
}