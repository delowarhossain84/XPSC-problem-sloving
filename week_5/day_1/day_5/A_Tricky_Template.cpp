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
    string x,y,z;
    cin>>x>>y>>z;
    bool ans=false;

    for(int i=0;i<n;i++){
        if(x[i] != z[i] && y[i]!=z[i]) {
            ans =true;break;
        }
    }
    if(ans)cout<<yes<<nl;
    else cout<<no<<nl;
 }

    return 0;
}