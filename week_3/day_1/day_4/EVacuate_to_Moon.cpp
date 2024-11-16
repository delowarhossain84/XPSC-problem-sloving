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
        int n,m,h;
        ll ans=0;
        cin>>n>>m>>h;
       vector<ll>v1(n),v2(m);
       for(int i=0;i<n;i++) cin>>v1[i];
       for(int i=0;i<m;i++) cin>>v2[i];
       sort(v1.rbegin(),v1.rend());
       sort(v2.rbegin(),v2.rend());
       for(int i=0;i<min(n,m);i++){
        ll k = v2[i] * h;
        ans+=min(v1[i],k);
       }
        cout<<ans<<sp<<nl;
       }

    return 0;
}