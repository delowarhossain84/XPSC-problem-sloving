#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
 int n,k;
 cin>>n>>k;

 auto ok = [&] (ll mid){
    return (mid - mid/n >=k);
 };
 ll l = 1, r = 2e9,ans=0,mid;
    while(l<=r){
        mid = l + (r - l)/2;
        if(ok(mid)){
            ans = mid;
            r = mid - 1;

        }
        else{
            l = mid  + 1;
        }
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