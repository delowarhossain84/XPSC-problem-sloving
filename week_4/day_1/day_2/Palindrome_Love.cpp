#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

bool is_palindrome(string &s){
        string k = s;reverse(k.begin(),k.end());return s==k;}

void solve(){
    int n;cin>>n;
    string s,sub; cin>>s;
    if(is_palindrome(s)) cout<<0<<nl;
    else if(s.size()==2) cout<<-1<<nl;
    else{
        int l=0,k=0;
        for(int i=0;i<n;i++){
            if(s[i] != s[n-i-1]) {l=i;k=n-i-1;break;}
        }
        sub = s.substr(l,k);
        if(!is_palindrome(sub)) cout<<1<<nl;
    
    }
}

int main(){
    fastread()
   
   int t;cin>>t;
   while(t--){
    solve();
   }
    return 0;
}