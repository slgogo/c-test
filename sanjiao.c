#include <stdio.h>
#include <math.h>
int main(){
  float a,b,c,l,s;
  printf("�����������ߵı߳���");
  scanf("%f,%f,%f",&a,&b,&c);
  if(a>0&&b>0&&c>0&&a+b>c&&b+c>a&&a+c>b){  //�ж�a����0��b����0��c����0����a+b����c����b+c����a,a+c����b,ÿ���߶���С0����ÿ��������Ӵ�����һ����
    l=(a+b+c)/2;  //���ܳ���һ��
	s=sqrt(l*(l-a)*(l-b)*(l-c));  //sqrt������ƽ����
	printf("s=%.2f\n",s); 
  }
  else
  printf("������������ݲ��ܹ��������Σ�\n");
  return 0;
}