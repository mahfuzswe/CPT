#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=100;
    cout<<&i<<endl;
    int *p = &i;
    cout<<p<<endl;
    cout<<*p<<endl;
    //cout<<sizeof(p)<<endl;

    i++;
    cout<<i<<endl;
    cout<<*p<<endl;

    int a=*p;
    a++;
    cout<<a<<endl;
    cout<<*p<<endl;

    i=12;
    cout<<i<<endl;
    cout<<*p<<endl;
    *p=23;
    cout<<i<<endl;
    cout<<*p<<endl;

    (*p)++;
     cout<<i<<endl;
    cout<<*p<<endl;


















    //float f=10.2;
    //float *pf=&f;
    //cout<<pf<<endl;

    //double d=122.34;
    //double *pd=&d;
    //cout<<pd<<endl;

    return 0;
}
