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
       int n,m;
       cin>>n>>m;
       vector<int>v(n+1),v1(n+1);
       for(int i=1;i<=n;i++){
        cin>>v[i];
       }

            set<int>s;
       for(int i=n;i>0;i--){
            s.insert(v[i]);
            v1[i]=s.size(); //precompute
       }
      
      for(int i=1;i<=m;i++){
        int l;cin>>l;
        cout<<v1[l]<<nl;
      }

    //    for(int i=1;i<=m;i++){
    //     int l;cin>>l;
    //     set<int>s;
    //     for(int j=l;j<=n;j++){
    //         s.insert(v[j]);
    //     }
    //     cout<<s.size()<<nl;
    //    }
       


    return 0;
}