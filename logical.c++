#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    char ch;
    cout<<"enter the value of num1:-";
    cin>>num1;
     cout<<"enter the value of num2:-";
    cin>>num2;
    cout<<"choose the operator="<<ch;
    cin>>ch;
     switch (ch)
    {
   case '+':
   cout<<num1+num2;
   break;
   case '-':
   cout<<num1-num2;
   break;
   case '*':
   cout<<num1*num2;
   break;
   case '/':
   cout<<num1/num2;
   break;
   case '%':
   cout<<num1%num2;
   break;
   default:
   cout<<"invalid operation";
    }
    }

