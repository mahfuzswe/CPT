#include<bits/stdc++.h>
using namespace std;

int main()
{   //constant int
    const int i=10; //when you're making a const int you need to initilized there.
    int const i2=10;


    //constant reference from a non const int
    int j=12;
    const int &k=j;
    j++;

    cout<<k<<endl;


    //constant reference from a const int
    int const j2=12;
    int const &k2=j2;


    //reference from a const int
    int const j3 =123;

    return 0;
}
