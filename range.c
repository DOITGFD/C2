#include<stdio.h>
int main(){
    int num;
    printf("input a number :");
    scanf("%d",&num);
        if (num<20){
            printf("Range [0,20] ");
        }
        else if(num<30){
            printf("RANGE[20,30]");
        }
        else{
            printf("enter the valid number");
        }
        
    return 0;
}