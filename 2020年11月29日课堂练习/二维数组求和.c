#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[21][21];
    int m,n,sum=0;
      int i,j;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
            sum=0;
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            sum = sum+a[i][j];
        }
        printf("%d ",sum);
    }
    system("puase");
    return 0;
}