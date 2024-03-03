#include<iostream>
using namespace std;
int main(){
    float ds,m3,ade,oop,dsgt;
    cout<<"enter the mark of ds=";
    cin>>ds;
     cout<<"enter the mark of m3=";
    cin>>m3;
     cout<<"enter the mark of ade=";
    cin>>ade;
     cout<<"enter the mark of dsgt=";
    cin>>dsgt;
     cout<<"enter the mark of oop=";
    cin>>oop;
    float total=ds+m3+dsgt+ade+oop;
    float percent=total*100/500;
    cout<<"percent="<<percent<<endl;
    if(percent>40){
        cout<<"pass";
    }
    else{
        cout<<"fail";
    }
}