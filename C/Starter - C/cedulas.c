#include<stdio.h>
main()
{
    int N;
    scanf("%d", &N);
    printf("%d nota(s) de R$ 100,00\n", N/100);
    if(N>=100){
        N%=100;
    }
    printf("%d nota(s) de R$ 50,00\n", N/50);
    if(N>=50){
        N%=50;
    }
    printf("%d nota(s) de R$ 20,00\n", N/20);
    if(N>=20){
        N%=20;
    }
    printf("%d nota(s) de R$ 10,00\n", N/10);
    if(N>=10){
        N%=10;
    }
    printf("%d nota(s) de R$ 5,00\n", N/5);
    if(N>=5){
        N%=5;
    }
    printf("%d nota(s) de R$ 2,00\n", N/2);
    if(N>=2){
        N%=2;
    }
    printf("%d nota(s) de R$ 1,00\n", N/1);
    if(N>=1){
        N%=1;
    }
    return 0;
}
