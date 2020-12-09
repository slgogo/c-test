#include <stdio.h>
#include <stdlib.h>
void skin();  /*先声明函数，因函数定义main函数下部需先声明函数在函数运行之前*/
int main(){
    skin();
    system("pause");
    return 0;
}
void skin(){  /*无参数无返回值函数*/
  printf("\t欢迎进入管理系统界面\n");
  printf("+++++++++++++++++++++++++++++\n");
  printf("请选择您的业务序号：\n");
  printf("0-存款，1-取款，2-余额，3-返回\n");
  printf("+++++++++++++++++++++++++++++\n");
}