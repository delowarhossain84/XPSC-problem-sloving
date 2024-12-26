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
 vector<ll>v(n);
for(int i=0;i<n;i++) cin>>v[i];

ll g1 = 0,g2 = 0;
for(int i=0;i<n;i+=2){
    g1 = __gcd(g1,v[i]);
}
for(int i=1;i<n;i+=2){
    g2 = __gcd(g2,v[i]);
}
bool result = true;
ll ans = 0;
for(int i=1;i<n;i+=2){
    if(v[i]%g1 ==0){
        result = false;break;
    }
}
if(result) ans = g1;
else {
    result  =  true;
    for(int i=0;i<n;i+=2){
        if(v[i]%g2 == 0){
        result = false;break;
    }
}
    if(result) ans = g2;

}

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