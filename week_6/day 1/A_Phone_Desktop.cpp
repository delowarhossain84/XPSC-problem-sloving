#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
 int x,y;
 cin>>x>>y;
 ll m=0,n,k;
ll screens = (y + 1) / 2;

if(y%2 ==1) m = (y/2)*7 + 11;
else m = (y/2) * 7;


if(m>=x) cout<<screens<<nl;
else{
k = x - m;
screens +=  ceil(float(k)/15);
cout<<screens<<nl;
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