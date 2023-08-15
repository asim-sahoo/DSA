#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"Enter a Number: ";
    cin>>m;
    int n = m;
    int mask = 0;
    if(m==0){
        cout<<0;
    }
    while(n!=0){
        mask = (mask<<1) | 1;
        n = n >> 1;
    }
    int ans = (~m) & mask;
    cout<<ans;
}

