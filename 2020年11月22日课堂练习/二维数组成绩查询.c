#include <stdio.h>
#define N 5
int main()
{
int a[N][4];
int i,j,s=0,n;
printf("输入学生成绩四列参数：\n");
/*开始输入成绩分*/
for(i=0;i<N;i++)
{
	for(j=0;j<4;j++)
	{
	  scanf("%d",&a[i][j]);
	}
}
printf("请输入您要查询的学号：");
scanf("%d",&n);
for(i=0;i<N;i++)  /*循环行对比把列相加*/
{
	if(a[i][0]==n) /*如果输入的参数和当前行的第一列（学号）对应则*/
	{
	  	for(j=1;j<4;j++)  /*循环成绩列，3门成绩的列，找到每列成绩相加赋值给求和参数*/
		{
	      s+=a[i][j];
		}
		break;  /*一旦找到求和完毕立即终端循环*/
	}
} 
if(i<N)  /*如果当前的循环的行在总行的范围内则输出查询到的成绩*/
{
  printf("%4d 号学成成绩：%4d%4d%4d%4d%4d\n",a[i][0],a[i][1],a[i][2],a[i][3],s,s/3);
}else
{
  printf("你要找的学生不存在。\n");
}
return 0;
}