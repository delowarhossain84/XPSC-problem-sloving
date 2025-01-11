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
 vector<int>v(n);
 ll ans = INT64_MAX;
 for(int i = 0;i<n;i++){
    cin>>v[i];
 }
 for(int i=0;i<(1<<n);i++){
    ll a1=0,a2 = 0;
    for(int k = 0;k<n;k++){
        if((1<<k) & i){
           a1+=v[k];
        }
        else a2+=v[k]; 
    }
        ans= (min(abs(a1-a2),ans));
 }
 cout<<ans<<nl;
}
int main(){
   fastread()
solve();
    return 0;
}