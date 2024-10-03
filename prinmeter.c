#include<stdio.h>
int main() 
{
    int length;
    int width;
    //int perimeter = (length+width)*2 ;
    //int area=length*width;
    printf("enter length/n:");
    scanf("%d",&length);
    printf("enter width/n:");
    scanf("%d",&width);
    int perimeter = (length+width)*2 ;
    int area=length*width;
    printf("perimeter of rectangle is: %d/n",perimeter);   
    printf("area of the rectangle is: %d/n",area);
    
    return 0;
}