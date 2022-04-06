#include<stdio.h>
#include<string.h>
main(){
    int N, rep, L, rep2, cont, vetor;
    char palavra[51];
    scanf("%d", &N);
    for(rep=0; rep<N; rep++){
        vetor=0;
        scanf("%d", &L);
        for(rep2=0; rep2<L; rep2++){
            scanf("%s", palavra);
            for(cont=0; cont<strlen(palavra); cont++){
                vetor+=palavra[cont]-65;
                vetor+=rep2;
                vetor+=cont;
            }
        }
        printf("%d\n", vetor);
    }
    return 0;
}