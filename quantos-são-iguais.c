#include <stdio.h>
int main(void){
    int j1, j2, j3;
    scanf("%d", &j1);
    scanf("%d", &j2);
    scanf("%d", &j3);


    if (j1 == j2 & j2 == j3 || j2 == j1 & j2 == j3)
        printf("3");
        else 
             if (j1 == j2 || j2 == j3 || j1 == j3)
                printf("2");
    else 
        printf("0");

    return 0;
}