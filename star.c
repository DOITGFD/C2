#include<stdio.h>
int main(){
    int n,m;
    printf("enter the rows:");
    scanf("%d",&n);
    printf("enter the cols:");
    scanf("%d",&m);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
             printf("*");
        }
        printf("\n");
    }
    
    return 0;
     
}