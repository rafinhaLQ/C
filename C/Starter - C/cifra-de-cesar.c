#include<stdio.h>
#include<string.h>
main(){
    int N, numeroCaracteres, i, j, k;
    char cifra[50];
    scanf("%d", &N);
    for (i = 0; i<N; i++){
        scanf("%s", cifra);
        scanf("%d", &numeroCaracteres);
        for(j=0; j<strlen(cifra); j++){
            for(k=0; k<numeroCaracteres; k++){
                cifra[j]-=1;
                if(cifra[j]==64){
                    cifra[j]=90;
                }
            }
            printf("%c", cifra[j]);
        }
        printf("\n");
    }    
    return 0;
}