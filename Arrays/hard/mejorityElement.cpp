#include<iostream>
#include<vector>
using namespace std;

vector<int> majorityElement(vector<int> v) {
	int el1=1e9,el2=1e9;
	int ct1=0,ct2=0;
	int n=v.size();
	for(int i=0;i<n;i++){
		if(ct1==0&&v[i]!=el2){
			ct1=1;
			el1=v[i];
		}else if(ct2==0&&v[i]!=el1){
			ct2=1;
			el2=v[i];
		}else if(el1==v[i]){
			ct1++;
		}else if(el2==v[i]){
			ct2++;
		}else{
			ct1--,ct2--;
		}
	}
	vector<int>ans;
	ct1=ct2=0;
	for(int i=0;i<n;i++){
		if(el1==v[i]){
			ct1++;
		}else if(el2==v[i]){
			ct2++;
		}
	}
	if(ct1>n/3){
		ans.push_back(el1);
	}
	if(ct2>n/3){
		ans.push_back(el2);
	}
	if(ans.size()==2){
		if(ans[0]>ans[1])
		swap(ans[0],ans[1]);
	}
	return ans;
	
}
int main(){
vector<int>v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(1);
for(auto i:majorityElement(v)){
    cout<<i<<" ";
}
cout<<endl;
cout<<-(-1);
return 0;
}