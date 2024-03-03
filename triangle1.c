#include<stdio.h>
int main(){
    int l1,l2,l3;
    printf("enter the value of l1=");
    scanf("%d",&l1);
     printf("enter the value of l2=");
    scanf("%d",&l2);
     printf("enter the value of l3=");
    scanf("%d",&l3);
    int total=l1+l2+l3;
    if(total==180)
    {
printf("triangle is form\n");
if(l1==l2 || l2==l3 || l1==l3){
    printf("it is an equilateral triangle\n");
if(l1==l2 && l2==l3 || l1==l3){
   printf ("it is an isocleus triangle\n");
}else{
    printf ("it is an not isocleus triangle\n");
}
}
else{
    printf("it is not equilateral triangle\n");
}
    }
    else{
        printf("triangle is not form\n");
    }
}
//