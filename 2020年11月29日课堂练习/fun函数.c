#include <stdio.h>
#include <stdlib.h>
void fun(int x,int y);
int main()
{
int x=2;int y=3;
printf("调用函数前：");
printf("x=%d,y=%d\n",x,y);
fun(x,y);
printf("调用函数后：");
printf("x=%d,y=%d\n",x,y);
system("pause"); 
return 0;
}
void fun(int x,int y)
{
  int t;
  t=x;
  x=y;
  y=t;
  printf("执行函数中：");
printf("x=%d,y=%d\n",x,y);
}