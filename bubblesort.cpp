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
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    int n;
    int arr[100];
    cout<<"Enter total number of elements: ";
    cin>>n;
    cout<<"Enter array elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    cout << "Array sorted using Bubble Sort:" << endl;
    printArray(arr, n);
}