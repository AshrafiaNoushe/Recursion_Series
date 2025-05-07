#include<bits/stdc++.h>
using namespace std;
int sum_num(int num){
    if(num==1){
        return 1;
    }
    return num + sum_num(num-1);
}
int main()
{
    int n;
    cin>>n;
    int sum = sum_num(n);
    cout<<sum<<endl;
    return 0;
}