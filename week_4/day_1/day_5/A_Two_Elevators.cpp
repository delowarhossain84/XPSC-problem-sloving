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
    ll a,b,c;
    cin>>a>>b>>c;
    ll k = abs(c-b)+ c;
    if(a<k) cout<<1<<nl;
    else if(a>k) cout<<2<<nl;
    else cout<<3<<nl;
 }

    return 0;
}