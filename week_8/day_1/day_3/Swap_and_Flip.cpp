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
 string s,t;
 cin>>s>>t;
 int mis = 0;

 for(int i=0;i<n;i++){
    if(s[i] !=t[i]) mis ++;
 }
 if(mis % 2==0) cout<<yes<<nl;
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