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
       priority_queue<int>pq;
        ll ans=0;
       for(int i=0;i<n;i++){
        if(v[i]>0) pq.push(v[i]);

        if(!pq.empty()){
            if(v[i]==0){ans+=pq.top();
            pq.pop();}
        }
       }

      cout<<ans<<nl;

       }

    return 0;
}