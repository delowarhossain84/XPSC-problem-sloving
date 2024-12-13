#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
 ll n;cin>>n;
 int maxbit = __lg(n);
deque<ll>result;
 for(int i=0;i<=maxbit;i++){
    if((n>>i) & 1) {
        ll value = (n - (1LL<<i));
        if(value>0) result.push_front(value);
    }
 }
    result.push_back(n);
    cout<<result.size()<<nl;
 for(auto k:result) cout<<k<<sp;
 cout<<nl;
}
int main(){
   fastread()

int t;cin>>t;
while(t--){
    solve();
}
    return 0;
}