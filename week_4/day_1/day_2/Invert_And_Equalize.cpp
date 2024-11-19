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
       int t;cin>>t;
       while(t--){
        int n;cin>>n;
       string v;cin>>v;
        int z=0,o=0;
        for(int i=0;i<n;i++){
            if(v[i]=='0' && v[i+1]=='1') z++;
            else if(v[i]=='1' && v[i+1]=='0') o++;
        }
        cout<<max(z,o)<<nl;
       }

    return 0;
}