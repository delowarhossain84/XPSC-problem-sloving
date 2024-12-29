#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
#define fastread() ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

bool is_prime(int x){
    if(x==1) return false;
    for(int i=2;i*i<=x;i++){
        if(x % i ==0) return false;
           
        }
    return true;
}

void solve(){
 int n;cin>>n;
 if(is_prime(n)) cout<<1<<nl;
 else if(is_prime(n-2) || n%2==0) cout<<2<<nl;
 else cout<<3<<nl;
 
    
}
int main(){
   fastread()

   solve();

    return 0;
}
