#include <stdio.h>
#include <stdlib.h>
void swap2(int b[]){
  int t;
  printf("b数组交换前数组元素：b[0]=%d,b[1]=%d,b[2]=%d\n",b[0],b[1],b[2]);
  t=b[1];b[1]=b[2];b[2]=t;
  printf("b数组交换后的数组元素：b[0]=%d,b[1]=%d,b[2]=%d\n",b[0],b[1],b[2]);
  printf("\n");

}
int main(){
    int a[]={3,6,9};
    printf("a数组交换前数组元素：a[0]=%d,a[1]=%d,a[2]=%d\n",a[0],a[1],a[2]);
    swap2(a);
    printf("a数组交换后数组元素：a[0]=%d,a[1]=%d,a[2]=%d\n",a[0],a[1],a[2]);
    system("pause");
    return 0;
}