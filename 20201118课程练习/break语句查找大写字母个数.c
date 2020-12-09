#include <stdio.h>
int main(){
char ch;
int sum=0;
while(1){
	ch=getchar();
  if(ch=='\n') break;
  if(ch>='A'&&ch<='Z') sum++;
}
printf("共找到 %d 个大写字母。\n",sum);
return 0;
}
