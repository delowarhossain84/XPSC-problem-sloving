#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "Yes"
#define no "No"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
 int n;cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++) cin>>v[i];
 bool ans = false;
 for(int i=0;i<n;i++){
    if(is_sorted(v.begin(),v.end())) ans=true;
    else   rotate(v.begin(),v.begin()+1,v.end());

 
 }
 if(ans) cout<<yes<<nl;
 else cout<<no<<nl;
}
int main(){
   fastread()

int t;cin>>t;
while(t--){
   solve();
}
    return 0;
}