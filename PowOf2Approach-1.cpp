#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number:";
    cin>>n;
    int ans;
    for(int i = 0; i <= 30; i++){
        ans = pow(2,i);
        if(ans==n){
            cout<<"True";
            break;
        }
    }
    if(ans!=n){
    cout<<"False";}
}