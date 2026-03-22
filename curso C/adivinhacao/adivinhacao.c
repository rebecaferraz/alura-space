#include <stdio.h>

//DEFINE uma constante, nao mudam. Mais fáacil de ler.
//#define NUMERO_DE_TENTATIVAS 5 //maiusculo para indicar que é uma constante, não é obrigatório, mas é uma convenção. O valor da constante não pode ser alterado durante a execução do programa.

//função principal
int main (){
    
    //imprime o cabeçalho do jogo
    printf("\n***********************************\n");
    printf("\n* Bem vindo ao jogo de adivinhação! *\n");
    printf("\n***********************************\n");

    int numerosecreto = 50;
    
    int chute;
    //int ganhou = 0; //variável para controlar se o jogador ganhou ou não, inicialmente é 0 (falso)  
    int tentativas = 1;

    while (1){

        printf("\nTentativa %d\n", tentativas+1);
        printf("\nQual é o seu chute? ");
        
        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);
       
        if (chute < 0){
            printf("Você não pode chutar números negativos!! \n");
           // i--;
            //decrementa o contador para não contar a tentativa inválida   
            continue; //pula para a próxima iteração do loop, ou seja, para a próxima tentativa, sem executar o restante do código dentro do loop para essa tentativa.  
        } 

        int acertou = chute == numerosecreto; // Em C, 0 é falso e 1 é verdadeiro. Por isso o Inteiro, C transforma em inteiro
        int maior = chute > numerosecreto;
        //int menor = chute < numerosecreto;

        if (acertou){
            printf("\nVocê acertou. Parabéns!\n");
            printf("Jogue novamente, você é um bom jogador!\n");

            break; //parar o loop 
            //ganhou = 1; //ganhou recebe 1 (verdadeiro) para indicar que o jogador ganhou, mas não é necessário, pois o loop já será interrompido com o break. 
        }

        else if(maior){
            printf("Seu chute foi maior que o número secreto.\n");
        }

        else{
            printf("Seu chute foi menor que o número secreto.\n");
        }

        tentativas++; //incrementa o contador de tentativas a cada tentativa, independentemente de ser correta ou não.  
                
    }
    
    printf("\nFim de Jogo!\n");
    printf("Você acertou em %d tentativas.\n", tentativas);

    return 0;
}