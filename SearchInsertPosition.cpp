#include <iostream>
using namespace std;


int func(int arr[],int k,int n){
    int low = 0;
    int high = n-1;
    int mid =(low+high)/2;
    while(low<high){
        if(k==arr[mid]){
            return mid;
        }
        else if(k<arr[mid]){
            high= mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i+=){
        cin>>a[i];
    }
    int k;
    cin>>k;
    cout<<func(a,k,n);


    return 0;
}

// ----------------JAVA CODE------------------------------

class Solution {
    public int searchInsert(int[] nums, int target) {
          int low =0;
        int high = nums.length -1;
        
        while(low<=high){
            int mid =low +(high -low)/2;
            if(nums[mid]==target){
                return  mid;
            }else if(target<nums[mid])
                high = mid-1;
            else 
                low =mid+1;
        }
        return low;
    }
}