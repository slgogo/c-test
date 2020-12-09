#include <stdio.h>
int main(){
#define GOUZHI 0.087;
float x1,x2,x3,x4,x5,x6;
double shou_30,dai_70,lixi,yue_24ben,yue_24jin,yue_36ben,yue_36jin,gouzhi,shanglu24,shanglu36;  
printf("请您输入6个必要金额以空格分开\n（总额）（利率）（续保押金）（保险）（营运证）（上牌上线）:\n");
scanf("%f%f%f%f%f%f",&x1,&x2,&x3,&x4,&x5,&x6);
shou_30=x1*0.30;  
dai_70=x1*0.70;  
lixi=dai_70*x2;  
yue_24ben=dai_70/24;  
yue_24jin=yue_24ben+lixi;  
yue_36ben=dai_70/36;  
yue_36jin=yue_36ben+lixi;  
gouzhi=x1*GOUZHI; 
shanglu24=shou_30+x3+gouzhi+x4+x5+x6; 
shanglu36=shou_30+x3+gouzhi+x4+x5+x6;
printf("\n首付金额=(￥)%6.2f\n 贷款额=(￥)%6.2f\n 利息=(￥)%6.2f\n 24期本金=(￥)%6.2f\n 24期月供=(￥)%6.2f\n 36期本金=(￥)%6.2f\n 36期月供=(￥)%6.2f\n 购置税=(￥)%6.2f\n 24期上路费用=(￥)%6.2f\n 36期上路费用=(￥)%6.2f\n",
	   shou_30,dai_70,lixi,yue_24ben,yue_24jin,yue_36ben,yue_36jin,gouzhi,shanglu24,shanglu36);
printf("首付：%6.2f\t 续保押金：%6.2f\t 购置税：%6.2f\t 保险：%6.2f\t 上牌上线：%6.2f\t 营运证：%6.2f\n",shou_30,x3,gouzhi,x4,x6,x5);
return 0;
}