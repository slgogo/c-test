#include <stdio.h>
#define PI 3.1416  //定义一个符号常量

int main(){  //函数首部
  float r,c,s;  //定义三个浮点类型变量
  scanf("%f",&r);  //计算圆周率的函数
  c=2*PI*r;  //
  s=PI*r*r;  //πR的平方计算
  printf("c=%6.2f,s=%6.2f\n",c,s);
  return 0;
}