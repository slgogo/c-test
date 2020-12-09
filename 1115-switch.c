#include <stdio.h>
int main(){
int button;  //先设置整型变量
printf("%----请选择您要去的教学点----\n");
printf("1.  曲阜教学点\n");
printf("2.  梁山教学点\n");
printf("3.  爱儿美教学点\n");
printf("4.  天杰教学点\n");
printf("5.  职业学院教学点\n");
printf("请输入1-5号键选择教学点\n");
scanf("%d",&button);
switch(button){
case 1:printf("\n您选择了曲阜教学点！");break;
case 2:printf("\n您选择了梁山教学点！");break;
case 3:printf("\n您选择了爱儿美教学点！");break;
case 4:printf("\n您选择了天杰教学点！");break;
case 5:printf("\n您选择了职业学院教学点！");break;
default:printf("\n您的输入了非法数字！\n");break;
}
return 0;
}