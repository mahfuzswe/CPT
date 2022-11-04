#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("mixin.txt","r",stdin);
    freopen("mixout.txt","w",stdout);

    int n,d;   // 22,6
    cin>>n>>d;

    int div = n/d;   //22/6 = 3
    int rem = n%d;   //22%6 = 4

    if(rem == 0){
        cout<<div<<endl;
    }else{
        cout<<div<<" "<<rem<<"/"<<d<<endl;
    }

    return 0;
}
