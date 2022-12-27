#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    int smallOutput1 = fib(n-1);
    int smallOutput2 = fib(n-2);

    return smallOutput1+smallOutput2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n; cin>>n;

    cout<<fib(n)<<endl;
    
    return 0;
}

