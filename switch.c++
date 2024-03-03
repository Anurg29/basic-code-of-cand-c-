#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n= ";
    cin>>n;
    switch (n%2)
    {
    case 0:
        cout<<"even no";
        break;
    
    case 1:
    cout<<"odd no";
        break;
    }
}