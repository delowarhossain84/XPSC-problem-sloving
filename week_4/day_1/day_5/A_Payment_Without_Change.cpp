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
 while(t--){
   ll a,b,n,s;
    cin>>a>>b>>n>>s;
    ll mod;
    mod =s%n;
    if(a*n + b>=s && mod<=b) cout<<yes<<nl;
    else cout<<no<<nl;
 }

    return 0;
}