#include <stdio.h>
int main()
{
float a[20],max,t; 
int aNumber=sizeof(a)/sizeof(a[0]);
int i,j,s1=0,s2=0;  
//printf("�����ǰ���������%d\n",aNumber);
printf("����30��ѧ���ĳɼ���");
for(i=0;i<=aNumber-1;i++)  
{
  scanf("%f",&a[i]);
  if((i+1)%10==0) 
  {
    printf("\n");
  }
}
for(i=0;i<=aNumber-1;i++)  
{
	if(a[i]>=55&&a[i]<60){ 
	  a[i]=60; 
	}
}
max=a[0]; 
for(i=0;i<=aNumber-1;i++)
{
	if(a[i]>max)  
	{
	  max=a[i]; 
	}
}
for(i=0;i<=aNumber-1;i++)
{
	if(a[i]>=85)
	{
	  s1++;  
	}
	if(a[i]>=60)
	{
	  s2++; 
	}
}
printf("��߷֣�%.2f\n 85�����ϣ�%d��\n �����ʣ�%.2f%%\n �ϸ�������%d��\n �ϸ���%.2f%%\n",max,s1,s1/(float)aNumber*100,s2,s2/(float)aNumber*100);

for(j=0;j<=(int)aNumber-1;j++)  
{
	for(i=0;i<=(int)aNumber-1-j;i++)  
	{
		if(a[i]<a[i+1])
		{
		  t=a[i];
		  a[i]=a[i+1];
		  a[i+1]=t;
		}
	}
}
printf("�ɼ�������б�\n");
for(i=0;i<=(int)aNumber-1;i++)
{
  printf("%.2f\n",a[i]);
  if((i+1)%10==0)
  {
    printf("\n");
  }
}
return 0;
}