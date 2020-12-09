#include <stdio.h>
int main(){
float weight,height,index;
printf("\n请输入您的体重(公斤)：");
scanf("%f",&weight);
printf("\n请输入您的身高(米)：");
scanf("%f",&height);
index=weight/(height*height);
printf("\n您的体重指数为：%.2f\n",index);
if(index<18){
  printf("您的体重偏瘦。\n");
}else if(index<25){
  printf("您的体重在标准范围。\n");
}else if(index<30){
  printf("您的体重在微胖范围。\n");
}else if(index<35){
  printf("您的体重范围在较胖范围。\n");
}else if(index<40){
  printf("您的体重范围在肥胖范围。\n");
}else{
  printf("您的体重已经在超胖范围！");
}
return 0;
}