#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void subsets(int ind,int arr[],int n,vector<int>&ds)
{
    if(ind>=n){
        for(auto it:ds) cout<<it<<" ";
        if(ds.size()==0) cout<<"{}";
        cout<<"\n"; return;
    }
    ds.emplace_back(arr[ind]);
    subsets(ind+1,arr,n,ds);
    ds.pop_back();
    subsets(ind+1,arr,n,ds);
}

int main() {
    //cout<<"Hello World!";
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<int>ds;
    subsets(0,arr,n,ds);
}
