#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
ll n,a,b,p,q;
 cin>>n>>a>>b>>p>>q;
 ll a1 = n/a;
 ll b1 = n/b;
 ll ab = n / ((a*b) / __gcd(a,b));
 if(p<q) a1-=ab;
 else b1-=ab;
 cout<<(a1 * p) + ( b1 * q);
}
int main(){
   fastread()
    solve();
    return 0;
}