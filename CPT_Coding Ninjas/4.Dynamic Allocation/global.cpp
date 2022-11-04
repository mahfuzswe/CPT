#include<bits/stdc++.h>
using namespace std;
int a;
void g(){
    a++;
    cout<<a<<endl;
}

void f(){
    cout<<a<<endl;
    a++;
}

int main()
{
    a=10;
    f();
    g();
    cout<<a<<endl;

    return 0;
}
