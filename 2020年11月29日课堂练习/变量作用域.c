#include <stdio.h>
#include <stdlib.h>
// void fun1(int n){
//     int m;
//     if (n>100)
//     {
//        m=n-10;
//     }else{
//         m=n+11;
//     }
//     printf("\n正在执行fun1函数，fun1函数中的变量m的值=%d\n",m);
// }
// int main(){
//     int m;
//     printf("输入一个整数：");
//     scanf("%d",&m);
//     printf("执行函数前，main函数内m的值为：%d\n",m);
//     fun1(m);
//     printf("执行函数后，main函数内m的值为：%d\n",m);
//     system("pause");
//     return 0;
// }
int a=3;
void fun(){
    a++;
    printf("fun函数中，a的值是：%d\n",a);
}
int main(){
    fun();
    a*=6;
    printf("main函数中a的值：a=%d",a);
    system("pause");
    return 0;
}