#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
 int n,k;
 cin>>n>>k;
 vector<int>v(n+1);
 for(int i=1;i<=n;i++) cin>>v[i];

int result = 0;
for(int i=1;i<=n;i++){
    int m  = abs(v[i]-i);
    
    if((abs(v[i]-i) % k !=0)) result++;
  //if (v[i] % k != i % k)  result++;
}

if(result == 0) cout << 0 <<nl;
else if(result == 2) cout << 1 << nl;
else cout << -1 <<nl;


}
int main(){
   fastread()

int t;cin>>t;
while(t--){
   solve();
}
    return 0;
}