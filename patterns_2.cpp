/*

1 1 1
2 2 2
3 3 3

*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of Row: ";
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while (col<=n)
        {
            cout<<row<<" ";
            col = col+1;
        }
        cout<<endl;
        row = row + 1;
    }

}