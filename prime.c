#include<stdio.h>
int main(){
    int a;
    printf("enter a prime number:");
    scanf("%d",&a);
    if(a%1==0||a%a==0){
        printf("%d is a prime number/n",a);
    }
    else{
        printf("%d is not a prime number/n",a);
    }
    return 0;
}