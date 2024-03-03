/*#include<stdio.h>
int main(){
    int i,n;
    printf("enter the value of n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",i);
    }
}*/

#include<stdio.h>
int main(){
    int i,n;
    printf("enter the value of n=");
    scanf("%d",&n);
    i=1;
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
}