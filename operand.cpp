#include <bits/stdc++.h>
using namespace std;
int main() {
    char operand;
    float num1, num2;
    cout<<"Enter an operator : ";
    cin>>operand;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;

    switch(operand)
    {
        case '+':
            cout<<num1<< "+"<<num2<<"="<< num1 + num2;
            break;
        case '-':
            cout<<num1<<"-"<<num2<<"="<<num1-num2;
            break;
        case '*':
            cout<<num1<<"*"<<num2<<"="<<num1*num2;
            break;
        case '/':
            cout<<num1<<"/"<<num2<<"="<<num1/num2;
            break;
        default:
            cout<<"wrong";
    }

    return 0;
}
