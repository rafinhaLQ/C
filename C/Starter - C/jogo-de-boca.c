#include<stdio.h>
main()
{
    char numero[10^100];
    char *letra = numero;
    int soma = 0;
    scanf("%s", numero);
    while (*letra!='\0'){
        soma += (*letra) - '0';
        letra++;
    }
    if(soma%3==0){
        printf("0\n");
    }
    else{
        soma++;
        if(soma%3==0){
            printf("2\n");
        }
        else{
            printf("1\n");
        }
    }
    return 0;
}