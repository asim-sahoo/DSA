#include <iostream>

using namespace std;

void printArray(int arr[],int n){
    cout<<"Array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[], int n) {
    int count = 0;
    for(int i=0; i<n;i++){
        for(int k=0;k<n;k++){
            if(arr[k]>arr[k+1]){
                count = count + 1;
                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
                cout<<"Swapped "<<arr[k]<<" "<<arr[k+1]<<endl;
        }
        
        }
    }
    cout<<"Swap Counter: "<<count<<endl;
}


int main(){
    int n;
    int arr[100];
    time_t start, end;
    cout<<"Enter total number of elements: ";
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    bubbleSort(arr, n);
    
    printArray(arr, n);

    return 0;
}