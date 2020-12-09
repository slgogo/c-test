#include <stdio.h>
void operate();
int main(){
  operate();
  return 0;
}
void operate(){
    printf("\t 欢迎进入学生成绩管理系统V2.1\n");
    printf("+++++++++++++++++++++++++++++++++++++++++\n");
     printf(" 请你选择操作类型:\n");
   printf("\t\t 1输入各学生成绩\n");
   printf("\t\t 2显示各学生成绩\n");
   printf("\t\t 3按要求修改学生成绩\n");
   printf("\t\t 4统计总成绩、平均成绩\n");
   printf("\t\t 5统计最高分\n");
   printf("\t\t 6统计优秀率、及格率\n");
   printf("\t\t 7全班学生成绩排序\n");
   printf("\t\t 0返回\n");
    printf("+++++++++++++++++++++++++++++++++++++++++\n");
}