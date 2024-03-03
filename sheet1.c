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
    printf("percent is=%f\n",percent);
if(ds>=35){
        printf("pass in ds\n");
        if(ade>=35){
            printf("pass in ade\n");
if(m3>=35){
    printf("pass in m3\n");
    if(oop>=35){
        printf("pass in oop\n");
        if(dsgt>=35){
            printf("pass in dsgt\n");
            if(percent>=75){
                printf("pass in first class\n");
            }
            else{
                printf("below first class\n");
            }
        }else{
            printf("fail in dsgt\n");
        }
    }
    else{
        printf("fail in oop\n");
    }
    }
        else
  {
    printf("fail in m3\n");
  }
        }
        else{
       printf("fail in ade\n");
        }
    }
    else{
        printf("fail in ds\n");
    }
}