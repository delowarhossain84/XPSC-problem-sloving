#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
using namespace std;
int main(){
   fastread()
 ll n,s,l=0,r=0;
 ll sum=0;
 ll ans=LLONG_MAX;
 cin>>n>>s;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  
  while(r<n){
    sum+=v[r];
    while(sum>=s){
        ans = min(ans,r-l+1);  
        sum-=v[l];
        l++;
    }
      r++;
  }
  if(ans == LLONG_MAX) cout<<-1<<nl;
  else cout<<ans<<nl;
    return 0;
}