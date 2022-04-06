#include<stdio.h>
#include<math.h>
main()
{
    unsigned int N, X, cont, vetor, cont2;
    scanf("%d", &N);
    for(cont=0; cont<N; cont++){
        vetor=0;
        scanf("%d", &X);
        for (cont2=sqrt(X); cont2>1; cont2--){
            if(X%cont2==0)
                vetor++;
        }
        if(vetor==0)
            printf("Prime\n");
        else
            printf("Not Prime\n");
    }
    return 0;
}