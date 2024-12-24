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
 deque<int>v(n);
 for(int i=0;i<n;i++) cin>>v[i];
 sort(v.begin(),v.end());
//  if(v.size()==2) {cout<<v[1]<<nl;return;}
// if(n%2==0)cout<<v[(n/2)+1]<<nl;
 cout<<v[n/2]<<nl;
 

}
int main(){
   fastread()

int t;cin>>t;
while(t--){
   solve();
}
    return 0;
}