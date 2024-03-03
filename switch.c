#include<stdio.h>
int main(){
    int a;
    printf("enter the value of a:-");
    scanf("%d",&a);
    switch (a % 2)
    {
    case 0:
printf("the no is even");
        break;
    case 1:
    printf("the no is odd");
        break;
        default:
        printf("nothing");
    }
}