#include<stdio.h>
int main(){
    //int array[];
    //int size= sizeof(array)/sizeof(array[0]);
    int sum=0;
    for(int i=0;i<80;++i){
        if(i%2!=0){
            sum +=i;
        } 
        printf("sum of the odd elements: %d/n",sum);
    }
    return 0;
}