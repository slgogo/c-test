#include <stdio.h>
int main(){
int button;  //���������ͱ���
printf("%----��ѡ����Ҫȥ�Ľ�ѧ��----\n");
printf("1.  ������ѧ��\n");
printf("2.  ��ɽ��ѧ��\n");
printf("3.  ��������ѧ��\n");
printf("4.  ��ܽ�ѧ��\n");
printf("5.  ְҵѧԺ��ѧ��\n");
printf("������1-5�ż�ѡ���ѧ��\n");
scanf("%d",&button);
switch(button){
case 1:printf("\n��ѡ����������ѧ�㣡");break;
case 2:printf("\n��ѡ������ɽ��ѧ�㣡");break;
case 3:printf("\n��ѡ���˰�������ѧ�㣡");break;
case 4:printf("\n��ѡ������ܽ�ѧ�㣡");break;
case 5:printf("\n��ѡ����ְҵѧԺ��ѧ�㣡");break;
default:printf("\n���������˷Ƿ����֣�\n");break;
}
return 0;
}