#include <stdio.h>
int main(){
char ch;
int sum=0;
while(1){
	ch=getchar();
  if(ch=='\n') break;
  if(ch>='A'&&ch<='Z') sum++;
}
printf("���ҵ� %d ����д��ĸ��\n",sum);
return 0;
}
