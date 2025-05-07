#include<bits/stdc++.h>
using namespace std;
void printNum(int n){
    if(n==1){
        cout<<1<<endl;
        return;
    }
    cout<<n<<" ";
    printNum(n-1);
}
int main()
{
    int num;
    cin>>num;
    printNum(num);//reverse output
    return 0;
}
// topic: 
// 1.Backtracling 
// 2.stack
// 3.Recursion Tree
