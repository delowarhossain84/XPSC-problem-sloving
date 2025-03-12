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
 ll cnt = 0;
 for(int i = 1;i*i<=n;i++){
    if(n%i==0){
        cout<<i<<sp;
        if(i!=n/i) cout<< n/i<<sp;
    }
 }
 cout<<cnt<<nl;
}
int main(){
   fastread();

int t;cin>>t;
while(t--){
   solve();
}
    return 0;
}