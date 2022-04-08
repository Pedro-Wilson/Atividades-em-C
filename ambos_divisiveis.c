    #include <stdio.h>
    int main (void){
        int div, div2;
        scanf("%d", &div);
        scanf("%d", &div2);

        if  (div2&&div % 3 == 0 || div2&&div % 5 == 0 )
            printf("sim");
        else
            printf("nao");
        

        return 0;
    }

