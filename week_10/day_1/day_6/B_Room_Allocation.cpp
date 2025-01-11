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
 int cnt = 0;
 for(int i=0;i<n;i++){
    cnt+=v[i]/2 +(v[i]%2);
 }
 cout<<cnt<<nl;
}
int main(){
   fastread()

int t;cin>>t;
while(t--){
   solve();
}
    return 0;
}