#include<stdio.h>
#include<math.h>
main(){
    int A, B, C;
    float hipotenusa, cat1, cat2;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    if(A>=(B+C)||B>=(C+A)||C>=(A+B)){
        printf("Invalido\n");
        return 0;
    }
    else{
        if(A==B&&A==C){
            printf("Valido-Equilatero\n");
            printf("Retangulo: N\n");
            return 0;
        }


        if(A!=B&&A!=C&&B!=C){
            printf("Valido-Escaleno\n");
        }
        if(A==B&&B!=C){
            printf("Valido-Isoceles\n");
        }
        if(A==C&&B!=C){
            printf("Valido-Isoceles\n");
        }
        if(C==B&&A!=C){
            printf("Valido-Isoceles\n");
        }

        

        if(A>B&&A>C){
            hipotenusa=A;
            cat1=B;
            cat2=C;
        }
        if(B>A&&B>C){
            hipotenusa=B;
            cat1=A;
            cat2=C;
        }
        if(C>B&&C>A){
            hipotenusa=C;
            cat1=B;
            cat2=A;
        }


        if(hipotenusa==sqrt(pow(cat1, 2)+pow(cat2, 2))){
            printf("Retangulo: S\n");
        }
        else{
            printf("Retangulo: N\n");
        }
    }
    
    return 0;
}