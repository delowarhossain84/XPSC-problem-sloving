#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    ll n,k;
    cin>>n>>k;
    map<ll,ll>mp;
    set<ll>s;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0) {
            s.insert(i);
            if(n/i !=i) s.insert(n/i);
        }
    }
    ll m =1;
    for(auto i:s){
        mp[m] = i;
        m++;
    }

   if(k<=mp.size()) cout<<mp[k]<<nl;
   else cout<<-1<<nl;
}
int main(){
   fastread()

   solve();
  return 0;
}