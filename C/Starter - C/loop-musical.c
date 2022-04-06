//NÃO RESOLVIDA ;)
#include<stdio.h>
main()
{
    int N, cont, H[3], desceOuSobe, resultado;
    while(scanf("%d", &N)!=0){
        scanf("%d", &H[0]);
        scanf("%d", &H[1]);
        if(H[0]>H[1])
            desceOuSobe=1;
        else if(H[0]<H[1])
            desceOuSobe=2;
        for(cont=2; cont<N; cont++){
            scanf("%d", &H[0]);
            if(desceOuSobe==1&&H[1]<H[0])
                resultado++;
            else if(desceOuSobe==2&&H[1]>H[0])
                resultado++;
            H[1]=H[0];
            scanf("%d", &H[0]);
        }
        printf("%d\n", resultado);
    }
    return 0;
}

