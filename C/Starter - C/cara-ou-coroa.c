#include <stdio.h>
 
int main() {
    int N, R, i, X, Y;
    do{
        X=0;
        Y=0;
        scanf("%d", &N);
        if (N==0)
        {
            return 0;
        }
        
        for(i=0; i<N; i++){
            scanf("%d", &R);
            if(R==0){
                X++;
            }
            if(R==1){
                Y++;
            }
        }
        printf("Mary won %d times and John won %i times\n", X, Y);
    }while(N!=0);
    return 0;
}