#include <stdio.h>
 
int main() {
    int N;
    scanf("%d", &N);
    printf("%d:", N/3600);
    N%=3600;
    printf("%d:", N/60);
    N%=60;
    printf("%d", N);
    return 0;
}