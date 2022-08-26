// Rishabh Pandey
// 2010991428
// Set-3
// Q2

#include<iostream>
using namespace std;
#include<array>

void pairSum(int* arr, int n, int target){
    pair<int,int> ans;
    bool flag=false;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==target){
                ans.first=arr[i];
                ans.second=arr[j];
                flag=true;
                cout<<ans.first<<" "<<ans.second<<endl;
            }
        }   
    }
    if(flag==false){
        cout<<"pair not found"<<endl;
    }
}


int main()
{   
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
    
    cout<<"Enter target: ";
    int target;
    cin>>target;

    pairSum(arr,n,target);
    return 0;
}