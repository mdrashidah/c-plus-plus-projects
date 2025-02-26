#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int sp,cp,rs ;
    cout<<"enter the selling price of the product"<<endl;
    cin>>sp;
    cout<<"enter the cost price of the product"<<endl;
    cin>>cp;
    rs=sp-cp;

    if(rs>=0)
    {
        cout<<"Profit of Rs."<<rs<<"is earned" <<endl;
    }
    else if(rs<=0)
    {
        cout<< "Rs."<<rs << "is loss" <<endl;
    }
    else
    {
        cout<<"No profit no loss"<<endl;
    }
    
}