#include <stdio.h>
int main(){
float weight,height,index;
printf("\n��������������(����)��");
scanf("%f",&weight);
printf("\n�������������(��)��");
scanf("%f",&height);
index=weight/(height*height);
printf("\n��������ָ��Ϊ��%.2f\n",index);
if(index<18){
  printf("��������ƫ�ݡ�\n");
}else if(index<25){
  printf("���������ڱ�׼��Χ��\n");
}else if(index<30){
  printf("����������΢�ַ�Χ��\n");
}else if(index<35){
  printf("�������ط�Χ�ڽ��ַ�Χ��\n");
}else if(index<40){
  printf("�������ط�Χ�ڷ��ַ�Χ��\n");
}else{
  printf("���������Ѿ��ڳ��ַ�Χ��");
}
return 0;
}