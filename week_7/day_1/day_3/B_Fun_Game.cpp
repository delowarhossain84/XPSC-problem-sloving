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
   int T;cin>>T;
   while(T--){
    
 int n;cin>>n;
 string s,t;
 cin>>s>>t;

if(s==t || s[0]=='1') {cout<<yes<<nl; continue;}

int pos = -1;
for(int i=0;i<n;i++){
    if(s[i]=='1'){
        pos = i;
        break;
    }
}

if(pos !=-1){
    bool f = true;
    for(int i=0;i<n;i++){
        if(s[i] !=t[i]){
            if(pos>i){
                f=false;break;
            }
        }
       
    }
if(f) cout<<yes<<nl;
else cout<<no<<nl;
}
else cout<<no<<nl;
   }

    return 0;
}