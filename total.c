#include<stdio.h>
int main(){
    float ds;
    printf("enter the mark of ds=");
    scanf("%f",&ds);
    float dsgt;
    printf("enter the mark of dsgt=");
    scanf("%f",&dsgt);
    float m3;
    printf("enter the mark of m3=");
    scanf("%f",&m3);
    float oop;
    printf("enter the mark of oop=");
    scanf("%f",&oop);
    float ade;
    printf("enter the mark of ade=");
    scanf("%f",&ade);
    float total=ds+ade+oop+m3+dsgt;
    float percent=total*100/500;
    printf("percent is = %f",percent);
    if(percent>40){
        printf("\npass");
    }else{
        printf("\nfail");
    }
}