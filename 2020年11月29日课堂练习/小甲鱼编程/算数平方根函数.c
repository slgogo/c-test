#include <stdio.h>
#include <stdlib.h>
double power(double x,double y);
int main(){
    double x=3.0,y=3.0,z;
    z=power(x,y);
    printf("求X的y次方：\n");
    printf("%.1f的%.1f次方是%.1f\n",x,y,z);

    system("pause");
    return 0;
}
double power(double x,double y){
        double z=1;
        while(y){
            z*=x;
            --y;
        }
        return z;
}