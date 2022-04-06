#include<stdio.h>
main(){
    int d1, d2, N, rep;
    char letra;
    scanf("%d", &N);
    for(rep=0; rep<N; rep++){
        scanf("%d%c%d", &d1, &letra, &d2);
        if(d1==d2)
            printf("%d\n", d1*d2);
        else if(letra<91)
            printf("%d\n", d2-d1);
        else
            printf("%d\n", d1+d2);
    }
    return 0;
}