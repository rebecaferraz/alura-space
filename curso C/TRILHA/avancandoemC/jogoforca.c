#include <stdio.h>
#include <string.h> //biblioteca para usar a função strlen() que retorna o comprimento de uma string, ou seja, o número de caracteres que ela contém, excluindo o caractere nulo '\0' que indica o final da string. Isso é útil para percorrer a string e verificar cada caractere individualmente. 

int main (){
    char palavrasecreta[20];

    sprintf(palavrasecreta, "MELANCIA");

    int acertou = 0;
    int enforcou = 1;

    do{
        char chute;
        scanf("%c", &chute);

        for (int i = 0; i < strlen(palavrasecreta); i++){
            
            if(palavrasecreta[i] == chute){
                printf("\nA posição %d tem essa letra!", i);
            }
        }
        
    }while(!acertou && !enforcou ); // ! nega uma variavel booleana (0 ou 1), ou seja, !acertou é verdadeiro quando acertou é falso (0), e !enforcou é verdadeiro quando enforcou é falso (0). O loop continua enquanto ambos acertou e enforcou forem falsos, ou seja, enquanto o jogador não tiver acertado a palavra secreta e não tiver sido enforcado. O loop termina quando o jogador acerta a palavra secreta (acertou se torna verdadeiro) ou quando o jogador é enforcado (enforcou se torna verdadeiro).

    
    
    return 0;
}




// \0 é um caractere nulo usado para indicar o final de uma string em C. Ele é adicionado automaticamente ao final de uma string quando ela é criada ou modificada, e é usado para marcar o ponto onde a string termina. Isso permite que as funções de manipulação de strings saibam onde parar ao processar a string, evitando acessar memória além do final da string e causando erros ou comportamentos indesejados.