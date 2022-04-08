#include<stdio.h>
int main(void){
    float s_base, s_corrigido;

    printf("Digite o salario a ser corrigido : ");
    scanf("%f", &s_base);

    if (s_base <= 1000.00){
        s_corrigido = (s_base + (s_base * 0.20));
    }

    else if (s_base <= 1500.00){
        s_corrigido = (s_base + (s_base * 0.15));
    }
    else if (s_base <= 2000){
        s_corrigido = (s_base + (s_base * 0.10));
    }
    else if (s_base > 2000){
        s_corrigido = (s_base + (s_base * 0.05));
    }
    printf("\n%.2f\n", s_corrigido);

    system("\npause");
    return 0;

}