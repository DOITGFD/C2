#include<stdio.h>
int main(){
    int num;
    int count=0;
    printf("enter the number:");
    scanf("%d",&num);
    while(num!=0){
        num/=10;
        count++;
    }
    printf("Number of digits:%d/n",count);
    return 0;

}