#include<stdio.h>
#include<string.h>
main(){
    int N, cont, cont2, portao=0;
    char palavra[51];
    scanf("%d", &N);
    fflush(stdin);
    for(cont=0; cont<N; cont++){
        scanf("%[^\n]s", palavra);
        fflush(stdin);
        for(cont2=0; cont2<strlen(palavra); cont2++){
            if(palavra[cont2]!=32&&portao==0){
                printf("%c", palavra[cont2]);
                portao=1;
            }
            else if(palavra[cont2]==32)
                portao=0;
        }
        portao=0;
        printf("\n");
    }
    return 0;
}