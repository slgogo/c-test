#include <stdio.h>
int main(){
int i=1; 
float x,s=0;  
while(i<7){ 
  printf("����6�ſγ̳ɼ���ÿ������һ�ΰ��س���ȷ�ϣ�\n��ǰ�ǵ� %d ������:",i);
  scanf("%f",&x);  
  s=s+x;
  i++;
}
printf("�ܳɼ�=%.2f��ƽ���ɼ�=%.2f\n",s,s/i);
return 0;
}