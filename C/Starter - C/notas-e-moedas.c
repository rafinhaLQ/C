#include <stdio.h>
 
int main() {
    double N;
    int aux;
    scanf("%lf", &N);
    aux=N;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100,00\n", aux/100);
    if(N>=100){
        N=((N/100)-(aux/100))*100;
        aux=N;
    }
    printf("%d nota(s) de R$ 50,00\n", aux/50);
    if(N>=50){
        N=((N/50)-(aux/50))*50;
        aux=N;
    }
    printf("%d nota(s) de R$ 20,00\n", aux/20);
    if(N>=20){
        N=((N/20)-(aux/20))*20;
        aux=N;
    }
    printf("%d nota(s) de R$ 10,00\n", aux/10);
    if(N>=10){
        N=((N/10)-(aux/10))*10;
        aux=N;
    }
    printf("%d nota(s) de R$ 5,00\n", aux/5);
    if(N>=5){
        N=((N/5)-(aux/5))*5;
        aux=N;
    }
    printf("%d nota(s) de R$ 2,00\n", aux/2);
    if(N>=2){
        N=((N/2)-(aux/2))*2;
        aux=N;
    }
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1,00\n", aux/1);
    if(N>=1){
        N-=aux;
    }
    N*=100;
    aux=N;
    printf("%d moeda(s) de R$ 0,50\n", aux/50);
    if(N>=50){
        N=((N/50)-(aux/50))*50;
        aux=N;
    }
    printf("%d moeda(s) de R$ 0,25\n", aux/25);
    if(N>=25){
        N=((N/25)-(aux/25))*25;
        aux=N;
    }
    printf("%d moeda(s) de R$ 0,10\n", aux/10);
    if(N>=10){
        N=((N/10)-(aux/10))*10;
        aux=N;
    }
    printf("%d moeda(s) de R$ 0,05\n", aux/5);
    if(N>=5){
        N=((N/5)-(aux/5))*5;
        aux=N;
    }
    printf("%d moeda(s) de R$ 0,01\n", aux/1);
    return 0;
}