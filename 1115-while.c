#include <stdio.h>
int main(){
int i,s=0;  /*声明两个变量并赋值*/
i=1;  /*为变量赋值*/
while(i<=100){
 s=s+i;
 i++;
}
printf("%d\n",s);
return 0;
}