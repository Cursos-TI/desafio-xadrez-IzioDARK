#include <stdio.h>

void MovimentoTorre(int torre)
{
    if (torre > 0)
{
    printf("Torre move-se %d casa(s) para a cima \n");
    MovimentoTorre(torre - 1);
}

}

int main()
{

    int torre, bispo, rainha;
    int cavalo;
    

    printf("Escolha qual peça vai movimentar...\n");
    printf("1.Torre \n");
    printf("2.Bispo \n");
    printf("3.Rainha \n");
    printf("4.Cavalo \n");
    scanf("%d", &torre, &bispo, &rainha, &cavalo);
   
    //Movimento da Torre.
    
    switch (torre){
    case 1:
    MovimentoTorre(7);
    break;
    /////////////////////

    //Movimento do Bispo.
    
    
    case 2:
        printf("Você escolheu o Bispo! \n");
        bispo = 0 + 1;
    
    while (bispo <= 5){
        printf("Bispo move-se %d casa(s) na diagonal direita \n", bispo);
        bispo++;
        
    } break;
    //////////////////////
    
    //Movimento da Rainha.
    
    
    case 3:
        printf("Você escolheu a Rainha! \n");
        rainha = 0 + 1;
    do{
        printf("Rainha move-se %d casa(s) para a esquerda \n", rainha);
        rainha++;
    } while (rainha <= 8); break;
    //////////////////////

    //Movimento do Cavalo.

    case 4:
        printf("Você escolheu o Cavalo! \n");
        
    while (cavalo--){
        
        for (cavalo = 0; cavalo <= 2; cavalo++)
        {
        printf("Cavalo move-se %d casa(s) para cima! \n");
        }
        
        printf("Cavalo move-se %d casa(s) para a direita! \n");
        
    }   
    break;
    }

    return 0;


}