#include <stdio.h>
int f2(int m);  /*声明一个函数形参*/
int f1(int n)  /*定义一个函数和形参*/
{
  int y;
  if(n>5) /*设置条件，实参大于5则执行另一个函数*/
  {
    y=f2(n);
  }else  /*条件不成立执行以下表达式*/
  {
    y=2*n;
  }
  return y;  /*返回表达结果y的值，调用的f2()函数*/
}
int f2(int m)  /*被f1()函数调用，传入的参数为n的值*/
{
  int x;
  x=2*m;  /*用传入的n的实参做参数进行计算返回x值*/
  return x;
}
int main()
{
int a;  /*定义一个输入变量*/
scanf("%d",&a);  /*获取用户输入*/
printf("%d\n",f1(a));  /*输出执行f1函数，并传入获取输入的实参作为参数*/
return 0;
}