#include <stdio.h>
int main(){
float s;
printf("���������ķ�����");  //���һ�λ�
scanf("%f",&s);  //��ȡ���������Ϊ�����ʽ
if(s>=90){
  printf("%3.2f�֣����ĳɼ������㣡\n",s);
}else if(s>=80){
  printf("%3.2f�֣����ĳɼ�������\n",s);
}else if(s>=70){
  printf("%3.2f�֣����ĳɼ�һ��㣡\n",s);
}else if(s>=60){
  printf("%3.2f�֣����ĳɼ������ˡ�\n",s);
}else{
  printf("%3.2f�֣����ĳɼ�������\n",s);
}
return 0;
}