#include <stdio.h>
int main(){
#define GOUZHI 0.087;
float x1,x2,x3,x4,x5,x6;
double shou_30,dai_70,lixi,yue_24ben,yue_24jin,yue_36ben,yue_36jin,gouzhi,shanglu24,shanglu36;  
printf("��������6����Ҫ����Կո�ֿ�\n���ܶ�����ʣ�������Ѻ�𣩣����գ���Ӫ��֤�����������ߣ�:\n");
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
printf("\n�׸����=(��)%6.2f\n �����=(��)%6.2f\n ��Ϣ=(��)%6.2f\n 24�ڱ���=(��)%6.2f\n 24���¹�=(��)%6.2f\n 36�ڱ���=(��)%6.2f\n 36���¹�=(��)%6.2f\n ����˰=(��)%6.2f\n 24����·����=(��)%6.2f\n 36����·����=(��)%6.2f\n",
	   shou_30,dai_70,lixi,yue_24ben,yue_24jin,yue_36ben,yue_36jin,gouzhi,shanglu24,shanglu36);
printf("�׸���%6.2f\t ����Ѻ��%6.2f\t ����˰��%6.2f\t ���գ�%6.2f\t �������ߣ�%6.2f\t Ӫ��֤��%6.2f\n",shou_30,x3,gouzhi,x4,x6,x5);
return 0;
}