#include<bits/stdc++.h>
using namespace std;

void g(int const &a){
    a++;
}

void f(const int *p){

}

int main()
{
    int const i = 10;
    int const *p = &i; //ulta read koro




    int j=12;
    int *p3 = &j;
    f(p3);
    g(j);


    int const *p2=&j;
    j++;
    cout<<*p2<<endl;




    return 0;
}

