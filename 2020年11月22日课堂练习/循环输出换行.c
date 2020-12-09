#include <stdio.h>
int main()
{
int i,j,t;
float a[20];
int n=sizeof(a)/sizeof(a[0]);
printf("麻溜滴!输入20个数字！：");
printf("当前数组个数：%d：",n);
printf("\n");

for(i=0;i<20;i++)
{
	scanf("%f",&a[i]);
}
printf("循环输出以上文字，够10个换行：\n");
for(i=0;i<20;i++)
{
  printf("%.2f\t",a[i]);
    if((i+1)%10==0)
  {
    printf("\n");
  }
}
printf("\n");

for(j=0;j<20-1;j++)
{
	for(i=0;i<20-1-j;i++)
	{
		if(a[i]<a[i+1])
		{
		  t=a[i];
		  a[i]=a[i+1];
		  a[i+1]=t;
		}
	}
}
printf("冒泡法给输入的参数按降序排序：\n");
for(i=0;i<20;i++)
{
  printf("%.2f\t",a[i]);
  if((i+1)%10==0)
{
  printf("\n");
}
}
return 0;
}