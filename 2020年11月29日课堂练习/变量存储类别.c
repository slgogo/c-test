#include <stdio.h>
#include <stdlib.h>
int fun(int a){
     int b=0;  /* 自动类型变量默认存储类别，动态存储方式，使用完存储空间释放。只在局部有效。 */
    static int c=3;  /* 静态变量，静态存储方式，局部有效 */
    b++;  /* 动态存储变量，局部有效，需要时使用过后释放变量，即每次使用都重新赋值使用。 */
    c++;  /* 静态存储变量，局部有效，固定存储空间，调用结束存储空间不释放。下次再使用保留上次赋值。*/
    printf("\nf函数中：a=%d,b=%d,c=%d\n",a,b,c);
    return (a+b+c);  /* 返回三个变量相加的结果 */
}
int main(){
    int a=2,i;  /* 赋值动态变量a的值为2，声明整型计数器i */
    for ( i = 0; i < 3; i++)  /*for循环3次*/
    {
        printf("\nmain函数中：第<%d>次循环：a=%d,f(a)=%d\n",i+1,a,fun(a));  /* 循环3次输出，3次调用fun函数查看a,b,c值的变化。 */
    }
    system("pause");
    return 0;
}