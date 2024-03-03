// logical operators
// && and, || or, ! not
/*
and (&&)
cond1 cond2 result
 1     1     1
 1     0     0
 0     1     0
 0     0     0

 or(||)
 cond1 cond2 result
 1      1     1
 1      0     1
 0      1     1
 0      0     0

 not(!)
 0  1
 1  0
*/
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number :- ");
    scanf("%d",&a);
    int b;
    printf("Enter the number :- ");
    scanf("%d",&b);
    int c;
    printf("Enter the number :- ");
    scanf("%d",&c);
    int result = (a>=40) || (b>=40) || (c>=40);
    printf("Result :- %d",result);
    return 0;
    
}