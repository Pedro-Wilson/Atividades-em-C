#include<stdio.h>
int main (void) {
    
    float v1, v2, v3, meio;
    scanf("%f", &v1);
    scanf("%f", &v2);
    scanf("%f", &v3);

    if (v1 < v2 & v1 < v3)
        meio = v1;
    if (v2 < v1 & v2 < v3)
        meio = v2;
    else
        meio = v3;
    printf("%f", meio);

    return 0;
}