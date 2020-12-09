#include <stdio.h>
#include <stdlib.h>
void f1(int n){
  int m;
  if(n>100){
    m=n-10;
  }else
  {
      m=n+11;
  }
  printf("正在执行f1函数，函数中的变量m=%d\n",m);
}
int main(){
int m;
printf("请输入一个整数：");
scanf("%d",&m);
printf("\n调用函数前,main函数中变量m=%d\n",m);
  f1(m);  //调用f1函数，传值调用
  printf("\n调用函数后,main函数中变量m=%d\n",m);
  system("pause");
    return 0;
}