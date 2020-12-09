#include <stdio.h>
#include <stdlib.h>
int input(int n);
int num(int n){
  int z;
  if(n==1){
      z=10;  /*设置递归出口基数为10，递归的最底层从10开始*/
  }else{
      z=num(n-1)+2;  /*递归计算当前数的累加和等于，上一位数（n-1)+2的和*/
  }
  return z;  /*返回得到的结果给函数*/
}
/*main函数执行开始*/
int main(){
    int n;
    printf("num(N)位数的和累加是：%d\n",num(input(n)));
    system("pause");
return 0;
}

/*自定义函数开始*/
int input(int n){
    printf("请输需要求累加和的数：");
    scanf("%d",&n);
    // printf("输入递归出口值：");
    // scanf("%d",&n1);
    // printf("n=%d,n1=%d\n",n,N1);
    return n;
}