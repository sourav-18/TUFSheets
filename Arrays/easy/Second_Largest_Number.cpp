#include <bits/stdc++.h> 
using namespace std;
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int maxi=a[0], mini=a[0];
    for(int i=1;i<n;i++){
        maxi=max(maxi,a[i]);
        mini=min(mini,a[i]);
    }
    int m1=INT_MIN,m2=INT_MAX;
    for(int i=0;i<n;i++){
        if(maxi>a[i]){
            m1=max(m1,a[i]);
        }
        if(mini<a[i]){
            m2=min(m2,a[i]);
        }
    }
    vector<int>ans;
    ans.emplace_back(m1);
    ans.emplace_back(m2);
    return ans;
}