#include <stdio.h>
#include <stdlib.h>
void sort(int a[],int n);
int main()
{ 
   int a[5]; /*定义整型数组，存放5位学生的成绩*/
   int i;
   printf("请输入5位学生的成绩：\n");
   for(i=0;i<5;i++)
   {
	   scanf("%d",&a[i]);
   }
   printf("输出排序前5位学生的成绩：\n");
   for(i=0;i<5;i++)
   {
	   printf("%d  ",a[i]);
   }
   printf("\n");
   sort(a,5);  /*调用排序函数，第1个实参是数组名a,第2个实参是常量5*/
   printf("输出排序后5位学生的成绩：\n");
   for(i=0;i<5;i++)
   {
	   printf("%d  ",a[i]);
   }
   printf("\n");
   system("pause");
   return 0;
}
void sort(int b[],int n)  /*自定义函数，实现冒泡法学生成绩排序*/
{ 
  int i,j,t;
  for(i=0;i<n-1;i++)    /*外循环控制比较的轮数*/
    for(j=0;j<n-i-1;j++)    /*内循环控制每轮比较次数*/
       if(b[j]<b[j+1])
	   {
		   t=b[j];
		   b[j]=b[j+1];
		   b[j+1]=t;  
	   }  
}
