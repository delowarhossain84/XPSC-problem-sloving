#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
 int n;cin>>n;
 string s;cin>>s;
 map<char,int>mp;
 for(int i=0;i<s.size();i++){
    if(s[i]=='?') continue;
    mp[s[i]]++;
 }
 int result = 0;
 for(auto [x,y]:mp) {
    result+=min(n,y);
 }
 cout<<result<<nl;
}
int main(){
   fastread()

int t;cin>>t;
while(t--){
   solve();
}
    return 0;
}