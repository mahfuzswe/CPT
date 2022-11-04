#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *p = new int;
    *p = 10;
    cout<<*p<<endl;

    double *pd = new double;
    *pd = 20;
    cout<<*pd<<endl;

    char *c = new char;
    *c = 'a';
    cout<<*c<<endl;

    int *pa = new int[50];


    int n;
    cout<<"Enter num of element"<<endl;
    cin>>n;
    int *pa2=new int[n];
    for(int i=0; i<n; i++){
        cin>>pa2[i];
    }
    int max = -1;
    for(int i=0; i<n; i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    cout<<max<<endl;

    return 0;
}
