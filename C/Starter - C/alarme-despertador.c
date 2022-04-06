#include <stdio.h>
main(){
    int H1, M1, H2, M2, minutos;
    while(scanf("%d %d %d %d", &H1, &M1, &H2, &M2)&&H1+M1+H2+M2!=0){
        minutos=0;
        if(H1>H2){
            if(M1<M2)
                minutos+=M2-M1;
            else if(M1>M2){
                minutos+=(60-M1)+M2;
                H1++;
            }
            minutos+=((24-H1)+H2)*60;
            H1--;
        }
        else if(H1<H2){
            if(M1>M2){
                minutos+=(60-M1)+M2;
                H1++;
            }
            else if(M1<M2)
                minutos+=M2-M1;
            minutos+=(H2-H1)*60;
            H1--;
        }
        else{
            if(M1==M2)
                minutos+=24*60;
            else if(M1<M2)
                minutos+=M2-M1;
            else if(M1>M2){
                minutos+=(60-M1)+M2;
                H1++;
                minutos+=((24-H1)+H2)*60;
                H1--;
            }
        }
        printf("%d\n", minutos);
    }
    return 0;
}