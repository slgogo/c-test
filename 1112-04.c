#include <stdio.h>
#define PI 3.1416  //����һ�����ų���

int main(){  //�����ײ�
  float r,c,s;  //���������������ͱ���
  scanf("%f",&r);  //����Բ���ʵĺ���
  c=2*PI*r;  //
  s=PI*r*r;  //��R��ƽ������
  printf("c=%6.2f,s=%6.2f\n",c,s);
  return 0;
}