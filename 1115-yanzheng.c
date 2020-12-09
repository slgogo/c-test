#include <stdio.h>
int main(){
int j;  /*定义一个整型变量*/
int password=123456,pass;  /*定义密码变量和存储输入的变量*/
printf("请输入密码：\n");
scanf("%d",&pass);  /*使用输入获取函数得到输入的密码*/
if(pass==password){  /*if语句判断如果输入的密码和程序内的密码常量值相同则运行内部代码段*/
  printf("请选择业务，输入0或1,2,3,：\n");
  printf("0:余额查询\n 1：取款\n 2：改密\n 3：电子转账\n");
  scanf("%d",&j);
  switch(j){
  case 0: printf("余额查询进行中，请稍后...\n");break;
  }
}
return 0;
}