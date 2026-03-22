#include <stdio.h>

//DEFINE uma constante, nao mudam. Mais fáacil de ler.
#define NUMERO_DE_TENTATIVAS 5 //maiusculo para indicar que é uma constante, não é obrigatório, mas é uma convenção. O valor da constante não pode ser alterado durante a execução do programa.

//função principal
int main (){
    
    //imprime o cabeçalho do jogo
    printf("\n***********************************\n");
    printf("\n* Bem vindo ao jogo de adivinhação! *\n");
    printf("\n***********************************\n");

    int numerosecreto = 50;
    
    int chute;

// inicio | condiçao | incremento 
    for(int i=1; i <= NUMERO_DE_TENTATIVAS; i++){
        printf("\nTentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);

        printf("\nQual é o seu chute? ");
        scanf("%d", &chute);

        printf("\nSeu chute foi %d\n", chute);

        int acertou = chute == numerosecreto; // Em C, 0 é falso e 1 é verdadeiro. Por isso o Inteiro, C transforma em inteiro
        int maior = chute > numerosecreto;
        int menor = chute < numerosecreto;

    if (acertou){
            printf("\nVocê acertou. Parabéns!\n");
            printf("Jogue novamente, você é um bom jogador!\n");

            break; //parar o loop 
    }

    else if(maior){
        printf("Seu chute foi maior que o número secreto.\n");
        }

    else{
        printf("Seu chute foi menor que o número secreto.\n");
        }
                
    }
    
    printf("\nFim de Jogo!\n");

    return 0;
}