#include <stdio.h>
int main(){
int password=123456,pass;  /*设置两个整型密码变量，第一个用于验证密码，第二个用于接收键盘输入的密码*/
int i=0,flag=0,j;  /*i为计数器，设置循环三次的计数器，flag用于标记密码是否输入正确，j变量用于存储业务选择输入的变量*/
do /*do循环，先循环执行一次循环体，用来判断输入的密码是否正确，如果正确直接进入下一步骤，否则继续循环指定次数，这里限制为3次。*/
{ 
	i++;  /*i的初始值是0，do循环的首次循环0自增为1，第一次循环开始。*/
	printf("请输入您的密码：");
	scanf("%d",&pass);  /*获取用户输入密码*/
	if(pass==password)  /*判断如果用户输入的密码与系统内密码匹配则设置flag标签为1，则直接中断循环进入下一步骤。*/
	{  
	  flag=1;  //flag变成1,表示已经成功登陆系统
	  break;  //如果flag标签变成1，直接退出do循环。
	}else printf("密码错误，请重新输入！\n");
}while(i<3);  /*设置循环计数小于3次*/
if(flag==1)  /*判断do循环结果，如果flag等于1马上进入下一步骤，否则提示密码错误3次。*/
{
  printf("请选择您要办理业务的代号0,1,2,3：\n");
  printf("0：余额查询\n 1：取款\n 2：改密\n 3：电子转账\n");
  scanf("%d",&j);
  switch(j)
  {
  case 0:printf("您已进入余额查询系统\n"); break;
  case 1:printf("您已进入取款业务系统\n"); break;
  case 2:printf("您已进入改密业务系统\n"); break;
  case 3:printf("您已进入电子转账系统\n"); break;
  default:printf("您的输入有误，请重新输入！\n"); break;
  }
}else{
  printf("您三次密码输入错误，已经禁止登陆系统！\n");
}
return 0;
}