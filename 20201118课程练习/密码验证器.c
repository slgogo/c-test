#include <stdio.h>
int main(){
float pass;
int j,number,password=123456;
printf("请输入您的银行密码：");
scanf("%d",&j);
if(j==password){
  printf("您的密码输入正确，请您继续选择其他业务：\n");
  printf("0.余额查询，1.取款，2.存款，3.其他业务，4.返回上一层:\t");
  scanf("%d",&number);
  switch(number){
  case 0: printf("您已进入账户余额查询功能！\n"); break;
  case 1: printf("您已进入取款功能页面！\n"); break;
  case 2: printf("您已进入存款功能页面！\n"); break;
  case 3: printf("您已进入其他业务页面！\n"); break;
  case 4: printf("您已选择返回上一层。\n"); break;
  default : printf("您的输入有误，请重新输入对应的业务序号！\n"); break;
  }
}else{
  printf("您的密码有误，请重新输入！\n");
}
return 0;
}