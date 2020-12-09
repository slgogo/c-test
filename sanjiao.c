#include <stdio.h>
#include <math.h>
int main(){
  float a,b,c,l,s;
  printf("请输入三条边的边长：");
  scanf("%f,%f,%f",&a,&b,&c);
  if(a>0&&b>0&&c>0&&a+b>c&&b+c>a&&a+c>b){  //判断a大于0，b大于0，c大于0，与a+b大于c，与b+c大于a,a+c大于b,每条边都不小0，且每两条边相加大于另一条边
    l=(a+b+c)/2;  //求周长的一半
	s=sqrt(l*(l-a)*(l-b)*(l-c));  //sqrt函数求平方根
	printf("s=%.2f\n",s); 
  }
  else
  printf("您所输入的数据不能构成三角形！\n");
  return 0;
}