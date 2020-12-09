#include <stdio.h>
int main(){
float height,weight,age;
double BMI,BFR;
char sex;
printf("请先确认您的性别：\n");
printf("输入对应数字，0-男\t1-女：\n");
scanf("%d",&sex);
switch(sex){
    case 0:  printf("您好帅哥！请输入您的身高（米）：");
		     scanf("%f",&height);
			 printf("请输入您的体重（公斤）：");
			 scanf("%f",&weight);
			 printf("请输入您的年龄：");
			 scanf("%f",&age);
			 BMI=weight/(height*height);
             BFR=1.2*BMI+0.23*age-5.4-10.8*1;
			 printf("帅哥！您的体脂率是：%3.2f%，",BFR);
			 if(BFR<=20&&BFR>15){
			   printf("您的体脂率在正常男性标准范围。\n");
			 }else if(BFR>=7&&BFR<15){
			   printf("您的体脂率在男性运动员范围！\n");
			 }else if(BFR>20){
			   printf("您的体脂率已在肥胖范围。\n");
			 }else{
			   printf("计算结果超出正常范围！您的输入数据可能有误！\n");
			 }
			 break;
	case 1:  printf("您好美女！请输入您的身高（米）：");
		     scanf("%f",&height);
			 printf("请输入您的体重（公斤）：");
			 scanf("%f",&weight);
			 printf("请输入您的年龄：");
			 scanf("%f",&age);
			 BMI=weight/(height*height);
             BFR=1.2*BMI+0.23*age-5.4-10.8*0;
			 printf("美女！您的体脂率是：%3.2f%\n",BFR);
			 if(BFR<=25&&BFR>=20){
			   printf("您的体脂率在正常女性标准范围。\n");
			 }else if(BFR>=12&&BFR<25){
			   printf("您的体脂率在女性运动员范围！\n");
			 }else if(BFR>25){
			   printf("您的体脂率已在肥胖范围。\n");
			 }else{
			   printf("计算结果超出正常范围！您的输入数据可能有误！\n");
			 }
			 break;
    default: printf("您的输入有误！请按要求输入性别选择数字0或1。\n");
}
system("pause");
return 0;

}