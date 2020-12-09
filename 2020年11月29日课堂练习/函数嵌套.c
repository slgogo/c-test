#include <stdio.h>
#include <stdlib.h>
int fun2(int m); /*声明函数内要使用的函数，函数体在main函数后使用*/
int fun1(int n){
    int y;  //定义y变量
    if(n>5){
        y=fun2(n);  /*如果实参大于5则把fun2(n)赋值给y,n的实参传给fun2作为实参*/
    }else{
        y=2*n;
    }
    return y;
}
int fun2(int m){
  int x;
  x=2*m;
  return x;
}
int main(){
    int a;
    scanf("%d",&a);
    printf("%d\n",fun1(a));
    system("pause");
    return 0;
}