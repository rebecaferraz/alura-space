#include <stdio.h>
#include <stdlib.h> //biblioteca para usar a função abs() que calcula o valor absoluto de um número, ou seja, a distância entre o número e zero, sem considerar o sinal.    
#include <time.h> //biblioteca para usar a função time() que retorna o número de segundos desde 1 de janeiro de 1970, ou seja, a data de início da era Unix. Isso é usado para garantir que a semente do gerador de números aleatórios seja diferente a cada vez que o programa é executado, resultando em uma sequência diferente de números aleatórios.   

//DEFINE uma constante, nao mudam. Mais fácil de ler.
//#define NUMERO_DE_TENTATIVAS 5 //maiusculo para indicar que é uma constante, não é obrigatório, mas é uma convenção. O valor da constante não pode ser alterado durante a execução do programa.

//função principal
int main (){
    
    //imprime o cabeçalho do jogo
    printf("\n***********************************\n");
    printf("\n* Bem vindo ao jogo de adivinhação! *\n");
    printf("\n***********************************\n");
    
    int segundos = time(0);
    srand(segundos); //srand() é a função que define a semente para o gerador de números aleatórios. Ao passar o número de segundos como argumento, garantimos que a sequência de números aleatórios seja diferente a cada execução do programa.    

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100; //o operador % é o operador de módulo, que retorna o resto da divisão entre numerogrande e 100. Isso garante que o número secreto seja um número entre 0 e 99, ou seja, um número de dois dígitos.  
    
    int chute; //int ganhou = 0; //variável para controlar se o jogador ganhou ou não, inicialmente é 0 (falso)  
    // variável sem conteúdo vai ser o lixo, ou seja, um valor aleatório que estava na memória naquele momento. Por isso é importante inicializar as variáveis antes de usá-las.
   
    int tentativas = 0;
    double pontos = 1000;  // double para permitir que os pontos possam ter casas decimais, ou seja, para que o jogador possa perder pontos de forma mais precisa, dependendo da diferença entre o chute e o número secreto. 
                          //Se fosse apenas um inteiro, a perda de pontos seria arredondada para o número inteiro mais próximo, o que poderia resultar em uma perda de pontos menos precisa.

    while (1){

        printf("\nTentativa %d\n", tentativas+1);
        printf("\nQual é o seu chute? ");
        
        scanf("%d", &chute);
        tentativas++; //incrementa o contador de tentativas a cada tentativa, independentemente de ser correta ou não.  
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
        
        double pontosperdidos = abs(chute - numerosecreto) / (double)2; //casting é a ideia de converter um tipo de variavel/numeral para outro
        if (pontosperdidos < 0){
            pontosperdidos = pontosperdidos * -1; //multiplicar por -1 para transformar o valor negativo em positivo, ou seja, para garantir que a perda de pontos seja sempre um valor positivo, independentemente da ordem dos números na subtração.
        }
        pontos = pontos - pontosperdidos; //pontos recebe o valor atual de pontos menos a perda de pontos calculada, ou seja, o jogador perde pontos com base na diferença entre o chute e o número secreto. Quanto maior a diferença, maior a perda de pontos. 
    }
    
    printf("\nFim de Jogo!\n");
    printf("Você acertou em %d tentativas.\n", tentativas);
    printf("Total de pontos: %.1f\n", pontos); //.1f para exibir apenas uma casa decimal, ou seja, para arredondar o valor dos pontos para uma casa decimal.
                                              // Se fosse apenas %f, o valor dos pontos seria exibido com todas as casas decimais, o que poderia resultar em um número muito longo e difícil de ler.

    return 0;
}