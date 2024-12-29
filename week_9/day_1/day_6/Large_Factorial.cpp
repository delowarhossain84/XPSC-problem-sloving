#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
const int mod = 1e9+7;
void solve(){
 int n;cin>>n;
 ll fact =1;
 for(int i=1;i<=n;i++){
    fact=(fact % mod * i % mod)% mod;
 }cout<<fact;
}
int main(){
   fastread()

int t;cin>>t;
while(t--){
   solve();
}
    return 0;
}