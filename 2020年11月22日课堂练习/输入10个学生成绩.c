#include <stdio.h>
int main(){
  int a[10];  /*声明一个数组a。数组长度为10，用于存放10个成绩*/
  int i; /*声明一个计数器变量i，控制下标变化*/
  printf("请输入5个学生的英语成绩\n");
  for(i=0;i<5;i++)  /*计数器i从0开始循环计数，直到小于9，条件是小于10*/
  {
    scanf("%d",&a[i]);  /*获取当前元素并存入数组中*/
  }
  printf("输出当前输入的成绩：\n");
  for(i=0;i<5;i++)
  {
    printf("%-4d",a[i]);  /*循环输出当前i计数器对应的数组元素下标的元素*/
  }
printf("\n");
return 0;
}