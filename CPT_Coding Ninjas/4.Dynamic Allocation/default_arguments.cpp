#include<bits/stdc++.h>
using namespace std;

int sum(int a[], int size, int si=0){ //here, "int si = 0" called "default argument". this means if you don't give argument it will pick default value.
    int ans = 0;
    for(int i=si; i<size; i++){
        ans+=a[i];
    }
    return ans;
}

int sum2(int a,int b,int c = 0,int d = 0){  //i can input 2 value , c,d will be 0 by default
    return a+b+c+d;
}

int main()
{
    int a[5];
    //input code for a
    for(int i=0; i<5; i++){
        cin>>a[i];
    }

    cout<<sum(a,5,3)<<endl;

    return 0;
}

