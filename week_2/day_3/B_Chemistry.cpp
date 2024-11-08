#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;cin>>t;
   while(t--){
       int a,b,c=0;
       cin>>a>>b;
       map<char,int>mp;
       string s;cin>>s;
      for(auto i:s){
        mp[i]++;
      }
      
      for(auto [k,val]:mp){
            if(val % 2 !=0) c++;
      }
      if(c-1<0) {c=0; cout<<yes<<nl;}
      else if (c-1<=b) cout<<yes<<nl;
      else cout<<no<<nl;
   }

    return 0;
}