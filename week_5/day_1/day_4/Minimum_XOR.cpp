#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;
int main(){
   fastread()
 int t;cin>>t;
 while (t--)
 {
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ll Xor=0;
    for(int i=0;i<n;i++){
        Xor =v[i] ^ Xor;
    }

    ll ans = Xor;

    for(int i=0;i<n;i++){
         ll result = (Xor ^ v[i]);
         ans = min(ans,result);

    }

    cout<<ans<<nl;
  
 }
 

    return 0;
}