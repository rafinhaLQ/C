#include<stdio.h>
main(){
    int N, X, i, j;
    unsigned long long int quantGraos;
    scanf("%d", &N);
    for(i=0; i<N; i++){
        quantGraos=1;
        scanf("%d", &X);
        if(X!=64){
            for(j=0; j<X; j++){
                quantGraos*=2;
            }
            quantGraos/=12000;
        }
        else{
            for(j=0; j<X-1; j++){
                quantGraos*=2;
            }
            quantGraos/=6000;
        }
        printf("%lld kg\n", quantGraos);
    }
    return 0;
}