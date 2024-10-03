#include<stdio.h>
int main(){
    int n,m;
    printf("enter the rows:");
    scanf("%d",&n);
    printf("enter the cols:");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
             printf("%d",i);
        }
        printf("\n");
    }
    
    return 0;
     
}