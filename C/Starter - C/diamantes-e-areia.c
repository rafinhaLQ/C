#include<stdio.h>
#include<string.h>
main(){
    int N, aux, rep, cont, resultado;
    char mineracao[1001];
    scanf("%d", &N);
    for(rep=0; rep<N; rep++){
        resultado=0;
        aux=0;
        scanf("%s", mineracao);
        for(cont=0; cont<strlen(mineracao); cont++){
            if(mineracao[cont]==60){
                aux++;
            }
            else if(mineracao[cont]==62&&aux!=0){
                aux--;
                resultado++;
            }
        }
        printf("%d\n", resultado);
    }
    return 0;
}