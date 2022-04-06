#include<stdio.h>
#include<string.h>
main(){
    char texto[50];
    int s, a, i;
    s=0;
    a=0;
    while(gets(texto)!=EOF){
        for(i=0; i<strlen(texto); i++){
            if(texto[i]==95&&s==0){
                printf("<i>");
                s++;
            }
            else if(texto[i]==95&&s==1){
                printf("</i>");
                s=0;
            }
            else if(texto[i]==42&&a==0){
                printf("<b>");
                a++;
            }
            else if(texto[i]==42&&a==1){
                printf("</b>");
                a=0;
            }
            else{
                printf("%c", texto[i]);
            }
        }
        printf("\n");
    }
    return 0;
}