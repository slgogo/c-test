#include <stdio.h>
int main()
{
int i,j,t;
float a[20];
int n=sizeof(a)/sizeof(a[0]);
printf("�����!����20�����֣���");
printf("��ǰ���������%d��",n);
printf("\n");

for(i=0;i<20;i++)
{
	scanf("%f",&a[i]);
}
printf("ѭ������������֣���10�����У�\n");
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
printf("ð�ݷ�������Ĳ�������������\n");
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