#include<stdio.h>
int main(){
    int a;
    printf("enter the no = ");
    scanf("%d",&a);
    if(a%5==0 && a%11==0){
        printf("the no is divisible");
    }else{
        printf("the no not is divisible");
    }
}