#include<iostream>
#include<vector>
using namespace std;
//memoization  tc--> 0(n) sc--> 0(n)[recursion stack Space] +0(n) [Array size]
int fun(int n,vector<int>&dp){
    if(n==0||n==1){
        return n;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=fun(n-1,dp)+fun(n-2,dp);
    return dp[n];
}
//tabulation tc--> 0(n) sc--> 0(n)[recursion stack Space] 
int tab(int n){
    vector<int>dp(n+1,-1);
    dp[0]=0,dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
// spaceoptimization tc--> 0(n) sc--> 0(1)
int space(int n){
    int pre1=1,pre2=0;
    for(int i=2;i<=n;i++){
        int current=pre1+pre2;
        pre2=pre1;
        pre1=current;
    }
    return pre1;
}
int main(){
int n;
cout<<"enter the number to get fibonachi number: ";
cin>>n;
vector<int>dp(n+1,-1);
cout<<n<<" output form memoization fibonachi number is: "<<fun(n,dp)<<endl;
cout<<n<<" output from tabulation fibonachi number is: "<<tab(n)<<endl;
cout<<n<<" output from spaceoptimization fibonachi number is: "<<space(n)<<endl;
return 0;
}