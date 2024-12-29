#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
 ll l,r;
 cin>>l>>r;
    cout<<yes<<nl;
   while(l<r){
    cout<<l<<sp<<l+1<<nl;
    l+=2;
   }
}
int main(){
   fastread()

   solve();

    return 0;
}