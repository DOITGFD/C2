#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf(" enter a num:");
    scanf("%d",&a);
    printf(" enter a num:");
    scanf("%d",&b);
    printf(" enter a num:");
    scanf("%d",&c);
    if(a<b){
        printf("%d maximum value of three integer is:/n ",b);
    }
    else if(b<c){
        printf("%d miximum value of three integer is:/n",c);
    }
    else{
        printf("%d miximum value of three integer is:/n",a);
    }
    //else{
    //    printf("%d maximum value of three integer is:/n",b);
   // }
    return 0;

}