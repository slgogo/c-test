#include <stdio.h>
int main()
{
int a[10];  /*定义一个长度为20的数组*/
int i,j,t;  /*定义每轮对比次数i，和轮数的变量j*/
printf("请输入10个数字：");
for(i=0;i<10;i++)  /*定义for循环遍历当前a数组0下标-9下标10个数*/
{
  scanf("%d",&a[i]);  /*为数组元素输入10个排序参数*/
  printf("\n");
}

for(j=0;j<=10-1;j++)  /*定义排序轮数n-1=9，所以排序轮数为数组下标为0-9的数*/
{
	for(i=0;i<=10-1-j;i++)  /*定义每轮排序次数范围，从下标a[0]开始，到下标小于等于n-1-j*/
	{
		if(a[i]>a[i+1])  /*如果当前的比较数大于下一个比较数则进行位数交换*/
		{
		  t=a[i];
		  a[i]=a[i+1];
		  a[i+1]=t;
		}
	}
}
printf("排序后的数字序列：");
for(i=0;i<=10-1;i++)
{
  printf("%-4d",a[i]);
}
printf("\n");
return 0;
}