#include<iostream>
using namespace std;
#include<map>
int subarraysWithSumK(int * a,int n, int b) {
    
    map<int,int>m;
    int sum=0;
    m[0]++;
    int ct=0;
    for(int i=0;i<n;i++){
        sum=sum^a[i];
        int x=sum^b;
        if(m.find(x)!=m.end()){
            ct+=m[x];
        }
    m[sum]++;
        
    }
    return ct;
}
int main(){
    int n=5;
int arr[n]={4,2,2,6,4};
cout<<subarraysWithSumK(arr,5,6);
return 0;
}