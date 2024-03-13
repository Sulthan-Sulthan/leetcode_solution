// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


void func(int arr[],int k,int n){
    k%=n;
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=0;i<n-k;i++){
        arr[i] =arr[i+k];
    }
    for(int i=(n-k);i<n;i++){
        arr[i]=temp[i-k-1];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i] <<" ";
    }
}

int main() {
    // Write C++ code here
    int n;
    cin >>n ;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    func(arr,k,n);




    return 0;
}