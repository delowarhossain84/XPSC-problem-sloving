#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int n,t;

bool solve(ll k,vector<int>&m){
    // auto solve = [&] (ll k){
        ll cnt = 0;
        for(int i=0;i<n;i++){
            cnt+=(k / m[i]);
            if(cnt>=t) return true;
        }
        return false;
   }

int main(){
    fastread();
    cin>>n>>t;
   vector<int>v(n);
   for(int i=0;i<n;i++) cin>>v[i];

   ll l = 1,r = 1e18,ans=-1;   
   while(l<=r){
    ll mid = (l+r)/2;
    if(solve(mid,v)){
        ans  = mid;
        r = mid - 1;
    }
    else{
        l = mid + 1;
    }
   }
   cout<<ans<<nl;

    return 0;
}