#include<bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
 
 int n;cin>>n;
 map<pair<string,string>,bool>mp;
 for(int i=0;i<n;i++){
    string s,s1;
    cin>>s>>s1;
    mp[{s,s1}]= true;
 }

 cout<<mp.size();

    return 0;
}