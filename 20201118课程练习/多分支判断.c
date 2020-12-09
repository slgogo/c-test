#include <stdio.h>
int main(){
float s;
printf("请输入您的分数：");  //输出一段话
scanf("%f",&s);  //获取输入参数，为浮点格式
if(s>=90){
  printf("%3.2f分，您的成绩很优秀！\n",s);
}else if(s>=80){
  printf("%3.2f分，您的成绩还不错！\n",s);
}else if(s>=70){
  printf("%3.2f分，您的成绩一般般！\n",s);
}else if(s>=60){
  printf("%3.2f分，您的成绩及格了。\n",s);
}else{
  printf("%3.2f分，您的成绩不及格！\n",s);
}
return 0;
}