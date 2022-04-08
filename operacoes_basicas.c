#include <stdio.h>
// aluno : Pedro Wilson 
int main (){
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    //Valores da soma, subtração, multiplicação e resto da divisão em inteiro, um por linha.
    printf("%d", a+b);
    printf("%d", a-b);
    printf("%d", a*b);
    printf("%d", a%b);
    printf("%d", (double) a/b);
    return 0;
}