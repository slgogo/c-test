#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,sum=0,average,v[3];
    int a[5][3]={{78,89,96},{96,89,88},{68,78,98},{78,88,96},{88,76,77}};
    // printf("输入3行5列的表格：\n");
    // for(i=0;i<3;i++){
    //     for(j=0;j<5;j++){
    //         scanf("%d",&a[i][j]);
    //     }
    // }
    printf("显示输出列表：\n");
    for ( i = 0; i < 3; i++)  //循环3列
    {
        for ( j = 0; j < 5; j++)  //循环5行
        {
            sum+=a[j][i]; //每列（五人单科总成绩）
            
        }
        v[i]=sum/5;  //（单科五人平均成绩）
        sum=0;  //每循环一列，求和清零再求下一列总成绩
    }
    average=(v[0]+v[1]+v[2])/3;  // v[i]代表当前列平均成绩，三列平均成绩相加是所有科目平均成绩
    printf("第一列成绩：%d\n 第二列成绩：%d\n  第三列成绩：%d\n",v[0],v[1],v[2]);
    printf("总平均成绩：%d\n",average);
    system("pause");
    return 0;
}