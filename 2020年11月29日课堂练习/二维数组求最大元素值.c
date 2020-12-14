#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,row=0,colum=0;
    int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};  /*定义3行4列数组并赋值*/
    int max=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(a[i][j]>max)
            {
               max=a[i][j];
            }
            row=i;
            colum=j;
        }
        printf("\n");
    }
    printf("当前数组元素最大值：%4d,当前行号：%4d,当前列号：%d\n",max,row,colum);
    system("pause");
    return 0;
}