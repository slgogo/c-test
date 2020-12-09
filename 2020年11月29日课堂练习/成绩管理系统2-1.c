#include <stdio.h>
#include <stdlib.h>
#define N 2
#define L 3
void inland();  /*密码输入验证函数*/
void operate();  /*欢迎界面函数*/
void manage(int lis[N][L]);  /*业务选择函数*/
void input(int lis[N][L]);  /*输入信息函数*/
int display(int lis[N][L]);
void update(int lis[N][L]);
int sum(int lis[N][L]);
/*主函数开始*/
int main(){
    //int pass; /*定义获取密码变量传入密码验证函数*/
    int inp[N][L];  /*定义多维数组，参数为常量定义的参数*/
    inland();  /*运行密码验证函数，传入一个密码*/
    input(inp);
    manage(inp);
    system("pause");
    return 0;
}
/*密码输入验证函数*/
void inland(){  //接收传入密码
    int i=0,num,password=123456;  /*i计数器归零，设置num变量给下面输入时存储输入数据使用，使用do循环先执行一遍密码验证，如果密码正确直接进入下一步函数，break中断当前循环*/
    printf("请输入您的密码：");
    do{
        i++;
        if(i>3){printf("\n您已三次输错密码，请重新输入！\n");inland();break;};  /*判断如果当前计数器大于3,（输错3次）则执行输出一段话，然后再回到当前函数*/
        printf("\n");
        scanf("%d",&num);
        if(num==password){
            printf("\n\t密码输入正确！\n");
            operate();  //欢迎界面函数
            break;  //密码正确直接终端当前循环
        }else{
            printf("您输入的密码错误！");
        }

    }while (i<4); /*do开始i已经加一，这里第一位从下标[1]开始[3]结束，循环3次，验证3次密码，回到上面判断，当i等于4，循环第四次时，出现三次错误提示*/
    
}
/*欢迎界面函数*/
void operate(){
    int num;
    int a[N][L];
    printf("\t欢迎进入学生成绩管理系统\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("请先输入学生成绩：\n");

}
/*输入信息函数*/
void input(int lis[N][L]){
    // int a[N][L];  /*定义二维数组输出5行5列表格，用常量做参数值*/
    int i,j;  /*定义计数器变量*/
    printf("输入学生信息：学号、姓名、语文、数学、英语成绩：\n");
    printf("==========================================================\n");
    for(i=0;i<N;i++){
        for(j=0;j<L;j++){
            scanf("%d",&lis[i][j]);
        };
    };

}
/*业务选择函数*/
void manage(int lis[N][L]){  /*设置两个形参，第一个接收用户输入*/
    int sel;
    // printf("接收到输入的数组元素：%d%d：\n",lis[0][0]);
    printf("请选择您要操作的业务：\n");
    printf("0-输入成绩；1-输出成绩；2-查询某人成绩；3-修改成绩；4-统计成绩；5-查询最高分；6-统计优秀率，及格率；7-查询成绩排名；\n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    scanf("%d",&sel);
    switch(sel){
        case 0: input(lis);break;  /*进入数据输入函数*/
        case 1: display(lis);break;
        case 2: update(lis);break;
        case 3: sum(lis); break;
        default:printf("您的输入有误！请输出对应序列号！");
    }
}

/*显示输入信息函数*/
int display(int lis[N][L]){
    int i,j,num,n;
    // static int a[N][L];
    printf("显示输入的成绩表单：\n");
    for(i=0;i<N;i++){

        for(j=0;j<L;j++){
            printf("%4d",lis[i][j]);
             if((j+1)%5==0){
            printf("\n");
           };
        };
    };
    printf("\n");
    printf("=============开始查询成绩===================\n");
    update(lis);
    manage(lis);

    return 0;
}
/*查询成绩函数开始*/
void update(int lis[N][L]){

  int i,j,s=0,n;
  printf("请输入您要查询的序号：");
//   printf("当前的i值：%d\n",i);
//   printf("当前的N值：%d\n",N);
  scanf("%d",&n);
  for(i=0;i<N;i++){
    if(lis[i][0]==n){
    for(j=0;j<L;j++){
          s+=lis[i][j];
         };
         break;
    }
  }
  if(i<N){
       printf("%4d号成绩：%4d%4d\n ",lis[i][0],lis[i][1],lis[i][2]);
       printf("===============================================\n");
  }else{
      printf("您输入的号码不对！");
       }
  printf("%4d号总成绩：%4d分\n",lis[i][0],s);
}
int sum(int lis[N][L]){
    int i,j,s=0;
    float eva;
    for ( i = 0; i < 2; i++)
    {
        for(j=0;j<3;j++){
            printf("第%d个当前数组元素：%d\n",i+1,lis[i][j]);
        };
        printf("\n");
        // for(j=0;j<L;j++){
        //     s+=lis[i][1];
        // }
    }
    eva=s/N;
    printf("当前S的值：%.2f\n",s);
    printf("当前N的值：%.2f\n",N);
    printf("当前英语平均分：%.2f\n",eva);
    return 0;
}
void 

          