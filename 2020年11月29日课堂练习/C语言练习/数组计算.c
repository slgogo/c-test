#include<stdio.h>
#include <stdlib.h>
int main(){
int i;
int a[20]={1,1};  
for(i=2;i<20;i++){
    a[i]=a[i-2]+a[i-1];
}
for(i=0;i<20;i++){
    if(i%5==0){
        printf("\n");
    }
    printf("%d",a[i]);
}
printf("\n");
    system("pause");
    return 0;
}