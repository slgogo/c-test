#include <stdio.h>
int main(){
float height,weight,age;
double BMI,BFR;
char sex;
printf("����ȷ�������Ա�\n");
printf("�����Ӧ���֣�0-��\t1-Ů��\n");
scanf("%d",&sex);
switch(sex){
    case 0:  printf("����˧�磡������������ߣ��ף���");
		     scanf("%f",&height);
			 printf("�������������أ������");
			 scanf("%f",&weight);
			 printf("�������������䣺");
			 scanf("%f",&age);
			 BMI=weight/(height*height);
             BFR=1.2*BMI+0.23*age-5.4-10.8*1;
			 printf("˧�磡������֬���ǣ�%3.2f%��",BFR);
			 if(BFR<=20&&BFR>15){
			   printf("������֬�����������Ա�׼��Χ��\n");
			 }else if(BFR>=7&&BFR<15){
			   printf("������֬���������˶�Ա��Χ��\n");
			 }else if(BFR>20){
			   printf("������֬�����ڷ��ַ�Χ��\n");
			 }else{
			   printf("����������������Χ�������������ݿ�������\n");
			 }
			 break;
	case 1:  printf("������Ů��������������ߣ��ף���");
		     scanf("%f",&height);
			 printf("�������������أ������");
			 scanf("%f",&weight);
			 printf("�������������䣺");
			 scanf("%f",&age);
			 BMI=weight/(height*height);
             BFR=1.2*BMI+0.23*age-5.4-10.8*0;
			 printf("��Ů��������֬���ǣ�%3.2f%\n",BFR);
			 if(BFR<=25&&BFR>=20){
			   printf("������֬��������Ů�Ա�׼��Χ��\n");
			 }else if(BFR>=12&&BFR<25){
			   printf("������֬����Ů���˶�Ա��Χ��\n");
			 }else if(BFR>25){
			   printf("������֬�����ڷ��ַ�Χ��\n");
			 }else{
			   printf("����������������Χ�������������ݿ�������\n");
			 }
			 break;
    default: printf("�������������밴Ҫ�������Ա�ѡ������0��1��\n");
}
system("pause");
return 0;

}