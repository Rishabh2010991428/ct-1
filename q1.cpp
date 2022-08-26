// Rishabh Pandey
// 2010991428
// Set-3
// Q1

#include<iostream>
using namespace std;

void printArray(int* arr,int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=1; i<n; i++){
        for(int j=i+1; j<n; j++){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
}

int main()

{
    // for input
    cout<<"enter size of array: ";
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter elements of array: ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    printArray(arr,n);


    return 0;
}