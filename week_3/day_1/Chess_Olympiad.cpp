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
       
  int  x,y,z;
    cin>>x>>y>>z;
 
   
        double t = x+ y*0.5;
        double o = z+ y*0.5;
      int  game = 4 - (x+y+z);
      t+=game;

    
    if(t>o) cout<<"Yes"<<nl;
    else cout<<"No"<<nl;
   
    return 0;
}