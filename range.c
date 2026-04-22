// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a;
    printf("enter the A value \n");
    scanf("%d",&a);
    int res=(a>=1)&&(a<=10);
    printf("%d is in the range of 1-10 i.e is:%d",a,res); 

    return 0;
}