#include <stdio.h>
int main(){
float pass;
int j,number,password=123456;
printf("�����������������룺");
scanf("%d",&j);
if(j==password){
  printf("��������������ȷ����������ѡ������ҵ��\n");
  printf("0.����ѯ��1.ȡ�2.��3.����ҵ��4.������һ��:\t");
  scanf("%d",&number);
  switch(number){
  case 0: printf("���ѽ����˻�����ѯ���ܣ�\n"); break;
  case 1: printf("���ѽ���ȡ���ҳ�棡\n"); break;
  case 2: printf("���ѽ������ҳ�棡\n"); break;
  case 3: printf("���ѽ�������ҵ��ҳ�棡\n"); break;
  case 4: printf("����ѡ�񷵻���һ�㡣\n"); break;
  default : printf("�����������������������Ӧ��ҵ����ţ�\n"); break;
  }
}else{
  printf("���������������������룡\n");
}
return 0;
}