#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;
int main(){
   fastread()
 int t;cin>>t;
 while(t--){
    ll n;cin>>n;
    string s ="abcdefghijklmnopqrstuvwxyz";
    map<char,int>mp;
    for(int i=0;i<26;i++) mp[s[i]]=0;
    vector<ll>v(n) ;
    for(int i=0;i<n;i++) cin>>v[i];

   for(int i = 0;i<n;i++){
      for(auto [x,y]:mp){
         if(y == v[i] ) {cout<<x; mp[x]++; break;}
         }
      }cout<<nl;
   }

    return 0;
}