#include <stdio.h>
int main(){
int a=3,b=2,c=4,d=8,x;
a+=b*c;  //�������ֵ���ȼ��ڣ�a=a+(b*c)/3+(2*4)=11
b-=c/b;  /*b=b-(c/b)-2-(4/2)=0*/
printf("a��ֵ��%d\tb��ֵ��%d\n",a,b);
printf("%d,%d,%d,%d\n",a,b,c*=2*(a-c),d%=a);
return 0;
}