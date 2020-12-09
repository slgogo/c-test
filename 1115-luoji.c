#include <stdio.h>
int   main()
{
 int x , y , z;  //
 scanf("%d%d%d",&x,&y,&z);  //3,4,5
 printf("(1)  %d\n",'x'&&'y');  //(1) 1
 printf("(2)  %d\n",!(x<=y));  //£¨2£©0
 printf("(3)  %d\n",x||y+z&&y-z);  //(3) 0
 printf("(4)  %d\n",!((x<y)&&!z||1));  //(4) 1
 return 0;
}
