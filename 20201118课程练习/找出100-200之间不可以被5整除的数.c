#include <stdio.h>
int main(){
int i,n=0; /*循环体计数器i，循环次数计数器n；*/
for(i=100;i<=200;i++){  /*使用第一个表达式的值与第二个表达式的条件做比较，如果为真则执行内部循环体，执行完毕再执行表达式3的自增1*/
	if(i%5==0) /*如果能被5整除则直接跳出循环*/
	  continue;
	  printf("%6d",i);
	  n++;  /*循环计数器自增1*/
	  if(n%10==0)  /*循环计数器能被10整除(表示输出10次)则输出一个换行符*/
	  printf("\n");
}
printf("\n");
return 0;
}