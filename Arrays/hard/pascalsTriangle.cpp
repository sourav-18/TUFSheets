#include<iostream>
using namespace std;
int nCr(int n,int r){
    long long res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}

void print(int row){
    int top=1,bottom=1;
    for(int i=0;i<row;i++){
        if(i==0||i==row-1)cout<<1<<" ";
        else{
            top=top*(row-i);
            bottom=bottom*i;
            cout<<top/bottom<<" ";
        }
    }
}
void printAll(int row){
    for(int j=0;j<=row;j++){
    int top=1,bottom=1;
    for(int i=0;i<j;i++){
        if(i==0||i==j-1)cout<<1<<" ";
        else{
            top=top*(j-i);
            bottom=bottom*i;
            cout<<top/bottom<<" ";
        }
    }
    cout<<endl;
    }
}
int main(){
int row=7,col=4;
cout<<nCr(row-1,col-1)<<endl;
print(row);
cout<<endl;
printAll(row);
return 0;
}