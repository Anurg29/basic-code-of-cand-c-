#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter the value of r=";
    cin>>r;
    int area=3.14*r*r;
    cout<<"area of circle="<<area<<endl;
    int c=2*3.14*r;
    cout<<"area of circumferene="<<c<<endl;
    int v=(4/3*3.14*r*r*r); 
    cout<<"volume of sphere="<<v;
}