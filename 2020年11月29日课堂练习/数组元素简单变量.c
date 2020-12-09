#include <stdio.h>
#include <stdlib.h>
void swap1(int x,int y){
    int t;t=x;x=y;y=t;
    printf("形参值：x=%d,y=%d\n",x,y);
}
int main(){
int a[]={2,5,8};
printf("交换前：a[0]=%d,a[2]=%d\n",a[0],a[2]);
swap1(a[0],a[2]);
printf("交换后：a[0]=%d,a[2]=%d\n",a[0],a[2]);
    system("pause");
    return 0;
}