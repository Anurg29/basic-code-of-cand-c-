//1=even
//0=odd

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the no=";
    cin>>a;
    cout<<"enter the year=";
    cin>>b;
    int check=(a%5==0 && a%11==0);
    cout<<check<<endl;
    int leap=(b%4==0);
    cout<<leap;
}
