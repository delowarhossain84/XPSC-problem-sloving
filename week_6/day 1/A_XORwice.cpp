#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
 int x,y;
 cin>>x>>y;
 ll ans = (x^(x&y)) + (y^(x&y));
 cout<<ans<<nl;
}
int main(){
   fastread()

int t;cin>>t;
while(t--){
solve();
}
    return 0;
}