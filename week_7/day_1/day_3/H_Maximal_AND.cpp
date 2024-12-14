#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
 const int B = 30;
 int n,k;
cin>>n>>k;
vector<int>v(n),bit(B+1);
for(int i=0;i<n;i++) cin>>v[i];

for(int i=0;i<n;i++){
    for(int j=B;j>=0;j--){
        if((v[i]>>j) & 1) bit[j]++;
        
    }
}
    ll result = 0;
    for(int i=B;i>=0;i--){
        if(bit[i]==n){
            result+=(1LL << i);
        }
        else{
            int need = n - bit[i];
            if(k>=need){
                result+=(1LL << i);
                k-=need;
            }
        }
    }
    cout<<result<<nl;
}
    
int main(){
   fastread()
int t;cin>>t;
while(t--){
    
    solve();
}
    return 0;
}