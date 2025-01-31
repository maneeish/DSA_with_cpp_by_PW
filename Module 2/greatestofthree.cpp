#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a Three Number:";
    cin>>a>>b>>c;

    if( a>b && a>c){
    cout<<a<<"is Greater";
     }
    
        if(b>c && b>a)
        {
    cout<<b<<"is Greatest";
    }
     if(c>a && c>b)
        {
    cout<<b<<"is Greatest";
    }
}