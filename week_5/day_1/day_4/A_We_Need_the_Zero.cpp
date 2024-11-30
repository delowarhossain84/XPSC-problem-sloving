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
 int t;cin>>t;
 while(t--){
    int n;cin>>n;
    vector<int>v(n),v2;
    for(int i=0;i<n;i++) cin>>v[i];
    bool f=false;
        int Xor = 0;
        for(int j=0;j<n;j++){
            Xor^=v[j];
        }
        
        for(int j=0;j<n;j++){
           v[j]^=Xor;
        }
        int ans=0 ;
        for(int k=0;k<n;k++){
            ans^=v[k];
        }
        if(ans==0) cout<<Xor<<nl;
        else cout<<-1<<nl;
        
        // cout<<Xor<<nl;
 }
    return 0;
}