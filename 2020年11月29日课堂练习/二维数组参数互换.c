#include <stdio.h>
#include <stdlib.h>
int main(){
    int a[2][3]={{1,2,3},{4,5,6}};  /*定义一个二维数组，2行3列*/
    int b[3][2],i,j;  /*定义一个行列互换的数组长度，3行2列*/
    printf("输出数组a:\n");
    for(i=0;i<2;i++)  /*循环输出a数组*/
    {
        for(j=0;j<3;j++){
            printf("%5d",a[i][j]);
            b[j][i]=a[i][j];  /*每次循环a数组的行列下标都直接复制给b数组，实现行列下标的互换*/
        }
        printf("\n");
    }
    printf("输出数组：b\n");
    for(i=0;i<3;i++)  /*输出b数组3行2列*/
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%5d",b[i][j]);  /*已经调换好位置的行列直接正常输出*/
        }
        printf("\n");
    }
    system("pause");
    return 0;
}