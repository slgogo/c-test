#include <stdio.h>
int main(){
int i;
for(i=100;i<200;i++){
if(i%4==2&&i%7==3&&i%9==5){
  printf("当前符合条件的数是：%d\n",i);
}
}
return 0;
}