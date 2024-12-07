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
 cout<<(n/2 + n%2)<<nl;
 int l=1,r=3*n;

 while(l<r){
    cout<<l<<sp<<r<<nl;
    l+=3;r-=3;
 }

}

int main(){
   fastread()

int t;cin>>t;
while(t--){
    solve();
}
    return 0;
}