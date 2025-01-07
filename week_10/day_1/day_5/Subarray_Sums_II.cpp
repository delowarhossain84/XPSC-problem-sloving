#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
 
ll n,k;
 cin>>n>>k;
 vector<ll>v(n);
 for(int i=0;i<n;i++) cin>>v[i];
 map<ll,ll>mp;
 mp[0] = 1;
 ll sum = 0,cnt=0;
 for(ll i=0;i<n;i++){
    sum+=v[i];
    cnt+=mp[sum-k];
    mp[sum]++;

 }cout<<cnt<<nl;

}
int main(){
   fastread();
   solve();

    return 0;
}