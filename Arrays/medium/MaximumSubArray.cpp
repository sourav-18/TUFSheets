#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int> solve(int *arr,int n){
map<int,pair<int,int>>m;
for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
        sum+=arr[j];
        m[sum]={i,j};
    }
}
int maxi=-1234;
for(auto i:m){
    if(i.first>maxi)maxi=i.first;
}
vector<int>ans;
for(int i=m[maxi].first;i<=m[maxi].second;i++){
    ans.push_back(arr[i]);
}
return ans;
}
int main(){
int n=5;
int arr[n]={5,4,-1,7,8};

vector<int>ans=solve(arr,n);
for(auto i:ans){
    cout<<i<<" ";
}
return 0;
}