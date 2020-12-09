#include <stdio.h>
#include <stdlib.h>
void fun(int x,int y);  /*void声明一个无返回值函数，包含两个整型形参*/
int main(){
    int x=2,y=3;
    printf("调用函数前：");
    printf("x=%d,y=%d\n",x,y);  //输出调用函数前函数内变量初始值
    fun(x,y);  //调用函数，此时程序向上进入函数体
    printf("调用函数后：");
    printf("x=%d,y=%d\n",x,y);  /*调用函数后原赋值没产生变化，因为传值调用是单向作用，只在传入的函数内部产生变化。*/
    system("pause");
    return 0;
}
void fun(int x,int y){  //函数内部运行程序
  int t;  //两个数交换位置声明一个变量
  t=x;  //把x值暂存在变量t里面
  x=y;  //把y的值放到原来x的位置
  y=t;  //再把原来的x换到原来y的位置
  printf("执行fun函数中：");
  printf("x=%d,y=%d\n",x,y);  /*传值调用，传入的值在自定义函数中产生变化*/
}
/*如果函数调用在上，函数定义在下！
在函数调用语句之前，需要函数声明语句。*/