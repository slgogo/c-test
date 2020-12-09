#include <stdio.h>
#include<stdlib.h>
//开始递归计算
// int sum(int n)
// {  int y;
//    if (n==1) y=1;
//    else y=sum(n-1)+n;
//    return (y);
// }
// int main()
// {  int n;
//    scanf("%d",&n);
//    printf("%d\n",sum(n));
//    system("pause");
//    return 0;
// }

//开始阶乘公式
// long Fia(int n)
// {  
//    long  y;
//    if (n==1 || n==0) y=1;
//    else y=Fia(n-1)*n;
//    return (y);
// }
// int main()
// {  
//    int n;
//    scanf("%d",&n);
//    printf("%ld\n",Fia(n));
//    system("pause");
//    return 0;
// }

//角谷猜想
int f(int n);
int main()
{ 
  int n;
  printf("input a number:");
  scanf("%d",&n);
  if (n==1) printf("end=%d\n",n);
  else f(n);
  system("pause");
  return 0;
}
int f(int n)
{ 
   if (n%2==0) 
   {
	   n=n/2;
   }
   else 
   {
	   n=n*3+1;
   }
   if (n==1) 
   {
	   printf("end=%d\n",n);
   }
   else 
   {
	   f(n);
   };
   return 0;
}
