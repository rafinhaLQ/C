#include<stdio.h>
main()
{
    int A1, A2, A3, s1, s2, s3;
    scanf("%d", &A1);
    scanf("%d", &A2);
    scanf("%d", &A3);
    s1=0;
    s2=0;
    s3=0;
    s1=(A2*2)+(A3*4);
    s2=(A1*2)+(A3*2);
    s3=(A1*4)+(A2*2);
    if(s1<=s2&&s1<=s3){
        printf("%d\n", s1);
    }
    if(s2<s1&&s2<=s3){
        printf("%d\n", s2);
    }
    if(s3<s1&&s3<s2){
        printf("%d\n", s3);
    }
    return 0;
}
