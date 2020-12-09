#include <stdio.h>
#include <stdlib.h>
int sum(int n){
    int y;
    if(n==1){
        y=1;
    }else{
        y=sum(n-1)+n;
    };
    return (y);
}
int main(){
    int n;
printf("请输入一个整数求累加和：");
scanf("%d",&n);
printf("%d\n",sum(n));
system("pause");
    return 0;
}