#include<bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 int t;cin>>t;
 while(t--){
    int x;cin>>x;
    string s;cin>>s;
    int b=0,b1=0,c=0;
   
    for(int i=0;i<s.size();i++){
        if(s[i]=='B' ){ b=i;break;}
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='B' ){ b1=i;break;}
    }
    cout<< b1 - (b - 1) <<endl;
 }

    return 0;
}