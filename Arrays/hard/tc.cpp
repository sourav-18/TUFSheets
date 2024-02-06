#include<iostream>
using namespace std;
int main(){
int n=5;
int ct=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       ct++;
    }
    for(int k=0;k<n;k++){
        // cout<<k<<" ";
        ct++;
    }
    // cout<<endl;
}
cout<<ct;
return 0;
}