#include<stdio.h>
#include<windows.h>
#include<time.h>
int main(){
    int a,b,i;
    scanf("%d",&a);
    if (a%2==1){
        a=a-1;
    }
    i=a;
    for(i=a;i>=0;i-=2){

        b+=i;

    }
    printf("%d",b);
    return 0;
}

