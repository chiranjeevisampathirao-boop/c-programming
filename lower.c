// Online C compiler to run C program online
#include <stdio.h>

int main() {
    char ch;
    printf("enter the character \n");
    scanf("%c",&ch);
    int res=!(ch>='A')&&(ch<='Z')||(ch>='a')&&(ch<='z');
    printf("%c is lower case alphabet i.e is:%d",ch,res); 

    return 0;
}
