#include <stdio.h>
int main(){
int i,s=0;  /*定义两个变量设置S初始值*/
i=1;  /*为计数器变量设置初始值*/
while(i<=100){  /*变量循环体，符合条件判断循环执行里面的循环体*/
  s=s+i;  /*每次运算的和等于，上次的和加上当前运算的计数器次数*/
  i++;  //计数器每运行一次自增1，后缀形式，先自增再使用。
}
printf("%d\n",s);
return 0;
}