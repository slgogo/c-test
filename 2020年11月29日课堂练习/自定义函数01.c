#include <stdio.h>
int max(int x,int y)
	{
	  int z;
	  z=x>y?x:y;
	  return z;
	}
int main()
{
  int a,b,c;
  a=25;
  b=63;
  c=max(a,b);
  printf("max=%d\n",c);
return 0;
}
