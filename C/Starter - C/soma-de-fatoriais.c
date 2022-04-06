#include<stdio.h>
main(){
    int M, N, i;
    long long int F1, F2;
    while ((scanf("%d %d", &M, &N)) != EOF){
        F1=1;
        F2=1;
        for(i=M; i>0; i--){
            F1*=i;
        }
        for(i=N; i>0; i--){
            F2*=i;
        }
        printf("%lld\n", F1+F2);
    }
    return 0;
}