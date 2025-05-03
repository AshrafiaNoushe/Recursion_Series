#include<bits/stdc++.h>
using namespace std;
int factorial_n(int n){
    if(n==0){
        return 1;
    }
    return n*factorial_n(n-1);
}
int main()
{
    int n;
    cin>>n;
    int facto = factorial_n(n);
    cout<<facto<<endl;
    return 0;
}