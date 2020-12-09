#include <stdio.h>
#include <stdlib.h>
void swap2(int b[]){
  int t;
  printf("交换前形参b数组序列：\n");
  printf("b[0]=%d,b[1]=%d,b[2]=%d\n",b[0],b[1],b[2]);
  printf("\n");
  t=b[1];
  b[1]=b[2];
  b[2]=t;
  printf("交换后形参b数组序列：\n");
  printf("b[0]=%d,b[1]=%d,b[2]=%d\n",b[0],b[1],b[2]);
  printf("\n");
}
int main(){
int a[]={2,5,8};
printf("交换前实参数组a序列：\n");
printf("a[0]=%d,a[1]=%d,a[2]=%d\n",a[0],a[1],a[2]);
printf("\n");
swap2(a);
printf("交换后实参a数组序列：\n");
printf("a[0]=%d,a[1]=%d,a[2]=%d\n",a[0],a[1],a[2]);
system("pause");
    return 0;
}