#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=10;
    int &j=i;
    int k=50;
    j=k;

    cout<<i<<endl;
    cout<<j<<endl;


    return 0;
}
