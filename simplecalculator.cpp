#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    float num1, num2;
    char op;
    cout<<"enter the  arithmetic operation to be performed";
    cin>>op;
    cout<<"enter the two numbers";
    cin>>num1;
    cin>>num2;
    switch(op){
        case'+':
        cout<<num1+num2;
        break;
        case'-':
        cout<<num1-num2;
        break;
        case'*':
        cout<<num1*num2;
        break;
        case'/':
        cout<<num1/num2;
        break;
        case'%':
        default:
        cout<<"no valid Operation";

        
    }
}