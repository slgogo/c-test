#include <stdio.h>
int main(){
float x1,x2;  /*声明两个浮点型变量*/
float sum,sub,mul,div;  /*声明浮点型变量用于计算*/
int r;  //求余数的结果是整数，所以定义r为整型
printf("请输入两个整数，用空格隔开：\n"); //输出一段文字
scanf("%f%f",&x1,&x2);  /*获取用户输入的两个数据变量，定义格式为浮点型输入数据*/
sum=x1+x2;  //运算加法并赋值
sub=x1-x2;  //运算减法并赋值
mul=x1*x2;  //运算乘法并赋值
div=x1/x2;  //运算除法并赋值
r=(int)x1%(int)x2;  /*求余运算必须为整数，所以使用(int)对输入的x1和x2进行强制类型转换对输入参数取整*/
printf("sum（求和）=%6.2f,sub（求差）=%6.2f\n",sum,sub);  /*输出加法运算和减法运算，%6.2f控制输出数字占6位宽，保留2位小数*/
printf("mul（乘法）=%6.2f,div（除法）=%6.2f\n",mul,div);  /*输出乘法运算和除法运算*/
printf("r（取余数）=%4d\n",r);
return 0;
}