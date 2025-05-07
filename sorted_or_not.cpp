#include<bits/stdc++.h>
using namespace std;
bool sorted_arr(vector<int>arr,int n){
    if(n==0 || n==1){
        return true;
    }
    return arr[n-1]>=arr[n-2] && sorted_arr(arr,n-1);


}
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sorted_arr(arr,n);\
    int ans = sorted_arr(arr,n);
    cout<<ans<<endl;
}