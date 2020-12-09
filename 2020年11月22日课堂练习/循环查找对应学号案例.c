#include <stdio.h>
int main() {
	int  a[5][2];
	int i, j;
	printf("请输入二维数组，五行两列：\n");
	for ( i = 0; i < 5; i++)
	{
		for (j = 0;j < 2;j++) 
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("输出二维数组：\n");
	for ( i = 0; i < 5; i++)
	{
		printf("第%d个数：",i+1);
		for (j = 0;j < 2;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}