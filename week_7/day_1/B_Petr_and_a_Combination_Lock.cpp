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

bool ans = false;
 for(int mask=0;mask<(1<<n);mask++){
    ll result=0;
    for(int j=0;j<n;j++){
        
        if((mask>>j)&1) result+=v[j];
        
         else result-=v[j];
    }
    if(result %360==0) {ans=true; break;}
 }
 if (ans) cout<<yes<<nl;
 else cout<<no<<nl;
}
int main(){
   fastread()


solve();

    return 0;
}