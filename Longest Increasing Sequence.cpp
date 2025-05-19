#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int dp[N];
vector<int>a(N);
int subseq_inc(int i){
    if(i==0)return 0;
    int ans = 1;
    for(int j=0;j<i;++j){
        if(a[i]>a[j]){
            ans = max(ans,subseq_inc(j)+1);
        }
    }
    return ans;

}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    int ans = 0;
    for(int i=0;i<n;++i){
        ans = max (ans,subseq_inc(i));
    }
    cout<<ans<<endl;
}