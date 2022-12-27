#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    int smallOutput = factorial(n-1);
    int output = n*smallOutput;
    return output;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    cout<<factorial(4)<<endl;
    
    
    return 0;
}

