#include<iostream>
#include<vector>
using namespace std;
pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int s=0,e=n-1;
	int left=-1,right=-1;
	while(s<=e){
		int mid=(s+(e-s)/2);
		if(a[mid]==x){
			return {x,x};
		}else if(a[mid]>x){
			right=mid;
			e=mid-1;
		}else{
			s=mid+1;
		}
	}
	s=0,e=n-1;
	while(s<=e){
		int mid=(s+(e-s)/2);
		if(a[mid]==x){
			return {x,x};
		}else if(a[mid]>x){
			e=mid-1;
		}else{
			left=mid;
			s=mid+1;
		}
	}
	return {left==-1?-1:a[left],right==-1?-1:a[right]};
}
int main(){
vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5, x = 9;
    pair<int,int>ans= getFloorAndCeil(arr, n, x);
    cout<<ans.first<<" "<<ans.second<<" ";
return 0;
}