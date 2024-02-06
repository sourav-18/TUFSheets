#include<iostream>
using namespace std;
int rec(int *arr, int target,int s,int e){
    if(s>e)return -1;
    int mid=(s+(e-s)/2);
    if(arr[mid]==target)return mid;
    if(target<arr[mid]){
       return rec(arr,target,s,mid-1);
    }else{
        return rec(arr,target,mid+1,e);
    }
}
int search(int *nums, int target,int size) {
    int s=0,e=size-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(nums[mid]==target)return mid;
       else if(nums[mid]>target){
            e=mid-1;
        }else s=mid+1;
    }
    return -1;
}
int main(){
int n=4;
int arr[n]={6,1,2,4};
cout<<search(arr,6,n)<<endl;
cout<<rec(arr,6,0,n-1)<<endl;
return 0;
}