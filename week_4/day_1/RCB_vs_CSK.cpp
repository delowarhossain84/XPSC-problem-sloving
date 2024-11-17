#include<bits/stdc++.h>
#define nl "\n"
#define ll long long int
#define yes "YES"
#define no "NO"
#define sp  " " 
using namespace std;
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
       int x,y;
       cin>>x>>y;
       int w = x-y;
       if(w>=18) cout<<"RCB"<<nl;
       else cout<<"CSK"<<nl;

    return 0;
}