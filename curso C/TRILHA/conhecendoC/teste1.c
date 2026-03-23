#include <stdio.h>
#include <stdlib.h>

int a = 3;
int b = 2;

int main(){
    double pontos = a / (double)b; // (double) casting para converter o valor de b para double antes de realizar a divisão, garantindo que o resultado seja um número de ponto flutuante (com casas decimais) em vez de um número inteiro.  
    //o casting é necessário porque, em C, quando ambos os operandos de uma divisão são inteiros, o resultado é um inteiro, mesmo que a variável que recebe o resultado seja do tipo double. Isso ocorre porque a divisão é realizada como uma divisão inteira, e o resultado é truncado para um número inteiro.
    // Ao converter um dos operandos para double, a divisão é realizada como uma divisão de ponto flutuante, e o resultado é um número de ponto flutuante com casas decimais.    
    printf("pontos: %.1f\n", pontos);

    double pi = 3.1415;
    int piconvertido = (int)pi;
    printf("%f convertido para inteiro: %d", pi, piconvertido);
// casting de double perde informação, ou seja, a parte decimal é descartada, e o valor é truncado para o número inteiro mais próximo. 
    return 0;
}