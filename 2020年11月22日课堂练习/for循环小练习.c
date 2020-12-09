#include <stdio.h>
int main(){
int i,x[5];
printf("请您输入五个整数：");
for(i=0;i<5;i++)
{
  scanf("%d",&x[i]);
}
printf("您输入的5个数是：");
for(i=0;i<5;i++){
  printf("%-3d",x[i]);
}
printf("\n");
return 0;
}