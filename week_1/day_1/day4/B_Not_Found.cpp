#include<bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   string s;
   cin>>s;
   set<char>sets;
   vector<char>v;
   vector<char>v2={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
   for(int i=0;i<s.size();i++){
    sets.insert(s[i]);
   }

   for(char i:sets){
    v.push_back(i);
   }

   for(int i=0;i<26;i++){
    if(v[i] !=v2[i]) {cout<<v2[i];break;}
   }
    if(v.size()==v2.size()) cout<<"None\n";
   
    return 0;
}