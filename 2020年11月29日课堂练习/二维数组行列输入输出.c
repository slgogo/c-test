#include <stdio.h>
#include <stdlib.h>
#define H 2
#define L 3
void input(int lis[H][L]);
void display(int lis[H][L]);
int main(){
    int a[H][L];
    input(a);
    
    system("pause");
    return 0;
}
void input(int lis[H][L]){
        int i,j,n;
        printf("输入两行三列的数据：\n");
        for(i=0;i<H;i++){
        for(j=0;j<L;j++){
            scanf("%d",&lis[i][j]);
        }
    }
    display(lis);
}
void display(int lis[H][L]){
  int i,j;
  printf("显示输入的数据：\n");
  printf("==============================\n");
  for(i=0;i<H;i++){
      for(j=0;j<L;j++){
          printf("%4d",lis[i][j]);
      }
         if(0==i%3){
              printf("\n");
          }
  }
  printf("\n==============================\n");
}