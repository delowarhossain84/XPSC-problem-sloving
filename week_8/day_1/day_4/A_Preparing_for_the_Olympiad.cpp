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
 vector<int>v(n),v2(n);
 for(int i=0;i<n;i++) cin>>v[i];
 for(int i=0;i<n;i++) cin>>v2[i];

 ll result =0;

 for(int i=0;i<n-1;i++){
    int k = v[i] - v2[i+1];
    if(k > 0) result+=k;
 }
 result+=v[n-1];
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