#include <stdio.h>
#include <stdlib.h>
void fun();
int main(){
    int password=123456,pass,add;
    int i,j;
    do{
        i++;  
        if(i>3){printf("您输错三次密码，账号已被锁定。");};
        printf("请输入您的密码：");
        scanf("%d",&pass);
          if(pass==password){
            fun();
            break;
          }else{
        printf("您输入的密码错误！\n");
          }
    }while(i<4);
    system("pause");
    return 0;
}
void fun(){
  printf("欢迎来到选择界面\n");
  printf("++++++++++++++++++++++++++++++++++++\n");
  printf("0-存款；1-取款；2-余额；3-返回上层；\n");
  printf("++++++++++++++++++++++++++++++++++++\n");
}