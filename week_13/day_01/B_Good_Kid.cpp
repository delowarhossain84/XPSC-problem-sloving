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

 for(int i=0;i<n;i++) cin>>v[i];
 ll ans = 1;
 sort(v.begin(),v.end());
     v[0] += 1;

 for(auto i:v) ans*=i;

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