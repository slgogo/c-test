#include <stdio.h>
int main(){
  float a;  //声明一个单精度浮点变量
  double b;//声明一个双精度浮点变量b
  a=3.14159265358979323846;  //给单精度浮点变量赋值
  b=3.14159265358979323846;   //给双精度浮点变量赋值
  printf("a=%.20f\nb=%.20f\n",a,b);  //打印输出变量，%.20f表示使用小数点后精确20位数的f浮点型数据
  return 0;  //函数返回值
}
