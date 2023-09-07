#include<iostream>
using namespace std;
int main(){
    double  num1,num2;
    char c;
    cout<<"enter the value of num1"<<endl;
    cin>>num1;
    cout<<"enter the operation"<<endl;
    cin>>c;
    cout<<"enter the value of num2"<<endl;
    cin>>num2;
    
    switch (c)
    {
    case '+':
        cout<<"the addition of number is "<<num1+num2<<endl;
        break;
     case '-':
        cout<<"the subtraction of number is "<<num1-num2<<endl;
        break;

        case '*':
        cout<<"the multiplication of number is "<<num1*num2<<endl;
        break;
        
        case '/':
        cout<<"the division of number is "<<num1/num2<<endl;
        break;
    
        default:
        cout<<"error";
        break;
    }
}
