#include<stdio.h>
#include<string.h>
main()
{
    int cont, N, cont2, ajd;
    ajd=0;
    while(scanf("%d", &N) && N!=0){
        int quant[N], maior=0, espacos;
        char nomes[N][51];
        //pegar as palavras
        for(cont=0; cont<N; cont++){
            fflush(stdin);
            scanf("%s", nomes[cont]);
            quant[cont]=strlen(nomes[cont]);
        }
        //ver qual é a maior
        for(cont=0; cont<N; cont++){
            maior = maior<strlen(nomes[cont])?strlen(nomes[cont]):maior;
        }
        //imprimir as strings já com espaço
        if(ajd!=0)
            printf("\n");
        for(cont=0; cont<N; cont++){
            espacos=maior-quant[cont];
            for(cont2=0; cont2<espacos; cont2++)
                printf(" ");
            printf("%s\n", nomes[cont]);
        }
        ajd++;
    }
    return 0;
}