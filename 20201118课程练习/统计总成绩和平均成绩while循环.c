#include <stdio.h>
int main(){
int i=1; 
float x,s=0;  
while(i<7){ 
  printf("输入6门课程成绩，每输入完一次按回车键确认，\n当前是第 %d 次输入:",i);
  scanf("%f",&x);  
  s=s+x;
  i++;
}
printf("总成绩=%.2f，平均成绩=%.2f\n",s,s/i);
return 0;
}