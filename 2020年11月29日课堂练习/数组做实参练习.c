#include <stdio.h>
#include <stdlib.h>
#define N 6
void order(int a[],int n); 
int main(){
    int a[N];  
    int i;
    printf("输入6个参数：\n");
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    printf("输出排序前的参数：\n");
    for(i=0;i<N;i++){
        printf("%4d",a[i]);
    }
    printf("\n");
    order(a,N);
    printf("输出排序后的参数：\n");
    for (i = 0; i < N; i++)
    {
        printf("%4d",a[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
void order(int b[],int n){  
    int i,j,t;  
    for ( i = 0; i < N-1; i++)
    {
        for ( j = 0; j < N-1-i; j++)
        {
            if(b[j]<b[j+1]){
                t=b[j];
                b[j]=b[j+1];
                b[j+1]=t;
            }
        }
        
    }
}