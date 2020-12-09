#include <stdlib.h>
#include <stdio.h>
#define N 2
#define L 7
#define M 7
void operate(int a[N][L]);
void input(int a[N][L]);
void display(int a[N][L]);
void score(int a[N][L]);
void sum(int a[N][L]);
void maxscore(int a[N][L]);
int main(){
    int a[N][L];
    int i,j,n;
    int en_max,ma_max,la_max;
    operate(a);
    // input(a);
    // display(a);
    system("pause");
    return 0;
}
void operate(int a[N][L]){
    int n;
    printf("\t欢迎进入学生成绩管理系统\n");
    printf("=======================================================\n");
    printf("输入数字选择对应功能：0-录入成绩；1-查询录入；2-查询成绩；3-统计成绩；4-统计最高分；\n");
    printf("=======================================================\n\n");
    scanf("%d",&n);
    switch (n)
    {
    case 0: input(a);break;
    case 1: display(a);break;
    case 2: score(a);break;
    case 3: sum(a);break;
    case 4: maxscore(a); break;
        /* code */
        
    
    default:  printf("您输入的数字错误！");
        break;
    }
}
void input(int lis[N][L]){
    int i,j,n;
    printf("输入成绩：学号，英语，数学,语文成绩。\n");
    printf("=======================================================\n");
    for ( i = 0; i < N; i++)
    {
        for(j=0;j<L;j++){
            scanf("%d",&lis[i][j]);
        }
    }
    printf("\n");
    operate(lis);
}
void display(int lis[N][L]){
    int i,j;
    printf("显示输入成绩列表：学号，英语，数学，语文\n");
    printf("==========================================================\n");
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%4d",lis[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    operate(lis);
}
void score(int lis[N][L]){
    int i,j,n,s=0;
    printf("输入要查询的学号：");
    scanf("%d",&n);
  
        for ( i = 0; i < N; i++)
        {
            if(lis[i][0]==n){
                for ( j = 1; j < L; j++)
                {
                    s+=lis[i][j];
                }
                break;
             }
        }
    printf("当前i的值是：%d\n",i);
    if(i<N){
        printf("%d号学生的成绩是：语文：%4d  数学：%4d  英语：%4d\n",(i+1),lis[i][1],lis[i][2],lis[i][3]);
    }else
    {
        printf("您输入的学号不存在！");
    }
    
printf("%d号学生的总成绩是：%d\n",(i+1),s);
printf("%d号学生的平均成绩是：%.2f\n",(i+1),s/3.0);
printf("========================================================\n");
operate(lis);  
}
void sum(int lis[N][L]){
    int i,j;
    for(i=0;i<N;i++){
        for(lis[i][4]=0,j = 1; j < 4; j++)
        {
            lis[i][4]+=lis[i][j];
        }
       
        lis[i][5]=lis[i][4]/3;
        if(lis[i][1]>=90&&lis[i][2]>=90&&lis[i][3]>=90){
            lis[i][6]=1;
        }else{
            lis[i][6]=0;
        }
    }

    printf("\n");
    printf("输出成绩统计表:学号-数学-语文-英语-总成绩-平均成绩-是否优秀\n");
    
    for(i=0;i<N;i++){
        for ( j = 0; j < M; j++)
        {
            printf("%6d",lis[i][j]);
        }
        printf("\n");
    }
    printf("=========================================\n\n");
    operate(lis);
}
void maxscore(int lis[N][L]){
    int i,j,max=lis[0][4],min=lis[0][4],sum=0;
    float ave;
    for(i=0;i<N;i++){
        for(lis[i][4]=0,j=1;j<4;j++){
             lis[i][4]+=lis[i][j];
        }
    }
    // printf("当前max参数值：%d\n",max);
    // printf("当前min参数值：%d\n",min);
    for(i=0;i<N;i++){
        for ( j = 0; j < M; j++)
        {
            if(lis[i][4]>max){
                max=lis[i][4];
            }
            if(lis[i][4]<min){
                min=lis[i][4];
            }
            // printf("输出当前列max的比较值：%d\n",max);
            // printf("输出当前列min的比较值：%d\n",min);
        }
        sum+=lis[i][j];
    }
    ave=sum/3.0;
    printf("+++++++++++统计本次考试最高分和最低分++++++++++++++++++++++++\n");
    printf("本次考试最高分：%d\n",max);
    printf("本次考试最低分：%d\n",min);
operate(lis);
}