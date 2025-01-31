#include<iostream>
using namespace std;
int main(){
    int CP,SP;
    cout<<"Enter the Cost Price:";
    cin>>CP;
    cout<<"Enter the Selling Price:";
    cin>>SP;
    if(SP>CP){
    cout<<"Profit = "<<SP-CP;
    
     }
    if(CP>SP)
    {
    cout<<"Loss = "<<CP-SP;
    }
    if(SP==CP)
    {
        cout<<"No Profit, No Loss!";
    }
}