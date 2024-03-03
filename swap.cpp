#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"enter the value of a=";
    cin>>a;
    cout<<"before swaping value of a is"<<"_"<<a<<endl;
    cout<<"enter the value of b=";
    cin>>b;
    cout<<"before swaping value of b is"<<"_"<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"after swaping value of a is"<<" "<<a<<endl;
    cout<<"after swaping value of b is"<<""<<b;
}