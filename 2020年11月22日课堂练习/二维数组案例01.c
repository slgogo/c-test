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
		printf("�������Ķ�ά���飺\n");
		for (i = 0;i < 5;i++)
		{
			printf("���ǵ�%d����", i + 1);
			for (j = 0;j < 2;j++) 
			{
				printf("%.2f",a[i][j]);
			}
			printf("\n");
		}
	return 0;
}