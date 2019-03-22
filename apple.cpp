#include <iostream>
#include<cstdio>
#include<windows.h>
using namespace std;

int main()
{
    int a,N,b,c,nanugi,hap=0;
    printf("hak ggo su 1~100\n");
    scanf("%d",&N);
    for(a=1;a<=N;a++){
        printf("%dbun jae hakgo의 haksang 수와 sagua 수 입력\n",a);
        Sleep(1000);
        printf("1. haksang 수\n");
        scanf("%d",&b);
        printf("2. sagua 수\n");
        scanf("%d",&c);
        nanugi=c%b;
        printf("%d bun jae hakgo 남는건 %d\n",a,nanugi);
        hap=hap+nanugi;
        Sleep(1000);
        printf("gigum kagi hap un %d\n",hap);
    }
    printf("chong hap 은 %d",hap);
    return 0;
}
