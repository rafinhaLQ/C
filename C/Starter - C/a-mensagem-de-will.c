#include <stdio.h>
 
int main() {
    char alfabeto[26];
    int N, l;
    while(scanf("%s", alfabeto)!=EOF){
        scanf("%d", &N);
        while (N--){
            scanf("%d", &l);
            printf("%c", alfabeto[l-1]);
        }
        printf("\n");
    }
    return 0;
}