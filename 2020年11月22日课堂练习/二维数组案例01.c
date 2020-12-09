#include <stdio.h>
int main() {
	float a[5][2];
	int i, j;
	for (i = 0;i < 5;i++) 
	{
		for (j = 0; j < 2; j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
		printf("输出输入的二维数组：\n");
		for (i = 0;i < 5;i++)
		{
			printf("这是第%d个：", i + 1);
			for (j = 0;j < 2;j++) 
			{
				printf("%.2f",a[i][j]);
			}
			printf("\n");
		}
	return 0;
}