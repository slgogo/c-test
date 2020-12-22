#include <stdio.h>
#include <stdlib.h>
#define M 10
int main(){
    static int a[M]={-12,0,6,16,23,56,80,100,110,115};
    int n,low,mid,heigh,found;
    low=0;
    heigh=M-1;
    found=0;
    printf("输入查找数字：\n");
    while(scanf("%d",&n)!=1){
        printf("输入的数据类型有误！\n请重新输入！\n");
        getchar();
    }
    while (low<=heigh)
    {
        mid=(low+heigh)/2;
        if(n==a[mid]){
            found=1;break;
        }else if(n>a[mid]){
            low=mid+1;
        }else{
            heigh=mid-1;
        }
    }
    if(found==1){
        printf("输入的数为：%d,查找到的中间数位：%d\n",n,mid);
    }else{
        printf("这个数不在范围：%d\n",n);
    }
    system("pause");
    return 0;
}