#include<stdio.h>
int main(void){
    float primeiro_jg, valor, dif;
    char segundo_jg;

    printf("Digite o primeiro chute : ");
    scanf("%f", &primeiro_jg);
    printf("Digite o segundo chute 'M' ou 'm' : ");
    scanf(" %c", &segundo_jg);
    printf("Digite o valor real do produto : ");
    scanf("%f", &valor);

    dif = (primeiro_jg - valor);

    if (primeiro_jg == valor)
        printf("primeiro");
    else if ((segundo_jg == 'M') && (primeiro_jg > valor) || ((segundo_jg == 'm') && (primeiro_jg < valor)))
        printf("segundo");
    else(void)
        printf("primeiro");

    return 0;
}