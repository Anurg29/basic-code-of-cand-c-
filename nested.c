#include<stdio.h>
int main(){
    int a,sum1,sum2;
    printf("enter the no =");
    scanf("%d",&a);
    if(a>=1000 && a<=9999){
        printf("it is four digit no\n\n");
        sum1= a /100;
        sum2= a % 100;
        int sumfirst=(sum1/10)+(sum1%10);
        int sumlast=(sum2/10)+(sum2%10);
        if(sumfirst==sumlast){
            printf("the sum of first two digit is equal to last\n\n");
        }else{
            printf("the sum of first two digit is not equal to last\n\n");
        }
        }else{
            printf("the no is a four digit is no");
        }
    }