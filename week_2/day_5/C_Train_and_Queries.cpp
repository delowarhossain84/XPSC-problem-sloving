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
        int n,k;
        cin>>n>>k;
        map<int,set<int>>mp;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            mp[x].insert(i);
        }

    //    for(auto [x,y]:mp){
    //     cout<<x<<sp<<" --> ";
    //     for(auto i:y){
    //         cout<<i<<" ";
    //     }cout<<nl;
     //}

     for(int i=0;i<k;i++){
        int a,b;
        cin>>a>>b;

        if(mp.find(a)==mp.end() || mp.find(b)==mp.end()) cout<<no<<nl;
        else{
            int lm =* mp[a].begin();
            int rm = *mp[b].rbegin();

            if(lm<rm) cout<<yes<<nl;
            else cout<<no<<nl;
        }
     }

       }


    return 0;
}