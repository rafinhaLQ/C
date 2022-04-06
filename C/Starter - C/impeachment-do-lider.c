#include<stdio.h>
main()
{
    int cont;
    float v, cont2, N;
    while(scanf("%f", &N)!=EOF){
        cont2=0;
        for(cont=0; cont<N; cont++){
            scanf("%f", &v);
            if (v==1)
                cont2++;
        }
        if(cont2>=((float)N*(0.66)))
            printf("impeachment\n");
        else
            printf("acusacao arquivada\n");
    }
    return 0;
}
