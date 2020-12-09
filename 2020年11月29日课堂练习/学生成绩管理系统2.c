#include <stdio.h>
#include <stdlib.h>
#define N 6
void input(int a[],int n); 
void display(int a[]);  
void update(int a[],int n);  
int sum(int a[],int n);
void order(int a[],int n);
int main(){
    int a[N];
    printf("请输入6个参数给数组a:\n");
    input(a,N); 
    printf("列出输入的数组参数（未排序）：\n");
    display(a);  
    update(a,N);
    printf("修改55-60间的分数修改成60后的参数（未排序）\n");
    display(a); 
    printf("输出求和后的数值：%d\n",sum(a,N));
    printf("输出排序后的数值（冒泡降序）：\n");
    order(a,N);
    display(a); 
    system("pause");
    return 0;
}
void input(int b[],int n){
    int i;
  for(i=0;i<n;i++){
      scanf("%d",&b[i]);
  }
  printf("\n");
}
void display(int c[]){
    int i;
    for ( i = 0; i < N; i++)
    {
        printf("%4d",c[i]);
    }
    printf("\n");
}
void update(int d[],int n){
    int i;
    for(i=0;i<n;i++){
        if(d[i]>=55&&d[i]<60){
            d[i]=60;
        }

    }
}
int sum(int e[],int n){
  int i,sum=0;
  for ( i = 0; i < n; i++)
  {
      sum+=e[i];
  }
  return sum;
  printf("\n");
}
void order(int f[],int n){
    int i,j,t;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(f[j]<f[j+1]){
                t=f[j];
                f[j]=f[j+1];
                f[j+1]=t;
            }
        }
    }
}