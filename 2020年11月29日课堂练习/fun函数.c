#include <stdio.h>
#include <stdlib.h>
void fun(int x,int y);
int main()
{
int x=2;int y=3;
printf("���ú���ǰ��");
printf("x=%d,y=%d\n",x,y);
fun(x,y);
printf("���ú�����");
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
  printf("ִ�к����У�");
printf("x=%d,y=%d\n",x,y);
}