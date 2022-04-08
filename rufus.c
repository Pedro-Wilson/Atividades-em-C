#include<stdio.h>
int main(void){
    char escolha1, escolha2;
    scanf(" %c", &escolha1);
    scanf(" %c", &escolha2);

    if ((escolha1 == 'R' && escolha2=='S') || (escolha1 == 'S' && escolha2 == 'P') || (escolha1 == 'P' && escolha2 == 'R')) 
    {
        printf("\njog1");
        }
    else if ((escolha2 == 'R' && escolha1=='S') || (escolha2 == 'S' && escolha1 == 'P') || (escolha2 == 'P' && escolha1 == 'R')) 
    {
        printf("\njog2");
    }
    
    else
    {
        printf("\nempate\n");
    }
    return 0;
}