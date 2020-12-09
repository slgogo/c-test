#include <stdio.h>
int main()
{
int a[3][4]={{1},{5},{9}};
int b[3][4]={{1},{0,6},{0,0,11}};
int c[3][4];
int i,j;
for(i=0;i<3;i++)  /*循环行数，数组下标0开始到下标2，三行*/
{
	for(j=0;j<4;j++)  /*循环列数，四列*/
	{
	  c[i][j]=a[i][j]+b[i][j];  /*计算当前行的某列内容为其他其他两行的和*/
	}
}
for(i=0;i<3;i++)
{
	for(j=0;j<4;j++)
	{
		printf("%3d",c[i][j]);
	}
	printf("\n");
}

return 0;
}