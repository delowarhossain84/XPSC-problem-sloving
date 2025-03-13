#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int const n = 1e6+5;
vector<int>v(n);
void solve(){

for(int i=1;i<=n;i++){
    for(int j = i;j<=n;j+=i){
        v[j]++;
    }
}
}
int main(){
   fastread();

   solve();
int t;cin>>t;
while(t--){
    int m;cin>>m;
    cout<<v[m]<<nl;
}
    return 0;
}