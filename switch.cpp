#include <iostream>
using namespace std;
int main(){
    int a, b;
    char opt;

    cout<<endl;
    
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<endl;

    cout<<"Enter the second number: ";
    cin>>b;
    cout<<endl;

    cout<<"Enter the Operation: ";
    cin>>opt;
    cout<<endl;
    
    switch (opt)
    {
    case '+':
        cout<<"Ans: "<<(a+b)<<endl;
        break;
    case '-':
        cout<<"Ans: "<<(a-b)<<endl;
        break;
    case '*':
        cout<<"Ans: "<<(a*b)<<endl;
        break;
    case '/':
        cout<<"Ans: "<<(a/b)<<endl;
        break;
    case '%':
        cout<<"Ans: "<<(a%b)<<endl;
        break;
    default:
        break;
    }

}