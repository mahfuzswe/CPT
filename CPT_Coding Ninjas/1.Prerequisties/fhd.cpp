#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        string i,j;
        cin>>i>>j;

        if(i==j){
            cout<<"="<<endl;
        }else{
            if(i[i.length()-1]==j[j.length()-1]){
                if(i.length()>j.length()){
                    cout<<"<"<<endl;
                }else{
                    cout<<">"<<endl;
                }
            }else if(i[i.length()-1]=="L"){
                if(i.length()>j.length()){
                    cout<<">"<<endl;
                }else{
                    cout<<"<"<<endl;
                }
            }else{
            cout<<"="<<endl;
            }
        }else{
            if(i.[i.length()-1]=="M"){
                if(j[j.length()-1]=="S")
                    cout<<">"<<endl;
                else
                    cout<<"<"<<endl;
         }else{
                cout<<">"<<endl;
            }
        }
    }

    return 0;
}
