#include<bits/stdc++.h>
using namespace std;

int searcher_fun(vector<int>&a,int target,int st,int end){
    if(st<=end){
        int mid = (st+end)/2;
        if(a[mid]==target){
            return mid;
        }else if(a[mid]<target){
            return searcher_fun(a,target,mid+1,end);
        }else if(a[mid]>target){
            return searcher_fun(a,target,st,mid-1);
        }
    }else{
        return -1;
    }
}

int binary_search(vector<int>&a,int size,int target){
    int st =0,end=size-1;
    return searcher_fun(a,target,st,end);
}

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target_index = binary_search(a,n,5);
    cout<<"Target found at: "<<target_index<<endl;
    return 0;
}
