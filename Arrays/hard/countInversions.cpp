#include<iostream>
using namespace std;
void marge(int *arr,int left,int mid,int right){
    int size=right-left+1;
    int *newarr=new int[size]; 
    int s=left,e=mid+1;
    int index=0;
    while(s<=mid&&e<=right){
        if(arr[s]<arr[e]){
            newarr[index++]=arr[s++];
        }else{
            newarr[index++]=arr[e++];
        }
    }
    while (s<=mid)
    {
        newarr[index++]=arr[s++];
    }
    while (e<=right)
    {
        newarr[index++]=arr[e++];
    }
     s=left;
    for(int i=0;i<index;i++){
        arr[s++]=newarr[i];
    }
    
}
void print(int *arr,int s,int e){
    for (int  i = s; i <= e; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
void margeSoort(int *arr,int left,int right){
    if(right<=left)return;
    int mid=(left+right)/2;
    margeSoort(arr,left,mid);
    margeSoort(arr,mid+1,right);
    // print(arr,left,right);
    marge(arr,left,mid,right);
}
int main(){
int n=5;
int arr[n]={4,1,2,3,1};
margeSoort(arr,0,n-1);
// print(arr,0,n-1);
return 0;
}