/*

1 2 3
4 5 6
7 8 9

*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of Row: ";
    cin>>n;
    int row = 1;
    int  count = 1;
    while(row<=n){
        int col = 1;
        while (col<=n)
        {
            cout<<count<<" ";
            count = count +1;
            col = col+1;
        }
        cout<<endl;
        row = row + 1;
    }

}