#include<iostream>
using namespace std;
int main(){
    int temp;
    cout<<"enter the temperature=";
    cin>>temp;
    if(temp<0){
        cout<<"freezing water";
    }else if(temp>10 && temp<=20){
        cout<<"very cold water";
    }else if (temp>=20 && temp<=30)
    {
        cout<<"naromal temperature";
    }else if(temp>=30 && temp<=40){
        cout<<" hot";
    }else if(temp>=40){
cout<<"very hot";
    }  
}