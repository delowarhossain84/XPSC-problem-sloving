#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
 string s;cin>>s;
ll one = 0, zero = 0;

 for(int i=0;i<s.size();i++){
    if(s[i]=='0') zero++;
    else one++;
 }
 
 for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
        if(zero>0) zero--;
        else break;
    }
    else {
        if(s[i]=='0'){
            if(one>0) one--;
            else break;
        }
       
    }
 }
 cout<<one+zero<<nl;
}
int main(){
   fastread()

int t;cin>>t;
while(t--){
   solve();
}
    return 0;
}