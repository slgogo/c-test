#include <stdio.h>
int main(){
int i,x[5];
printf("�����������������");
for(i=0;i<5;i++)
{
  scanf("%d",&x[i]);
}
printf("�������5�����ǣ�");
for(i=0;i<5;i++){
  printf("%-3d",x[i]);
}
printf("\n");
return 0;
}