#include <stdio.h>
#include <stdlib.h>
void sort(int a[],int n); /*声明函数，形参为数组元素*/
int main(){
    int a[5];  /*定义一个长度为5的数组a*/
    int i;
    printf("输入5名学生的成绩：");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("输出输入的成绩：\n");
    for(i=0;i<5;i++){
        printf("%4d",a[i]);
    }
    printf("\n");
    sort(a,5);  /*使用函数传入实参数组给函数*/
    printf("输出排序后的列表：\n");
    for(i=0;i<5;i++){
            printf("%4d",a[i]);
    }
           printf("\n");
           system("pause");
           return 0;
}
void sort(int b[],int n){
        int i,j,t;
        for(i=0;i<n-1;i++){
            for(j=0;j<n-i-1;j++){
                if(b[j]<b[j+1]){
                    t=b[j];
                    b[j]=b[j+1];
                    b[j+1]=t;
                }
            }
        }
    }