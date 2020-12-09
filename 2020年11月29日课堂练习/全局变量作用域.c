#include <stdio.h>
#include <stdlib.h>
int a=3;             /*定义全局变量a，初始化为3,作用域从定义点源文件结束*/
void f()   
{  
a++;           //全局变量a增值1,a=4
   printf("f函数中，a=%d\n",a);   /*输出全局变量a的值*/ 
}
int main()
{  
f();            //调用f函数
a*=6;            //全局变量a与6相乘赋值给a,a=24          
 printf("main函数中，a=%d\n",a);       /*输出全局变量a的值*/
 system("pause");
return 0;
}