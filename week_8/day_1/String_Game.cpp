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
 string v;cin>>v;
 map<int,int>mp;
int zero=0,one=0;
 for(int i=0;i<n;i++){
    if(v[i]=='0') zero++;
    else one++;
 }
 int result = min(one,zero);
 if(result%2==0) cout<<"Ramos"<<nl;
 else cout<<"Zlatan"<<nl;

}
int main(){
   fastread()

int t;cin>>t;
while(t--){
   solve();
}
    return 0;
}