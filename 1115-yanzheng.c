#include <stdio.h>
int main(){
int j;  /*����һ�����ͱ���*/
int password=123456,pass;  /*������������ʹ洢����ı���*/
printf("���������룺\n");
scanf("%d",&pass);  /*ʹ�������ȡ�����õ����������*/
if(pass==password){  /*if����ж�������������ͳ����ڵ����볣��ֵ��ͬ�������ڲ������*/
  printf("��ѡ��ҵ������0��1,2,3,��\n");
  printf("0:����ѯ\n 1��ȡ��\n 2������\n 3������ת��\n");
  scanf("%d",&j);
  switch(j){
  case 0: printf("����ѯ�����У����Ժ�...\n");break;
  }
}
return 0;
}