#include <stdio.h>

int main (){

    printf("\n***********************************\n");
    printf("\nDESAFIO\n");
    printf("\n***********************************\n");

    int x;
    int y;

    printf("\nDigite o valor de X: ");
    scanf("%d", &x);
    printf("\nDigite o valor de Y: ");
    scanf("%d", &y);

    int m = x * y;
    printf("\nO resultado da multiplicação é: %d\n", m);

    return 0;
}