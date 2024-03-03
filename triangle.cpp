#include<iostream>
using namespace std;
int main(){
    int l1,l2,l3;
    cout<<"enter the value of l1=";
    cin>>l1;
     cout<<"enter the value of l2=";
    cin>>l2;
     cout<<"enter the value of l3=";
    cin>>l3;
    int total=l1+l2+l3;
    if(total==180){
        cout<<"triangle is form";
    }else{
        cout<<"triangle is not form";
    }
}