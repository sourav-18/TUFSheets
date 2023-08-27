#include <bits/stdc++.h> 
using namespace std;
int largestElement(vector<int> &arr, int n) {
   int maxi=arr[0];
   for(int i=1;i<n;i++){
       maxi=max(arr[i],maxi);
   }
   return maxi;
}
int main(){
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    int n=arr.size();
    cout<<largestElement(arr,n);
}