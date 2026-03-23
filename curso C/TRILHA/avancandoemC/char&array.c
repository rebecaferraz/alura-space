#include <stdio.h>

int main (){
    char letra1 = 'M'; //char é um tipo de dado que representa um único caractere
    char letra2 = 'E';
    char letra3 = 'L';
    char letra4 = 'A';
    char letra5 = 'N';
    char letra6 = 'C';
    char letra7 = 'I';
    char letra8 = 'A';

  printf("A palavra secreta é: %c%c%c%c%c%c%c%c\n", letra1, letra2, letra3, letra4, letra5, letra6, letra7, letra8);
                               //%c é um especificador de formato usado para imprimir um caractere individual.

    int notas[10]; //declaração de um array de inteiros com 10 elementos (dentro dos colchetes o numero de posicoes do array)
    notas[0] = 10; //posicoes do array começam a partir do 0, ou seja, a primeira posicao é 0, a segunda é 1, e assim por diante.
    notas[2] = 9;
    notas[3]= 8;
    notas [9] = 4;

    printf("notas %d %d %d\n", notas[0], notas[2], notas[9]);

     return 0;
}