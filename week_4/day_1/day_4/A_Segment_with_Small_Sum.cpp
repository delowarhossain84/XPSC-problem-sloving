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
 ll ans=0;
 cin>>n>>s;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  
  while(r<n){
    sum+=v[r];
    if(sum<=s){
        ans = max(ans,r-l+1);
        r++;
    }
    else{
        sum-=v[l];
        l++;r++;
    }
  }
  cout<<ans;


    return 0;
}