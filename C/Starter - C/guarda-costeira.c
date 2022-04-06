#include<stdio.h>
#include<math.h>
main(){
    int D, VF, VG;
    float DG;
    while(scanf("%d %d %d", &D, &VF, &VG)!=EOF){
        DG=sqrt((pow(D, 2)+144));
        if((DG/VG)<=(12/(float)VF))
            printf("S\n");
        else
            printf("N\n");
    }
    return 0;
}