#include <stdio.h>
int main() {
	int  a[5][2];
	int i, j;
	printf("�������ά���飬�������У�\n");
	for ( i = 0; i < 5; i++)
	{
		for (j = 0;j < 2;j++) 
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("�����ά���飺\n");
	for ( i = 0; i < 5; i++)
	{
		printf("��%d������",i+1);
		for (j = 0;j < 2;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}