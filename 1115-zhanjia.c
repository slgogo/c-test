#include <stdio.h>
int main(){
int a,b;
printf("输入两个变量：");
scanf("%d\t%d\t",&a,&b);
printf("当前输入的内容：a=%d,b=%d\n",a,b);

if(a&&b){
  printf("%d\t与%d\t都为真！\n",a,b);
}else
printf("%d\t与%d\t为假，0\n",a,b);
return 0;
}