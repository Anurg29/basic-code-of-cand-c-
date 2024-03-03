#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no=";
    cin>>n;
    if(n>100){
        cout<<"greater";
    }else if(n==50){
        cout<<"equal";
    }else if(n<100){
        cout<<"smaller";
    }
    else{
        cout<<"not equal to any no";
    }
}