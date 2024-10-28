#include<bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   string s;cin>>s;

    if(s.size()==4) cout<<s;
    if(s.size()==3) cout<<0<<s;
    if(s.size()==2) cout<<0<<0<<s;
    if(s.size()==1) cout<<0<<0<<0<<s;


    return 0;
}