#include<iostream>
using namespace std;
int main(){
int n=5;
int arr[n]={2,3,-2,-1,-2};
int mul=1;
for(int i=0;i<n;i++){
    mul*=arr[i];
}
cout<<mul;
return 0;
}