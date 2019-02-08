#include <stdio.h>
#include <windows.h>
int main()
{
    int a,b,i,j;
    printf("ㅈ ㅓ ㅇ ㅅ ㅜ ㅇ ㅣ ㅂ ㄹ ㅕ ㄱ 10보다 작음 \n ");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        if (i==3 || i==6 || i==9){
            printf("X");
        }else{
            printf("%d",i);
        }
    }

    return 0;
}
