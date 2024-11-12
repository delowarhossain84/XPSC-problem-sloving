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
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
       
       int ans=INT_MAX;
       ans = min(v[n-3]-v[0],ans);
       ans = min(v[n-1]-v[2],ans);
       ans = min(v[n-2]-v[1],ans);

       cout<<ans<<nl;
       }
    return 0;
}