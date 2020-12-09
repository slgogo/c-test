#include <stdio.h>
int main(){
int n=0,x;
while(n<5){
	scanf("%d",&x);
    printf("您输出的成绩：%d\n",x);
    n++;
}
printf("您输入的成绩：%d\t\n",x);
return 0;
}