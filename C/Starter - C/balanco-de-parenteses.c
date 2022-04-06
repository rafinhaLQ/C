#include<stdio.h>
#include<string.h>
main()
{
    char expressao[1000];
    int cont, auxAbre=0, auxFecha=0;
    while(scanf("%s", expressao)!=EOF){
        for(cont=0; cont<strlen(expressao); cont++){
            auxAbre=0;
            auxFecha=0;
            if(expressao[cont]=='(')
                auxAbre++;
            else if(expressao[cont]==')')
                auxFecha++;
        }
        if(auxAbre-auxFecha==0)
            printf("correct\n");
        else
            printf("incorrect\n");
    }
    return 0;
}
