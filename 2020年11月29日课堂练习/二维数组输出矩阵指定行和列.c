#include <stdio.h>
#include <stdlib.h>
int main(){
int i,j,a[3][3];
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("a[%d][%d]",i,j);
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        if(1==j||1==i)
            {
                printf("%-6d",a[i][j]);
            }else{
                printf("%-6c"," ");
            }
    }
    printf("\n");
}
    system("pause");
    return 0;
}