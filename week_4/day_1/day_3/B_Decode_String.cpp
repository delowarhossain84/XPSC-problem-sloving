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
 string s,l;cin>>s;
 int k;
    for(int j = n-1 ;j>=0;j--){
        if(s[j]=='0') {
            k = (s[j-2]-'0')*10  +  s[j-1]-'0';
            j-=2;        
        }
        else  k =(s[j] - '0');
        l += char(k + 96) ;
    }
    reverse(l.begin(),l.end());
    cout<<l<<nl;
   }
    return 0;
}